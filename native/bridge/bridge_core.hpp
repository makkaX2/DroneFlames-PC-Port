#pragma once
#include "gdextension_interface.h"
#include "arm64_context.h"
#include <cstdint>
#include <cstddef>
#include <initializer_list>
#include <memory>
#include <string>
#include <type_traits>
#include <vector>

namespace dfbridge {
using NativeHandler=void (*)(Arm64Ctx*,uint64_t);
struct InterfaceHandler { const char* name; NativeHandler handler; };
extern const InterfaceHandler generated_interfaces[];
extern const std::size_t generated_interface_count;
void register_native(uint64_t address,NativeHandler handler,const char* name);
int try_dispatch_native(Arm64Ctx* context,uint64_t target);
void initialize_interfaces(GDExtensionInterfaceGetProcAddress get_proc,GDExtensionClassLibraryPtr library);
uint64_t typed_call_count();
bool diagnostic_counters_enabled();
bool fast_native_cache_enabled();
void record_error(const char* message);
std::string last_error();
uint64_t invoke_guest(uint64_t target,std::initializer_list<uint64_t> arguments);
GDExtensionInterfaceGetProcAddress host_get_proc();

template<class T> uint64_t bits(T value){
  if constexpr(std::is_pointer_v<T>)return reinterpret_cast<uint64_t>(value);
  else return static_cast<uint64_t>(value);
}
template<class T> T from_bits(uint64_t value){
  if constexpr(std::is_pointer_v<T>)return reinterpret_cast<T>(static_cast<uintptr_t>(value));
  else return static_cast<T>(value);
}
template<class T> T from_register(Arm64Ctx* context,std::size_t index){
  uint64_t value=index<8?context->x[index]:arc_ld64(context->sp+(index-8)*8);
  return from_bits<T>(value);
}
template<class T> void to_register(Arm64Ctx* context,T value){
  if constexpr(std::is_pointer_v<T>)context->x[0]=bits(value);
  else if constexpr(std::is_enum_v<T>)context->x[0]=static_cast<uint32_t>(value);
  else if constexpr(sizeof(T)<8)context->x[0]=static_cast<std::make_unsigned_t<T>>(value);
  else context->x[0]=static_cast<uint64_t>(value);
}
template<class T> T guest_result(uint64_t target,std::initializer_list<uint64_t> args){
  if constexpr(std::is_void_v<T>){invoke_guest(target,args);return;}
  else return from_bits<T>(invoke_guest(target,args));
}
template<class Fn> Fn host_function(const char* name){return reinterpret_cast<Fn>(host_get_proc()(name));}

struct ClassRecord { GDExtensionClassCreationInfo5 guest{};std::string class_name; };
struct MethodRecord { GDExtensionClassMethodInfo guest{}; };
struct CallableRecord { GDExtensionCallableCustomInfo2 guest{}; };
struct ScriptRecord { GDExtensionScriptInstanceInfo3 guest{};void* guest_userdata{}; };
struct BindingRecord { GDExtensionInstanceBindingCallbacks guest{}; };
struct VirtualRecord { uint64_t target{};void* guest_data{};bool with_data{}; };

ClassRecord* class_for_instance(void* instance);
void forget_instance(void* instance);
void wrap_class_callbacks(GDExtensionClassCreationInfo5& host);
void wrap_callable_callbacks(GDExtensionCallableCustomInfo2& host);
void wrap_script_callbacks(GDExtensionScriptInstanceInfo3& host);
}
