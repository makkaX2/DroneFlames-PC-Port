#include "bridge_core.hpp"
#include "special_interfaces.hpp"
#include "abi_config.hpp"
#if defined(DF_BRIDGE_USE_NATIVE_HOOK)
#include "df_native_dispatch.h"
#endif
#include <array>
#include <atomic>
#include <cstring>
#include <cstdio>
#include <map>
#include <mutex>
#include <shared_mutex>
#include <tuple>
#include <unordered_map>
#include <utility>

namespace dfbridge {
namespace {
#ifndef DF_BRIDGE_FAST_NATIVE_CACHE
#define DF_BRIDGE_FAST_NATIVE_CACHE 0
#endif
#ifndef DF_BRIDGE_DIAGNOSTIC_COUNTERS
#define DF_BRIDGE_DIAGNOSTIC_COUNTERS 1
#endif
struct NativeEntry { NativeHandler handler{};std::string name; };
#if DF_BRIDGE_FAST_NATIVE_CACHE
using NativeMutex=std::shared_mutex;
using NativeReadLock=std::shared_lock<NativeMutex>;
#else
using NativeMutex=std::mutex;
using NativeReadLock=std::unique_lock<NativeMutex>;
#endif
NativeMutex native_mutex;
std::mutex state_mutex,error_mutex;
std::unordered_map<uint64_t,NativeEntry> natives;
std::atomic_uint64_t native_epoch{1};
#if DF_BRIDGE_FAST_NATIVE_CACHE
struct NativeCacheSlot {uint64_t target=0,epoch=0;NativeHandler handler=nullptr;};
thread_local std::array<NativeCacheSlot,64> native_cache{};
#endif
GDExtensionInterfaceGetProcAddress get_proc=nullptr;
std::atomic_uint64_t call_count{};
std::string error_text;
std::vector<std::unique_ptr<ClassRecord>> classes;
std::vector<std::unique_ptr<MethodRecord>> methods;
std::vector<std::unique_ptr<CallableRecord>> callables;
std::unordered_map<void*,CallableRecord*> callables_by_proxy;
std::vector<std::unique_ptr<ScriptRecord>> scripts;
std::unordered_map<std::string,ClassRecord*> classes_by_name;
std::unordered_map<void*,ClassRecord*> classes_by_instance;
std::unordered_map<void*,ScriptRecord*> scripts_by_proxy;
std::map<std::tuple<ClassRecord*,uint64_t,void*,bool>,std::unique_ptr<VirtualRecord>> virtual_calls;
using BindingKey=std::pair<void*,void*>;
std::map<BindingKey,BindingRecord*> bindings_by_object,bindings_by_binding;
std::map<std::tuple<uint64_t,uint64_t,uint64_t>,std::unique_ptr<BindingRecord>> binding_records;
struct BindingRequest {void* token;void* object;BindingRecord* record;};
thread_local std::vector<BindingRequest> binding_requests;
struct WorkerRecord {uint64_t callback{};void* data{};std::atomic_int remaining{1};};
std::unordered_map<WorkerRecord*,std::shared_ptr<WorkerRecord>> workers;
struct LoopSlot {GDExtensionClassLibraryPtr library{};GDExtensionMainLoopCallbacks guest{};};
struct EditorSlot {GDExtensionClassLibraryPtr library{};uint64_t guest_callback{};};
constexpr std::size_t slot_limit=32;
std::array<LoopSlot,slot_limit> loop_slots{};
std::array<EditorSlot,slot_limit> editor_slots{};
std::size_t loop_slot_count=0,editor_slot_count=0;

std::string name_text(GDExtensionConstStringNamePtr name){
  alignas(8) unsigned char text[size_String]{};
  const void* args[]={name};
  host_function<GDExtensionInterfaceVariantGetPtrConstructor>("variant_get_ptr_constructor")(GDEXTENSION_VARIANT_TYPE_STRING,string_from_name_constructor)(text,args);
  auto utf8=host_function<GDExtensionInterfaceStringToUtf8Chars>("string_to_utf8_chars");
  const auto length=utf8(text,nullptr,0);
  if(length<0||length>1048576){record_error("Invalid StringName UTF-8 length");return {};}
  std::string result(static_cast<std::size_t>(length),'\0');
  utf8(text,result.data(),length);
  host_function<GDExtensionInterfaceVariantGetPtrDestructor>("variant_get_ptr_destructor")(GDEXTENSION_VARIANT_TYPE_STRING)(text);
  return result;
}
void handler_get_proc(Arm64Ctx* context,uint64_t){
  const char* name=from_register<const char*>(context,0);
  for(std::size_t i=0;i<generated_interface_count;++i){
    const auto& item=generated_interfaces[i];
    if(std::strcmp(name,item.name)!=0)continue;
    auto function=get_proc(name);
    if(function)register_native(bits(function),item.handler,name);
    to_register(context,function);return;
  }
  record_error((std::string("Uninventoried Godot interface: ")+name).c_str());
  context->x[0]=0;
}
GDExtensionObjectPtr class_create(void* userdata,GDExtensionBool notify){
  auto* record=static_cast<ClassRecord*>(userdata);
  return guest_result<GDExtensionObjectPtr>(bits(record->guest.create_instance_func),{bits(record->guest.class_userdata),bits(notify)});
}
void class_free(void* userdata,GDExtensionClassInstancePtr instance){
  auto* record=static_cast<ClassRecord*>(userdata);
  invoke_guest(bits(record->guest.free_instance_func),{bits(record->guest.class_userdata),bits(instance)});
  forget_instance(instance);
}
GDExtensionClassInstancePtr class_recreate(void* userdata,GDExtensionObjectPtr object){
  auto* record=static_cast<ClassRecord*>(userdata);
  auto instance=guest_result<GDExtensionClassInstancePtr>(bits(record->guest.recreate_instance_func),{bits(record->guest.class_userdata),bits(object)});
  if(instance){std::lock_guard<std::mutex> lock(state_mutex);classes_by_instance[instance]=record;}
  return instance;
}
void* class_virtual_data(void* userdata,GDExtensionConstStringNamePtr name,uint32_t hash){
  auto* record=static_cast<ClassRecord*>(userdata);uint64_t target=0;void* guest_data=nullptr;bool with_data=false;
  if(record->guest.get_virtual_func){target=invoke_guest(bits(record->guest.get_virtual_func),{bits(record->guest.class_userdata),bits(name),hash});if(!target)return nullptr;}
  else if(record->guest.get_virtual_call_data_func&&record->guest.call_virtual_with_data_func){
    guest_data=guest_result<void*>(bits(record->guest.get_virtual_call_data_func),{bits(record->guest.class_userdata),bits(name),hash});
    if(!guest_data)return nullptr;
    target=bits(record->guest.call_virtual_with_data_func);with_data=true;
  }else return nullptr;
  std::lock_guard<std::mutex> lock(state_mutex);
  auto key=std::make_tuple(record,target,guest_data,with_data);auto& entry=virtual_calls[key];
  if(!entry){entry=std::make_unique<VirtualRecord>();entry->target=target;entry->guest_data=guest_data;entry->with_data=with_data;}
  return entry.get();
}
void class_virtual_call(GDExtensionClassInstancePtr instance,GDExtensionConstStringNamePtr name,void* userdata,const GDExtensionConstTypePtr* args,GDExtensionTypePtr result){
  auto* record=static_cast<VirtualRecord*>(userdata);
  if(record->with_data)invoke_guest(record->target,{bits(instance),bits(name),bits(record->guest_data),bits(args),bits(result)});
  else invoke_guest(record->target,{bits(instance),bits(args),bits(result)});
}
void method_call(void* userdata,GDExtensionClassInstancePtr instance,const GDExtensionConstVariantPtr* args,GDExtensionInt count,GDExtensionVariantPtr result,GDExtensionCallError* error){auto* record=static_cast<MethodRecord*>(userdata);invoke_guest(bits(record->guest.call_func),{bits(record->guest.method_userdata),bits(instance),bits(args),bits(count),bits(result),bits(error)});}
void method_ptrcall(void* userdata,GDExtensionClassInstancePtr instance,const GDExtensionConstTypePtr* args,GDExtensionTypePtr result){auto* record=static_cast<MethodRecord*>(userdata);invoke_guest(bits(record->guest.ptrcall_func),{bits(record->guest.method_userdata),bits(instance),bits(args),bits(result)});}
GDExtensionBool callable_equal(void* lhs,void* rhs){auto* a=static_cast<CallableRecord*>(lhs);auto* b=static_cast<CallableRecord*>(rhs);if(a->guest.equal_func!=b->guest.equal_func)return 0;return guest_result<GDExtensionBool>(bits(a->guest.equal_func),{bits(a->guest.callable_userdata),bits(b->guest.callable_userdata)});}
GDExtensionBool callable_less(void* lhs,void* rhs){auto* a=static_cast<CallableRecord*>(lhs);auto* b=static_cast<CallableRecord*>(rhs);if(a->guest.less_than_func!=b->guest.less_than_func)return bits(a->guest.less_than_func)<bits(b->guest.less_than_func);return guest_result<GDExtensionBool>(bits(a->guest.less_than_func),{bits(a->guest.callable_userdata),bits(b->guest.callable_userdata)});}

BindingRecord* binding_record(const GDExtensionInstanceBindingCallbacks* callbacks){
  if(!callbacks)return nullptr;
  auto key=std::make_tuple(bits(callbacks->create_callback),bits(callbacks->free_callback),bits(callbacks->reference_callback));
  std::lock_guard<std::mutex> lock(state_mutex);auto& value=binding_records[key];if(!value){value=std::make_unique<BindingRecord>();value->guest=*callbacks;}return value.get();
}
BindingRecord* find_binding(void* token,void* object,void* binding,bool by_binding){
  {std::lock_guard<std::mutex> lock(state_mutex);auto& table=by_binding?bindings_by_binding:bindings_by_object;auto it=table.find({token,by_binding?binding:object});if(it!=table.end())return it->second;}
  for(auto it=binding_requests.rbegin();it!=binding_requests.rend();++it)if(it->token==token&&(by_binding||it->object==object))return it->record;
  record_error("Missing instance binding callback record");return nullptr;
}
void* binding_create(void* token,void* object){
  auto* record=find_binding(token,object,nullptr,false);if(!record||!record->guest.create_callback)return nullptr;
  auto* binding=guest_result<void*>(bits(record->guest.create_callback),{bits(token),bits(object)});
  if(binding){std::lock_guard<std::mutex> lock(state_mutex);bindings_by_binding.try_emplace(BindingKey{token,binding},record);bindings_by_object.try_emplace(BindingKey{token,object},record);}return binding;
}
void binding_free(void* token,void* object,void* binding){
  auto* record=find_binding(token,object,binding,false);if(record&&record->guest.free_callback)invoke_guest(bits(record->guest.free_callback),{bits(token),bits(object),bits(binding)});
  std::lock_guard<std::mutex> lock(state_mutex);bindings_by_object.erase({token,object});bindings_by_binding.erase({token,binding});
}
GDExtensionBool binding_reference(void* token,void* binding,GDExtensionBool reference){auto* record=find_binding(token,nullptr,binding,true);if(!record||!record->guest.reference_callback)return 1;return guest_result<GDExtensionBool>(bits(record->guest.reference_callback),{bits(token),bits(binding),bits(reference)});}
const GDExtensionInstanceBindingCallbacks host_binding_callbacks={binding_create,binding_free,binding_reference};
struct BindingScope {BindingScope(void* token,void* object,BindingRecord* record){binding_requests.push_back({token,object,record});}~BindingScope(){binding_requests.pop_back();}};

void worker_group(void* data,uint32_t element){
  auto* key=static_cast<WorkerRecord*>(data);std::shared_ptr<WorkerRecord> record;
  {std::lock_guard<std::mutex> lock(state_mutex);auto it=workers.find(key);if(it==workers.end()){record_error("Missing worker group record");return;}record=it->second;}
  invoke_guest(record->callback,{bits(record->data),element});
  if(record->remaining.fetch_sub(1)==1){std::lock_guard<std::mutex> lock(state_mutex);workers.erase(key);}
}
void worker_single(void* data){
  auto* key=static_cast<WorkerRecord*>(data);std::shared_ptr<WorkerRecord> record;
  {std::lock_guard<std::mutex> lock(state_mutex);auto it=workers.find(key);if(it==workers.end()){record_error("Missing worker record");return;}record=it->second;}
  invoke_guest(record->callback,{bits(record->data)});
  {std::lock_guard<std::mutex> lock(state_mutex);workers.erase(key);}
}
template<std::size_t I> void loop_startup(){auto fn=loop_slots[I].guest.startup_func;if(fn)invoke_guest(bits(fn),{});}
template<std::size_t I> void loop_shutdown(){auto fn=loop_slots[I].guest.shutdown_func;if(fn)invoke_guest(bits(fn),{});}
template<std::size_t I> void loop_frame(){auto fn=loop_slots[I].guest.frame_func;if(fn)invoke_guest(bits(fn),{});}
template<std::size_t I> void editor_classes(GDExtensionTypePtr classes_used){if(editor_slots[I].guest_callback)invoke_guest(editor_slots[I].guest_callback,{bits(classes_used)});}
template<std::size_t... I> auto startup_pool(std::index_sequence<I...>){return std::array<GDExtensionMainLoopStartupCallback,sizeof...(I)>{loop_startup<I>...};}
template<std::size_t... I> auto shutdown_pool(std::index_sequence<I...>){return std::array<GDExtensionMainLoopShutdownCallback,sizeof...(I)>{loop_shutdown<I>...};}
template<std::size_t... I> auto frame_pool(std::index_sequence<I...>){return std::array<GDExtensionMainLoopFrameCallback,sizeof...(I)>{loop_frame<I>...};}
template<std::size_t... I> auto editor_pool(std::index_sequence<I...>){return std::array<GDExtensionEditorGetClassesUsedCallback,sizeof...(I)>{editor_classes<I>...};}
const auto startup_callbacks=startup_pool(std::make_index_sequence<slot_limit>{});
const auto shutdown_callbacks=shutdown_pool(std::make_index_sequence<slot_limit>{});
const auto frame_callbacks=frame_pool(std::make_index_sequence<slot_limit>{});
const auto editor_callbacks=editor_pool(std::make_index_sequence<slot_limit>{});
}

void register_native(uint64_t address,NativeHandler handler,const char* name){if(!address||!handler)return;std::unique_lock<NativeMutex> lock(native_mutex);auto it=natives.find(address);if(it!=natives.end()&&it->second.handler==handler)return;natives[address]={handler,name?name:""};native_epoch.fetch_add(1,std::memory_order_release);}
int try_dispatch_native(Arm64Ctx* context,uint64_t target){
  NativeHandler handler=nullptr;
#if DF_BRIDGE_FAST_NATIVE_CACHE
  auto& slot=native_cache[((target>>4)^(target>>10)^(target>>16))&63];
  const auto epoch=native_epoch.load(std::memory_order_acquire);
  if(target&&slot.target==target&&slot.epoch==epoch){handler=slot.handler;if(!handler)return 0;}
  else {NativeReadLock lock(native_mutex);auto it=natives.find(target);handler=it==natives.end()?nullptr:it->second.handler;slot={target,native_epoch.load(std::memory_order_relaxed),handler};if(!handler)return 0;}
#else
  {NativeReadLock lock(native_mutex);auto it=natives.find(target);if(it==natives.end())return 0;handler=it->second.handler;}
#endif
#if DF_BRIDGE_DIAGNOSTIC_COUNTERS
  ++call_count;
#endif
  handler(context,target);return 1;
}
void initialize_interfaces(GDExtensionInterfaceGetProcAddress callback,GDExtensionClassLibraryPtr){get_proc=callback;register_native(bits(callback),handler_get_proc,"get_proc_address");
#if defined(DF_BRIDGE_USE_NATIVE_HOOK)
  arc_set_native_dispatch_hook(try_dispatch_native);
#endif
}
uint64_t typed_call_count(){return call_count.load();}
bool diagnostic_counters_enabled(){return DF_BRIDGE_DIAGNOSTIC_COUNTERS!=0;}
bool fast_native_cache_enabled(){return DF_BRIDGE_FAST_NATIVE_CACHE!=0;}
void record_error(const char* message){std::lock_guard<std::mutex> lock(error_mutex);error_text=message?message:"Unknown bridge error";std::fprintf(stderr,"DF_BRIDGE_ERROR: %s\n",error_text.c_str());}
std::string last_error(){std::lock_guard<std::mutex> lock(error_mutex);return error_text;}
uint64_t invoke_guest(uint64_t target,std::initializer_list<uint64_t> arguments){if(!target){record_error("Attempt to invoke null guest callback");return 0;}return arc_call_guest(target,arguments.begin(),static_cast<int>(arguments.size()));}
GDExtensionInterfaceGetProcAddress host_get_proc(){return get_proc;}
ClassRecord* class_for_instance(void* instance){std::lock_guard<std::mutex> lock(state_mutex);auto it=classes_by_instance.find(instance);return it==classes_by_instance.end()?nullptr:it->second;}
void forget_instance(void* instance){std::lock_guard<std::mutex> lock(state_mutex);classes_by_instance.erase(instance);}

namespace special {
GDExtensionMethodBindPtr classdb_get_method_bind(GDExtensionInterfaceClassdbGetMethodBind native,GDExtensionConstStringNamePtr class_name,GDExtensionConstStringNamePtr method_name,GDExtensionInt hash){
  auto bind=native(class_name,method_name,hash);
  return bind;
}
void object_method_bind_ptrcall(GDExtensionInterfaceObjectMethodBindPtrcall native,Arm64Ctx* context,GDExtensionMethodBindPtr method,GDExtensionObjectPtr instance,const GDExtensionConstTypePtr* args,GDExtensionTypePtr result){
  native(method,instance,args,result);
}
void classdb_register_extension_class5(GDExtensionInterfaceClassdbRegisterExtensionClass5 native,GDExtensionClassLibraryPtr library,GDExtensionConstStringNamePtr name,GDExtensionConstStringNamePtr parent,const GDExtensionClassCreationInfo5* info){
  auto record=std::make_unique<ClassRecord>();record->guest=*info;record->class_name=name_text(name);auto* raw=record.get();
  auto clone=*info;wrap_class_callbacks(clone);clone.class_userdata=raw;
  clone.create_instance_func=info->create_instance_func?class_create:nullptr;clone.free_instance_func=info->free_instance_func?class_free:nullptr;clone.recreate_instance_func=info->recreate_instance_func?class_recreate:nullptr;
  if(info->get_virtual_func||(info->get_virtual_call_data_func&&info->call_virtual_with_data_func)){clone.get_virtual_func=nullptr;clone.get_virtual_call_data_func=class_virtual_data;clone.call_virtual_with_data_func=class_virtual_call;}
  {std::lock_guard<std::mutex> lock(state_mutex);classes_by_name[record->class_name]=raw;classes.push_back(std::move(record));}
  native(library,name,parent,&clone);
}
void classdb_register_extension_class_method(GDExtensionInterfaceClassdbRegisterExtensionClassMethod native,GDExtensionClassLibraryPtr library,GDExtensionConstStringNamePtr name,const GDExtensionClassMethodInfo* info){
  auto record=std::make_unique<MethodRecord>();record->guest=*info;auto clone=*info;clone.method_userdata=record.get();clone.call_func=info->call_func?method_call:nullptr;clone.ptrcall_func=info->ptrcall_func?method_ptrcall:nullptr;
  {std::lock_guard<std::mutex> lock(state_mutex);methods.push_back(std::move(record));}native(library,name,&clone);
}
void object_set_instance(GDExtensionInterfaceObjectSetInstance native,GDExtensionObjectPtr object,GDExtensionConstStringNamePtr name,GDExtensionClassInstancePtr instance){
  auto text=name_text(name);{std::lock_guard<std::mutex> lock(state_mutex);auto it=classes_by_name.find(text);if(it!=classes_by_name.end()&&instance)classes_by_instance[instance]=it->second;}
  native(object,name,instance);
}
void callable_custom_create2(GDExtensionInterfaceCallableCustomCreate2 native,GDExtensionUninitializedTypePtr callable,GDExtensionCallableCustomInfo2* info){
  auto record=std::make_unique<CallableRecord>();record->guest=*info;auto clone=*info;wrap_callable_callbacks(clone);clone.callable_userdata=record.get();clone.equal_func=info->equal_func?callable_equal:nullptr;clone.less_than_func=info->less_than_func?callable_less:nullptr;
  {std::lock_guard<std::mutex> lock(state_mutex);callables_by_proxy[record.get()]=record.get();callables.push_back(std::move(record));}native(callable,&clone);
}
void* callable_custom_get_userdata(GDExtensionInterfaceCallableCustomGetUserData native,GDExtensionConstTypePtr callable,void* token){auto data=native(callable,token);std::lock_guard<std::mutex> lock(state_mutex);auto it=callables_by_proxy.find(data);return it==callables_by_proxy.end()?data:it->second->guest.callable_userdata;}
GDExtensionScriptInstancePtr script_instance_create3(GDExtensionInterfaceScriptInstanceCreate3 native,const GDExtensionScriptInstanceInfo3* info,GDExtensionScriptInstanceDataPtr data){
  auto record=std::make_unique<ScriptRecord>();record->guest=*info;record->guest_userdata=data;auto clone=*info;wrap_script_callbacks(clone);auto* raw=record.get();
  {std::lock_guard<std::mutex> lock(state_mutex);scripts_by_proxy[raw]=raw;scripts.push_back(std::move(record));}return native(&clone,raw);
}
GDExtensionScriptInstanceDataPtr object_get_script_instance(GDExtensionInterfaceObjectGetScriptInstance native,GDExtensionConstObjectPtr object,GDExtensionObjectPtr language){auto data=native(object,language);std::lock_guard<std::mutex> lock(state_mutex);auto it=scripts_by_proxy.find(data);return it==scripts_by_proxy.end()?data:it->second->guest_userdata;}
void* object_get_instance_binding(GDExtensionInterfaceObjectGetInstanceBinding native,GDExtensionObjectPtr object,void* token,const GDExtensionInstanceBindingCallbacks* callbacks){
  auto* record=binding_record(callbacks);BindingScope scope(token,object,record);auto binding=native(object,token,callbacks?&host_binding_callbacks:nullptr);
  if(record&&binding){std::lock_guard<std::mutex> lock(state_mutex);bindings_by_object.try_emplace(BindingKey{token,object},record);bindings_by_binding.try_emplace(BindingKey{token,binding},record);}return binding;
}
void object_set_instance_binding(GDExtensionInterfaceObjectSetInstanceBinding native,GDExtensionObjectPtr object,void* token,void* binding,const GDExtensionInstanceBindingCallbacks* callbacks){
  auto* record=binding_record(callbacks);BindingScope scope(token,object,record);native(object,token,binding,callbacks?&host_binding_callbacks:nullptr);
  if(record&&binding){std::lock_guard<std::mutex> lock(state_mutex);bindings_by_object[{token,object}]=record;bindings_by_binding[{token,binding}]=record;}
}
void object_free_instance_binding(GDExtensionInterfaceObjectFreeInstanceBinding native,GDExtensionObjectPtr object,void* token){native(object,token);std::lock_guard<std::mutex> lock(state_mutex);bindings_by_object.erase({token,object});}
int64_t worker_thread_pool_add_native_group_task(GDExtensionInterfaceWorkerThreadPoolAddNativeGroupTask native,GDExtensionObjectPtr instance,GDExtensionWorkerThreadPoolGroupTask callback,void* userdata,int32_t elements,int32_t tasks,GDExtensionBool high,GDExtensionConstStringPtr description){
  auto record=std::make_shared<WorkerRecord>();record->callback=bits(callback);record->data=userdata;record->remaining=elements;
  {std::lock_guard<std::mutex> lock(state_mutex);workers[record.get()]=record;}
  auto id=native(instance,worker_group,record.get(),elements,tasks,high,description);
  if(elements<=0||id<0){std::lock_guard<std::mutex> lock(state_mutex);workers.erase(record.get());}return id;
}
int64_t worker_thread_pool_add_native_task(GDExtensionInterfaceWorkerThreadPoolAddNativeTask native,GDExtensionObjectPtr instance,GDExtensionWorkerThreadPoolTask callback,void* userdata,GDExtensionBool high,GDExtensionConstStringPtr description){
  auto record=std::make_shared<WorkerRecord>();record->callback=bits(callback);record->data=userdata;{std::lock_guard<std::mutex> lock(state_mutex);workers[record.get()]=record;}
  auto id=native(instance,worker_single,record.get(),high,description);if(id<0){std::lock_guard<std::mutex> lock(state_mutex);workers.erase(record.get());}return id;
}
void register_main_loop_callbacks(GDExtensionInterfaceRegisterMainLoopCallbacks native,GDExtensionClassLibraryPtr library,const GDExtensionMainLoopCallbacks* callbacks){
  std::size_t slot;{std::lock_guard<std::mutex> lock(state_mutex);for(slot=0;slot<loop_slot_count;++slot)if(loop_slots[slot].library==library)break;if(slot==slot_limit){record_error("Main-loop callback library pool exhausted");return;}if(slot==loop_slot_count)++loop_slot_count;loop_slots[slot]={library,*callbacks};}
  GDExtensionMainLoopCallbacks clone{callbacks->startup_func?startup_callbacks[slot]:nullptr,callbacks->shutdown_func?shutdown_callbacks[slot]:nullptr,callbacks->frame_func?frame_callbacks[slot]:nullptr};native(library,&clone);
}
void editor_register_get_classes_used_callback(GDExtensionInterfaceEditorRegisterGetClassesUsedCallback native,GDExtensionClassLibraryPtr library,GDExtensionEditorGetClassesUsedCallback callback){
  std::size_t slot;{std::lock_guard<std::mutex> lock(state_mutex);for(slot=0;slot<editor_slot_count;++slot)if(editor_slots[slot].library==library)break;if(slot==slot_limit){record_error("Editor callback library pool exhausted");return;}if(slot==editor_slot_count)++editor_slot_count;editor_slots[slot]={library,bits(callback)};}native(library,callback?editor_callbacks[slot]:nullptr);
}
}
}
