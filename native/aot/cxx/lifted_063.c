#include "lifted.h"

void fn1_a0c6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038586476));
  /* a0c6c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0c70: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* a0c74: str x30, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 30));
  /* a0c78: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* a0c7c: bl #0x144a50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658560));
  fn1_144a50(c);
  /* a0c80: tbnz w0, #8, #0xa0c9c */
  if (((ARC_W_R(c, 0)) >> 8 & 1) != 0) goto L_a0c9c;
  /* a0c84: adrp x9, #0x157000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0c88: ldr x30, [sp, #0x60] */
  ARC_X_W(c, 30, arc_ld64(((c)->sp + INT64_C(96))));
  /* a0c8c: strb wzr, [x9, #0x640] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1600)), ARC_W_R(c, 31));
  /* a0c90: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a0c94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0c98: ret  */
  return;
L_a0c9c:;
  /* a0c9c: nop  */
  /* nop: no architectural effect here */
  /* a0ca0: adr x0, #0x4ff93 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327571)));
  /* a0ca4: add x1, sp, #4 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(4)));
  /* a0ca8: bl #0x144a08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658604));
  fn1_144a08(c);
  /* a0cac: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* a0cb0: b.lt #0xa0ce8 */
  if (ARC_COND(c, 11)) goto L_a0ce8;
  /* a0cb4: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* a0cb8: add x1, x1, #0x469 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1129)));
  /* a0cbc: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* a0cc0: mov w2, #0xa */
  ARC_W_W(c, 2, UINT64_C(10));
  /* a0cc4: bl #0x1449a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(658632));
  fn1_1449a8(c);
  /* a0cc8: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* a0ccc: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* a0cd0: adrp x9, #0x157000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0cd4: ldr x30, [sp, #0x60] */
  ARC_X_W(c, 30, arc_ld64(((c)->sp + INT64_C(96))));
  /* a0cd8: strb w8, [x9, #0x640] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1600)), ARC_W_R(c, 8));
  /* a0cdc: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a0ce0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0ce4: ret  */
  return;
L_a0ce8:;
  /* a0ce8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a0cec: adrp x9, #0x157000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a0cf0: ldr x30, [sp, #0x60] */
  ARC_X_W(c, 30, arc_ld64(((c)->sp + INT64_C(96))));
  /* a0cf4: strb w8, [x9, #0x640] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1600)), ARC_W_R(c, 8));
  /* a0cf8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a0cfc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a0d00: ret  */
  return;
}

void fn1_a2338(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592312));
  /* a2338: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a233c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2340: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a2344: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2348: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a234c: bl #0x142428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664400));
  fn1_142428(c);
  /* a2350: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a2354: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* a2358: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a235c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2360: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2364: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a814c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038616396));
  /* a814c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8150: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8154: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a8158: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a815c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8160: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a8164: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* a8168: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a816c: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a8170: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* a8174: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a8178: b.hi #0xa819c */
  if (ARC_COND(c, 8)) goto L_a819c;
  /* a817c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a8180: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a8184: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(688520));
  fn1_1428a8(c);
  /* a8188: cbz x0, #0xa81f0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a81f0;
  /* a818c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a8190: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a8194: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a8198: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_a819c:;
  /* a819c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* a81a0: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a81a4: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a81a8: add x8, x8, #0xb98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2968)));
  /* a81ac: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* a81b0: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* a81b4: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a81b8: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* a81bc: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a81c0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* a81c4: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* a81c8: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a81cc: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a81d0: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* a81d4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* a81d8: stp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* a81dc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a81e0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a81e4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a81e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a81ec: ret  */
  return;
L_a81f0:;
  /* a81f0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(688628));
  fn1_142488(c);
}

void fn1_ade64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038640228));
  /* ade64: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ade68: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ade6c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ade70: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ade74: ldr x20, [x0, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ade78: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ade7c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ade80: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ade84: b.hi #0xadea8 */
  if (ARC_COND(c, 8)) goto L_adea8;
  /* ade88: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ade8c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ade90: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712340));
  fn1_1428a8(c);
  /* ade94: cbz x0, #0xadefc */
  if ((ARC_X_R(c, 0)) == 0) goto L_adefc;
  /* ade98: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ade9c: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* adea0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* adea4: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_adea8:;
  /* adea8: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* adeac: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* adeb0: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* adeb4: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* adeb8: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* adebc: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* adec0: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* adec4: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* adec8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* adecc: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* aded0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* aded4: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* aded8: add x9, x9, #0xcbf */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3263)));
  /* adedc: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* adee0: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* adee4: mov w8, #5 */
  ARC_W_W(c, 8, UINT64_C(5));
  /* adee8: stp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* adeec: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* adef0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* adef4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* adef8: ret  */
  return;
L_adefc:;
  /* adefc: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(712448));
  fn1_142488(c);
}

void fn1_b3580(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038662528));
  /* b3580: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b3584: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3588: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b358c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b3590: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b3594: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b3598: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b359c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b35a0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b35a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734632));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b35a8: ldr x0, [x20, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b35ac: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b35b0: sxtb w9, w8 */
  ARC_W_W(c, 9, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* b35b4: cmn w9, #0x40 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(64), 0);
  /* b35b8: b.ge #0xb35d4 */
  if (ARC_COND(c, 10)) goto L_b35d4;
  /* b35bc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b35c0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b35c4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* b35c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734668));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b35cc: tbz w0, #0, #0xb35e0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_b35e0;
  /* b35d0: b #0xb362c */
  goto L_b362c;
L_b35d4:;
  /* b35d4: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* b35d8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b35dc: b.lo #0xb362c */
  if (ARC_COND(c, 3)) goto L_b362c;
L_b35e0:;
  /* b35e0: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b35e4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b35e8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b35ec: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b35f0: b.ls #0xb3618 */
  if (ARC_COND(c, 9)) goto L_b3618;
  /* b35f4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b35f8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b35fc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b3600: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b3604: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b3608: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734732));
  fn1_142878(c);
  /* b360c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b3610: cbz x0, #0xb363c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b363c;
  /* b3614: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b3618:;
  /* b3618: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b361c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b3620: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b3624: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b3628: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b362c:;
  /* b362c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3630: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3634: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3638: ret  */
  return;
L_b363c:;
  /* b363c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(734784));
  fn1_1427b8(c);
}

void fn1_b722c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038678060));
  /* b722c: bti c */
  /* bti: no architectural effect here */
  /* b7230: ldr w8, [x0, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* b7234: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* b7238: b.gt #0xb7260 */
  if (ARC_COND(c, 12)) goto L_b7260;
  /* b723c: sub w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* b7240: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* b7244: b.hs #0xb7280 */
  if (ARC_COND(c, 2)) goto L_b7280;
  /* b7248: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* b724c: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* b7250: add x0, x0, #0xbaa */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2986)));
  /* b7254: b.lo #0xb729c */
  if (ARC_COND(c, 3)) goto L_b729c;
  /* b7258: mov w1, #6 */
  ARC_W_W(c, 1, UINT64_C(6));
  /* b725c: b #0xb72b0 */
  goto L_b72b0;
L_b7260:;
  /* b7260: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* b7264: b.eq #0xb7290 */
  if (ARC_COND(c, 0)) goto L_b7290;
  /* b7268: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* b726c: b.ne #0xb72a4 */
  if (ARC_COND(c, 1)) goto L_b72a4;
  /* b7270: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* b7274: add x0, x0, #0x86f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2159)));
  /* b7278: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* b727c: b #0xb72b0 */
  goto L_b72b0;
L_b7280:;
  /* b7280: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* b7284: add x0, x0, #0x7df */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2015)));
  /* b7288: mov w1, #9 */
  ARC_W_W(c, 1, UINT64_C(9));
  /* b728c: ret  */
  return;
L_b7290:;
  /* b7290: adrp x0, #0x52000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(335872)));
  /* b7294: add x0, x0, #0x13f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(319)));
  /* b7298: b #0xb72ac */
  goto L_b72ac;
L_b729c:;
  /* b729c: mov w1, #0xc */
  ARC_W_W(c, 1, UINT64_C(12));
  /* b72a0: ret  */
  return;
L_b72a4:;
  /* b72a4: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* b72a8: add x0, x0, #0xe6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3690)));
L_b72ac:;
  /* b72ac: mov w1, #7 */
  ARC_W_W(c, 1, UINT64_C(7));
L_b72b0:;
  /* b72b0: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* b72b4: mov w10, #0x6162 */
  ARC_W_W(c, 10, UINT64_C(24930));
  /* b72b8: ldrh w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(4))));
  /* b72bc: movk w10, #0x6973, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1769144320)));
  /* b72c0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* b72c4: mov w8, #0x5f63 */
  ARC_W_W(c, 8, UINT64_C(24419));
  /* b72c8: ccmp w9, w8, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* b72cc: b.ne #0xb72d8 */
  if (ARC_COND(c, 1)) goto L_b72d8;
  /* b72d0: add x0, x0, #6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(6)));
  /* b72d4: ret  */
  return;
L_b72d8:;
  /* b72d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b72dc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b72e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b72e4: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* b72e8: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* b72ec: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* b72f0: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* b72f4: nop  */
  /* nop: no architectural effect here */
  /* b72f8: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* b72fc: mov w2, #0x6be */
  ARC_W_W(c, 2, UINT64_C(1726));
  /* b7300: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(750340));
  fn1_a23d8(c);
}

void fn1_b9c38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038688824));
  /* b9c38: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9c3c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9c40: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b9c44: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9c48: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9c4c: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9c50: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* b9c54: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b9c58: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b9c5c: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* b9c60: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9c64: b.hi #0xb9c88 */
  if (ARC_COND(c, 8)) goto L_b9c88;
  /* b9c68: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9c6c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9c70: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(760948));
  fn1_1428a8(c);
  /* b9c74: cbz x0, #0xb9ce0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9ce0;
  /* b9c78: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9c7c: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9c80: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b9c84: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9c88:;
  /* b9c88: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* b9c8c: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* b9c90: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* b9c94: add x8, x8, #0x328 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(808)));
  /* b9c98: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9c9c: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* b9ca0: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b9ca4: mov w8, #7 */
  ARC_W_W(c, 8, UINT64_C(7));
  /* b9ca8: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* b9cac: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b9cb0: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* b9cb4: ldr q0, [x20] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 20)), arc_ld64(ARC_X_R(c, 20) + 8));
  /* b9cb8: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b9cbc: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* b9cc0: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* b9cc4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b9cc8: str x10, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 10));
  /* b9ccc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b9cd0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b9cd4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9cd8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b9cdc: ret  */
  return;
L_b9ce0:;
  /* b9ce0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761060));
  fn1_142488(c);
}

void fn1_bd300(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038702848));
  /* bd300: bti c */
  /* bti: no architectural effect here */
  /* bd304: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* bd308: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_c5fa4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038738852));
  /* c5fa4: bti c */
  /* bti: no architectural effect here */
  /* c5fa8: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* c5fac: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* c5fb0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* c5fb4: asr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63))));
  /* c5fb8: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* c5fbc: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* c5fc0: b #0xc5fc4 */
  fn1_c5fc4(c); return;
}

void fn1_d7248(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809160));
  /* d7248: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d724c: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* d7250: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7254: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* d7258: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* d725c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* d7260: bl #0x142a28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881252));
  fn1_142a28(c);
  /* d7264: cbnz w0, #0xd72a8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_d72a8;
  /* d7268: mov x9, #0xf7cf */
  ARC_X_W(c, 9, UINT64_C(63439));
  /* d726c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* d7270: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* d7274: movk x9, #0xe353, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(3813867520)));
  /* d7278: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* d727c: movk x9, #0x9ba5, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(171132971909120)));
  /* d7280: movk x9, #0x20c4, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(2361012104648982528)));
  /* d7284: smulh x8, x8, x9 */
  ARC_X_W(c, 8, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* d7288: ldr x9, [sp] */
  ARC_X_W(c, 9, arc_ld64((c)->sp));
  /* d728c: asr x10, x8, #7 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(7)) & 63))));
  /* d7290: add x8, x10, x8, lsr #63 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) >> 63)));
  /* d7294: madd x0, x9, x11, x8 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* d7298: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d729c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* d72a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d72a4: ret  */
  return;
L_d72a8:;
  /* d72a8: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881324));
  fn1_142a58(c);
  /* d72ac: ldr w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* d72b0: nop  */
  /* nop: no architectural effect here */
  /* d72b4: adr x1, #0x513f2 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(332786)));
  /* d72b8: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881340));
  fn1_142a40(c);
  /* d72bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881344));
  fn1_a1454(c);
}

void fn1_daa44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038823492));
  /* daa44: bti c */
  /* bti: no architectural effect here */
  /* daa48: ret  */
  return;
}

void fn1_dc364(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829924));
  /* dc364: bti c */
  /* bti: no architectural effect here */
  /* dc368: nop  */
  /* nop: no architectural effect here */
  /* dc36c: adr x0, #0x518d0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334032)));
  /* dc370: ret  */
  return;
}

void fn1_e1630(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038851120));
  /* e1630: bti c */
  /* bti: no architectural effect here */
  /* e1634: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e1638: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e163c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e1640: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1644: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e1648: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* e164c: b.hs #0xe1664 */
  if (ARC_COND(c, 2)) goto L_e1664;
  /* e1650: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e1654: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1658: csinc x8, x9, x0, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e165c: add x0, x8, x1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 1)));
  /* e1660: ret  */
  return;
L_e1664:;
  /* e1664: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1668: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e166c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1670: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(923252));
  fn1_da020(c);
}

void fn1_e3ed4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038861524));
  /* e3ed4: bti c */
  /* bti: no architectural effect here */
  /* e3ed8: ldrb w8, [x3] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 3)));
  /* e3edc: ldr x9, [x3, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 3) + INT64_C(8))));
  /* e3ee0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e3ee4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3ee8: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e3eec: subs x9, x9, x4 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 4)));
  /* e3ef0: b.lo #0xe3f14 */
  if (ARC_COND(c, 3)) goto L_e3f14;
  /* e3ef4: ldr x10, [x3, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 3) + INT64_C(16))));
  /* e3ef8: add x11, x3, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 3) + UINT64_C(4)));
  /* e3efc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3f00: csel x8, x11, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e3f04: cmp x9, x5 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 5));
  /* e3f08: add x3, x8, x4, lsl #2 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 4)) << 2)));
  /* e3f0c: csel x4, x9, x5, lo */
  ARC_X_W(c, 4, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 5)));
  /* e3f10: b #0x142d28 */
  fn1_142d28(c); return;
L_e3f14:;
  /* e3f14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3f18: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3f1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3f20: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(933668));
  fn1_e1f80(c);
}

void fn1_e8834(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038880308));
  /* e8834: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8838: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e883c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e8840: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* e8844: mov w0, w0 */
  ARC_W_W(c, 0, ARC_W_R(c, 0));
  /* e8848: nop  */
  /* nop: no architectural effect here */
  /* e884c: adr x1, #0x156d38 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1404216)));
  /* e8850: bl #0xe8854 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952404));
  fn1_e8854(c);
}

void fn1_eac5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889564));
  /* eac5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eac60: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eac64: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eac68: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961644));
  fn1_142518(c);
  /* eac6c: cbnz w0, #0xeac7c */
  if ((ARC_W_R(c, 0)) != 0) goto L_eac7c;
  /* eac70: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eac74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eac78: ret  */
  return;
L_eac7c:;
  /* eac7c: nop  */
  /* nop: no architectural effect here */
  /* eac80: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eac84: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961672));
  fn1_142a40(c);
}

void fn1_ec500(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038895872));
  /* ec500: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec504: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec508: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ec50c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec510: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec514: ldp x9, x10, [x0, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(72));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ec518: mov w19, w2 */
  ARC_W_W(c, 19, ARC_W_R(c, 2));
  /* ec51c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ec520: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ec524: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ec528: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ec52c: b.ls #0xec5ac */
  if (ARC_COND(c, 9)) goto L_ec5ac;
  /* ec530: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* ec534: mov x10, #0xfffffffffffffff */
  ARC_X_W(c, 10, UINT64_C(1152921504606846975));
  /* ec538: ldr x0, [x20, #0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* ec53c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ec540: csel x9, x9, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ec544: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ec548: mov x8, #0x1fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(2305843009213693951));
  /* ec54c: csel x22, x9, x8, lo */
  ARC_X_W(c, 22, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ec550: lsl x1, x22, #3 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(3)) & 63)));
  /* ec554: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968024));
  fn1_142878(c);
  /* ec558: cbnz x0, #0xec570 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ec570;
  /* ec55c: ldp w8, w9, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ec560: orr w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(1)));
  /* ec564: tst w9, w8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* ec568: str w8, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 8));
  /* ec56c: b.ne #0xec5d4 */
  if (ARC_COND(c, 1)) goto L_ec5d4;
L_ec570:;
  /* ec570: ldr x8, [x20, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* ec574: lsl x1, x22, #2 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* ec578: str x0, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 0));
  /* ec57c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ec580: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968068));
  fn1_142878(c);
  /* ec584: cbnz x0, #0xec59c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ec59c;
  /* ec588: ldp w8, w9, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ec58c: orr w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(1)));
  /* ec590: tst w9, w8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* ec594: str w8, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 8));
  /* ec598: b.ne #0xec5d4 */
  if (ARC_COND(c, 1)) goto L_ec5d4;
L_ec59c:;
  /* ec59c: ldr x9, [x20, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(72))));
  /* ec5a0: str x0, [x20, #0x40] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(64)), ARC_X_R(c, 0));
  /* ec5a4: str x22, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 22));
  /* ec5a8: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
L_ec5ac:;
  /* ec5ac: ldr x10, [x20, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* ec5b0: str x21, [x10, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 21));
  /* ec5b4: ldr x10, [x20, #0x40] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* ec5b8: str w19, [x10, x9, lsl #2] */
  arc_st32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 2)), ARC_W_R(c, 19));
  /* ec5bc: str x8, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), ARC_X_R(c, 8));
  /* ec5c0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec5c4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ec5c8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec5cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec5d0: ret  */
  return;
L_ec5d4:;
  /* ec5d4: nop  */
  /* nop: no architectural effect here */
  /* ec5d8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ec5dc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968160));
  fn1_ec720(c);
}

void fn1_edf20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038902560));
  /* edf20: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* edf24: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* edf28: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* edf2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* edf30: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* edf34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* edf38: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* edf3c: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* edf40: blr x1 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(974660));
  arc_dispatch(c, ARC_X_R(c, 1));
  /* edf44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* edf48: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* edf4c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* edf50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* edf54: ret  */
  return;
}

void fn1_f34d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038924504));
  /* f34d8: bti c */
  /* bti: no architectural effect here */
  /* f34dc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f34e0: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f34e4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f34e8: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f34ec: ldrb w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(32))));
  /* f34f0: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* f34f4: b.eq #0xf3504 */
  if (ARC_COND(c, 0)) goto L_f3504;
  /* f34f8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* f34fc: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* f3500: ret  */
  return;
L_f3504:;
  /* f3504: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3508: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f350c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3510: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f3514: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* f3518: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f351c: mov w3, #0x10 */
  ARC_W_W(c, 3, UINT64_C(16));
  /* f3520: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3524: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f3528: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(996652));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f352c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3530: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3534: ret  */
  return;
}

void fn1_f4958(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038929752));
  /* f4958: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f495c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4960: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f4964: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f4968: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f496c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4970: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4974: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f4978: blr x1 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1001852));
  arc_dispatch(c, ARC_X_R(c, 1));
  /* f497c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4980: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f4984: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4988: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f498c: ret  */
  return;
}

void fn1_f9f54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038951764));
  /* f9f54: bti c */
  /* bti: no architectural effect here */
  /* f9f58: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f9f5c: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f9f60: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9f64: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f9f68: ldrb w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9f6c: tst w9, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* f9f70: b.eq #0xf9f80 */
  if (ARC_COND(c, 0)) goto L_f9f80;
  /* f9f74: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* f9f78: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* f9f7c: ret  */
  return;
L_f9f80:;
  /* f9f80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f9f84: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f9f88: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f9f8c: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f9f90: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* f9f94: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f9f98: mov w3, #0x10 */
  ARC_W_W(c, 3, UINT64_C(16));
  /* f9f9c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f9fa0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9fa4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1023912));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9fa8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f9fac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f9fb0: ret  */
  return;
}

void fn1_fe070(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038968432));
  /* fe070: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe074: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe078: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fe07c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fe080: nop  */
  /* nop: no architectural effect here */
  /* fe084: adr x8, #0x15dae8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432296)));
  /* fe088: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* fe08c: tbz w8, #0, #0xfe0a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fe0a0;
L_fe090:;
  /* fe090: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fe094: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe098: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe09c: ret  */
  return;
L_fe0a0:;
  /* fe0a0: nop  */
  /* nop: no architectural effect here */
  /* fe0a4: adr x0, #0x15dae8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432296)));
  /* fe0a8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040556));
  fn1_1424b8(c);
  /* fe0ac: cbz w0, #0xfe090 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fe090;
  /* fe0b0: bl #0xfda88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040564));
  fn1_fda88(c);
  /* fe0b4: nop  */
  /* nop: no architectural effect here */
  /* fe0b8: adr x0, #0xfe024 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1040420)));
  /* fe0bc: nop  */
  /* nop: no architectural effect here */
  /* fe0c0: adr x1, #0x15dae1 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1432289)));
  /* fe0c4: nop  */
  /* nop: no architectural effect here */
  /* fe0c8: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* fe0cc: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040592));
  fn1_1423f8(c);
  /* fe0d0: nop  */
  /* nop: no architectural effect here */
  /* fe0d4: adr x0, #0x15dae8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432296)));
  /* fe0d8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fe0dc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe0e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe0e4: b #0x1424d0 */
  fn1_1424d0(c); return;
  /* fe0e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fe0ec: nop  */
  /* nop: no architectural effect here */
  /* fe0f0: adr x0, #0x15dae8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432296)));
  /* fe0f4: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040632));
  fn1_1424e8(c);
  /* fe0f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fe0fc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1040640));
  fn1_9cc20(c);
}

void fn1_108ee8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039013096));
  /* 108ee8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 108eec: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 108ef0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 108ef4: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 108ef8: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 108efc: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 108f00: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 108f04: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 108f08: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 108f0c: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 108f10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 108f14: add x1, x9, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(48)));
  /* 108f18: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 108f1c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 108f20: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 108f24: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085224));
  fn1_143460(c);
  /* 108f28: adrp x26, #0x151000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 108f2c: ldr x26, [x26, #0xb40] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(2880))));
  /* 108f30: ldr x25, [sp, #8] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(8))));
  /* 108f34: ldar x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 108f38: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 108f3c: b.eq #0x108ff8 */
  if (ARC_COND(c, 0)) goto L_108ff8;
  /* 108f40: nop  */
  /* nop: no architectural effect here */
  /* 108f44: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 108f48: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085260));
  fn1_142518(c);
  /* 108f4c: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 108f50: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 108f54: b.ne #0x108f80 */
  if (ARC_COND(c, 1)) goto L_108f80;
  /* 108f58: nop  */
  /* nop: no architectural effect here */
  /* 108f5c: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 108f60: nop  */
  /* nop: no architectural effect here */
  /* 108f64: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_108f68:;
  /* 108f68: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 108f6c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 108f70: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085300));
  fn1_142530(c);
  /* 108f74: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 108f78: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 108f7c: b.eq #0x108f68 */
  if (ARC_COND(c, 0)) goto L_108f68;
L_108f80:;
  /* 108f80: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 108f84: cbz x8, #0x108f98 */
  if ((ARC_X_R(c, 8)) == 0) goto L_108f98;
  /* 108f88: nop  */
  /* nop: no architectural effect here */
  /* 108f8c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 108f90: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085332));
  fn1_142560(c);
  /* 108f94: b #0x108ff8 */
  goto L_108ff8;
L_108f98:;
  /* 108f98: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 108f9c: str x26, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 26));
  /* 108fa0: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 108fa4: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 108fa8: nop  */
  /* nop: no architectural effect here */
  /* 108fac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 108fb0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085364));
  fn1_142560(c);
  /* 108fb4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 108fb8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 108fbc: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 108fc0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085380));
  fn1_a2030(c);
  /* 108fc4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 108fc8: str w8, [x26, #8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 8));
  /* 108fcc: nop  */
  /* nop: no architectural effect here */
  /* 108fd0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 108fd4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085400));
  fn1_142518(c);
  /* 108fd8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 108fdc: stlr x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 108fe0: nop  */
  /* nop: no architectural effect here */
  /* 108fe4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 108fe8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085420));
  fn1_142560(c);
  /* 108fec: nop  */
  /* nop: no architectural effect here */
  /* 108ff0: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 108ff4: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085432));
  fn1_142578(c);
L_108ff8:;
  /* 108ff8: ldp x8, x10, [x25, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 108ffc: ldrsw x9, [x26, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 26) + INT64_C(8)))));
  /* 109000: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 109004: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 109008: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10900c: b.hs #0x109188 */
  if (ARC_COND(c, 2)) goto L_109188;
  /* 109010: ldr x0, [x8, x9, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 109014: cbz x0, #0x109188 */
  if ((ARC_X_R(c, 0)) == 0) goto L_109188;
  /* 109018: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 10901c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 109020: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109024: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 109028: ldr x1, [x1, #0xbe0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3040))));
  /* 10902c: add x2, x1, #0x1c */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + UINT64_C(28)));
  /* 109030: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085492));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 109034: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109038: ldr x25, [x25, #0xcb0] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3248))));
  /* 10903c: ldr x24, [sp, #8] */
  ARC_X_W(c, 24, arc_ld64(((c)->sp + INT64_C(8))));
  /* 109040: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 109044: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 109048: b.eq #0x109104 */
  if (ARC_COND(c, 0)) goto L_109104;
  /* 10904c: nop  */
  /* nop: no architectural effect here */
  /* 109050: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109054: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085528));
  fn1_142518(c);
  /* 109058: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10905c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 109060: b.ne #0x10908c */
  if (ARC_COND(c, 1)) goto L_10908c;
  /* 109064: nop  */
  /* nop: no architectural effect here */
  /* 109068: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10906c: nop  */
  /* nop: no architectural effect here */
  /* 109070: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_109074:;
  /* 109074: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 109078: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10907c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085568));
  fn1_142530(c);
  /* 109080: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 109084: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 109088: b.eq #0x109074 */
  if (ARC_COND(c, 0)) goto L_109074;
L_10908c:;
  /* 10908c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 109090: cbz x8, #0x1090a4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1090a4;
  /* 109094: nop  */
  /* nop: no architectural effect here */
  /* 109098: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10909c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085600));
  fn1_142560(c);
  /* 1090a0: b #0x109104 */
  goto L_109104;
L_1090a4:;
  /* 1090a4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1090a8: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 1090ac: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 1090b0: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1090b4: nop  */
  /* nop: no architectural effect here */
  /* 1090b8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1090bc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085632));
  fn1_142560(c);
  /* 1090c0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1090c4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1090c8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1090cc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085648));
  fn1_a2030(c);
  /* 1090d0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1090d4: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1090d8: nop  */
  /* nop: no architectural effect here */
  /* 1090dc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1090e0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085668));
  fn1_142518(c);
  /* 1090e4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1090e8: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 1090ec: nop  */
  /* nop: no architectural effect here */
  /* 1090f0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1090f4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085688));
  fn1_142560(c);
  /* 1090f8: nop  */
  /* nop: no architectural effect here */
  /* 1090fc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109100: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085700));
  fn1_142578(c);
L_109104:;
  /* 109104: ldp x8, x10, [x24, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 109108: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 10910c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 109110: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 109114: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 109118: b.hs #0x10918c */
  if (ARC_COND(c, 2)) goto L_10918c;
  /* 10911c: ldr x22, [x8, x9, lsl #3] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 109120: cbz x22, #0x10918c */
  if ((ARC_X_R(c, 22)) == 0) goto L_10918c;
  /* 109124: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 109128: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 10912c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 109130: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085748));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 109134: strb w0, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 0));
  /* 109138: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10913c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 109140: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 109144: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 109148: strb w0, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 10914c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 109150: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 109154: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 109158: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10915c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085792));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 109160: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 109164: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085800));
  fn1_143478(c);
  /* 109168: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10916c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 109170: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 109174: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 109178: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10917c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 109180: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 109184: ret  */
  return;
L_109188:;
  /* 109188: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085836));
  fn1_fc3b8(c);
L_10918c:;
  /* 10918c: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085840));
  fn1_fc3b8(c);
  /* 109190: b #0x109194 */
  goto L_109194;
L_109194:;
  /* 109194: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 109198: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 10919c: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085856));
  fn1_d2a78(c);
  /* 1091a0: b #0x1091b4 */
  goto L_1091b4;
  /* 1091a4: b #0x1091b0 */
  goto L_1091b0;
  /* 1091a8: b #0x1091b0 */
  goto L_1091b0;
  /* 1091ac: b #0x1091b0 */
  goto L_1091b0;
L_1091b0:;
  /* 1091b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1091b4:;
  /* 1091b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1091b8: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085884));
  fn1_143478(c);
  /* 1091bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1091c0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1085892));
  fn1_9cc20(c);
}

void fn1_112690(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039051920));
  /* 112690: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 112694: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 112698: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11269c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1126a0: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 1126a4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 1126a8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1126ac: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 1126b0: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 1126b4: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 1126b8: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 1126bc: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124032));
  fn1_112ec0(c);
  /* 1126c0: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1126c4: sub w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 1126c8: cmp w9, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(30));
  /* 1126cc: b.hi #0x1126dc */
  if (ARC_COND(c, 8)) goto L_1126dc;
  /* 1126d0: tbnz w8, #2, #0x1126dc */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_1126dc;
  /* 1126d4: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 1126d8: b #0x1126e4 */
  goto L_1126e4;
L_1126dc:;
  /* 1126dc: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 1126e0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1126e4:;
  /* 1126e4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1126e8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1126ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1126f0: ret  */
  return;
}

void fn1_113ed4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058132));
  /* 113ed4: bti c */
  /* bti: no architectural effect here */
  /* 113ed8: ldrb w0, [x0, #0x10] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(16))));
  /* 113edc: ret  */
  return;
}

void fn1_11dda8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039098792));
  /* 11dda8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11ddac: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11ddb0: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11ddb4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11ddb8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11ddbc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11ddc0: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 11ddc4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 11ddc8: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170892));
  fn1_142860(c);
  /* 11ddcc: cmn x0, #8 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(8), 0);
  /* 11ddd0: b.hs #0x11de40 */
  if (ARC_COND(c, 2)) goto L_11de40;
  /* 11ddd4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11ddd8: cmp x0, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(23));
  /* 11dddc: b.hs #0x11ddf0 */
  if (ARC_COND(c, 2)) goto L_11ddf0;
  /* 11dde0: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* 11dde4: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 11dde8: cbnz x20, #0x11de18 */
  if ((ARC_X_R(c, 20)) != 0) goto L_11de18;
  /* 11ddec: b #0x11de28 */
  goto L_11de28;
L_11ddf0:;
  /* 11ddf0: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* 11ddf4: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 11ddf8: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 11ddfc: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 11de00: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 11de04: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170952));
  fn1_1428f0(c);
  /* 11de08: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* 11de0c: stp x20, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 11de10: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 11de14: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_11de18:;
  /* 11de18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11de1c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11de20: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 11de24: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1170984));
  fn1_1449f0(c);
L_11de28:;
  /* 11de28: strb wzr, [x19, x20] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* 11de2c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11de30: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11de34: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11de38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11de3c: ret  */
  return;
L_11de40:;
  /* 11de40: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1171012));
  fn1_d7d54(c);
}

void fn1_125fd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039132112));
  /* 125fd0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 125fd4: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 125fd8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 125fdc: str x27, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 27));
  /* 125fe0: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 125fe4: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 125fe8: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 125fec: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 125ff0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 125ff4: sub x22, x2, x1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 125ff8: mov x25, #-9 */
  ARC_X_W(c, 25, UINT64_C(18446744073709551607));
  /* 125ffc: asr x26, x22, #2 */
  ARC_X_W(c, 26, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* 126000: movk x25, #0x3fff, lsl #48 */
  ARC_X_W(c, 25, ((ARC_X_R(c, 25) & UINT64_C(281474976710655)) | UINT64_C(4611404543450677248)));
  /* 126004: cmp x26, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 25));
  /* 126008: b.hi #0x1261a4 */
  if (ARC_COND(c, 8)) goto L_1261a4;
  /* 12600c: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 126010: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 126014: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 126018: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12601c: cmp x26, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 26), UINT64_C(4));
  /* 126020: b.hi #0x126044 */
  if (ARC_COND(c, 8)) goto L_126044;
  /* 126024: lsr w8, w22, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 22)) >> ((UINT64_C(1)) & 31)));
  /* 126028: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* 12602c: orr x24, x9, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) | UINT64_C(4)));
  /* 126030: and w8, w8, #0xfe */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(254)));
  /* 126034: strb w8, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* 126038: cmp x23, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1));
  /* 12603c: b.ne #0x12607c */
  if (ARC_COND(c, 1)) goto L_12607c;
  /* 126040: b #0x126088 */
  goto L_126088;
L_126044:;
  /* 126044: orr x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(1)));
  /* 126048: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 12604c: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 126050: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* 126054: csinc x27, x9, x8, eq */
  ARC_X_W(c, 27, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 126058: lsl x0, x27, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 27)) << ((UINT64_C(2)) & 63)));
  /* 12605c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204320));
  fn1_1428f0(c);
  /* 126060: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 126064: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 126068: orr x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) | UINT64_C(1)));
  /* 12606c: stp x26, x0, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 126070: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 126074: cmp x23, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1));
  /* 126078: b.eq #0x126088 */
  if (ARC_COND(c, 0)) goto L_126088;
L_12607c:;
  /* 12607c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 126080: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 126084: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204360));
  fn1_1449d8(c);
L_126088:;
  /* 126088: sub x23, x21, x20 */
  ARC_X_W(c, 23, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* 12608c: str wzr, [x24, x22] */
  arc_st32((ARC_X_R(c, 24) + ARC_X_R(c, 22)), ARC_W_R(c, 31));
  /* 126090: asr x26, x23, #2 */
  ARC_X_W(c, 26, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(2)) & 63))));
  /* 126094: cmp x26, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 25));
  /* 126098: b.hi #0x1261a8 */
  if (ARC_COND(c, 8)) goto L_1261a8;
  /* 12609c: cmp x26, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 26), UINT64_C(4));
  /* 1260a0: b.hi #0x126170 */
  if (ARC_COND(c, 8)) goto L_126170;
  /* 1260a4: lsr w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) >> ((UINT64_C(1)) & 31)));
  /* 1260a8: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1260ac: orr x22, x9, #4 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) | UINT64_C(4)));
  /* 1260b0: and w8, w8, #0xfe */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(254)));
  /* 1260b4: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* 1260b8: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1260bc: b.eq #0x1260d0 */
  if (ARC_COND(c, 0)) goto L_1260d0;
L_1260c0:;
  /* 1260c0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1260c4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1260c8: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 1260cc: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204432));
  fn1_1449d8(c);
L_1260d0:;
  /* 1260d0: ldrb w24, [sp, #0x18] */
  ARC_W_W(c, 24, arc_ld8(((c)->sp + INT64_C(24))));
  /* 1260d4: str wzr, [x22, x23] */
  arc_st32((ARC_X_R(c, 22) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
  /* 1260d8: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 1260dc: ldr x20, [sp, #0x28] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1260e0: ldrb w22, [sp] */
  ARC_W_W(c, 22, arc_ld8((c)->sp));
  /* 1260e4: orr x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(4)));
  /* 1260e8: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* 1260ec: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1260f0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1260f4: csel x0, x8, x20, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 20)));
  /* 1260f8: orr x8, x9, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) | UINT64_C(4)));
  /* 1260fc: tst w22, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 22) & UINT64_C(1)));
  /* 126100: ldr x2, [x19, #0x10] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 126104: csel x1, x8, x21, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 21)));
  /* 126108: bl #0x144258 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204492));
  fn1_144258(c);
  /* 12610c: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 126110: tbz w22, #0, #0x126128 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_126128;
  /* 126114: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 126118: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 12611c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 126120: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 126124: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204520));
  fn1_142608(c);
L_126128:;
  /* 126128: tbz w24, #0, #0x126140 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_126140;
  /* 12612c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 126130: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 126134: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 126138: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 12613c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204544));
  fn1_142608(c);
L_126140:;
  /* 126140: cmp w19, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(0));
  /* 126144: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 126148: csinv w0, w8, wzr, ge */
  ARC_W_W(c, 0, (ARC_COND(c, 10) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* 12614c: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 126150: ldr x27, [sp, #0x40] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(64))));
  /* 126154: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 126158: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 12615c: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 126160: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 126164: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 126168: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12616c: ret  */
  return;
L_126170:;
  /* 126170: orr x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(1)));
  /* 126174: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 126178: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* 12617c: csinc x24, x9, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 126180: lsl x0, x24, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(2)) & 63)));
  /* 126184: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204616));
  fn1_1428f0(c);
  /* 126188: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12618c: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* 126190: stp x26, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 126194: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
  /* 126198: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 12619c: b.ne #0x1260c0 */
  if (ARC_COND(c, 1)) goto L_1260c0;
  /* 1261a0: b #0x1260d0 */
  goto L_1260d0;
L_1261a4:;
  /* 1261a4: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204648));
  fn1_e2274(c);
L_1261a8:;
  /* 1261a8: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204652));
  fn1_e2274(c);
  /* 1261ac: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 1261b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1261b4: tbz w8, #0, #0x1261cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1261cc;
  /* 1261b8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1261bc: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1261c0: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1261c4: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 1261c8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204684));
  fn1_142608(c);
L_1261cc:;
  /* 1261cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1261d0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1204692));
  fn1_9cc20(c);
}

void fn1_128740(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039142208));
  /* 128740: bti c */
  /* bti: no architectural effect here */
  /* 128744: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 128748: ret  */
  return;
}

void fn1_12a47c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039149692));
  /* 12a47c: bti c */
  /* bti: no architectural effect here */
  /* 12a480: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12a484: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a488: ret  */
  return;
}

void fn1_12bb3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155516));
  /* 12bb3c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12bb40: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bb44: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12bb48: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12bb4c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12bb50: bl #0x1440c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1227604));
  fn1_1440c0(c);
  /* 12bb54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12bb58: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 12bb5c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12bb60: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12bb64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12bb68: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1318ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039179436));
  /* 1318ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1318b0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1318b4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1318b8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1318bc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1318c0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1318c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1318c8: bl #0x143bb0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251532));
  fn1_143bb0(c);
  /* 1318cc: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 1318d0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1318d4: mov w2, #0x420 */
  ARC_W_W(c, 2, UINT64_C(1056));
  /* 1318d8: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251548));
  fn1_144a20(c);
  /* 1318dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1318e0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1318e4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 1318e8: bl #0x143b08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251564));
  fn1_143b08(c);
  /* 1318ec: adrp x8, #0x150000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1376256)));
  /* 1318f0: add x8, x8, #0x8a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2216)));
  /* 1318f4: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 1318f8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1318fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131900: bl #0x143c40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251588));
  fn1_143c40(c);
  /* 131904: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 131908: ldr x8, [x8, #0xc80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3200))));
  /* 13190c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 131910: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 131914: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 131918: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251612));
  fn1_144210(c);
  /* 13191c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 131920: bl #0x143ec8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251620));
  fn1_143ec8(c);
  /* 131924: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 131928: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13192c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 131930: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 131934: ret  */
  return;
  /* 131938: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251644));
  fn1_a1454(c);
  /* 13193c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 131940: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 131944: bl #0x143c88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251656));
  fn1_143c88(c);
  /* 131948: b #0x131950 */
  goto L_131950;
  /* 13194c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_131950:;
  /* 131950: add x0, x19, #0x410 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1040)));
  /* 131954: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251672));
  fn1_142d58(c);
  /* 131958: add x0, x19, #0x3f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1016)));
  /* 13195c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251680));
  fn1_142d58(c);
  /* 131960: add x0, x19, #0x3e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(992)));
  /* 131964: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251688));
  fn1_142d58(c);
  /* 131968: add x0, x19, #0x3c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(968)));
  /* 13196c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251696));
  fn1_142d58(c);
  /* 131970: add x0, x19, #0x3b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(944)));
  /* 131974: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251704));
  fn1_142d58(c);
  /* 131978: add x0, x19, #0x398 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(920)));
  /* 13197c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251712));
  fn1_142d58(c);
  /* 131980: add x0, x19, #0x380 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(896)));
  /* 131984: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251720));
  fn1_142d58(c);
  /* 131988: add x0, x19, #0x368 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(872)));
  /* 13198c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251728));
  fn1_142d58(c);
  /* 131990: add x0, x19, #0x350 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(848)));
  /* 131994: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251736));
  fn1_142d58(c);
  /* 131998: add x0, x19, #0x338 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(824)));
  /* 13199c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251744));
  fn1_142d58(c);
  /* 1319a0: add x0, x19, #0x320 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(800)));
  /* 1319a4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251752));
  fn1_142d58(c);
  /* 1319a8: add x0, x19, #0x308 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(776)));
  /* 1319ac: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251760));
  fn1_142d58(c);
  /* 1319b0: add x0, x19, #0x2f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(752)));
  /* 1319b4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251768));
  fn1_142d58(c);
  /* 1319b8: add x0, x19, #0x2d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(728)));
  /* 1319bc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251776));
  fn1_142d58(c);
  /* 1319c0: add x0, x19, #0x2c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(704)));
  /* 1319c4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251784));
  fn1_142d58(c);
  /* 1319c8: add x0, x19, #0x2a8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(680)));
  /* 1319cc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251792));
  fn1_142d58(c);
  /* 1319d0: add x0, x19, #0x290 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(656)));
  /* 1319d4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251800));
  fn1_142d58(c);
  /* 1319d8: add x0, x19, #0x278 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(632)));
  /* 1319dc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251808));
  fn1_142d58(c);
  /* 1319e0: add x0, x19, #0x260 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(608)));
  /* 1319e4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251816));
  fn1_142d58(c);
  /* 1319e8: add x0, x19, #0x248 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(584)));
  /* 1319ec: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251824));
  fn1_142d58(c);
  /* 1319f0: add x0, x19, #0x230 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(560)));
  /* 1319f4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251832));
  fn1_142d58(c);
  /* 1319f8: add x0, x19, #0x218 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(536)));
  /* 1319fc: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251840));
  fn1_142d58(c);
  /* 131a00: add x0, x19, #0x200 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(512)));
  /* 131a04: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251848));
  fn1_142d58(c);
  /* 131a08: add x0, x19, #0x1e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(488)));
  /* 131a0c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251856));
  fn1_142d58(c);
  /* 131a10: add x0, x19, #0x1d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(464)));
  /* 131a14: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251864));
  fn1_142d58(c);
  /* 131a18: add x0, x19, #0x1b8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(440)));
  /* 131a1c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251872));
  fn1_142d58(c);
  /* 131a20: add x0, x19, #0x1a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(416)));
  /* 131a24: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251880));
  fn1_142d58(c);
  /* 131a28: add x0, x19, #0x188 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(392)));
  /* 131a2c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251888));
  fn1_142d58(c);
  /* 131a30: add x0, x19, #0x170 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(368)));
  /* 131a34: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251896));
  fn1_142d58(c);
  /* 131a38: add x0, x19, #0x158 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(344)));
  /* 131a3c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251904));
  fn1_142d58(c);
  /* 131a40: add x0, x19, #0x140 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(320)));
  /* 131a44: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251912));
  fn1_142d58(c);
  /* 131a48: add x0, x19, #0x128 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(296)));
  /* 131a4c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251920));
  fn1_142d58(c);
  /* 131a50: add x0, x19, #0x110 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(272)));
  /* 131a54: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251928));
  fn1_142d58(c);
  /* 131a58: add x0, x19, #0xf8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(248)));
  /* 131a5c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251936));
  fn1_142d58(c);
  /* 131a60: add x0, x19, #0xe0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(224)));
  /* 131a64: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251944));
  fn1_142d58(c);
  /* 131a68: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 131a6c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251952));
  fn1_142d58(c);
  /* 131a70: add x0, x19, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(176)));
  /* 131a74: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251960));
  fn1_142d58(c);
  /* 131a78: add x0, x19, #0x98 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(152)));
  /* 131a7c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251968));
  fn1_142d58(c);
  /* 131a80: add x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(128)));
  /* 131a84: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251976));
  fn1_142d58(c);
  /* 131a88: add x0, x19, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(104)));
  /* 131a8c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251984));
  fn1_142d58(c);
  /* 131a90: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* 131a94: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1251992));
  fn1_142d58(c);
  /* 131a98: add x0, x19, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(56)));
  /* 131a9c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252000));
  fn1_142d58(c);
  /* 131aa0: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* 131aa4: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252008));
  fn1_142d58(c);
  /* 131aa8: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 131aac: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252016));
  fn1_142d58(c);
  /* 131ab0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131ab4: bl #0x143be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252024));
  fn1_143be0(c);
  /* 131ab8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 131abc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1252032));
  fn1_9cc20(c);
}

void fn1_134b90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192464));
  /* 134b90: bti c */
  /* bti: no architectural effect here */
  /* 134b94: add x0, x0, #0x3a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(928)));
  /* 134b98: ret  */
  return;
}

void fn1_136c9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039200924));
  /* 136c9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136ca0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136ca4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 136ca8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 136cac: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 136cb0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* 136cb4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* 136cb8: ldr x19, [x8, #0x28] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 136cbc: cbz x19, #0x136ce8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_136ce8;
  /* 136cc0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136cc4: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136cc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 136ccc: ldr x1, [x1, #0xaf0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2800))));
  /* 136cd0: ldr x2, [x2, #0xb38] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2872))));
  /* 136cd4: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 136cd8: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273052));
  fn1_142830(c);
  /* 136cdc: cbz x0, #0x136cf0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_136cf0;
  /* 136ce0: ldr x0, [x0, #0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* 136ce4: b #0x136d14 */
  goto L_136d14;
L_136ce8:;
  /* 136ce8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 136cec: b #0x136d14 */
  goto L_136d14;
L_136cf0:;
  /* 136cf0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136cf4: nop  */
  /* nop: no architectural effect here */
  /* 136cf8: adr x2, #0x14e0f0 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1368304)));
  /* 136cfc: ldr x1, [x1, #0xaf0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2800))));
  /* 136d00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 136d04: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 136d08: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273100));
  fn1_142830(c);
  /* 136d0c: cbz x0, #0x136d14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_136d14;
  /* 136d10: ldr x0, [x0, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(64))));
L_136d14:;
  /* 136d14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 136d18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136d1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136d20: ret  */
  return;
}

void fn1_139ad0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039212752));
  /* 139ad0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 139ad4: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 139ad8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139adc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 139ae0: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 139ae4: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 139ae8: cbz x8, #0x139b08 */
  if ((ARC_X_R(c, 8)) == 0) goto L_139b08;
  /* 139aec: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 139af0: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 139af4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139af8: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 139afc: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 139b00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 139b04: ret  */
  return;
L_139b08:;
  /* 139b08: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 139b0c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 139b10: add x1, x1, #0x597 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1431)));
  /* 139b14: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 139b18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 139b1c: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284896));
  fn1_11dda8(c);
  /* 139b20: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 139b24: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 139b28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 139b2c: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284912));
  fn1_142b78(c);
  /* 139b30: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 139b34: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 139b38: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
  /* 139b3c: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 139b40: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 139b44: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 139b48: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 139b4c: tbz w8, #0, #0x139b60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139b60;
  /* 139b50: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 139b54: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 139b58: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139b5c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1284960));
  fn1_142608(c);
L_139b60:;
  /* 139b60: ldp x1, x2, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 139b64: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 139b68: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 139b6c: cmp x2, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(0));
  /* 139b70: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 139b74: cbz w8, #0x139b8c */
  if ((ARC_W_R(c, 8)) == 0) goto L_139b8c;
  /* 139b78: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 139b7c: b.ne #0x139b98 */
  if (ARC_COND(c, 1)) goto L_139b98;
  /* 139b80: ldr x2, [sp] */
  ARC_X_W(c, 2, arc_ld64((c)->sp));
  /* 139b84: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 139b88: bl #0x138e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285004));
  fn1_138e98(c);
L_139b8c:;
  /* 139b8c: ldr x1, [sp] */
  ARC_X_W(c, 1, arc_ld64((c)->sp));
  /* 139b90: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 139b94: bl #0x138db4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285016));
  fn1_138db4(c);
L_139b98:;
  /* 139b98: ldr x3, [sp] */
  ARC_X_W(c, 3, arc_ld64((c)->sp));
  /* 139b9c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 139ba0: bl #0x138f84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285028));
  fn1_138f84(c);
  /* 139ba4: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 139ba8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139bac: tbz w8, #0, #0x139bd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139bd8;
  /* 139bb0: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 139bb4: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 139bb8: b #0x139bd0 */
  goto L_139bd0;
  /* 139bbc: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 139bc0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 139bc4: tbz w8, #0, #0x139bd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139bd8;
  /* 139bc8: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 139bcc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
L_139bd0:;
  /* 139bd0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 139bd4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285080));
  fn1_142608(c);
L_139bd8:;
  /* 139bd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139bdc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1285088));
  fn1_9cc20(c);
}

void fn1_1403c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039239616));
  /* 1403c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1403c4: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* 1403c8: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1403cc: str x21, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), ARC_X_R(c, 21));
  /* 1403d0: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1403d4: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* 1403d8: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 1403dc: add x8, x8, #0x4ba */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1210)));
  /* 1403e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1403e4: stp x8, x3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 1403e8: and w21, w2, #0xff */
  ARC_W_W(c, 21, (ARC_W_R(c, 2) & UINT64_C(255)));
  /* 1403ec: nop  */
  /* nop: no architectural effect here */
  /* 1403f0: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1403f4: nop  */
  /* nop: no architectural effect here */
  /* 1403f8: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1403fc: stp x0, xzr, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 140400: cbz x3, #0x140414 */
  if ((ARC_X_R(c, 3)) == 0) goto L_140414;
  /* 140404: str wzr, [x3] */
  arc_st32(ARC_X_R(c, 3), ARC_W_R(c, 31));
  /* 140408: ldarb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* 14040c: tbz w10, #0, #0x140580 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_140580;
L_140410:;
  /* 140410: str x8, [x3, #8] */
  arc_st64((ARC_X_R(c, 3) + INT64_C(8)), ARC_X_R(c, 8));
L_140414:;
  /* 140414: tst w21, #0xe */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 21) & UINT64_C(14)));
  /* 140418: and w20, w1, #0xfff */
  ARC_W_W(c, 20, (ARC_W_R(c, 1) & UINT64_C(4095)));
  /* 14041c: b.eq #0x140464 */
  if (ARC_COND(c, 0)) goto L_140464;
  /* 140420: str wzr, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 140424: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 140428: tbz w9, #0, #0x1405d8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1405d8;
L_14042c:;
  /* 14042c: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 140430: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 140434: tbnz w21, #3, #0x14046c */
  if (((ARC_W_R(c, 21)) >> 3 & 1) != 0) goto L_14046c;
  /* 140438: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* 14043c: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 140440: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 140444: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 140448: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 14044c: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 140450: csel x0, x9, x11, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* 140454: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311832));
  fn1_144588(c);
  /* 140458: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 14045c: b.ne #0x1404b8 */
  if (ARC_COND(c, 1)) goto L_1404b8;
  /* 140460: b #0x140494 */
  goto L_140494;
L_140464:;
  /* 140464: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 140468: b #0x140514 */
  goto L_140514;
L_14046c:;
  /* 14046c: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* 140470: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 140474: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 140478: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 14047c: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 140480: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 140484: csel x0, x9, x11, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* 140488: bl #0x144570 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311884));
  fn1_144570(c);
  /* 14048c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 140490: b.ne #0x1404b8 */
  if (ARC_COND(c, 1)) goto L_1404b8;
L_140494:;
  /* 140494: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311896));
  fn1_142a58(c);
  /* 140498: nop  */
  /* nop: no architectural effect here */
  /* 14049c: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1404a0: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 1404a4: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1404a8: tbz w9, #0, #0x140608 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_140608;
L_1404ac:;
  /* 1404ac: nop  */
  /* nop: no architectural effect here */
  /* 1404b0: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 1404b4: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_1404b8:;
  /* 1404b8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1404bc: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1404c0: add x2, sp, #0x40 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(64)));
  /* 1404c4: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 1404c8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1404cc: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1311952));
  fn1_1388e8(c);
  /* 1404d0: ldr w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(16))));
  /* 1404d4: cbz w8, #0x1404e4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1404e4;
  /* 1404d8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1404dc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1404e0: b #0x140564 */
  goto L_140564;
L_1404e4:;
  /* 1404e4: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1404e8: lsr x9, x8, #0x20 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(32)) & 63)));
  /* 1404ec: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* 1404f0: tbnz w21, #1, #0x140500 */
  if (((ARC_W_R(c, 21)) >> 1 & 1) != 0) goto L_140500;
  /* 1404f4: tbz w21, #2, #0x140504 */
  if (((ARC_W_R(c, 21)) >> 2 & 1) == 0) goto L_140504;
  /* 1404f8: bic w20, w9, w20 */
  ARC_W_W(c, 20, (ARC_W_R(c, 9) & (~ARC_W_R(c, 20))));
  /* 1404fc: b #0x140504 */
  goto L_140504;
L_140500:;
  /* 140500: orr w20, w20, w9 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) | ARC_W_R(c, 9)));
L_140504:;
  /* 140504: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 140508: and w20, w20, #0xfff */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) & UINT64_C(4095)));
  /* 14050c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 140510: lsl w3, w8, #8 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(8)) & 31)));
L_140514:;
  /* 140514: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 140518: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 14051c: mov w0, #-0x64 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551516));
  /* 140520: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 140524: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 140528: csinc x1, x9, x19, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 14052c: bl #0x144810 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312048));
  fn1_144810(c);
  /* 140530: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 140534: b.ne #0x140568 */
  if (ARC_COND(c, 1)) goto L_140568;
  /* 140538: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312060));
  fn1_142a58(c);
  /* 14053c: nop  */
  /* nop: no architectural effect here */
  /* 140540: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140544: ldr w19, [x0] */
  ARC_W_W(c, 19, arc_ld32(ARC_X_R(c, 0)));
  /* 140548: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 14054c: tbz w8, #0, #0x140634 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140634;
L_140550:;
  /* 140550: nop  */
  /* nop: no architectural effect here */
  /* 140554: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 140558: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 14055c: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 140560: stp x19, x8, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_140564:;
  /* 140564: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312104));
  fn1_139ad0(c);
L_140568:;
  /* 140568: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14056c: ldr x21, [sp, #0xe0] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(224))));
  /* 140570: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 140574: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* 140578: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 14057c: ret  */
  return;
L_140580:;
  /* 140580: nop  */
  /* nop: no architectural effect here */
  /* 140584: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140588: str w1, [sp, #8] */
  arc_st32(((c)->sp + INT64_C(8)), ARC_W_R(c, 1));
  /* 14058c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 140590: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312148));
  fn1_1424b8(c);
  /* 140594: ldr w1, [sp, #8] */
  ARC_W_W(c, 1, arc_ld32(((c)->sp + INT64_C(8))));
  /* 140598: nop  */
  /* nop: no architectural effect here */
  /* 14059c: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1405a0: nop  */
  /* nop: no architectural effect here */
  /* 1405a4: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1405a8: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1405ac: cbz w0, #0x140410 */
  if ((ARC_W_R(c, 0)) == 0) goto L_140410;
  /* 1405b0: nop  */
  /* nop: no architectural effect here */
  /* 1405b4: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1405b8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312188));
  fn1_1424d0(c);
  /* 1405bc: ldr w1, [sp, #8] */
  ARC_W_W(c, 1, arc_ld32(((c)->sp + INT64_C(8))));
  /* 1405c0: nop  */
  /* nop: no architectural effect here */
  /* 1405c4: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1405c8: nop  */
  /* nop: no architectural effect here */
  /* 1405cc: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1405d0: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1405d4: b #0x140410 */
  goto L_140410;
L_1405d8:;
  /* 1405d8: nop  */
  /* nop: no architectural effect here */
  /* 1405dc: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1405e0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312228));
  fn1_1424b8(c);
  /* 1405e4: nop  */
  /* nop: no architectural effect here */
  /* 1405e8: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1405ec: cbz w0, #0x14042c */
  if ((ARC_W_R(c, 0)) == 0) goto L_14042c;
  /* 1405f0: nop  */
  /* nop: no architectural effect here */
  /* 1405f4: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1405f8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312252));
  fn1_1424d0(c);
  /* 1405fc: nop  */
  /* nop: no architectural effect here */
  /* 140600: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 140604: b #0x14042c */
  goto L_14042c;
L_140608:;
  /* 140608: nop  */
  /* nop: no architectural effect here */
  /* 14060c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140610: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 140614: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312280));
  fn1_1424b8(c);
  /* 140618: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 14061c: cbz w0, #0x1404ac */
  if ((ARC_W_R(c, 0)) == 0) goto L_1404ac;
  /* 140620: nop  */
  /* nop: no architectural effect here */
  /* 140624: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140628: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312300));
  fn1_1424d0(c);
  /* 14062c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 140630: b #0x1404ac */
  goto L_1404ac;
L_140634:;
  /* 140634: nop  */
  /* nop: no architectural effect here */
  /* 140638: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 14063c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312320));
  fn1_1424b8(c);
  /* 140640: cbz w0, #0x140550 */
  if ((ARC_W_R(c, 0)) == 0) goto L_140550;
  /* 140644: nop  */
  /* nop: no architectural effect here */
  /* 140648: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 14064c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1312336));
  fn1_1424d0(c);
  /* 140650: b #0x140550 */
  goto L_140550;
}

void fn1_1427e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248872));
  /* 1427e8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1427ec: ldr x17, [x16, #0xfd8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(4056))));
  /* 1427f0: add x16, x16, #0xfd8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(4056)));
  /* 1427f4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1427f8: nop  */
  /* nop: no architectural effect here */
  /* 1427fc: nop  */
  /* nop: no architectural effect here */
}

void fn1_142de8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250408));
  /* 142de8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142dec: ldr x17, [x16, #0x1d8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(472))));
  /* 142df0: add x16, x16, #0x1d8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(472)));
  /* 142df4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142df8: nop  */
  /* nop: no architectural effect here */
  /* 142dfc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1433e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251944));
  /* 1433e8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1433ec: ldr x17, [x16, #0x3d8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(984))));
  /* 1433f0: add x16, x16, #0x3d8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(984)));
  /* 1433f4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1433f8: nop  */
  /* nop: no architectural effect here */
  /* 1433fc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1439e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253480));
  /* 1439e8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1439ec: ldr x17, [x16, #0x5d8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1496))));
  /* 1439f0: add x16, x16, #0x5d8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1496)));
  /* 1439f4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1439f8: nop  */
  /* nop: no architectural effect here */
  /* 1439fc: nop  */
  /* nop: no architectural effect here */
}

void fn1_143fe8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255016));
  /* 143fe8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143fec: ldr x17, [x16, #0x7d8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2008))));
  /* 143ff0: add x16, x16, #0x7d8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2008)));
  /* 143ff4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ff8: nop  */
  /* nop: no architectural effect here */
  /* 143ffc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1445e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256552));
  /* 1445e8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1445ec: ldr x17, [x16, #0x9d8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2520))));
  /* 1445f0: add x16, x16, #0x9d8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2520)));
  /* 1445f4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1445f8: nop  */
  /* nop: no architectural effect here */
  /* 1445fc: nop  */
  /* nop: no architectural effect here */
}

