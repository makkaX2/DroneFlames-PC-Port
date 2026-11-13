#include "lifted.h"

void fn1_9c890(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038569104));
  /* 9c890: bti c */
  /* bti: no architectural effect here */
  /* 9c894: ret  */
  return;
}

void fn1_a10e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038587620));
  /* a10e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a10e8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a10ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a10f0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a10f4: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* a10f8: nop  */
  /* nop: no architectural effect here */
  /* a10fc: adr x8, #0xa0f7c */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(659324)));
  /* a1100: ldr x1, [x1, #0x8b0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2224))));
  /* a1104: csel x0, x8, x0, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 0)));
  /* a1108: bl #0xa0c40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659724));
  fn1_a0c40(c);
  /* a110c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1110: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1114: ret  */
  return;
}

void fn1_a23d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592472));
  /* a23d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a23dc: sub sp, sp, #0x170 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(368)));
  /* a23e0: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a23e4: str x28, [sp, #0x130] */
  arc_st64(((c)->sp + INT64_C(304)), ARC_X_R(c, 28));
  /* a23e8: stp x24, x23, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a23ec: stp x22, x21, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a23f0: stp x20, x19, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a23f4: add x29, sp, #0x120 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(288)));
  /* a23f8: stp x1, x2, [sp, #0x88] */
  { const uint64_t _pa = ((c)->sp + INT64_C(136));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* a23fc: adrp x20, #0x151000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2400: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a2404: stp x3, x4, [sp, #0x98] */
  { const uint64_t _pa = ((c)->sp + INT64_C(152));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* a2408: nop  */
  /* nop: no architectural effect here */
  /* a240c: adr x0, #0x522c1 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(336577)));
  /* a2410: stp x5, x6, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* a2414: mov w1, #0xb */
  ARC_W_W(c, 1, UINT64_C(11));
  /* a2418: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* a241c: str x7, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 7));
  /* a2420: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* a2424: stp q2, q3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* a2428: stp q4, q5, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* a242c: stp q6, q7, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* a2430: ldr x20, [x20, #0x998] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(2456))));
  /* a2434: add x3, x20, #0x130 */
  ARC_X_W(c, 3, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* a2438: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664636));
  fn1_1427d0(c);
  /* a243c: mov x21, #-0x38 */
  ARC_X_W(c, 21, UINT64_C(18446744073709551560));
  /* a2440: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* a2444: add x9, sp, #0x88 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(136)));
  /* a2448: movk x21, #0xff80, lsl #32 */
  ARC_X_W(c, 21, ((ARC_X_R(c, 21) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* a244c: add x22, x8, #0x80 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + UINT64_C(128)));
  /* a2450: add x23, x9, #0x38 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) + UINT64_C(56)));
  /* a2454: add x24, x29, #0x50 */
  ARC_X_W(c, 24, (ARC_X_R(c, 29) + UINT64_C(80)));
  /* a2458: stp x22, x21, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a245c: add x0, x20, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* a2460: stp x24, x23, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a2464: sub x2, x29, #0x40 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a2468: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a246c: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* a2470: stp q1, q0, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a2474: bl #0x142728 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664696));
  fn1_142728(c);
  /* a2478: add x1, x20, #0x130 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(304)));
  /* a247c: mov w0, #0xa */
  ARC_W_W(c, 0, UINT64_C(10));
  /* a2480: bl #0x1427e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664708));
  fn1_1427e8(c);
  /* a2484: stp x22, x21, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a2488: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a248c: sub x2, x29, #0x60 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* a2490: stp x24, x23, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a2494: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a2498: ldp q1, q0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* a249c: stp q1, q0, [x29, #-0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-96));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* a24a0: bl #0x142740 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664740));
  fn1_142740(c);
  /* a24a4: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* a24a8: bl #0x142758 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664748));
  fn1_142758(c);
  /* a24ac: nop  */
  /* nop: no architectural effect here */
  /* a24b0: adr x0, #0x52121 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(336161)));
  /* a24b4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* a24b8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* a24bc: bl #0x142770 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664768));
  fn1_142770(c);
  /* a24c0: ldr x2, [x29, #0x18] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* a24c4: nop  */
  /* nop: no architectural effect here */
  /* a24c8: adr x1, #0x50afe */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(330494)));
  /* a24cc: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* a24d0: bl #0x142788 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664788));
  fn1_142788(c);
  /* a24d4: bl #0x1427a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664792));
  fn1_1427a0(c);
  /* a24d8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664796));
  fn1_1427b8(c);
}

void fn1_a8670(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038617712));
  /* a8670: bti c */
  /* bti: no architectural effect here */
  /* a8674: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a8678: ret  */
  return;
}

void fn1_aeba8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038643624));
  /* aeba8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aebac: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aebb0: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* aebb4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* aebb8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aebbc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aebc0: ldr x23, [x0, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* aebc4: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* aebc8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* aebcc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* aebd0: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* aebd4: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* aebd8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* aebdc: b.hi #0xaec00 */
  if (ARC_COND(c, 8)) goto L_aec00;
  /* aebe0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* aebe4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* aebe8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715756));
  fn1_1428a8(c);
  /* aebec: cbz x0, #0xaec64 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aec64;
  /* aebf0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* aebf4: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* aebf8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* aebfc: str x0, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 0));
L_aec00:;
  /* aec00: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* aec04: add x0, x23, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* aec08: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* aec0c: add x8, x8, #0x1e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(480)));
  /* aec10: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* aec14: mov w9, #0x42 */
  ARC_W_W(c, 9, UINT64_C(66));
  /* aec18: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* aec1c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* aec20: ldrh w10, [x20] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 20)));
  /* aec24: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* aec28: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* aec2c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* aec30: ldr q0, [x21] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 21)), arc_ld64(ARC_X_R(c, 21) + 8));
  /* aec34: bfxil w8, w10, #0, #6 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 10))) >> 0) & UINT64_C(63))));
  /* aec38: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* aec3c: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* aec40: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* aec44: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* aec48: str x10, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 10));
  /* aec4c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aec50: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* aec54: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aec58: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aec5c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aec60: ret  */
  return;
L_aec64:;
  /* aec64: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715880));
  fn1_142488(c);
}

void fn1_b390c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038663436));
  /* b390c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3910: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3914: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b3918: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b391c: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b3920: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b3924: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b3928: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b392c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735536));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b3930: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b3934: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b3938: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b393c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b3940: b.ls #0xb3968 */
  if (ARC_COND(c, 9)) goto L_b3968;
  /* b3944: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b3948: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* b394c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3950: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3954: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3958: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735580));
  fn1_142878(c);
  /* b395c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3960: cbz x0, #0xb3998 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3998;
  /* b3964: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3968:;
  /* b3968: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b396c: mov w9, #0x2e */
  ARC_W_W(c, 9, UINT64_C(46));
  /* b3970: mov w10, #0x2e2e */
  ARC_W_W(c, 10, UINT64_C(11822));
  /* b3974: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* b3978: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b397c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3980: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b3984: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b3988: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b398c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3990: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3994: ret  */
  return;
L_b3998:;
  /* b3998: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(735644));
  fn1_1427b8(c);
}

void fn1_b76d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038679252));
  /* b76d4: bti c */
  /* bti: no architectural effect here */
  /* b76d8: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b76dc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b76e0: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* b76e4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_ba034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038689844));
  /* ba034: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ba038: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ba03c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ba040: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ba044: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ba048: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ba04c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* ba050: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ba054: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ba058: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ba05c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ba060: b.hi #0xba084 */
  if (ARC_COND(c, 8)) goto L_ba084;
  /* ba064: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ba068: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba06c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761968));
  fn1_1428a8(c);
  /* ba070: cbz x0, #0xba0dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba0dc;
  /* ba074: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ba078: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba07c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ba080: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_ba084:;
  /* ba084: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ba088: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ba08c: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* ba090: add x8, x8, #0x418 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1048)));
  /* ba094: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba098: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* ba09c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ba0a0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ba0a4: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* ba0a8: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* ba0ac: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ba0b0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ba0b4: ldrb w11, [x19] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 19)));
  /* ba0b8: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* ba0bc: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* ba0c0: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ba0c4: strb w11, [x0, #0x18] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(24)), ARC_W_R(c, 11));
  /* ba0c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba0cc: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ba0d0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba0d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba0d8: ret  */
  return;
L_ba0dc:;
  /* ba0dc: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762080));
  fn1_142488(c);
}

void fn1_bd680(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038703744));
  /* bd680: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bd684: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* bd688: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd68c: str x25, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 25));
  /* bd690: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* bd694: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bd698: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bd69c: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* bd6a0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* bd6a4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* bd6a8: ldr w25, [x0, #0x18] */
  ARC_W_W(c, 25, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* bd6ac: ldr x20, [x0, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bd6b0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bd6b4: add x24, x8, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* bd6b8: add x8, x8, #0x58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(88)));
  /* bd6bc: stp x24, x24, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* bd6c0: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* bd6c4: stp q0, q0, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* bd6c8: stp q0, q0, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
L_bd6cc:;
  /* bd6cc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bd6d0: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* bd6d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bd6d8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bd6dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775904));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bd6e0: ldrb w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* bd6e4: ldr x21, [sp, #8] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(8))));
  /* bd6e8: cmp w8, #0xd */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(13));
  /* bd6ec: b.ne #0xbd7a8 */
  if (ARC_COND(c, 1)) goto L_bd7a8;
  /* bd6f0: ldr w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* bd6f4: ldp x23, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bd6f8: ldr x20, [x0, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bd6fc: cmp w8, w25 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 25));
  /* bd700: csel w25, w8, w25, lt */
  ARC_W_W(c, 25, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 25)));
  /* bd704: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* bd708: b.ne #0xbd770 */
  if (ARC_COND(c, 1)) goto L_bd770;
  /* bd70c: sub x22, x23, x21 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) - ARC_X_R(c, 21)));
  /* bd710: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* bd714: lsl x1, x22, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* bd718: b.eq #0xbd730 */
  if (ARC_COND(c, 0)) goto L_bd730;
  /* bd71c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bd720: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775972));
  fn1_142878(c);
  /* bd724: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* bd728: cbnz x0, #0xbd75c */
  if ((ARC_X_R(c, 0)) != 0) goto L_bd75c;
  /* bd72c: b #0xbd800 */
  goto L_bd800;
L_bd730:;
  /* bd730: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* bd734: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(775992));
  fn1_1428a8(c);
  /* bd738: cbz x0, #0xbd804 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd804;
  /* bd73c: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* bd740: b.eq #0xbd758 */
  if (ARC_COND(c, 0)) goto L_bd758;
  /* bd744: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* bd748: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* bd74c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* bd750: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776020));
  fn1_1449f0(c);
  /* bd754: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_bd758:;
  /* bd758: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
L_bd75c:;
  /* bd75c: asr x8, x22, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* bd760: add x23, x0, x22 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* bd764: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bd768: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* bd76c: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
L_bd770:;
  /* bd770: str x20, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* bd774: sub x8, x23, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - ARC_X_R(c, 21)));
  /* bd778: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* bd77c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* bd780: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* bd784: b.lo #0xbd6cc */
  if (ARC_COND(c, 3)) goto L_bd6cc;
  /* bd788: sub x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* bd78c: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* bd790: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bd794: b.hs #0xbd7e0 */
  if (ARC_COND(c, 2)) goto L_bd7e0;
  /* bd798: ldr x8, [x21, x9, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* bd79c: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* bd7a0: b.ne #0xbd6cc */
  if (ARC_COND(c, 1)) goto L_bd6cc;
  /* bd7a4: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_bd7a8:;
  /* bd7a8: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* bd7ac: b.eq #0xbd7b8 */
  if (ARC_COND(c, 0)) goto L_bd7b8;
  /* bd7b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bd7b4: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776120));
  fn1_142800(c);
L_bd7b8:;
  /* bd7b8: mov w0, w25 */
  ARC_W_W(c, 0, ARC_W_R(c, 25));
  /* bd7bc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bd7c0: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bd7c4: ldr x25, [sp, #0x70] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(112))));
  /* bd7c8: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bd7cc: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* bd7d0: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd7d4: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* bd7d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd7dc: ret  */
  return;
L_bd7e0:;
  /* bd7e0: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* bd7e4: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* bd7e8: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* bd7ec: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* bd7f0: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* bd7f4: add x3, x3, #0x32b */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(811)));
  /* bd7f8: mov w2, #0x94 */
  ARC_W_W(c, 2, UINT64_C(148));
  /* bd7fc: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776192));
  fn1_a23d8(c);
L_bd800:;
  /* bd800: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776196));
  fn1_1427b8(c);
L_bd804:;
  /* bd804: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776200));
  fn1_1427b8(c);
  /* bd808: b #0xbd80c */
  goto L_bd80c;
L_bd80c:;
  /* bd80c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bd810: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* bd814: cmp x0, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 24));
  /* bd818: b.eq #0xbd820 */
  if (ARC_COND(c, 0)) goto L_bd820;
  /* bd81c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776224));
  fn1_142800(c);
L_bd820:;
  /* bd820: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bd824: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776232));
  fn1_9cc20(c);
}

void fn1_c9d08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038754568));
  /* c9d08: bti c */
  /* bti: no architectural effect here */
  /* c9d0c: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* c9d10: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* c9d14: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* c9d18: asr x9, x9, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* c9d1c: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* c9d20: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* c9d24: b #0xc9d28 */
  fn1_c9d28(c); return;
}

void fn1_d7374(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809460));
  /* d7374: bti c */
  /* bti: no architectural effect here */
  /* d7378: brk #1 */
  arc_trap(c, "brk");
}

void fn1_db34c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825804));
  /* db34c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db350: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db354: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* db358: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db35c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db360: bl #0x142bd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(897892));
  fn1_142bd8(c);
  /* db364: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db368: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* db36c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* db370: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db374: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db378: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_dc478(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038830200));
  /* dc478: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc47c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc480: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc484: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc488: ldr x8, [x8, #0xa38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2616))));
  /* dc48c: ldr w9, [x8] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 8)));
  /* dc490: subs w9, w9, #1 */
  ARC_W_W(c, 9, arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1)));
  /* dc494: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* dc498: b.ne #0xdc4a8 */
  if (ARC_COND(c, 1)) goto L_dc4a8;
  /* dc49c: nop  */
  /* nop: no architectural effect here */
  /* dc4a0: adr x0, #0x157e50 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1408592)));
  /* dc4a4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(902312));
  fn1_142560(c);
L_dc4a8:;
  /* dc4a8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc4ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc4b0: ret  */
  return;
  /* dc4b4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(902328));
  fn1_a1454(c);
}

void fn1_e1888(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038851720));
  /* e1888: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e188c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1890: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e1894: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1898: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e189c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e18a0: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e18a4: cmp x2, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(22));
  /* e18a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e18ac: b.hi #0xe18d0 */
  if (ARC_COND(c, 8)) goto L_e18d0;
  /* e18b0: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e18b4: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* e18b8: strb w8, [x21], #1 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e18bc: cbz x19, #0xe1914 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e1914;
  /* e18c0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e18c4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e18c8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923852));
  fn1_1449f0(c);
  /* e18cc: b #0xe1914 */
  goto L_e1914;
L_e18d0:;
  /* e18d0: add x8, x19, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(9)));
  /* e18d4: cmp x8, #0x1e */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(30));
  /* e18d8: b.ls #0xe1934 */
  if (ARC_COND(c, 9)) goto L_e1934;
  /* e18dc: cmp x19, #0x2c */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(44));
  /* e18e0: mov w8, #0x2c */
  ARC_W_W(c, 8, UINT64_C(44));
  /* e18e4: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* e18e8: csel x8, x19, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 8)));
  /* e18ec: orr x23, x8, #7 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* e18f0: add x0, x23, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* e18f4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923896));
  fn1_1428f0(c);
  /* e18f8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e18fc: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e1900: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e1904: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923912));
  fn1_1449d8(c);
  /* e1908: add x8, x23, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + UINT64_C(2)));
  /* e190c: stp x19, x21, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1910: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_e1914:;
  /* e1914: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e1918: strb wzr, [x21, x19] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 19)), ARC_W_R(c, 31));
  /* e191c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1920: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e1924: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e1928: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e192c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1930: ret  */
  return;
L_e1934:;
  /* e1934: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923960));
  fn1_d7d54(c);
}

void fn1_e42d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038862544));
  /* e42d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e42d4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e42d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e42dc: nop  */
  /* nop: no architectural effect here */
  /* e42e0: adr x0, #0x51baa */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334762)));
  /* e42e4: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934632));
  fn1_da038(c);
}

void fn1_e8a14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038880788));
  /* e8a14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8a18: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8a1c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e8a20: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8a24: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e8a28: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8a2c: ldp x0, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* e8a30: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* e8a34: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e8a38: subs x8, x9, x0 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 0)));
  /* e8a3c: cbz x0, #0xe8a64 */
  if ((ARC_X_R(c, 0)) == 0) goto L_e8a64;
  /* e8a40: b.eq #0xe8a58 */
  if (ARC_COND(c, 0)) goto L_e8a58;
  /* e8a44: sub x10, x0, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) - ARC_X_R(c, 9)));
  /* e8a48: add x10, x10, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(7)));
  /* e8a4c: and x10, x10, #0xfffffffffffffff8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(18446744073709551608)));
  /* e8a50: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* e8a54: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_e8a58:;
  /* e8a58: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e8a5c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952928));
  fn1_142608(c);
  /* e8a60: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
L_e8a64:;
  /* e8a64: cbz x21, #0xe8ad0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_e8ad0;
  /* e8a68: lsr x8, x21, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(61)) & 63)));
  /* e8a6c: cbnz x8, #0xe8ae4 */
  if ((ARC_X_R(c, 8)) != 0) goto L_e8ae4;
  /* e8a70: lsl x0, x21, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(3)) & 63)));
  /* e8a74: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952952));
  fn1_1428f0(c);
  /* e8a78: cmp x21, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(4));
  /* e8a7c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* e8a80: b.hs #0xe8a90 */
  if (ARC_COND(c, 2)) goto L_e8a90;
  /* e8a84: mov x9, x21 */
  ARC_X_W(c, 9, ARC_X_R(c, 21));
  /* e8a88: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* e8a8c: b #0xe8ac0 */
  goto L_e8ac0;
L_e8a90:;
  /* e8a90: and x10, x21, #0x1ffffffffffffffc */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) & UINT64_C(2305843009213693948)));
  /* e8a94: dup v0.2d, x20 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 20));
    _t.u64[1] = (ARC_X_R(c, 20));
    (c)->q[0] = _t; }
  /* e8a98: and x9, x21, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) & UINT64_C(3)));
  /* e8a9c: add x8, x0, x10, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* e8aa0: add x11, x0, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* e8aa4: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_e8aa8:;
  /* e8aa8: subs x12, x12, #4 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(4)));
  /* e8aac: stp q0, q0, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e8ab0: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* e8ab4: b.ne #0xe8aa8 */
  if (ARC_COND(c, 1)) goto L_e8aa8;
  /* e8ab8: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* e8abc: b.eq #0xe8acc */
  if (ARC_COND(c, 0)) goto L_e8acc;
L_e8ac0:;
  /* e8ac0: subs x9, x9, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1)));
  /* e8ac4: str x20, [x8], #8 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* e8ac8: b.ne #0xe8ac0 */
  if (ARC_COND(c, 1)) goto L_e8ac0;
L_e8acc:;
  /* e8acc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e8ad0:;
  /* e8ad0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e8ad4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* e8ad8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8adc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8ae0: ret  */
  return;
L_e8ae4:;
  /* e8ae4: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953064));
  fn1_d9fe8(c);
}

void fn1_eadc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889920));
  /* eadc0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eadc4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eadc8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eadcc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962000));
  fn1_142560(c);
  /* eadd0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eadd4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eadd8: ret  */
  return;
  /* eaddc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962016));
  fn1_a1454(c);
}

void fn1_ec938(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038896952));
  /* ec938: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec93c: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec940: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ec944: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ec948: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ec94c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec950: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec954: ldr x8, [x0, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(80))));
  /* ec958: ldr x20, [x1, #0x48] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 1) + INT64_C(72))));
  /* ec95c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ec960: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ec964: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* ec968: b.hs #0xec990 */
  if (ARC_COND(c, 2)) goto L_ec990;
  /* ec96c: lsl x0, x20, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(3)) & 63)));
  /* ec970: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969076));
  fn1_1428a8(c);
  /* ec974: cbz x0, #0xecbe8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ecbe8;
  /* ec978: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec97c: lsl x0, x20, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(2)) & 63)));
  /* ec980: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969092));
  fn1_1428a8(c);
  /* ec984: cbz x0, #0xecbec */
  if ((ARC_X_R(c, 0)) == 0) goto L_ecbec;
  /* ec988: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ec98c: b #0xec998 */
  goto L_ec998;
L_ec990:;
  /* ec990: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* ec994: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_ec998:;
  /* ec998: ldr x9, [x22, #0x68] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(104))));
  /* ec99c: ldr x8, [x21, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(96))));
  /* ec9a0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ec9a4: b.hs #0xec9bc */
  if (ARC_COND(c, 2)) goto L_ec9bc;
  /* ec9a8: lsl x0, x8, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* ec9ac: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969136));
  fn1_1428a8(c);
  /* ec9b0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ec9b4: cbnz x0, #0xec9c0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ec9c0;
  /* ec9b8: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969148));
  fn1_142c08(c);
L_ec9bc:;
  /* ec9bc: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
L_ec9c0:;
  /* ec9c0: ldr x9, [x22, #0x80] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(128))));
  /* ec9c4: ldr x8, [x21, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(120))));
  /* ec9c8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ec9cc: b.hs #0xec9e4 */
  if (ARC_COND(c, 2)) goto L_ec9e4;
  /* ec9d0: lsl x0, x8, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* ec9d4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969176));
  fn1_1428a8(c);
  /* ec9d8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* ec9dc: cbnz x0, #0xec9e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ec9e8;
  /* ec9e0: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969188));
  fn1_142c08(c);
L_ec9e4:;
  /* ec9e4: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
L_ec9e8:;
  /* ec9e8: ldr x8, [x21, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* ec9ec: ldr w9, [x21, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 21) + INT64_C(8))));
  /* ec9f0: nop  */
  /* nop: no architectural effect here */
  /* ec9f4: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ec9f8: ldr q0, [x21, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))), arc_ld64((ARC_X_R(c, 21) + INT64_C(16)) + 8));
  /* ec9fc: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* eca00: str w9, [x22, #8] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(8)), ARC_W_R(c, 9));
  /* eca04: str q0, [x22, #0x10] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 22) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* eca08: b.eq #0xeca18 */
  if (ARC_COND(c, 0)) goto L_eca18;
  /* eca0c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* eca10: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* eca14: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969240));
  fn1_db2e0(c);
L_eca18:;
  /* eca18: ldr x25, [x22, #0x30] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* eca1c: cmp x25, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 26));
  /* eca20: b.eq #0xeca44 */
  if (ARC_COND(c, 0)) goto L_eca44;
  /* eca24: add x1, x25, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(8)));
  /* eca28: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eca2c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969264));
  fn1_bd950(c);
  /* eca30: cbnz x0, #0xeca44 */
  if ((ARC_X_R(c, 0)) != 0) goto L_eca44;
  /* eca34: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* eca38: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* eca3c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eca40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969284));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eca44:;
  /* eca44: ldr x8, [x22, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(80))));
  /* eca48: ldr x9, [x21, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* eca4c: ldr x10, [x21, #0x30] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* eca50: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* eca54: str x10, [x22, #0x30] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(48)), ARC_X_R(c, 10));
  /* eca58: b.hs #0xeca84 */
  if (ARC_COND(c, 2)) goto L_eca84;
  /* eca5c: ldr x0, [x22, #0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(56))));
  /* eca60: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969316));
  fn1_142800(c);
  /* eca64: ldr x0, [x22, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(64))));
  /* eca68: str x19, [x22, #0x38] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(56)), ARC_X_R(c, 19));
  /* eca6c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969328));
  fn1_142800(c);
  /* eca70: ldr x8, [x21, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* eca74: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* eca78: str x20, [x22, #0x40] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(64)), ARC_X_R(c, 20));
  /* eca7c: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* eca80: str x8, [x22, #0x50] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(80)), ARC_X_R(c, 8));
L_eca84:;
  /* eca84: str xzr, [x22, #0x48] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(72)), ARC_X_R(c, 31));
  /* eca88: ldr x8, [x21, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* eca8c: cbz x8, #0xecac8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ecac8;
  /* eca90: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_eca94:;
  /* eca94: ldr x9, [x21, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(56))));
  /* eca98: ldr x10, [x22, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 22) + INT64_C(56))));
  /* eca9c: ldr x9, [x9, x8, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* ecaa0: str x9, [x10, x8, lsl #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 3)), ARC_X_R(c, 9));
  /* ecaa4: ldr x9, [x21, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(64))));
  /* ecaa8: ldr x10, [x22, #0x40] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 22) + INT64_C(64))));
  /* ecaac: ldr w9, [x9, x8, lsl #2] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2))));
  /* ecab0: str w9, [x10, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 9));
  /* ecab4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ecab8: str x8, [x22, #0x48] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(72)), ARC_X_R(c, 8));
  /* ecabc: ldr x9, [x21, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* ecac0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ecac4: b.lo #0xeca94 */
  if (ARC_COND(c, 3)) goto L_eca94;
L_ecac8:;
  /* ecac8: ldr x8, [x22, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(104))));
  /* ecacc: ldr x9, [x21, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(96))));
  /* ecad0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ecad4: b.hs #0xecaf0 */
  if (ARC_COND(c, 2)) goto L_ecaf0;
  /* ecad8: ldr x0, [x22, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(88))));
  /* ecadc: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969440));
  fn1_142800(c);
  /* ecae0: ldr x8, [x21, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(96))));
  /* ecae4: str x23, [x22, #0x58] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(88)), ARC_X_R(c, 23));
  /* ecae8: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* ecaec: str x8, [x22, #0x68] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(104)), ARC_X_R(c, 8));
L_ecaf0:;
  /* ecaf0: str xzr, [x22, #0x60] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(96)), ARC_X_R(c, 31));
  /* ecaf4: ldr x8, [x21, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(96))));
  /* ecaf8: cbz x8, #0xecb28 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ecb28;
  /* ecafc: ldr x8, [x21, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(88))));
  /* ecb00: ldr x9, [x22, #0x58] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(88))));
  /* ecb04: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
L_ecb08:;
  /* ecb08: ldr x11, [x8, x10, lsl #3] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* ecb0c: str x11, [x9, x10, lsl #3] */
  arc_st64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 3)), ARC_X_R(c, 11));
  /* ecb10: ldr x10, [x22, #0x60] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 22) + INT64_C(96))));
  /* ecb14: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* ecb18: str x10, [x22, #0x60] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(96)), ARC_X_R(c, 10));
  /* ecb1c: ldr x11, [x21, #0x60] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 21) + INT64_C(96))));
  /* ecb20: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* ecb24: b.lo #0xecb08 */
  if (ARC_COND(c, 3)) goto L_ecb08;
L_ecb28:;
  /* ecb28: ldr x8, [x22, #0x80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(128))));
  /* ecb2c: ldr x9, [x21, #0x78] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(120))));
  /* ecb30: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ecb34: b.hs #0xecb50 */
  if (ARC_COND(c, 2)) goto L_ecb50;
  /* ecb38: ldr x0, [x22, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(112))));
  /* ecb3c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969536));
  fn1_142800(c);
  /* ecb40: ldr x8, [x21, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(120))));
  /* ecb44: str x24, [x22, #0x70] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(112)), ARC_X_R(c, 24));
  /* ecb48: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* ecb4c: str x8, [x22, #0x80] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(128)), ARC_X_R(c, 8));
L_ecb50:;
  /* ecb50: str xzr, [x22, #0x78] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(120)), ARC_X_R(c, 31));
  /* ecb54: ldr x8, [x21, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(120))));
  /* ecb58: cbz x8, #0xecb84 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ecb84;
  /* ecb5c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_ecb60:;
  /* ecb60: ldr x9, [x21, #0x70] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(112))));
  /* ecb64: ldr x10, [x22, #0x70] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 22) + INT64_C(112))));
  /* ecb68: ldr x9, [x9, x8, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* ecb6c: str x9, [x10, x8, lsl #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 3)), ARC_X_R(c, 9));
  /* ecb70: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ecb74: str x8, [x22, #0x78] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(120)), ARC_X_R(c, 8));
  /* ecb78: ldr x9, [x21, #0x78] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(120))));
  /* ecb7c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ecb80: b.lo #0xecb60 */
  if (ARC_COND(c, 3)) goto L_ecb60;
L_ecb84:;
  /* ecb84: cbz x24, #0xecb90 */
  if ((ARC_X_R(c, 24)) == 0) goto L_ecb90;
  /* ecb88: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* ecb8c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969616));
  fn1_142800(c);
L_ecb90:;
  /* ecb90: cbz x23, #0xecb9c */
  if ((ARC_X_R(c, 23)) == 0) goto L_ecb9c;
  /* ecb94: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ecb98: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969628));
  fn1_142800(c);
L_ecb9c:;
  /* ecb9c: cbz x20, #0xecba8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_ecba8;
  /* ecba0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ecba4: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969640));
  fn1_142800(c);
L_ecba8:;
  /* ecba8: cbz x19, #0xecbcc */
  if ((ARC_X_R(c, 19)) == 0) goto L_ecbcc;
  /* ecbac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ecbb0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ecbb4: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ecbb8: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ecbbc: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ecbc0: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ecbc4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ecbc8: b #0x142800 */
  fn1_142800(c); return;
L_ecbcc:;
  /* ecbcc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ecbd0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ecbd4: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ecbd8: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ecbdc: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ecbe0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ecbe4: ret  */
  return;
L_ecbe8:;
  /* ecbe8: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969708));
  fn1_142c08(c);
L_ecbec:;
  /* ecbec: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969712));
  fn1_142c08(c);
  /* ecbf0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ecbf4: cbnz x23, #0xecc08 */
  if ((ARC_X_R(c, 23)) != 0) goto L_ecc08;
  /* ecbf8: cbnz x20, #0xecc28 */
  if ((ARC_X_R(c, 20)) != 0) goto L_ecc28;
L_ecbfc:;
  /* ecbfc: cbnz x19, #0xecc34 */
  if ((ARC_X_R(c, 19)) != 0) goto L_ecc34;
L_ecc00:;
  /* ecc00: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ecc04: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969736));
  fn1_9cc20(c);
L_ecc08:;
  /* ecc08: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ecc0c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969744));
  fn1_142800(c);
  /* ecc10: cbz x20, #0xecbfc */
  if ((ARC_X_R(c, 20)) == 0) goto L_ecbfc;
  /* ecc14: b #0xecc28 */
  goto L_ecc28;
  /* ecc18: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ecc1c: b #0xecc34 */
  goto L_ecc34;
  /* ecc20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ecc24: cbz x20, #0xecbfc */
  if ((ARC_X_R(c, 20)) == 0) goto L_ecbfc;
L_ecc28:;
  /* ecc28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ecc2c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969776));
  fn1_142800(c);
  /* ecc30: cbz x19, #0xecc00 */
  if ((ARC_X_R(c, 19)) == 0) goto L_ecc00;
L_ecc34:;
  /* ecc34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ecc38: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969788));
  fn1_142800(c);
  /* ecc3c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ecc40: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969796));
  fn1_9cc20(c);
}

void fn1_ee6c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038904520));
  /* ee6c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ee6cc: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* ee6d0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ee6d4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ee6d8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ee6dc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* ee6e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee6e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ee6e8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* ee6ec: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ee6f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ee6f4: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ee6f8: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976636));
  fn1_1435f8(c);
  /* ee6fc: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* ee700: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ee704: b.ne #0xee810 */
  if (ARC_COND(c, 1)) goto L_ee810;
  /* ee708: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee70c: nop  */
  /* nop: no architectural effect here */
  /* ee710: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ee714: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee718: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee71c: ldr x21, [x8, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ee720: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* ee724: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* ee728: b.eq #0xee738 */
  if (ARC_COND(c, 0)) goto L_ee738;
  /* ee72c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ee730: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ee734: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976696));
  fn1_db2e0(c);
L_ee738:;
  /* ee738: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ee73c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ee740: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ee744: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976712));
  fn1_143748(c);
  /* ee748: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee74c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ee750: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee754: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee758: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* ee75c: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ee760: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ee764: add x5, sp, #0x10 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(16)));
  /* ee768: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ee76c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976752));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ee770: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* ee774: b.eq #0xee798 */
  if (ARC_COND(c, 0)) goto L_ee798;
  /* ee778: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ee77c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ee780: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976772));
  fn1_bd950(c);
  /* ee784: cbnz x0, #0xee798 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ee798;
  /* ee788: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ee78c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ee790: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ee794: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976792));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ee798:;
  /* ee798: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* ee79c: mov x9, #-0x80000001 */
  ARC_X_W(c, 9, UINT64_C(18446744071562067967));
  /* ee7a0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ee7a4: b.gt #0xee7b4 */
  if (ARC_COND(c, 12)) goto L_ee7b4;
  /* ee7a8: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee7ac: mov w9, #-0xffffffff80000000 */
  ARC_W_W(c, 9, UINT64_C(18446744071562067968));
  /* ee7b0: b #0xee7c8 */
  goto L_ee7c8;
L_ee7b4:;
  /* ee7b4: mov w9, #-0xffffffff80000000 */
  ARC_W_W(c, 9, UINT64_C(18446744071562067968));
  /* ee7b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ee7bc: b.lt #0xee7d8 */
  if (ARC_COND(c, 11)) goto L_ee7d8;
  /* ee7c0: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee7c4: mov w9, #0x7fffffff */
  ARC_W_W(c, 9, UINT64_C(2147483647));
L_ee7c8:;
  /* ee7c8: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* ee7cc: stur w8, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 8));
  /* ee7d0: str w9, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 9));
  /* ee7d4: b #0xee7dc */
  goto L_ee7dc;
L_ee7d8:;
  /* ee7d8: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_ee7dc:;
  /* ee7dc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee7e0: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee7e4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee7e8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee7ec: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ee7f0: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ee7f4: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ee7f8: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ee7fc: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ee800: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ee804: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ee808: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ee80c: b.ne #0xee82c */
  if (ARC_COND(c, 1)) goto L_ee82c;
L_ee810:;
  /* ee810: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee814: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ee818: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ee81c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ee820: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* ee824: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ee828: ret  */
  return;
L_ee82c:;
  /* ee82c: nop  */
  /* nop: no architectural effect here */
  /* ee830: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ee834: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976952));
  fn1_ec720(c);
  /* ee838: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* ee83c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ee840: b.eq #0xee864 */
  if (ARC_COND(c, 0)) goto L_ee864;
  /* ee844: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ee848: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ee84c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976976));
  fn1_bd950(c);
  /* ee850: cbnz x0, #0xee864 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ee864;
  /* ee854: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ee858: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ee85c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ee860: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976996));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ee864:;
  /* ee864: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ee868: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977004));
  fn1_142548(c);
  /* ee86c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee870: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee874: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee878: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ee87c: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* ee880: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ee884: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ee888: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ee88c: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ee890: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee894: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee898: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ee89c: tbnz w8, #0, #0xee8a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ee8a8;
  /* ee8a0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977060));
  fn1_142980(c);
  /* ee8a4: b #0xee7dc */
  goto L_ee7dc;
L_ee8a8:;
  /* ee8a8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977068));
  fn1_1429b0(c);
  /* ee8ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee8b0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977076));
  fn1_142980(c);
  /* ee8b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee8b8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977084));
  fn1_9cc20(c);
  /* ee8bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977088));
  fn1_a1454(c);
}

void fn1_f3828(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925352));
  /* f3828: bti c */
  /* bti: no architectural effect here */
  /* f382c: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* f3830: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f50fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038931708));
  /* f50fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f5100: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* f5104: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f5108: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f510c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f5110: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f5114: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5118: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f511c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f5120: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f5124: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f5128: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f512c: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003824));
  fn1_143670(c);
  /* f5130: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* f5134: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f5138: b.ne #0xf5244 */
  if (ARC_COND(c, 1)) goto L_f5244;
  /* f513c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5140: nop  */
  /* nop: no architectural effect here */
  /* f5144: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f5148: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f514c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5150: ldr x21, [x8, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f5154: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f5158: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* f515c: b.eq #0xf516c */
  if (ARC_COND(c, 0)) goto L_f516c;
  /* f5160: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f5164: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f5168: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003884));
  fn1_db2e0(c);
L_f516c:;
  /* f516c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f5170: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5174: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f5178: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003900));
  fn1_143748(c);
  /* f517c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5180: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f5184: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5188: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f518c: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* f5190: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f5194: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f5198: add x5, sp, #0x10 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(16)));
  /* f519c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f51a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f51a4: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f51a8: b.eq #0xf51cc */
  if (ARC_COND(c, 0)) goto L_f51cc;
  /* f51ac: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f51b0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f51b4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003960));
  fn1_bd950(c);
  /* f51b8: cbnz x0, #0xf51cc */
  if ((ARC_X_R(c, 0)) != 0) goto L_f51cc;
  /* f51bc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f51c0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f51c4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f51c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003980));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f51cc:;
  /* f51cc: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* f51d0: mov x9, #-0x80000001 */
  ARC_X_W(c, 9, UINT64_C(18446744071562067967));
  /* f51d4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f51d8: b.gt #0xf51e8 */
  if (ARC_COND(c, 12)) goto L_f51e8;
  /* f51dc: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f51e0: mov w9, #-0xffffffff80000000 */
  ARC_W_W(c, 9, UINT64_C(18446744071562067968));
  /* f51e4: b #0xf51fc */
  goto L_f51fc;
L_f51e8:;
  /* f51e8: mov w9, #-0xffffffff80000000 */
  ARC_W_W(c, 9, UINT64_C(18446744071562067968));
  /* f51ec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f51f0: b.lt #0xf520c */
  if (ARC_COND(c, 11)) goto L_f520c;
  /* f51f4: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f51f8: mov w9, #0x7fffffff */
  ARC_W_W(c, 9, UINT64_C(2147483647));
L_f51fc:;
  /* f51fc: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* f5200: stur w8, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 8));
  /* f5204: str w9, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 9));
  /* f5208: b #0xf5210 */
  goto L_f5210;
L_f520c:;
  /* f520c: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_f5210:;
  /* f5210: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5214: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5218: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f521c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5220: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f5224: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f5228: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f522c: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5230: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f5234: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f5238: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f523c: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f5240: b.ne #0xf5260 */
  if (ARC_COND(c, 1)) goto L_f5260;
L_f5244:;
  /* f5244: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5248: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f524c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f5250: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5254: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* f5258: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f525c: ret  */
  return;
L_f5260:;
  /* f5260: nop  */
  /* nop: no architectural effect here */
  /* f5264: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f5268: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004140));
  fn1_ec720(c);
  /* f526c: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f5270: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f5274: b.eq #0xf5298 */
  if (ARC_COND(c, 0)) goto L_f5298;
  /* f5278: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f527c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5280: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004164));
  fn1_bd950(c);
  /* f5284: cbnz x0, #0xf5298 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5298;
  /* f5288: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f528c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f5290: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5294: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004184));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5298:;
  /* f5298: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f529c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004192));
  fn1_142548(c);
  /* f52a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f52a4: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f52a8: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f52ac: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f52b0: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f52b4: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f52b8: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f52bc: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f52c0: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f52c4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f52c8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f52cc: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f52d0: tbnz w8, #0, #0xf52dc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f52dc;
  /* f52d4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004248));
  fn1_142980(c);
  /* f52d8: b #0xf5210 */
  goto L_f5210;
L_f52dc:;
  /* f52dc: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004256));
  fn1_1429b0(c);
  /* f52e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f52e4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004264));
  fn1_142980(c);
  /* f52e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f52ec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004272));
  fn1_9cc20(c);
  /* f52f0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004276));
  fn1_a1454(c);
}

void fn1_fabd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038954964));
  /* fabd4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fabd8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fabdc: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* fabe0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fabe4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fabe8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fabec: ldr w9, [x0, #0x60] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(96))));
  /* fabf0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* fabf4: tbnz w9, #4, #0xfac08 */
  if (((ARC_W_R(c, 9)) >> 4 & 1) != 0) goto L_fac08;
  /* fabf8: tbnz w9, #3, #0xfac28 */
  if (((ARC_W_R(c, 9)) >> 3 & 1) != 0) goto L_fac28;
  /* fabfc: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fac00: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* fac04: b #0xfac9c */
  goto L_fac9c;
L_fac08:;
  /* fac08: ldr x23, [x0, #0x58] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(88))));
  /* fac0c: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* fac10: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* fac14: b.hs #0xfac20 */
  if (ARC_COND(c, 2)) goto L_fac20;
  /* fac18: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* fac1c: str x8, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), ARC_X_R(c, 8));
L_fac20:;
  /* fac20: ldr x21, [x0, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* fac24: b #0xfac30 */
  goto L_fac30;
L_fac28:;
  /* fac28: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* fac2c: ldr x23, [x0, #0x20] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
L_fac30:;
  /* fac30: sub x20, x23, x21 */
  ARC_X_W(c, 20, (ARC_X_R(c, 23) - ARC_X_R(c, 21)));
  /* fac34: cmn x20, #8 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(8), 0);
  /* fac38: b.hs #0xfacb4 */
  if (ARC_COND(c, 2)) goto L_facb4;
  /* fac3c: cmp x20, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(22));
  /* fac40: b.hi #0xfac58 */
  if (ARC_COND(c, 8)) goto L_fac58;
  /* fac44: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* fac48: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* fac4c: cmp x23, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 21));
  /* fac50: b.ne #0xfac88 */
  if (ARC_COND(c, 1)) goto L_fac88;
  /* fac54: b #0xfac98 */
  goto L_fac98;
L_fac58:;
  /* fac58: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* fac5c: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* fac60: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* fac64: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* fac68: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fac6c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1027184));
  fn1_1428f0(c);
  /* fac70: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* fac74: stp x20, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* fac78: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fac7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fac80: cmp x23, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 21));
  /* fac84: b.eq #0xfac98 */
  if (ARC_COND(c, 0)) goto L_fac98;
L_fac88:;
  /* fac88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fac8c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* fac90: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* fac94: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1027224));
  fn1_1449f0(c);
L_fac98:;
  /* fac98: strb wzr, [x19, x20] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
L_fac9c:;
  /* fac9c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* faca0: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* faca4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* faca8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* facac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* facb0: ret  */
  return;
L_facb4:;
  /* facb4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1027256));
  fn1_d7d54(c);
}

void fn1_fe210(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038968848));
  /* fe210: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe214: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* fe218: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe21c: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* fe220: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fe224: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* fe228: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* fe22c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fe230: b.eq #0xfe260 */
  if (ARC_COND(c, 0)) goto L_fe260;
  /* fe234: ldrb w9, [x20, #0x61] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(97))));
  /* fe238: ldrb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* fe23c: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* fe240: tbz w9, #0, #0xfe278 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_fe278;
  /* fe244: tbz w8, #0, #0xfe310 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fe310;
  /* fe248: ldr w0, [x20, #0x5c] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 20) + INT64_C(92))));
  /* fe24c: ldr x1, [x20, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* fe250: bl #0x143808 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040980));
  fn1_143808(c);
  /* fe254: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fe258: b.ne #0xfe310 */
  if (ARC_COND(c, 1)) goto L_fe310;
  /* fe25c: b #0xfe308 */
  goto L_fe308;
L_fe260:;
  /* fe260: ldrb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* fe264: tbnz w8, #0, #0xfe308 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_fe308;
  /* fe268: ldr w19, [x20, #0x5c] */
  ARC_W_W(c, 19, arc_ld32((ARC_X_R(c, 20) + INT64_C(92))));
  /* fe26c: cmn w19, #1 */
  (void)arc_add32(c, ARC_W_R(c, 19), UINT64_C(1), 0);
  /* fe270: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* fe274: b #0xfe318 */
  goto L_fe318;
L_fe278:;
  /* fe278: tbz w8, #0, #0xfe310 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fe310;
  /* fe27c: ldp x0, x1, [x20, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(72));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* fe280: add x10, x29, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fe284: ldr w9, [x20, #0x5c] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(92))));
  /* fe288: sub x2, x29, #0xc */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* fe28c: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* fe290: add x5, x29, #0x18 */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fe294: add x6, x10, #8 */
  ARC_X_W(c, 6, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* fe298: sub x7, x29, #8 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe29c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fe2a0: sturb w9, [x29, #-0xc] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 9));
  /* fe2a4: sub x9, x29, #0xc */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* fe2a8: orr x3, x9, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* fe2ac: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* fe2b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041076));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe2b4: sub w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* fe2b8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* fe2bc: b.lo #0xfe308 */
  if (ARC_COND(c, 3)) goto L_fe308;
  /* fe2c0: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* fe2c4: b.ne #0xfe2dc */
  if (ARC_COND(c, 1)) goto L_fe2dc;
  /* fe2c8: ldr w8, [x20, #0x5c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(92))));
  /* fe2cc: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* fe2d0: orr x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* fe2d4: strb w8, [x29, #0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 8));
  /* fe2d8: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
L_fe2dc:;
  /* fe2dc: add x21, x29, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) + UINT64_C(24)));
L_fe2e0:;
  /* fe2e0: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fe2e4: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* fe2e8: b.ls #0xfe310 */
  if (ARC_COND(c, 9)) goto L_fe310;
  /* fe2ec: sub x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* fe2f0: ldr x1, [x20, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* fe2f4: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* fe2f8: ldurb w0, [x8, #-1] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 8) + INT64_C(-1))));
  /* fe2fc: bl #0x143808 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041152));
  fn1_143808(c);
  /* fe300: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fe304: b.ne #0xfe2e0 */
  if (ARC_COND(c, 1)) goto L_fe2e0;
L_fe308:;
  /* fe308: mov w19, #-1 */
  ARC_W_W(c, 19, UINT64_C(18446744073709551615));
  /* fe30c: b #0xfe31c */
  goto L_fe31c;
L_fe310:;
  /* fe310: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* fe314: str w19, [x20, #0x5c] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(92)), ARC_W_R(c, 19));
L_fe318:;
  /* fe318: strb w8, [x20, #0x60] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(96)), ARC_W_R(c, 8));
L_fe31c:;
  /* fe31c: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* fe320: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe324: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* fe328: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe32c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* fe330: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe334: ret  */
  return;
}

void fn1_109f24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039017252));
  /* 109f24: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 109f28: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 109f2c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 109f30: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 109f34: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 109f38: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 109f3c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 109f40: ldrb w8, [x2, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(8))));
  /* 109f44: mov w20, w4 */
  ARC_W_W(c, 20, ARC_W_R(c, 4));
  /* 109f48: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 109f4c: tbnz w8, #0, #0x109f7c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_109f7c;
  /* 109f50: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 109f54: and x4, x20, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 20) & UINT64_C(1)));
  /* 109f58: ldr x16, [x8, #0x30] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 109f5c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 109f60: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 109f64: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 109f68: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 109f6c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 109f70: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 109f74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 109f78: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_109f7c:;
  /* 109f7c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 109f80: add x1, x2, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 2) + UINT64_C(48)));
  /* 109f84: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089416));
  fn1_143460(c);
  /* 109f88: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109f8c: ldr x24, [x24, #0xcb0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3248))));
  /* 109f90: ldur x23, [x29, #-8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 109f94: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 109f98: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 109f9c: b.eq #0x10a058 */
  if (ARC_COND(c, 0)) goto L_10a058;
  /* 109fa0: nop  */
  /* nop: no architectural effect here */
  /* 109fa4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109fa8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089452));
  fn1_142518(c);
  /* 109fac: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 109fb0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 109fb4: b.ne #0x109fe0 */
  if (ARC_COND(c, 1)) goto L_109fe0;
  /* 109fb8: nop  */
  /* nop: no architectural effect here */
  /* 109fbc: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109fc0: nop  */
  /* nop: no architectural effect here */
  /* 109fc4: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_109fc8:;
  /* 109fc8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 109fcc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 109fd0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089492));
  fn1_142530(c);
  /* 109fd4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 109fd8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 109fdc: b.eq #0x109fc8 */
  if (ARC_COND(c, 0)) goto L_109fc8;
L_109fe0:;
  /* 109fe0: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 109fe4: cbz x8, #0x109ff8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_109ff8;
  /* 109fe8: nop  */
  /* nop: no architectural effect here */
  /* 109fec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109ff0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089524));
  fn1_142560(c);
  /* 109ff4: b #0x10a058 */
  goto L_10a058;
L_109ff8:;
  /* 109ff8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 109ffc: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 10a000: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 10a004: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 10a008: nop  */
  /* nop: no architectural effect here */
  /* 10a00c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10a010: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089556));
  fn1_142560(c);
  /* 10a014: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10a018: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10a01c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10a020: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089572));
  fn1_a2030(c);
  /* 10a024: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10a028: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10a02c: nop  */
  /* nop: no architectural effect here */
  /* 10a030: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10a034: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089592));
  fn1_142518(c);
  /* 10a038: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10a03c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 10a040: nop  */
  /* nop: no architectural effect here */
  /* 10a044: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10a048: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089612));
  fn1_142560(c);
  /* 10a04c: nop  */
  /* nop: no architectural effect here */
  /* 10a050: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10a054: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089624));
  fn1_142578(c);
L_10a058:;
  /* 10a058: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10a05c: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 10a060: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10a064: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10a068: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10a06c: b.hs #0x10a160 */
  if (ARC_COND(c, 2)) goto L_10a160;
  /* 10a070: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10a074: cbz x21, #0x10a160 */
  if ((ARC_X_R(c, 21)) == 0) goto L_10a160;
  /* 10a078: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10a07c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089664));
  fn1_143478(c);
  /* 10a080: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10a084: tst w20, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 20) & UINT64_C(1)));
  /* 10a088: mov w9, #0x38 */
  ARC_W_W(c, 9, UINT64_C(56));
  /* 10a08c: mov w10, #0x30 */
  ARC_W_W(c, 10, UINT64_C(48));
  /* 10a090: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10a094: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 10a098: csel x9, x10, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10a09c: ldr x9, [x8, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
  /* 10a0a0: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 10a0a4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089704));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10a0a8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 10a0ac: ldp x9, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 10a0b0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10a0b4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10a0b8: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10a0bc: cbz x9, #0x10a130 */
  if ((ARC_X_R(c, 9)) == 0) goto L_10a130;
  /* 10a0c0: orr x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 10a0c4: csel x21, x20, x0, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 0)));
  /* 10a0c8: b #0x10a100 */
  goto L_10a100;
L_10a0cc:;
  /* 10a0cc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10a0d0: str x9, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 9));
  /* 10a0d4: strb w1, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 1));
L_10a0d8:;
  /* 10a0d8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 10a0dc: ldp x9, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* 10a0e0: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 10a0e4: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10a0e8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10a0ec: csel x11, x20, x0, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 0)));
  /* 10a0f0: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10a0f4: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 10a0f8: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* 10a0fc: b.eq #0x10a130 */
  if (ARC_COND(c, 0)) goto L_10a130;
L_10a100:;
  /* 10a100: cbz x19, #0x10a0d8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_10a0d8;
  /* 10a104: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 10a108: ldrb w1, [x21] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 21)));
  /* 10a10c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10a110: b.ne #0x10a0cc */
  if (ARC_COND(c, 1)) goto L_10a0cc;
  /* 10a114: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10a118: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 10a11c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a120: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089828));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10a124: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10a128: csel x19, xzr, x19, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 10a12c: b #0x10a0d8 */
  goto L_10a0d8;
L_10a130:;
  /* 10a130: tbz w8, #0, #0x10a140 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10a140;
  /* 10a134: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 10a138: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10a13c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089856));
  fn1_142608(c);
L_10a140:;
  /* 10a140: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a144: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10a148: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10a14c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10a150: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10a154: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 10a158: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10a15c: ret  */
  return;
L_10a160:;
  /* 10a160: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089892));
  fn1_fc3b8(c);
  /* 10a164: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10a168: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a16c: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089904));
  fn1_d2a78(c);
  /* 10a170: b #0x10a1a0 */
  goto L_10a1a0;
  /* 10a174: b #0x10a19c */
  goto L_10a19c;
  /* 10a178: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 10a17c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10a180: tbz w8, #0, #0x10a194 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10a194;
  /* 10a184: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 10a188: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 10a18c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10a190: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089940));
  fn1_142608(c);
L_10a194:;
  /* 10a194: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a198: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089948));
  fn1_9cc20(c);
L_10a19c:;
  /* 10a19c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10a1a0:;
  /* 10a1a0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10a1a4: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089960));
  fn1_143478(c);
  /* 10a1a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a1ac: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089968));
  fn1_9cc20(c);
}

void fn1_1128dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039052508));
  /* 1128dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1128e0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1128e4: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 1128e8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1128ec: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1128f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1128f4: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 1128f8: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 1128fc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 112900: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 112904: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 112908: cbnz x0, #0x112920 */
  if ((ARC_X_R(c, 0)) != 0) goto L_112920;
  /* 11290c: b #0x11296c */
  goto L_11296c;
L_112910:;
  /* 112910: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 112914: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 112918: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 11291c: cbz x0, #0x11296c */
  if ((ARC_X_R(c, 0)) == 0) goto L_11296c;
L_112920:;
  /* 112920: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112924: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112928: b.eq #0x112950 */
  if (ARC_COND(c, 0)) goto L_112950;
  /* 11292c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 112930: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112934: b.eq #0x112964 */
  if (ARC_COND(c, 0)) goto L_112964;
L_112938:;
  /* 112938: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 11293c: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 112940: cset w23, eq */
  ARC_W_W(c, 23, (ARC_COND(c, 0) ? 1 : 0));
  /* 112944: cbnz x20, #0x112974 */
  if ((ARC_X_R(c, 20)) != 0) goto L_112974;
L_112948:;
  /* 112948: tbz w23, #0, #0x1129b8 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_1129b8;
  /* 11294c: b #0x112a20 */
  goto L_112a20;
L_112950:;
  /* 112950: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 112954: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112958: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124700));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11295c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112960: b.ne #0x112938 */
  if (ARC_COND(c, 1)) goto L_112938;
L_112964:;
  /* 112964: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 112968: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_11296c:;
  /* 11296c: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 112970: cbz x20, #0x112948 */
  if ((ARC_X_R(c, 20)) == 0) goto L_112948;
L_112974:;
  /* 112974: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112978: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 11297c: b.eq #0x112988 */
  if (ARC_COND(c, 0)) goto L_112988;
  /* 112980: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 112984: b #0x1129a4 */
  goto L_1129a4;
L_112988:;
  /* 112988: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11298c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 112990: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112994: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124760));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112998: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* 11299c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1129a0: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
L_1129a4:;
  /* 1129a4: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* 1129a8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1129ac: csel x20, xzr, x20, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 1129b0: cmp w23, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8));
  /* 1129b4: b.eq #0x112a20 */
  if (ARC_COND(c, 0)) goto L_112a20;
L_1129b8:;
  /* 1129b8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1129bc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1129c0: b.eq #0x1129cc */
  if (ARC_COND(c, 0)) goto L_1129cc;
  /* 1129c4: ldr w2, [x8] */
  ARC_W_W(c, 2, arc_ld32(ARC_X_R(c, 8)));
  /* 1129c8: b #0x1129dc */
  goto L_1129dc;
L_1129cc:;
  /* 1129cc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1129d0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1129d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124824));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1129d8: mov w2, w0 */
  ARC_W_W(c, 2, ARC_W_R(c, 0));
L_1129dc:;
  /* 1129dc: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 1129e0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1129e4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1129e8: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 1129ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124848));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1129f0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1129f4: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 1129f8: tbz w8, #0, #0x112a20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_112a20;
  /* 1129fc: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112a00: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112a04: b.ne #0x112910 */
  if (ARC_COND(c, 1)) goto L_112910;
  /* 112a08: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 112a0c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 112a10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124884));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112a14: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 112a18: cbnz x0, #0x112920 */
  if ((ARC_X_R(c, 0)) != 0) goto L_112920;
  /* 112a1c: b #0x11296c */
  goto L_11296c;
L_112a20:;
  /* 112a20: cbz x0, #0x112a6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_112a6c;
  /* 112a24: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112a28: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112a2c: b.eq #0x112a54 */
  if (ARC_COND(c, 0)) goto L_112a54;
  /* 112a30: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 112a34: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112a38: b.eq #0x112a68 */
  if (ARC_COND(c, 0)) goto L_112a68;
L_112a3c:;
  /* 112a3c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 112a40: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 112a44: cset w21, eq */
  ARC_W_W(c, 21, (ARC_COND(c, 0) ? 1 : 0));
  /* 112a48: cbnz x20, #0x112a74 */
  if ((ARC_X_R(c, 20)) != 0) goto L_112a74;
L_112a4c:;
  /* 112a4c: tbnz w21, #0, #0x112aa8 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_112aa8;
  /* 112a50: b #0x112ab4 */
  goto L_112ab4;
L_112a54:;
  /* 112a54: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 112a58: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112a5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124960));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112a60: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112a64: b.ne #0x112a3c */
  if (ARC_COND(c, 1)) goto L_112a3c;
L_112a68:;
  /* 112a68: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
L_112a6c:;
  /* 112a6c: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 112a70: cbz x20, #0x112a4c */
  if ((ARC_X_R(c, 20)) == 0) goto L_112a4c;
L_112a74:;
  /* 112a74: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 112a78: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 112a7c: b.eq #0x112a88 */
  if (ARC_COND(c, 0)) goto L_112a88;
  /* 112a80: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 112a84: b #0x112a98 */
  goto L_112a98;
L_112a88:;
  /* 112a88: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 112a8c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 112a90: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 112a94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125016));
  arc_dispatch(c, ARC_X_R(c, 8));
L_112a98:;
  /* 112a98: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 112a9c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 112aa0: eor w8, w21, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) ^ ARC_W_R(c, 8)));
  /* 112aa4: tbnz w8, #0, #0x112ab4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_112ab4;
L_112aa8:;
  /* 112aa8: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 112aac: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 112ab0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_112ab4:;
  /* 112ab4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 112ab8: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 112abc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 112ac0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 112ac4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 112ac8: ret  */
  return;
}

void fn1_113fac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058348));
  /* 113fac: bti c */
  /* bti: no architectural effect here */
  /* 113fb0: ldr w0, [x0, #0x78] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(120))));
  /* 113fb4: ret  */
  return;
}

void fn1_11e95c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039101788));
  /* 11e95c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11e960: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11e964: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11e968: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11e96c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11e970: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11e974: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11e978: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e97c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11e980: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11e984: ldr x23, [x23, #0xb40] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(2880))));
  /* 11e988: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e98c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11e990: b.eq #0x11ea4c */
  if (ARC_COND(c, 0)) goto L_11ea4c;
  /* 11e994: nop  */
  /* nop: no architectural effect here */
  /* 11e998: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e99c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173920));
  fn1_142518(c);
  /* 11e9a0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e9a4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11e9a8: b.ne #0x11e9d4 */
  if (ARC_COND(c, 1)) goto L_11e9d4;
  /* 11e9ac: nop  */
  /* nop: no architectural effect here */
  /* 11e9b0: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11e9b4: nop  */
  /* nop: no architectural effect here */
  /* 11e9b8: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11e9bc:;
  /* 11e9bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11e9c0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11e9c4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173960));
  fn1_142530(c);
  /* 11e9c8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e9cc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11e9d0: b.eq #0x11e9bc */
  if (ARC_COND(c, 0)) goto L_11e9bc;
L_11e9d4:;
  /* 11e9d4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e9d8: cbz x8, #0x11e9ec */
  if ((ARC_X_R(c, 8)) == 0) goto L_11e9ec;
  /* 11e9dc: nop  */
  /* nop: no architectural effect here */
  /* 11e9e0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e9e4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173992));
  fn1_142560(c);
  /* 11e9e8: b #0x11ea4c */
  goto L_11ea4c;
L_11e9ec:;
  /* 11e9ec: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11e9f0: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11e9f4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11e9f8: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11e9fc: nop  */
  /* nop: no architectural effect here */
  /* 11ea00: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ea04: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174024));
  fn1_142560(c);
  /* 11ea08: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ea0c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11ea10: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11ea14: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174040));
  fn1_a2030(c);
  /* 11ea18: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11ea1c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11ea20: nop  */
  /* nop: no architectural effect here */
  /* 11ea24: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ea28: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174060));
  fn1_142518(c);
  /* 11ea2c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11ea30: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11ea34: nop  */
  /* nop: no architectural effect here */
  /* 11ea38: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ea3c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174080));
  fn1_142560(c);
  /* 11ea40: nop  */
  /* nop: no architectural effect here */
  /* 11ea44: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11ea48: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174092));
  fn1_142578(c);
L_11ea4c:;
  /* 11ea4c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11ea50: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11ea54: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11ea58: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11ea5c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174112));
  fn1_db2e0(c);
  /* 11ea60: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11ea64: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11ea68: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11ea6c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11ea70: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11ea74: b.hi #0x11eaa0 */
  if (ARC_COND(c, 8)) goto L_11eaa0;
  /* 11ea78: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11ea7c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11ea80: b.ls #0x11ea94 */
  if (ARC_COND(c, 9)) goto L_11ea94;
  /* 11ea84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ea88: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174156));
  fn1_1352bc(c);
  /* 11ea8c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11ea90: b #0x11eaa0 */
  goto L_11eaa0;
L_11ea94:;
  /* 11ea94: b.hs #0x11eaa0 */
  if (ARC_COND(c, 2)) goto L_11eaa0;
  /* 11ea98: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11ea9c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11eaa0:;
  /* 11eaa0: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11eaa4: cbz x20, #0x11eac8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11eac8;
  /* 11eaa8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11eaac: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11eab0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174196));
  fn1_bd950(c);
  /* 11eab4: cbnz x0, #0x11eac8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11eac8;
  /* 11eab8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11eabc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11eac0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11eac4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174216));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11eac8:;
  /* 11eac8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11eacc: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11ead0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11ead4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11ead8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11eadc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11eae0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11eae4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11eae8: ret  */
  return;
  /* 11eaec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11eaf0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11eaf4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11eaf8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174268));
  fn1_bd950(c);
  /* 11eafc: cbnz x0, #0x11eb24 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11eb24;
  /* 11eb00: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11eb04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11eb08: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11eb0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174288));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11eb10: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11eb14: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174296));
  fn1_9cc20(c);
  /* 11eb18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11eb1c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11eb20: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174308));
  fn1_d2a78(c);
L_11eb24:;
  /* 11eb24: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11eb28: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174316));
  fn1_9cc20(c);
}

void fn1_12647c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133308));
  /* 12647c: bti c */
  /* bti: no architectural effect here */
  /* 126480: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 126484: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 126488: b.eq #0x1264bc */
  if (ARC_COND(c, 0)) goto L_1264bc;
  /* 12648c: nop  */
  /* nop: no architectural effect here */
  /* 126490: adr x8, #0x75c10 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(482320)));
  /* 126494: b #0x1264a4 */
  goto L_1264a4;
L_126498:;
  /* 126498: add x0, x0, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* 12649c: cmp x0, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 3));
  /* 1264a0: b.eq #0x1264bc */
  if (ARC_COND(c, 0)) goto L_1264bc;
L_1264a4:;
  /* 1264a4: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* 1264a8: cmp w9, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(127));
  /* 1264ac: b.hi #0x126498 */
  if (ARC_COND(c, 8)) goto L_126498;
  /* 1264b0: ldr x9, [x8, x9, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1264b4: tst x9, x1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & ARC_X_R(c, 1)));
  /* 1264b8: b.eq #0x126498 */
  if (ARC_COND(c, 0)) goto L_126498;
L_1264bc:;
  /* 1264bc: ret  */
  return;
}

void fn1_128ba4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039143332));
  /* 128ba4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 128ba8: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 128bac: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 128bb0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 128bb4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 128bb8: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 128bbc: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 128bc0: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 128bc4: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 128bc8: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 128bcc: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 128bd0: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 128bd4: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 128bd8: mov x4, x6 */
  ARC_X_W(c, 4, ARC_X_R(c, 6));
  /* 128bdc: mov w6, #0x10ffff */
  ARC_W_W(c, 6, UINT64_C(1114111));
  /* 128be0: mov w7, wzr */
  ARC_W_W(c, 7, ARC_W_R(c, 31));
  /* 128be4: bl #0x128c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1215464));
  fn1_128c08(c);
  /* 128be8: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 128bec: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 128bf0: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 128bf4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 128bf8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 128bfc: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 128c00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 128c04: ret  */
  return;
}

void fn1_12a68c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039150220));
  /* 12a68c: bti c */
  /* bti: no architectural effect here */
  /* 12a690: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12a694: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12a698: b.lt #0x12a6c0 */
  if (ARC_COND(c, 11)) goto L_12a6c0;
  /* 12a69c: ldr w8, [x0, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12a6a0: tbz w8, #2, #0x12a6c0 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_12a6c0;
  /* 12a6a4: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12a6a8: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12a6ac: b.ne #0x12a6c0 */
  if (ARC_COND(c, 1)) goto L_12a6c0;
  /* 12a6b0: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12a6b4: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12a6b8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12a6bc: add x2, x2, w8, uxtw #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12a6c0:;
  /* 12a6c0: sub x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12a6c4: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12a6c8: b.hs #0x12a764 */
  if (ARC_COND(c, 2)) goto L_12a764;
  /* 12a6cc: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a6d0: mov w10, #0xd800 */
  ARC_W_W(c, 10, UINT64_C(55296));
  /* 12a6d4: mov w11, #0xdc00 */
  ARC_W_W(c, 11, UINT64_C(56320));
  /* 12a6d8: b #0x12a6ec */
  goto L_12a6ec;
L_12a6dc:;
  /* 12a6dc: add x2, x2, x0 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ARC_X_R(c, 0)));
  /* 12a6e0: str w12, [x5], #4 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 12a6e4: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12a6e8: b.hs #0x12a764 */
  if (ARC_COND(c, 2)) goto L_12a764;
L_12a6ec:;
  /* 12a6ec: cmp x5, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 5), ARC_X_R(c, 6));
  /* 12a6f0: b.hs #0x12a764 */
  if (ARC_COND(c, 2)) goto L_12a764;
  /* 12a6f4: ldrb w14, [x2, #1] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12a6f8: ldrb w12, [x2] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 2)));
  /* 12a6fc: lsl w13, w14, #8 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 14)) << ((UINT64_C(8)) & 31)));
  /* 12a700: bfi w12, w14, #8, #8 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294902015)) | ((((uint32_t)(ARC_W_R(c, 14))) & UINT64_C(255)) << 8)));
  /* 12a704: and w13, w13, #0xfc00 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) & UINT64_C(64512)));
  /* 12a708: cmp w13, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 10));
  /* 12a70c: b.eq #0x12a728 */
  if (ARC_COND(c, 0)) goto L_12a728;
  /* 12a710: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* 12a714: b.eq #0x12a778 */
  if (ARC_COND(c, 0)) goto L_12a778;
  /* 12a718: cmp x9, w12, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)(uint32_t)(ARC_W_R(c, 12))));
  /* 12a71c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12a720: b.hs #0x12a6dc */
  if (ARC_COND(c, 2)) goto L_12a6dc;
  /* 12a724: b #0x12a76c */
  goto L_12a76c;
L_12a728:;
  /* 12a728: sub x13, x3, x2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12a72c: cmp x13, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(4));
  /* 12a730: b.lt #0x12a780 */
  if (ARC_COND(c, 11)) goto L_12a780;
  /* 12a734: ldrb w13, [x2, #3] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 2) + INT64_C(3))));
  /* 12a738: and w14, w13, #0xfc */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) & UINT64_C(252)));
  /* 12a73c: cmp w14, #0xdc */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(220));
  /* 12a740: b.ne #0x12a778 */
  if (ARC_COND(c, 1)) goto L_12a778;
  /* 12a744: ldrb w14, [x2, #2] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 2) + INT64_C(2))));
  /* 12a748: bfi w14, w13, #8, #2 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294966527)) | ((((uint32_t)(ARC_W_R(c, 13))) & UINT64_C(3)) << 8)));
  /* 12a74c: bfi w14, w12, #0xa, #0xa */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4293919743)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(1023)) << 10)));
  /* 12a750: add w12, w14, #0x10, lsl #12 */
  ARC_W_W(c, 12, (ARC_W_R(c, 14) + UINT64_C(65536)));
  /* 12a754: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 12a758: b.lo #0x12a778 */
  if (ARC_COND(c, 3)) goto L_12a778;
  /* 12a75c: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 12a760: b #0x12a6dc */
  goto L_12a6dc;
L_12a764:;
  /* 12a764: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12a768: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
L_12a76c:;
  /* 12a76c: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a770: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12a774: ret  */
  return;
L_12a778:;
  /* 12a778: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12a77c: b #0x12a76c */
  goto L_12a76c;
L_12a780:;
  /* 12a780: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12a784: b #0x12a76c */
  goto L_12a76c;
}

void fn1_12bc5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155804));
  /* 12bc5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12bc60: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bc64: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12bc68: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12bc6c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12bc70: bl #0x144138 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1227892));
  fn1_144138(c);
  /* 12bc74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12bc78: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 12bc7c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12bc80: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12bc84: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12bc88: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_132320(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039182112));
  /* 132320: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 132324: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 132328: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13232c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 132330: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 132334: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 132338: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 13233c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 132340: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 132344: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 132348: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 13234c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 132350: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 132354: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254232));
  fn1_1441e0(c);
  /* 132358: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 13235c: cbz x0, #0x132374 */
  if ((ARC_X_R(c, 0)) == 0) goto L_132374;
  /* 132360: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 132364: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132368: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 13236c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 132370: ret  */
  return;
L_132374:;
  /* 132374: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 132378: add x0, x0, #0x165 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(357)));
  /* 13237c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 132380: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 132384: add x19, sp, #8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(8)));
  /* 132388: bl #0x142de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254284));
  fn1_142de8(c);
  /* 13238c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 132390: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 132394: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 132398: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13239c: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254304));
  fn1_142c98(c);
  /* 1323a0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 1323a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1323a8: tbz w8, #0, #0x1323bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1323bc;
  /* 1323ac: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1323b0: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1323b4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1323b8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254332));
  fn1_142608(c);
L_1323bc:;
  /* 1323bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1323c0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254340));
  fn1_9cc20(c);
}

void fn1_134c00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192576));
  /* 134c00: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134c04: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134c08: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134c0c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134c10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134c14: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 134c18: bl #0x143d00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1264668));
  fn1_143d00(c);
  /* 134c1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134c20: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 134c24: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134c28: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134c2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134c30: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_136fcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039201740));
  /* 136fcc: bti c */
  /* bti: no architectural effect here */
  /* 136fd0: ldp x8, x9, [x1, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 136fd4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 136fd8: b.eq #0x136ff0 */
  if (ARC_COND(c, 0)) goto L_136ff0;
  /* 136fdc: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 136fe0: cmp w9, #0xd */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(13));
  /* 136fe4: b.eq #0x136ff0 */
  if (ARC_COND(c, 0)) goto L_136ff0;
  /* 136fe8: cmp w9, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(10));
  /* 136fec: b.ne #0x137000 */
  if (ARC_COND(c, 1)) goto L_137000;
L_136ff0:;
  /* 136ff0: mov w9, #-0x3e1 */
  ARC_W_W(c, 9, UINT64_C(18446744073709550623));
  /* 136ff4: str xzr, [x1, #0x50] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(80)), ARC_X_R(c, 31));
  /* 136ff8: str w9, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 9));
  /* 136ffc: ret  */
  return;
L_137000:;
  /* 137000: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 137004: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 137008: mov w9, #-0x3e3 */
  ARC_W_W(c, 9, UINT64_C(18446744073709550621));
  /* 13700c: str w9, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 9));
  /* 137010: str x10, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 10));
  /* 137014: str x8, [x1, #0x50] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(80)), ARC_X_R(c, 8));
  /* 137018: ret  */
  return;
}

void fn1_13a560(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039215456));
  /* 13a560: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13a564: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13a568: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13a56c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13a570: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13a574: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 13a578: cbz x0, #0x13a584 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13a584;
  /* 13a57c: bl #0x144618 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287552));
  fn1_144618(c);
  /* 13a580: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
L_13a584:;
  /* 13a584: ldrb w8, [x19, #0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(32))));
  /* 13a588: tbz w8, #0, #0x13a59c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a59c;
  /* 13a58c: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 13a590: ldr x0, [x19, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 13a594: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a598: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287580));
  fn1_142608(c);
L_13a59c:;
  /* 13a59c: ldrb w8, [x19, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13a5a0: tbnz w8, #0, #0x13a5b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13a5b4;
  /* 13a5a4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13a5a8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a5ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13a5b0: ret  */
  return;
L_13a5b4:;
  /* 13a5b4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13a5b8: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 13a5bc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a5c0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13a5c4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a5c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13a5cc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_140fd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039242704));
  /* 140fd0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 140fd4: sub sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(208)));
  /* 140fd8: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 140fdc: str x19, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 19));
  /* 140fe0: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* 140fe4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 140fe8: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* 140fec: add x8, x8, #0x9c4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2500)));
  /* 140ff0: stp x8, x1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 140ff4: stp x0, xzr, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 140ff8: cbz x1, #0x14101c */
  if ((ARC_X_R(c, 1)) == 0) goto L_14101c;
  /* 140ffc: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 141000: nop  */
  /* nop: no architectural effect here */
  /* 141004: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141008: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 14100c: tbz w8, #0, #0x14111c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_14111c;
L_141010:;
  /* 141010: nop  */
  /* nop: no architectural effect here */
  /* 141014: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 141018: str x8, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 8));
L_14101c:;
  /* 14101c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 141020: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 141024: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 141028: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 14102c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 141030: csinc x0, x9, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 141034: stp q0, q0, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 141038: stp q0, q0, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 14103c: stp q0, q0, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 141040: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 141044: bl #0x144888 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314888));
  fn1_144888(c);
  /* 141048: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 14104c: b.eq #0x1410cc */
  if (ARC_COND(c, 0)) goto L_1410cc;
  /* 141050: ldp x8, x10, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 141054: umulh x9, x10, x8 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 8)));
  /* 141058: mul x11, x10, x8 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 8))));
  /* 14105c: cmp xzr, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 9));
  /* 141060: cset w9, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? 1 : 0));
  /* 141064: str x11, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 11));
  /* 141068: cbz x10, #0x141070 */
  if ((ARC_X_R(c, 10)) == 0) goto L_141070;
  /* 14106c: cbz w9, #0x141078 */
  if ((ARC_W_R(c, 9)) == 0) goto L_141078;
L_141070:;
  /* 141070: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 141074: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
L_141078:;
  /* 141078: ldr x10, [sp, #0x38] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(56))));
  /* 14107c: umulh x9, x10, x8 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 8)));
  /* 141080: mul x11, x10, x8 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 8))));
  /* 141084: cmp xzr, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 9));
  /* 141088: cset w9, ne */
  ARC_W_W(c, 9, (ARC_COND(c, 1) ? 1 : 0));
  /* 14108c: str x11, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 11));
  /* 141090: cbz x10, #0x141098 */
  if ((ARC_X_R(c, 10)) == 0) goto L_141098;
  /* 141094: cbz w9, #0x1410a0 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1410a0;
L_141098:;
  /* 141098: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 14109c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_1410a0:;
  /* 1410a0: ldr x9, [sp, #0x40] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1410a4: umulh x10, x9, x8 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* 1410a8: mul x11, x9, x8 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* 1410ac: cmp xzr, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 10));
  /* 1410b0: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 1410b4: str x11, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 11));
  /* 1410b8: cbz x9, #0x1410c0 */
  if ((ARC_X_R(c, 9)) == 0) goto L_1410c0;
  /* 1410bc: cbz w8, #0x141108 */
  if ((ARC_W_R(c, 8)) == 0) goto L_141108;
L_1410c0:;
  /* 1410c0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1410c4: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1410c8: b #0x141108 */
  goto L_141108;
L_1410cc:;
  /* 1410cc: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315024));
  fn1_142a58(c);
  /* 1410d0: nop  */
  /* nop: no architectural effect here */
  /* 1410d4: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1410d8: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 1410dc: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1410e0: tbz w9, #0, #0x14115c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_14115c;
L_1410e4:;
  /* 1410e4: nop  */
  /* nop: no architectural effect here */
  /* 1410e8: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 1410ec: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1410f0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1410f4: stp x8, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1410f8: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315068));
  fn1_139ad0(c);
  /* 1410fc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 141100: stp x8, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 141104: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_141108:;
  /* 141108: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14110c: ldr x19, [sp, #0xc0] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(192))));
  /* 141110: add sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(208)));
  /* 141114: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 141118: ret  */
  return;
L_14111c:;
  /* 14111c: nop  */
  /* nop: no architectural effect here */
  /* 141120: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141124: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 141128: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 14112c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 141130: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315124));
  fn1_1424b8(c);
  /* 141134: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 141138: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 14113c: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 141140: cbz w8, #0x141010 */
  if ((ARC_W_R(c, 8)) == 0) goto L_141010;
  /* 141144: nop  */
  /* nop: no architectural effect here */
  /* 141148: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 14114c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315152));
  fn1_1424d0(c);
  /* 141150: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 141154: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 141158: b #0x141010 */
  goto L_141010;
L_14115c:;
  /* 14115c: nop  */
  /* nop: no architectural effect here */
  /* 141160: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 141164: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 141168: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315180));
  fn1_1424b8(c);
  /* 14116c: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 141170: cbz w0, #0x1410e4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1410e4;
  /* 141174: nop  */
  /* nop: no architectural effect here */
  /* 141178: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 14117c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315200));
  fn1_1424d0(c);
  /* 141180: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 141184: b #0x1410e4 */
  goto L_1410e4;
}

void fn1_142878(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249016));
  /* 142878: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14287c: ldr x17, [x16, #8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(8))));
  /* 142880: add x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(8)));
  /* 142884: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142888: nop  */
  /* nop: no architectural effect here */
  /* 14288c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142e78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250552));
  /* 142e78: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142e7c: ldr x17, [x16, #0x208] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(520))));
  /* 142e80: add x16, x16, #0x208 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(520)));
  /* 142e84: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142e88: nop  */
  /* nop: no architectural effect here */
  /* 142e8c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143478(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252088));
  /* 143478: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14347c: ldr x17, [x16, #0x408] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1032))));
  /* 143480: add x16, x16, #0x408 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1032)));
  /* 143484: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143488: nop  */
  /* nop: no architectural effect here */
  /* 14348c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143a78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253624));
  /* 143a78: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143a7c: ldr x17, [x16, #0x608] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1544))));
  /* 143a80: add x16, x16, #0x608 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1544)));
  /* 143a84: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143a88: nop  */
  /* nop: no architectural effect here */
  /* 143a8c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144078(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255160));
  /* 144078: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14407c: ldr x17, [x16, #0x808] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2056))));
  /* 144080: add x16, x16, #0x808 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2056)));
  /* 144084: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144088: nop  */
  /* nop: no architectural effect here */
  /* 14408c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144678(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256696));
  /* 144678: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14467c: ldr x17, [x16, #0xa08] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2568))));
  /* 144680: add x16, x16, #0xa08 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2568)));
  /* 144684: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144688: nop  */
  /* nop: no architectural effect here */
  /* 14468c: nop  */
  /* nop: no architectural effect here */
}

