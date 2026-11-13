#pragma once
#include "arm64_context.h"
#include <cstdint>
// Each symbol returns its own ArcCtxFn marker, not a raw CRT address. This
// distinguishes strtod from a possibly aliased MSVC strtold implementation.
extern "C" uint64_t DfMathResolve(const char* name);
extern "C" void DfMathSetQuadHandler(ArcCtxFn handler);
extern "C" void DfMathSetQuadLocaleHandler(ArcCtxFn handler);
extern "C" void DfMathSetQuadWideHandler(ArcCtxFn handler);
extern "C" uint64_t DfMathCallCount(const char* name);
extern "C" int DfMathCountersEnabled();
extern "C" const char* DfMathSignature(const char* name);
extern "C" uint64_t DfMathSymbolCount();
extern "C" const char* DfMathSymbolAt(uint64_t index);
