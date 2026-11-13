// Actual Android LP64 C imports whose Windows CRT ABI or units differ.
#include <windows.h>
#include <cerrno>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <limits>

namespace {
bool base_allowed(int base){return base==0||(base>=2&&base<=36);}
int64_t Strtol64(const char* text,char** end,int base){
    if(!base_allowed(base)){if(end)*end=const_cast<char*>(text);errno=EINVAL;return 0;}
    return static_cast<int64_t>(std::strtoll(text,end,base));
}
uint64_t Strtoul64(const char* text,char** end,int base){
    if(!base_allowed(base)){if(end)*end=const_cast<char*>(text);errno=EINVAL;return 0;}
    return static_cast<uint64_t>(std::strtoull(text,end,base));
}
int64_t ProcessClockMicros(){
    FILETIME created{},exited{},kernel{},user{};
    if(!GetProcessTimes(GetCurrentProcess(),&created,&exited,&kernel,&user)){errno=EIO;return -1;}
    ULARGE_INTEGER a{},b{};a.LowPart=kernel.dwLowDateTime;a.HighPart=kernel.dwHighDateTime;b.LowPart=user.dwLowDateTime;b.HighPart=user.dwHighDateTime;
    if(a.QuadPart>UINT64_MAX-b.QuadPart){errno=ERANGE;return -1;}
    // Bionic clock_t is LP64 and CLOCKS_PER_SEC=1,000,000. Windows clock()
    // instead reports wall-clock milliseconds, so it is not a valid alias.
    return static_cast<int64_t>((a.QuadPart+b.QuadPart)/10);
}
}
extern "C" uint64_t df_pc_resolve_lp64_numeric(const char* name){
    if(!name)return 0;
    if(std::strcmp(name,"strtol")==0)return reinterpret_cast<uint64_t>(&Strtol64);
    if(std::strcmp(name,"strtoul")==0)return reinterpret_cast<uint64_t>(&Strtoul64);
    if(std::strcmp(name,"clock")==0)return reinterpret_cast<uint64_t>(&ProcessClockMicros);
    return 0;
}
