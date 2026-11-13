// Isolated additions to the pinned runtime. No vendor source is modified.
#include "host_shims.h"
#include "shim.h"
#include <cerrno>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <list>
#include <mutex>
#include <new>
#include <string>

#if !defined(_WIN32)
#error This local adapter is for Windows x64 only.
#endif
#include <windows.h>
#include <direct.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

static_assert(sizeof(void*)==8,"Android ARM64 import bridge requires 64-bit pointers");

namespace {
constexpr int kGuestEBADF=9,kGuestEFAULT=14,kGuestEINVAL=22,kGuestENOSYS=38;
constexpr int kGuestENOTDIR=20,kGuestEISDIR=21,kGuestENOENT=2;
constexpr int kGuestAtFdcwd=-100,kGuestAtRemovedir=0x200;
constexpr int kGuestOCreat=0100,kGuestOExcl=0200,kGuestOTrunc=01000,kGuestOAppend=02000;
constexpr int kGuestOCloexec=02000000;

struct AtForkRecord {
  void (*prepare)();
  void (*parent)();
  void (*child)();
  void* dso;
};
std::mutex g_atfork_mutex;
std::list<AtForkRecord> g_atfork_records;

// Android properties do not exist on this host. Returning an absent property
// is honest; inventing Android build/version values would not be.
int SystemPropertyGet(const char* name,char* output) {
  if(output)output[0]='\0';
  if(!name||!output){errno=kGuestEINVAL;return -1;}
  return 0;
}

int RegisterAtFork(void (*prepare)(),void (*parent)(),void (*child)(),void* dso) {
  try {
    std::lock_guard<std::mutex> lock(g_atfork_mutex);
    g_atfork_records.push_back({prepare,parent,child,dso});
    return 0;
  } catch(const std::bad_alloc&) {return 12; /* Bionic ENOMEM, returned directly */}
}

FILE** StdoutSymbol() {
  static FILE* stream=stdout;
  return &stream;
}

int GuestErrno(int host) {
  switch(host) {
    case ENOTEMPTY:return 39;
    case ENAMETOOLONG:return 36;
    case ENOSYS:return kGuestENOSYS;
    default:return host;
  }
}

void IgnoreInvalidParameter(const wchar_t*,const wchar_t*,const wchar_t*,unsigned,uintptr_t) {}

intptr_t CrtHandle(int fd) {
  // _get_osfhandle aborts through the CRT invalid-parameter handler for a bad
  // descriptor. Suppress that handler only on this thread and restore it.
  const auto previous=_set_thread_local_invalid_parameter_handler(IgnoreInvalidParameter);
  const intptr_t result=_get_osfhandle(fd);
  _set_thread_local_invalid_parameter_handler(previous);
  return result;
}

bool AbsoluteGuestPath(const char* path) {
  if(path[0]=='/'||path[0]=='\\')return true;
  const bool drive=(path[0]>='A'&&path[0]<='Z')||(path[0]>='a'&&path[0]<='z');
  return drive&&path[1]==':'&&(path[2]=='/'||path[2]=='\\');
}

bool PathAllowed(int dirfd,const char* path) {
  if(!path){errno=kGuestEFAULT;return false;}
  if(!*path){errno=kGuestENOENT;return false;}
  if(AbsoluteGuestPath(path)||dirfd==kGuestAtFdcwd)return true;
  const intptr_t native=CrtHandle(dirfd);
  if(native==-1||native==-2){errno=kGuestEBADF;return false;}
  BY_HANDLE_FILE_INFORMATION info{};
  if(!GetFileInformationByHandle(reinterpret_cast<HANDLE>(native),&info)){errno=kGuestEBADF;return false;}
  if(!(info.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)){errno=kGuestENOTDIR;return false;}
  // The pinned shim has no shared directory-fd/path/ownership registry.
  // Do not invent a parallel namespace or a racy path-based approximation.
  errno=kGuestENOSYS;
  return false;
}

bool RandomDevicePath(const char* path) {
  return std::strcmp(path,"/dev/urandom")==0||std::strcmp(path,"/dev/random")==0;
}

int Openat(int dirfd,const char* path,int flags,uint32_t mode) {
  if(!PathAllowed(dirfd,path))return -1;
  constexpr int supported=3|kGuestOCreat|kGuestOExcl|kGuestOTrunc|kGuestOAppend|kGuestOCloexec;
  if((flags&3)==3){errno=kGuestEINVAL;return -1;}
  if(flags&~supported){errno=kGuestENOSYS;return -1;}
  using Open=int(*)(const char*,int,...);
  using Close=int(*)(int);
  const auto open=reinterpret_cast<Open>(arc::ShimResolveFile("open"));
  const auto close=reinterpret_cast<Close>(arc::ShimResolveFile("close"));
  if(!open||!close){errno=kGuestENOSYS;return -1;}
  const int fd=open(path,flags&~kGuestOCloexec,mode);
  if(fd<0){errno=GuestErrno(errno);return -1;}
  if((flags&kGuestOCloexec)&&!RandomDevicePath(path)) {
    const intptr_t native=CrtHandle(fd);
    if(native==-1||native==-2||!SetHandleInformation(reinterpret_cast<HANDLE>(native),HANDLE_FLAG_INHERIT,0)) {
      close(fd);errno=kGuestEBADF;return -1;
    }
  }
  // The existing entropy pseudo-fd has no kernel handle that can be inherited.
  return fd;
}

int Unlinkat(int dirfd,const char* path,int flags) {
  if(flags!=0&&flags!=kGuestAtRemovedir){errno=kGuestEINVAL;return -1;}
  if(!PathAllowed(dirfd,path))return -1;
  const DWORD attrs=GetFileAttributesA(path);
  if(attrs==INVALID_FILE_ATTRIBUTES) {
    // Let the same host CRT that implements the actual operation set errno.
    const int rc=flags==kGuestAtRemovedir?_rmdir(path):_unlink(path);
    if(rc<0)errno=GuestErrno(errno);
    return rc;
  }
  if(attrs&FILE_ATTRIBUTE_REPARSE_POINT){errno=kGuestENOSYS;return -1;}
  const bool directory=(attrs&FILE_ATTRIBUTE_DIRECTORY)!=0;
  if(directory&&flags==0){errno=kGuestEISDIR;return -1;}
  if(!directory&&flags==kGuestAtRemovedir){errno=kGuestENOTDIR;return -1;}
  const int rc=directory?_rmdir(path):_unlink(path);
  if(rc<0)errno=GuestErrno(errno);
  return rc;
}

void* Fdopendir(int fd) {
  const intptr_t native=CrtHandle(fd);
  if(native==-1||native==-2){errno=kGuestEBADF;return nullptr;}
  BY_HANDLE_FILE_INFORMATION info{};
  if(!GetFileInformationByHandle(reinterpret_cast<HANDLE>(native),&info)){errno=kGuestEBADF;return nullptr;}
  if(!(info.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)){errno=kGuestENOTDIR;return nullptr;}
  // Explicitly unsupported. On failure POSIX leaves ownership with the caller.
  errno=kGuestENOSYS;
  return nullptr;
}
}

extern "C" uint64_t df_pc_resolve_lp64_numeric(const char* name);
extern "C" uint64_t df_pc_resolve_extra(const char* name) {
  if(!name)return 0;
  if(auto numeric=df_pc_resolve_lp64_numeric(name))return numeric;
  if(std::strcmp(name,"stdout")==0)return reinterpret_cast<uint64_t>(StdoutSymbol());
  if(std::strcmp(name,"__system_property_get")==0)return reinterpret_cast<uint64_t>(&SystemPropertyGet);
  if(std::strcmp(name,"__register_atfork")==0)return reinterpret_cast<uint64_t>(&RegisterAtFork);
  if(std::strcmp(name,"openat")==0)return reinterpret_cast<uint64_t>(&Openat);
  if(std::strcmp(name,"unlinkat")==0)return reinterpret_cast<uint64_t>(&Unlinkat);
  if(std::strcmp(name,"fdopendir")==0)return reinterpret_cast<uint64_t>(&Fdopendir);
  // memfd_create and two TLS initializer hooks are genuine STB_WEAK imports.
  // They intentionally stay null, so existing guest fallback paths are used.
  return 0;
}
