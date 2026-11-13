#include "lifted.h"

void fn1_9d5cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038572492));
  /* 9d5cc: bti c */
  /* bti: no architectural effect here */
  /* 9d5d0: cmn w1, #3 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(3), 0);
  /* 9d5d4: b.ls #0x9d5e0 */
  if (ARC_COND(c, 9)) goto L_9d5e0;
  /* 9d5d8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 9d5dc: ret  */
  return;
L_9d5e0:;
  /* 9d5e0: cmp w1, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(95));
  /* 9d5e4: b.ls #0x9d5f0 */
  if (ARC_COND(c, 9)) goto L_9d5f0;
  /* 9d5e8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 9d5ec: ret  */
  return;
L_9d5f0:;
  /* 9d5f0: cmp w1, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(34));
  /* 9d5f4: b.ne #0x9d600 */
  if (ARC_COND(c, 1)) goto L_9d600;
  /* 9d5f8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 9d5fc: ret  */
  return;
L_9d600:;
  /* 9d600: sub w8, w1, #0x40 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) - UINT64_C(64)));
  /* 9d604: cmn w8, #0x1f */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(31), 0);
  /* 9d608: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* 9d60c: ret  */
  return;
}

void fn1_a1b9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038590364));
  /* a1b9c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1ba0: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* a1ba4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1ba8: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* a1bac: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1bb0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a1bb4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* a1bb8: cbz x0, #0xa1c40 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a1c40;
  /* a1bbc: sub x19, x0, x2 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) - ARC_X_R(c, 2)));
  /* a1bc0: cbz x2, #0xa1c38 */
  if ((ARC_X_R(c, 2)) == 0) goto L_a1c38;
  /* a1bc4: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* a1bc8: cbz x3, #0xa1c38 */
  if ((ARC_X_R(c, 3)) == 0) goto L_a1c38;
  /* a1bcc: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a1bd0: ldur x21, [x0, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(-8))));
  /* a1bd4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a1bd8: stp x0, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a1bdc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a1be0: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* a1be4: strb w8, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 8));
  /* a1be8: nop  */
  /* nop: no architectural effect here */
  /* a1bec: adr x8, #0x156bb8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1403832)));
  /* a1bf0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a1bf4: str x21, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 21));
  /* a1bf8: stp x1, x20, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* a1bfc: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662528));
  fn1_144ac8(c);
  /* a1c00: sub x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* a1c04: madd x9, x23, x8, x22 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 22)) + ((uint64_t)(ARC_X_R(c, 23)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* a1c08: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a1c0c: neg x22, x23 */
  ARC_X_W(c, 22, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 23))));
  /* a1c10: ldr w21, [x8, #8] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* a1c14: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
L_a1c18:;
  /* a1c18: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* a1c1c: sub x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* a1c20: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* a1c24: cbz x8, #0xa1c38 */
  if ((ARC_X_R(c, 8)) == 0) goto L_a1c38;
  /* a1c28: add x23, x0, x22 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* a1c2c: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662576));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* a1c30: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a1c34: b #0xa1c18 */
  goto L_a1c18;
L_a1c38:;
  /* a1c38: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1c3c: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662592));
  fn1_1425a8(c);
L_a1c40:;
  /* a1c40: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1c44: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* a1c48: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1c4c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1c50: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* a1c54: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1c58: ret  */
  return;
  /* a1c5c: cbnz w21, #0xa1c7c */
  if ((ARC_W_R(c, 21)) != 0) goto L_a1c7c;
  /* a1c60: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a1c64: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a1c68: bl #0xa1a0c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662636));
  fn1_a1a0c(c);
  /* a1c6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1c70: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662644));
  fn1_1425a8(c);
  /* a1c74: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a1c78: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662652));
  fn1_9cc20(c);
L_a1c7c:;
  /* a1c7c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(662656));
  fn1_142488(c);
}

void fn1_a2bc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038594504));
  /* a2bc8: bti c */
  /* bti: no architectural effect here */
  /* a2bcc: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* a2bd0: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a2bd4: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a2bd8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a2bdc: b.eq #0xa2bf0 */
  if (ARC_COND(c, 0)) goto L_a2bf0;
  /* a2be0: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* a2be4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* a2be8: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* a2bec: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_a2bf0:;
  /* a2bf0: ldr w8, [x1, #0x3c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(60))));
  /* a2bf4: cbz w8, #0xa2c30 */
  if ((ARC_W_R(c, 8)) == 0) goto L_a2c30;
  /* a2bf8: ldr x9, [x1, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(40))));
  /* a2bfc: ldr x10, [x1, #0x50] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(80))));
  /* a2c00: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a2c04: b.ne #0xa2c14 */
  if (ARC_COND(c, 1)) goto L_a2c14;
  /* a2c08: ldr x9, [x1, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(32))));
  /* a2c0c: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* a2c10: b.eq #0xa2c48 */
  if (ARC_COND(c, 0)) goto L_a2c48;
L_a2c14:;
  /* a2c14: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* a2c18: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* a2c1c: str w8, [x1, #0x3c] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(60)), ARC_W_R(c, 8));
  /* a2c20: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a2c24: str w9, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 9));
  /* a2c28: strb w8, [x1, #0x4e] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(78)), ARC_W_R(c, 8));
L_a2c2c:;
  /* a2c2c: ret  */
  return;
L_a2c30:;
  /* a2c30: ldr x8, [x1, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(80))));
  /* a2c34: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* a2c38: str w3, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 3));
  /* a2c3c: str w9, [x1, #0x3c] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(60)), ARC_W_R(c, 9));
  /* a2c40: stp x2, x8, [x1, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a2c44: ret  */
  return;
L_a2c48:;
  /* a2c48: ldr w8, [x1, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(48))));
  /* a2c4c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a2c50: b.ne #0xa2c2c */
  if (ARC_COND(c, 1)) goto L_a2c2c;
  /* a2c54: str w3, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 3));
  /* a2c58: ret  */
  return;
}

void fn1_a99c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038622656));
  /* a99c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a99c4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a99c8: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* a99cc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a99d0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a99d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a99d8: ldp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a99dc: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* a99e0: b.eq #0xa9b08 */
  if (ARC_COND(c, 0)) goto L_a9b08;
  /* a99e4: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* a99e8: cmp w9, #0x53 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(83));
  /* a99ec: b.ne #0xa9b08 */
  if (ARC_COND(c, 1)) goto L_a9b08;
  /* a99f0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a99f4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a99f8: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* a99fc: b.eq #0xa9b08 */
  if (ARC_COND(c, 0)) goto L_a9b08;
  /* a9a00: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* a9a04: cmp w11, #0x61 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(97));
  /* a9a08: b.lo #0xa9a40 */
  if (ARC_COND(c, 3)) goto L_a9a40;
  /* a9a0c: cmp w11, #0x7a */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(122));
  /* a9a10: b.hi #0xa9a6c */
  if (ARC_COND(c, 8)) goto L_a9a6c;
  /* a9a14: cmp w11, #0x68 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(104));
  /* a9a18: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* a9a1c: b.gt #0xa9b28 */
  if (ARC_COND(c, 12)) goto L_a9b28;
  /* a9a20: cmp w11, #0x61 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(97));
  /* a9a24: b.eq #0xa9b48 */
  if (ARC_COND(c, 0)) goto L_a9b48;
  /* a9a28: cmp w11, #0x62 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(98));
  /* a9a2c: b.eq #0xa9b58 */
  if (ARC_COND(c, 0)) goto L_a9b58;
  /* a9a30: cmp w11, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(100));
  /* a9a34: b.ne #0xa9b0c */
  if (ARC_COND(c, 1)) goto L_a9b0c;
  /* a9a38: mov w19, #5 */
  ARC_W_W(c, 19, UINT64_C(5));
  /* a9a3c: b #0xa9b64 */
  goto L_a9b64;
L_a9a40:;
  /* a9a40: cmp w11, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(95));
  /* a9a44: b.ne #0xa9a64 */
  if (ARC_COND(c, 1)) goto L_a9a64;
  /* a9a48: ldp x9, x10, [x0, #0x128] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(296));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a9a4c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a9a50: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a9a54: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a9a58: b.eq #0xa9b08 */
  if (ARC_COND(c, 0)) goto L_a9b08;
  /* a9a5c: ldr x19, [x9] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 9)));
  /* a9a60: b #0xa9b0c */
  goto L_a9b0c;
L_a9a64:;
  /* a9a64: cmp w11, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(48));
  /* a9a68: b.lo #0xa9b08 */
  if (ARC_COND(c, 3)) goto L_a9b08;
L_a9a6c:;
  /* a9a6c: cmp w11, #0x3a */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(58));
  /* a9a70: b.lo #0xa9a80 */
  if (ARC_COND(c, 3)) goto L_a9a80;
  /* a9a74: sub w8, w11, #0x41 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) - UINT64_C(65)));
  /* a9a78: cmp w8, #0x19 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(25));
  /* a9a7c: b.hi #0xa9b08 */
  if (ARC_COND(c, 8)) goto L_a9b08;
L_a9a80:;
  /* a9a80: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a9a84: mov w11, #0x24 */
  ARC_W_W(c, 11, UINT64_C(36));
  /* a9a88: b #0xa9aa8 */
  goto L_a9aa8;
L_a9a8c:;
  /* a9a8c: mov x13, #-0x30 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551568));
L_a9a90:;
  /* a9a90: madd x8, x8, x11, x12 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 12)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* a9a94: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* a9a98: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a9a9c: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* a9aa0: add x8, x8, x13 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 13)));
  /* a9aa4: b.eq #0xa9ad0 */
  if (ARC_COND(c, 0)) goto L_a9ad0;
L_a9aa8:;
  /* a9aa8: ldrb w12, [x9] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 9)));
  /* a9aac: cmp w12, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(48));
  /* a9ab0: b.lo #0xa9ad0 */
  if (ARC_COND(c, 3)) goto L_a9ad0;
  /* a9ab4: cmp w12, #0x3a */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(58));
  /* a9ab8: b.lo #0xa9a8c */
  if (ARC_COND(c, 3)) goto L_a9a8c;
  /* a9abc: sub w13, w12, #0x41 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) - UINT64_C(65)));
  /* a9ac0: cmp w13, #0x19 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(25));
  /* a9ac4: b.hi #0xa9ad0 */
  if (ARC_COND(c, 8)) goto L_a9ad0;
  /* a9ac8: mov x13, #-0x37 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551561));
  /* a9acc: b #0xa9a90 */
  goto L_a9a90;
L_a9ad0:;
  /* a9ad0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a9ad4: b.eq #0xa9b08 */
  if (ARC_COND(c, 0)) goto L_a9b08;
  /* a9ad8: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* a9adc: cmp w10, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(95));
  /* a9ae0: b.ne #0xa9b08 */
  if (ARC_COND(c, 1)) goto L_a9b08;
  /* a9ae4: ldp x10, x11, [x0, #0x128] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(296));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* a9ae8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a9aec: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* a9af0: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* a9af4: sub x11, x11, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 10)));
  /* a9af8: cmp x8, x11, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 3)));
  /* a9afc: b.hs #0xa9b08 */
  if (ARC_COND(c, 2)) goto L_a9b08;
  /* a9b00: ldr x19, [x10, x8, lsl #3] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* a9b04: b #0xa9b0c */
  goto L_a9b0c;
L_a9b08:;
  /* a9b08: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_a9b0c:;
  /* a9b0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a9b10: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a9b14: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* a9b18: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a9b1c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a9b20: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a9b24: ret  */
  return;
L_a9b28:;
  /* a9b28: cmp w11, #0x69 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(105));
  /* a9b2c: b.eq #0xa9b50 */
  if (ARC_COND(c, 0)) goto L_a9b50;
  /* a9b30: cmp w11, #0x6f */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(111));
  /* a9b34: b.eq #0xa9b60 */
  if (ARC_COND(c, 0)) goto L_a9b60;
  /* a9b38: cmp w11, #0x73 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(115));
  /* a9b3c: b.ne #0xa9b0c */
  if (ARC_COND(c, 1)) goto L_a9b0c;
  /* a9b40: mov w19, #2 */
  ARC_W_W(c, 19, UINT64_C(2));
  /* a9b44: b #0xa9b64 */
  goto L_a9b64;
L_a9b48:;
  /* a9b48: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* a9b4c: b #0xa9b64 */
  goto L_a9b64;
L_a9b50:;
  /* a9b50: mov w19, #3 */
  ARC_W_W(c, 19, UINT64_C(3));
  /* a9b54: b #0xa9b64 */
  goto L_a9b64;
L_a9b58:;
  /* a9b58: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* a9b5c: b #0xa9b64 */
  goto L_a9b64;
L_a9b60:;
  /* a9b60: mov w19, #4 */
  ARC_W_W(c, 19, UINT64_C(4));
L_a9b64:;
  /* a9b64: ldr x20, [x0, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a9b68: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a9b6c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a9b70: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a9b74: sub x10, x9, #0xfe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - UINT64_C(4064)));
  /* a9b78: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* a9b7c: b.hi #0xa9ba8 */
  if (ARC_COND(c, 8)) goto L_a9ba8;
  /* a9b80: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a9b84: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a9b88: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695180));
  fn1_1428a8(c);
  /* a9b8c: cbz x0, #0xa9c8c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9c8c;
  /* a9b90: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a9b94: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* a9b98: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a9b9c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a9ba0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a9ba4: str x8, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 8));
L_a9ba8:;
  /* a9ba8: add x8, x9, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* a9bac: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* a9bb0: mov w9, #0x30 */
  ARC_W_W(c, 9, UINT64_C(48));
  /* a9bb4: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* a9bb8: add x20, x8, x20 */
  ARC_X_W(c, 20, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* a9bbc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a9bc0: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* a9bc4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a9bc8: strb w9, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 9));
  /* a9bcc: str w19, [x20, #0xc] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(12)), ARC_W_R(c, 19));
  /* a9bd0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a9bd4: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* a9bd8: sturh w8, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 8));
  /* a9bdc: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* a9be0: add x8, x8, #0x7e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2024)));
  /* a9be4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a9be8: bl #0xb6ef4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695276));
  fn1_b6ef4(c);
  /* a9bec: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* a9bf0: b.eq #0xa9c38 */
  if (ARC_COND(c, 0)) goto L_a9c38;
  /* a9bf4: ldp x22, x9, [x23, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(304));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a9bf8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a9bfc: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* a9c00: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* a9c04: b.ne #0xa9c80 */
  if (ARC_COND(c, 1)) goto L_a9c80;
  /* a9c08: ldr x21, [x8, #0x128] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(296))));
  /* a9c0c: add x8, x8, #0x140 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(320)));
  /* a9c10: sub x20, x22, x21 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* a9c14: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a9c18: lsl x1, x20, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(1)) & 63)));
  /* a9c1c: b.eq #0xa9c40 */
  if (ARC_COND(c, 0)) goto L_a9c40;
  /* a9c20: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a9c24: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695336));
  fn1_142878(c);
  /* a9c28: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* a9c2c: str x0, [x23, #0x128] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(296)), ARC_X_R(c, 0));
  /* a9c30: cbnz x0, #0xa9c70 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a9c70;
  /* a9c34: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695352));
  fn1_1427b8(c);
L_a9c38:;
  /* a9c38: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* a9c3c: b #0xa9b0c */
  goto L_a9b0c;
L_a9c40:;
  /* a9c40: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a9c44: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695368));
  fn1_1428a8(c);
  /* a9c48: cbz x0, #0xa9c90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9c90;
  /* a9c4c: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* a9c50: b.eq #0xa9c68 */
  if (ARC_COND(c, 0)) goto L_a9c68;
  /* a9c54: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a9c58: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* a9c5c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a9c60: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695396));
  fn1_1449f0(c);
  /* a9c64: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_a9c68:;
  /* a9c68: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* a9c6c: str x0, [x23, #0x128] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(296)), ARC_X_R(c, 0));
L_a9c70:;
  /* a9c70: asr x9, x20, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(2)) & 63))));
  /* a9c74: add x22, x0, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 20)));
  /* a9c78: add x9, x0, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* a9c7c: str x9, [x8, #0x138] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(312)), ARC_X_R(c, 9));
L_a9c80:;
  /* a9c80: str x19, [x22], #8 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* a9c84: str x22, [x8, #0x130] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(304)), ARC_X_R(c, 22));
  /* a9c88: b #0xa9b0c */
  goto L_a9b0c;
L_a9c8c:;
  /* a9c8c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695440));
  fn1_142488(c);
L_a9c90:;
  /* a9c90: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(695444));
  fn1_1427b8(c);
}

void fn1_b0c28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038651944));
  /* b0c28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b0c2c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0c30: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b0c34: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b0c38: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b0c3c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0c40: ldp x19, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 19, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b0c44: cmp x19, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* b0c48: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* b0c4c: b.eq #0xb0c68 */
  if (ARC_COND(c, 0)) goto L_b0c68;
  /* b0c50: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* b0c54: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* b0c58: cmp w8, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(110));
  /* b0c5c: b.ne #0xb0c68 */
  if (ARC_COND(c, 1)) goto L_b0c68;
  /* b0c60: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* b0c64: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
L_b0c68:;
  /* b0c68: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b0c6c: b.eq #0xb0c80 */
  if (ARC_COND(c, 0)) goto L_b0c80;
  /* b0c70: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* b0c74: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* b0c78: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* b0c7c: b.hs #0xb0ca0 */
  if (ARC_COND(c, 2)) goto L_b0ca0;
L_b0c80:;
  /* b0c80: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_b0c84:;
  /* b0c84: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b0c88: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b0c8c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b0c90: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b0c94: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0c98: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b0c9c: ret  */
  return;
L_b0ca0:;
  /* b0ca0: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* b0ca4: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* b0ca8: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* b0cac: b.lo #0xb0cc8 */
  if (ARC_COND(c, 3)) goto L_b0cc8;
  /* b0cb0: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b0cb4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0cb8: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* b0cbc: b.ne #0xb0ca0 */
  if (ARC_COND(c, 1)) goto L_b0ca0;
  /* b0cc0: mov x8, x10 */
  ARC_X_W(c, 8, ARC_X_R(c, 10));
  /* b0cc4: b #0xb0ccc */
  goto L_b0ccc;
L_b0cc8:;
  /* b0cc8: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
L_b0ccc:;
  /* b0ccc: subs x20, x8, x19 */
  ARC_X_W(c, 20, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19)));
  /* b0cd0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b0cd4: b.eq #0xb0c84 */
  if (ARC_COND(c, 0)) goto L_b0c84;
  /* b0cd8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0cdc: b.eq #0xb0c84 */
  if (ARC_COND(c, 0)) goto L_b0c84;
  /* b0ce0: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* b0ce4: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* b0ce8: b.ne #0xb0c80 */
  if (ARC_COND(c, 1)) goto L_b0c80;
  /* b0cec: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b0cf0: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b0cf4: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* b0cf8: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b0cfc: sub x10, x8, #0xfc0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* b0d00: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* b0d04: b.hi #0xb0d38 */
  if (ARC_COND(c, 8)) goto L_b0d38;
  /* b0d08: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* b0d0c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b0d10: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* b0d14: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* b0d18: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(724252));
  fn1_1428a8(c);
  /* b0d1c: cbz x0, #0xb0d78 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0d78;
  /* b0d20: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b0d24: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b0d28: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b0d2c: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* b0d30: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b0d34: str x0, [x24, #0x1330] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(4912)), ARC_X_R(c, 0));
L_b0d38:;
  /* b0d38: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* b0d3c: add x8, x21, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b0d40: mov w10, #0x4d */
  ARC_W_W(c, 10, UINT64_C(77));
  /* b0d44: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0d48: adrp x9, #0x14a000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b0d4c: add x9, x9, #0x708 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1800)));
  /* b0d50: str x9, [x8, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b0d54: ldurh w9, [x8, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 8) + INT64_C(9))));
  /* b0d58: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* b0d5c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b0d60: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b0d64: stp x1, x2, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* b0d68: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* b0d6c: stp x19, x20, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* b0d70: sturh w9, [x8, #9] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(9)), ARC_W_R(c, 9));
  /* b0d74: b #0xb0c84 */
  goto L_b0c84;
L_b0d78:;
  /* b0d78: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(724348));
  fn1_142488(c);
}

void fn1_b54c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038670528));
  /* b54c0: bti c */
  /* bti: no architectural effect here */
  /* b54c4: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* b54c8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b81c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682052));
  /* b81c4: bti c */
  /* bti: no architectural effect here */
  /* b81c8: ldr w8, [x1, #0x1c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(28))));
  /* b81cc: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* b81d0: b.eq #0xb8208 */
  if (ARC_COND(c, 0)) goto L_b8208;
  /* b81d4: ldr w8, [x1, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(24))));
  /* b81d8: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b81dc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b81e0: b.ls #0xb821c */
  if (ARC_COND(c, 9)) goto L_b821c;
L_b81e4:;
  /* b81e4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b81e8: ldr x0, [x9, x8, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* b81ec: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b81f0: ubfx w8, w8, #0xa, #2 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 10) & UINT64_C(3)));
  /* b81f4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* b81f8: b.ne #0xb8224 */
  if (ARC_COND(c, 1)) goto L_b8224;
  /* b81fc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b8200: ldr x16, [x8, #0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* b8204: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b8208:;
  /* b8208: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b820c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b8210: stp wzr, w9, [x1, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(24));
    arc_st32(_pa, ARC_W_R(c, 31));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* b8214: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8218: b.hi #0xb81e4 */
  if (ARC_COND(c, 8)) goto L_b81e4;
L_b821c:;
  /* b821c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* b8220: ret  */
  return;
L_b8224:;
  /* b8224: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* b8228: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* b822c: ret  */
  return;
}

void fn1_bb3e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038694880));
  /* bb3e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bb3e4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bb3e8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bb3ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bb3f0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bb3f4: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bb3f8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bb3fc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bb400: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bb404: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766984));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bb408: ldr w8, [x20, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(12))));
  /* bb40c: tbz w8, #0, #0xbb470 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_bb470;
  /* bb410: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bb414: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb418: add x10, x8, #6 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(6)));
  /* bb41c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bb420: b.ls #0xbb448 */
  if (ARC_COND(c, 9)) goto L_bb448;
  /* bb424: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bb428: add x8, x8, #0x3e6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(998)));
  /* bb42c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb430: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb434: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb438: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767036));
  fn1_142878(c);
  /* bb43c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb440: cbz x0, #0xbb54c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb54c;
  /* bb444: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb448:;
  /* bb448: mov w10, #0x6320 */
  ARC_W_W(c, 10, UINT64_C(25376));
  /* bb44c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bb450: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* bb454: movk w10, #0x6e6f, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1852768256)));
  /* bb458: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* bb45c: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* bb460: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb464: add x9, x8, #6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(6)));
  /* bb468: ldr w8, [x20, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(12))));
  /* bb46c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_bb470:;
  /* bb470: tbz w8, #1, #0xbb4d8 */
  if (((ARC_W_R(c, 8)) >> 1 & 1) == 0) goto L_bb4d8;
  /* bb474: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bb478: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb47c: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* bb480: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bb484: b.ls #0xbb4ac */
  if (ARC_COND(c, 9)) goto L_bb4ac;
  /* bb488: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bb48c: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* bb490: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb494: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb498: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb49c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767136));
  fn1_142878(c);
  /* bb4a0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb4a4: cbz x0, #0xbb550 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb550;
  /* bb4a8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb4ac:;
  /* bb4ac: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* bb4b0: add x9, x9, #0xe78 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3704)));
  /* bb4b4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bb4b8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* bb4bc: mov w10, #0x65 */
  ARC_W_W(c, 10, UINT64_C(101));
  /* bb4c0: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* bb4c4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bb4c8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb4cc: add x9, x8, #9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* bb4d0: ldr w8, [x20, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(12))));
  /* bb4d4: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_bb4d8:;
  /* bb4d8: tbz w8, #2, #0xbb53c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_bb53c;
  /* bb4dc: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bb4e0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb4e4: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* bb4e8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bb4ec: b.ls #0xbb514 */
  if (ARC_COND(c, 9)) goto L_bb514;
  /* bb4f0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bb4f4: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* bb4f8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb4fc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb500: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb504: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767240));
  fn1_142878(c);
  /* bb508: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb50c: cbz x0, #0xbb554 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb554;
  /* bb510: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb514:;
  /* bb514: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* bb518: add x9, x9, #0xf91 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3985)));
  /* bb51c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bb520: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* bb524: mov w10, #0x74 */
  ARC_W_W(c, 10, UINT64_C(116));
  /* bb528: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* bb52c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bb530: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb534: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* bb538: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bb53c:;
  /* bb53c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bb540: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bb544: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bb548: ret  */
  return;
L_bb54c:;
  /* bb54c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767312));
  fn1_1427b8(c);
L_bb550:;
  /* bb550: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767316));
  fn1_1427b8(c);
L_bb554:;
  /* bb554: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(767320));
  fn1_1427b8(c);
}

void fn1_bdc5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705244));
  /* bdc5c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bdc60: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bdc64: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* bdc68: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bdc6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bdc70: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bdc74: nop  */
  /* nop: no architectural effect here */
  /* bdc78: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* bdc7c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* bdc80: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* bdc84: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777352));
  fn1_144ac8(c);
  /* bdc88: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* bdc8c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bdc90: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* bdc94: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* bdc98: str w8, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* bdc9c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bdca0: bl #0x142998 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777380));
  fn1_142998(c);
  /* bdca4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* bdca8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bdcac: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* bdcb0: add x0, x0, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(96)));
  /* bdcb4: bl #0x9c8d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777400));
  fn1_9c8d0(c);
  /* bdcb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bdcbc: bl #0xbdcc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777408));
  fn1_bdcc0(c);
}

void fn1_d1924(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038786340));
  /* d1924: bti c */
  /* bti: no architectural effect here */
  /* d1928: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d192c: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* d1930: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1934: b.gt #0xd1944 */
  if (ARC_COND(c, 12)) goto L_d1944;
  /* d1938: b.hs #0xd1a18 */
  if (ARC_COND(c, 2)) goto L_d1a18;
L_d193c:;
  /* d193c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1940: ret  */
  return;
L_d1944:;
  /* d1944: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d1948: b.eq #0xd1a40 */
  if (ARC_COND(c, 0)) goto L_d1a40;
  /* d194c: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d1950: b.eq #0xd1b44 */
  if (ARC_COND(c, 0)) goto L_d1b44;
  /* d1954: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d1958: b.ne #0xd1a8c */
  if (ARC_COND(c, 1)) goto L_d1a8c;
  /* d195c: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d1960: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1964: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1968: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d196c: stp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d1970: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* d1974: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1978: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d197c: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1980: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1984: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1988: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* d198c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d1990: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1994: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1998: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d199c: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d19a0: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d19a4: ldp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d19a8: ldr x11, [x0, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d19ac: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* d19b0: csel x9, x9, x10, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d19b4: csel x8, x8, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d19b8: stp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d19bc: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d19c0: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* d19c4: csel x9, x11, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* d19c8: csel x8, x11, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* d19cc: stur x9, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 9));
  /* d19d0: ldp x11, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d19d4: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d19d8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d19dc: csel x12, x10, x9, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d19e0: csel x10, x10, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d19e4: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d19e8: csel x9, x9, x11, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* d19ec: csel x11, x12, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* d19f0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d19f4: csel x12, x10, x8, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d19f8: csel x10, x10, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d19fc: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1a00: csel x8, x8, x11, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* d1a04: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d1a08: csel x8, x12, x11, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* d1a0c: stp x8, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d1a10: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1a14: ret  */
  return;
L_d1a18:;
  /* d1a18: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1a1c: b.ne #0xd1a8c */
  if (ARC_COND(c, 1)) goto L_d1a8c;
  /* d1a20: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1a24: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* d1a28: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1a2c: b.ge #0xd193c */
  if (ARC_COND(c, 10)) goto L_d193c;
  /* d1a30: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* d1a34: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1a38: stur x8, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 8));
  /* d1a3c: ret  */
  return;
L_d1a40:;
  /* d1a40: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1a44: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1a48: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1a4c: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1a50: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1a54: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1a58: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* d1a5c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1a60: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1a64: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1a68: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1a6c: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1a70: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1a74: ldp x9, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d1a78: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* d1a7c: csel x9, x9, x10, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* d1a80: csel x8, x8, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d1a84: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* d1a88: b #0xd1bb4 */
  goto L_d1bb4;
L_d1a8c:;
  /* d1a8c: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d1a90: ldp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d1a94: ldr x8, [x11, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(16));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* d1a98: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1a9c: csel x12, x9, x8, gt */
  ARC_X_W(c, 12, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1aa0: csel x9, x9, x8, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1aa4: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* d1aa8: csel x8, x12, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d1aac: csel x13, x12, x10, lt */
  ARC_X_W(c, 13, (ARC_COND(c, 11) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* d1ab0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* d1ab4: str x8, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* d1ab8: add x8, x0, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* d1abc: csel x10, x10, x9, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d1ac0: csel x9, x9, x13, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 13)));
  /* d1ac4: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d1ac8: stp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* d1acc: b.eq #0xd193c */
  if (ARC_COND(c, 0)) goto L_d193c;
  /* d1ad0: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d1ad4: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
  /* d1ad8: b #0xd1b08 */
  goto L_d1b08;
L_d1adc:;
  /* d1adc: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d1ae0:;
  /* d1ae0: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d1ae4: str x12, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* d1ae8: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d1aec: b.eq #0xd1bc0 */
  if (ARC_COND(c, 0)) goto L_d1bc0;
L_d1af0:;
  /* d1af0: add x12, x8, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d1af4: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d1af8: add x10, x10, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* d1afc: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d1b00: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d1b04: b.eq #0xd193c */
  if (ARC_COND(c, 0)) goto L_d193c;
L_d1b08:;
  /* d1b08: ldr x12, [x8] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 8)));
  /* d1b0c: ldr x11, [x11] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 11)));
  /* d1b10: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1b14: b.ge #0xd1af0 */
  if (ARC_COND(c, 10)) goto L_d1af0;
  /* d1b18: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d1b1c:;
  /* d1b1c: subs x13, x14, #8 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* d1b20: str x11, [x0, x14] */
  arc_st64((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_X_R(c, 11));
  /* d1b24: b.eq #0xd1adc */
  if (ARC_COND(c, 0)) goto L_d1adc;
  /* d1b28: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d1b2c: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d1b30: ldur x11, [x11, #-0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(-16))));
  /* d1b34: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* d1b38: b.lt #0xd1b1c */
  if (ARC_COND(c, 11)) goto L_d1b1c;
  /* d1b3c: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d1b40: b #0xd1ae0 */
  goto L_d1ae0;
L_d1b44:;
  /* d1b44: ldp x10, x8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* d1b48: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1b4c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1b50: csel x11, x9, x8, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1b54: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1b58: str x11, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 11));
  /* d1b5c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d1b60: ldur x8, [x1, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1b64: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d1b68: csel x9, x10, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1b6c: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1b70: stur x9, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 9));
  /* d1b74: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* d1b78: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* d1b7c: csel x10, x9, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1b80: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d1b84: stp x8, x10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* d1b88: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d1b8c: ldur x9, [x1, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(-8))));
  /* d1b90: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d1b94: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1b98: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* d1b9c: stur x10, [x1, #-8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(-8)), ARC_X_R(c, 10));
  /* d1ba0: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1ba4: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d1ba8: csel x9, x10, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1bac: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d1bb0: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
L_d1bb4:;
  /* d1bb4: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* d1bb8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1bbc: ret  */
  return;
L_d1bc0:;
  /* d1bc0: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* d1bc4: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d1bc8: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d1bcc: ret  */
  return;
}

void fn1_d7b2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038811436));
  /* d7b2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7b30: sub sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(416)));
  /* d7b34: stp x29, x30, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7b38: str x28, [sp, #0x170] */
  arc_st64(((c)->sp + INT64_C(368)), ARC_X_R(c, 28));
  /* d7b3c: stp x22, x21, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d7b40: stp x20, x19, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d7b44: add x29, sp, #0x160 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(352)));
  /* d7b48: ldp q0, q1, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d7b4c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d7b50: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* d7b54: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* d7b58: add x3, sp, #0x20 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(32)));
  /* d7b5c: mov w1, #0x100 */
  ARC_W_W(c, 1, UINT64_C(256));
  /* d7b60: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* d7b64: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* d7b68: stp q0, q1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d7b6c: stp q0, q1, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d7b70: bl #0x142b00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883572));
  fn1_142b00(c);
  /* d7b74: sxtw x22, w0 */
  ARC_X_W(c, 22, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* d7b78: cmp w0, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(255));
  /* d7b7c: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d7b80: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* d7b84: b.hi #0xd7b9c */
  if (ARC_COND(c, 8)) goto L_d7b9c;
  /* d7b88: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* d7b8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d7b90: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* d7b94: bl #0xd7c14 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883608));
  fn1_d7c14(c);
  /* d7b98: b #0xd7bd0 */
  goto L_d7bd0;
L_d7b9c:;
  /* d7b9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d7ba0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* d7ba4: bl #0xd7ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883624));
  fn1_d7ec0(c);
  /* d7ba8: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d7bac: ldp q0, q1, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* d7bb0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d7bb4: add x1, x22, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* d7bb8: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* d7bbc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d7bc0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* d7bc4: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* d7bc8: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* d7bcc: bl #0x142b00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883664));
  fn1_142b00(c);
L_d7bd0:;
  /* d7bd0: ldp x20, x19, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d7bd4: ldr x28, [sp, #0x170] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(368))));
  /* d7bd8: ldp x22, x21, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d7bdc: ldp x29, x30, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7be0: add sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(416)));
  /* d7be4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7be8: ret  */
  return;
  /* d7bec: b #0xd7bf0 */
  goto L_d7bf0;
L_d7bf0:;
  /* d7bf0: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d7bf4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d7bf8: tbz w8, #0, #0xd7c0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_d7c0c;
  /* d7bfc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d7c00: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d7c04: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* d7c08: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883724));
  fn1_142608(c);
L_d7c0c:;
  /* d7c0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d7c10: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(883732));
  fn1_9cc20(c);
}

void fn1_db7dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826972));
  /* db7dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db7e0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db7e4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db7e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db7ec: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* db7f0: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* db7f4: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* db7f8: b.eq #0xdb818 */
  if (ARC_COND(c, 0)) goto L_db818;
L_db7fc:;
  /* db7fc: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* db800: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* db804: cbz x8, #0xdb848 */
  if ((ARC_X_R(c, 8)) == 0) goto L_db848;
  /* db808: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* db80c: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* db810: b.ne #0xdb7fc */
  if (ARC_COND(c, 1)) goto L_db7fc;
  /* db814: b #0xdb81c */
  goto L_db81c;
L_db818:;
  /* db818: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_db81c:;
  /* db81c: ldr x9, [x1] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 1)));
  /* db820: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* db824: sub x10, x8, x2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 2)));
  /* db828: ldr x3, [x8, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* db82c: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* db830: add x2, x10, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 10) + UINT64_C(24)));
  /* db834: ldr x9, [x9, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* db838: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* db83c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* db840: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(899140));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* db844: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
L_db848:;
  /* db848: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db84c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db850: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db854: ret  */
  return;
}

void fn1_e0038(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038845496));
  /* e0038: bti c */
  /* bti: no architectural effect here */
  /* e003c: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* e0040: tbnz w8, #0, #0xe0058 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e0058;
  /* e0044: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e0048: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* e004c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* e0050: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* e0054: ret  */
  return;
L_e0058:;
  /* e0058: ldp x2, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e005c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e0060: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_e277c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038855548));
  /* e277c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2780: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2784: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e2788: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e278c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2790: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2794: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e2798: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e279c: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e27a0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e27a4: csel x21, x10, x8, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e27a8: cmp x21, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1));
  /* e27ac: b.lo #0xe2898 */
  if (ARC_COND(c, 3)) goto L_e2898;
  /* e27b0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e27b4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e27b8: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* e27bc: mov x4, x1 */
  ARC_X_W(c, 4, ARC_X_R(c, 1));
  /* e27c0: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* e27c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e27c8: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e27cc: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* e27d0: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* e27d4: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* e27d8: sub x9, x1, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 21)));
  /* e27dc: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* e27e0: b.hs #0xe2808 */
  if (ARC_COND(c, 2)) goto L_e2808;
  /* e27e4: add x8, x21, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* e27e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e27ec: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* e27f0: sub x2, x8, x1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* e27f4: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e27f8: mov x6, x20 */
  ARC_X_W(c, 6, ARC_X_R(c, 20));
  /* e27fc: mov x7, x22 */
  ARC_X_W(c, 7, ARC_X_R(c, 22));
  /* e2800: bl #0x142d40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927748));
  fn1_142d40(c);
  /* e2804: b #0xe287c */
  goto L_e287c;
L_e2808:;
  /* e2808: cbz x20, #0xe287c */
  if ((ARC_X_R(c, 20)) == 0) goto L_e287c;
  /* e280c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e2810: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e2814: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e2818: csel x24, x10, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e281c: subs x8, x21, x4 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 4)));
  /* e2820: add x23, x24, x4, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 4)) << 2)));
  /* e2824: b.eq #0xe284c */
  if (ARC_COND(c, 0)) goto L_e284c;
  /* e2828: add x9, x24, x21, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* e282c: add x0, x23, x20, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 20)) << 2)));
  /* e2830: lsl x2, x8, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* e2834: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* e2838: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* e283c: ccmp x22, x23, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* e2840: csel x9, x20, xzr, hs */
  ARC_X_W(c, 9, (ARC_COND(c, 2) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 31)));
  /* e2844: add x22, x22, x9, lsl #2 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* e2848: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927820));
  fn1_1449f0(c);
L_e284c:;
  /* e284c: lsl x2, x20, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(2)) & 63)));
  /* e2850: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e2854: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e2858: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927836));
  fn1_1449f0(c);
  /* e285c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e2860: add x8, x21, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* e2864: tbnz w9, #0, #0xe2874 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e2874;
  /* e2868: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e286c: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e2870: b #0xe2878 */
  goto L_e2878;
L_e2874:;
  /* e2874: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e2878:;
  /* e2878: str wzr, [x24, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
L_e287c:;
  /* e287c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e2880: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2884: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2888: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e288c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2890: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2894: ret  */
  return;
L_e2898:;
  /* e2898: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(927900));
  fn1_e1f80(c);
}

void fn1_e63a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038870944));
  /* e63a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e63a4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e63a8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e63ac: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e63b0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e63b4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e63b8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e63bc: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* e63c0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e63c4: add x20, x0, #0x14 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(20)));
  /* e63c8: tbz x21, #0x3f, #0xe63dc */
  if (((ARC_X_R(c, 21)) >> 63 & 1) == 0) goto L_e63dc;
  /* e63cc: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
  /* e63d0: orr x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | UINT64_C(1)));
  /* e63d4: neg x21, x21 */
  ARC_X_W(c, 21, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 21))));
  /* e63d8: strb w8, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 8));
L_e63dc:;
  /* e63dc: sub x8, x20, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 0)));
  /* e63e0: cmp x8, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(19));
  /* e63e4: b.gt #0xe6428 */
  if (ARC_COND(c, 12)) goto L_e6428;
  /* e63e8: orr x9, x21, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e63ec: mov w10, #0x40 */
  ARC_W_W(c, 10, UINT64_C(64));
  /* e63f0: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* e63f4: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* e63f8: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* e63fc: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* e6400: nop  */
  /* nop: no architectural effect here */
  /* e6404: adr x10, #0x75298 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(479896)));
  /* e6408: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* e640c: ldr x10, [x10, w9, uxtw #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 3))));
  /* e6410: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* e6414: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* e6418: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* e641c: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* e6420: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* e6424: b.lt #0xe6524 */
  if (ARC_COND(c, 11)) goto L_e6524;
L_e6428:;
  /* e6428: lsr x8, x21, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(32)) & 63)));
  /* e642c: cbnz x8, #0xe6440 */
  if ((ARC_X_R(c, 8)) != 0) goto L_e6440;
  /* e6430: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e6434: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(943160));
  fn1_d4eb8(c);
  /* e6438: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e643c: b #0xe6524 */
  goto L_e6524;
L_e6440:;
  /* e6440: mov x22, #0xe3ff */
  ARC_X_W(c, 22, UINT64_C(58367));
  /* e6444: movk x22, #0x540b, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* e6448: movk x22, #2, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* e644c: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* e6450: b.ls #0xe647c */
  if (ARC_COND(c, 9)) goto L_e647c;
  /* e6454: mov x8, #0xd5bf */
  ARC_X_W(c, 8, UINT64_C(54719));
  /* e6458: movk x8, #0xbded, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3186425856)));
  /* e645c: movk x8, #0xfece, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280160716718080)));
  /* e6460: movk x8, #0xdbe6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15845352338949668864)));
  /* e6464: umulh x8, x21, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 21), ARC_X_R(c, 8)));
  /* e6468: lsr x20, x8, #0x21 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* e646c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e6470: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(943220));
  fn1_d4eb8(c);
  /* e6474: madd x8, x20, x22, x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) + ((uint64_t)(ARC_X_R(c, 20)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e6478: sub x21, x21, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - ARC_X_R(c, 8)));
L_e647c:;
  /* e647c: mov x8, #0xcefd */
  ARC_X_W(c, 8, UINT64_C(52989));
  /* e6480: mov w9, #0xe100 */
  ARC_W_W(c, 9, UINT64_C(57600));
  /* e6484: mov w10, #0xde83 */
  ARC_W_W(c, 10, UINT64_C(56963));
  /* e6488: movk x8, #0x8461, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* e648c: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* e6490: movk w10, #0x431b, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* e6494: movk x8, #0x7711, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* e6498: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* e649c: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* e64a0: movk x8, #0xabcc, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* e64a4: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* e64a8: add x20, x0, #0xa */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(10)));
  /* e64ac: umulh x8, x21, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 21), ARC_X_R(c, 8)));
  /* e64b0: lsr x8, x8, #0x1a */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(26)) & 63)));
  /* e64b4: msub w9, w8, w9, w21 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 21)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* e64b8: umull x10, w9, w10 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* e64bc: lsr x10, x10, #0x32 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(50)) & 63)));
  /* e64c0: msub w9, w10, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e64c4: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* e64c8: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* e64cc: umull x11, w9, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e64d0: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* e64d4: msub w9, w11, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* e64d8: nop  */
  /* nop: no architectural effect here */
  /* e64dc: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* e64e0: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e64e4: ubfx w13, w9, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* e64e8: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e64ec: mov w8, #0x147b */
  ARC_W_W(c, 8, UINT64_C(5243));
  /* e64f0: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* e64f4: mul w8, w13, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 8))));
  /* e64f8: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* e64fc: ldrh w10, [x12, x11, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* e6500: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* e6504: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* e6508: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* e650c: msub w9, w8, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e6510: ldrh w8, [x12, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* e6514: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* e6518: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e651c: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e6520: strh w8, [x0, #8] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
L_e6524:;
  /* e6524: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* e6528: sub x21, x20, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e652c: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e6530: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e6534: b.hs #0xe664c */
  if (ARC_COND(c, 2)) goto L_e664c;
  /* e6538: cmp x21, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(4));
  /* e653c: b.hi #0xe654c */
  if (ARC_COND(c, 8)) goto L_e654c;
  /* e6540: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e6544: strb w8, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e6548: b #0xe6574 */
  goto L_e6574;
L_e654c:;
  /* e654c: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e6550: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e6554: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e6558: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e655c: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e6560: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(943460));
  fn1_1428f0(c);
  /* e6564: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e6568: stp x21, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e656c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e6570: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e6574:;
  /* e6574: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* e6578: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* e657c: b.eq #0xe6598 */
  if (ARC_COND(c, 0)) goto L_e6598;
  /* e6580: cmp x21, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(32));
  /* e6584: add x11, sp, #0xc */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(12)));
  /* e6588: b.hs #0xe65a0 */
  if (ARC_COND(c, 2)) goto L_e65a0;
  /* e658c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* e6590: add x9, sp, #0xc */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(12)));
  /* e6594: b #0xe6620 */
  goto L_e6620;
L_e6598:;
  /* e6598: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* e659c: b #0xe6630 */
  goto L_e6630;
L_e65a0:;
  /* e65a0: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e65a4: and x10, x21, #0x3fffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) & UINT64_C(4611686018427387872)));
  /* e65a8: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* e65ac: ldr q0, [x12, #0xb70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 12) + INT64_C(2928))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2928)) + 8));
  /* e65b0: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e65b4: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* e65b8: add x8, x19, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* e65bc: ldr q1, [x13, #0xd40] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 13) + INT64_C(3392))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3392)) + 8));
  /* e65c0: ldr q2, [x12, #0xc50] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(3152))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3152)) + 8));
  /* e65c4: ldr q3, [x14, #0x940] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 14) + INT64_C(2368))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2368)) + 8));
  /* e65c8: add x9, x11, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* e65cc: add x11, x11, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* e65d0: add x12, x19, #0x40 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e65d4: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_e65d8:;
  /* e65d8: ldp q4, q5, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e65dc: subs x13, x13, #0x20 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(32)));
  /* e65e0: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* e65e4: tbl v6.16b, {v4.16b}, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[3].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[3].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[3].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[3].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[3].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[3].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[3].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[3].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[3].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[3].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[3].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[3].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[3].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[3].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[3].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[3].u8[15]);
    (c)->q[6] = _t; }
  /* e65e8: tbl v7.16b, {v4.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[2].u8[15]);
    (c)->q[7] = _t; }
  /* e65ec: tbl v16.16b, {v4.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[1].u8[15]);
    (c)->q[16] = _t; }
  /* e65f0: tbl v4.16b, {v4.16b}, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[0].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[0].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[0].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[0].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[0].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[0].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[0].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[0].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[0].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[0].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[0].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[0].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[0].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[0].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[0].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[0].u8[15]);
    (c)->q[4] = _t; }
  /* e65f4: tbl v17.16b, {v5.16b}, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[3].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[3].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[3].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[3].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[3].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[3].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[3].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[3].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[3].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[3].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[3].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[3].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[3].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[3].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[3].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[3].u8[15]);
    (c)->q[17] = _t; }
  /* e65f8: stp q7, q6, [x12, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-32));
    arc_st64(_pa, (c)->q[7].u64[0]);
    arc_st64(_pa + 8, (c)->q[7].u64[1]);
    arc_st64((_pa + 16), (c)->q[6].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[6].u64[1]);
  }
  /* e65fc: tbl v6.16b, {v5.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[2].u8[15]);
    (c)->q[6] = _t; }
  /* e6600: tbl v7.16b, {v5.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[1].u8[15]);
    (c)->q[7] = _t; }
  /* e6604: tbl v5.16b, {v5.16b}, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[0].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[0].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[0].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[0].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[0].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[0].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[0].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[0].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[0].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[0].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[0].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[0].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[0].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[0].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[0].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[0].u8[15]);
    (c)->q[5] = _t; }
  /* e6608: stp q4, q16, [x12, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[16].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[16].u64[1]);
  }
  /* e660c: stp q6, q17, [x12, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(32));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* e6610: stp q5, q7, [x12], #0x80 */
  { const uint64_t _pa = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(128));
    arc_st64(_pa, (c)->q[5].u64[0]);
    arc_st64(_pa + 8, (c)->q[5].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* e6614: b.ne #0xe65d8 */
  if (ARC_COND(c, 1)) goto L_e65d8;
  /* e6618: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* e661c: b.eq #0xe6630 */
  if (ARC_COND(c, 0)) goto L_e6630;
L_e6620:;
  /* e6620: ldrb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* e6624: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* e6628: str w10, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* e662c: b.ne #0xe6620 */
  if (ARC_COND(c, 1)) goto L_e6620;
L_e6630:;
  /* e6630: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* e6634: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e6638: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e663c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6640: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e6644: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e6648: ret  */
  return;
L_e664c:;
  /* e664c: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(943696));
  fn1_e2274(c);
}

void fn1_e97d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038884304));
  /* e97d0: bti c */
  /* bti: no architectural effect here */
  /* e97d4: nop  */
  /* nop: no architectural effect here */
  /* e97d8: adr x0, #0x5037f */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328575)));
  /* e97dc: ret  */
  return;
}

void fn1_eb6c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892228));
  /* eb6c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb6c8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb6cc: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb6d0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb6d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb6d8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964316));
  fn1_142518(c);
  /* eb6dc: cbnz w0, #0xeb73c */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb73c;
  /* eb6e0: ldr w8, [x19, #0x88] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb6e4: mov w9, #0x7fffffff */
  ARC_W_W(c, 9, UINT64_C(2147483647));
  /* eb6e8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* eb6ec: b.lo #0xeb710 */
  if (ARC_COND(c, 3)) goto L_eb710;
  /* eb6f0: mov w20, #0x7ffffffe */
  ARC_W_W(c, 20, UINT64_C(2147483646));
L_eb6f4:;
  /* eb6f4: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb6f8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eb6fc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964352));
  fn1_142530(c);
  /* eb700: cbnz w0, #0xeb730 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb730;
  /* eb704: ldr w8, [x19, #0x88] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb708: cmp w8, w20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 20));
  /* eb70c: b.hi #0xeb6f4 */
  if (ARC_COND(c, 8)) goto L_eb6f4;
L_eb710:;
  /* eb710: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* eb714: str w8, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 8));
  /* eb718: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb71c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964384));
  fn1_142560(c);
  /* eb720: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb724: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb728: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb72c: ret  */
  return;
L_eb730:;
  /* eb730: nop  */
  /* nop: no architectural effect here */
  /* eb734: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* eb738: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964412));
  fn1_142a40(c);
L_eb73c:;
  /* eb73c: nop  */
  /* nop: no architectural effect here */
  /* eb740: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb744: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964424));
  fn1_142a40(c);
  /* eb748: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964428));
  fn1_a1454(c);
  /* eb74c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964432));
  fn1_a1454(c);
  /* eb750: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964436));
  fn1_a1454(c);
}

void fn1_ed374(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899572));
  /* ed374: bti c */
  /* bti: no architectural effect here */
  /* ed378: ldp x9, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ed37c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ed380: b.eq #0xed394 */
  if (ARC_COND(c, 0)) goto L_ed394;
  /* ed384: sub x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* ed388: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* ed38c: ldurb w0, [x8, #-1] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 8) + INT64_C(-1))));
  /* ed390: ret  */
  return;
L_ed394:;
  /* ed394: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed398: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* ed39c: ldr x16, [x8, #0x58] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* ed3a0: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f0af8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038913784));
  /* f0af8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0afc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f0b00: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f0b04: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f0b08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0b0c: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f0b10: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f0b14: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f0b18: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985884));
  fn1_1435f8(c);
  /* f0b1c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0b20: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0b24: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0b28: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0b2c: cbz x0, #0xf0b90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f0b90;
  /* f0b30: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f0b34: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f0b38: b.ne #0xf0b98 */
  if (ARC_COND(c, 1)) goto L_f0b98;
  /* f0b3c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0b40: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f0b44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(985928));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f0b48: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f0b4c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* f0b50: csetm w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (uint32_t)~(uint32_t)0 : 0));
L_f0b54:;
  /* f0b54: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f0b58: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f0b5c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0b60: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f0b64: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f0b68: ldp w10, w12, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 12, arc_ld32(_pa + 4));
  }
  /* f0b6c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f0b70: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f0b74: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* f0b78: tst w8, w12 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 12)));
  /* f0b7c: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f0b80: b.eq #0xf0b9c */
  if (ARC_COND(c, 0)) goto L_f0b9c;
  /* f0b84: nop  */
  /* nop: no architectural effect here */
  /* f0b88: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f0b8c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986000));
  fn1_ec720(c);
L_f0b90:;
  /* f0b90: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f0b94: b #0xf0b9c */
  goto L_f0b9c;
L_f0b98:;
  /* f0b98: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_f0b9c:;
  /* f0b9c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f0ba0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f0ba4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0ba8: ret  */
  return;
  /* f0bac: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986032));
  fn1_142548(c);
  /* f0bb0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0bb4: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0bb8: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0bbc: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0bc0: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f0bc4: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0bc8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0bcc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0bd0: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f0bd4: tbnz w8, #0, #0xf0be8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f0be8;
  /* f0bd8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986076));
  fn1_142980(c);
  /* f0bdc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* f0be0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f0be4: b #0xf0b54 */
  goto L_f0b54;
L_f0be8:;
  /* f0be8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986092));
  fn1_1429b0(c);
  /* f0bec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0bf0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986100));
  fn1_142980(c);
  /* f0bf4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0bf8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986108));
  fn1_9cc20(c);
  /* f0bfc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986112));
  fn1_a1454(c);
}

void fn1_f3da8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926760));
  /* f3da8: bti c */
  /* bti: no architectural effect here */
  /* f3dac: ldp x10, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f3db0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* f3db4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* f3db8: b.eq #0xf3dc8 */
  if (ARC_COND(c, 0)) goto L_f3dc8;
  /* f3dbc: ldr w0, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* f3dc0: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* f3dc4: ret  */
  return;
L_f3dc8:;
  /* f3dc8: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f3dcc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f3dd0: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* f3dd4: ldr x16, [x9, #0x58] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 9) + INT64_C(88))));
  /* f3dd8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f7530(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038940976));
  /* f7530: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7534: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7538: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f753c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7540: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7544: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f7548: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f754c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f7550: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013076));
  fn1_143670(c);
  /* f7554: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7558: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f755c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7560: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f7564: cbz x0, #0xf75c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_f75c8;
  /* f7568: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f756c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f7570: b.ne #0xf75d0 */
  if (ARC_COND(c, 1)) goto L_f75d0;
  /* f7574: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7578: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f757c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013120));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f7580: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f7584: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* f7588: csetm w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (uint32_t)~(uint32_t)0 : 0));
L_f758c:;
  /* f758c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f7590: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f7594: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f7598: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f759c: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f75a0: ldp w10, w12, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 12, arc_ld32(_pa + 4));
  }
  /* f75a4: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f75a8: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f75ac: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* f75b0: tst w8, w12 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 12)));
  /* f75b4: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f75b8: b.eq #0xf75d4 */
  if (ARC_COND(c, 0)) goto L_f75d4;
  /* f75bc: nop  */
  /* nop: no architectural effect here */
  /* f75c0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f75c4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013192));
  fn1_ec720(c);
L_f75c8:;
  /* f75c8: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f75cc: b #0xf75d4 */
  goto L_f75d4;
L_f75d0:;
  /* f75d0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_f75d4:;
  /* f75d4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f75d8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f75dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f75e0: ret  */
  return;
  /* f75e4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013224));
  fn1_142548(c);
  /* f75e8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f75ec: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f75f0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f75f4: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f75f8: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f75fc: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f7600: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7604: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7608: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f760c: tbnz w8, #0, #0xf7620 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f7620;
  /* f7610: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013268));
  fn1_142980(c);
  /* f7614: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* f7618: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f761c: b #0xf758c */
  goto L_f758c;
L_f7620:;
  /* f7620: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013284));
  fn1_1429b0(c);
  /* f7624: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7628: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013292));
  fn1_142980(c);
  /* f762c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7630: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013300));
  fn1_9cc20(c);
  /* f7634: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013304));
  fn1_a1454(c);
}

void fn1_fc454(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038961236));
  /* fc454: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fc458: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* fc45c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fc460: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fc464: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fc468: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fc46c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* fc470: ldr x8, [x0, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* fc474: cbz x8, #0xfc618 */
  if ((ARC_X_R(c, 8)) == 0) goto L_fc618;
  /* fc478: ldrb w8, [x0, #0x9c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(156))));
  /* fc47c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fc480: tbnz w8, #4, #0xfc4ac */
  if (((ARC_W_R(c, 8)) >> 4 & 1) != 0) goto L_fc4ac;
  /* fc484: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* fc488: stp xzr, xzr, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fc48c: str xzr, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 31));
  /* fc490: cmp x8, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(9));
  /* fc494: b.lo #0xfc4ec */
  if (ARC_COND(c, 3)) goto L_fc4ec;
  /* fc498: ldrb w9, [x19, #0xa2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(162))));
  /* fc49c: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* fc4a0: b.ne #0xfc500 */
  if (ARC_COND(c, 1)) goto L_fc500;
  /* fc4a4: ldr x3, [x19, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fc4a8: b #0xfc504 */
  goto L_fc504;
L_fc4ac:;
  /* fc4ac: ldp x3, x22, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* fc4b0: ldr x23, [x19, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* fc4b4: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* fc4b8: b.eq #0xfc528 */
  if (ARC_COND(c, 0)) goto L_fc528;
L_fc4bc:;
  /* fc4bc: cbnz x3, #0xfc4d0 */
  if ((ARC_X_R(c, 3)) != 0) goto L_fc4d0;
  /* fc4c0: sub x3, x29, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(1)));
  /* fc4c4: add x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) + UINT64_C(1)));
  /* fc4c8: stp x3, x3, [x19, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* fc4cc: str x8, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 8));
L_fc4d0:;
  /* fc4d0: strb w1, [x3] */
  arc_st8(ARC_X_R(c, 3), ARC_W_R(c, 1));
  /* fc4d4: ldp x2, x8, [x19, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(40));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fc4d8: add x3, x8, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* fc4dc: str x3, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 3));
  /* fc4e0: subs x20, x3, x2 */
  ARC_X_W(c, 20, arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 2)));
  /* fc4e4: b.ne #0xfc534 */
  if (ARC_COND(c, 1)) goto L_fc534;
  /* fc4e8: b #0xfc56c */
  goto L_fc56c;
L_fc4ec:;
  /* fc4ec: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* fc4f0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* fc4f4: stp xzr, xzr, [x19, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fc4f8: str xzr, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 31));
  /* fc4fc: b #0xfc514 */
  goto L_fc514;
L_fc500:;
  /* fc500: ldp x3, x8, [x19, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(104));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
L_fc504:;
  /* fc504: add x8, x3, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) + ARC_X_R(c, 8)));
  /* fc508: stp x3, x3, [x19, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* fc50c: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* fc510: str x22, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 22));
L_fc514:;
  /* fc514: mov w8, #0x10 */
  ARC_W_W(c, 8, UINT64_C(16));
  /* fc518: mov x23, x3 */
  ARC_X_W(c, 23, ARC_X_R(c, 3));
  /* fc51c: str w8, [x19, #0x9c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(156)), ARC_W_R(c, 8));
  /* fc520: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* fc524: b.ne #0xfc4bc */
  if (ARC_COND(c, 1)) goto L_fc4bc;
L_fc528:;
  /* fc528: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* fc52c: subs x20, x3, x2 */
  ARC_X_W(c, 20, arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 2)));
  /* fc530: b.eq #0xfc56c */
  if (ARC_COND(c, 0)) goto L_fc56c;
L_fc534:;
  /* fc534: ldrb w8, [x19, #0xa2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(162))));
  /* fc538: mov w24, w1 */
  ARC_W_W(c, 24, ARC_W_R(c, 1));
  /* fc53c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fc540: b.ne #0xfc578 */
  if (ARC_COND(c, 1)) goto L_fc578;
  /* fc544: ldr x3, [x19, #0x78] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fc548: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
L_fc54c:;
  /* fc54c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fc550: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* fc554: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1033560));
  fn1_1427d0(c);
  /* fc558: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* fc55c: b.ne #0xfc618 */
  if (ARC_COND(c, 1)) goto L_fc618;
L_fc560:;
  /* fc560: mov w1, w24 */
  ARC_W_W(c, 1, ARC_W_R(c, 24));
  /* fc564: stp x23, x23, [x19, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fc568: str x22, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 22));
L_fc56c:;
  /* fc56c: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* fc570: csel w0, wzr, w1, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 1)));
  /* fc574: b #0xfc61c */
  goto L_fc61c;
L_fc578:;
  /* fc578: ldr x8, [x19, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fc57c: ldr x0, [x19, #0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(128))));
  /* fc580: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* fc584: cbz x0, #0xfc614 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fc614;
L_fc588:;
  /* fc588: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fc58c: ldr x5, [x19, #0x40] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fc590: add x1, x19, #0x88 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(136)));
  /* fc594: ldr x9, [x19, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* fc598: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* fc59c: add x7, sp, #0x10 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(16)));
  /* fc5a0: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* fc5a4: add x6, x5, x9 */
  ARC_X_W(c, 6, (ARC_X_R(c, 5) + ARC_X_R(c, 9)));
  /* fc5a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1033644));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fc5ac: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* fc5b0: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* fc5b4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* fc5b8: b.eq #0xfc618 */
  if (ARC_COND(c, 0)) goto L_fc618;
  /* fc5bc: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* fc5c0: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* fc5c4: b.eq #0xfc638 */
  if (ARC_COND(c, 0)) goto L_fc638;
  /* fc5c8: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* fc5cc: b.hi #0xfc618 */
  if (ARC_COND(c, 8)) goto L_fc618;
  /* fc5d0: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* fc5d4: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fc5d8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fc5dc: ldr x3, [x19, #0x78] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fc5e0: sub x21, x8, x0 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* fc5e4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* fc5e8: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1033708));
  fn1_1427d0(c);
  /* fc5ec: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* fc5f0: b.ne #0xfc618 */
  if (ARC_COND(c, 1)) goto L_fc618;
  /* fc5f4: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* fc5f8: b.ne #0xfc560 */
  if (ARC_COND(c, 1)) goto L_fc560;
  /* fc5fc: ldr x2, [sp, #8] */
  ARC_X_W(c, 2, arc_ld64(((c)->sp + INT64_C(8))));
  /* fc600: ldr x3, [x19, #0x30] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* fc604: ldr x0, [x19, #0x80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(128))));
  /* fc608: str x2, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 2));
  /* fc60c: str x3, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 3));
  /* fc610: cbnz x0, #0xfc588 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fc588;
L_fc614:;
  /* fc614: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1033752));
  fn1_fc3b8(c);
L_fc618:;
  /* fc618: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
L_fc61c:;
  /* fc61c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fc620: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fc624: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fc628: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fc62c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* fc630: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fc634: ret  */
  return;
L_fc638:;
  /* fc638: ldr x9, [x19, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* fc63c: ldr x3, [x19, #0x78] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fc640: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* fc644: sub x20, x9, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* fc648: b #0xfc54c */
  goto L_fc54c;
}

void fn1_ff44c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973516));
  /* ff44c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff450: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff454: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* ff458: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ff45c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ff460: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ff464: sub x19, x2, x1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* ff468: cmn x19, #8 */
  (void)arc_add64(c, ARC_X_R(c, 19), UINT64_C(8), 0);
  /* ff46c: b.hs #0xff4f4 */
  if (ARC_COND(c, 2)) goto L_ff4f4;
  /* ff470: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* ff474: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* ff478: cmp x19, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(22));
  /* ff47c: b.hi #0xff494 */
  if (ARC_COND(c, 8)) goto L_ff494;
  /* ff480: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* ff484: strb w8, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* ff488: cmp x21, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1));
  /* ff48c: b.ne #0xff4cc */
  if (ARC_COND(c, 1)) goto L_ff4cc;
  /* ff490: b #0xff4d8 */
  goto L_ff4d8;
L_ff494:;
  /* ff494: orr x8, x19, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) | UINT64_C(7)));
  /* ff498: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* ff49c: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* ff4a0: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* ff4a4: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* ff4a8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ff4ac: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045680));
  fn1_1428f0(c);
  /* ff4b0: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* ff4b4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* ff4b8: stp x19, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* ff4bc: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* ff4c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ff4c4: cmp x21, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1));
  /* ff4c8: b.eq #0xff4d8 */
  if (ARC_COND(c, 0)) goto L_ff4d8;
L_ff4cc:;
  /* ff4cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ff4d0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* ff4d4: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045720));
  fn1_1449d8(c);
L_ff4d8:;
  /* ff4d8: strb wzr, [x20, x19] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 19)), ARC_W_R(c, 31));
  /* ff4dc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ff4e0: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* ff4e4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ff4e8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff4ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff4f0: ret  */
  return;
L_ff4f4:;
  /* ff4f4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045752));
  fn1_d7d54(c);
}

void fn1_10f5c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039039428));
  /* 10f5c4: bti c */
  /* bti: no architectural effect here */
  /* 10f5c8: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 10f5cc: ret  */
  return;
}

void fn1_113c48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057480));
  /* 113c48: bti c */
  /* bti: no architectural effect here */
  /* 113c4c: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113c50: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113c54: ret  */
  return;
}

void fn1_115ae8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039065320));
  /* 115ae8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 115aec: sub sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(336)));
  /* 115af0: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 115af4: stp x28, x27, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 115af8: stp x26, x25, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 115afc: stp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 115b00: stp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 115b04: stp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 115b08: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 115b0c: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 115b10: str x5, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 5));
  /* 115b14: add x26, sp, #0x64 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(100)));
  /* 115b18: str x1, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 115b1c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 115b20: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 115b24: ldr x8, [x8, #0xbc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3016))));
  /* 115b28: add x1, x4, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 4) + UINT64_C(48)));
  /* 115b2c: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 115b30: mov x23, x4 */
  ARC_X_W(c, 23, ARC_X_R(c, 4));
  /* 115b34: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 115b38: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 115b3c: sub x19, x29, #0x28 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 115b40: stp x26, x8, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 115b44: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137480));
  fn1_143460(c);
  /* 115b48: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 115b4c: ldr x28, [x28, #0xb40] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(2880))));
  /* 115b50: ldr x27, [sp, #0x40] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(64))));
  /* 115b54: ldar x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 115b58: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 115b5c: b.eq #0x115c18 */
  if (ARC_COND(c, 0)) goto L_115c18;
  /* 115b60: nop  */
  /* nop: no architectural effect here */
  /* 115b64: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 115b68: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137516));
  fn1_142518(c);
  /* 115b6c: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 115b70: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 115b74: b.ne #0x115ba0 */
  if (ARC_COND(c, 1)) goto L_115ba0;
  /* 115b78: nop  */
  /* nop: no architectural effect here */
  /* 115b7c: adr x24, #0x15791c */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 115b80: nop  */
  /* nop: no architectural effect here */
  /* 115b84: adr x25, #0x1578f4 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407220)));
L_115b88:;
  /* 115b88: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 115b8c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 115b90: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137556));
  fn1_142530(c);
  /* 115b94: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 115b98: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 115b9c: b.eq #0x115b88 */
  if (ARC_COND(c, 0)) goto L_115b88;
L_115ba0:;
  /* 115ba0: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 115ba4: cbz x8, #0x115bb8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_115bb8;
  /* 115ba8: nop  */
  /* nop: no architectural effect here */
  /* 115bac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 115bb0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137588));
  fn1_142560(c);
  /* 115bb4: b #0x115c18 */
  goto L_115c18;
L_115bb8:;
  /* 115bb8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 115bbc: str x28, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 28));
  /* 115bc0: sturb wzr, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 31));
  /* 115bc4: str x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 115bc8: nop  */
  /* nop: no architectural effect here */
  /* 115bcc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 115bd0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137620));
  fn1_142560(c);
  /* 115bd4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 115bd8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 115bdc: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 115be0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137636));
  fn1_a2030(c);
  /* 115be4: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 115be8: str w8, [x28, #8] */
  arc_st32((ARC_X_R(c, 28) + INT64_C(8)), ARC_W_R(c, 8));
  /* 115bec: nop  */
  /* nop: no architectural effect here */
  /* 115bf0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 115bf4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137656));
  fn1_142518(c);
  /* 115bf8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 115bfc: stlr x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 115c00: nop  */
  /* nop: no architectural effect here */
  /* 115c04: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 115c08: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137676));
  fn1_142560(c);
  /* 115c0c: nop  */
  /* nop: no architectural effect here */
  /* 115c10: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 115c14: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137688));
  fn1_142578(c);
L_115c18:;
  /* 115c18: ldp x8, x10, [x27, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 115c1c: ldrsw x9, [x28, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 28) + INT64_C(8)))));
  /* 115c20: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 115c24: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 115c28: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 115c2c: b.hs #0x116048 */
  if (ARC_COND(c, 2)) goto L_116048;
  /* 115c30: ldr x24, [x8, x9, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 115c34: cbz x24, #0x116048 */
  if ((ARC_X_R(c, 24)) == 0) goto L_116048;
  /* 115c38: ldr w4, [x23, #8] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 23) + INT64_C(8))));
  /* 115c3c: add x10, x26, #0x64 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) + UINT64_C(100)));
  /* 115c40: strb wzr, [sp, #0x3c] */
  arc_st8(((c)->sp + INT64_C(60)), ARC_W_R(c, 31));
  /* 115c44: ldr x5, [sp, #0x30] */
  ARC_X_W(c, 5, arc_ld64(((c)->sp + INT64_C(48))));
  /* 115c48: add x8, sp, #0x48 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(72)));
  /* 115c4c: add x9, sp, #0x50 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(80)));
  /* 115c50: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 115c54: and w2, w22, #1 */
  ARC_W_W(c, 2, (ARC_W_R(c, 22) & UINT64_C(1)));
  /* 115c58: add x3, sp, #0x40 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(64)));
  /* 115c5c: add x6, sp, #0x3c */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(60)));
  /* 115c60: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 115c64: mov x7, x24 */
  ARC_X_W(c, 7, ARC_X_R(c, 24));
  /* 115c68: stp x8, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 115c6c: str x9, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 9));
  /* 115c70: bl #0x143a00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137780));
  fn1_143a00(c);
  /* 115c74: sub x23, x29, #0x28 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 115c78: tbz w0, #0, #0x115f58 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_115f58;
  /* 115c7c: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 115c80: tbnz w8, #0, #0x115c8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115c8c;
  /* 115c84: strh wzr, [x21] */
  arc_st16(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 115c88: b #0x115c98 */
  goto L_115c98;
L_115c8c:;
  /* 115c8c: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 115c90: strb wzr, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 115c94: str xzr, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 31));
L_115c98:;
  /* 115c98: ldrb w8, [sp, #0x3c] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(60))));
  /* 115c9c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 115ca0: b.ne #0x115cc4 */
  if (ARC_COND(c, 1)) goto L_115cc4;
  /* 115ca4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 115ca8: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 115cac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 115cb0: mov w1, #0x2d */
  ARC_W_W(c, 1, UINT64_C(45));
  /* 115cb4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137848));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115cb8: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* 115cbc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 115cc0: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137860));
  fn1_142ba8(c);
L_115cc4:;
  /* 115cc4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 115cc8: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 115ccc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 115cd0: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 115cd4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1137880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115cd8: ldp x8, x22, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* 115cdc: sub x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 115ce0: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 115ce4: b.hs #0x115d04 */
  if (ARC_COND(c, 2)) goto L_115d04;
L_115ce8:;
  /* 115ce8: ldrb w10, [x22] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 22)));
  /* 115cec: cmp w10, w0, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 0))));
  /* 115cf0: b.ne #0x115d04 */
  if (ARC_COND(c, 1)) goto L_115d04;
  /* 115cf4: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 115cf8: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 115cfc: b.ne #0x115ce8 */
  if (ARC_COND(c, 1)) goto L_115ce8;
  /* 115d00: mov x22, x9 */
  ARC_X_W(c, 22, ARC_X_R(c, 9));
L_115d04:;
  /* 115d04: ldp x19, x9, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    ARC_X_W(c, 19, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115d08: ldrb w10, [x21] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 21)));
  /* 115d0c: lsr x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 115d10: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 115d14: mov w10, #0x16 */
  ARC_W_W(c, 10, UINT64_C(22));
  /* 115d18: and x12, x19, #0xfffffffffffffffe */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) & UINT64_C(18446744073709551614)));
  /* 115d1c: sub x27, x12, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* 115d20: csel x25, x11, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
  /* 115d24: csel x28, x10, x27, eq */
  ARC_X_W(c, 28, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 27)));
  /* 115d28: subs x24, x8, x22 */
  ARC_X_W(c, 24, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22)));
  /* 115d2c: b.eq #0x115f58 */
  if (ARC_COND(c, 0)) goto L_115f58;
  /* 115d30: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 115d34: tst x19, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 19) & UINT64_C(1)));
  /* 115d38: ubfx x10, x19, #1, #7 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 19)) >> 1) & UINT64_C(127)));
  /* 115d3c: csinc x23, x8, x21, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 21)) + 1)));
  /* 115d40: csel x26, x10, x9, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 115d44: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* 115d48: b.lo #0x115d88 */
  if (ARC_COND(c, 3)) goto L_115d88;
  /* 115d4c: add x9, x23, x26 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 26)));
  /* 115d50: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 115d54: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 115d58: b.hs #0x115d88 */
  if (ARC_COND(c, 2)) goto L_115d88;
  /* 115d5c: cmn x24, #8 */
  (void)arc_add64(c, ARC_X_R(c, 24), UINT64_C(8), 0);
  /* 115d60: b.hs #0x11604c */
  if (ARC_COND(c, 2)) goto L_11604c;
  /* 115d64: cmp x24, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 24), UINT64_C(22));
  /* 115d68: stp x9, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 115d6c: b.hi #0x115df0 */
  if (ARC_COND(c, 8)) goto L_115df0;
  /* 115d70: lsl w8, w24, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 24)) << ((UINT64_C(1)) & 31)));
  /* 115d74: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 115d78: sub x23, x29, #0x28 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 115d7c: orr x25, x9, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 115d80: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* 115d84: b #0x115e1c */
  goto L_115e1c;
L_115d88:;
  /* 115d88: sub x8, x28, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) - ARC_X_R(c, 25)));
  /* 115d8c: add x19, x25, x24 */
  ARC_X_W(c, 19, (ARC_X_R(c, 25) + ARC_X_R(c, 24)));
  /* 115d90: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* 115d94: b.hs #0x115de8 */
  if (ARC_COND(c, 2)) goto L_115de8;
  /* 115d98: mov x8, #-9 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551607));
  /* 115d9c: sub x9, x19, x28 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) - ARC_X_R(c, 28)));
  /* 115da0: sub x8, x8, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 28)));
  /* 115da4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 115da8: b.hi #0x11604c */
  if (ARC_COND(c, 8)) goto L_11604c;
  /* 115dac: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* 115db0: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* 115db4: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 115db8: b.hi #0x115ebc */
  if (ARC_COND(c, 8)) goto L_115ebc;
  /* 115dbc: lsl x8, x28, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 28)) << ((UINT64_C(1)) & 63)));
  /* 115dc0: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* 115dc4: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 115dc8: csel x8, x19, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 8)));
  /* 115dcc: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* 115dd0: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* 115dd4: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* 115dd8: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 115ddc: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* 115de0: csel x26, x8, x9, lo */
  ARC_X_W(c, 26, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 115de4: b #0x115ec0 */
  goto L_115ec0;
L_115de8:;
  /* 115de8: mov x27, x23 */
  ARC_X_W(c, 27, ARC_X_R(c, 23));
  /* 115dec: b #0x115f00 */
  goto L_115f00;
L_115df0:;
  /* 115df0: orr x8, x24, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(7)));
  /* 115df4: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 115df8: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 115dfc: csinc x28, x9, x8, eq */
  ARC_X_W(c, 28, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 115e00: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 115e04: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138184));
  fn1_1428f0(c);
  /* 115e08: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 115e0c: sub x23, x29, #0x28 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 115e10: orr x8, x28, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) | UINT64_C(1)));
  /* 115e14: stp x24, x0, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 115e18: str x8, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 8));
L_115e1c:;
  /* 115e1c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 115e20: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 115e24: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 115e28: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138220));
  fn1_1449d8(c);
  /* 115e2c: strb wzr, [x25, x24] */
  arc_st8((ARC_X_R(c, 25) + ARC_X_R(c, 24)), ARC_W_R(c, 31));
  /* 115e30: sub x10, x29, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 115e34: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 115e38: ldp x11, x9, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115e3c: ands w22, w8, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 22, _r); }
  /* 115e40: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 115e44: csinc x7, x9, x10, ne */
  ARC_X_W(c, 7, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 10)) + 1)));
  /* 115e48: csel x6, x8, x11, eq */
  ARC_X_W(c, 6, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 115e4c: tst x19, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 19) & UINT64_C(1)));
  /* 115e50: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* 115e54: csel x1, x8, x27, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 27)));
  /* 115e58: sub x8, x1, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 26)));
  /* 115e5c: cmp x8, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 6));
  /* 115e60: b.hs #0x115e8c */
  if (ARC_COND(c, 2)) goto L_115e8c;
  /* 115e64: sub x8, x26, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) - ARC_X_R(c, 1)));
  /* 115e68: add x2, x8, x6 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 6)));
  /* 115e6c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 115e70: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 115e74: mov x4, x26 */
  ARC_X_W(c, 4, ARC_X_R(c, 26));
  /* 115e78: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* 115e7c: bl #0x142b90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138304));
  fn1_142b90(c);
  /* 115e80: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 115e84: and w22, w8, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* 115e88: b #0x115f44 */
  goto L_115f44;
L_115e8c:;
  /* 115e8c: cbz x6, #0x115f44 */
  if ((ARC_X_R(c, 6)) == 0) goto L_115f44;
  /* 115e90: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 115e94: mov x1, x7 */
  ARC_X_W(c, 1, ARC_X_R(c, 7));
  /* 115e98: mov x2, x6 */
  ARC_X_W(c, 2, ARC_X_R(c, 6));
  /* 115e9c: mov x19, x6 */
  ARC_X_W(c, 19, ARC_X_R(c, 6));
  /* 115ea0: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138340));
  fn1_1449f0(c);
  /* 115ea4: ldrb w9, [x21] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 21)));
  /* 115ea8: add x8, x19, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 26)));
  /* 115eac: tbnz w9, #0, #0x115f38 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_115f38;
  /* 115eb0: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 115eb4: strb w9, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 9));
  /* 115eb8: b #0x115f3c */
  goto L_115f3c;
L_115ebc:;
  /* 115ebc: mov x26, #-9 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551607));
L_115ec0:;
  /* 115ec0: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 115ec4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138376));
  fn1_1428f0(c);
  /* 115ec8: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 115ecc: cbz x25, #0x115ee0 */
  if ((ARC_X_R(c, 25)) == 0) goto L_115ee0;
  /* 115ed0: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 115ed4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 115ed8: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* 115edc: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138400));
  fn1_1449f0(c);
L_115ee0:;
  /* 115ee0: add x1, x28, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* 115ee4: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* 115ee8: b.eq #0x115ef4 */
  if (ARC_COND(c, 0)) goto L_115ef4;
  /* 115eec: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 115ef0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138420));
  fn1_142608(c);
L_115ef4:;
  /* 115ef4: orr x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(1)));
  /* 115ef8: stp x25, x27, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 115efc: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
L_115f00:;
  /* 115f00: add x23, x27, x25 */
  ARC_X_W(c, 23, (ARC_X_R(c, 27) + ARC_X_R(c, 25)));
  /* 115f04: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 115f08: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 115f0c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 115f10: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138452));
  fn1_1449f0(c);
  /* 115f14: strb wzr, [x23, x24] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 24)), ARC_W_R(c, 31));
  /* 115f18: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 115f1c: tbnz w8, #0, #0x115f2c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_115f2c;
  /* 115f20: lsl w8, w19, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 19)) << ((UINT64_C(1)) & 31)));
  /* 115f24: strb w8, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 8));
  /* 115f28: b #0x115f30 */
  goto L_115f30;
L_115f2c:;
  /* 115f2c: str x19, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 19));
L_115f30:;
  /* 115f30: sub x23, x29, #0x28 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 115f34: b #0x115f58 */
  goto L_115f58;
L_115f38:;
  /* 115f38: str x8, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 8));
L_115f3c:;
  /* 115f3c: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 115f40: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_115f44:;
  /* 115f44: cbz w22, #0x115f58 */
  if ((ARC_W_R(c, 22)) == 0) goto L_115f58;
  /* 115f48: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 115f4c: ldr x0, [x23, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(24))));
  /* 115f50: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 115f54: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138520));
  fn1_142608(c);
L_115f58:;
  /* 115f58: ldr x0, [x23] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 23)));
  /* 115f5c: cbz x0, #0x115fb4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_115fb4;
  /* 115f60: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115f64: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115f68: b.eq #0x115f84 */
  if (ARC_COND(c, 0)) goto L_115f84;
  /* 115f6c: cbz x20, #0x115fdc */
  if ((ARC_X_R(c, 20)) == 0) goto L_115fdc;
  /* 115f70: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115f74: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115f78: b.ne #0x115fcc */
  if (ARC_COND(c, 1)) goto L_115fcc;
  /* 115f7c: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 115f80: b #0x116024 */
  goto L_116024;
L_115f84:;
  /* 115f84: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 115f88: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 115f8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138576));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 115f90: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 115f94: b.eq #0x115fb0 */
  if (ARC_COND(c, 0)) goto L_115fb0;
  /* 115f98: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 115f9c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 115fa0: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 115fa4: cbnz x20, #0x115fbc */
  if ((ARC_X_R(c, 20)) != 0) goto L_115fbc;
L_115fa8:;
  /* 115fa8: tbnz w19, #0, #0x115fcc */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_115fcc;
  /* 115fac: b #0x115fdc */
  goto L_115fdc;
L_115fb0:;
  /* 115fb0: str xzr, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 31));
L_115fb4:;
  /* 115fb4: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 115fb8: cbz x20, #0x115fa8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_115fa8;
L_115fbc:;
  /* 115fbc: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 115fc0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 115fc4: b.eq #0x116024 */
  if (ARC_COND(c, 0)) goto L_116024;
  /* 115fc8: tbnz w19, #0, #0x115fdc */
  if (((ARC_W_R(c, 19)) >> 0 & 1) != 0) goto L_115fdc;
L_115fcc:;
  /* 115fcc: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 115fd0: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* 115fd4: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 115fd8: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
L_115fdc:;
  /* 115fdc: ldr x19, [x23] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 23)));
  /* 115fe0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 115fe4: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138664));
  fn1_143478(c);
  /* 115fe8: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 115fec: str xzr, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 31));
  /* 115ff0: cbz x0, #0x115ffc */
  if ((ARC_X_R(c, 0)) == 0) goto L_115ffc;
  /* 115ff4: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
  /* 115ff8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138684));
  arc_dispatch(c, ARC_X_R(c, 8));
L_115ffc:;
  /* 115ffc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 116000: ldp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 116004: ldp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 116008: ldp x24, x23, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11600c: ldp x26, x25, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 116010: ldp x28, x27, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 116014: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 116018: add sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(336)));
  /* 11601c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 116020: ret  */
  return;
L_116024:;
  /* 116024: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 116028: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11602c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 116030: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138740));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 116034: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 116038: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 11603c: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 116040: tbz w8, #0, #0x115fcc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_115fcc;
  /* 116044: b #0x115fdc */
  goto L_115fdc;
L_116048:;
  /* 116048: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138764));
  fn1_fc3b8(c);
L_11604c:;
  /* 11604c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138768));
  fn1_d7d54(c);
  /* 116050: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 116054: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 116058: tbz w8, #0, #0x11609c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11609c;
  /* 11605c: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 116060: ldr x0, [x8, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 116064: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 116068: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11606c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138800));
  fn1_142608(c);
  /* 116070: b #0x11609c */
  goto L_11609c;
  /* 116074: b #0x116098 */
  goto L_116098;
  /* 116078: b #0x116098 */
  goto L_116098;
  /* 11607c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138816));
  fn1_a1454(c);
  /* 116080: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 116084: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 116088: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138828));
  fn1_d2a78(c);
  /* 11608c: b #0x11609c */
  goto L_11609c;
  /* 116090: b #0x116098 */
  goto L_116098;
  /* 116094: b #0x116098 */
  goto L_116098;
L_116098:;
  /* 116098: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_11609c:;
  /* 11609c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1160a0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138852));
  fn1_143478(c);
  /* 1160a4: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1160a8: str xzr, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 31));
  /* 1160ac: cbz x0, #0x1160b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1160b8;
  /* 1160b0: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
  /* 1160b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138872));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1160b8:;
  /* 1160b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1160bc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138880));
  fn1_9cc20(c);
  /* 1160c0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1138884));
  fn1_a1454(c);
}

void fn1_1210e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039111908));
  /* 1210e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1210e8: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1210ec: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 1210f0: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1210f4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1210f8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1210fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 121100: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 121104: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 121108: adrp x9, #0x14e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1368064)));
  /* 12110c: add x9, x9, #0x248 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(584)));
  /* 121110: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 121114: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 121118: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 12111c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 121120: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 121124: str x9, [x0, #0x118] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(280)), ARC_X_R(c, 9));
  /* 121128: add x9, x0, #0x118 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(280)));
  /* 12112c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 121130: str q0, [x8, #0x28]! */
  arc_st64((ARC_X_R(c, 8) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(40));
  /* 121134: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 121138: str x8, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12113c: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 121140: stur q0, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 121144: stur q0, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 121148: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 12114c: stur q0, [x0, #0x78] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* 121150: stur q0, [x0, #0x88] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* 121154: stur q0, [x0, #0x98] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(152)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(152)) + 8, (c)->q[0].u64[1]);
  /* 121158: stur q0, [x0, #0xa8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(168)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(168)) + 8, (c)->q[0].u64[1]);
  /* 12115c: stur q0, [x0, #0xb8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(184)) + 8, (c)->q[0].u64[1]);
  /* 121160: stur q0, [x0, #0xc8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(200)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(200)) + 8, (c)->q[0].u64[1]);
  /* 121164: stur q0, [x0, #0xd8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(216)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(216)) + 8, (c)->q[0].u64[1]);
  /* 121168: stur q0, [x0, #0xe8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(232)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(232)) + 8, (c)->q[0].u64[1]);
  /* 12116c: stur q0, [x0, #0xf8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)) + 8, (c)->q[0].u64[1]);
  /* 121170: str q0, [x8, #0xe0] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* 121174: stp x9, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 121178: ldrb w24, [x1, #0x120] */
  ARC_W_W(c, 24, arc_ld8((ARC_X_R(c, 1) + INT64_C(288))));
  /* 12117c: ldr x23, [x1, #0x128] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 1) + INT64_C(296))));
  /* 121180: ubfx w8, w24, #1, #7 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 24)) >> 1) & UINT64_C(127)));
  /* 121184: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* 121188: csel x8, x8, x23, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 23)));
  /* 12118c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 121190: b.ne #0x1211b0 */
  if (ARC_COND(c, 1)) goto L_1211b0;
  /* 121194: ldr x9, [x1, #0x130] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(304))));
  /* 121198: add x10, x1, #0x121 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) + UINT64_C(289)));
  /* 12119c: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* 1211a0: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1211a4: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1211a8: cmp w9, #0x2a */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(42));
  /* 1211ac: b.eq #0x121224 */
  if (ARC_COND(c, 0)) goto L_121224;
L_1211b0:;
  /* 1211b0: ldrb w9, [x22] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 22)));
  /* 1211b4: ldr x10, [x22, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* 1211b8: ubfx w11, w9, #1, #7 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 1211bc: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1211c0: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 1211c4: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* 1211c8: b.ne #0x1211e4 */
  if (ARC_COND(c, 1)) goto L_1211e4;
  /* 1211cc: ldr x11, [x22, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1211d0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1211d4: csinc x11, x11, x22, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 22)) + 1)));
  /* 1211d8: ldrb w11, [x11] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 11)));
  /* 1211dc: cmp w11, #0x2a */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(42));
  /* 1211e0: b.eq #0x121224 */
  if (ARC_COND(c, 0)) goto L_121224;
L_1211e4:;
  /* 1211e4: cbz w21, #0x1216ac */
  if ((ARC_W_R(c, 21)) == 0) goto L_1216ac;
  /* 1211e8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1211ec: b.ne #0x121224 */
  if (ARC_COND(c, 1)) goto L_121224;
  /* 1211f0: ldr x10, [x1, #0x130] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(304))));
  /* 1211f4: add x11, x1, #0x121 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(289)));
  /* 1211f8: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* 1211fc: ldr x12, [x22, #0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 121200: mov x25, x1 */
  ARC_X_W(c, 25, ARC_X_R(c, 1));
  /* 121204: mov x2, x8 */
  ARC_X_W(c, 2, ARC_X_R(c, 8));
  /* 121208: csel x0, x11, x10, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 12120c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 121210: csinc x9, x12, x22, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 12)) : ((ARC_X_R(c, 22)) + 1)));
  /* 121214: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 121218: bl #0x142890 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184284));
  fn1_142890(c);
  /* 12121c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 121220: cbz w0, #0x1216ac */
  if ((ARC_W_R(c, 0)) == 0) goto L_1216ac;
L_121224:;
  /* 121224: mov w8, #0x2a02 */
  ARC_W_W(c, 8, UINT64_C(10754));
  /* 121228: strb wzr, [x20, #0x122] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(290)), ARC_W_R(c, 31));
  /* 12122c: strh w8, [x20, #0x120] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(288)), ARC_W_R(c, 8));
L_121230:;
  /* 121230: cmp x20, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 1));
  /* 121234: b.eq #0x121250 */
  if (ARC_COND(c, 0)) goto L_121250;
  /* 121238: ldp x8, x2, [x1, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 12123c: sub x9, x2, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - ARC_X_R(c, 8)));
  /* 121240: asr x3, x9, #3 */
  ARC_X_W(c, 3, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 121244: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 121248: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 12124c: bl #0x135150 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184336));
  fn1_135150(c);
L_121250:;
  /* 121250: ldp x9, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 121254: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 121258: b.eq #0x121298 */
  if (ARC_COND(c, 0)) goto L_121298;
  /* 12125c: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* 121260: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 121264: b #0x12127c */
  goto L_12127c;
L_121268:;
  /* 121268: mov w10, w23 */
  ARC_W_W(c, 10, ARC_W_R(c, 23));
  /* 12126c: sub x11, x8, x9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 121270: add w23, w23, #1 */
  ARC_W_W(c, 23, (ARC_W_R(c, 23) + UINT64_C(1)));
  /* 121274: cmp x10, x11, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 3)));
  /* 121278: b.hs #0x121298 */
  if (ARC_COND(c, 2)) goto L_121298;
L_12127c:;
  /* 12127c: ldr x10, [x9, x10, lsl #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* 121280: cbz x10, #0x121268 */
  if ((ARC_X_R(c, 10)) == 0) goto L_121268;
  /* 121284: add x1, x10, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* 121288: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12128c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184400));
  fn1_db2e0(c);
  /* 121290: ldp x9, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 121294: b #0x121268 */
  goto L_121268;
L_121298:;
  /* 121298: tbz w21, #3, #0x1212e4 */
  if (((ARC_W_R(c, 21)) >> 3 & 1) == 0) goto L_1212e4;
  /* 12129c: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 1212a0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184420));
  fn1_1428f0(c);
  /* 1212a4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1212a8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1212ac: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1212b0: bl #0x143e68 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184436));
  fn1_143e68(c);
  /* 1212b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1212b8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1212bc: bl #0x11e5bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184448));
  fn1_11e5bc(c);
  /* 1212c0: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 1212c4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184456));
  fn1_1428f0(c);
  /* 1212c8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1212cc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1212d0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1212d4: bl #0x143e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184472));
  fn1_143e98(c);
  /* 1212d8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1212dc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1212e0: bl #0x11e78c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184484));
  fn1_11e78c(c);
L_1212e4:;
  /* 1212e4: tbz w21, #0, #0x121438 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_121438;
  /* 1212e8: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* 1212ec: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184496));
  fn1_1428f0(c);
  /* 1212f0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1212f4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1212f8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1212fc: bl #0x143f28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184512));
  fn1_143f28(c);
  /* 121300: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121304: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 121308: bl #0x11e95c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184524));
  fn1_11e95c(c);
  /* 12130c: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 121310: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184532));
  fn1_1428f0(c);
  /* 121314: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 121318: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 12131c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 121320: bl #0x143f58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184548));
  fn1_143f58(c);
  /* 121324: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121328: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 12132c: bl #0x11eb2c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184560));
  fn1_11eb2c(c);
  /* 121330: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 121334: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184568));
  fn1_1428f0(c);
  /* 121338: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 12133c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121340: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 121344: ldr x8, [x8, #0xe08] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3592))));
  /* 121348: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12134c: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 121350: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121354: bl #0x11ecfc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184600));
  fn1_11ecfc(c);
  /* 121358: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 12135c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184608));
  fn1_1428f0(c);
  /* 121360: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 121364: ldr x9, [x22, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 121368: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12136c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 121370: csinc x1, x9, x22, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 22)) + 1)));
  /* 121374: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 121378: bl #0x143b38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184636));
  fn1_143b38(c);
  /* 12137c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121380: ldr x8, [x8, #0xe10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3600))));
  /* 121384: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 121388: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 12138c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121390: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 121394: bl #0x11eecc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184664));
  fn1_11eecc(c);
  /* 121398: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 12139c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184672));
  fn1_1428f0(c);
  /* 1213a0: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1213a4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1213a8: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 1213ac: ldr x8, [x8, #0xe18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3608))));
  /* 1213b0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1213b4: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1213b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1213bc: bl #0x11f09c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184704));
  fn1_11f09c(c);
  /* 1213c0: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 1213c4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184712));
  fn1_1428f0(c);
  /* 1213c8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1213cc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1213d0: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 1213d4: ldr x8, [x8, #0xe20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3616))));
  /* 1213d8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1213dc: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1213e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1213e4: bl #0x11f26c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184744));
  fn1_11f26c(c);
  /* 1213e8: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 1213ec: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184752));
  fn1_1428f0(c);
  /* 1213f0: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1213f4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1213f8: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 1213fc: ldr x8, [x8, #0xe28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3624))));
  /* 121400: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 121404: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 121408: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12140c: bl #0x11f43c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184784));
  fn1_11f43c(c);
  /* 121410: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 121414: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184792));
  fn1_1428f0(c);
  /* 121418: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 12141c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121420: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 121424: ldr x8, [x8, #0xe30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3632))));
  /* 121428: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12142c: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 121430: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121434: bl #0x11f60c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184824));
  fn1_11f60c(c);
L_121438:;
  /* 121438: tbz w21, #4, #0x1214bc */
  if (((ARC_W_R(c, 21)) >> 4 & 1) == 0) goto L_1214bc;
  /* 12143c: mov w0, #0x88 */
  ARC_W_W(c, 0, UINT64_C(136));
  /* 121440: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184836));
  fn1_1428f0(c);
  /* 121444: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 121448: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12144c: bl #0x11fd4c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184848));
  fn1_11fd4c(c);
  /* 121450: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121454: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 121458: bl #0x11fb7c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184860));
  fn1_11fb7c(c);
  /* 12145c: mov w0, #0x88 */
  ARC_W_W(c, 0, UINT64_C(136));
  /* 121460: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184868));
  fn1_1428f0(c);
  /* 121464: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 121468: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12146c: bl #0x12001c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184880));
  fn1_12001c(c);
  /* 121470: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121474: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 121478: bl #0x11fe4c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184892));
  fn1_11fe4c(c);
  /* 12147c: mov w0, #0x88 */
  ARC_W_W(c, 0, UINT64_C(136));
  /* 121480: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184900));
  fn1_1428f0(c);
  /* 121484: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 121488: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12148c: bl #0x1202ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184912));
  fn1_1202ec(c);
  /* 121490: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121494: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 121498: bl #0x12011c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184924));
  fn1_12011c(c);
  /* 12149c: mov w0, #0x88 */
  ARC_W_W(c, 0, UINT64_C(136));
  /* 1214a0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184932));
  fn1_1428f0(c);
  /* 1214a4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1214a8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1214ac: bl #0x120560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184944));
  fn1_120560(c);
  /* 1214b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1214b4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1214b8: bl #0x120390 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184956));
  fn1_120390(c);
L_1214bc:;
  /* 1214bc: tbz w21, #1, #0x121508 */
  if (((ARC_W_R(c, 21)) >> 1 & 1) == 0) goto L_121508;
  /* 1214c0: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 1214c4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184968));
  fn1_1428f0(c);
  /* 1214c8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1214cc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1214d0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1214d4: bl #0x144168 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184984));
  fn1_144168(c);
  /* 1214d8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1214dc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1214e0: bl #0x11f7dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1184996));
  fn1_11f7dc(c);
  /* 1214e4: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 1214e8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185004));
  fn1_1428f0(c);
  /* 1214ec: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1214f0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1214f4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1214f8: bl #0x144198 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185020));
  fn1_144198(c);
  /* 1214fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121500: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 121504: bl #0x11f9ac */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185032));
  fn1_11f9ac(c);
L_121508:;
  /* 121508: tbz w21, #2, #0x12163c */
  if (((ARC_W_R(c, 21)) >> 2 & 1) == 0) goto L_12163c;
  /* 12150c: mov w0, #0x440 */
  ARC_W_W(c, 0, UINT64_C(1088));
  /* 121510: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185044));
  fn1_1428f0(c);
  /* 121514: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121518: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12151c: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 121520: ldr x8, [x8, #0xd48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3400))));
  /* 121524: add x10, x8, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 121528: add x8, x8, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(112)));
  /* 12152c: stp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 121530: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* 121534: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 121538: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 12153c: bl #0x143c70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185088));
  fn1_143c70(c);
  /* 121540: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121544: ldr x8, [x8, #0xd58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3416))));
  /* 121548: add x9, x8, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12154c: add x8, x8, #0xa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(168)));
  /* 121550: str x9, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 121554: str x8, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 8));
  /* 121558: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12155c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 121560: bl #0x120604 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185124));
  fn1_120604(c);
  /* 121564: mov w0, #0x440 */
  ARC_W_W(c, 0, UINT64_C(1088));
  /* 121568: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185132));
  fn1_1428f0(c);
  /* 12156c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121570: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 121574: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 121578: ldr x8, [x8, #0xd50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3408))));
  /* 12157c: add x10, x8, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 121580: add x8, x8, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(112)));
  /* 121584: stp x10, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 121588: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* 12158c: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 121590: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 121594: bl #0x143ca0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185176));
  fn1_143ca0(c);
  /* 121598: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12159c: ldr x8, [x8, #0xd60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))));
  /* 1215a0: add x9, x8, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1215a4: add x8, x8, #0xa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(168)));
  /* 1215a8: str x9, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 1215ac: str x8, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 8));
  /* 1215b0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1215b4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1215b8: bl #0x1207d4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185212));
  fn1_1207d4(c);
  /* 1215bc: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 1215c0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185220));
  fn1_1428f0(c);
  /* 1215c4: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1215c8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1215cc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1215d0: ldr x24, [x24, #0xce0] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3296))));
  /* 1215d4: add x9, x24, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* 1215d8: stp x9, x8, [x0], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1215dc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1215e0: bl #0x143ce8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185252));
  fn1_143ce8(c);
  /* 1215e4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1215e8: ldr x8, [x8, #0xd78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3448))));
  /* 1215ec: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1215f0: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1215f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1215f8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1215fc: bl #0x1209a4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185280));
  fn1_1209a4(c);
  /* 121600: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 121604: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185288));
  fn1_1428f0(c);
  /* 121608: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12160c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 121610: add x9, x24, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* 121614: stp x9, x8, [x0], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 121618: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 12161c: bl #0x143ce8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185312));
  fn1_143ce8(c);
  /* 121620: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121624: ldr x8, [x8, #0xd80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3456))));
  /* 121628: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12162c: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 121630: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121634: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 121638: bl #0x120b74 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185340));
  fn1_120b74(c);
L_12163c:;
  /* 12163c: tbz w21, #5, #0x121690 */
  if (((ARC_W_R(c, 21)) >> 5 & 1) == 0) goto L_121690;
  /* 121640: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 121644: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185352));
  fn1_1428f0(c);
  /* 121648: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 12164c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121650: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 121654: ldr x8, [x8, #0xdf8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3576))));
  /* 121658: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12165c: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 121660: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 121664: bl #0x120d44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185384));
  fn1_120d44(c);
  /* 121668: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 12166c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185392));
  fn1_1428f0(c);
  /* 121670: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 121674: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 121678: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 12167c: ldr x8, [x8, #0xe00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3584))));
  /* 121680: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 121684: stp x8, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 121688: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12168c: bl #0x120f14 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185424));
  fn1_120f14(c);
L_121690:;
  /* 121690: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 121694: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 121698: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12169c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1216a0: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1216a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1216a8: ret  */
  return;
L_1216ac:;
  /* 1216ac: tbnz w24, #0, #0x1216c4 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_1216c4;
  /* 1216b0: ldr x8, [x1, #0x130] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(304))));
  /* 1216b4: ldr q0, [x1, #0x120] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 1) + INT64_C(288))), arc_ld64((ARC_X_R(c, 1) + INT64_C(288)) + 8));
  /* 1216b8: str x8, [x20, #0x130] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(304)), ARC_X_R(c, 8));
  /* 1216bc: str q0, [x20, #0x120] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* 1216c0: b #0x121230 */
  goto L_121230;
L_1216c4:;
  /* 1216c4: ldr x8, [x1, #0x130] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(304))));
  /* 1216c8: add x0, x20, #0x120 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(288)));
  /* 1216cc: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 1216d0: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1216d4: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 1216d8: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185500));
  fn1_da588(c);
  /* 1216dc: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1216e0: b #0x121230 */
  goto L_121230;
  /* 1216e4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1216e8: b #0x12180c */
  goto L_12180c;
  /* 1216ec: b #0x121764 */
  goto L_121764;
  /* 1216f0: b #0x121764 */
  goto L_121764;
  /* 1216f4: b #0x1216f8 */
  goto L_1216f8;
L_1216f8:;
  /* 1216f8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1216fc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 121700: mov w1, #0x440 */
  ARC_W_W(c, 1, UINT64_C(1088));
  /* 121704: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185544));
  fn1_142608(c);
  /* 121708: b #0x121784 */
  goto L_121784;
  /* 12170c: b #0x121714 */
  goto L_121714;
  /* 121710: b #0x121730 */
  goto L_121730;
L_121714:;
  /* 121714: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 121718: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12171c: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 121720: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185572));
  fn1_142608(c);
  /* 121724: b #0x121784 */
  goto L_121784;
  /* 121728: b #0x121730 */
  goto L_121730;
  /* 12172c: b #0x121730 */
  goto L_121730;
L_121730:;
  /* 121730: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 121734: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 121738: mov w1, #0x88 */
  ARC_W_W(c, 1, UINT64_C(136));
  /* 12173c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185600));
  fn1_142608(c);
  /* 121740: b #0x121784 */
  goto L_121784;
  /* 121744: b #0x121764 */
  goto L_121764;
  /* 121748: b #0x121764 */
  goto L_121764;
  /* 12174c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 121750: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 121754: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* 121758: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185628));
  fn1_142608(c);
  /* 12175c: b #0x121784 */
  goto L_121784;
  /* 121760: b #0x121764 */
  goto L_121764;
L_121764:;
  /* 121764: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 121768: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12176c: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 121770: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185652));
  fn1_142608(c);
  /* 121774: b #0x121784 */
  goto L_121784;
  /* 121778: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12177c: b #0x1217f4 */
  goto L_1217f4;
  /* 121780: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_121784:;
  /* 121784: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 121788: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185676));
  fn1_142548(c);
  /* 12178c: ldp x8, x9, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 121790: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 121794: b.ne #0x12179c */
  if (ARC_COND(c, 1)) goto L_12179c;
L_121798:;
  /* 121798: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185692));
  fn1_1429b0(c);
L_12179c:;
  /* 12179c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 1217a0: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 1217a4: b #0x1217c0 */
  goto L_1217c0;
L_1217a8:;
  /* 1217a8: ldp x8, x10, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1217ac: mov w9, w22 */
  ARC_W_W(c, 9, ARC_W_R(c, 22));
  /* 1217b0: add w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) + UINT64_C(1)));
  /* 1217b4: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1217b8: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 1217bc: b.hs #0x121798 */
  if (ARC_COND(c, 2)) goto L_121798;
L_1217c0:;
  /* 1217c0: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1217c4: cbz x21, #0x1217a8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1217a8;
  /* 1217c8: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 1217cc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1217d0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185748));
  fn1_bd950(c);
  /* 1217d4: cbnz x0, #0x1217a8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1217a8;
  /* 1217d8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1217dc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1217e0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1217e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1217e8: b #0x1217a8 */
  goto L_1217a8;
  /* 1217ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1217f0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185780));
  fn1_142980(c);
L_1217f4:;
  /* 1217f4: ldrb w8, [x20, #0x120] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(288))));
  /* 1217f8: tbz w8, #0, #0x12180c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12180c;
  /* 1217fc: ldr x8, [x20, #0x120] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(288))));
  /* 121800: ldr x0, [x20, #0x130] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(304))));
  /* 121804: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 121808: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185804));
  fn1_142608(c);
L_12180c:;
  /* 12180c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 121810: bl #0x11de44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185812));
  fn1_11de44(c);
  /* 121814: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 121818: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185820));
  fn1_9cc20(c);
  /* 12181c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1185824));
  fn1_a1454(c);
}

void fn1_1270fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039136508));
  /* 1270fc: bti c */
  /* bti: no architectural effect here */
  /* 127100: and w8, w1, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* 127104: eor w9, w1, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) ^ UINT64_C(32)));
  /* 127108: sub w8, w8, #0x7b */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(123)));
  /* 12710c: cmn w8, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(26), 0);
  /* 127110: csel w0, w1, w9, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 1)) : ARC_W_R(c, 9)));
  /* 127114: ret  */
  return;
}

void fn1_1297b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039146420));
  /* 1297b4: bti c */
  /* bti: no architectural effect here */
  /* 1297b8: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 1297bc: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 1297c0: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 1297c4: mov w3, #0x10ffff */
  ARC_W_W(c, 3, UINT64_C(1114111));
  /* 1297c8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1297cc: b #0x1297d0 */
  fn1_1297d0(c); return;
}

void fn1_12aec0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039152320));
  /* 12aec0: bti c */
  /* bti: no architectural effect here */
  /* 12aec4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12aec8: ret  */
  return;
}

void fn1_12c650(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039158352));
  /* 12c650: bti c */
  /* bti: no architectural effect here */
  /* 12c654: tbz w3, #0xb, #0x12c67c */
  if (((ARC_W_R(c, 3)) >> 11 & 1) == 0) goto L_12c67c;
  /* 12c658: mov w8, #0x4a */
  ARC_W_W(c, 8, UINT64_C(74));
  /* 12c65c: and w8, w3, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & ARC_W_R(c, 8)));
  /* 12c660: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 12c664: b.eq #0x12c67c */
  if (ARC_COND(c, 0)) goto L_12c67c;
  /* 12c668: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 12c66c: b.eq #0x12c67c */
  if (ARC_COND(c, 0)) goto L_12c67c;
  /* 12c670: tbz w2, #0, #0x12c67c */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_12c67c;
  /* 12c674: mov w8, #0x2b */
  ARC_W_W(c, 8, UINT64_C(43));
  /* 12c678: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
L_12c67c:;
  /* 12c67c: tbz w3, #9, #0x12c688 */
  if (((ARC_W_R(c, 3)) >> 9 & 1) == 0) goto L_12c688;
  /* 12c680: mov w8, #0x23 */
  ARC_W_W(c, 8, UINT64_C(35));
  /* 12c684: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
L_12c688:;
  /* 12c688: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 12c68c: cbz w8, #0x12c6a0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_12c6a0;
  /* 12c690: add x9, x1, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) + UINT64_C(1)));
L_12c694:;
  /* 12c694: strb w8, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* 12c698: ldrb w8, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* 12c69c: cbnz w8, #0x12c694 */
  if ((ARC_W_R(c, 8)) != 0) goto L_12c694;
L_12c6a0:;
  /* 12c6a0: mov w8, #0x4a */
  ARC_W_W(c, 8, UINT64_C(74));
  /* 12c6a4: and w8, w3, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & ARC_W_R(c, 8)));
  /* 12c6a8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 12c6ac: b.eq #0x12c6d0 */
  if (ARC_COND(c, 0)) goto L_12c6d0;
  /* 12c6b0: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 12c6b4: b.ne #0x12c6dc */
  if (ARC_COND(c, 1)) goto L_12c6dc;
  /* 12c6b8: tst w3, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 3) & UINT64_C(16384)));
  /* 12c6bc: mov w8, #0x58 */
  ARC_W_W(c, 8, UINT64_C(88));
  /* 12c6c0: mov w9, #0x78 */
  ARC_W_W(c, 9, UINT64_C(120));
  /* 12c6c4: csel w8, w9, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12c6c8: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 12c6cc: ret  */
  return;
L_12c6d0:;
  /* 12c6d0: mov w8, #0x6f */
  ARC_W_W(c, 8, UINT64_C(111));
  /* 12c6d4: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 12c6d8: ret  */
  return;
L_12c6dc:;
  /* 12c6dc: tst w2, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 2) & UINT64_C(1)));
  /* 12c6e0: mov w8, #0x75 */
  ARC_W_W(c, 8, UINT64_C(117));
  /* 12c6e4: mov w9, #0x64 */
  ARC_W_W(c, 9, UINT64_C(100));
  /* 12c6e8: csel w8, w9, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12c6ec: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 12c6f0: ret  */
  return;
}

void fn1_1349b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191984));
  /* 1349b0: bti c */
  /* bti: no architectural effect here */
  /* 1349b4: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1349b8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1350f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193840));
  /* 1350f0: bti c */
  /* bti: no architectural effect here */
  /* 1350f4: ret  */
  return;
}

void fn1_13814c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206220));
  /* 13814c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138150: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138154: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 138158: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13815c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138160: ldr x8, [x8, #0xe48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3656))));
  /* 138164: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 138168: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 13816c: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138170: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 138174: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* 138178: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13817c: str x8, [x19, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(112));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 138180: str x10, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* 138184: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278344));
  fn1_144558(c);
  /* 138188: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13818c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 138190: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138194: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138198: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_13be2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039221804));
  /* 13be2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13be30: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 13be34: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13be38: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 13be3c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 13be40: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 13be44: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13be48: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* 13be4c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13be50: bl #0x13beb4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1293908));
  fn1_13beb4(c);
  /* 13be54: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13be58: tbnz w8, #0, #0x13be70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13be70;
  /* 13be5c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13be60: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13be64: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 13be68: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13be6c: ret  */
  return;
L_13be70:;
  /* 13be70: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13be74: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13be78: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13be7c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13be80: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13be84: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 13be88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13be8c: b #0x142608 */
  fn1_142608(c); return;
  /* 13be90: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13be94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13be98: tbz w8, #0, #0x13beac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13beac;
  /* 13be9c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13bea0: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13bea4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13bea8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1293996));
  fn1_142608(c);
L_13beac:;
  /* 13beac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13beb0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294004));
  fn1_9cc20(c);
}

void fn1_1424b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248056));
  /* 1424b8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1424bc: ldr x17, [x16, #0xec8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3784))));
  /* 1424c0: add x16, x16, #0xec8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3784)));
  /* 1424c4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1424c8: nop  */
  /* nop: no architectural effect here */
  /* 1424cc: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ab8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249592));
  /* 142ab8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142abc: ldr x17, [x16, #0xc8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(200))));
  /* 142ac0: add x16, x16, #0xc8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(200)));
  /* 142ac4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142ac8: nop  */
  /* nop: no architectural effect here */
  /* 142acc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1430b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251128));
  /* 1430b8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1430bc: ldr x17, [x16, #0x2c8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(712))));
  /* 1430c0: add x16, x16, #0x2c8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(712)));
  /* 1430c4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1430c8: nop  */
  /* nop: no architectural effect here */
  /* 1430cc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1436b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252664));
  /* 1436b8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1436bc: ldr x17, [x16, #0x4c8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1224))));
  /* 1436c0: add x16, x16, #0x4c8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1224)));
  /* 1436c4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1436c8: nop  */
  /* nop: no architectural effect here */
  /* 1436cc: nop  */
  /* nop: no architectural effect here */
}

void fn1_143cb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254200));
  /* 143cb8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143cbc: ldr x17, [x16, #0x6c8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1736))));
  /* 143cc0: add x16, x16, #0x6c8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1736)));
  /* 143cc4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143cc8: nop  */
  /* nop: no architectural effect here */
  /* 143ccc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1442b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255736));
  /* 1442b8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1442bc: ldr x17, [x16, #0x8c8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2248))));
  /* 1442c0: add x16, x16, #0x8c8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2248)));
  /* 1442c4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1442c8: nop  */
  /* nop: no architectural effect here */
  /* 1442cc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1448b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257272));
  /* 1448b8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1448bc: ldr x17, [x16, #0xac8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2760))));
  /* 1448c0: add x16, x16, #0xac8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2760)));
  /* 1448c4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1448c8: nop  */
  /* nop: no architectural effect here */
  /* 1448cc: nop  */
  /* nop: no architectural effect here */
}

