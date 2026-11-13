#pragma once
#include "arm64_context.h"
#ifdef __cplusplus
extern "C" {
#endif
enum {DF_LSE_SWAP=0,DF_LSE_ADD=1,DF_LSE_CAS=2};
uint64_t df_lse_rmw(Arm64Ctx* context,uint64_t address,uint64_t first,uint64_t second,unsigned width,unsigned operation);
#ifdef __cplusplus
}
#endif
