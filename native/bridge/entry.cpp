// Godot entry points for the original DroneFlames 0.40.8 game and net modules.
#include "bridge_core.hpp"
#include "library_fingerprints.hpp"
#include "import_policy.hpp"
#include "elf_image.h"
#include "shim.h"
#include "host_shims.h"
#include "math_imports.hpp"
#include <windows.h>
#include <bcrypt.h>
#include <array>
#include <cstring>
#include <exception>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <map>
#include <memory>
#include <mutex>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

extern "C" void arc_set_image(size_t index,uint64_t base,uint64_t span);
extern "C" const char* arc_image_name(size_t index);

namespace {
struct Image {std::unique_ptr<arc::ElfImage> elf;bool constructors_run=false;};
struct InitRecord {GDExtensionInitialization guest{};GDExtensionClassLibraryPtr library{};};
std::array<Image,3> images;
std::vector<std::unique_ptr<InitRecord>> initializations;
std::mutex mapping_mutex;
std::map<uint64_t,std::string> import_names;
std::string failure;

bool fail(const std::string& message){failure=message;dfbridge::record_error(message.c_str());return false;}

std::string sha256(const std::filesystem::path& path){
  BCRYPT_ALG_HANDLE algorithm=nullptr;BCRYPT_HASH_HANDLE hash=nullptr;
  if(BCryptOpenAlgorithmProvider(&algorithm,BCRYPT_SHA256_ALGORITHM,nullptr,0)<0)return {};
  if(BCryptCreateHash(algorithm,&hash,nullptr,0,nullptr,0,0)<0){BCryptCloseAlgorithmProvider(algorithm,0);return {};}
  std::ifstream input(path,std::ios::binary);std::array<unsigned char,65536> buffer{};bool ok=static_cast<bool>(input);
  while(input){input.read(reinterpret_cast<char*>(buffer.data()),buffer.size());const auto count=input.gcount();if(count>0&&BCryptHashData(hash,buffer.data(),static_cast<ULONG>(count),0)<0){ok=false;break;}}
  std::array<unsigned char,32> result{};if(BCryptFinishHash(hash,result.data(),static_cast<ULONG>(result.size()),0)<0)ok=false;
  BCryptDestroyHash(hash);BCryptCloseAlgorithmProvider(algorithm,0);if(!ok)return {};
  std::ostringstream text;text<<std::hex<<std::setfill('0');for(auto byte:result)text<<std::setw(2)<<static_cast<unsigned>(byte);return text.str();
}

std::filesystem::path image_directory(){
  // The guest callback/TLS code and mapped images must outlive Godot's objects.
  // Pin the module for the process lifetime, as in the production bridge.
  HMODULE module=nullptr;
  if(!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS|GET_MODULE_HANDLE_EX_FLAG_PIN,
      reinterpret_cast<LPCWSTR>(reinterpret_cast<uintptr_t>(&image_directory)),&module))throw std::runtime_error("Cannot locate the game extension module");
  std::wstring name(32768,L'\0');const DWORD length=GetModuleFileNameW(module,name.data(),static_cast<DWORD>(name.size()));
  if(!length||length>=name.size())throw std::runtime_error("Cannot read the game extension module path");
  name.resize(length);return (std::filesystem::path(name).parent_path()/L".."/L"images").lexically_normal();
}

bool check_image(const std::filesystem::path& path,const char* expected){
  if(!std::filesystem::is_regular_file(path))return fail("Missing game runtime image: "+path.filename().u8string());
  if(sha256(path)!=expected)return fail("Runtime image SHA-256 does not match DroneFlames 0.40.8: "+path.filename().u8string());
  return true;
}

void dispatch_math_context(Arm64Ctx* context,uint64_t target){reinterpret_cast<ArcCtxFn>(target)(context);}
uint64_t resolve(const char* name){
  if(images[1].elf)if(auto address=images[1].elf->Lookup(name))return address;
  if(auto address=DfMathResolve(name)){dfbridge::register_native(address,dispatch_math_context,name);return address;}
  if(auto address=df_pc_resolve_extra(name)){if(std::strcmp(name,"stdout")!=0)arc_register_native(address,name);return address;}
  return arc::ShimResolve(name);
}

bool load_image(std::size_t index,const std::filesystem::path& path){
  auto image=std::make_unique<arc::ElfImage>();std::string error;
  if(!image->Load(path.u8string(),resolve,&error))return fail("Runtime image load failed: "+error);
  for(const auto& symbol:image->imports())if(!symbol.resolved&&symbol.bound_to!=0)return fail("Unresolved native import: "+symbol.name);
  arc::ShimRegisterImage(image.get());arc_set_image(index,reinterpret_cast<uint64_t>(image->base()),image->span());images[index].elf=std::move(image);return true;
}

const char* explain_address(uint64_t address){
  const auto exact=import_names.find(address);if(exact!=import_names.end())return exact->second.c_str();
  static thread_local std::string text;
  for(std::size_t i=0;i<images.size();++i){if(!images[i].elf)continue;const auto base=reinterpret_cast<uint64_t>(images[i].elf->base());if(address>=base&&address-base<images[i].elf->span()){std::ostringstream out;out<<"guest image"<<i<<" +0x"<<std::hex<<(address-base);uint64_t offset=0;auto symbol=images[i].elf->SymbolAt(address,&offset);if(!symbol.empty())out<<" symbol "<<symbol<<" +0x"<<offset;text=out.str();return text.c_str();}}
  return nullptr;
}

void register_imports(){
  const dfbridge::ImageSpan game{reinterpret_cast<uint64_t>(images[0].elf->base()),images[0].elf->span()};
  const dfbridge::ImageSpan cxx{reinterpret_cast<uint64_t>(images[1].elf->base()),images[1].elf->span()};
  const dfbridge::ImageSpan net{reinterpret_cast<uint64_t>(images[2].elf->base()),images[2].elf->span()};
  for(std::size_t i=0;i<images.size();++i)for(const auto& symbol:images[i].elf->imports()){
    const auto kind=dfbridge::classify_import(symbol.name.c_str(),symbol.bound_to,symbol.resolved,{game,cxx,net});
    if(kind!=dfbridge::ImportKind::HostCallable)continue;
    arc_register_native(symbol.bound_to,symbol.name.c_str());
    auto& name=import_names[symbol.bound_to];if(!name.empty())name+="; ";name+="image"+std::to_string(i)+":"+symbol.name;
  }
  arc_set_explain(explain_address);arc::ShimRegisterVarargs();arc::ShimRegisterGL();
}

bool ensure_mapped(){
  std::lock_guard<std::mutex> lock(mapping_mutex);
  if(images[0].elf&&images[1].elf&&images[2].elf)return true;
  if(!arc_image_name(2))return fail("The game extension requires the three-image dispatcher");
  const auto directory=image_directory();
  const auto game=directory/L"libdf_game.android.template_release.arm64.so";
  const auto cxx=directory/L"libc++_shared.so";
  const auto net=directory/L"libdf_net.android.template_release.arm64.so";
  if(!check_image(game,dfbridge::sha256_game)||!check_image(cxx,dfbridge::sha256_cxx)||!check_image(net,dfbridge::sha256_net))return false;
  if(!load_image(1,cxx)||!load_image(0,game)||!load_image(2,net))return false;
  register_imports();return true;
}

bool run_constructors(std::size_t index){
  auto& image=images[index];if(image.constructors_run)return true;
  for(const auto function:image.elf->init_array()){
    if(!function||function==UINT64_MAX)continue;
    dfbridge::invoke_guest(function,{});if(!dfbridge::last_error().empty())return fail(dfbridge::last_error());
  }
  image.constructors_run=true;return true;
}

void initialize_proxy(void* data,GDExtensionInitializationLevel level){auto* record=static_cast<InitRecord*>(data);dfbridge::invoke_guest(dfbridge::bits(record->guest.initialize),{dfbridge::bits(record->guest.userdata),static_cast<uint64_t>(level)});}
void deinitialize_proxy(void* data,GDExtensionInitializationLevel level){auto* record=static_cast<InitRecord*>(data);if(record->guest.deinitialize)dfbridge::invoke_guest(dfbridge::bits(record->guest.deinitialize),{dfbridge::bits(record->guest.userdata),static_cast<uint64_t>(level)});}

GDExtensionBool enter(std::size_t image,const char* name,GDExtensionInterfaceGetProcAddress get_proc,GDExtensionClassLibraryPtr library,GDExtensionInitialization* output){
  if(!get_proc||!library||!output){fail("Invalid null GDExtension entry parameter");return 0;}
  if(!failure.empty())return 0;
  dfbridge::initialize_interfaces(get_proc,library);
  if(!ensure_mapped()||!run_constructors(1)||!run_constructors(image))return 0;
  const auto target=images[image].elf->Lookup(name);if(!target){fail("Original GDExtension entry symbol is missing");return 0;}
  auto record=std::make_unique<InitRecord>();record->library=library;
  const auto ok=static_cast<GDExtensionBool>(dfbridge::invoke_guest(target,{dfbridge::bits(get_proc),dfbridge::bits(library),dfbridge::bits(&record->guest)}));
  if(!ok||!record->guest.initialize||!dfbridge::last_error().empty()){fail("Original GDExtension entry did not complete successfully");return 0;}
  *output=record->guest;output->userdata=record.get();output->initialize=initialize_proxy;output->deinitialize=deinitialize_proxy;initializations.push_back(std::move(record));return 1;
}
}

extern "C" __declspec(dllexport) GDExtensionBool df_pc_game_init(GDExtensionInterfaceGetProcAddress get_proc,GDExtensionClassLibraryPtr library,GDExtensionInitialization* output){try{return enter(0,"df_game_init",get_proc,library,output);}catch(const std::exception& error){fail(std::string("Game extension setup failed: ")+error.what());return 0;}}
extern "C" __declspec(dllexport) GDExtensionBool df_pc_net_init(GDExtensionInterfaceGetProcAddress get_proc,GDExtensionClassLibraryPtr library,GDExtensionInitialization* output){try{return enter(2,"df_net_init",get_proc,library,output);}catch(const std::exception& error){fail(std::string("Net extension setup failed: ")+error.what());return 0;}}
