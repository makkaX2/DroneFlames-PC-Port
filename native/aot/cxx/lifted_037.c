#include "lifted.h"

void fn1_9d960(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038573408));
  /* 9d960: bti c */
  /* bti: no architectural effect here */
  /* 9d964: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 9d968: b #0xa0770 */
  fn1_a0770(c); return;
}

void fn1_a1f24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591268));
  /* a1f24: bti c */
  /* bti: no architectural effect here */
  /* a1f28: nop  */
  /* nop: no architectural effect here */
  /* a1f2c: adr x0, #0x4fbfb */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(326651)));
  /* a1f30: ret  */
  return;
}

void fn1_a38a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038597796));
  /* a38a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a38a8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a38ac: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a38b0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a38b4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a38b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a38bc: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* a38c0: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* a38c4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* a38c8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a38cc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a38d0: tbz w4, #0, #0xa3988 */
  if (((ARC_W_R(c, 4)) >> 0 & 1) == 0) goto L_a3988;
  /* a38d4: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* a38d8: b.eq #0xa39d8 */
  if (ARC_COND(c, 0)) goto L_a39d8;
  /* a38dc: ldr x23, [x22, #8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a38e0: ldr x1, [x8, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a38e4: mov w24, w3 */
  ARC_W_W(c, 24, ARC_W_R(c, 3));
  /* a38e8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a38ec: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(669936));
  fn1_142848(c);
  /* a38f0: mov w3, w24 */
  ARC_W_W(c, 3, ARC_W_R(c, 24));
  /* a38f4: cbz w0, #0xa39d8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_a39d8;
  /* a38f8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* a38fc: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* a3900: b.eq #0xa3918 */
  if (ARC_COND(c, 0)) goto L_a3918;
  /* a3904: ldr x1, [x8, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3908: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a390c: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(669968));
  fn1_142848(c);
  /* a3910: mov w3, w24 */
  ARC_W_W(c, 3, ARC_W_R(c, 24));
  /* a3914: cbnz w0, #0xa39a8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a39a8;
L_a3918:;
  /* a3918: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a391c: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a3920: b.eq #0xa39f8 */
  if (ARC_COND(c, 0)) goto L_a39f8;
  /* a3924: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* a3928: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a392c: b.eq #0xa39f8 */
  if (ARC_COND(c, 0)) goto L_a39f8;
  /* a3930: ldr w8, [x19, #0x44] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(68))));
  /* a3934: str w3, [x19, #0x38] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(56)), ARC_W_R(c, 3));
  /* a3938: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* a393c: b.eq #0xa3a14 */
  if (ARC_COND(c, 0)) goto L_a3a14;
  /* a3940: strh wzr, [x19, #0x4c] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(76)), ARC_W_R(c, 31));
  /* a3944: and w5, w21, #1 */
  ARC_W_W(c, 5, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* a3948: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a394c: ldr x0, [x22, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* a3950: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a3954: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* a3958: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* a395c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a3960: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a3964: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(670056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a3968: ldrb w8, [x19, #0x4d] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(77))));
  /* a396c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3970: b.ne #0xa3a0c */
  if (ARC_COND(c, 1)) goto L_a3a0c;
  /* a3974: ldrb w8, [x19, #0x4c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(76))));
  /* a3978: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* a397c: str w9, [x19, #0x44] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(68)), ARC_W_R(c, 9));
  /* a3980: tbz w8, #0, #0xa3a14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a3a14;
  /* a3984: b #0xa3a40 */
  goto L_a3a40;
L_a3988:;
  /* a3988: ldr x9, [x22, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* a398c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3990: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a3994: b.eq #0xa39d8 */
  if (ARC_COND(c, 0)) goto L_a39d8;
  /* a3998: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* a399c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a39a0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a39a4: b.eq #0xa3918 */
  if (ARC_COND(c, 0)) goto L_a3918;
L_a39a8:;
  /* a39a8: ldr x0, [x22, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* a39ac: and w4, w21, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* a39b0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a39b4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a39b8: ldr x16, [x8, #0x30] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* a39bc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a39c0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a39c4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a39c8: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a39cc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a39d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a39d4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_a39d8:;
  /* a39d8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a39dc: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a39e0: b.ne #0xa3a40 */
  if (ARC_COND(c, 1)) goto L_a3a40;
  /* a39e4: ldr w8, [x19, #0x34] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(52))));
  /* a39e8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a39ec: b.eq #0xa3a40 */
  if (ARC_COND(c, 0)) goto L_a3a40;
  /* a39f0: str w3, [x19, #0x34] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(52)), ARC_W_R(c, 3));
  /* a39f4: b #0xa3a40 */
  goto L_a3a40;
L_a39f8:;
  /* a39f8: cmp w3, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(1));
  /* a39fc: b.ne #0xa3a40 */
  if (ARC_COND(c, 1)) goto L_a3a40;
  /* a3a00: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3a04: str w8, [x19, #0x38] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(56)), ARC_W_R(c, 8));
  /* a3a08: b #0xa3a40 */
  goto L_a3a40;
L_a3a0c:;
  /* a3a0c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* a3a10: str w8, [x19, #0x44] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(68)), ARC_W_R(c, 8));
L_a3a14:;
  /* a3a14: ldp w9, w8, [x19, #0x3c] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(60));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* a3a18: str x20, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 20));
  /* a3a1c: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* a3a20: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* a3a24: str w8, [x19, #0x40] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 8));
  /* a3a28: b.ne #0xa3a40 */
  if (ARC_COND(c, 1)) goto L_a3a40;
  /* a3a2c: ldr w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(48))));
  /* a3a30: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a3a34: b.ne #0xa3a40 */
  if (ARC_COND(c, 1)) goto L_a3a40;
  /* a3a38: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3a3c: strb w8, [x19, #0x4e] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(78)), ARC_W_R(c, 8));
L_a3a40:;
  /* a3a40: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a3a44: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a3a48: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a3a4c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a3a50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a3a54: ret  */
  return;
}

void fn1_aa59c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038625692));
  /* aa59c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa5a0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa5a4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa5a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa5ac: ldrb w19, [x0, #0x20] */
  ARC_W_W(c, 19, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* aa5b0: tbnz w19, #0, #0xaa5d8 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_aa5d8;
  /* aa5b4: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* aa5b8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* aa5bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aa5c0: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* aa5c4: ldr x10, [x8] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 8)));
  /* aa5c8: ldr x9, [x10, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(24))));
  /* aa5cc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* aa5d0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697812));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* aa5d4: strb w19, [x20, #0x20] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 19));
L_aa5d8:;
  /* aa5d8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa5dc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa5e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa5e4: ret  */
  return;
  /* aa5e8: strb w19, [x20, #0x20] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 19));
  /* aa5ec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697840));
  fn1_9cc20(c);
}

void fn1_b1b20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038655776));
  /* b1b20: bti c */
  /* bti: no architectural effect here */
  /* b1b24: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* b1b28: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b5d5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038672732));
  /* b5d5c: bti c */
  /* bti: no architectural effect here */
  /* b5d60: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* b5d64: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b84d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682832));
  /* b84d0: bti c */
  /* bti: no architectural effect here */
  /* b84d4: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b84d8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b84dc: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* b84e0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_bbab4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038696628));
  /* bbab4: bti c */
  /* bti: no architectural effect here */
  /* bbab8: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* bbabc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_be01c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038706204));
  /* be01c: bti c */
  /* bti: no architectural effect here */
  /* be020: cbz x0, #0xbe044 */
  if ((ARC_X_R(c, 0)) == 0) goto L_be044;
  /* be024: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* be028: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be02c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* be030: sub x1, x0, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) - UINT64_C(120)));
  /* be034: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* be038: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778300));
  fn1_bd950(c);
  /* be03c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be040: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_be044:;
  /* be044: ret  */
  return;
}

void fn1_d2958(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038790488));
  /* d2958: bti c */
  /* bti: no architectural effect here */
  /* d295c: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* d2960: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_d8314(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038813460));
  /* d8314: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d8318: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* d831c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d8320: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* d8324: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d8328: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d832c: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d8330: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8334: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8338: csinc x9, x9, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* d833c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d8340: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d8344: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d8348: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d834c: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* d8350: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885588));
  fn1_da18c(c);
  /* d8354: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d8358: ldp x9, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d835c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d8360: csel x0, x9, xzr, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 31)));
  /* d8364: csel x1, x10, xzr, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 31)));
  /* d8368: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d836c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* d8370: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d8374: ret  */
  return;
}

void fn1_dbc9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038828188));
  /* dbc9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dbca0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dbca4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dbca8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dbcac: cmp x3, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 3), UINT64_C(16));
  /* dbcb0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dbcb4: b.hi #0xdbd0c */
  if (ARC_COND(c, 8)) goto L_dbd0c;
  /* dbcb8: ldr w8, [x19, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* dbcbc: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* dbcc0: lsl x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((ARC_X_R(c, 8)) & 63)));
  /* dbcc4: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* dbcc8: b.hi #0xdbd0c */
  if (ARC_COND(c, 8)) goto L_dbd0c;
  /* dbccc: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* dbcd0: csel x9, x2, x3, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 2)) : ARC_X_R(c, 3)));
  /* dbcd4: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* dbcd8: cmp x9, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(8));
  /* dbcdc: b.hs #0xdbce8 */
  if (ARC_COND(c, 2)) goto L_dbce8;
  /* dbce0: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* dbce4: b #0xdbd04 */
  goto L_dbd04;
L_dbce8:;
  /* dbce8: lsr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63)));
  /* dbcec: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
L_dbcf0:;
  /* dbcf0: lsr x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* dbcf4: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* dbcf8: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* dbcfc: mov x10, x11 */
  ARC_X_W(c, 10, ARC_X_R(c, 11));
  /* dbd00: b.hi #0xdbcf0 */
  if (ARC_COND(c, 8)) goto L_dbcf0;
L_dbd04:;
  /* dbd04: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* dbd08: b.ne #0xdbd54 */
  if (ARC_COND(c, 1)) goto L_dbd54;
L_dbd0c:;
  /* dbd0c: ldr x8, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* dbd10: ldur x0, [x19, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(-8))));
L_dbd14:;
  /* dbd14: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* dbd18: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* dbd1c: b.eq #0xdbd30 */
  if (ARC_COND(c, 0)) goto L_dbd30;
  /* dbd20: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* dbd24: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* dbd28: cbnz x8, #0xdbd14 */
  if ((ARC_X_R(c, 8)) != 0) goto L_dbd14;
  /* dbd2c: b #0xdbd68 */
  goto L_dbd68;
L_dbd30:;
  /* dbd30: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* dbd34: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* dbd38: ldr x3, [x8, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* dbd3c: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* dbd40: ldr x9, [x9, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* dbd44: add x2, x8, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* dbd48: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(900428));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* dbd4c: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* dbd50: b #0xdbd68 */
  goto L_dbd68;
L_dbd54:;
  /* dbd54: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* dbd58: add x8, x8, w9, sxtw #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 9)))) << 4)));
  /* dbd5c: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* dbd60: str x1, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 1));
  /* dbd64: str x9, [x1] */
  arc_st64(ARC_X_R(c, 1), ARC_X_R(c, 9));
L_dbd68:;
  /* dbd68: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dbd6c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dbd70: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dbd74: ret  */
  return;
}

void fn1_e03fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038846460));
  /* e03fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0400: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0404: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0408: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e040c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0410: cmn x2, #8 */
  (void)arc_add64(c, ARC_X_R(c, 2), UINT64_C(8), 0);
  /* e0414: b.hs #0xe048c */
  if (ARC_COND(c, 2)) goto L_e048c;
  /* e0418: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e041c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e0420: cmp x2, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(23));
  /* e0424: b.hs #0xe0438 */
  if (ARC_COND(c, 2)) goto L_e0438;
  /* e0428: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* e042c: strb w8, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e0430: cbnz x19, #0xe0468 */
  if ((ARC_X_R(c, 19)) != 0) goto L_e0468;
  /* e0434: b #0xe0474 */
  goto L_e0474;
L_e0438:;
  /* e0438: orr x8, x19, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) | UINT64_C(7)));
  /* e043c: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e0440: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* e0444: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e0448: csinc x21, x9, x8, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e044c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e0450: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918612));
  fn1_1428f0(c);
  /* e0454: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e0458: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e045c: stp x19, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e0460: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e0464: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_e0468:;
  /* e0468: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e046c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e0470: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918644));
  fn1_1449f0(c);
L_e0474:;
  /* e0474: strb wzr, [x20, x19] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 19)), ARC_W_R(c, 31));
  /* e0478: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e047c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0480: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0484: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0488: ret  */
  return;
L_e048c:;
  /* e048c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918672));
  fn1_d7d54(c);
}

void fn1_e2e18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038857240));
  /* e2e18: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2e1c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2e20: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e2e24: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2e28: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e2e2c: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e2e30: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e2e34: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2e38: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e2e3c: subs x9, x9, x3 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3)));
  /* e2e40: b.lo #0xe2e88 */
  if (ARC_COND(c, 3)) goto L_e2e88;
  /* e2e44: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* e2e48: csel x19, x9, x2, lo */
  ARC_X_W(c, 19, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 2)));
  /* e2e4c: cbz x19, #0xe2e74 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e2e74;
  /* e2e50: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e2e54: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e2e58: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2e5c: lsl x2, x19, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(2)) & 63)));
  /* e2e60: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* e2e64: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e2e68: add x8, x8, x3, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 3)) << 2)));
  /* e2e6c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e2e70: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929396));
  fn1_1449f0(c);
L_e2e74:;
  /* e2e74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e2e78: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e2e7c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2e80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2e84: ret  */
  return;
L_e2e88:;
  /* e2e88: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929420));
  fn1_e1f80(c);
}

void fn1_e73d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038875092));
  /* e73d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e73d8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e73dc: str d8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[8].u64[0]);
  /* e73e0: stp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e73e4: str x23, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 23));
  /* e73e8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e73ec: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e73f0: add x29, sp, #0x28 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(40)));
  /* e73f4: mov w0, #0x58 */
  ARC_W_W(c, 0, UINT64_C(88));
  /* e73f8: fmov s8, s0 */
  arc_su_w(c, 8, (uint32_t)(ARC_SU_R(c, 0)));
  /* e73fc: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e7400: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947204));
  fn1_1428f0(c);
  /* e7404: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* e7408: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* e740c: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* e7410: ldr q1, [x8, #0xd80] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(3456))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3456)) + 8));
  /* e7414: str wzr, [x0, #0x50] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(80)), ARC_W_R(c, 31));
  /* e7418: str q1, [sp] */
  arc_st64((c)->sp, (c)->q[1].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[1].u64[1]);
  /* e741c: stp q0, q0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e7420: stp q0, q0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e7424: str q0, [x0, #0x40] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)) + 8, (c)->q[0].u64[1]);
  /* e7428: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e742c: mov w1, #0x15 */
  ARC_W_W(c, 1, UINT64_C(21));
  /* e7430: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e7434: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* e7438: bl #0x142dd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947260));
  fn1_142dd0(c);
  /* e743c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e7440: fcvt d8, s8 */
  arc_d_w(c, 8, (double)(ARC_S_R(c, 8)));
  /* e7444: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* e7448: orr x22, x20, #4 */
  ARC_X_W(c, 22, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* e744c: nop  */
  /* nop: no architectural effect here */
  /* e7450: adr x20, #0x74f94 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(479124)));
  /* e7454: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e7458: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e745c: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* e7460: csel x21, x10, x9, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
L_e7464:;
  /* e7464: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* e7468: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e746c: csel x0, x22, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 9)));
  /* e7470: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e7474: add x1, x21, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* e7478: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e747c: bl #0x142fc8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947328));
  fn1_142fc8(c);
  /* e7480: tbnz w0, #0x1f, #0xe7498 */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_e7498;
  /* e7484: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* e7488: cmp x21, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1));
  /* e748c: b.hs #0xe74b4 */
  if (ARC_COND(c, 2)) goto L_e74b4;
  /* e7490: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e7494: b #0xe749c */
  goto L_e749c;
L_e7498:;
  /* e7498: orr x21, x23, x21, lsl #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) | ((uint64_t)(ARC_X_R(c, 21)) << 1)));
L_e749c:;
  /* e749c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e74a0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e74a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e74a8: bl #0x142dd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947372));
  fn1_142dd0(c);
  /* e74ac: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e74b0: b #0xe7464 */
  goto L_e7464;
L_e74b4:;
  /* e74b4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e74b8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e74bc: bl #0x142dd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947392));
  fn1_142dd0(c);
  /* e74c0: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* e74c4: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* e74c8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e74cc: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e74d0: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e74d4: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* e74d8: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* e74dc: bl #0x142e18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947424));
  fn1_142e18(c);
  /* e74e0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e74e4: ldr x23, [sp, #0x38] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(56))));
  /* e74e8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e74ec: ldr d8, [sp, #0x20] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e74f0: ldp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e74f4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e74f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e74fc: ret  */
  return;
  /* e7500: b #0xe7508 */
  goto L_e7508;
  /* e7504: b #0xe7508 */
  goto L_e7508;
L_e7508:;
  /* e7508: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e750c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e7510: bl #0x142e18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947476));
  fn1_142e18(c);
  /* e7514: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7518: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947484));
  fn1_9cc20(c);
}

void fn1_e9be0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038885344));
  /* e9be0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9be4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9be8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e9bec: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e9bf0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9bf4: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* e9bf8: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e9bfc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e9c00: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* e9c04: mov w2, #0xa0 */
  ARC_W_W(c, 2, UINT64_C(160));
  /* e9c08: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957452));
  fn1_142818(c);
  /* e9c0c: ldr x19, [x29, #0x18] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e9c10: cbnz x19, #0xe9c28 */
  if ((ARC_X_R(c, 19)) != 0) goto L_e9c28;
  /* e9c14: mov w0, #0xa0 */
  ARC_W_W(c, 0, UINT64_C(160));
  /* e9c18: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957468));
  fn1_a24dc(c);
  /* e9c1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e9c20: cbnz x0, #0xe9c28 */
  if ((ARC_X_R(c, 0)) != 0) goto L_e9c28;
  /* e9c24: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957480));
  fn1_142488(c);
L_e9c28:;
  /* e9c28: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* e9c2c: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* e9c30: nop  */
  /* nop: no architectural effect here */
  /* e9c34: adr x8, #0x15d240 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1430080)));
  /* e9c38: str q0, [x19, #0x90] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* e9c3c: stp q0, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e9c40: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e9c44: stp q0, q0, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e9c48: stp q0, q0, [x19, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e9c4c: str q0, [x21, #0x80]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(128));
  /* e9c50: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* e9c54: tbz w8, #0, #0xe9c84 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e9c84;
L_e9c58:;
  /* e9c58: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e9c5c: nop  */
  /* nop: no architectural effect here */
  /* e9c60: adr x2, #0x156d48 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1404232)));
  /* e9c64: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e9c68: bl #0x1431d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957548));
  fn1_1431d8(c);
  /* e9c6c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e9c70: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e9c74: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e9c78: ldr x1, [x1, #0xa68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2664))));
  /* e9c7c: ldr x2, [x2, #0xa78] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2680))));
  /* e9c80: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957572));
  fn1_142440(c);
L_e9c84:;
  /* e9c84: nop  */
  /* nop: no architectural effect here */
  /* e9c88: adr x0, #0x15d240 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430080)));
  /* e9c8c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957584));
  fn1_1424b8(c);
  /* e9c90: cbz w0, #0xe9c58 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e9c58;
  /* e9c94: nop  */
  /* nop: no architectural effect here */
  /* e9c98: adr x0, #0x15d240 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430080)));
  /* e9c9c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957600));
  fn1_1424d0(c);
  /* e9ca0: b #0xe9c58 */
  goto L_e9c58;
  /* e9ca4: nop  */
  /* nop: no architectural effect here */
  /* e9ca8: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* e9cac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e9cb0: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e9cb4: b.lo #0xe9cd8 */
  if (ARC_COND(c, 3)) goto L_e9cd8;
  /* e9cb8: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* e9cbc: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* e9cc0: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e9cc4: b.hs #0xe9cd8 */
  if (ARC_COND(c, 2)) goto L_e9cd8;
  /* e9cc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e9ccc: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957648));
  fn1_a2664(c);
  /* e9cd0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e9cd4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957656));
  fn1_9cc20(c);
L_e9cd8:;
  /* e9cd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e9cdc: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957664));
  fn1_142800(c);
  /* e9ce0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e9ce4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957672));
  fn1_9cc20(c);
  /* e9ce8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957676));
  fn1_a1454(c);
  /* e9cec: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957680));
  fn1_a1454(c);
}

void fn1_eb924(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892836));
  /* eb924: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb928: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb92c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb930: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb934: nop  */
  /* nop: no architectural effect here */
  /* eb938: adr x8, #0x15d258 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1430104)));
  /* eb93c: adrp x20, #0x15d000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1429504)));
  /* eb940: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* eb944: tbz w8, #0, #0xeb95c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_eb95c;
L_eb948:;
  /* eb948: ldr x0, [x20, #0x250] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(592))));
  /* eb94c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb950: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb954: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb958: ret  */
  return;
L_eb95c:;
  /* eb95c: nop  */
  /* nop: no architectural effect here */
  /* eb960: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* eb964: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964968));
  fn1_1424b8(c);
  /* eb968: cbz w0, #0xeb948 */
  if ((ARC_W_R(c, 0)) == 0) goto L_eb948;
  /* eb96c: nop  */
  /* nop: no architectural effect here */
  /* eb970: adr x19, #0x15d248 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1430088)));
  /* eb974: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb978: bl #0xeb9a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964988));
  fn1_eb9a8(c);
  /* eb97c: nop  */
  /* nop: no architectural effect here */
  /* eb980: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* eb984: str x19, [x20, #0x250] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(592)), ARC_X_R(c, 19));
  /* eb988: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965004));
  fn1_1424d0(c);
  /* eb98c: b #0xeb948 */
  goto L_eb948;
  /* eb990: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb994: nop  */
  /* nop: no architectural effect here */
  /* eb998: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* eb99c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965024));
  fn1_1424e8(c);
  /* eb9a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb9a4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965032));
  fn1_9cc20(c);
}

void fn1_ed75c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900572));
  /* ed75c: bti c */
  /* bti: no architectural effect here */
  /* ed760: stp x1, x2, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* ed764: str x3, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 3));
  /* ed768: ret  */
  return;
}

void fn1_f105c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915164));
  /* f105c: bti c */
  /* bti: no architectural effect here */
  /* f1060: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f1064: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f1068: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f106c: add x0, x8, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* f1070: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f418c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927756));
  /* f418c: bti c */
  /* bti: no architectural effect here */
  /* f4190: stp x1, x2, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* f4194: str x3, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 3));
  /* f4198: ret  */
  return;
}

void fn1_f7a94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942356));
  /* f7a94: bti c */
  /* bti: no architectural effect here */
  /* f7a98: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7a9c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7aa0: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f7aa4: add x0, x8, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* f7aa8: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_fcca8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038963368));
  /* fcca8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fccac: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fccb0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fccb4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fccb8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fccbc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fccc0: ldr x8, [x8, #0xae0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2784))));
  /* fccc4: ldrb w9, [x0, #0x40] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(64))));
  /* fccc8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fcccc: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fccd0: tbz w9, #0, #0xfcce4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_fcce4;
  /* fccd4: ldr x8, [x19, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fccd8: ldr x0, [x19, #0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fccdc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fcce0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035492));
  fn1_142608(c);
L_fcce4:;
  /* fcce4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcce8: nop  */
  /* nop: no architectural effect here */
  /* fccec: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fccf0: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fccf4: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fccf8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fccfc: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* fcd00: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fcd04: b.eq #0xfcd28 */
  if (ARC_COND(c, 0)) goto L_fcd28;
  /* fcd08: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fcd0c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fcd10: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035540));
  fn1_bd950(c);
  /* fcd14: cbnz x0, #0xfcd28 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fcd28;
  /* fcd18: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fcd1c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fcd20: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fcd24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035560));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fcd28:;
  /* fcd28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fcd2c: mov w1, #0x68 */
  ARC_W_W(c, 1, UINT64_C(104));
  /* fcd30: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fcd34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fcd38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fcd3c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_ffa98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038975128));
  /* ffa98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ffa9c: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* ffaa0: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ffaa4: stp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* ffaa8: stp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ffaac: stp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ffab0: stp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ffab4: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ffab8: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* ffabc: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* ffac0: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* ffac4: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* ffac8: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* ffacc: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* ffad0: mov x26, x4 */
  ARC_X_W(c, 26, ARC_X_R(c, 4));
  /* ffad4: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* ffad8: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* ffadc: mov x28, x1 */
  ARC_X_W(c, 28, ARC_X_R(c, 1));
  /* ffae0: mul x27, x8, x9 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* ffae4: str w6, [sp, #0x38] */
  arc_st32(((c)->sp + INT64_C(56)), ARC_W_R(c, 6));
  /* ffae8: str x0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 0));
  /* ffaec: cmp x27, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(101));
  /* ffaf0: b.lo #0xffb0c */
  if (ARC_COND(c, 3)) goto L_ffb0c;
  /* ffaf4: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* ffaf8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047292));
  fn1_1428a8(c);
  /* ffafc: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* ffb00: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* ffb04: cbnz x0, #0xffb18 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ffb18;
  /* ffb08: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047308));
  fn1_142c08(c);
L_ffb0c:;
  /* ffb0c: add x8, sp, #0x3c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(60)));
  /* ffb10: str xzr, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 31));
  /* ffb14: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
L_ffb18:;
  /* ffb18: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* ffb1c: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* ffb20: b.eq #0xffb70 */
  if (ARC_COND(c, 0)) goto L_ffb70;
  /* ffb24: ldr x10, [sp, #0x20] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(32))));
  /* ffb28: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* ffb2c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* ffb30: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
L_ffb34:;
  /* ffb34: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* ffb38: ldr x12, [x9, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* ffb3c: add x9, x9, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* ffb40: lsr x13, x11, #1 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* ffb44: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* ffb48: csel x11, x13, x12, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* ffb4c: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* ffb50: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ffb54: cinc w12, w8, eq */
  ARC_W_W(c, 12, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* ffb58: cinc x21, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 21)) + 1 : (ARC_X_R(c, 21))));
  /* ffb5c: cmp x9, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 22));
  /* ffb60: sub x27, x27, x11 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) - ARC_X_R(c, 11)));
  /* ffb64: strb w12, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* ffb68: b.ne #0xffb34 */
  if (ARC_COND(c, 1)) goto L_ffb34;
  /* ffb6c: b #0xffb78 */
  goto L_ffb78;
L_ffb70:;
  /* ffb70: mov x27, xzr */
  ARC_X_W(c, 27, ARC_X_R(c, 31));
  /* ffb74: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
L_ffb78:;
  /* ffb78: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* ffb7c: str x23, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 23));
L_ffb80:;
  /* ffb80: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* ffb84: mov x19, x24 */
  ARC_X_W(c, 19, ARC_X_R(c, 24));
  /* ffb88: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* ffb8c: cbz x0, #0xffbe0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ffbe0;
  /* ffb90: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ffb94: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ffb98: b.eq #0xffbac */
  if (ARC_COND(c, 0)) goto L_ffbac;
  /* ffb9c: mov w20, wzr */
  ARC_W_W(c, 20, ARC_W_R(c, 31));
  /* ffba0: cbnz x28, #0xffbe8 */
  if ((ARC_X_R(c, 28)) != 0) goto L_ffbe8;
L_ffba4:;
  /* ffba4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* ffba8: b #0xffc18 */
  goto L_ffc18;
L_ffbac:;
  /* ffbac: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ffbb0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* ffbb4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047480));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ffbb8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ffbbc: b.eq #0xffbd8 */
  if (ARC_COND(c, 0)) goto L_ffbd8;
  /* ffbc0: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* ffbc4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* ffbc8: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* ffbcc: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* ffbd0: cbnz x28, #0xffbe8 */
  if ((ARC_X_R(c, 28)) != 0) goto L_ffbe8;
  /* ffbd4: b #0xffba4 */
  goto L_ffba4;
L_ffbd8:;
  /* ffbd8: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* ffbdc: str xzr, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 31));
L_ffbe0:;
  /* ffbe0: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* ffbe4: cbz x28, #0xffba4 */
  if ((ARC_X_R(c, 28)) == 0) goto L_ffba4;
L_ffbe8:;
  /* ffbe8: ldp x8, x9, [x28, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ffbec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ffbf0: b.eq #0xffbfc */
  if (ARC_COND(c, 0)) goto L_ffbfc;
  /* ffbf4: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* ffbf8: b #0xffc18 */
  goto L_ffc18;
L_ffbfc:;
  /* ffbfc: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* ffc00: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* ffc04: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* ffc08: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047564));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ffc0c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ffc10: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* ffc14: csel x28, xzr, x28, eq */
  ARC_X_W(c, 28, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 28)));
L_ffc18:;
  /* ffc18: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* ffc1c: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* ffc20: ldr x0, [x9] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 9)));
  /* ffc24: b.eq #0xffdb8 */
  if (ARC_COND(c, 0)) goto L_ffdb8;
  /* ffc28: cbz x27, #0xffdb8 */
  if ((ARC_X_R(c, 27)) == 0) goto L_ffdb8;
  /* ffc2c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ffc30: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ffc34: b.eq #0xffc40 */
  if (ARC_COND(c, 0)) goto L_ffc40;
  /* ffc38: ldrb w1, [x8] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 8)));
  /* ffc3c: b #0xffc50 */
  goto L_ffc50;
L_ffc40:;
  /* ffc40: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ffc44: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* ffc48: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047628));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ffc4c: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_ffc50:;
  /* ffc50: ldr w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(56))));
  /* ffc54: tbnz w8, #0, #0xffc6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ffc6c;
  /* ffc58: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ffc5c: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* ffc60: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* ffc64: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047656));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ffc68: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_ffc6c:;
  /* ffc6c: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* ffc70: add x24, x19, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* ffc74: b.eq #0xffb80 */
  if (ARC_COND(c, 0)) goto L_ffb80;
  /* ffc78: mov x20, x23 */
  ARC_X_W(c, 20, ARC_X_R(c, 23));
  /* ffc7c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* ffc80: str x28, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 28));
  /* ffc84: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* ffc88: and w28, w1, #0xff */
  ARC_W_W(c, 28, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* ffc8c: b #0xffca8 */
  goto L_ffca8;
L_ffc90:;
  /* ffc90: sub x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) - UINT64_C(1)));
  /* ffc94: strb wzr, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 31));
L_ffc98:;
  /* ffc98: add x20, x20, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* ffc9c: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* ffca0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ffca4: b.eq #0xffd20 */
  if (ARC_COND(c, 0)) goto L_ffd20;
L_ffca8:;
  /* ffca8: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* ffcac: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ffcb0: b.ne #0xffc98 */
  if (ARC_COND(c, 1)) goto L_ffc98;
  /* ffcb4: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* ffcb8: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* ffcbc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* ffcc0: csinc x8, x9, x20, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* ffcc4: ldrb w1, [x8, x19] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
  /* ffcc8: ldr w8, [sp, #0x38] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(56))));
  /* ffccc: tbnz w8, #0, #0xffce4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ffce4;
  /* ffcd0: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* ffcd4: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* ffcd8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* ffcdc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047776));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ffce0: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_ffce4:;
  /* ffce4: cmp w28, w1, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 28), ((uint64_t)(uint8_t)(ARC_W_R(c, 1))));
  /* ffce8: b.ne #0xffc90 */
  if (ARC_COND(c, 1)) goto L_ffc90;
  /* ffcec: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* ffcf0: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ffcf4: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* ffcf8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* ffcfc: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* ffd00: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* ffd04: b.ne #0xffd18 */
  if (ARC_COND(c, 1)) goto L_ffd18;
  /* ffd08: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* ffd0c: sub x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) - UINT64_C(1)));
  /* ffd10: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* ffd14: strb w8, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 8));
L_ffd18:;
  /* ffd18: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* ffd1c: b #0xffc98 */
  goto L_ffc98;
L_ffd20:;
  /* ffd20: ldr x23, [sp, #0x18] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(24))));
  /* ffd24: ldr x28, [sp, #0x28] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(40))));
  /* ffd28: tbz w25, #0, #0xffb80 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_ffb80;
  /* ffd2c: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* ffd30: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* ffd34: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ffd38: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ffd3c: b.eq #0xffd50 */
  if (ARC_COND(c, 0)) goto L_ffd50;
  /* ffd40: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* ffd44: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ffd48: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* ffd4c: b #0xffd60 */
  goto L_ffd60;
L_ffd50:;
  /* ffd50: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ffd54: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* ffd58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1047900));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ffd5c: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
L_ffd60:;
  /* ffd60: add x8, x21, x27 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 27)));
  /* ffd64: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* ffd68: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* ffd6c: b.lo #0xffb80 */
  if (ARC_COND(c, 3)) goto L_ffb80;
  /* ffd70: b #0xffd84 */
  goto L_ffd84;
L_ffd74:;
  /* ffd74: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* ffd78: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ffd7c: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* ffd80: b.eq #0xffb80 */
  if (ARC_COND(c, 0)) goto L_ffb80;
L_ffd84:;
  /* ffd84: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* ffd88: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* ffd8c: b.ne #0xffd74 */
  if (ARC_COND(c, 1)) goto L_ffd74;
  /* ffd90: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* ffd94: ldr x11, [x8, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* ffd98: lsr x12, x10, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* ffd9c: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* ffda0: csel x10, x12, x11, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* ffda4: cmp x10, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 24));
  /* ffda8: b.eq #0xffd74 */
  if (ARC_COND(c, 0)) goto L_ffd74;
  /* ffdac: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* ffdb0: strb wzr, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* ffdb4: b #0xffd74 */
  goto L_ffd74;
L_ffdb8:;
  /* ffdb8: cbz x0, #0xffde4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ffde4;
  /* ffdbc: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ffdc0: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* ffdc4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ffdc8: b.eq #0xffe74 */
  if (ARC_COND(c, 0)) goto L_ffe74;
  /* ffdcc: cbz x28, #0xffe0c */
  if ((ARC_X_R(c, 28)) == 0) goto L_ffe0c;
  /* ffdd0: ldp x8, x9, [x28, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ffdd4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ffdd8: b.ne #0xffe00 */
  if (ARC_COND(c, 1)) goto L_ffe00;
  /* ffddc: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* ffde0: b #0xffea4 */
  goto L_ffea4;
L_ffde4:;
  /* ffde4: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* ffde8: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* ffdec: cbz x28, #0xffe9c */
  if ((ARC_X_R(c, 28)) == 0) goto L_ffe9c;
L_ffdf0:;
  /* ffdf0: ldp x8, x9, [x28, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ffdf4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ffdf8: b.eq #0xffea4 */
  if (ARC_COND(c, 0)) goto L_ffea4;
  /* ffdfc: tbnz w19, #0, #0xffe0c */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_ffe0c;
L_ffe00:;
  /* ffe00: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* ffe04: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* ffe08: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_ffe0c:;
  /* ffe0c: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* ffe10: b.eq #0xffe34 */
  if (ARC_COND(c, 0)) goto L_ffe34;
  /* ffe14: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
L_ffe18:;
  /* ffe18: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* ffe1c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* ffe20: b.eq #0xffe40 */
  if (ARC_COND(c, 0)) goto L_ffe40;
  /* ffe24: add x23, x23, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* ffe28: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ffe2c: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* ffe30: b.ne #0xffe18 */
  if (ARC_COND(c, 1)) goto L_ffe18;
L_ffe34:;
  /* ffe34: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* ffe38: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* ffe3c: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_ffe40:;
  /* ffe40: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* ffe44: cbz x0, #0xffe4c */
  if ((ARC_X_R(c, 0)) == 0) goto L_ffe4c;
  /* ffe48: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048140));
  fn1_142800(c);
L_ffe4c:;
  /* ffe4c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ffe50: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ffe54: ldp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ffe58: ldp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ffe5c: ldp x26, x25, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ffe60: ldp x28, x27, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ffe64: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ffe68: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* ffe6c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ffe70: ret  */
  return;
L_ffe74:;
  /* ffe74: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ffe78: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* ffe7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048192));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ffe80: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ffe84: b.eq #0xffec8 */
  if (ARC_COND(c, 0)) goto L_ffec8;
  /* ffe88: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* ffe8c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* ffe90: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* ffe94: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* ffe98: cbnz x28, #0xffdf0 */
  if ((ARC_X_R(c, 28)) != 0) goto L_ffdf0;
L_ffe9c:;
  /* ffe9c: tbnz w19, #0, #0xffe00 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_ffe00;
  /* ffea0: b #0xffe0c */
  goto L_ffe0c;
L_ffea4:;
  /* ffea4: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* ffea8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* ffeac: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* ffeb0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048244));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ffeb4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ffeb8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* ffebc: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* ffec0: tbz w8, #0, #0xffe00 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ffe00;
  /* ffec4: b #0xffe0c */
  goto L_ffe0c;
L_ffec8:;
  /* ffec8: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* ffecc: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* ffed0: str xzr, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 31));
  /* ffed4: cbnz x28, #0xffdf0 */
  if ((ARC_X_R(c, 28)) != 0) goto L_ffdf0;
  /* ffed8: b #0xffe9c */
  goto L_ffe9c;
  /* ffedc: b #0xffeec */
  goto L_ffeec;
  /* ffee0: b #0xffeec */
  goto L_ffeec;
  /* ffee4: b #0xffeec */
  goto L_ffeec;
  /* ffee8: b #0xffeec */
  goto L_ffeec;
L_ffeec:;
  /* ffeec: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* ffef0: cbz x8, #0xfff04 */
  if ((ARC_X_R(c, 8)) == 0) goto L_fff04;
  /* ffef4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ffef8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ffefc: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048320));
  fn1_142800(c);
  /* fff00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_fff04:;
  /* fff04: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048328));
  fn1_9cc20(c);
}

void fn1_10fdcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039041484));
  /* 10fdcc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10fdd0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10fdd4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10fdd8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 10fddc: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 10fde0: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 10fde4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 10fde8: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 10fdec: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 10fdf0: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 10fdf4: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 10fdf8: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113596));
  fn1_110db0(c);
  /* 10fdfc: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 10fe00: tbnz w8, #2, #0x10fe24 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_10fe24;
  /* 10fe04: add w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1900)));
  /* 10fe08: cmp w0, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(100));
  /* 10fe0c: add w9, w0, #0x7d0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) + UINT64_C(2000)));
  /* 10fe10: csel w8, w8, w0, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 0)));
  /* 10fe14: cmp w0, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(69));
  /* 10fe18: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 10fe1c: sub w8, w8, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1900)));
  /* 10fe20: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_10fe24:;
  /* 10fe24: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10fe28: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10fe2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10fe30: ret  */
  return;
}

void fn1_113cc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057604));
  /* 113cc4: bti c */
  /* bti: no architectural effect here */
  /* 113cc8: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 113ccc: ret  */
  return;
}

void fn1_118d14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039078164));
  /* 118d14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 118d18: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 118d1c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 118d20: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 118d24: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 118d28: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 118d2c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 118d30: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 118d34: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 118d38: ldr x27, [x29, #0x60] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(96))));
  /* 118d3c: ldr x28, [x2] */
  ARC_X_W(c, 28, arc_ld64(ARC_X_R(c, 2)));
  /* 118d40: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 118d44: mov x20, x6 */
  ARC_X_W(c, 20, ARC_X_R(c, 6));
  /* 118d48: mov x26, x5 */
  ARC_X_W(c, 26, ARC_X_R(c, 5));
  /* 118d4c: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 118d50: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 118d54: mov w25, w1 */
  ARC_W_W(c, 25, ARC_W_R(c, 1));
  /* 118d58: tbz w0, #0, #0x118e28 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_118e28;
  /* 118d5c: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 118d60: ldr x21, [x21, #0xc10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(3088))));
  /* 118d64: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118d68: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 118d6c: b.eq #0x118f08 */
  if (ARC_COND(c, 0)) goto L_118f08;
  /* 118d70: nop  */
  /* nop: no architectural effect here */
  /* 118d74: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118d78: str x22, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 22));
  /* 118d7c: mov x22, x26 */
  ARC_X_W(c, 22, ARC_X_R(c, 26));
  /* 118d80: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150340));
  fn1_142518(c);
  /* 118d84: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118d88: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 118d8c: b.ne #0x118db8 */
  if (ARC_COND(c, 1)) goto L_118db8;
  /* 118d90: nop  */
  /* nop: no architectural effect here */
  /* 118d94: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 118d98: nop  */
  /* nop: no architectural effect here */
  /* 118d9c: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_118da0:;
  /* 118da0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118da4: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 118da8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150380));
  fn1_142530(c);
  /* 118dac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118db0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 118db4: b.eq #0x118da0 */
  if (ARC_COND(c, 0)) goto L_118da0;
L_118db8:;
  /* 118db8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118dbc: cbnz x8, #0x118e8c */
  if ((ARC_X_R(c, 8)) != 0) goto L_118e8c;
  /* 118dc0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 118dc4: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 118dc8: strb wzr, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 118dcc: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 118dd0: nop  */
  /* nop: no architectural effect here */
  /* 118dd4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118dd8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150428));
  fn1_142560(c);
  /* 118ddc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 118de0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 118de4: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 118de8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 118dec: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150448));
  fn1_a2030(c);
  /* 118df0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 118df4: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 118df8: nop  */
  /* nop: no architectural effect here */
  /* 118dfc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118e00: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150468));
  fn1_142518(c);
  /* 118e04: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 118e08: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 118e0c: nop  */
  /* nop: no architectural effect here */
  /* 118e10: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118e14: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150488));
  fn1_142560(c);
  /* 118e18: nop  */
  /* nop: no architectural effect here */
  /* 118e1c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 118e20: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150500));
  fn1_142578(c);
  /* 118e24: b #0x118f04 */
  goto L_118f04;
L_118e28:;
  /* 118e28: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 118e2c: ldr x21, [x21, #0xc08] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(3080))));
  /* 118e30: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118e34: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 118e38: b.eq #0x118f08 */
  if (ARC_COND(c, 0)) goto L_118f08;
  /* 118e3c: nop  */
  /* nop: no architectural effect here */
  /* 118e40: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118e44: str x22, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 22));
  /* 118e48: mov x22, x26 */
  ARC_X_W(c, 22, ARC_X_R(c, 26));
  /* 118e4c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150544));
  fn1_142518(c);
  /* 118e50: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118e54: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 118e58: b.ne #0x118e84 */
  if (ARC_COND(c, 1)) goto L_118e84;
  /* 118e5c: nop  */
  /* nop: no architectural effect here */
  /* 118e60: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 118e64: nop  */
  /* nop: no architectural effect here */
  /* 118e68: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_118e6c:;
  /* 118e6c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118e70: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 118e74: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150584));
  fn1_142530(c);
  /* 118e78: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118e7c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 118e80: b.eq #0x118e6c */
  if (ARC_COND(c, 0)) goto L_118e6c;
L_118e84:;
  /* 118e84: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118e88: cbz x8, #0x118ea0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_118ea0;
L_118e8c:;
  /* 118e8c: nop  */
  /* nop: no architectural effect here */
  /* 118e90: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118e94: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150616));
  fn1_142560(c);
  /* 118e98: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 118e9c: b #0x118f04 */
  goto L_118f04;
L_118ea0:;
  /* 118ea0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 118ea4: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 118ea8: strb wzr, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 118eac: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 118eb0: nop  */
  /* nop: no architectural effect here */
  /* 118eb4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118eb8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150652));
  fn1_142560(c);
  /* 118ebc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 118ec0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 118ec4: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 118ec8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 118ecc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150672));
  fn1_a2030(c);
  /* 118ed0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 118ed4: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 118ed8: nop  */
  /* nop: no architectural effect here */
  /* 118edc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118ee0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150692));
  fn1_142518(c);
  /* 118ee4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 118ee8: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 118eec: nop  */
  /* nop: no architectural effect here */
  /* 118ef0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118ef4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150712));
  fn1_142560(c);
  /* 118ef8: nop  */
  /* nop: no architectural effect here */
  /* 118efc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 118f00: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150724));
  fn1_142578(c);
L_118f04:;
  /* 118f04: ldr x22, [sp] */
  ARC_X_W(c, 22, arc_ld64((c)->sp));
L_118f08:;
  /* 118f08: ldp x8, x10, [x28, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 118f0c: ldrsw x9, [x21, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 21) + INT64_C(8)))));
  /* 118f10: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 118f14: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 118f18: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 118f1c: b.hs #0x119074 */
  if (ARC_COND(c, 2)) goto L_119074;
  /* 118f20: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 118f24: cbz x23, #0x119074 */
  if ((ARC_X_R(c, 23)) == 0) goto L_119074;
  /* 118f28: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 118f2c: tbz w25, #0, #0x118f4c */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_118f4c;
  /* 118f30: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 118f34: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118f38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150780));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 118f3c: str w0, [x24] */
  arc_st32(ARC_X_R(c, 24), ARC_W_R(c, 0));
  /* 118f40: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 118f44: ldr x9, [x8, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 118f48: b #0x118f64 */
  goto L_118f64;
L_118f4c:;
  /* 118f4c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 118f50: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118f54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150808));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 118f58: str w0, [x24] */
  arc_st32(ARC_X_R(c, 24), ARC_W_R(c, 0));
  /* 118f5c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 118f60: ldr x9, [x8, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
L_118f64:;
  /* 118f64: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 118f68: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118f6c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150832));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 118f70: ldrb w8, [x27] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 27)));
  /* 118f74: tbz w8, #0, #0x118f88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118f88;
  /* 118f78: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 118f7c: ldr x0, [x27, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* 118f80: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 118f84: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150856));
  fn1_142608(c);
L_118f88:;
  /* 118f88: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 118f8c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 118f90: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118f94: str q0, [x27] */
  arc_st64(ARC_X_R(c, 27), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 27) + 8, (c)->q[0].u64[1]);
  /* 118f98: str x8, [x27, #0x10] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(16)), ARC_X_R(c, 8));
  /* 118f9c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 118fa0: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 118fa4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150888));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 118fa8: strb w0, [x22] */
  arc_st8(ARC_X_R(c, 22), ARC_W_R(c, 0));
  /* 118fac: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118fb0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 118fb4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 118fb8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150908));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 118fbc: strb w0, [x26] */
  arc_st8(ARC_X_R(c, 26), ARC_W_R(c, 0));
  /* 118fc0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118fc4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 118fc8: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 118fcc: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 118fd0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150932));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 118fd4: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 118fd8: tbz w8, #0, #0x118fec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118fec;
  /* 118fdc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 118fe0: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 118fe4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 118fe8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150956));
  fn1_142608(c);
L_118fec:;
  /* 118fec: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 118ff0: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 118ff4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 118ff8: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 118ffc: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* 119000: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 119004: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 119008: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 11900c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1150992));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 119010: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 119014: tbz w8, #0, #0x119028 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119028;
  /* 119018: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11901c: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 119020: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 119024: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1151016));
  fn1_142608(c);
L_119028:;
  /* 119028: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 11902c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 119030: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 119034: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 119038: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11903c: ldr x19, [x29, #0x68] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(104))));
  /* 119040: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 119044: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 119048: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1151052));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11904c: str w0, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 0));
  /* 119050: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 119054: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 119058: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11905c: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 119060: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 119064: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 119068: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 11906c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 119070: ret  */
  return;
L_119074:;
  /* 119074: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1151096));
  fn1_fc3b8(c);
  /* 119078: b #0x11907c */
  goto L_11907c;
L_11907c:;
  /* 11907c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 119080: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 119084: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1151112));
  fn1_d2a78(c);
  /* 119088: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11908c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1151120));
  fn1_9cc20(c);
}

void fn1_124958(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039126360));
  /* 124958: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12495c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 124960: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 124964: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 124968: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12496c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 124970: nop  */
  /* nop: no architectural effect here */
  /* 124974: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 124978: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 12497c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124980: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 124984: b.eq #0x124994 */
  if (ARC_COND(c, 0)) goto L_124994;
  /* 124988: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 12498c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124990: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198484));
  fn1_db2e0(c);
L_124994:;
  /* 124994: ldr x21, [x20] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 20)));
  /* 124998: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* 12499c: b.eq #0x1249c0 */
  if (ARC_COND(c, 0)) goto L_1249c0;
  /* 1249a0: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 1249a4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1249a8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198508));
  fn1_bd950(c);
  /* 1249ac: cbnz x0, #0x1249c0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1249c0;
  /* 1249b0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1249b4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1249b8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1249bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198528));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1249c0:;
  /* 1249c0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1249c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1249c8: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1249cc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1249d0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1249d4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1249d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1249dc: ret  */
  return;
}

void fn1_1276c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039137988));
  /* 1276c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1276c8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1276cc: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1276d0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1276d4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1276d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1276dc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1276e0: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 1276e4: b.eq #0x127840 */
  if (ARC_COND(c, 0)) goto L_127840;
  /* 1276e8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1276ec: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1276f0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1276f4: nop  */
  /* nop: no architectural effect here */
  /* 1276f8: adr x24, #0x75c10 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(482320)));
  /* 1276fc: b #0x127718 */
  goto L_127718;
L_127700:;
  /* 127700: ldr x8, [x24, x23, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 23)) << 3))));
L_127704:;
  /* 127704: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_127708:;
  /* 127708: add x19, x19, #4 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 12770c: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 127710: cmp x19, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 21));
  /* 127714: b.eq #0x127840 */
  if (ARC_COND(c, 0)) goto L_127840;
L_127718:;
  /* 127718: ldr w23, [x19] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 19)));
  /* 12771c: cmp w23, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(127));
  /* 127720: b.ls #0x127700 */
  if (ARC_COND(c, 9)) goto L_127700;
  /* 127724: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127728: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 12772c: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 127730: bl #0x1442a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210164));
  fn1_1442a0(c);
  /* 127734: cbz w0, #0x127744 */
  if ((ARC_W_R(c, 0)) == 0) goto L_127744;
  /* 127738: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12773c: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 127740: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_127744:;
  /* 127744: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127748: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 12774c: bl #0x1442b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210192));
  fn1_1442b8(c);
  /* 127750: cbz w0, #0x127760 */
  if ((ARC_W_R(c, 0)) == 0) goto L_127760;
  /* 127754: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 127758: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 12775c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_127760:;
  /* 127760: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127764: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127768: bl #0x1442d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210220));
  fn1_1442d0(c);
  /* 12776c: cbz w0, #0x12777c */
  if ((ARC_W_R(c, 0)) == 0) goto L_12777c;
  /* 127770: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 127774: orr x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(4)));
  /* 127778: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_12777c:;
  /* 12777c: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127780: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127784: bl #0x1442e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210248));
  fn1_1442e8(c);
  /* 127788: cbz w0, #0x127798 */
  if ((ARC_W_R(c, 0)) == 0) goto L_127798;
  /* 12778c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 127790: orr x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(8)));
  /* 127794: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_127798:;
  /* 127798: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 12779c: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1277a0: bl #0x144288 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210276));
  fn1_144288(c);
  /* 1277a4: cbz w0, #0x1277b4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1277b4;
  /* 1277a8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1277ac: orr x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(16)));
  /* 1277b0: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_1277b4:;
  /* 1277b4: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1277b8: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1277bc: bl #0x144300 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210304));
  fn1_144300(c);
  /* 1277c0: cbz w0, #0x1277d0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1277d0;
  /* 1277c4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1277c8: orr x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(32)));
  /* 1277cc: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_1277d0:;
  /* 1277d0: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1277d4: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1277d8: bl #0x144318 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210332));
  fn1_144318(c);
  /* 1277dc: cbz w0, #0x1277ec */
  if ((ARC_W_R(c, 0)) == 0) goto L_1277ec;
  /* 1277e0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1277e4: orr x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(64)));
  /* 1277e8: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_1277ec:;
  /* 1277ec: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1277f0: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1277f4: bl #0x144330 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210360));
  fn1_144330(c);
  /* 1277f8: cbz w0, #0x127808 */
  if ((ARC_W_R(c, 0)) == 0) goto L_127808;
  /* 1277fc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 127800: orr x8, x8, #0x80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(128)));
  /* 127804: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_127808:;
  /* 127808: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 12780c: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127810: bl #0x144348 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210388));
  fn1_144348(c);
  /* 127814: cbz w0, #0x127824 */
  if ((ARC_W_R(c, 0)) == 0) goto L_127824;
  /* 127818: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12781c: orr x8, x8, #0x100 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(256)));
  /* 127820: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_127824:;
  /* 127824: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127828: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 12782c: bl #0x144360 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210416));
  fn1_144360(c);
  /* 127830: cbz w0, #0x127708 */
  if ((ARC_W_R(c, 0)) == 0) goto L_127708;
  /* 127834: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 127838: orr x8, x8, #0x200 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(512)));
  /* 12783c: b #0x127704 */
  goto L_127704;
L_127840:;
  /* 127840: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127844: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127848: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12784c: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 127850: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127854: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127858: ret  */
  return;
}

void fn1_129ba8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147432));
  /* 129ba8: bti c */
  /* bti: no architectural effect here */
  /* 129bac: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129bb0: ret  */
  return;
}

void fn1_12b1d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039153112));
  /* 12b1d8: bti c */
  /* bti: no architectural effect here */
  /* 12b1dc: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12b1e0: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12b1e4: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12b1e8: b.lt #0x12b218 */
  if (ARC_COND(c, 11)) goto L_12b218;
  /* 12b1ec: ldr w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b1f0: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12b1f4: tbz w9, #2, #0x12b218 */
  if (((ARC_W_R(c, 9)) >> 2 & 1) == 0) goto L_12b218;
  /* 12b1f8: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12b1fc: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12b200: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12b204: b.ne #0x12b218 */
  if (ARC_COND(c, 1)) goto L_12b218;
  /* 12b208: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12b20c: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12b210: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12b214: add x8, x2, w8, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12b218:;
  /* 12b218: cbz x4, #0x12b2c4 */
  if ((ARC_X_R(c, 4)) == 0) goto L_12b2c4;
  /* 12b21c: sub x9, x3, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12b220: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12b224: b.hs #0x12b2c4 */
  if (ARC_COND(c, 2)) goto L_12b2c4;
  /* 12b228: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12b22c: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* 12b230: mov w12, #0xd800 */
  ARC_W_W(c, 12, UINT64_C(55296));
  /* 12b234: mov w13, #0xdc00 */
  ARC_W_W(c, 13, UINT64_C(56320));
L_12b238:;
  /* 12b238: ldrb w16, [x8, #1] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 12b23c: ldrb w14, [x8] */
  ARC_W_W(c, 14, arc_ld8(ARC_X_R(c, 8)));
  /* 12b240: lsl w15, w16, #8 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 16)) << ((UINT64_C(8)) & 31)));
  /* 12b244: bfi w14, w16, #8, #8 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294902015)) | ((((uint32_t)(ARC_W_R(c, 16))) & UINT64_C(255)) << 8)));
  /* 12b248: and w15, w15, #0xfc00 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) & UINT64_C(64512)));
  /* 12b24c: cmp w15, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 12));
  /* 12b250: b.eq #0x12b278 */
  if (ARC_COND(c, 0)) goto L_12b278;
  /* 12b254: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* 12b258: b.eq #0x12b2c4 */
  if (ARC_COND(c, 0)) goto L_12b2c4;
  /* 12b25c: cmp x10, w14, uxtw */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(uint32_t)(ARC_W_R(c, 14))));
  /* 12b260: cset w14, hs */
  ARC_W_W(c, 14, (ARC_COND(c, 2) ? 1 : 0));
  /* 12b264: add x8, x8, w14, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 14)))) << 1)));
  /* 12b268: b.lo #0x12b2c4 */
  if (ARC_COND(c, 3)) goto L_12b2c4;
  /* 12b26c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12b270: b.lo #0x12b2b8 */
  if (ARC_COND(c, 3)) goto L_12b2b8;
  /* 12b274: b #0x12b2c4 */
  goto L_12b2c4;
L_12b278:;
  /* 12b278: sub x15, x3, x8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 3) - ARC_X_R(c, 8)));
  /* 12b27c: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* 12b280: b.lt #0x12b2c4 */
  if (ARC_COND(c, 11)) goto L_12b2c4;
  /* 12b284: ldrb w15, [x8, #3] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 8) + INT64_C(3))));
  /* 12b288: and w16, w15, #0xfc */
  ARC_W_W(c, 16, (ARC_W_R(c, 15) & UINT64_C(252)));
  /* 12b28c: cmp w16, #0xdc */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(220));
  /* 12b290: b.ne #0x12b2c4 */
  if (ARC_COND(c, 1)) goto L_12b2c4;
  /* 12b294: ldrb w16, [x8, #2] */
  ARC_W_W(c, 16, arc_ld8((ARC_X_R(c, 8) + INT64_C(2))));
  /* 12b298: bfi w16, w15, #8, #2 */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 16)) & UINT64_C(4294966527)) | ((((uint32_t)(ARC_W_R(c, 15))) & UINT64_C(3)) << 8)));
  /* 12b29c: bfi w16, w14, #0xa, #0xa */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 16)) & UINT64_C(4293919743)) | ((((uint32_t)(ARC_W_R(c, 14))) & UINT64_C(1023)) << 10)));
  /* 12b2a0: add w14, w16, #0x10, lsl #12 */
  ARC_W_W(c, 14, (ARC_W_R(c, 16) + UINT64_C(65536)));
  /* 12b2a4: cmp x10, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 14));
  /* 12b2a8: b.lo #0x12b2c4 */
  if (ARC_COND(c, 3)) goto L_12b2c4;
  /* 12b2ac: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 12b2b0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12b2b4: b.hs #0x12b2c4 */
  if (ARC_COND(c, 2)) goto L_12b2c4;
L_12b2b8:;
  /* 12b2b8: cmp x11, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 4));
  /* 12b2bc: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 12b2c0: b.lo #0x12b238 */
  if (ARC_COND(c, 3)) goto L_12b238;
L_12b2c4:;
  /* 12b2c4: sub w0, w8, w2 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 2)));
  /* 12b2c8: ret  */
  return;
}

void fn1_12d6e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039162596));
  /* 12d6e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12d6e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12d6ec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12d6f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12d6f4: nop  */
  /* nop: no architectural effect here */
  /* 12d6f8: adr x8, #0x15de78 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433208)));
  /* 12d6fc: adrp x19, #0x15d000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12d700: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12d704: tbz w8, #0, #0x12d71c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12d71c;
L_12d708:;
  /* 12d708: ldr x0, [x19, #0xe70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(3696))));
  /* 12d70c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12d710: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12d714: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12d718: ret  */
  return;
L_12d71c:;
  /* 12d71c: nop  */
  /* nop: no architectural effect here */
  /* 12d720: adr x0, #0x15de78 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433208)));
  /* 12d724: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234728));
  fn1_1424b8(c);
  /* 12d728: cbz w0, #0x12d708 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12d708;
  /* 12d72c: bl #0x12d764 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234736));
  fn1_12d764(c);
  /* 12d730: nop  */
  /* nop: no architectural effect here */
  /* 12d734: adr x8, #0x15e438 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1434680)));
  /* 12d738: nop  */
  /* nop: no architectural effect here */
  /* 12d73c: adr x0, #0x15de78 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433208)));
  /* 12d740: str x8, [x19, #0xe70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(3696)), ARC_X_R(c, 8));
  /* 12d744: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234760));
  fn1_1424d0(c);
  /* 12d748: b #0x12d708 */
  goto L_12d708;
  /* 12d74c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12d750: nop  */
  /* nop: no architectural effect here */
  /* 12d754: adr x0, #0x15de78 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433208)));
  /* 12d758: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234780));
  fn1_1424e8(c);
  /* 12d75c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12d760: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234788));
  fn1_9cc20(c);
}

void fn1_134a30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192112));
  /* 134a30: bti c */
  /* bti: no architectural effect here */
  /* 134a34: add x0, x0, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* 134a38: ret  */
  return;
}

void fn1_1354a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039194792));
  /* 1354a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1354ac: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1354b0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1354b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1354b8: adrp x19, #0x15e000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 1354bc: add x19, x19, #0x1d0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(464)));
  /* 1354c0: mov x20, #-0x150 */
  ARC_X_W(c, 20, UINT64_C(18446744073709551280));
  /* 1354c4: b #0x1354d4 */
  goto L_1354d4;
L_1354c8:;
  /* 1354c8: adds x20, x20, #0x18 */
  ARC_X_W(c, 20, arc_add64(c, ARC_X_R(c, 20), UINT64_C(24), 0));
  /* 1354cc: sub x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* 1354d0: b.eq #0x1354f4 */
  if (ARC_COND(c, 0)) goto L_1354f4;
L_1354d4:;
  /* 1354d4: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 1354d8: tbz w8, #0, #0x1354c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1354c8;
  /* 1354dc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1354e0: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1354e4: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1354e8: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 1354ec: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266928));
  fn1_142608(c);
  /* 1354f0: b #0x1354c8 */
  goto L_1354c8;
L_1354f4:;
  /* 1354f4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1354f8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1354fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135500: ret  */
  return;
}

void fn1_1383b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206840));
  /* 1383b8: bti c */
  /* bti: no architectural effect here */
  /* 1383bc: ldr x9, [x1] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 1)));
  /* 1383c0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 1383c4: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 1383c8: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 1383cc: ldr x10, [x1, #0x40] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(64))));
  /* 1383d0: str x10, [x0, x9] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 9)), ARC_X_R(c, 10));
  /* 1383d4: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 1383d8: ldr x9, [x1, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(72))));
  /* 1383dc: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 1383e0: b #0x144558 */
  fn1_144558(c); return;
}

void fn1_13cc8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039225484));
  /* 13cc8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13cc90: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13cc94: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13cc98: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 13cc9c: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13cca0: add x8, x8, #0xa54 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2644)));
  /* 13cca4: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13cca8: stp x8, x2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 13ccac: cbz x2, #0x13ccd0 */
  if ((ARC_X_R(c, 2)) == 0) goto L_13ccd0;
  /* 13ccb0: str wzr, [x2] */
  arc_st32(ARC_X_R(c, 2), ARC_W_R(c, 31));
  /* 13ccb4: nop  */
  /* nop: no architectural effect here */
  /* 13ccb8: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ccbc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ccc0: tbz w8, #0, #0x13cd3c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13cd3c;
L_13ccc4:;
  /* 13ccc4: nop  */
  /* nop: no architectural effect here */
  /* 13ccc8: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13cccc: str x8, [x2, #8] */
  arc_st64((ARC_X_R(c, 2) + INT64_C(8)), ARC_X_R(c, 8));
L_13ccd0:;
  /* 13ccd0: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 13ccd4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13ccd8: ldrb w10, [x1] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 1)));
  /* 13ccdc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13cce0: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 13cce4: csinc x0, x9, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 13cce8: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 13ccec: csinc x1, x8, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 1)) + 1)));
  /* 13ccf0: bl #0x1447b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297652));
  fn1_1447b0(c);
  /* 13ccf4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13ccf8: b.ne #0x13cd2c */
  if (ARC_COND(c, 1)) goto L_13cd2c;
  /* 13ccfc: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297664));
  fn1_142a58(c);
  /* 13cd00: nop  */
  /* nop: no architectural effect here */
  /* 13cd04: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cd08: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13cd0c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13cd10: tbz w9, #0, #0x13cd7c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13cd7c;
L_13cd14:;
  /* 13cd14: nop  */
  /* nop: no architectural effect here */
  /* 13cd18: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13cd1c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13cd20: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13cd24: stp x8, x9, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13cd28: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297708));
  fn1_139ad0(c);
L_13cd2c:;
  /* 13cd2c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13cd30: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13cd34: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13cd38: ret  */
  return;
L_13cd3c:;
  /* 13cd3c: nop  */
  /* nop: no architectural effect here */
  /* 13cd40: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13cd44: stp x1, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13cd48: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13cd4c: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 13cd50: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297748));
  fn1_1424b8(c);
  /* 13cd54: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13cd58: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13cd5c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cd60: cbz w8, #0x13ccc4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13ccc4;
  /* 13cd64: nop  */
  /* nop: no architectural effect here */
  /* 13cd68: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13cd6c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297776));
  fn1_1424d0(c);
  /* 13cd70: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13cd74: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cd78: b #0x13ccc4 */
  goto L_13ccc4;
L_13cd7c:;
  /* 13cd7c: nop  */
  /* nop: no architectural effect here */
  /* 13cd80: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cd84: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 13cd88: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297804));
  fn1_1424b8(c);
  /* 13cd8c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cd90: cbz w0, #0x13cd14 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13cd14;
  /* 13cd94: nop  */
  /* nop: no architectural effect here */
  /* 13cd98: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cd9c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297824));
  fn1_1424d0(c);
  /* 13cda0: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cda4: b #0x13cd14 */
  goto L_13cd14;
}

void fn1_142578(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248248));
  /* 142578: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14257c: ldr x17, [x16, #0xf08] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3848))));
  /* 142580: add x16, x16, #0xf08 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3848)));
  /* 142584: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142588: nop  */
  /* nop: no architectural effect here */
  /* 14258c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142b78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249784));
  /* 142b78: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142b7c: ldr x17, [x16, #0x108] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(264))));
  /* 142b80: add x16, x16, #0x108 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(264)));
  /* 142b84: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142b88: nop  */
  /* nop: no architectural effect here */
  /* 142b8c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143178(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251320));
  /* 143178: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14317c: ldr x17, [x16, #0x308] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(776))));
  /* 143180: add x16, x16, #0x308 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(776)));
  /* 143184: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143188: nop  */
  /* nop: no architectural effect here */
  /* 14318c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143778(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252856));
  /* 143778: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14377c: ldr x17, [x16, #0x508] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1288))));
  /* 143780: add x16, x16, #0x508 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1288)));
  /* 143784: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143788: nop  */
  /* nop: no architectural effect here */
  /* 14378c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143d78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254392));
  /* 143d78: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143d7c: ldr x17, [x16, #0x708] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1800))));
  /* 143d80: add x16, x16, #0x708 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1800)));
  /* 143d84: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143d88: nop  */
  /* nop: no architectural effect here */
  /* 143d8c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144378(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255928));
  /* 144378: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14437c: ldr x17, [x16, #0x908] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2312))));
  /* 144380: add x16, x16, #0x908 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2312)));
  /* 144384: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144388: nop  */
  /* nop: no architectural effect here */
  /* 14438c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144978(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257464));
  /* 144978: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14497c: ldr x17, [x16, #0xb08] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2824))));
  /* 144980: add x16, x16, #0xb08 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2824)));
  /* 144984: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144988: nop  */
  /* nop: no architectural effect here */
  /* 14498c: nop  */
  /* nop: no architectural effect here */
}

