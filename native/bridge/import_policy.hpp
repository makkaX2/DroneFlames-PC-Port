#pragma once
#include "data_imports.hpp"
#include <cstdint>
#include <cstring>
#include <initializer_list>

namespace dfbridge {
struct ImageSpan { uint64_t base;uint64_t span; };
enum class ImportKind { Unresolved, GuestCodeOrData, HostData, HostCallable };
inline ImportKind classify_import(const char* name,uint64_t address,bool resolved,std::initializer_list<ImageSpan> images){
  if(!resolved||!address)return ImportKind::Unresolved;
  for(const auto& image:images)if(address>=image.base&&address-image.base<image.span)return ImportKind::GuestCodeOrData;
  for(const char* data_name:data_import_symbols)if(std::strcmp(name,data_name)==0)return ImportKind::HostData;
  return ImportKind::HostCallable;
}
}
