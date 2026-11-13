// AAPCS64 math import adapters for the actual game/cxx/net undefined symbols.
// GPR and FP argument allocations are independent, e.g. ldexp(D0,W0).
#include "math_imports.hpp"
#include "shim.h"
#include <atomic>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <string>

namespace {
#ifndef DF_MATH_DIAGNOSTIC_COUNTERS
#define DF_MATH_DIAGNOSTIC_COUNTERS 1
#endif
enum class Id {Acos,Acosf,Asin,Asinf,Atan,Atan2,Atan2f,Atanf,Cos,Cosf,Cosh,Difftime,Exp,Exp2,Fmod,Fmodf,Frexp,Ldexp,Ldexpf,Log,Log10,Log2,Modf,Pow,Sin,Sincos,Sincosf,Sinf,Sinh,Strtod,Strtof,Strtold,StrtoldL,Wcstod,Wcstof,Wcstold,Wcslen,Tan,Tanh,Dlsym,Count};
std::atomic_uint64_t calls[static_cast<unsigned>(Id::Count)]{};
std::atomic<ArcCtxFn> quad_handler{nullptr};
std::atomic<ArcCtxFn> quad_locale_handler{nullptr},quad_wide_handler{nullptr};
#if DF_MATH_DIAGNOSTIC_COUNTERS && defined(_MSC_VER)
__declspec(noinline)
#elif DF_MATH_DIAGNOSTIC_COUNTERS
__attribute__((noinline))
#else
inline
#endif
void note(Id id){
#if DF_MATH_DIAGNOSTIC_COUNTERS
  calls[static_cast<unsigned>(id)].fetch_add(1,std::memory_order_relaxed);
#else
  (void)id;
#endif
}
double d(const Arm64Ctx* c,unsigned n=0){return ARC_D_R(c,n);}
float s(const Arm64Ctx* c,unsigned n=0){return ARC_S_R(c,n);}
int exponent(const Arm64Ctx* c){return static_cast<int32_t>(c->x[0]);}
template<class T>T* pointer(const Arm64Ctx* c,unsigned n){return reinterpret_cast<T*>(static_cast<uintptr_t>(c->x[n]));}
void rd(Arm64Ctx* c,double value){arc_d_w(c,0,value);}
void rs(Arm64Ctx* c,float value){arc_s_w(c,0,value);}
#define UNARY_D(NAME,ID,FN) void NAME(Arm64Ctx* c){note(Id::ID);rd(c,std::FN(d(c)));}
#define UNARY_F(NAME,ID,FN) void NAME(Arm64Ctx* c){note(Id::ID);rs(c,std::FN(s(c)));}
#define BINARY_D(NAME,ID,FN) void NAME(Arm64Ctx* c){note(Id::ID);rd(c,std::FN(d(c),d(c,1)));}
#define BINARY_F(NAME,ID,FN) void NAME(Arm64Ctx* c){note(Id::ID);rs(c,std::FN(s(c),s(c,1)));}
UNARY_D(m_acos,Acos,acos) UNARY_F(m_acosf,Acosf,acos)
UNARY_D(m_asin,Asin,asin) UNARY_F(m_asinf,Asinf,asin)
UNARY_D(m_atan,Atan,atan) UNARY_F(m_atanf,Atanf,atan)
BINARY_D(m_atan2,Atan2,atan2) BINARY_F(m_atan2f,Atan2f,atan2)
UNARY_D(m_cos,Cos,cos) UNARY_F(m_cosf,Cosf,cos) UNARY_D(m_cosh,Cosh,cosh)
UNARY_D(m_exp,Exp,exp) UNARY_D(m_exp2,Exp2,exp2)
BINARY_D(m_fmod,Fmod,fmod) BINARY_F(m_fmodf,Fmodf,fmod)
UNARY_D(m_log,Log,log) UNARY_D(m_log10,Log10,log10) UNARY_D(m_log2,Log2,log2)
BINARY_D(m_pow,Pow,pow)
UNARY_D(m_sin,Sin,sin) UNARY_F(m_sinf,Sinf,sin) UNARY_D(m_sinh,Sinh,sinh)
UNARY_D(m_tan,Tan,tan) UNARY_D(m_tanh,Tanh,tanh)
void m_difftime(Arm64Ctx* c){note(Id::Difftime);const int64_t a=static_cast<int64_t>(c->x[0]),b=static_cast<int64_t>(c->x[1]);const bool positive=a>=b;const uint64_t distance=positive?static_cast<uint64_t>(a)-static_cast<uint64_t>(b):static_cast<uint64_t>(b)-static_cast<uint64_t>(a);const double value=static_cast<double>(distance);rd(c,positive?value:-value);}
void m_frexp(Arm64Ctx* c){note(Id::Frexp);int output=0;const double result=std::frexp(d(c),&output);if(auto p=pointer<int>(c,0))*p=output;rd(c,result);}
void m_ldexp(Arm64Ctx* c){note(Id::Ldexp);rd(c,std::ldexp(d(c),exponent(c)));}
void m_ldexpf(Arm64Ctx* c){note(Id::Ldexpf);rs(c,std::ldexp(s(c),exponent(c)));}
void m_modf(Arm64Ctx* c){note(Id::Modf);double output=0;const double result=std::modf(d(c),&output);if(auto p=pointer<double>(c,0))*p=output;rd(c,result);}
void m_sincos(Arm64Ctx* c){note(Id::Sincos);const double value=d(c);const double sine=std::sin(value),cosine=std::cos(value);if(auto p=pointer<double>(c,0))*p=sine;if(auto p=pointer<double>(c,1))*p=cosine;}
void m_sincosf(Arm64Ctx* c){note(Id::Sincosf);const float value=s(c);const float sine=std::sin(value),cosine=std::cos(value);if(auto p=pointer<float>(c,0))*p=sine;if(auto p=pointer<float>(c,1))*p=cosine;}
void m_strtod(Arm64Ctx* c){note(Id::Strtod);rd(c,std::strtod(pointer<const char>(c,0),pointer<char*>(c,1)));}
void m_strtof(Arm64Ctx* c){note(Id::Strtof);rs(c,std::strtof(pointer<const char>(c,0),pointer<char*>(c,1)));}
void m_strtold(Arm64Ctx* c){note(Id::Strtold);auto handler=quad_handler.load(std::memory_order_acquire);if(!handler){arc_trap(c,"strtold requires IEEE binary128 backend; MSVC double64 alias explicitly rejected");return;}handler(c);}
void m_strtold_l(Arm64Ctx* c){note(Id::StrtoldL);auto handler=quad_locale_handler.load(std::memory_order_acquire);if(!handler){arc_trap(c,"strtold_l requires IEEE binary128 plus validated guest locale backend");return;}handler(c);}
void m_wcstold(Arm64Ctx* c){note(Id::Wcstold);auto handler=quad_wide_handler.load(std::memory_order_acquire);if(!handler){arc_trap(c,"wcstold requires IEEE binary128 plus UTF32 grammar backend");return;}handler(c);}
template<bool Single> void wide_parse(Arm64Ctx* c){
  const uint32_t* input=pointer<const uint32_t>(c,0);if(!input){arc_trap(c,"null UTF32 numeric input");return;}
  std::string text;std::size_t count=0;
  // C-locale numeric syntax is ASCII; a non-ASCII UTF32 code point ends the
  // prefix, rather than reinterpreting Windows UTF16 storage as guest wchar_t.
  while(input[count]&&input[count]<=0x7f){if(count==1048576){arc_trap(c,"UTF32 numeric prefix exceeds bounded parser limit");return;}text.push_back(static_cast<char>(input[count++]));}
  char* end=nullptr;
  if constexpr(Single){const float result=std::strtof(text.c_str(),&end);if(auto p=pointer<uint32_t*>(c,1))*p=const_cast<uint32_t*>(input)+(end-text.c_str());rs(c,result);}
  else {const double result=std::strtod(text.c_str(),&end);if(auto p=pointer<uint32_t*>(c,1))*p=const_cast<uint32_t*>(input)+(end-text.c_str());rd(c,result);}
}
void m_wcstod(Arm64Ctx* c){note(Id::Wcstod);wide_parse<false>(c);}
void m_wcstof(Arm64Ctx* c){note(Id::Wcstof);wide_parse<true>(c);}
void m_wcslen(Arm64Ctx* c){note(Id::Wcslen);const uint32_t* input=pointer<const uint32_t>(c,0);if(!input){arc_trap(c,"null UTF32 wcslen input");return;}std::size_t length=0;while(input[length])++length;c->x[0]=length;}

struct Entry {const char* name;Id id;ArcCtxFn function;const char* signature;};
void m_dlsym(Arm64Ctx* c);
const Entry entries[]={
 {"acos",Id::Acos,m_acos,"D0 -> D0"},{"acosf",Id::Acosf,m_acosf,"S0 -> S0"},
 {"asin",Id::Asin,m_asin,"D0 -> D0"},{"asinf",Id::Asinf,m_asinf,"S0 -> S0"},
 {"atan",Id::Atan,m_atan,"D0 -> D0"},{"atan2",Id::Atan2,m_atan2,"D0,D1 -> D0"},{"atan2f",Id::Atan2f,m_atan2f,"S0,S1 -> S0"},{"atanf",Id::Atanf,m_atanf,"S0 -> S0"},
 {"cos",Id::Cos,m_cos,"D0 -> D0"},{"cosf",Id::Cosf,m_cosf,"S0 -> S0"},{"cosh",Id::Cosh,m_cosh,"D0 -> D0"},
 {"difftime",Id::Difftime,m_difftime,"X0(time64),X1(time64) -> D0"},{"exp",Id::Exp,m_exp,"D0 -> D0"},{"exp2",Id::Exp2,m_exp2,"D0 -> D0"},
 {"fmod",Id::Fmod,m_fmod,"D0,D1 -> D0"},{"fmodf",Id::Fmodf,m_fmodf,"S0,S1 -> S0"},
 {"frexp",Id::Frexp,m_frexp,"D0,X0(int32*) -> D0; writes4 bytes"},{"ldexp",Id::Ldexp,m_ldexp,"D0,W0(int32) -> D0"},{"ldexpf",Id::Ldexpf,m_ldexpf,"S0,W0(int32) -> S0"},
 {"log",Id::Log,m_log,"D0 -> D0"},{"log10",Id::Log10,m_log10,"D0 -> D0"},{"log2",Id::Log2,m_log2,"D0 -> D0"},
 {"modf",Id::Modf,m_modf,"D0,X0(double*) -> D0; writes8 bytes"},{"pow",Id::Pow,m_pow,"D0,D1 -> D0"},
 {"sin",Id::Sin,m_sin,"D0 -> D0"},{"sincos",Id::Sincos,m_sincos,"D0,X0(double*),X1(double*) -> void"},{"sincosf",Id::Sincosf,m_sincosf,"S0,X0(float*),X1(float*) -> void"},{"sinf",Id::Sinf,m_sinf,"S0 -> S0"},{"sinh",Id::Sinh,m_sinh,"D0 -> D0"},
 {"strtod",Id::Strtod,m_strtod,"X0(char*),X1(char**) -> D0"},{"strtof",Id::Strtof,m_strtof,"X0(char*),X1(char**) -> S0"},{"strtold",Id::Strtold,m_strtold,"X0(char*),X1(char**) -> Q0(binary128), guarded backend"},
 {"strtold_l",Id::StrtoldL,m_strtold_l,"X0(char*),X1(char**),X2(locale) -> Q0(binary128), guarded backend"},
 {"wcstod",Id::Wcstod,m_wcstod,"X0(UTF32*),X1(UTF32**) -> D0, C locale"},{"wcstof",Id::Wcstof,m_wcstof,"X0(UTF32*),X1(UTF32**) -> S0, C locale"},{"wcstold",Id::Wcstold,m_wcstold,"X0(UTF32*),X1(UTF32**) -> Q0(binary128), guarded backend"},
 {"wcslen",Id::Wcslen,m_wcslen,"X0(UTF32*) -> X0(size64), not Windows wchar16"},
 {"tan",Id::Tan,m_tan,"D0 -> D0"},{"tanh",Id::Tanh,m_tanh,"D0 -> D0"},
 {"dlsym",Id::Dlsym,m_dlsym,"X0(handle),X1(char*) -> X0(unique typed marker for known math)"},
};
static_assert(sizeof(entries)/sizeof(entries[0])==static_cast<unsigned>(Id::Count));

void m_dlsym(Arm64Ctx* c){
  note(Id::Dlsym);const char* name=pointer<const char>(c,1);
  if(name)if(auto address=DfMathResolve(name)){c->x[0]=address;return;}
  using Native=void*(*)(void*,const char*);
  auto vendor=reinterpret_cast<Native>(arc::ShimResolveSys("dlsym"));
  if(!vendor){arc_trap(c,"vendor dlsym shim unavailable");return;}
  c->x[0]=reinterpret_cast<uint64_t>(vendor(pointer<void>(c,0),name));
}
}

extern "C" uint64_t DfMathResolve(const char* name){if(!name)return 0;for(const auto& entry:entries)if(std::strcmp(name,entry.name)==0){const uint64_t address=reinterpret_cast<uint64_t>(entry.function);arc_register_ctx_native(address,entry.name,entry.function);return address;}return 0;}
extern "C" void DfMathSetQuadHandler(ArcCtxFn handler){quad_handler.store(handler,std::memory_order_release);}
extern "C" void DfMathSetQuadLocaleHandler(ArcCtxFn handler){quad_locale_handler.store(handler,std::memory_order_release);}
extern "C" void DfMathSetQuadWideHandler(ArcCtxFn handler){quad_wide_handler.store(handler,std::memory_order_release);}
extern "C" uint64_t DfMathCallCount(const char* name){for(const auto& entry:entries)if(std::strcmp(name,entry.name)==0)return calls[static_cast<unsigned>(entry.id)].load(std::memory_order_relaxed);return 0;}
extern "C" int DfMathCountersEnabled(){return DF_MATH_DIAGNOSTIC_COUNTERS;}
extern "C" const char* DfMathSignature(const char* name){for(const auto& entry:entries)if(std::strcmp(name,entry.name)==0)return entry.signature;return nullptr;}
extern "C" uint64_t DfMathSymbolCount(){return sizeof(entries)/sizeof(entries[0]);}
extern "C" const char* DfMathSymbolAt(uint64_t index){return index<DfMathSymbolCount()?entries[index].name:nullptr;}
