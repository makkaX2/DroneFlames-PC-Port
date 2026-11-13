#include "df_lse.h"
#include <intrin.h>

extern "C" uint64_t df_lse_rmw(Arm64Ctx* context,uint64_t address,uint64_t first,uint64_t second,unsigned width,unsigned operation) {
    if((width!=1&&width!=4&&width!=8)||(address&(width-1))||operation>DF_LSE_CAS){arc_trap(context,"invalid or unaligned LSE atomic access");return 0;}
    // MSVC Interlocked operations provide ordering at least as strong as the
    // observed acquire/release LSE forms. No plain non-atomic load/store fallback.
    if(width==1) {
        volatile char* p=reinterpret_cast<volatile char*>(address);
        if(operation==DF_LSE_SWAP)return static_cast<uint8_t>(_InterlockedExchange8(p,static_cast<char>(first)));
        if(operation==DF_LSE_ADD)return static_cast<uint8_t>(_InterlockedExchangeAdd8(p,static_cast<char>(first)));
        return static_cast<uint8_t>(_InterlockedCompareExchange8(p,static_cast<char>(second),static_cast<char>(first)));
    }
    if(width==4) {
        volatile long* p=reinterpret_cast<volatile long*>(address);
        if(operation==DF_LSE_SWAP)return static_cast<uint32_t>(_InterlockedExchange(p,static_cast<long>(first)));
        if(operation==DF_LSE_ADD)return static_cast<uint32_t>(_InterlockedExchangeAdd(p,static_cast<long>(first)));
        return static_cast<uint32_t>(_InterlockedCompareExchange(p,static_cast<long>(second),static_cast<long>(first)));
    }
    volatile __int64* p=reinterpret_cast<volatile __int64*>(address);
    if(operation==DF_LSE_SWAP)return static_cast<uint64_t>(_InterlockedExchange64(p,static_cast<__int64>(first)));
    if(operation==DF_LSE_ADD)return static_cast<uint64_t>(_InterlockedExchangeAdd64(p,static_cast<__int64>(first)));
    return static_cast<uint64_t>(_InterlockedCompareExchange64(p,static_cast<__int64>(second),static_cast<__int64>(first)));
}
