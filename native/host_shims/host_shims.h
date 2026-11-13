#pragma once
#include <cstdint>

// Additional Android import resolver. stdout returns a DATA SYMBOL address
// (FILE**), not a callable function pointer. Unknown/weak imports return zero.
extern "C" uint64_t df_pc_resolve_extra(const char* name);
