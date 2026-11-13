#pragma once
#include "arm64_context.h"
#ifdef __cplusplus
extern "C" {
#endif
/* Install before guest calls start. 1 = handled; 0 = normal runtime fallback. */
typedef int (*ArcNativeDispatchHook)(Arm64Ctx*,uint64_t target);
void arc_set_native_dispatch_hook(ArcNativeDispatchHook hook);
#ifdef __cplusplus
}
#endif
