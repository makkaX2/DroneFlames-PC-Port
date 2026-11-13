#pragma once
// Bounded DT_GNU_HASH symbol count. Does not execute mapped code.
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <limits>
#include <string>

namespace df_pc {
inline bool count_gnu_symbols(const uint8_t* image,size_t span,uint64_t offset,
                              size_t* count,std::string* error) {
    auto fail=[&](const char* message){if(error)*error=message;return false;};
    if(!image||!count)return fail("null GNU hash input");
    if(offset>span||span-static_cast<size_t>(offset)<16)return fail("truncated GNU hash header");
    auto u32=[&](size_t at){uint32_t value;std::memcpy(&value,image+at,4);return value;};
    size_t cursor=static_cast<size_t>(offset);
    const uint32_t bucket_count=u32(cursor),symbol_offset=u32(cursor+4),bloom_count=u32(cursor+8);
    cursor+=16;
    if(bucket_count==0||bloom_count==0)return fail("invalid empty GNU hash dimensions");
    if(bloom_count>(span-cursor)/8)return fail("GNU hash bloom array exceeds image");
    cursor+=static_cast<size_t>(bloom_count)*8;
    if(bucket_count>(span-cursor)/4)return fail("GNU hash buckets exceed image");
    uint32_t maximum=0;
    for(uint32_t i=0;i<bucket_count;++i){uint32_t bucket=u32(cursor+static_cast<size_t>(i)*4);if(bucket&&bucket<symbol_offset)return fail("GNU hash bucket precedes symbol offset");if(bucket>maximum)maximum=bucket;}
    cursor+=static_cast<size_t>(bucket_count)*4;
    if(maximum==0){*count=symbol_offset;return true;}
    uint64_t symbol=maximum;
    uint64_t chain_index=symbol-symbol_offset;
    if(chain_index>=(span-cursor)/4)return fail("GNU hash initial chain exceeds image");
    size_t chain=cursor+static_cast<size_t>(chain_index)*4;
    for(;;) {
        if(span-chain<4)return fail("unterminated GNU hash chain");
        const uint32_t value=u32(chain);
        if(symbol>=std::numeric_limits<uint32_t>::max())return fail("GNU hash symbol index overflows");
        ++symbol;
        if(value&1){*count=static_cast<size_t>(symbol);return true;}
        chain+=4;
    }
}
}
