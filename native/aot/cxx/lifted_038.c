#include "lifted.h"

void fn1_9d96c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038573420));
  /* 9d96c: bti c */
  /* bti: no architectural effect here */
  /* 9d970: ldrb w0, [x0, #0x269] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(617))));
  /* 9d974: ret  */
  return;
}

void fn1_a1f34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591284));
  /* a1f34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1f38: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1f3c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a1f40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1f44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a1f48: bl #0x1425d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663372));
  fn1_1425d8(c);
  /* a1f4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1f50: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* a1f54: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a1f58: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1f5c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1f60: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a3a58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038598232));
  /* a3a58: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a3a5c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a3a60: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* a3a64: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a3a68: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a3a6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a3a70: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* a3a74: mov w20, w3 */
  ARC_W_W(c, 20, ARC_W_R(c, 3));
  /* a3a78: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* a3a7c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a3a80: tbz w4, #0, #0xa3ac4 */
  if (((ARC_W_R(c, 4)) >> 0 & 1) == 0) goto L_a3ac4;
  /* a3a84: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a3a88: b.eq #0xa3b38 */
  if (ARC_COND(c, 0)) goto L_a3b38;
  /* a3a8c: ldr x22, [x0, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a3a90: ldr x1, [x8, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3a94: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a3a98: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a3a9c: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(670368));
  fn1_142848(c);
  /* a3aa0: cbz w0, #0xa3b38 */
  if ((ARC_W_R(c, 0)) == 0) goto L_a3b38;
  /* a3aa4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* a3aa8: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* a3aac: b.eq #0xa3ae4 */
  if (ARC_COND(c, 0)) goto L_a3ae4;
  /* a3ab0: ldr x1, [x8, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3ab4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a3ab8: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(670396));
  fn1_142848(c);
  /* a3abc: cbnz w0, #0xa3b68 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a3b68;
  /* a3ac0: b #0xa3ae4 */
  goto L_a3ae4;
L_a3ac4:;
  /* a3ac4: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a3ac8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3acc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a3ad0: b.eq #0xa3b38 */
  if (ARC_COND(c, 0)) goto L_a3b38;
  /* a3ad4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* a3ad8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3adc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a3ae0: b.ne #0xa3b68 */
  if (ARC_COND(c, 1)) goto L_a3b68;
L_a3ae4:;
  /* a3ae4: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a3ae8: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a3aec: b.eq #0xa3b58 */
  if (ARC_COND(c, 0)) goto L_a3b58;
  /* a3af0: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* a3af4: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a3af8: b.eq #0xa3b58 */
  if (ARC_COND(c, 0)) goto L_a3b58;
  /* a3afc: ldp w9, w8, [x19, #0x3c] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(60));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* a3b00: str w20, [x19, #0x38] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(56)), ARC_W_R(c, 20));
  /* a3b04: str x21, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 21));
  /* a3b08: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* a3b0c: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* a3b10: str w8, [x19, #0x40] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 8));
  /* a3b14: b.ne #0xa3b2c */
  if (ARC_COND(c, 1)) goto L_a3b2c;
  /* a3b18: ldr w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(48))));
  /* a3b1c: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a3b20: b.ne #0xa3b2c */
  if (ARC_COND(c, 1)) goto L_a3b2c;
  /* a3b24: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3b28: strb w8, [x19, #0x4e] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(78)), ARC_W_R(c, 8));
L_a3b2c:;
  /* a3b2c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* a3b30: str w8, [x19, #0x44] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(68)), ARC_W_R(c, 8));
  /* a3b34: b #0xa3b68 */
  goto L_a3b68;
L_a3b38:;
  /* a3b38: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a3b3c: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a3b40: b.ne #0xa3b68 */
  if (ARC_COND(c, 1)) goto L_a3b68;
  /* a3b44: ldr w8, [x19, #0x34] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(52))));
  /* a3b48: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3b4c: b.eq #0xa3b68 */
  if (ARC_COND(c, 0)) goto L_a3b68;
  /* a3b50: str w20, [x19, #0x34] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(52)), ARC_W_R(c, 20));
  /* a3b54: b #0xa3b68 */
  goto L_a3b68;
L_a3b58:;
  /* a3b58: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* a3b5c: b.ne #0xa3b68 */
  if (ARC_COND(c, 1)) goto L_a3b68;
  /* a3b60: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3b64: str w8, [x19, #0x38] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(56)), ARC_W_R(c, 8));
L_a3b68:;
  /* a3b68: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a3b6c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* a3b70: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a3b74: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a3b78: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a3b7c: ret  */
  return;
}

void fn1_aa5f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038625776));
  /* aa5f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa5f4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa5f8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa5fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa600: ldrb w20, [x0, #0x20] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* aa604: tbnz w20, #0, #0xaa628 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_aa628;
  /* aa608: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* aa60c: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* aa610: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* aa614: strb w8, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* aa618: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* aa61c: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* aa620: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697892));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* aa624: strb w20, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
L_aa628:;
  /* aa628: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa62c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa630: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa634: ret  */
  return;
  /* aa638: strb w20, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* aa63c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697920));
  fn1_9cc20(c);
}

void fn1_b1b2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038655788));
  /* b1b2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b1b30: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b1b34: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b1b38: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b1b3c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b1b40: ldrb w21, [x0, #0xb] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 0) + INT64_C(11))));
  /* b1b44: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* b1b48: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b1b4c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b1b50: cmp w21, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(0));
  /* b1b54: cinc x20, x9, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
  /* b1b58: ldp x8, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b1b5c: add x10, x20, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b1b60: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b1b64: b.ls #0xb1b8c */
  if (ARC_COND(c, 9)) goto L_b1b8c;
  /* b1b68: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b1b6c: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* b1b70: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b1b74: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b1b78: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b1b7c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727936));
  fn1_142878(c);
  /* b1b80: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b1b84: cbz x0, #0xb1bd0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1bd0;
  /* b1b88: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b1b8c:;
  /* b1b8c: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* b1b90: add x9, x9, #0x6bd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1725)));
  /* b1b94: cmp w21, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(0));
  /* b1b98: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* b1b9c: add x10, x10, #0xc54 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3156)));
  /* b1ba0: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b1ba4: csel x1, x10, x9, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b1ba8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* b1bac: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727984));
  fn1_1449d8(c);
  /* b1bb0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b1bb4: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* b1bb8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b1bbc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b1bc0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b1bc4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b1bc8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b1bcc: ret  */
  return;
L_b1bd0:;
  /* b1bd0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(728020));
  fn1_1427b8(c);
}

void fn1_b5d68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038672744));
  /* b5d68: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b5d6c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b5d70: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b5d74: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b5d78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b5d7c: ldr x21, [x0, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b5d80: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b5d84: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b5d88: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b5d8c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b5d90: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b5d94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744856));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5d98: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b5d9c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b5da0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b5da4: b.eq #0xb5dbc */
  if (ARC_COND(c, 0)) goto L_b5dbc;
  /* b5da8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b5dac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b5db0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5db4: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b5db8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744892));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b5dbc:;
  /* b5dbc: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b5dc0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5dc4: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b5dc8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b5dcc: b.ls #0xb5df4 */
  if (ARC_COND(c, 9)) goto L_b5df4;
  /* b5dd0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b5dd4: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* b5dd8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5ddc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5de0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5de4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744936));
  fn1_142878(c);
  /* b5de8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5dec: cbz x0, #0xb6054 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6054;
  /* b5df0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b5df4:;
  /* b5df4: mov w9, #0x3c2e */
  ARC_W_W(c, 9, UINT64_C(15406));
  /* b5df8: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5dfc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5e00: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5e04: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b5e08: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b5e0c: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* b5e10: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b5e14: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b5e18: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b5e1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(744992));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5e20: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b5e24: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b5e28: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b5e2c: b.eq #0xb5e44 */
  if (ARC_COND(c, 0)) goto L_b5e44;
  /* b5e30: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b5e34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b5e38: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5e3c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b5e40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745028));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b5e44:;
  /* b5e44: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b5e48: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5e4c: add x10, x8, #0xb */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(11)));
  /* b5e50: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b5e54: b.ls #0xb5e7c */
  if (ARC_COND(c, 9)) goto L_b5e7c;
  /* b5e58: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b5e5c: add x8, x8, #0x3eb */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1003)));
  /* b5e60: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b5e64: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5e68: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5e6c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745072));
  fn1_142878(c);
  /* b5e70: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5e74: cbz x0, #0xb6058 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6058;
  /* b5e78: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b5e7c:;
  /* b5e7c: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* b5e80: add x9, x9, #0x7d3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2003)));
  /* b5e84: mov w10, #0x6573 */
  ARC_W_W(c, 10, UINT64_C(25971));
  /* b5e88: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b5e8c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b5e90: movk w10, #0x2074, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(544473088)));
  /* b5e94: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b5e98: stur w10, [x8, #7] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(7)), ARC_W_R(c, 10));
  /* b5e9c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5ea0: ldr x21, [x20, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b5ea4: add x8, x9, #0xb */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(11)));
  /* b5ea8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b5eac: cbz x21, #0xb5f60 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b5f60;
  /* b5eb0: ldr x22, [x20, #0x20] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b5eb4: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b5eb8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5ebc: ldrb w11, [x22] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 22)));
  /* b5ec0: cmp w11, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(110));
  /* b5ec4: b.ne #0xb5fa8 */
  if (ARC_COND(c, 1)) goto L_b5fa8;
  /* b5ec8: add x11, x9, #0xc */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(12)));
  /* b5ecc: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b5ed0: b.ls #0xb5ef8 */
  if (ARC_COND(c, 9)) goto L_b5ef8;
  /* b5ed4: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5ed8: add x9, x9, #0x3ec */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1004)));
  /* b5edc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b5ee0: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b5ee4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5ee8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745196));
  fn1_142878(c);
  /* b5eec: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5ef0: cbz x0, #0xb6064 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6064;
  /* b5ef4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b5ef8:;
  /* b5ef8: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* b5efc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5f00: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5f04: ldr x10, [x20, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* b5f08: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b5f0c: subs x21, x10, #1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1)));
  /* b5f10: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b5f14: b.eq #0xb5ff4 */
  if (ARC_COND(c, 0)) goto L_b5ff4;
  /* b5f18: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b5f1c: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* b5f20: ldr x20, [x20, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b5f24: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5f28: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* b5f2c: b.ls #0xb5f54 */
  if (ARC_COND(c, 9)) goto L_b5f54;
  /* b5f30: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b5f34: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b5f38: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b5f3c: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b5f40: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5f44: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745288));
  fn1_142878(c);
  /* b5f48: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5f4c: cbz x0, #0xb606c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b606c;
  /* b5f50: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b5f54:;
  /* b5f54: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b5f58: add x1, x20, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* b5f5c: b #0xb5fe0 */
  goto L_b5fe0;
L_b5f60:;
  /* b5f60: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b5f64: add x11, x9, #0xc */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(12)));
  /* b5f68: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5f6c: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b5f70: b.ls #0xb5f98 */
  if (ARC_COND(c, 9)) goto L_b5f98;
  /* b5f74: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5f78: add x9, x9, #0x3ec */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1004)));
  /* b5f7c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b5f80: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b5f84: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5f88: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745356));
  fn1_142878(c);
  /* b5f8c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5f90: cbz x0, #0xb6060 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6060;
  /* b5f94: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b5f98:;
  /* b5f98: mov w9, #0x30 */
  ARC_W_W(c, 9, UINT64_C(48));
  /* b5f9c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5fa0: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* b5fa4: b #0xb5fe8 */
  goto L_b5fe8;
L_b5fa8:;
  /* b5fa8: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b5fac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b5fb0: b.ls #0xb5fd8 */
  if (ARC_COND(c, 9)) goto L_b5fd8;
  /* b5fb4: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5fb8: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b5fbc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b5fc0: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b5fc4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5fc8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745420));
  fn1_142878(c);
  /* b5fcc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b5fd0: cbz x0, #0xb6068 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6068;
  /* b5fd4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b5fd8:;
  /* b5fd8: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b5fdc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
L_b5fe0:;
  /* b5fe0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b5fe4: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745448));
  fn1_1449d8(c);
L_b5fe8:;
  /* b5fe8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5fec: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b5ff0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b5ff4:;
  /* b5ff4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b5ff8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5ffc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b6000: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b6004: b.ls #0xb602c */
  if (ARC_COND(c, 9)) goto L_b602c;
  /* b6008: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b600c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b6010: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b6014: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b6018: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b601c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745504));
  fn1_142878(c);
  /* b6020: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b6024: cbz x0, #0xb605c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b605c;
  /* b6028: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b602c:;
  /* b602c: mov w9, #0x3e */
  ARC_W_W(c, 9, UINT64_C(62));
  /* b6030: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b6034: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b6038: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b603c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b6040: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6044: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b6048: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b604c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6050: ret  */
  return;
L_b6054:;
  /* b6054: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745560));
  fn1_1427b8(c);
L_b6058:;
  /* b6058: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745564));
  fn1_1427b8(c);
L_b605c:;
  /* b605c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745568));
  fn1_1427b8(c);
L_b6060:;
  /* b6060: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745572));
  fn1_1427b8(c);
L_b6064:;
  /* b6064: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745576));
  fn1_1427b8(c);
L_b6068:;
  /* b6068: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745580));
  fn1_1427b8(c);
L_b606c:;
  /* b606c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(745584));
  fn1_1427b8(c);
}

void fn1_b84e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682852));
  /* b84e4: bti c */
  /* bti: no architectural effect here */
  /* b84e8: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b84ec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bbac0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038696640));
  /* bbac0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bbac4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bbac8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* bbacc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bbad0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bbad4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bbad8: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bbadc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bbae0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bbae4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bbae8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768748));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bbaec: ldr x20, [x21, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 21) + INT64_C(32))));
  /* bbaf0: cbz x20, #0xbbb4c */
  if ((ARC_X_R(c, 20)) == 0) goto L_bbb4c;
  /* bbaf4: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bbaf8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bbafc: ldr x21, [x21, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* bbb00: add x10, x8, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* bbb04: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bbb08: b.ls #0xbbb30 */
  if (ARC_COND(c, 9)) goto L_bbb30;
  /* bbb0c: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bbb10: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* bbb14: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bbb18: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bbb1c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bbb20: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768804));
  fn1_142878(c);
  /* bbb24: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bbb28: cbz x0, #0xbbb60 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbb60;
  /* bbb2c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bbb30:;
  /* bbb30: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bbb34: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* bbb38: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* bbb3c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768832));
  fn1_1449d8(c);
  /* bbb40: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bbb44: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* bbb48: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bbb4c:;
  /* bbb4c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bbb50: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* bbb54: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bbb58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bbb5c: ret  */
  return;
L_bbb60:;
  /* bbb60: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(768868));
  fn1_1427b8(c);
}

void fn1_be048(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038706248));
  /* be048: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* be04c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be050: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* be054: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* be058: nop  */
  /* nop: no architectural effect here */
  /* be05c: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* be060: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778340));
  fn1_144ac8(c);
  /* be064: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* be068: cbz x8, #0xbe0b4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_be0b4;
  /* be06c: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* be070: ldr x9, [x8, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* be074: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* be078: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* be07c: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* be080: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* be084: b.ne #0xbe0b4 */
  if (ARC_COND(c, 1)) goto L_be0b4;
  /* be088: and x9, x9, #0xff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(255)));
  /* be08c: cmp x9, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1));
  /* be090: b.ne #0xbe09c */
  if (ARC_COND(c, 1)) goto L_be09c;
  /* be094: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* be098: sub x8, x8, #0x80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(128)));
L_be09c:;
  /* be09c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* be0a0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* be0a4: add x19, x8, #0x80 */
  ARC_X_W(c, 19, (ARC_X_R(c, 8) + UINT64_C(128)));
  /* be0a8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778412));
  fn1_bd950(c);
  /* be0ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* be0b0: b #0xbe0b8 */
  goto L_be0b8;
L_be0b4:;
  /* be0b4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_be0b8:;
  /* be0b8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* be0bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be0c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* be0c4: ret  */
  return;
}

void fn1_d2964(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038790500));
  /* d2964: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d2968: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* d296c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d2970: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* d2974: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d2978: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d297c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* d2980: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d2984: nop  */
  /* nop: no architectural effect here */
  /* d2988: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* d298c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* d2990: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* d2994: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862616));
  fn1_142518(c);
  /* d2998: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d299c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* d29a0: b.ne #0xd29cc */
  if (ARC_COND(c, 1)) goto L_d29cc;
  /* d29a4: nop  */
  /* nop: no architectural effect here */
  /* d29a8: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* d29ac: nop  */
  /* nop: no architectural effect here */
  /* d29b0: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_d29b4:;
  /* d29b4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d29b8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* d29bc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862656));
  fn1_142530(c);
  /* d29c0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d29c4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* d29c8: b.eq #0xd29b4 */
  if (ARC_COND(c, 0)) goto L_d29b4;
L_d29cc:;
  /* d29cc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d29d0: cbz x8, #0xd29f8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d29f8;
  /* d29d4: nop  */
  /* nop: no architectural effect here */
  /* d29d8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* d29dc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d29e0: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* d29e4: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d29e8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d29ec: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* d29f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d29f4: b #0x142560 */
  fn1_142560(c); return;
L_d29f8:;
  /* d29f8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* d29fc: str x19, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 19));
  /* d2a00: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* d2a04: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* d2a08: nop  */
  /* nop: no architectural effect here */
  /* d2a0c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* d2a10: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862740));
  fn1_142560(c);
  /* d2a14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d2a18: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862748));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* d2a1c: nop  */
  /* nop: no architectural effect here */
  /* d2a20: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* d2a24: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862760));
  fn1_142518(c);
  /* d2a28: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* d2a2c: stlr x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* d2a30: nop  */
  /* nop: no architectural effect here */
  /* d2a34: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* d2a38: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862780));
  fn1_142560(c);
  /* d2a3c: nop  */
  /* nop: no architectural effect here */
  /* d2a40: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* d2a44: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862792));
  fn1_142578(c);
  /* d2a48: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d2a4c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* d2a50: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d2a54: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d2a58: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* d2a5c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d2a60: ret  */
  return;
  /* d2a64: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d2a68: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d2a6c: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862832));
  fn1_d2a78(c);
  /* d2a70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d2a74: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862840));
  fn1_9cc20(c);
}

void fn1_d8378(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038813560));
  /* d8378: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d837c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* d8380: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d8384: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* d8388: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d838c: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d8390: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d8394: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8398: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d839c: csinc x9, x9, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* d83a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d83a4: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d83a8: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d83ac: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d83b0: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* d83b4: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885688));
  fn1_da18c(c);
  /* d83b8: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d83bc: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d83c0: b.ne #0xd83d0 */
  if (ARC_COND(c, 1)) goto L_d83d0;
  /* d83c4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d83c8: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885708));
  fn1_da18c(c);
  /* d83cc: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
L_d83d0:;
  /* d83d0: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d83d4: b.ne #0xd8400 */
  if (ARC_COND(c, 1)) goto L_d8400;
  /* d83d8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* d83dc: nop  */
  /* nop: no architectural effect here */
  /* d83e0: adr x9, #0x5004e */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327758)));
  /* d83e4: nop  */
  /* nop: no architectural effect here */
  /* d83e8: adr x10, #0x501db */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(328155)));
  /* d83ec: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d83f0: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d83f4: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d83f8: csel x0, x10, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d83fc: b #0xd8408 */
  goto L_d8408;
L_d8400:;
  /* d8400: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d8404: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
L_d8408:;
  /* d8408: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d840c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* d8410: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d8414: ret  */
  return;
}

void fn1_dbd78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038828408));
  /* dbd78: bti c */
  /* bti: no architectural effect here */
  /* dbd7c: cmp x1, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 0));
  /* dbd80: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* dbd84: ret  */
  return;
}

void fn1_e0490(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038846608));
  /* e0490: bti c */
  /* bti: no architectural effect here */
  /* e0494: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e0498: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e049c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e04a0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e04a4: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e04a8: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* e04ac: b.hs #0xe04c4 */
  if (ARC_COND(c, 2)) goto L_e04c4;
  /* e04b0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e04b4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e04b8: csinc x8, x9, x0, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e04bc: add x0, x8, x1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 1)));
  /* e04c0: ret  */
  return;
L_e04c4:;
  /* e04c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e04c8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e04cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e04d0: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918740));
  fn1_da020(c);
}

void fn1_e2e8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038857356));
  /* e2e8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2e90: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2e94: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e2e98: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e2e9c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2ea0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2ea4: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* e2ea8: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* e2eac: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e2eb0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2eb4: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e2eb8: subs x9, x9, x2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2)));
  /* e2ebc: b.lo #0xe2f58 */
  if (ARC_COND(c, 3)) goto L_e2f58;
  /* e2ec0: ldr x10, [x1, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e2ec4: add x11, x1, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* e2ec8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e2ecc: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e2ed0: csel x22, x11, x10, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e2ed4: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* e2ed8: csel x21, x9, x3, lo */
  ARC_X_W(c, 21, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 3)));
  /* e2edc: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e2ee0: b.hs #0xe2f5c */
  if (ARC_COND(c, 2)) goto L_e2f5c;
  /* e2ee4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* e2ee8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e2eec: cmp x21, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(5));
  /* e2ef0: b.hs #0xe2f04 */
  if (ARC_COND(c, 2)) goto L_e2f04;
  /* e2ef4: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e2ef8: strb w8, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e2efc: cbnz x21, #0xe2f2c */
  if ((ARC_X_R(c, 21)) != 0) goto L_e2f2c;
  /* e2f00: b #0xe2f3c */
  goto L_e2f3c;
L_e2f04:;
  /* e2f04: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e2f08: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e2f0c: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e2f10: csinc x23, x9, x8, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e2f14: lsl x0, x23, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(2)) & 63)));
  /* e2f18: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929564));
  fn1_1428f0(c);
  /* e2f1c: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* e2f20: stp x21, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e2f24: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e2f28: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e2f2c:;
  /* e2f2c: add x1, x22, x20, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 20)) << 2)));
  /* e2f30: lsl x2, x21, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(2)) & 63)));
  /* e2f34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e2f38: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929596));
  fn1_1449f0(c);
L_e2f3c:;
  /* e2f3c: str wzr, [x19, x21, lsl #2] */
  arc_st32((ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 21)) << 2)), ARC_W_R(c, 31));
  /* e2f40: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2f44: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e2f48: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2f4c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2f50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2f54: ret  */
  return;
L_e2f58:;
  /* e2f58: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929628));
  fn1_e1f80(c);
L_e2f5c:;
  /* e2f5c: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929632));
  fn1_e2274(c);
}

void fn1_e751c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038875420));
  /* e751c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7520: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e7524: str d8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[8].u64[0]);
  /* e7528: stp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e752c: str x23, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 23));
  /* e7530: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e7534: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e7538: add x29, sp, #0x28 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(40)));
  /* e753c: mov w0, #0x58 */
  ARC_W_W(c, 0, UINT64_C(88));
  /* e7540: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* e7544: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e7548: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947532));
  fn1_1428f0(c);
  /* e754c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* e7550: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* e7554: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* e7558: ldr q1, [x8, #0xd80] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(3456))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3456)) + 8));
  /* e755c: str wzr, [x0, #0x50] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(80)), ARC_W_R(c, 31));
  /* e7560: str q1, [sp] */
  arc_st64((c)->sp, (c)->q[1].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[1].u64[1]);
  /* e7564: stp q0, q0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e7568: stp q0, q0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e756c: str q0, [x0, #0x40] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)) + 8, (c)->q[0].u64[1]);
  /* e7570: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e7574: mov w1, #0x15 */
  ARC_W_W(c, 1, UINT64_C(21));
  /* e7578: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e757c: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* e7580: bl #0x142dd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947588));
  fn1_142dd0(c);
  /* e7584: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e7588: ldr x9, [sp, #8] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(8))));
  /* e758c: orr x22, x20, #4 */
  ARC_X_W(c, 22, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* e7590: nop  */
  /* nop: no architectural effect here */
  /* e7594: adr x20, #0x74f94 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(479124)));
  /* e7598: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* e759c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e75a0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e75a4: csel x21, x10, x9, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
L_e75a8:;
  /* e75a8: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* e75ac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e75b0: csel x0, x22, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 9)));
  /* e75b4: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e75b8: add x1, x21, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* e75bc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e75c0: bl #0x142fc8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947652));
  fn1_142fc8(c);
  /* e75c4: tbnz w0, #0x1f, #0xe75dc */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_e75dc;
  /* e75c8: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* e75cc: cmp x21, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1));
  /* e75d0: b.hs #0xe75f8 */
  if (ARC_COND(c, 2)) goto L_e75f8;
  /* e75d4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e75d8: b #0xe75e0 */
  goto L_e75e0;
L_e75dc:;
  /* e75dc: orr x21, x23, x21, lsl #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) | ((uint64_t)(ARC_X_R(c, 21)) << 1)));
L_e75e0:;
  /* e75e0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e75e4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e75e8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e75ec: bl #0x142dd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947696));
  fn1_142dd0(c);
  /* e75f0: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e75f4: b #0xe75a8 */
  goto L_e75a8;
L_e75f8:;
  /* e75f8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e75fc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e7600: bl #0x142dd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947716));
  fn1_142dd0(c);
  /* e7604: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* e7608: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* e760c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e7610: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e7614: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e7618: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* e761c: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* e7620: bl #0x142e18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947748));
  fn1_142e18(c);
  /* e7624: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e7628: ldr x23, [sp, #0x38] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(56))));
  /* e762c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e7630: ldr d8, [sp, #0x20] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e7634: ldp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7638: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e763c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7640: ret  */
  return;
  /* e7644: b #0xe764c */
  goto L_e764c;
  /* e7648: b #0xe764c */
  goto L_e764c;
L_e764c:;
  /* e764c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e7650: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e7654: bl #0x142e18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947800));
  fn1_142e18(c);
  /* e7658: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e765c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947808));
  fn1_9cc20(c);
}

void fn1_e9cf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038885616));
  /* e9cf0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9cf4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9cf8: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e9cfc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e9d00: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e9d04: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9d08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e9d0c: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e9d10: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957716));
  fn1_142518(c);
  /* e9d14: cbnz w0, #0xe9e14 */
  if ((ARC_W_R(c, 0)) != 0) goto L_e9e14;
  /* e9d18: ldr w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(112))));
  /* e9d1c: tbnz w8, #0, #0xe9e20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e9e20;
  /* e9d20: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e9d24: cbnz x9, #0xe9e20 */
  if ((ARC_X_R(c, 9)) != 0) goto L_e9e20;
  /* e9d28: orr w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(1)));
  /* e9d2c: adrp x21, #0x15d000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1429504)));
  /* e9d30: str w8, [x19, #0x70] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(112)), ARC_W_R(c, 8));
  /* e9d34: nop  */
  /* nop: no architectural effect here */
  /* e9d38: adr x8, #0x15d258 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e9d3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* e9d40: tbz w8, #0, #0xe9e28 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e9e28;
L_e9d44:;
  /* e9d44: ldr x8, [x21, #0x250] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(592))));
  /* e9d48: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* e9d4c: bl #0x143130 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957776));
  fn1_143130(c);
  /* e9d50: ldr x22, [x0] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 0)));
  /* e9d54: ldp x23, x8, [x22, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(8));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e9d58: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* e9d5c: b.hs #0xe9d68 */
  if (ARC_COND(c, 2)) goto L_e9d68;
  /* e9d60: str x19, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* e9d64: b #0xe9de4 */
  goto L_e9de4;
L_e9d68:;
  /* e9d68: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* e9d6c: sub x21, x23, x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 10)));
  /* e9d70: asr x9, x21, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(3)) & 63))));
  /* e9d74: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* e9d78: lsr x11, x9, #0x3d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(61)) & 63)));
  /* e9d7c: cbnz x11, #0xe9e5c */
  if ((ARC_X_R(c, 11)) != 0) goto L_e9e5c;
  /* e9d80: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* e9d84: mov x11, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, UINT64_C(9223372036854775800));
  /* e9d88: asr x10, x8, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e9d8c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e9d90: csel x9, x10, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e9d94: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* e9d98: mov x8, #0x1fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(2305843009213693951));
  /* e9d9c: csel x23, x9, x8, lo */
  ARC_X_W(c, 23, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e9da0: lsl x0, x23, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(3)) & 63)));
  /* e9da4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957864));
  fn1_1428f0(c);
  /* e9da8: ldp x20, x8, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e9dac: add x9, x0, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* e9db0: add x24, x0, x23, lsl #3 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 23)) << 3)));
  /* e9db4: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* e9db8: str x19, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* e9dbc: sub x2, x8, x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* e9dc0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e9dc4: sub x21, x9, x2 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) - ARC_X_R(c, 2)));
  /* e9dc8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e9dcc: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957904));
  fn1_1449d8(c);
  /* e9dd0: stp x21, x23, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e9dd4: str x24, [x22, #0x10] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(16)), ARC_X_R(c, 24));
  /* e9dd8: cbz x20, #0xe9de4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_e9de4;
  /* e9ddc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e9de0: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957924));
  fn1_1426f8(c);
L_e9de4:;
  /* e9de4: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* e9de8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* e9dec: str x23, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 23));
  /* e9df0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957940));
  fn1_db2e0(c);
  /* e9df4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e9df8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957948));
  fn1_142560(c);
  /* e9dfc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e9e00: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e9e04: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e9e08: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9e0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9e10: ret  */
  return;
L_e9e14:;
  /* e9e14: nop  */
  /* nop: no architectural effect here */
  /* e9e18: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* e9e1c: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957984));
  fn1_142a40(c);
L_e9e20:;
  /* e9e20: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* e9e24: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(957992));
  fn1_e9be0(c);
L_e9e28:;
  /* e9e28: nop  */
  /* nop: no architectural effect here */
  /* e9e2c: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e9e30: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958004));
  fn1_1424b8(c);
  /* e9e34: cbz w0, #0xe9d44 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e9d44;
  /* e9e38: nop  */
  /* nop: no architectural effect here */
  /* e9e3c: adr x20, #0x15d248 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1430088)));
  /* e9e40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e9e44: bl #0xeb9a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958024));
  fn1_eb9a8(c);
  /* e9e48: nop  */
  /* nop: no architectural effect here */
  /* e9e4c: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e9e50: str x20, [x21, #0x250] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(592)), ARC_X_R(c, 20));
  /* e9e54: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958040));
  fn1_1424d0(c);
  /* e9e58: b #0xe9d44 */
  goto L_e9d44;
L_e9e5c:;
  /* e9e5c: bl #0xebd08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958048));
  fn1_ebd08(c);
  /* e9e60: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e9e64: nop  */
  /* nop: no architectural effect here */
  /* e9e68: adr x0, #0x15d258 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430104)));
  /* e9e6c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958064));
  fn1_1424e8(c);
  /* e9e70: b #0xe9e7c */
  goto L_e9e7c;
  /* e9e74: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958072));
  fn1_a1454(c);
  /* e9e78: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_e9e7c:;
  /* e9e7c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e9e80: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958084));
  fn1_142560(c);
  /* e9e84: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e9e88: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958092));
  fn1_9cc20(c);
  /* e9e8c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958096));
  fn1_a1454(c);
}

void fn1_eb9a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892968));
  /* eb9a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb9ac: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb9b0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb9b4: nop  */
  /* nop: no architectural effect here */
  /* eb9b8: adr x1, #0xebd20 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(965920)));
  /* eb9bc: bl #0x1429f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965056));
  fn1_1429f8(c);
  /* eb9c0: cbnz w0, #0xeb9d0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb9d0;
  /* eb9c4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb9c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb9cc: ret  */
  return;
L_eb9d0:;
  /* eb9d0: nop  */
  /* nop: no architectural effect here */
  /* eb9d4: adr x1, #0x4fd1a */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(326938)));
  /* eb9d8: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965084));
  fn1_142a40(c);
}

void fn1_ed76c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900588));
  /* ed76c: bti c */
  /* bti: no architectural effect here */
  /* ed770: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* ed774: add x8, x8, w1, sxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 1)))));
  /* ed778: str x8, [x0, #0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)), ARC_X_R(c, 8));
  /* ed77c: ret  */
  return;
}

void fn1_f1074(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915188));
  /* f1074: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f1078: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f107c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f1080: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f1084: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1088: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* f108c: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987280));
  fn1_1433b8(c);
  /* f1090: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1094: mov w1, #0xa0 */
  ARC_W_W(c, 1, UINT64_C(160));
  /* f1098: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f109c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f10a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f10a4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f419c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927772));
  /* f419c: bti c */
  /* bti: no architectural effect here */
  /* f41a0: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* f41a4: add x8, x8, w1, sxtw #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 1)))) << 2)));
  /* f41a8: str x8, [x0, #0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)), ARC_X_R(c, 8));
  /* f41ac: ret  */
  return;
}

void fn1_f7aac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942380));
  /* f7aac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7ab0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7ab4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f7ab8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7abc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7ac0: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* f7ac4: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014472));
  fn1_1433b8(c);
  /* f7ac8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7acc: mov w1, #0xa0 */
  ARC_W_W(c, 1, UINT64_C(160));
  /* f7ad0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7ad4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7ad8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7adc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_fcd40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038963520));
  /* fcd40: bti c */
  /* bti: no architectural effect here */
  /* fcd44: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fcd48: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* fcd4c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* fcd50: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* fcd54: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_fff08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038976264));
  /* fff08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fff0c: sub sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(384)));
  /* fff10: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fff14: stp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* fff18: stp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* fff1c: stp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fff20: stp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fff24: stp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fff28: add x29, sp, #0x120 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(288)));
  /* fff2c: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* fff30: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* fff34: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* fff38: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* fff3c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fff40: sub x26, x29, #0x48 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* fff44: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* fff48: str x5, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 5));
  /* fff4c: b.eq #0xfff70 */
  if (ARC_COND(c, 0)) goto L_fff70;
  /* fff50: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* fff54: b.eq #0xfff68 */
  if (ARC_COND(c, 0)) goto L_fff68;
  /* fff58: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* fff5c: b.ne #0xfff78 */
  if (ARC_COND(c, 1)) goto L_fff78;
  /* fff60: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* fff64: b #0xfff7c */
  goto L_fff7c;
L_fff68:;
  /* fff68: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* fff6c: b #0xfff7c */
  goto L_fff7c;
L_fff70:;
  /* fff70: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* fff74: b #0xfff7c */
  goto L_fff7c;
L_fff78:;
  /* fff78: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_fff7c:;
  /* fff7c: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* fff80: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* fff84: str x4, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 4));
  /* fff88: bl #0x135800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048460));
  fn1_135800(c);
  /* fff8c: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fff90: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* fff94: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* fff98: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* fff9c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* fffa0: sub x19, x29, #0x40 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* fffa4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048488));
  fn1_142d10(c);
  /* fffa8: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* fffac: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* fffb0: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* fffb4: str x10, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 10));
  /* fffb8: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fffbc: orr x27, x19, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* fffc0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fffc4: ldr x28, [x28, #0xbe0] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(3040))));
  /* fffc8: add x22, sp, #0x30 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(48)));
  /* fffcc: csinc x24, x9, x19, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* fffd0: mov w19, #0x16 */
  ARC_W_W(c, 19, UINT64_C(22));
  /* fffd4: str wzr, [sp, #0x2c] */
  arc_st32(((c)->sp + INT64_C(44)), ARC_W_R(c, 31));
  /* fffd8: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* fffdc: b #0xfffe8 */
  goto L_fffe8;
L_fffe0:;
  /* fffe0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* fffe4: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_fffe8:;
  /* fffe8: cbz x20, #0x100010 */
  if ((ARC_X_R(c, 20)) == 0) goto L_100010;
  /* fffec: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ffff0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ffff4: b.eq #0x10002c */
  if (ARC_COND(c, 0)) goto L_10002c;
  /* ffff8: cbz x21, #0x10009c */
  if ((ARC_X_R(c, 21)) == 0) goto L_10009c;
  /* ffffc: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100000: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100004: b.ne #0x1001e4 */
  if (ARC_COND(c, 1)) goto L_1001e4;
  /* 100008: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* 10000c: b #0x100078 */
  goto L_100078;
L_100010:;
  /* 100010: cbz x21, #0x1001e0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1001e0;
  /* 100014: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100018: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10001c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100020: b.ne #0x10009c */
  if (ARC_COND(c, 1)) goto L_10009c;
  /* 100024: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 100028: b #0x100078 */
  goto L_100078;
L_10002c:;
  /* 10002c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 100030: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100034: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100038: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048636));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10003c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100040: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 100044: cbz x21, #0x100068 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100068;
  /* 100048: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10004c: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 100050: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 100054: b.eq #0x100074 */
  if (ARC_COND(c, 0)) goto L_100074;
  /* 100058: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10005c: b.ne #0x1001e4 */
  if (ARC_COND(c, 1)) goto L_1001e4;
  /* 100060: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 100064: b #0x10009c */
  goto L_10009c;
L_100068:;
  /* 100068: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10006c: b.ne #0x10009c */
  if (ARC_COND(c, 1)) goto L_10009c;
  /* 100070: b #0x100548 */
  goto L_100548;
L_100074:;
  /* 100074: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_100078:;
  /* 100078: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10007c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100080: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 100084: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048712));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 100088: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10008c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 100090: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 100094: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 100098: b.eq #0x1001e4 */
  if (ARC_COND(c, 0)) goto L_1001e4;
L_10009c:;
  /* 10009c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1000a0: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 1000a4: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 1000a8: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1000ac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1000b0: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1000b4: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 1000b8: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1000bc: b.ne #0x100174 */
  if (ARC_COND(c, 1)) goto L_100174;
  /* 1000c0: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 1000c4: b.lt #0x1000dc */
  if (ARC_COND(c, 11)) goto L_1000dc;
  /* 1000c8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1000cc: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 1000d0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1000d4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048792));
  fn1_142d10(c);
  /* 1000d8: b #0x100100 */
  goto L_100100;
L_1000dc:;
  /* 1000dc: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 1000e0: tbnz w8, #0, #0x1000f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1000f4;
  /* 1000e4: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 1000e8: sturb w8, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 8));
  /* 1000ec: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 1000f0: b #0x1000fc */
  goto L_1000fc;
L_1000f4:;
  /* 1000f4: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1000f8: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_1000fc:;
  /* 1000fc: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_100100:;
  /* 100100: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 100104: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100108: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10010c: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 100110: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 100114: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 100118: csel x8, x19, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 11)));
  /* 10011c: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 100120: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 100124: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 100128: b.ls #0x10013c */
  if (ARC_COND(c, 9)) goto L_10013c;
  /* 10012c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 100130: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 100134: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048888));
  fn1_142d10(c);
  /* 100138: b #0x10015c */
  goto L_10015c;
L_10013c:;
  /* 10013c: tbnz w9, #0, #0x100150 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_100150;
  /* 100140: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 100144: sturb w9, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 9));
  /* 100148: mov x9, x27 */
  ARC_X_W(c, 9, ARC_X_R(c, 27));
  /* 10014c: b #0x100158 */
  goto L_100158;
L_100150:;
  /* 100150: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100154: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_100158:;
  /* 100158: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_10015c:;
  /* 10015c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100160: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100164: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100168: csel x24, x27, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 9)));
  /* 10016c: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 100170: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_100174:;
  /* 100174: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100178: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10017c: b.eq #0x100188 */
  if (ARC_COND(c, 0)) goto L_100188;
  /* 100180: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 100184: b #0x100198 */
  goto L_100198;
L_100188:;
  /* 100188: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10018c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100190: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100194: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1048984));
  arc_dispatch(c, ARC_X_R(c, 8));
L_100198:;
  /* 100198: ldurb w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 10019c: sub x3, x29, #0x48 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1001a0: add x4, sp, #0x2c */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(44)));
  /* 1001a4: sub x6, x29, #0x28 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1001a8: add x7, sp, #0x38 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(56)));
  /* 1001ac: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 1001b0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 1001b4: stp x22, x28, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* 1001b8: bl #0x143868 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1049020));
  fn1_143868(c);
  /* 1001bc: cbnz w0, #0x1001e4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1001e4;
  /* 1001c0: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1001c4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1001c8: b.ne #0xfffe0 */
  if (ARC_COND(c, 1)) goto L_fffe0;
  /* 1001cc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1001d0: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1001d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1001d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1049052));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1001dc: b #0xfffe8 */
  goto L_fffe8;
L_1001e0:;
  /* 1001e0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_1001e4:;
  /* 1001e4: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 1001e8: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 1001ec: ldr x22, [sp, #0x20] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1001f0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1001f4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1001f8: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1001fc: cbz x8, #0x100220 */
  if ((ARC_X_R(c, 8)) == 0) goto L_100220;
  /* 100200: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 100204: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 100208: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 10020c: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 100210: b.gt #0x100220 */
  if (ARC_COND(c, 12)) goto L_100220;
  /* 100214: ldr w9, [sp, #0x2c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(44))));
  /* 100218: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 10021c: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
L_100220:;
  /* 100220: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 100224: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 100228: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10022c: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 100230: bl #0x13599c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1049140));
  fn1_13599c(c);
  /* 100234: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 100238: ldr x12, [sp, #0x30] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(48))));
  /* 10023c: add x11, sp, #0x38 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(56)));
  /* 100240: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 100244: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 100248: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 10024c: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 100250: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 100254: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 100258: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 10025c: str x0, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 100260: b.lt #0x1003c0 */
  if (ARC_COND(c, 11)) goto L_1003c0;
  /* 100264: cbz x8, #0x1003c0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1003c0;
  /* 100268: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 10026c: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 100270: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 100274: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 100278: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 10027c: b.eq #0x10032c */
  if (ARC_COND(c, 0)) goto L_10032c;
  /* 100280: cbz w11, #0x10032c */
  if ((ARC_W_R(c, 11)) == 0) goto L_10032c;
  /* 100284: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 100288: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 10028c: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 100290: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 100294: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 100298: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 10029c: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1002a0: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1002a4: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 1002a8: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 1002ac: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1002b0: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1002b4: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 1002b8: b.lo #0x100300 */
  if (ARC_COND(c, 3)) goto L_100300;
  /* 1002bc: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1002c0: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1002c4: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 1002c8: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1002cc: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1002d0: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1002d4: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 1002d8: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1002dc: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1002e0: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 1002e4: b.hs #0x100450 */
  if (ARC_COND(c, 2)) goto L_100450;
  /* 1002e8: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 1002ec: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 1002f0: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 1002f4: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 1002f8: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1002fc: b.hs #0x100450 */
  if (ARC_COND(c, 2)) goto L_100450;
L_100300:;
  /* 100300: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_100304:;
  /* 100304: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_100308:;
  /* 100308: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 10030c: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 100310: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 100314: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 100318: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 10031c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 100320: b.lo #0x100308 */
  if (ARC_COND(c, 3)) goto L_100308;
L_100324:;
  /* 100324: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 100328: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_10032c:;
  /* 10032c: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 100330: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 100334: sub x12, x29, #0x28 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 100338: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10033c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 100340: b.hs #0x100398 */
  if (ARC_COND(c, 2)) goto L_100398;
  /* 100344: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 100348: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 10034c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 100350: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 100354: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 100358: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 10035c: b #0x100378 */
  goto L_100378;
L_100360:;
  /* 100360: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 100364: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 100368: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 10036c: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 100370: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 100374: b.hs #0x100398 */
  if (ARC_COND(c, 2)) goto L_100398;
L_100378:;
  /* 100378: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 10037c: cbz w12, #0x100360 */
  if ((ARC_W_R(c, 12)) == 0) goto L_100360;
  /* 100380: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 100384: b.eq #0x100360 */
  if (ARC_COND(c, 0)) goto L_100360;
  /* 100388: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 10038c: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 100390: b.eq #0x100360 */
  if (ARC_COND(c, 0)) goto L_100360;
  /* 100394: b #0x1003b8 */
  goto L_1003b8;
L_100398:;
  /* 100398: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 10039c: cbz w9, #0x1003c0 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1003c0;
  /* 1003a0: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 1003a4: b.eq #0x1003c0 */
  if (ARC_COND(c, 0)) goto L_1003c0;
  /* 1003a8: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 1003ac: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1003b0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1003b4: b.lo #0x1003c0 */
  if (ARC_COND(c, 3)) goto L_1003c0;
L_1003b8:;
  /* 1003b8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1003bc: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_1003c0:;
  /* 1003c0: cbz x20, #0x1003e8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1003e8;
  /* 1003c4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1003c8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1003cc: b.eq #0x100404 */
  if (ARC_COND(c, 0)) goto L_100404;
  /* 1003d0: cbz x21, #0x1004f0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1004f0;
  /* 1003d4: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1003d8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1003dc: b.ne #0x1004e4 */
  if (ARC_COND(c, 1)) goto L_1004e4;
  /* 1003e0: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 1003e4: b #0x1004c4 */
  goto L_1004c4;
L_1003e8:;
  /* 1003e8: cbz x21, #0x100448 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100448;
  /* 1003ec: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1003f0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1003f4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1003f8: b.ne #0x1004f0 */
  if (ARC_COND(c, 1)) goto L_1004f0;
  /* 1003fc: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 100400: b #0x1004c4 */
  goto L_1004c4;
L_100404:;
  /* 100404: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 100408: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 10040c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100410: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1049620));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 100414: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100418: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 10041c: cbz x21, #0x100440 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100440;
  /* 100420: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 100424: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 100428: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10042c: b.eq #0x1004c0 */
  if (ARC_COND(c, 0)) goto L_1004c0;
  /* 100430: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100434: b.ne #0x1004e4 */
  if (ARC_COND(c, 1)) goto L_1004e4;
  /* 100438: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10043c: b #0x1004f0 */
  goto L_1004f0;
L_100440:;
  /* 100440: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100444: b.ne #0x1004f0 */
  if (ARC_COND(c, 1)) goto L_1004f0;
L_100448:;
  /* 100448: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10044c: b #0x1004e4 */
  goto L_1004e4;
L_100450:;
  /* 100450: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 100454: add x15, sp, #0x38 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(56)));
  /* 100458: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 10045c: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 100460: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 100464: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 100468: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 10046c: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 100470: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_100474:;
  /* 100474: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 100478: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 10047c: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 100480: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 100484: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 100488: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 10048c: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 100490: ext v0.16b, v0.16b, v0.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[8];
    _t.u8[1] = (c)->q[0].u8[9];
    _t.u8[2] = (c)->q[0].u8[10];
    _t.u8[3] = (c)->q[0].u8[11];
    _t.u8[4] = (c)->q[0].u8[12];
    _t.u8[5] = (c)->q[0].u8[13];
    _t.u8[6] = (c)->q[0].u8[14];
    _t.u8[7] = (c)->q[0].u8[15];
    _t.u8[8] = (c)->q[0].u8[0];
    _t.u8[9] = (c)->q[0].u8[1];
    _t.u8[10] = (c)->q[0].u8[2];
    _t.u8[11] = (c)->q[0].u8[3];
    _t.u8[12] = (c)->q[0].u8[4];
    _t.u8[13] = (c)->q[0].u8[5];
    _t.u8[14] = (c)->q[0].u8[6];
    _t.u8[15] = (c)->q[0].u8[7];
    (c)->q[0] = _t; }
  /* 100494: ext v1.16b, v1.16b, v1.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[8];
    _t.u8[1] = (c)->q[1].u8[9];
    _t.u8[2] = (c)->q[1].u8[10];
    _t.u8[3] = (c)->q[1].u8[11];
    _t.u8[4] = (c)->q[1].u8[12];
    _t.u8[5] = (c)->q[1].u8[13];
    _t.u8[6] = (c)->q[1].u8[14];
    _t.u8[7] = (c)->q[1].u8[15];
    _t.u8[8] = (c)->q[1].u8[0];
    _t.u8[9] = (c)->q[1].u8[1];
    _t.u8[10] = (c)->q[1].u8[2];
    _t.u8[11] = (c)->q[1].u8[3];
    _t.u8[12] = (c)->q[1].u8[4];
    _t.u8[13] = (c)->q[1].u8[5];
    _t.u8[14] = (c)->q[1].u8[6];
    _t.u8[15] = (c)->q[1].u8[7];
    (c)->q[1] = _t; }
  /* 100498: ext v2.16b, v2.16b, v2.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[8];
    _t.u8[1] = (c)->q[2].u8[9];
    _t.u8[2] = (c)->q[2].u8[10];
    _t.u8[3] = (c)->q[2].u8[11];
    _t.u8[4] = (c)->q[2].u8[12];
    _t.u8[5] = (c)->q[2].u8[13];
    _t.u8[6] = (c)->q[2].u8[14];
    _t.u8[7] = (c)->q[2].u8[15];
    _t.u8[8] = (c)->q[2].u8[0];
    _t.u8[9] = (c)->q[2].u8[1];
    _t.u8[10] = (c)->q[2].u8[2];
    _t.u8[11] = (c)->q[2].u8[3];
    _t.u8[12] = (c)->q[2].u8[4];
    _t.u8[13] = (c)->q[2].u8[5];
    _t.u8[14] = (c)->q[2].u8[6];
    _t.u8[15] = (c)->q[2].u8[7];
    (c)->q[2] = _t; }
  /* 10049c: ext v3.16b, v3.16b, v3.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[8];
    _t.u8[1] = (c)->q[3].u8[9];
    _t.u8[2] = (c)->q[3].u8[10];
    _t.u8[3] = (c)->q[3].u8[11];
    _t.u8[4] = (c)->q[3].u8[12];
    _t.u8[5] = (c)->q[3].u8[13];
    _t.u8[6] = (c)->q[3].u8[14];
    _t.u8[7] = (c)->q[3].u8[15];
    _t.u8[8] = (c)->q[3].u8[0];
    _t.u8[9] = (c)->q[3].u8[1];
    _t.u8[10] = (c)->q[3].u8[2];
    _t.u8[11] = (c)->q[3].u8[3];
    _t.u8[12] = (c)->q[3].u8[4];
    _t.u8[13] = (c)->q[3].u8[5];
    _t.u8[14] = (c)->q[3].u8[6];
    _t.u8[15] = (c)->q[3].u8[7];
    (c)->q[3] = _t; }
  /* 1004a0: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1004a4: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 1004a8: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 1004ac: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 1004b0: cbnz x16, #0x100474 */
  if ((ARC_X_R(c, 16)) != 0) goto L_100474;
  /* 1004b4: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 1004b8: b.eq #0x100324 */
  if (ARC_COND(c, 0)) goto L_100324;
  /* 1004bc: b #0x100304 */
  goto L_100304;
L_1004c0:;
  /* 1004c0: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_1004c4:;
  /* 1004c4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1004c8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1004cc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1004d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1049812));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1004d4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1004d8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1004dc: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 1004e0: tbnz w8, #0, #0x1004f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1004f0;
L_1004e4:;
  /* 1004e4: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 1004e8: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 1004ec: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_1004f0:;
  /* 1004f0: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1004f4: tbz w8, #0, #0x100508 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_100508;
  /* 1004f8: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 1004fc: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100500: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 100504: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1049864));
  fn1_142608(c);
L_100508:;
  /* 100508: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10050c: tbz w8, #0, #0x100520 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_100520;
  /* 100510: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 100514: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 100518: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10051c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1049888));
  fn1_142608(c);
L_100520:;
  /* 100520: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100524: ldp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 100528: ldp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10052c: ldp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 100530: ldp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 100534: ldp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 100538: ldp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10053c: add sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(384)));
  /* 100540: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 100544: ret  */
  return;
L_100548:;
  /* 100548: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 10054c: b #0x1001e4 */
  goto L_1001e4;
  /* 100550: b #0x10055c */
  goto L_10055c;
  /* 100554: b #0x10055c */
  goto L_10055c;
  /* 100558: b #0x10055c */
  goto L_10055c;
L_10055c:;
  /* 10055c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100560: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 100564: tbnz w8, #0, #0x100578 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_100578;
  /* 100568: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10056c: tbnz w8, #0, #0x100590 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_100590;
L_100570:;
  /* 100570: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 100574: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1049976));
  fn1_9cc20(c);
L_100578:;
  /* 100578: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 10057c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100580: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 100584: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1049992));
  fn1_142608(c);
  /* 100588: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10058c: tbz w8, #0, #0x100570 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_100570;
L_100590:;
  /* 100590: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 100594: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 100598: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10059c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050016));
  fn1_142608(c);
  /* 1005a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1005a4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050024));
  fn1_9cc20(c);
}

void fn1_10fe34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039041588));
  /* 10fe34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10fe38: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 10fe3c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10fe40: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10fe44: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10fe48: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10fe4c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10fe50: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10fe54: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 10fe58: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 10fe5c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 10fe60: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10fe64: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 10fe68: mov w25, w6 */
  ARC_W_W(c, 25, ARC_W_R(c, 6));
  /* 10fe6c: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 10fe70: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 10fe74: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 10fe78: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10fe7c: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 10fe80: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113732));
  fn1_143460(c);
  /* 10fe84: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10fe88: ldr x28, [x28, #0xb40] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(2880))));
  /* 10fe8c: ldr x27, [sp] */
  ARC_X_W(c, 27, arc_ld64((c)->sp));
  /* 10fe90: ldar x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10fe94: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10fe98: b.eq #0x10ff54 */
  if (ARC_COND(c, 0)) goto L_10ff54;
  /* 10fe9c: nop  */
  /* nop: no architectural effect here */
  /* 10fea0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10fea4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113768));
  fn1_142518(c);
  /* 10fea8: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10feac: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10feb0: b.ne #0x10fedc */
  if (ARC_COND(c, 1)) goto L_10fedc;
  /* 10feb4: nop  */
  /* nop: no architectural effect here */
  /* 10feb8: adr x24, #0x15791c */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10febc: nop  */
  /* nop: no architectural effect here */
  /* 10fec0: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_10fec4:;
  /* 10fec4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 10fec8: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 10fecc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113808));
  fn1_142530(c);
  /* 10fed0: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10fed4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10fed8: b.eq #0x10fec4 */
  if (ARC_COND(c, 0)) goto L_10fec4;
L_10fedc:;
  /* 10fedc: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10fee0: cbz x8, #0x10fef4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10fef4;
  /* 10fee4: nop  */
  /* nop: no architectural effect here */
  /* 10fee8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10feec: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113840));
  fn1_142560(c);
  /* 10fef0: b #0x10ff54 */
  goto L_10ff54;
L_10fef4:;
  /* 10fef4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10fef8: str x28, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 28));
  /* 10fefc: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 10ff00: str x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 10ff04: nop  */
  /* nop: no architectural effect here */
  /* 10ff08: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10ff0c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113872));
  fn1_142560(c);
  /* 10ff10: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10ff14: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10ff18: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10ff1c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113888));
  fn1_a2030(c);
  /* 10ff20: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10ff24: str w8, [x28, #8] */
  arc_st32((ARC_X_R(c, 28) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10ff28: nop  */
  /* nop: no architectural effect here */
  /* 10ff2c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10ff30: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113908));
  fn1_142518(c);
  /* 10ff34: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10ff38: stlr x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 10ff3c: nop  */
  /* nop: no architectural effect here */
  /* 10ff40: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10ff44: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113928));
  fn1_142560(c);
  /* 10ff48: nop  */
  /* nop: no architectural effect here */
  /* 10ff4c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10ff50: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113940));
  fn1_142578(c);
L_10ff54:;
  /* 10ff54: ldp x8, x10, [x27, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10ff58: ldrsw x9, [x28, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 28) + INT64_C(8)))));
  /* 10ff5c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10ff60: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10ff64: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10ff68: b.hs #0x11052c */
  if (ARC_COND(c, 2)) goto L_11052c;
  /* 10ff6c: ldr x24, [x8, x9, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10ff70: cbz x24, #0x11052c */
  if ((ARC_X_R(c, 24)) == 0) goto L_11052c;
  /* 10ff74: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10ff78: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113980));
  fn1_143478(c);
  /* 10ff7c: and w8, w25, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* 10ff80: sub w8, w8, #0x25 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(37)));
  /* 10ff84: cmp w8, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(84));
  /* 10ff88: b.hi #0x11045c */
  if (ARC_COND(c, 8)) goto L_11045c;
  /* 10ff8c: nop  */
  /* nop: no architectural effect here */
  /* 10ff90: adr x9, #0x75962 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(481634)));
  /* 10ff94: adr x10, #0x10ffa4 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1114020)));
  /* 10ff98: ldrh w11, [x9, x8, lsl #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* 10ff9c: add x10, x10, x11, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* 10ffa0: br x10 */
  switch (ARC_X_R(c, 10) - arc_image_bases[1]) {
    case UINT64_C(1114836): goto L_1102d4;
    case UINT64_C(1115228): goto L_11045c;
    case UINT64_C(1114196): goto L_110054;
    case UINT64_C(1114020): goto L_10ffa4;
    case UINT64_C(1114588): goto L_1101dc;
    case UINT64_C(1114920): goto L_110328;
    case UINT64_C(1114692): goto L_110244;
    case UINT64_C(1114780): goto L_11029c;
    case UINT64_C(1114480): goto L_110170;
    case UINT64_C(1114736): goto L_110270;
    case UINT64_C(1114868): goto L_1102f4;
    case UINT64_C(1114668): goto L_11022c;
    case UINT64_C(1114412): goto L_11012c;
    case UINT64_C(1114432): goto L_110140;
    case UINT64_C(1114532): goto L_1101a4;
    case UINT64_C(1114140): goto L_11001c;
    case UINT64_C(1115108): goto L_1103e4;
    case UINT64_C(1114612): goto L_1101f4;
    case UINT64_C(1114328): goto L_1100d8;
    case UINT64_C(1115160): goto L_110418;
    case UINT64_C(1114360): goto L_1100f8;
    case UINT64_C(1115284): goto L_110494;
    case UINT64_C(1115064): goto L_1103b8;
    case UINT64_C(1114992): goto L_110370;
    case UINT64_C(1114824): goto L_1102c8;
    case UINT64_C(1115212): goto L_11044c;
    case UINT64_C(1114908): goto L_11031c;
    case UINT64_C(1114676): goto L_110234;
    case UINT64_C(1114768): goto L_110290;
    case UINT64_C(1114476): goto L_11016c;
    case UINT64_C(1114720): goto L_110260;
    case UINT64_C(1114856): goto L_1102e8;
    case UINT64_C(1114660): goto L_110224;
    case UINT64_C(1114408): goto L_110128;
    case UINT64_C(1114428): goto L_11013c;
    case UINT64_C(1114528): goto L_1101a0;
    case UINT64_C(1115092): goto L_1103d4;
    case UINT64_C(1114604): goto L_1101ec;
    case UINT64_C(1115144): goto L_110408;
    case UINT64_C(1115268): goto L_110484;
    case UINT64_C(1115048): goto L_1103a8;
    case UINT64_C(1114976): goto L_110360;
    default: break;
  }
  arc_dispatch(c, ARC_X_R(c, 10)); return;
L_10ffa4:;
  /* 10ffa4: bti j */
  /* bti: no architectural effect here */
  /* 10ffa8: ldr x8, [x23, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 10ffac: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10ffb0: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 10ffb4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114040));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10ffb8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 10ffbc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10ffc0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 10ffc4: add x3, x22, #0x240 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(576)));
  /* 10ffc8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10ffcc: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 10ffd0: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 10ffd4: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 10ffd8: bl #0xffa98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114076));
  fn1_ffa98(c);
  /* 10ffdc: sub x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 10ffe0: cmp x8, #0x23f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(575));
  /* 10ffe4: b.gt #0x11046c */
  if (ARC_COND(c, 12)) goto L_11046c;
  /* 10ffe8: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 10ffec: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 10fff0: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 10fff4: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 10fff8: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 10fffc: eor x9, x9, #0x8000000000000001 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ UINT64_C(9223372036854775809)));
  /* 110000: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 110004: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 110008: add w9, w10, w9, lsr #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) + ((uint32_t)(ARC_W_R(c, 9)) >> 1)));
  /* 11000c: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* 110010: msub w8, w9, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* 110014: str w8, [x19, #0x10] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
  /* 110018: b #0x11046c */
  goto L_11046c;
L_11001c:;
  /* 11001c: bti j */
  /* bti: no architectural effect here */
  /* 110020: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 110024: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 110028: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 11002c: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 110030: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 110034: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114168));
  fn1_110db0(c);
  /* 110038: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 11003c: sub w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 110040: cmp w9, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(30));
  /* 110044: b.hi #0x110464 */
  if (ARC_COND(c, 8)) goto L_110464;
  /* 110048: tbnz w8, #2, #0x110464 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110464;
  /* 11004c: str w0, [x19, #0xc] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(12)), ARC_W_R(c, 0));
  /* 110050: b #0x11046c */
  goto L_11046c;
L_110054:;
  /* 110054: bti j */
  /* bti: no architectural effect here */
  /* 110058: ldr x8, [x23, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 11005c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 110060: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 110064: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114216));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 110068: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 11006c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 110070: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 110074: add x3, x22, #0x150 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(336)));
  /* 110078: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 11007c: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 110080: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 110084: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 110088: bl #0xffa98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114252));
  fn1_ffa98(c);
  /* 11008c: sub x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 110090: cmp x8, #0x14f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(335));
  /* 110094: b.gt #0x11046c */
  if (ARC_COND(c, 12)) goto L_11046c;
  /* 110098: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 11009c: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 1100a0: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 1100a4: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 1100a8: mov x9, #0x4925 */
  ARC_X_W(c, 9, UINT64_C(18725));
  /* 1100ac: movk x9, #0x2492, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(613548032)));
  /* 1100b0: movk x9, #0x9249, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(160842230267904)));
  /* 1100b4: movk x9, #0x4924, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(5270337463930322944)));
  /* 1100b8: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 1100bc: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 1100c0: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1100c4: add w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + ARC_W_R(c, 10)));
  /* 1100c8: sub w9, w9, w9, lsl #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ((uint32_t)(ARC_W_R(c, 9)) << 3)));
  /* 1100cc: add w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ARC_W_R(c, 9)));
  /* 1100d0: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
  /* 1100d4: b #0x11046c */
  goto L_11046c;
L_1100d8:;
  /* 1100d8: bti j */
  /* bti: no architectural effect here */
  /* 1100dc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1100e0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1100e4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1100e8: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1100ec: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 1100f0: bl #0x143970 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114356));
  fn1_143970(c);
  /* 1100f4: b #0x11046c */
  goto L_11046c;
L_1100f8:;
  /* 1100f8: bti j */
  /* bti: no architectural effect here */
  /* 1100fc: mov w8, #0x2053 */
  ARC_W_W(c, 8, UINT64_C(8275));
  /* 110100: nop  */
  /* nop: no architectural effect here */
  /* 110104: adr x9, #0x75ad7 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(482007)));
  /* 110108: movk w8, #0x7025, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1881473024)));
  /* 11010c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 110110: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 110114: stur w8, [sp, #0x17] */
  arc_st32(((c)->sp + INT64_C(23)), ARC_W_R(c, 8));
  /* 110118: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 11011c: add x6, sp, #0x10 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(16)));
  /* 110120: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 110124: add x7, x8, #0xb */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + UINT64_C(11)));
L_110128:;
  /* 110128: b #0x110350 */
  goto L_110350;
L_11012c:;
  /* 11012c: bti j */
  /* bti: no architectural effect here */
  /* 110130: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 110134: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 110138: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
L_11013c:;
  /* 11013c: b #0x1101b4 */
  goto L_1101b4;
L_110140:;
  /* 110140: bti j */
  /* bti: no architectural effect here */
  /* 110144: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 110148: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11014c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 110150: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 110154: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 110158: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114460));
  fn1_110db0(c);
  /* 11015c: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 110160: tbnz w8, #2, #0x11046c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11046c;
  /* 110164: sub w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1900)));
  /* 110168: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
L_11016c:;
  /* 11016c: b #0x11046c */
  goto L_11046c;
L_110170:;
  /* 110170: bti j */
  /* bti: no architectural effect here */
  /* 110174: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 110178: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11017c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 110180: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 110184: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 110188: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114508));
  fn1_110db0(c);
  /* 11018c: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 110190: cmp w0, #0x3b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(59));
  /* 110194: b.gt #0x110464 */
  if (ARC_COND(c, 12)) goto L_110464;
  /* 110198: tbnz w8, #2, #0x110464 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110464;
  /* 11019c: str w0, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 0));
L_1101a0:;
  /* 1101a0: b #0x11046c */
  goto L_11046c;
L_1101a4:;
  /* 1101a4: bti j */
  /* bti: no architectural effect here */
  /* 1101a8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1101ac: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1101b0: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
L_1101b4:;
  /* 1101b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114552));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1101b8: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 1101bc: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1101c0: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1101c4: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1101c8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1101cc: csinc x6, x9, x0, ne */
  ARC_X_W(c, 6, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 1101d0: csel x8, x11, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 1101d4: add x7, x6, x8 */
  ARC_X_W(c, 7, (ARC_X_R(c, 6) + ARC_X_R(c, 8)));
  /* 1101d8: b #0x110350 */
  goto L_110350;
L_1101dc:;
  /* 1101dc: bti j */
  /* bti: no architectural effect here */
  /* 1101e0: mov x8, #0x6d25 */
  ARC_X_W(c, 8, UINT64_C(27941));
  /* 1101e4: movk x8, #0x252f, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(623837184)));
  /* 1101e8: movk x8, #0x2f64, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(52106543235072)));
L_1101ec:;
  /* 1101ec: movk x8, #0x7925, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(8729383452727574528)));
  /* 1101f0: b #0x11033c */
  goto L_11033c;
L_1101f4:;
  /* 1101f4: bti j */
  /* bti: no architectural effect here */
  /* 1101f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1101fc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 110200: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 110204: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 110208: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 11020c: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114640));
  fn1_110db0(c);
  /* 110210: ldr w9, [x20] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 20)));
  /* 110214: sub w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 110218: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 11021c: b.hi #0x1104c8 */
  if (ARC_COND(c, 8)) goto L_1104c8;
  /* 110220: tbnz w9, #2, #0x1104c8 */
  if (((ARC_W_R(c, 9)) >> 2 & 1) != 0) goto L_1104c8;
L_110224:;
  /* 110224: str w8, [x19, #0x10] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
  /* 110228: b #0x11046c */
  goto L_11046c;
L_11022c:;
  /* 11022c: bti j */
  /* bti: no architectural effect here */
  /* 110230: mov x8, #0x4825 */
  ARC_X_W(c, 8, UINT64_C(18469));
L_110234:;
  /* 110234: movk x8, #0x253a, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(624558080)));
  /* 110238: movk x8, #0x3a4d, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(64102386892800)));
  /* 11023c: movk x8, #0x5325, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(5991194879286312960)));
  /* 110240: b #0x11033c */
  goto L_11033c;
L_110244:;
  /* 110244: bti j */
  /* bti: no architectural effect here */
  /* 110248: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 11024c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 110250: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 110254: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 110258: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 11025c: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114720));
  fn1_110db0(c);
L_110260:;
  /* 110260: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 110264: cmp w0, #0x17 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(23));
  /* 110268: b.le #0x1102c8 */
  if (ARC_COND(c, 13)) goto L_1102c8;
  /* 11026c: b #0x110464 */
  goto L_110464;
L_110270:;
  /* 110270: bti j */
  /* bti: no architectural effect here */
  /* 110274: mov w8, #0x4d */
  ARC_W_W(c, 8, UINT64_C(77));
  /* 110278: mov w9, #0x4825 */
  ARC_W_W(c, 9, UINT64_C(18469));
  /* 11027c: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 110280: movk w9, #0x253a, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(624558080)));
  /* 110284: strb w8, [sp, #0x14] */
  arc_st8(((c)->sp + INT64_C(20)), ARC_W_R(c, 8));
  /* 110288: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 11028c: str w9, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 9));
L_110290:;
  /* 110290: add x6, sp, #0x10 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(16)));
  /* 110294: add x7, x8, #5 */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* 110298: b #0x110350 */
  goto L_110350;
L_11029c:;
  /* 11029c: bti j */
  /* bti: no architectural effect here */
  /* 1102a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1102a4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1102a8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1102ac: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1102b0: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 1102b4: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114808));
  fn1_110db0(c);
  /* 1102b8: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 1102bc: sub w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 1102c0: cmp w9, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(11));
  /* 1102c4: b.hi #0x110464 */
  if (ARC_COND(c, 8)) goto L_110464;
L_1102c8:;
  /* 1102c8: tbnz w8, #2, #0x110464 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110464;
  /* 1102cc: str w0, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 0));
  /* 1102d0: b #0x11046c */
  goto L_11046c;
L_1102d4:;
  /* 1102d4: bti j */
  /* bti: no architectural effect here */
  /* 1102d8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1102dc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1102e0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1102e4: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
L_1102e8:;
  /* 1102e8: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 1102ec: bl #0x143988 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114864));
  fn1_143988(c);
  /* 1102f0: b #0x11046c */
  goto L_11046c;
L_1102f4:;
  /* 1102f4: bti j */
  /* bti: no architectural effect here */
  /* 1102f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1102fc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 110300: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 110304: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 110308: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 11030c: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114896));
  fn1_110db0(c);
  /* 110310: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 110314: cmp w0, #0x3c */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(60));
  /* 110318: b.gt #0x110464 */
  if (ARC_COND(c, 12)) goto L_110464;
L_11031c:;
  /* 11031c: tbnz w8, #2, #0x110464 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110464;
  /* 110320: str w0, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 0));
  /* 110324: b #0x11046c */
  goto L_11046c;
L_110328:;
  /* 110328: bti j */
  /* bti: no architectural effect here */
  /* 11032c: mov x8, #0x5925 */
  ARC_X_W(c, 8, UINT64_C(22821));
  /* 110330: movk x8, #0x252d, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(623706112)));
  /* 110334: movk x8, #0x2d6d, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(49946174685184)));
  /* 110338: movk x8, #0x6425, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(7216173977931087872)));
L_11033c:;
  /* 11033c: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 110340: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 110344: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 110348: add x6, sp, #0x10 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(16)));
  /* 11034c: add x7, x8, #8 */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + UINT64_C(8)));
L_110350:;
  /* 110350: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 110354: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 110358: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 11035c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
L_110360:;
  /* 110360: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* 110364: bl #0x143958 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1114984));
  fn1_143958(c);
  /* 110368: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 11036c: b #0x11046c */
  goto L_11046c;
L_110370:;
  /* 110370: bti j */
  /* bti: no architectural effect here */
  /* 110374: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 110378: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 11037c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 110380: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 110384: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 110388: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115020));
  fn1_110db0(c);
  /* 11038c: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 110390: tbnz w8, #2, #0x11046c */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_11046c;
  /* 110394: add w8, w0, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1900)));
  /* 110398: cmp w0, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(100));
  /* 11039c: add w9, w0, #0x7d0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) + UINT64_C(2000)));
  /* 1103a0: csel w8, w8, w0, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 0)));
  /* 1103a4: cmp w0, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(69));
L_1103a8:;
  /* 1103a8: csel w8, w9, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 1103ac: sub w8, w8, #0x76c */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1900)));
  /* 1103b0: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1103b4: b #0x11046c */
  goto L_11046c;
L_1103b8:;
  /* 1103b8: bti j */
  /* bti: no architectural effect here */
  /* 1103bc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1103c0: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1103c4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1103c8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1103cc: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 1103d0: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
L_1103d4:;
  /* 1103d4: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 1103d8: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* 1103dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115104));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1103e0: b #0x110470 */
  goto L_110470;
L_1103e4:;
  /* 1103e4: bti j */
  /* bti: no architectural effect here */
  /* 1103e8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1103ec: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1103f0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1103f4: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1103f8: mov w4, #3 */
  ARC_W_W(c, 4, UINT64_C(3));
  /* 1103fc: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115136));
  fn1_110db0(c);
  /* 110400: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 110404: cmp w0, #0x16d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(365));
L_110408:;
  /* 110408: b.gt #0x110464 */
  if (ARC_COND(c, 12)) goto L_110464;
  /* 11040c: tbnz w8, #2, #0x110464 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110464;
  /* 110410: str w0, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 0));
  /* 110414: b #0x11046c */
  goto L_11046c;
L_110418:;
  /* 110418: bti j */
  /* bti: no architectural effect here */
  /* 11041c: ldr x8, [x23, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 110420: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 110424: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 110428: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115180));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11042c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 110430: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 110434: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 110438: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11043c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 110440: ldr x8, [x0, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 110444: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 110448: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
L_11044c:;
  /* 11044c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 110450: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 110454: cmn x10, x8 */
  (void)arc_add64(c, ARC_X_R(c, 10), ARC_X_R(c, 8), 0);
  /* 110458: b.ne #0x1104d0 */
  if (ARC_COND(c, 1)) goto L_1104d0;
L_11045c:;
  /* 11045c: bti j */
  /* bti: no architectural effect here */
  /* 110460: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
L_110464:;
  /* 110464: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
L_110468:;
  /* 110468: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_11046c:;
  /* 11046c: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
L_110470:;
  /* 110470: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110474: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 110478: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11047c: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 110480: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
L_110484:;
  /* 110484: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 110488: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 11048c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 110490: ret  */
  return;
L_110494:;
  /* 110494: bti j */
  /* bti: no architectural effect here */
  /* 110498: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 11049c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1104a0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1104a4: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1104a8: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* 1104ac: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115312));
  fn1_110db0(c);
  /* 1104b0: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 1104b4: cmp w0, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(6));
  /* 1104b8: b.gt #0x110464 */
  if (ARC_COND(c, 12)) goto L_110464;
  /* 1104bc: tbnz w8, #2, #0x110464 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110464;
  /* 1104c0: str w0, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 0));
  /* 1104c4: b #0x11046c */
  goto L_11046c;
L_1104c8:;
  /* 1104c8: orr w8, w9, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) | UINT64_C(4)));
  /* 1104cc: b #0x110468 */
  goto L_110468;
L_1104d0:;
  /* 1104d0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1104d4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1104d8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1104dc: add x3, x22, #0x30 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(48)));
  /* 1104e0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1104e4: mov x4, x24 */
  ARC_X_W(c, 4, ARC_X_R(c, 24));
  /* 1104e8: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 1104ec: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 1104f0: bl #0xffa98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115380));
  fn1_ffa98(c);
  /* 1104f4: ldr w8, [x19, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1104f8: subs x9, x0, x22 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22)));
  /* 1104fc: b.ne #0x110510 */
  if (ARC_COND(c, 1)) goto L_110510;
  /* 110500: cmp w8, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(12));
  /* 110504: b.ne #0x110510 */
  if (ARC_COND(c, 1)) goto L_110510;
  /* 110508: str wzr, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 31));
  /* 11050c: b #0x11046c */
  goto L_11046c;
L_110510:;
  /* 110510: cmp x9, #0x18 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(24));
  /* 110514: b.ne #0x11046c */
  if (ARC_COND(c, 1)) goto L_11046c;
  /* 110518: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 11051c: b.gt #0x11046c */
  if (ARC_COND(c, 12)) goto L_11046c;
  /* 110520: add w8, w8, #0xc */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(12)));
  /* 110524: str w8, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 8));
  /* 110528: b #0x11046c */
  goto L_11046c;
L_11052c:;
  /* 11052c: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115440));
  fn1_fc3b8(c);
  /* 110530: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 110534: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 110538: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115452));
  fn1_d2a78(c);
  /* 11053c: b #0x110548 */
  goto L_110548;
  /* 110540: b #0x110544 */
  goto L_110544;
L_110544:;
  /* 110544: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_110548:;
  /* 110548: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11054c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115472));
  fn1_143478(c);
  /* 110550: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 110554: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115480));
  fn1_9cc20(c);
}

void fn1_113cd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057616));
  /* 113cd0: bti c */
  /* bti: no architectural effect here */
  /* 113cd4: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113cd8: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113cdc: ret  */
  return;
}

void fn1_119090(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039079056));
  /* 119090: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 119094: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 119098: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11909c: stp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1190a0: stp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1190a4: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1190a8: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1190ac: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1190b0: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 1190b4: ldr w8, [x29, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(144))));
  /* 1190b8: ldr x19, [x29, #0x78] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(120))));
  /* 1190bc: mov x24, x5 */
  ARC_X_W(c, 24, ARC_X_R(c, 5));
  /* 1190c0: ldrb w9, [x29, #0x68] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(104))));
  /* 1190c4: ldrb w22, [x29, #0x70] */
  ARC_W_W(c, 22, arc_ld8((ARC_X_R(c, 29) + INT64_C(112))));
  /* 1190c8: mov x25, x4 */
  ARC_X_W(c, 25, ARC_X_R(c, 4));
  /* 1190cc: stur w8, [x29, #-0x14] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-20)), ARC_W_R(c, 8));
  /* 1190d0: ldp x8, x27, [x29, #0x80] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(128));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1190d4: ldr x28, [x29, #0x60] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 29) + INT64_C(96))));
  /* 1190d8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1190dc: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 1190e0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1190e4: str w9, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 9));
  /* 1190e8: and x9, x7, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 7) & UINT64_C(1)));
  /* 1190ec: stur x8, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 8));
  /* 1190f0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1190f4: add x16, x19, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 1190f8: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 1190fc: add x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 119100: stur x6, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 6));
  /* 119104: stur w3, [x29, #-0x2c] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-44)), ARC_W_R(c, 3));
  /* 119108: str x0, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 0));
  /* 11910c: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 119110: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 119114: stp x8, x1, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 119118: stur x27, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 27));
  /* 11911c: stur x16, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 16));
  /* 119120: b #0x119138 */
  goto L_119138;
L_119124:;
  /* 119124: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 119128: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
L_11912c:;
  /* 11912c: add x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 119130: cmp x20, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(4));
  /* 119134: b.eq #0x119594 */
  if (ARC_COND(c, 0)) goto L_119594;
L_119138:;
  /* 119138: ldrb w8, [x28, x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 28) + ARC_X_R(c, 20))));
  /* 11913c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 119140: b.le #0x1191f8 */
  if (ARC_COND(c, 13)) goto L_1191f8;
  /* 119144: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 119148: b.eq #0x119238 */
  if (ARC_COND(c, 0)) goto L_119238;
  /* 11914c: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 119150: b.eq #0x119294 */
  if (ARC_COND(c, 0)) goto L_119294;
  /* 119154: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* 119158: b.ne #0x11912c */
  if (ARC_COND(c, 1)) goto L_11912c;
  /* 11915c: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 119160: add x25, x25, x8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + ARC_X_R(c, 8)));
  /* 119164: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* 119168: mov x27, x25 */
  ARC_X_W(c, 27, ARC_X_R(c, 25));
  /* 11916c: b.hs #0x11919c */
  if (ARC_COND(c, 2)) goto L_11919c;
  /* 119170: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 119174: mov x27, x25 */
  ARC_X_W(c, 27, ARC_X_R(c, 25));
  /* 119178: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
L_11917c:;
  /* 11917c: ldrsb x9, [x27] */
  ARC_X_W(c, 9, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 27))));
  /* 119180: tbnz x9, #0x3f, #0x11919c */
  if (((ARC_X_R(c, 9)) >> 63 & 1) != 0) goto L_11919c;
  /* 119184: ldr x9, [x8, x9, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 119188: tbz w9, #6, #0x11919c */
  if (((ARC_W_R(c, 9)) >> 6 & 1) == 0) goto L_11919c;
  /* 11918c: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 119190: cmp x27, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 24));
  /* 119194: b.lo #0x11917c */
  if (ARC_COND(c, 3)) goto L_11917c;
  /* 119198: mov x27, x24 */
  ARC_X_W(c, 27, ARC_X_R(c, 24));
L_11919c:;
  /* 11919c: ldur w8, [x29, #-0x14] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
  /* 1191a0: ldr x26, [x21] */
  ARC_X_W(c, 26, arc_ld64(ARC_X_R(c, 21)));
  /* 1191a4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1191a8: b.lt #0x11932c */
  if (ARC_COND(c, 11)) goto L_11932c;
  /* 1191ac: cmp x27, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 25));
  /* 1191b0: b.ls #0x1192d0 */
  if (ARC_COND(c, 9)) goto L_1192d0;
  /* 1191b4: ldur w23, [x29, #-0x14] */
  ARC_W_W(c, 23, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
  /* 1191b8: sub x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - UINT64_C(1)));
L_1191bc:;
  /* 1191bc: ldr x10, [x21] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 21)));
  /* 1191c0: cmp x8, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 25));
  /* 1191c4: mov w9, w23 */
  ARC_W_W(c, 9, ARC_W_R(c, 23));
  /* 1191c8: ldrb w11, [x8], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* 1191cc: sub w23, w23, #1 */
  ARC_W_W(c, 23, (ARC_W_R(c, 23) - UINT64_C(1)));
  /* 1191d0: add x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 1191d4: str x12, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 12));
  /* 1191d8: strb w11, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 11));
  /* 1191dc: b.ls #0x1191e8 */
  if (ARC_COND(c, 9)) goto L_1191e8;
  /* 1191e0: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* 1191e4: b.ne #0x1191bc */
  if (ARC_COND(c, 1)) goto L_1191bc;
L_1191e8:;
  /* 1191e8: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* 1191ec: add x27, x8, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1191f0: b.ne #0x1192d4 */
  if (ARC_COND(c, 1)) goto L_1192d4;
  /* 1191f4: b #0x119314 */
  goto L_119314;
L_1191f8:;
  /* 1191f8: cbz w8, #0x119124 */
  if ((ARC_W_R(c, 8)) == 0) goto L_119124;
  /* 1191fc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 119200: b.ne #0x11912c */
  if (ARC_COND(c, 1)) goto L_11912c;
  /* 119204: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 119208: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11920c: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 119210: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 119214: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 119218: ldr x8, [x9, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(56))));
  /* 11921c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1151520));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 119220: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 119224: ldur x16, [x29, #-0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 119228: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 11922c: str x9, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* 119230: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 119234: b #0x11912c */
  goto L_11912c;
L_119238:;
  /* 119238: ldur x9, [x29, #-0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 11923c: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* 119240: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 119244: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 119248: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11924c: csel x26, x10, x9, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 119250: ldur w9, [x29, #-0x2c] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-44))));
  /* 119254: tbz w9, #9, #0x11912c */
  if (((ARC_W_R(c, 9)) >> 9 & 1) == 0) goto L_11912c;
  /* 119258: cbz x26, #0x11912c */
  if ((ARC_X_R(c, 26)) == 0) goto L_11912c;
  /* 11925c: ldur x9, [x29, #-0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 119260: ldr x27, [x21] */
  ARC_X_W(c, 27, arc_ld64(ARC_X_R(c, 21)));
  /* 119264: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 119268: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 11926c: mov x2, x26 */
  ARC_X_W(c, 2, ARC_X_R(c, 26));
  /* 119270: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 119274: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 119278: csel x1, x8, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 11927c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1151616));
  fn1_1449f0(c);
  /* 119280: ldur x16, [x29, #-0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 119284: add x8, x27, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + ARC_X_R(c, 26)));
  /* 119288: ldur x27, [x29, #-0x20] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 11928c: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 119290: b #0x11912c */
  goto L_11912c;
L_119294:;
  /* 119294: ldrb w8, [x27] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 27)));
  /* 119298: ldr x9, [x27, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(8))));
  /* 11929c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1192a0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1192a4: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1192a8: cbz x8, #0x11912c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11912c;
  /* 1192ac: ldr x8, [x27, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* 1192b0: ldr x10, [sp, #0x18] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1192b4: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* 1192b8: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 1192bc: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1192c0: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1192c4: str x10, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* 1192c8: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* 1192cc: b #0x11912c */
  goto L_11912c;
L_1192d0:;
  /* 1192d0: ldur w23, [x29, #-0x14] */
  ARC_W_W(c, 23, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
L_1192d4:;
  /* 1192d4: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1192d8: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 1192dc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1192e0: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 1192e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1151720));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1192e8: cmp w23, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(1));
  /* 1192ec: b.lt #0x119310 */
  if (ARC_COND(c, 11)) goto L_119310;
  /* 1192f0: add w8, w23, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 23) + UINT64_C(1)));
L_1192f4:;
  /* 1192f4: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* 1192f8: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 1192fc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 119300: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 119304: str x10, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* 119308: strb w0, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 0));
  /* 11930c: b.hi #0x1192f4 */
  if (ARC_COND(c, 8)) goto L_1192f4;
L_119310:;
  /* 119310: ldur x16, [x29, #-0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
L_119314:;
  /* 119314: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 119318: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11931c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 119320: str x9, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* 119324: ldr w9, [sp, #0x14] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(20))));
  /* 119328: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
L_11932c:;
  /* 11932c: cmp x27, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 25));
  /* 119330: b.eq #0x119360 */
  if (ARC_COND(c, 0)) goto L_119360;
  /* 119334: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 119338: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 11933c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 119340: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 119344: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 119348: cbz x9, #0x119428 */
  if ((ARC_X_R(c, 9)) == 0) goto L_119428;
  /* 11934c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 119350: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 119354: csel x8, x16, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 9)));
  /* 119358: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 11935c: b #0x11942c */
  goto L_11942c;
L_119360:;
  /* 119360: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 119364: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 119368: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 11936c: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 119370: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1151860));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 119374: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 119378: ldur x16, [x29, #-0x10] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 11937c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 119380: str x9, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* 119384: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
L_119388:;
  /* 119388: ldr x10, [x21] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 21)));
  /* 11938c: cmp x26, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 10));
  /* 119390: b.eq #0x119420 */
  if (ARC_COND(c, 0)) goto L_119420;
  /* 119394: sub x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 119398: ldur x27, [x29, #-0x20] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 11939c: cmp x26, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* 1193a0: b.hs #0x11912c */
  if (ARC_COND(c, 2)) goto L_11912c;
  /* 1193a4: sub x12, x10, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(2)));
  /* 1193a8: add x11, x26, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* 1193ac: mvn x13, x26 */
  ARC_X_W(c, 13, (~(uint64_t)(ARC_X_R(c, 26))));
  /* 1193b0: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* 1193b4: mov w15, #1 */
  ARC_W_W(c, 15, UINT64_C(1));
  /* 1193b8: csinc x9, x12, x26, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ((ARC_X_R(c, 26)) + 1)));
  /* 1193bc: adds x9, x9, x13 */
  ARC_X_W(c, 9, arc_add64(c, ARC_X_R(c, 9), ARC_X_R(c, 13), 0));
  /* 1193c0: cset w14, ne */
  ARC_W_W(c, 14, (ARC_COND(c, 1) ? 1 : 0));
  /* 1193c4: cinc x15, x15, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1193c8: sub x9, x9, x14 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 14)));
  /* 1193cc: add x9, x15, x9, lsr #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 15) + ((uint64_t)(ARC_X_R(c, 9)) >> 1)));
  /* 1193d0: cmp x9, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(8));
  /* 1193d4: b.lo #0x119570 */
  if (ARC_COND(c, 3)) goto L_119570;
  /* 1193d8: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* 1193dc: csinc x12, x12, x26, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ((ARC_X_R(c, 26)) + 1)));
  /* 1193e0: adds x12, x12, x13 */
  ARC_X_W(c, 12, arc_add64(c, ARC_X_R(c, 12), ARC_X_R(c, 13), 0));
  /* 1193e4: cset w13, ne */
  ARC_W_W(c, 13, (ARC_COND(c, 1) ? 1 : 0));
  /* 1193e8: sub x12, x12, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 13)));
  /* 1193ec: lsr x12, x12, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(1)) & 63)));
  /* 1193f0: cinc x12, x12, ne */
  ARC_X_W(c, 12, (ARC_COND(c, 1) ? (ARC_X_R(c, 12)) + 1 : (ARC_X_R(c, 12))));
  /* 1193f4: cmp x26, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 10));
  /* 1193f8: b.hs #0x119410 */
  if (ARC_COND(c, 2)) goto L_119410;
  /* 1193fc: mvn x13, x12 */
  ARC_X_W(c, 13, (~(uint64_t)(ARC_X_R(c, 12))));
  /* 119400: add x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* 119404: add x12, x13, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 13) + ARC_X_R(c, 10)));
  /* 119408: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* 11940c: b.lo #0x119570 */
  if (ARC_COND(c, 3)) goto L_119570;
L_119410:;
  /* 119410: cmp x9, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(32));
  /* 119414: b.hs #0x1194bc */
  if (ARC_COND(c, 2)) goto L_1194bc;
  /* 119418: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* 11941c: b #0x11951c */
  goto L_11951c;
L_119420:;
  /* 119420: ldur x27, [x29, #-0x20] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 119424: b #0x11912c */
  goto L_11912c;
L_119428:;
  /* 119428: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
L_11942c:;
  /* 11942c: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* 119430: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* 119434: b #0x119460 */
  goto L_119460;
L_119438:;
  /* 119438: ldrb w8, [x8, x9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
L_11943c:;
  /* 11943c: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
L_119440:;
  /* 119440: ldr x11, [x21] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 21)));
  /* 119444: ldrb w12, [x27, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 27) + INT64_C(-1));
    ARC_X_W(c, 27, ARC_X_R(c, 27) + INT64_C(-1));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* 119448: cmp x27, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 25));
  /* 11944c: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 119450: add x13, x11, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 119454: str x13, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 13));
  /* 119458: strb w12, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 12));
  /* 11945c: b.eq #0x119388 */
  if (ARC_COND(c, 0)) goto L_119388;
L_119460:;
  /* 119460: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* 119464: b.ne #0x119440 */
  if (ARC_COND(c, 1)) goto L_119440;
  /* 119468: ldr x10, [x21] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 21)));
  /* 11946c: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* 119470: add x11, x10, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 119474: str x11, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 11));
  /* 119478: strb w22, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 22));
  /* 11947c: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* 119480: ldr x11, [x19, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 119484: lsr x12, x10, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 119488: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 11948c: csel x11, x12, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 119490: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 119494: b.ls #0x11943c */
  if (ARC_COND(c, 9)) goto L_11943c;
  /* 119498: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 11949c: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 1194a0: csel x8, x16, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 8)));
  /* 1194a4: ldrb w10, [x8, x9] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
  /* 1194a8: cmp w10, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(255));
  /* 1194ac: b.ne #0x119438 */
  if (ARC_COND(c, 1)) goto L_119438;
  /* 1194b0: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* 1194b4: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* 1194b8: b #0x119440 */
  goto L_119440;
L_1194bc:;
  /* 1194bc: and x11, x9, #0xffffffffffffffe0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551584)));
  /* 1194c0: add x12, x26, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 26) + UINT64_C(16)));
  /* 1194c4: sub x13, x10, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) - UINT64_C(16)));
  /* 1194c8: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
L_1194cc:;
  /* 1194cc: ldp q1, q0, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1194d0: sub x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(32)));
  /* 1194d4: ldp q2, q3, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1194d8: rev64 v0.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[7];
    _t.u8[1] = (c)->q[0].u8[6];
    _t.u8[2] = (c)->q[0].u8[5];
    _t.u8[3] = (c)->q[0].u8[4];
    _t.u8[4] = (c)->q[0].u8[3];
    _t.u8[5] = (c)->q[0].u8[2];
    _t.u8[6] = (c)->q[0].u8[1];
    _t.u8[7] = (c)->q[0].u8[0];
    _t.u8[8] = (c)->q[0].u8[15];
    _t.u8[9] = (c)->q[0].u8[14];
    _t.u8[10] = (c)->q[0].u8[13];
    _t.u8[11] = (c)->q[0].u8[12];
    _t.u8[12] = (c)->q[0].u8[11];
    _t.u8[13] = (c)->q[0].u8[10];
    _t.u8[14] = (c)->q[0].u8[9];
    _t.u8[15] = (c)->q[0].u8[8];
    (c)->q[0] = _t; }
  /* 1194dc: rev64 v1.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[7];
    _t.u8[1] = (c)->q[1].u8[6];
    _t.u8[2] = (c)->q[1].u8[5];
    _t.u8[3] = (c)->q[1].u8[4];
    _t.u8[4] = (c)->q[1].u8[3];
    _t.u8[5] = (c)->q[1].u8[2];
    _t.u8[6] = (c)->q[1].u8[1];
    _t.u8[7] = (c)->q[1].u8[0];
    _t.u8[8] = (c)->q[1].u8[15];
    _t.u8[9] = (c)->q[1].u8[14];
    _t.u8[10] = (c)->q[1].u8[13];
    _t.u8[11] = (c)->q[1].u8[12];
    _t.u8[12] = (c)->q[1].u8[11];
    _t.u8[13] = (c)->q[1].u8[10];
    _t.u8[14] = (c)->q[1].u8[9];
    _t.u8[15] = (c)->q[1].u8[8];
    (c)->q[1] = _t; }
  /* 1194e0: rev64 v2.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[7];
    _t.u8[1] = (c)->q[2].u8[6];
    _t.u8[2] = (c)->q[2].u8[5];
    _t.u8[3] = (c)->q[2].u8[4];
    _t.u8[4] = (c)->q[2].u8[3];
    _t.u8[5] = (c)->q[2].u8[2];
    _t.u8[6] = (c)->q[2].u8[1];
    _t.u8[7] = (c)->q[2].u8[0];
    _t.u8[8] = (c)->q[2].u8[15];
    _t.u8[9] = (c)->q[2].u8[14];
    _t.u8[10] = (c)->q[2].u8[13];
    _t.u8[11] = (c)->q[2].u8[12];
    _t.u8[12] = (c)->q[2].u8[11];
    _t.u8[13] = (c)->q[2].u8[10];
    _t.u8[14] = (c)->q[2].u8[9];
    _t.u8[15] = (c)->q[2].u8[8];
    (c)->q[2] = _t; }
  /* 1194e4: rev64 v3.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[7];
    _t.u8[1] = (c)->q[3].u8[6];
    _t.u8[2] = (c)->q[3].u8[5];
    _t.u8[3] = (c)->q[3].u8[4];
    _t.u8[4] = (c)->q[3].u8[3];
    _t.u8[5] = (c)->q[3].u8[2];
    _t.u8[6] = (c)->q[3].u8[1];
    _t.u8[7] = (c)->q[3].u8[0];
    _t.u8[8] = (c)->q[3].u8[15];
    _t.u8[9] = (c)->q[3].u8[14];
    _t.u8[10] = (c)->q[3].u8[13];
    _t.u8[11] = (c)->q[3].u8[12];
    _t.u8[12] = (c)->q[3].u8[11];
    _t.u8[13] = (c)->q[3].u8[10];
    _t.u8[14] = (c)->q[3].u8[9];
    _t.u8[15] = (c)->q[3].u8[8];
    (c)->q[3] = _t; }
  /* 1194e8: ext v0.16b, v0.16b, v0.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[8];
    _t.u8[1] = (c)->q[0].u8[9];
    _t.u8[2] = (c)->q[0].u8[10];
    _t.u8[3] = (c)->q[0].u8[11];
    _t.u8[4] = (c)->q[0].u8[12];
    _t.u8[5] = (c)->q[0].u8[13];
    _t.u8[6] = (c)->q[0].u8[14];
    _t.u8[7] = (c)->q[0].u8[15];
    _t.u8[8] = (c)->q[0].u8[0];
    _t.u8[9] = (c)->q[0].u8[1];
    _t.u8[10] = (c)->q[0].u8[2];
    _t.u8[11] = (c)->q[0].u8[3];
    _t.u8[12] = (c)->q[0].u8[4];
    _t.u8[13] = (c)->q[0].u8[5];
    _t.u8[14] = (c)->q[0].u8[6];
    _t.u8[15] = (c)->q[0].u8[7];
    (c)->q[0] = _t; }
  /* 1194ec: ext v1.16b, v1.16b, v1.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[8];
    _t.u8[1] = (c)->q[1].u8[9];
    _t.u8[2] = (c)->q[1].u8[10];
    _t.u8[3] = (c)->q[1].u8[11];
    _t.u8[4] = (c)->q[1].u8[12];
    _t.u8[5] = (c)->q[1].u8[13];
    _t.u8[6] = (c)->q[1].u8[14];
    _t.u8[7] = (c)->q[1].u8[15];
    _t.u8[8] = (c)->q[1].u8[0];
    _t.u8[9] = (c)->q[1].u8[1];
    _t.u8[10] = (c)->q[1].u8[2];
    _t.u8[11] = (c)->q[1].u8[3];
    _t.u8[12] = (c)->q[1].u8[4];
    _t.u8[13] = (c)->q[1].u8[5];
    _t.u8[14] = (c)->q[1].u8[6];
    _t.u8[15] = (c)->q[1].u8[7];
    (c)->q[1] = _t; }
  /* 1194f0: ext v2.16b, v2.16b, v2.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[8];
    _t.u8[1] = (c)->q[2].u8[9];
    _t.u8[2] = (c)->q[2].u8[10];
    _t.u8[3] = (c)->q[2].u8[11];
    _t.u8[4] = (c)->q[2].u8[12];
    _t.u8[5] = (c)->q[2].u8[13];
    _t.u8[6] = (c)->q[2].u8[14];
    _t.u8[7] = (c)->q[2].u8[15];
    _t.u8[8] = (c)->q[2].u8[0];
    _t.u8[9] = (c)->q[2].u8[1];
    _t.u8[10] = (c)->q[2].u8[2];
    _t.u8[11] = (c)->q[2].u8[3];
    _t.u8[12] = (c)->q[2].u8[4];
    _t.u8[13] = (c)->q[2].u8[5];
    _t.u8[14] = (c)->q[2].u8[6];
    _t.u8[15] = (c)->q[2].u8[7];
    (c)->q[2] = _t; }
  /* 1194f4: ext v3.16b, v3.16b, v3.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[8];
    _t.u8[1] = (c)->q[3].u8[9];
    _t.u8[2] = (c)->q[3].u8[10];
    _t.u8[3] = (c)->q[3].u8[11];
    _t.u8[4] = (c)->q[3].u8[12];
    _t.u8[5] = (c)->q[3].u8[13];
    _t.u8[6] = (c)->q[3].u8[14];
    _t.u8[7] = (c)->q[3].u8[15];
    _t.u8[8] = (c)->q[3].u8[0];
    _t.u8[9] = (c)->q[3].u8[1];
    _t.u8[10] = (c)->q[3].u8[2];
    _t.u8[11] = (c)->q[3].u8[3];
    _t.u8[12] = (c)->q[3].u8[4];
    _t.u8[13] = (c)->q[3].u8[5];
    _t.u8[14] = (c)->q[3].u8[6];
    _t.u8[15] = (c)->q[3].u8[7];
    (c)->q[3] = _t; }
  /* 1194f8: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1194fc: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 119500: stp q3, q2, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 119504: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* 119508: cbnz x14, #0x1194cc */
  if ((ARC_X_R(c, 14)) != 0) goto L_1194cc;
  /* 11950c: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* 119510: b.eq #0x11912c */
  if (ARC_COND(c, 0)) goto L_11912c;
  /* 119514: tst x9, #0x18 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(24)));
  /* 119518: b.eq #0x119568 */
  if (ARC_COND(c, 0)) goto L_119568;
L_11951c:;
  /* 11951c: and x12, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* 119520: sub x14, x10, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 10) - ARC_X_R(c, 11)));
  /* 119524: add x13, x26, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 26) + ARC_X_R(c, 11)));
  /* 119528: sub x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 12)));
  /* 11952c: add x10, x26, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) + ARC_X_R(c, 12)));
  /* 119530: sub x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* 119534: sub x14, x14, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(8)));
L_119538:;
  /* 119538: ldr d0, [x14] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 14)));
  /* 11953c: ldr d1, [x13] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 13)));
  /* 119540: adds x11, x11, #8 */
  ARC_X_W(c, 11, arc_add64(c, ARC_X_R(c, 11), UINT64_C(8), 0));
  /* 119544: rev64 v0.8b, v0.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[7];
    _t.u8[1] = (c)->q[0].u8[6];
    _t.u8[2] = (c)->q[0].u8[5];
    _t.u8[3] = (c)->q[0].u8[4];
    _t.u8[4] = (c)->q[0].u8[3];
    _t.u8[5] = (c)->q[0].u8[2];
    _t.u8[6] = (c)->q[0].u8[1];
    _t.u8[7] = (c)->q[0].u8[0];
    (c)->q[0] = _t; }
  /* 119548: rev64 v1.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[7];
    _t.u8[1] = (c)->q[1].u8[6];
    _t.u8[2] = (c)->q[1].u8[5];
    _t.u8[3] = (c)->q[1].u8[4];
    _t.u8[4] = (c)->q[1].u8[3];
    _t.u8[5] = (c)->q[1].u8[2];
    _t.u8[6] = (c)->q[1].u8[1];
    _t.u8[7] = (c)->q[1].u8[0];
    (c)->q[1] = _t; }
  /* 11954c: str d0, [x13], #8 */
  arc_st64(ARC_X_R(c, 13), (c)->q[0].u64[0]);
  ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(8));
  /* 119550: str d1, [x14], #0xfffffffffffffff8 */
  arc_st64(ARC_X_R(c, 14), (c)->q[1].u64[0]);
  ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(-8));
  /* 119554: b.ne #0x119538 */
  if (ARC_COND(c, 1)) goto L_119538;
  /* 119558: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 11955c: mov x26, x10 */
  ARC_X_W(c, 26, ARC_X_R(c, 10));
  /* 119560: b.eq #0x11912c */
  if (ARC_COND(c, 0)) goto L_11912c;
  /* 119564: b #0x119570 */
  goto L_119570;
L_119568:;
  /* 119568: sub x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 11)));
  /* 11956c: add x26, x26, x11 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + ARC_X_R(c, 11)));
L_119570:;
  /* 119570: add x9, x26, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + UINT64_C(1)));
L_119574:;
  /* 119574: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* 119578: ldurb w11, [x9, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* 11957c: sturb w10, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 10));
  /* 119580: strb w11, [x8], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 119584: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 119588: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 11958c: b.lo #0x119574 */
  if (ARC_COND(c, 3)) goto L_119574;
  /* 119590: b #0x11912c */
  goto L_11912c;
L_119594:;
  /* 119594: ldrb w9, [x27] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 27)));
  /* 119598: ldr x8, [x27, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 27) + INT64_C(8))));
  /* 11959c: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 1195a0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1195a4: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 1195a8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1195ac: b.ls #0x1195f0 */
  if (ARC_COND(c, 9)) goto L_1195f0;
  /* 1195b0: ldr x10, [x27, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* 1195b4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1195b8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1195bc: ldr x23, [x21] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 21)));
  /* 1195c0: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 1195c4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1195c8: add x1, x9, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1195cc: add x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 1195d0: sub x24, x9, x1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) - ARC_X_R(c, 1)));
  /* 1195d4: b.eq #0x1195e4 */
  if (ARC_COND(c, 0)) goto L_1195e4;
  /* 1195d8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1195dc: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 1195e0: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152484));
  fn1_1449f0(c);
L_1195e4:;
  /* 1195e4: add x8, x23, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 24)));
  /* 1195e8: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1195ec: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
L_1195f0:;
  /* 1195f0: ldur w9, [x29, #-0x2c] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-44))));
  /* 1195f4: mov w8, #0xb0 */
  ARC_W_W(c, 8, UINT64_C(176));
  /* 1195f8: and w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* 1195fc: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 119600: b.eq #0x119618 */
  if (ARC_COND(c, 0)) goto L_119618;
  /* 119604: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 119608: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 11960c: b.ne #0x119614 */
  if (ARC_COND(c, 1)) goto L_119614;
  /* 119610: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
L_119614:;
  /* 119614: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
L_119618:;
  /* 119618: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11961c: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 119620: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 119624: ldp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 119628: ldp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 11962c: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 119630: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 119634: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 119638: ret  */
  return;
}

void fn1_1249e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039126496));
  /* 1249e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1249e4: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1249e8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1249ec: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1249f0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1249f4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1249f8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1249fc: cbz x1, #0x124ad4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_124ad4;
  /* 124a00: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124a04: mov w0, #0x138 */
  ARC_W_W(c, 0, UINT64_C(312));
  /* 124a08: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 124a0c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198608));
  fn1_1428f0(c);
  /* 124a10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 124a14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 124a18: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198620));
  fn1_142860(c);
  /* 124a1c: cmn x0, #8 */
  (void)arc_add64(c, ARC_X_R(c, 0), UINT64_C(8), 0);
  /* 124a20: b.hs #0x124ae0 */
  if (ARC_COND(c, 2)) goto L_124ae0;
  /* 124a24: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 124a28: cmp x0, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(23));
  /* 124a2c: b.hs #0x124a48 */
  if (ARC_COND(c, 2)) goto L_124a48;
  /* 124a30: lsl w8, w22, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 22)) << ((UINT64_C(1)) & 31)));
  /* 124a34: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 124a38: orr x23, x9, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 124a3c: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 124a40: cbnz x22, #0x124a70 */
  if ((ARC_X_R(c, 22)) != 0) goto L_124a70;
  /* 124a44: b #0x124a80 */
  goto L_124a80;
L_124a48:;
  /* 124a48: orr x8, x22, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(7)));
  /* 124a4c: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 124a50: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 124a54: csinc x24, x9, x8, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 124a58: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 124a5c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198688));
  fn1_1428f0(c);
  /* 124a60: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* 124a64: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 124a68: stp x22, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 124a6c: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_124a70:;
  /* 124a70: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 124a74: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 124a78: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 124a7c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198720));
  fn1_1449d8(c);
L_124a80:;
  /* 124a80: strb wzr, [x23, x22] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 22)), ARC_W_R(c, 31));
  /* 124a84: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 124a88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124a8c: bl #0x11de78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198736));
  fn1_11de78(c);
  /* 124a90: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 124a94: tbz w8, #0, #0x124aa8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_124aa8;
  /* 124a98: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 124a9c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 124aa0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 124aa4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198760));
  fn1_142608(c);
L_124aa8:;
  /* 124aa8: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 124aac: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124ab0: str x19, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* 124ab4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198776));
  fn1_db2e0(c);
  /* 124ab8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 124abc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 124ac0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 124ac4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 124ac8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 124acc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124ad0: ret  */
  return;
L_124ad4:;
  /* 124ad4: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 124ad8: add x0, x0, #0x55e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1374)));
  /* 124adc: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198816));
  fn1_142c98(c);
L_124ae0:;
  /* 124ae0: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198820));
  fn1_d7d54(c);
  /* 124ae4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 124ae8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124aec: tbz w8, #0, #0x124b08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_124b08;
  /* 124af0: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 124af4: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 124af8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 124afc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198848));
  fn1_142608(c);
  /* 124b00: b #0x124b08 */
  goto L_124b08;
  /* 124b04: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_124b08:;
  /* 124b08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124b0c: mov w1, #0x138 */
  ARC_W_W(c, 1, UINT64_C(312));
  /* 124b10: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198868));
  fn1_142608(c);
  /* 124b14: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 124b18: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198876));
  fn1_9cc20(c);
}

void fn1_12785c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039138396));
  /* 12785c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127860: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127864: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 127868: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12786c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127870: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 127874: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 127878: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12787c: b.eq #0x127968 */
  if (ARC_COND(c, 0)) goto L_127968;
  /* 127880: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 127884: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 127888: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12788c: b #0x12789c */
  goto L_12789c;
L_127890:;
  /* 127890: add x19, x19, #4 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 127894: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 127898: b.eq #0x127968 */
  if (ARC_COND(c, 0)) goto L_127968;
L_12789c:;
  /* 12789c: ldr w23, [x19] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 19)));
  /* 1278a0: tbz w21, #0, #0x1278b4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_1278b4;
  /* 1278a4: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1278a8: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1278ac: bl #0x1442a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210544));
  fn1_1442a0(c);
  /* 1278b0: cbnz w0, #0x127968 */
  if ((ARC_W_R(c, 0)) != 0) goto L_127968;
L_1278b4:;
  /* 1278b4: tbz w21, #1, #0x1278c8 */
  if (((ARC_W_R(c, 21)) >> 1 & 1) == 0) goto L_1278c8;
  /* 1278b8: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1278bc: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1278c0: bl #0x1442b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210564));
  fn1_1442b8(c);
  /* 1278c4: cbnz w0, #0x127968 */
  if ((ARC_W_R(c, 0)) != 0) goto L_127968;
L_1278c8:;
  /* 1278c8: tbz w21, #2, #0x1278dc */
  if (((ARC_W_R(c, 21)) >> 2 & 1) == 0) goto L_1278dc;
  /* 1278cc: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1278d0: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1278d4: bl #0x1442d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210584));
  fn1_1442d0(c);
  /* 1278d8: cbnz w0, #0x127968 */
  if ((ARC_W_R(c, 0)) != 0) goto L_127968;
L_1278dc:;
  /* 1278dc: tbz w21, #3, #0x1278f0 */
  if (((ARC_W_R(c, 21)) >> 3 & 1) == 0) goto L_1278f0;
  /* 1278e0: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1278e4: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1278e8: bl #0x1442e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210604));
  fn1_1442e8(c);
  /* 1278ec: cbnz w0, #0x127968 */
  if ((ARC_W_R(c, 0)) != 0) goto L_127968;
L_1278f0:;
  /* 1278f0: tbz w21, #4, #0x127904 */
  if (((ARC_W_R(c, 21)) >> 4 & 1) == 0) goto L_127904;
  /* 1278f4: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1278f8: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1278fc: bl #0x144288 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210624));
  fn1_144288(c);
  /* 127900: cbnz w0, #0x127968 */
  if ((ARC_W_R(c, 0)) != 0) goto L_127968;
L_127904:;
  /* 127904: tbz w21, #5, #0x127918 */
  if (((ARC_W_R(c, 21)) >> 5 & 1) == 0) goto L_127918;
  /* 127908: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 12790c: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127910: bl #0x144300 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210644));
  fn1_144300(c);
  /* 127914: cbnz w0, #0x127968 */
  if ((ARC_W_R(c, 0)) != 0) goto L_127968;
L_127918:;
  /* 127918: tbz w21, #6, #0x12792c */
  if (((ARC_W_R(c, 21)) >> 6 & 1) == 0) goto L_12792c;
  /* 12791c: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127920: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127924: bl #0x144318 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210664));
  fn1_144318(c);
  /* 127928: cbnz w0, #0x127968 */
  if ((ARC_W_R(c, 0)) != 0) goto L_127968;
L_12792c:;
  /* 12792c: tbz w21, #7, #0x127940 */
  if (((ARC_W_R(c, 21)) >> 7 & 1) == 0) goto L_127940;
  /* 127930: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127934: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127938: bl #0x144330 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210684));
  fn1_144330(c);
  /* 12793c: cbnz w0, #0x127968 */
  if ((ARC_W_R(c, 0)) != 0) goto L_127968;
L_127940:;
  /* 127940: tbz w21, #8, #0x127954 */
  if (((ARC_W_R(c, 21)) >> 8 & 1) == 0) goto L_127954;
  /* 127944: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127948: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 12794c: bl #0x144348 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210704));
  fn1_144348(c);
  /* 127950: cbnz w0, #0x127968 */
  if ((ARC_W_R(c, 0)) != 0) goto L_127968;
L_127954:;
  /* 127954: tbz w21, #9, #0x127890 */
  if (((ARC_W_R(c, 21)) >> 9 & 1) == 0) goto L_127890;
  /* 127958: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 12795c: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127960: bl #0x144360 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210724));
  fn1_144360(c);
  /* 127964: cbz w0, #0x127890 */
  if ((ARC_W_R(c, 0)) == 0) goto L_127890;
L_127968:;
  /* 127968: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12796c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127970: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127974: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 127978: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12797c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127980: ret  */
  return;
}

void fn1_129bb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147444));
  /* 129bb4: bti c */
  /* bti: no architectural effect here */
  /* 129bb8: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 129bbc: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 129bc0: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 129bc4: mov w3, #0x10ffff */
  ARC_W_W(c, 3, UINT64_C(1114111));
  /* 129bc8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 129bcc: b #0x1297d0 */
  fn1_1297d0(c); return;
}

void fn1_12b2cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039153356));
  /* 12b2cc: bti c */
  /* bti: no architectural effect here */
  /* 12b2d0: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b2d4: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 12b2d8: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12b2dc: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12b2e0: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12b2e4: ret  */
  return;
}

void fn1_12d764(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039162724));
  /* 12d764: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12d768: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12d76c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12d770: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12d774: nop  */
  /* nop: no architectural effect here */
  /* 12d778: adr x8, #0x15e678 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1435256)));
  /* 12d77c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12d780: tbz w8, #0, #0x12dc54 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12dc54;
L_12d784:;
  /* 12d784: nop  */
  /* nop: no architectural effect here */
  /* 12d788: adr x19, #0x15e438 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1434680)));
  /* 12d78c: adrp x1, #0x74000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(475136)));
  /* 12d790: add x1, x1, #0xfe4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4068)));
  /* 12d794: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12d798: mov w2, #7 */
  ARC_W_W(c, 2, UINT64_C(7));
  /* 12d79c: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234848));
  fn1_e2ab4(c);
  /* 12d7a0: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12d7a4: add x1, x1, #0x194 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(404)));
  /* 12d7a8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12d7ac: mov w2, #8 */
  ARC_W_W(c, 2, UINT64_C(8));
  /* 12d7b0: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234868));
  fn1_e2ab4(c);
  /* 12d7b4: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12d7b8: add x1, x1, #0x26c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(620)));
  /* 12d7bc: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 12d7c0: mov w2, #5 */
  ARC_W_W(c, 2, UINT64_C(5));
  /* 12d7c4: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234888));
  fn1_e2ab4(c);
  /* 12d7c8: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12d7cc: add x1, x1, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(96)));
  /* 12d7d0: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* 12d7d4: mov w2, #5 */
  ARC_W_W(c, 2, UINT64_C(5));
  /* 12d7d8: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1234908));
  fn1_e2ab4(c);
  /* 12d7dc: ldrb w8, [x19, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(96))));
  /* 12d7e0: tbnz w8, #0, #0x12d7f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d7f8;
  /* 12d7e4: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d7e8: add x8, x8, #0x498 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1176)));
  /* 12d7ec: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d7f0: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d7f4: b #0x12d80c */
  goto L_12d80c;
L_12d7f8:;
  /* 12d7f8: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d7fc: add x9, x9, #0x4a0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1184)));
  /* 12d800: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d804: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d808: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d80c:;
  /* 12d80c: mov x9, #0x4d */
  ARC_X_W(c, 9, UINT64_C(77));
  /* 12d810: mov w10, #0x79 */
  ARC_W_W(c, 10, UINT64_C(121));
  /* 12d814: movk x9, #0x61, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(416611827712)));
  /* 12d818: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12d81c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d820: ldrb w8, [x8, #0x4b0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1200))));
  /* 12d824: tbnz w8, #0, #0x12d83c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d83c;
  /* 12d828: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d82c: add x8, x8, #0x4b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1200)));
  /* 12d830: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 12d834: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d838: b #0x12d850 */
  goto L_12d850;
L_12d83c:;
  /* 12d83c: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d840: add x9, x9, #0x4b8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1208)));
  /* 12d844: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* 12d848: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d84c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d850:;
  /* 12d850: adrp x9, #0x75000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12d854: add x9, x9, #0x284 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(644)));
  /* 12d858: str wzr, [x8, #0x10] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(16)), ARC_W_R(c, 31));
  /* 12d85c: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 12d860: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 12d864: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d868: ldrb w8, [x8, #0x4c8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1224))));
  /* 12d86c: tbnz w8, #0, #0x12d884 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d884;
  /* 12d870: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d874: add x8, x8, #0x4c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1224)));
  /* 12d878: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 12d87c: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d880: b #0x12d898 */
  goto L_12d898;
L_12d884:;
  /* 12d884: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d888: add x9, x9, #0x4d0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1232)));
  /* 12d88c: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* 12d890: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d894: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d898:;
  /* 12d898: adrp x9, #0x74000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(475136)));
  /* 12d89c: add x9, x9, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4048)));
  /* 12d8a0: adrp x19, #0x15e000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d8a4: add x19, x19, #0x4e0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1248)));
  /* 12d8a8: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 12d8ac: adrp x1, #0x74000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(475136)));
  /* 12d8b0: add x1, x1, #0xf78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3960)));
  /* 12d8b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12d8b8: mov w2, #6 */
  ARC_W_W(c, 2, UINT64_C(6));
  /* 12d8bc: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 12d8c0: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* 12d8c4: str wzr, [x8, #0x10] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(16)), ARC_W_R(c, 31));
  /* 12d8c8: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1235148));
  fn1_e2ab4(c);
  /* 12d8cc: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12d8d0: add x1, x1, #0x14 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(20)));
  /* 12d8d4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12d8d8: mov w2, #9 */
  ARC_W_W(c, 2, UINT64_C(9));
  /* 12d8dc: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1235168));
  fn1_e2ab4(c);
  /* 12d8e0: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12d8e4: add x1, x1, #0x1b8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(440)));
  /* 12d8e8: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 12d8ec: mov w2, #7 */
  ARC_W_W(c, 2, UINT64_C(7));
  /* 12d8f0: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1235188));
  fn1_e2ab4(c);
  /* 12d8f4: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12d8f8: add x1, x1, #0xb8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(184)));
  /* 12d8fc: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* 12d900: mov w2, #8 */
  ARC_W_W(c, 2, UINT64_C(8));
  /* 12d904: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1235208));
  fn1_e2ab4(c);
  /* 12d908: adrp x1, #0x75000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(479232)));
  /* 12d90c: add x1, x1, #0x3c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(60)));
  /* 12d910: add x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* 12d914: mov w2, #8 */
  ARC_W_W(c, 2, UINT64_C(8));
  /* 12d918: bl #0xe2ab4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1235228));
  fn1_e2ab4(c);
  /* 12d91c: ldrb w8, [x19, #0x78] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(120))));
  /* 12d920: tbnz w8, #0, #0x12d934 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d934;
  /* 12d924: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d928: add x8, x8, #0x558 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1368)));
  /* 12d92c: strb w20, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 20));
  }
  /* 12d930: b #0x12d948 */
  goto L_12d948;
L_12d934:;
  /* 12d934: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d938: add x9, x9, #0x560 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1376)));
  /* 12d93c: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d940: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d944: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d948:;
  /* 12d948: mov x9, #0x4a */
  ARC_X_W(c, 9, UINT64_C(74));
  /* 12d94c: mov w10, #0x6e */
  ARC_W_W(c, 10, UINT64_C(110));
  /* 12d950: movk x9, #0x61, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(416611827712)));
  /* 12d954: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12d958: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d95c: ldrb w8, [x8, #0x570] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1392))));
  /* 12d960: tbnz w8, #0, #0x12d978 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d978;
  /* 12d964: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d968: add x8, x8, #0x570 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1392)));
  /* 12d96c: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d970: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d974: b #0x12d98c */
  goto L_12d98c;
L_12d978:;
  /* 12d978: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d97c: add x9, x9, #0x578 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1400)));
  /* 12d980: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d984: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d988: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d98c:;
  /* 12d98c: mov x9, #0x46 */
  ARC_X_W(c, 9, UINT64_C(70));
  /* 12d990: mov w10, #0x62 */
  ARC_W_W(c, 10, UINT64_C(98));
  /* 12d994: movk x9, #0x65, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(433791696896)));
  /* 12d998: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12d99c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d9a0: ldrb w8, [x8, #0x588] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1416))));
  /* 12d9a4: tbnz w8, #0, #0x12d9bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12d9bc;
  /* 12d9a8: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d9ac: add x8, x8, #0x588 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1416)));
  /* 12d9b0: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d9b4: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d9b8: b #0x12d9d0 */
  goto L_12d9d0;
L_12d9bc:;
  /* 12d9bc: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d9c0: add x9, x9, #0x590 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1424)));
  /* 12d9c4: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12d9c8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12d9cc: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12d9d0:;
  /* 12d9d0: mov x9, #0x4d */
  ARC_X_W(c, 9, UINT64_C(77));
  /* 12d9d4: mov w10, #0x72 */
  ARC_W_W(c, 10, UINT64_C(114));
  /* 12d9d8: movk x9, #0x61, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(416611827712)));
  /* 12d9dc: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12d9e0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d9e4: ldrb w8, [x8, #0x5a0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1440))));
  /* 12d9e8: tbnz w8, #0, #0x12da00 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12da00;
  /* 12d9ec: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12d9f0: add x8, x8, #0x5a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1440)));
  /* 12d9f4: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12d9f8: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12d9fc: b #0x12da14 */
  goto L_12da14;
L_12da00:;
  /* 12da00: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12da04: add x9, x9, #0x5a8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1448)));
  /* 12da08: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12da0c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12da10: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12da14:;
  /* 12da14: mov x9, #0x41 */
  ARC_X_W(c, 9, UINT64_C(65));
  /* 12da18: mov w10, #0x72 */
  ARC_W_W(c, 10, UINT64_C(114));
  /* 12da1c: movk x9, #0x70, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(481036337152)));
  /* 12da20: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12da24: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12da28: ldrb w8, [x8, #0x5b8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1464))));
  /* 12da2c: tbnz w8, #0, #0x12da44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12da44;
  /* 12da30: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12da34: add x8, x8, #0x5b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1464)));
  /* 12da38: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12da3c: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12da40: b #0x12da58 */
  goto L_12da58;
L_12da44:;
  /* 12da44: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12da48: add x9, x9, #0x5c0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1472)));
  /* 12da4c: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12da50: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12da54: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12da58:;
  /* 12da58: mov x9, #0x4d */
  ARC_X_W(c, 9, UINT64_C(77));
  /* 12da5c: mov w10, #0x79 */
  ARC_W_W(c, 10, UINT64_C(121));
  /* 12da60: movk x9, #0x61, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(416611827712)));
  /* 12da64: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12da68: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12da6c: ldrb w8, [x8, #0x5d0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1488))));
  /* 12da70: tbnz w8, #0, #0x12da88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12da88;
  /* 12da74: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12da78: add x8, x8, #0x5d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1488)));
  /* 12da7c: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12da80: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12da84: b #0x12da9c */
  goto L_12da9c;
L_12da88:;
  /* 12da88: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12da8c: add x9, x9, #0x5d8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1496)));
  /* 12da90: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12da94: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12da98: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12da9c:;
  /* 12da9c: mov x9, #0x4a */
  ARC_X_W(c, 9, UINT64_C(74));
  /* 12daa0: mov w10, #0x6e */
  ARC_W_W(c, 10, UINT64_C(110));
  /* 12daa4: movk x9, #0x75, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(502511173632)));
  /* 12daa8: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12daac: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dab0: ldrb w8, [x8, #0x5e8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1512))));
  /* 12dab4: tbnz w8, #0, #0x12dacc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12dacc;
  /* 12dab8: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dabc: add x8, x8, #0x5e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1512)));
  /* 12dac0: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12dac4: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12dac8: b #0x12dae0 */
  goto L_12dae0;
L_12dacc:;
  /* 12dacc: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dad0: add x9, x9, #0x5f0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1520)));
  /* 12dad4: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12dad8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12dadc: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12dae0:;
  /* 12dae0: mov x9, #0x4a */
  ARC_X_W(c, 9, UINT64_C(74));
  /* 12dae4: mov w10, #0x6c */
  ARC_W_W(c, 10, UINT64_C(108));
  /* 12dae8: movk x9, #0x75, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(502511173632)));
  /* 12daec: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12daf0: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12daf4: ldrb w8, [x8, #0x600] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1536))));
  /* 12daf8: tbnz w8, #0, #0x12db10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12db10;
  /* 12dafc: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12db00: add x8, x8, #0x600 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1536)));
  /* 12db04: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12db08: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12db0c: b #0x12db24 */
  goto L_12db24;
L_12db10:;
  /* 12db10: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12db14: add x9, x9, #0x608 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1544)));
  /* 12db18: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12db1c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12db20: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12db24:;
  /* 12db24: mov x9, #0x41 */
  ARC_X_W(c, 9, UINT64_C(65));
  /* 12db28: mov w10, #0x67 */
  ARC_W_W(c, 10, UINT64_C(103));
  /* 12db2c: movk x9, #0x75, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(502511173632)));
  /* 12db30: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12db34: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12db38: ldrb w8, [x8, #0x618] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1560))));
  /* 12db3c: tbnz w8, #0, #0x12db54 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12db54;
  /* 12db40: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12db44: add x8, x8, #0x618 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1560)));
  /* 12db48: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12db4c: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12db50: b #0x12db68 */
  goto L_12db68;
L_12db54:;
  /* 12db54: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12db58: add x9, x9, #0x620 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1568)));
  /* 12db5c: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12db60: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12db64: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12db68:;
  /* 12db68: mov x9, #0x53 */
  ARC_X_W(c, 9, UINT64_C(83));
  /* 12db6c: mov w10, #0x70 */
  ARC_W_W(c, 10, UINT64_C(112));
  /* 12db70: movk x9, #0x65, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(433791696896)));
  /* 12db74: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12db78: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12db7c: ldrb w8, [x8, #0x630] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1584))));
  /* 12db80: tbnz w8, #0, #0x12db98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12db98;
  /* 12db84: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12db88: add x8, x8, #0x630 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1584)));
  /* 12db8c: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12db90: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12db94: b #0x12dbac */
  goto L_12dbac;
L_12db98:;
  /* 12db98: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12db9c: add x9, x9, #0x638 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1592)));
  /* 12dba0: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12dba4: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12dba8: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12dbac:;
  /* 12dbac: mov x9, #0x4f */
  ARC_X_W(c, 9, UINT64_C(79));
  /* 12dbb0: mov w10, #0x74 */
  ARC_W_W(c, 10, UINT64_C(116));
  /* 12dbb4: movk x9, #0x63, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(425201762304)));
  /* 12dbb8: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12dbbc: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dbc0: ldrb w8, [x8, #0x648] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1608))));
  /* 12dbc4: tbnz w8, #0, #0x12dbdc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12dbdc;
  /* 12dbc8: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dbcc: add x8, x8, #0x648 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1608)));
  /* 12dbd0: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12dbd4: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12dbd8: b #0x12dbf0 */
  goto L_12dbf0;
L_12dbdc:;
  /* 12dbdc: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dbe0: add x9, x9, #0x650 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1616)));
  /* 12dbe4: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12dbe8: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12dbec: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12dbf0:;
  /* 12dbf0: mov x9, #0x4e */
  ARC_X_W(c, 9, UINT64_C(78));
  /* 12dbf4: mov w10, #0x76 */
  ARC_W_W(c, 10, UINT64_C(118));
  /* 12dbf8: movk x9, #0x6f, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(476741369856)));
  /* 12dbfc: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12dc00: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dc04: ldrb w8, [x8, #0x660] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1632))));
  /* 12dc08: tbnz w8, #0, #0x12dc20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12dc20;
  /* 12dc0c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dc10: add x8, x8, #0x660 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1632)));
  /* 12dc14: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* 12dc18: strb w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12dc1c: b #0x12dc34 */
  goto L_12dc34;
L_12dc20:;
  /* 12dc20: adrp x9, #0x15e000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 12dc24: add x9, x9, #0x668 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1640)));
  /* 12dc28: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* 12dc2c: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 12dc30: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_12dc34:;
  /* 12dc34: mov x9, #0x44 */
  ARC_X_W(c, 9, UINT64_C(68));
  /* 12dc38: mov w10, #0x63 */
  ARC_W_W(c, 10, UINT64_C(99));
  /* 12dc3c: movk x9, #0x65, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(433791696896)));
  /* 12dc40: stp x9, x10, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 12dc44: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12dc48: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12dc4c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12dc50: ret  */
  return;
L_12dc54:;
  /* 12dc54: nop  */
  /* nop: no architectural effect here */
  /* 12dc58: adr x0, #0x15e678 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1435256)));
  /* 12dc5c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236064));
  fn1_1424b8(c);
  /* 12dc60: cbz w0, #0x12d784 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12d784;
  /* 12dc64: adrp x0, #0x135000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1265664)));
  /* 12dc68: add x0, x0, #0x55c */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1372)));
  /* 12dc6c: nop  */
  /* nop: no architectural effect here */
  /* 12dc70: adr x2, #0x148af8 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 12dc74: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 12dc78: bl #0x1423f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236092));
  fn1_1423f8(c);
  /* 12dc7c: nop  */
  /* nop: no architectural effect here */
  /* 12dc80: adr x0, #0x15e678 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1435256)));
  /* 12dc84: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236104));
  fn1_1424d0(c);
  /* 12dc88: b #0x12d784 */
  goto L_12d784;
}

void fn1_134a3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192124));
  /* 134a3c: bti c */
  /* bti: no architectural effect here */
  /* 134a40: add x0, x0, #0x170 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(368)));
  /* 134a44: ret  */
  return;
}

void fn1_135504(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039194884));
  /* 135504: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135508: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13550c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135510: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135514: adrp x19, #0x15e000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 135518: add x19, x19, #0x418 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1048)));
  /* 13551c: mov x20, #-0x240 */
  ARC_X_W(c, 20, UINT64_C(18446744073709551040));
  /* 135520: b #0x135530 */
  goto L_135530;
L_135524:;
  /* 135524: adds x20, x20, #0x18 */
  ARC_X_W(c, 20, arc_add64(c, ARC_X_R(c, 20), UINT64_C(24), 0));
  /* 135528: sub x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* 13552c: b.eq #0x13554c */
  if (ARC_COND(c, 0)) goto L_13554c;
L_135530:;
  /* 135530: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 135534: tbz w8, #0, #0x135524 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_135524;
  /* 135538: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13553c: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 135540: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 135544: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267016));
  fn1_142608(c);
  /* 135548: b #0x135524 */
  goto L_135524;
L_13554c:;
  /* 13554c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135550: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135554: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135558: ret  */
  return;
}

void fn1_1383e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206884));
  /* 1383e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1383e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1383ec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1383f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1383f4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1383f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1383fc: ldr x8, [x8, #0xe58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3672))));
  /* 138400: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138404: add x10, x8, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 138408: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 13840c: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 138410: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* 138414: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 138418: str x10, [x19, #0x78]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(120));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(120));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* 13841c: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279008));
  fn1_144558(c);
  /* 138420: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138424: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 138428: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13842c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138430: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_13cda8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039225768));
  /* 13cda8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13cdac: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13cdb0: str x28, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 28));
  /* 13cdb4: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13cdb8: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13cdbc: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13cdc0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13cdc4: sub sp, sp, #0x200 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(512)));
  /* 13cdc8: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* 13cdcc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 13cdd0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13cdd4: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* 13cdd8: add x8, x8, #0x809 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2057)));
  /* 13cddc: nop  */
  /* nop: no architectural effect here */
  /* 13cde0: adr x22, #0x156d40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13cde4: nop  */
  /* nop: no architectural effect here */
  /* 13cde8: adr x23, #0x159210 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13cdec: stp x8, x3, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 13cdf0: stp x1, x0, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13cdf4: cbz x3, #0x13ce0c */
  if ((ARC_X_R(c, 3)) == 0) goto L_13ce0c;
  /* 13cdf8: str wzr, [x3] */
  arc_st32(ARC_X_R(c, 3), ARC_W_R(c, 31));
  /* 13cdfc: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 13ce00: tbz w8, #0, #0x13d2f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d2f8;
L_13ce04:;
  /* 13ce04: str x22, [x3, #8] */
  arc_st64((ARC_X_R(c, 3) + INT64_C(8)), ARC_X_R(c, 22));
  /* 13ce08: b #0x13ce14 */
  goto L_13ce14;
L_13ce0c:;
  /* 13ce0c: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 13ce10: tbz w8, #0, #0x13d324 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d324;
L_13ce14:;
  /* 13ce14: stur x22, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 22));
  /* 13ce18: stur wzr, [x29, #-0x40] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 31));
  /* 13ce1c: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 13ce20: tbz w8, #0, #0x13d2d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d2d8;
L_13ce24:;
  /* 13ce24: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 13ce28: ldr x9, [x21, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 13ce2c: mov w1, #0x800 */
  ARC_W_W(c, 1, UINT64_C(2048));
  /* 13ce30: stur x22, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 22));
  /* 13ce34: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13ce38: csinc x0, x9, x21, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 21)) + 1)));
  /* 13ce3c: bl #0x143358 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297984));
  fn1_143358(c);
  /* 13ce40: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13ce44: b.eq #0x13ce50 */
  if (ARC_COND(c, 0)) goto L_13ce50;
  /* 13ce48: ldur w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13ce4c: b #0x13ce7c */
  goto L_13ce7c;
L_13ce50:;
  /* 13ce50: mov w24, w0 */
  ARC_W_W(c, 24, ARC_W_R(c, 0));
  /* 13ce54: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298008));
  fn1_142a58(c);
  /* 13ce58: nop  */
  /* nop: no architectural effect here */
  /* 13ce5c: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ce60: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 13ce64: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 13ce68: tbz w9, #0, #0x13d344 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13d344;
L_13ce6c:;
  /* 13ce6c: nop  */
  /* nop: no architectural effect here */
  /* 13ce70: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13ce74: mov w0, w24 */
  ARC_W_W(c, 0, ARC_W_R(c, 24));
  /* 13ce78: stp x8, x9, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_13ce7c:;
  /* 13ce7c: mov w9, #0xffff */
  ARC_W_W(c, 9, UINT64_C(65535));
  /* 13ce80: stur x21, [x29, #-0xd8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-216)), ARC_X_R(c, 21));
  /* 13ce84: stur w0, [x29, #-0xd0] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-208)), ARC_W_R(c, 0));
  /* 13ce88: sturb wzr, [x29, #-0x48] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-72)), ARC_W_R(c, 31));
  /* 13ce8c: stur w9, [x29, #-0x44] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-68)), ARC_W_R(c, 9));
  /* 13ce90: cbnz w8, #0x13cf28 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13cf28;
  /* 13ce94: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13ce98: sub x21, x29, #0xd8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(216)));
  /* 13ce9c: mov x8, #0xffff00000000 */
  ARC_X_W(c, 8, UINT64_C(281470681743360));
  /* 13cea0: add x1, x21, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 13cea4: stur x8, [x29, #-0x48] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-72)), ARC_X_R(c, 8));
  /* 13cea8: str wzr, [sp, #8] */
  arc_st32(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 13ceac: str x22, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 22));
  /* 13ceb0: stur q0, [x29, #-0xc8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-200)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-200)) + 8, (c)->q[0].u64[1]);
  /* 13ceb4: stur q0, [x29, #-0xb8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-184)) + 8, (c)->q[0].u64[1]);
  /* 13ceb8: stur q0, [x29, #-0xa8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-168)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-168)) + 8, (c)->q[0].u64[1]);
  /* 13cebc: stur q0, [x29, #-0x98] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-152)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-152)) + 8, (c)->q[0].u64[1]);
  /* 13cec0: stur q0, [x29, #-0x88] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-136)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-136)) + 8, (c)->q[0].u64[1]);
  /* 13cec4: stur q0, [x29, #-0x78] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-120)) + 8, (c)->q[0].u64[1]);
  /* 13cec8: stur q0, [x29, #-0x68] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-104)) + 8, (c)->q[0].u64[1]);
  /* 13cecc: stur q0, [x29, #-0x58] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-88)) + 8, (c)->q[0].u64[1]);
  /* 13ced0: bl #0x144990 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298132));
  fn1_144990(c);
  /* 13ced4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13ced8: b.ne #0x13cf00 */
  if (ARC_COND(c, 1)) goto L_13cf00;
  /* 13cedc: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298144));
  fn1_142a58(c);
  /* 13cee0: nop  */
  /* nop: no architectural effect here */
  /* 13cee4: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cee8: ldr w24, [x0] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 0)));
  /* 13ceec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13cef0: tbz w8, #0, #0x13d370 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d370;
L_13cef4:;
  /* 13cef4: nop  */
  /* nop: no architectural effect here */
  /* 13cef8: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13cefc: stp x24, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13cf00:;
  /* 13cf00: ldur x1, [x29, #-0xd8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-216))));
  /* 13cf04: add x8, sp, #0xa8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(168)));
  /* 13cf08: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13cf0c: add x2, x21, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 13cf10: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13cf14: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298200));
  fn1_1388e8(c);
  /* 13cf18: ldr x8, [sp, #0xa8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(168))));
  /* 13cf1c: ldur w9, [x29, #-0x40] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13cf20: stur x8, [x29, #-0x48] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-72)), ARC_X_R(c, 8));
  /* 13cf24: cbz w9, #0x13cf6c */
  if ((ARC_W_R(c, 9)) == 0) goto L_13cf6c;
L_13cf28:;
  /* 13cf28: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13cf2c: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13cf30: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298228));
  fn1_13d8bc(c);
L_13cf34:;
  /* 13cf34: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
L_13cf38:;
  /* 13cf38: ldur w0, [x29, #-0xd0] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-208))));
  /* 13cf3c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13cf40: b.eq #0x13cf48 */
  if (ARC_COND(c, 0)) goto L_13cf48;
  /* 13cf44: bl #0x143370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298248));
  fn1_143370(c);
L_13cf48:;
  /* 13cf48: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 13cf4c: add sp, sp, #0x200 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(512)));
  /* 13cf50: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13cf54: ldr x28, [sp, #0x10] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13cf58: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13cf5c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13cf60: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13cf64: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13cf68: ret  */
  return;
L_13cf6c:;
  /* 13cf6c: ldurb w8, [x29, #-0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 13cf70: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 13cf74: b.ne #0x13d054 */
  if (ARC_COND(c, 1)) goto L_13d054;
  /* 13cf78: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13cf7c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13cf80: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 13cf84: str wzr, [sp, #8] */
  arc_st32(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 13cf88: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13cf8c: str x22, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 22));
  /* 13cf90: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13cf94: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298328));
  fn1_144588(c);
  /* 13cf98: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13cf9c: b.ne #0x13cfc4 */
  if (ARC_COND(c, 1)) goto L_13cfc4;
  /* 13cfa0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298340));
  fn1_142a58(c);
  /* 13cfa4: nop  */
  /* nop: no architectural effect here */
  /* 13cfa8: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13cfac: ldr w21, [x0] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 0)));
  /* 13cfb0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13cfb4: tbz w8, #0, #0x13d3b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d3b0;
L_13cfb8:;
  /* 13cfb8: nop  */
  /* nop: no architectural effect here */
  /* 13cfbc: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13cfc0: stp x21, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13cfc4:;
  /* 13cfc4: add x8, sp, #0xa0 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(160)));
  /* 13cfc8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13cfcc: add x2, sp, #0xa8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(168)));
  /* 13cfd0: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13cfd4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13cfd8: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298396));
  fn1_1388e8(c);
  /* 13cfdc: ldr x8, [sp, #0xa0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(160))));
  /* 13cfe0: tst w8, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(255)));
  /* 13cfe4: b.eq #0x13d084 */
  if (ARC_COND(c, 0)) goto L_13d084;
  /* 13cfe8: and x21, x8, #0xff */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* 13cfec: mov w8, #0xff */
  ARC_W_W(c, 8, UINT64_C(255));
  /* 13cff0: cmp x21, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(0));
  /* 13cff4: ccmp x21, x8, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 13cff8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 13cffc: cmp w21, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(1));
  /* 13d000: b.eq #0x13d094 */
  if (ARC_COND(c, 0)) goto L_13d094;
  /* 13d004: cmp w21, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(255));
  /* 13d008: b.ne #0x13d0cc */
  if (ARC_COND(c, 1)) goto L_13d0cc;
L_13d00c:;
  /* 13d00c: stur wzr, [x29, #-0x40] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 31));
  /* 13d010: ldur w2, [x29, #-0xb8] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 29) + INT64_C(-184))));
  /* 13d014: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 13d018: ldarb w9, [x23] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 23)));
  /* 13d01c: mov w8, #0x41 */
  ARC_W_W(c, 8, UINT64_C(65));
  /* 13d020: add x20, x19, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 13d024: csinc w1, w8, wzr, ne */
  ARC_W_W(c, 1, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 13d028: tbz w9, #0, #0x13d3d0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13d3d0;
L_13d02c:;
  /* 13d02c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13d030: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13d034: stur x22, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 22));
  /* 13d038: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13d03c: csel x0, x20, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 9)));
  /* 13d040: bl #0x143358 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298500));
  fn1_143358(c);
  /* 13d044: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13d048: b.eq #0x13d124 */
  if (ARC_COND(c, 0)) goto L_13d124;
  /* 13d04c: ldur w20, [x29, #-0x40] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13d050: b #0x13d150 */
  goto L_13d150;
L_13d054:;
  /* 13d054: nop  */
  /* nop: no architectural effect here */
  /* 13d058: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d05c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d060: tbz w8, #0, #0x13d390 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d390;
L_13d064:;
  /* 13d064: mov w8, #0x5f */
  ARC_W_W(c, 8, UINT64_C(95));
  /* 13d068: nop  */
  /* nop: no architectural effect here */
  /* 13d06c: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13d070: stp x8, x9, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13d074: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13d078: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13d07c: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298560));
  fn1_13d8bc(c);
  /* 13d080: b #0x13cf34 */
  goto L_13cf34;
L_13d084:;
  /* 13d084: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13d088: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13d08c: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298576));
  fn1_13d8bc(c);
  /* 13d090: b #0x13cf34 */
  goto L_13cf34;
L_13d094:;
  /* 13d094: ldur x9, [x29, #-0xc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-200))));
  /* 13d098: ldr x10, [sp, #0xa8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(168))));
  /* 13d09c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 13d0a0: b.ne #0x13d0fc */
  if (ARC_COND(c, 1)) goto L_13d0fc;
  /* 13d0a4: ldur x9, [x29, #-0xc0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-192))));
  /* 13d0a8: ldr x10, [sp, #0xb0] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(176))));
  /* 13d0ac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 13d0b0: b.ne #0x13d0fc */
  if (ARC_COND(c, 1)) goto L_13d0fc;
  /* 13d0b4: mov w8, #0x11 */
  ARC_W_W(c, 8, UINT64_C(17));
  /* 13d0b8: str w8, [sp, #8] */
  arc_st32(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 13d0bc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13d0c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13d0c4: bl #0x13d9cc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298632));
  fn1_13d9cc(c);
  /* 13d0c8: b #0x13cf34 */
  goto L_13cf34;
L_13d0cc:;
  /* 13d0cc: nop  */
  /* nop: no architectural effect here */
  /* 13d0d0: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d0d4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d0d8: tbz w8, #0, #0x13d408 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d408;
L_13d0dc:;
  /* 13d0dc: mov w8, #0x5f */
  ARC_W_W(c, 8, UINT64_C(95));
  /* 13d0e0: nop  */
  /* nop: no architectural effect here */
  /* 13d0e4: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13d0e8: stp x8, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13d0ec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13d0f0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13d0f4: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298680));
  fn1_13d8bc(c);
  /* 13d0f8: b #0x13cf34 */
  goto L_13cf34;
L_13d0fc:;
  /* 13d0fc: tbnz w20, #0, #0x13cf34 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_13cf34;
  /* 13d100: tbnz w20, #2, #0x13d248 */
  if (((ARC_W_R(c, 20)) >> 2 & 1) != 0) goto L_13d248;
  /* 13d104: tbnz w20, #1, #0x13d00c */
  if (((ARC_W_R(c, 20)) >> 1 & 1) != 0) goto L_13d00c;
  /* 13d108: bl #0x142fe0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298700));
  fn1_142fe0(c);
  /* 13d10c: mov w8, #0x11 */
  ARC_W_W(c, 8, UINT64_C(17));
  /* 13d110: stp x8, x0, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13d114: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13d118: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13d11c: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298720));
  fn1_13d8bc(c);
  /* 13d120: b #0x13cf34 */
  goto L_13cf34;
L_13d124:;
  /* 13d124: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* 13d128: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298732));
  fn1_142a58(c);
  /* 13d12c: nop  */
  /* nop: no architectural effect here */
  /* 13d130: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d134: ldr w20, [x0] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 0)));
  /* 13d138: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d13c: tbz w8, #0, #0x13d428 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d428;
L_13d140:;
  /* 13d140: nop  */
  /* nop: no architectural effect here */
  /* 13d144: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13d148: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 13d14c: stp x20, x8, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13d150:;
  /* 13d150: mov w8, #0xffff */
  ARC_W_W(c, 8, UINT64_C(65535));
  /* 13d154: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* 13d158: str w0, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 0));
  /* 13d15c: strb wzr, [sp, #0x98] */
  arc_st8(((c)->sp + INT64_C(152)), ARC_W_R(c, 31));
  /* 13d160: str w8, [sp, #0x9c] */
  arc_st32(((c)->sp + INT64_C(156)), ARC_W_R(c, 8));
  /* 13d164: cbnz w20, #0x13d1fc */
  if ((ARC_W_R(c, 20)) != 0) goto L_13d1fc;
  /* 13d168: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13d16c: add x19, sp, #8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(8)));
  /* 13d170: mov x8, #0xffff00000000 */
  ARC_X_W(c, 8, UINT64_C(281470681743360));
  /* 13d174: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 13d178: str x8, [sp, #0x98] */
  arc_st64(((c)->sp + INT64_C(152)), ARC_X_R(c, 8));
  /* 13d17c: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13d180: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* 13d184: stur q0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* 13d188: stur q0, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 13d18c: stur q0, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 13d190: stur q0, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 13d194: stur q0, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 13d198: stur q0, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 13d19c: stur q0, [sp, #0x78] */
  arc_st64(((c)->sp + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* 13d1a0: stur q0, [sp, #0x88] */
  arc_st64(((c)->sp + INT64_C(136)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(136)) + 8, (c)->q[0].u64[1]);
  /* 13d1a4: bl #0x144990 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298856));
  fn1_144990(c);
  /* 13d1a8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13d1ac: b.ne #0x13d1d4 */
  if (ARC_COND(c, 1)) goto L_13d1d4;
  /* 13d1b0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298868));
  fn1_142a58(c);
  /* 13d1b4: nop  */
  /* nop: no architectural effect here */
  /* 13d1b8: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d1bc: ldr w20, [x0] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 0)));
  /* 13d1c0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d1c4: tbz w8, #0, #0x13d448 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d448;
L_13d1c8:;
  /* 13d1c8: nop  */
  /* nop: no architectural effect here */
  /* 13d1cc: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13d1d0: stp x20, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13d1d4:;
  /* 13d1d4: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13d1d8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13d1dc: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13d1e0: add x2, x19, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 13d1e4: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13d1e8: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298924));
  fn1_1388e8(c);
  /* 13d1ec: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13d1f0: ldur w9, [x29, #-0x40] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 13d1f4: str x8, [sp, #0x98] */
  arc_st64(((c)->sp + INT64_C(152)), ARC_X_R(c, 8));
  /* 13d1f8: cbz w9, #0x13d220 */
  if ((ARC_W_R(c, 9)) == 0) goto L_13d220;
L_13d1fc:;
  /* 13d1fc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13d200: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13d204: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298952));
  fn1_13d8bc(c);
L_13d208:;
  /* 13d208: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
L_13d20c:;
  /* 13d20c: ldr w0, [sp, #0x10] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(16))));
  /* 13d210: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13d214: b.eq #0x13cf38 */
  if (ARC_COND(c, 0)) goto L_13cf38;
  /* 13d218: bl #0x143370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1298972));
  fn1_143370(c);
  /* 13d21c: b #0x13cf38 */
  goto L_13cf38;
L_13d220:;
  /* 13d220: cbz w21, #0x13d22c */
  if ((ARC_W_R(c, 21)) == 0) goto L_13d22c;
  /* 13d224: cmp w21, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(255));
  /* 13d228: b.ne #0x13d274 */
  if (ARC_COND(c, 1)) goto L_13d274;
L_13d22c:;
  /* 13d22c: sub x0, x29, #0xd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(216)));
  /* 13d230: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13d234: sub x2, x29, #0x40 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13d238: bl #0x13dc08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299004));
  fn1_13dc08(c);
  /* 13d23c: tbz w0, #0, #0x13d1fc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13d1fc;
  /* 13d240: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 13d244: b #0x13d20c */
  goto L_13d20c;
L_13d248:;
  /* 13d248: ldur x9, [x29, #-0x70] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))));
  /* 13d24c: ldr x10, [sp, #0x100] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(256))));
  /* 13d250: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 13d254: b.lt #0x13cf34 */
  if (ARC_COND(c, 11)) goto L_13cf34;
  /* 13d258: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 13d25c: b.ne #0x13d00c */
  if (ARC_COND(c, 1)) goto L_13d00c;
  /* 13d260: ldr x9, [sp, #0x108] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(264))));
  /* 13d264: ldur x10, [x29, #-0x68] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 13d268: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 13d26c: b.le #0x13cf34 */
  if (ARC_COND(c, 13)) goto L_13cf34;
  /* 13d270: b #0x13d00c */
  goto L_13d00c;
L_13d274:;
  /* 13d274: ldr x8, [sp, #0xa8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(168))));
  /* 13d278: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13d27c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13d280: b.ne #0x13d2c0 */
  if (ARC_COND(c, 1)) goto L_13d2c0;
  /* 13d284: ldr x8, [sp, #0xb0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(176))));
  /* 13d288: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13d28c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 13d290: b.ne #0x13d2c0 */
  if (ARC_COND(c, 1)) goto L_13d2c0;
  /* 13d294: sub x8, x29, #0xd8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(216)));
  /* 13d298: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d29c: sub x2, x29, #0x40 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13d2a0: add x1, x8, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13d2a4: bl #0x13da48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299112));
  fn1_13da48(c);
  /* 13d2a8: tbnz w0, #0, #0x13d1fc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_13d1fc;
  /* 13d2ac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d2b0: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13d2b4: bl #0x13db28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299128));
  fn1_13db28(c);
  /* 13d2b8: tbnz w0, #0, #0x13d1fc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_13d1fc;
  /* 13d2bc: b #0x13d22c */
  goto L_13d22c;
L_13d2c0:;
  /* 13d2c0: mov w8, #9 */
  ARC_W_W(c, 8, UINT64_C(9));
  /* 13d2c4: stur w8, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 8));
  /* 13d2c8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13d2cc: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13d2d0: bl #0x13d9cc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299156));
  fn1_13d9cc(c);
  /* 13d2d4: b #0x13d208 */
  goto L_13d208;
L_13d2d8:;
  /* 13d2d8: nop  */
  /* nop: no architectural effect here */
  /* 13d2dc: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d2e0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299172));
  fn1_1424b8(c);
  /* 13d2e4: cbz w0, #0x13ce24 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ce24;
  /* 13d2e8: nop  */
  /* nop: no architectural effect here */
  /* 13d2ec: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d2f0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299188));
  fn1_1424d0(c);
  /* 13d2f4: b #0x13ce24 */
  goto L_13ce24;
L_13d2f8:;
  /* 13d2f8: nop  */
  /* nop: no architectural effect here */
  /* 13d2fc: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d300: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 13d304: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299208));
  fn1_1424b8(c);
  /* 13d308: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 13d30c: cbz w0, #0x13ce04 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ce04;
  /* 13d310: nop  */
  /* nop: no architectural effect here */
  /* 13d314: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d318: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299228));
  fn1_1424d0(c);
  /* 13d31c: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 13d320: b #0x13ce04 */
  goto L_13ce04;
L_13d324:;
  /* 13d324: nop  */
  /* nop: no architectural effect here */
  /* 13d328: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d32c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299248));
  fn1_1424b8(c);
  /* 13d330: cbz w0, #0x13ce14 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ce14;
  /* 13d334: nop  */
  /* nop: no architectural effect here */
  /* 13d338: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d33c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299264));
  fn1_1424d0(c);
  /* 13d340: b #0x13ce14 */
  goto L_13ce14;
L_13d344:;
  /* 13d344: nop  */
  /* nop: no architectural effect here */
  /* 13d348: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d34c: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
  /* 13d350: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299284));
  fn1_1424b8(c);
  /* 13d354: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13d358: cbz w0, #0x13ce6c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ce6c;
  /* 13d35c: nop  */
  /* nop: no architectural effect here */
  /* 13d360: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d364: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299304));
  fn1_1424d0(c);
  /* 13d368: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13d36c: b #0x13ce6c */
  goto L_13ce6c;
L_13d370:;
  /* 13d370: nop  */
  /* nop: no architectural effect here */
  /* 13d374: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d378: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299324));
  fn1_1424b8(c);
  /* 13d37c: cbz w0, #0x13cef4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13cef4;
  /* 13d380: nop  */
  /* nop: no architectural effect here */
  /* 13d384: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d388: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299340));
  fn1_1424d0(c);
  /* 13d38c: b #0x13cef4 */
  goto L_13cef4;
L_13d390:;
  /* 13d390: nop  */
  /* nop: no architectural effect here */
  /* 13d394: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d398: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299356));
  fn1_1424b8(c);
  /* 13d39c: cbz w0, #0x13d064 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d064;
  /* 13d3a0: nop  */
  /* nop: no architectural effect here */
  /* 13d3a4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d3a8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299372));
  fn1_1424d0(c);
  /* 13d3ac: b #0x13d064 */
  goto L_13d064;
L_13d3b0:;
  /* 13d3b0: nop  */
  /* nop: no architectural effect here */
  /* 13d3b4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d3b8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299388));
  fn1_1424b8(c);
  /* 13d3bc: cbz w0, #0x13cfb8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13cfb8;
  /* 13d3c0: nop  */
  /* nop: no architectural effect here */
  /* 13d3c4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d3c8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299404));
  fn1_1424d0(c);
  /* 13d3cc: b #0x13cfb8 */
  goto L_13cfb8;
L_13d3d0:;
  /* 13d3d0: nop  */
  /* nop: no architectural effect here */
  /* 13d3d4: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d3d8: mov w23, w2 */
  ARC_W_W(c, 23, ARC_W_R(c, 2));
  /* 13d3dc: mov w24, w1 */
  ARC_W_W(c, 24, ARC_W_R(c, 1));
  /* 13d3e0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299428));
  fn1_1424b8(c);
  /* 13d3e4: mov w1, w24 */
  ARC_W_W(c, 1, ARC_W_R(c, 24));
  /* 13d3e8: mov w2, w23 */
  ARC_W_W(c, 2, ARC_W_R(c, 23));
  /* 13d3ec: cbz w0, #0x13d02c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d02c;
  /* 13d3f0: nop  */
  /* nop: no architectural effect here */
  /* 13d3f4: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d3f8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299452));
  fn1_1424d0(c);
  /* 13d3fc: mov w1, w24 */
  ARC_W_W(c, 1, ARC_W_R(c, 24));
  /* 13d400: mov w2, w23 */
  ARC_W_W(c, 2, ARC_W_R(c, 23));
  /* 13d404: b #0x13d02c */
  goto L_13d02c;
L_13d408:;
  /* 13d408: nop  */
  /* nop: no architectural effect here */
  /* 13d40c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d410: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299476));
  fn1_1424b8(c);
  /* 13d414: cbz w0, #0x13d0dc */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d0dc;
  /* 13d418: nop  */
  /* nop: no architectural effect here */
  /* 13d41c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d420: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299492));
  fn1_1424d0(c);
  /* 13d424: b #0x13d0dc */
  goto L_13d0dc;
L_13d428:;
  /* 13d428: nop  */
  /* nop: no architectural effect here */
  /* 13d42c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d430: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299508));
  fn1_1424b8(c);
  /* 13d434: cbz w0, #0x13d140 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d140;
  /* 13d438: nop  */
  /* nop: no architectural effect here */
  /* 13d43c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d440: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299524));
  fn1_1424d0(c);
  /* 13d444: b #0x13d140 */
  goto L_13d140;
L_13d448:;
  /* 13d448: nop  */
  /* nop: no architectural effect here */
  /* 13d44c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d450: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299540));
  fn1_1424b8(c);
  /* 13d454: cbz w0, #0x13d1c8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d1c8;
  /* 13d458: nop  */
  /* nop: no architectural effect here */
  /* 13d45c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d460: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299556));
  fn1_1424d0(c);
  /* 13d464: b #0x13d1c8 */
  goto L_13d1c8;
  /* 13d468: b #0x13d484 */
  goto L_13d484;
  /* 13d46c: b #0x13d4a8 */
  goto L_13d4a8;
  /* 13d470: b #0x13d484 */
  goto L_13d484;
  /* 13d474: b #0x13d4a8 */
  goto L_13d4a8;
  /* 13d478: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299580));
  fn1_a1454(c);
  /* 13d47c: b #0x13d4a8 */
  goto L_13d4a8;
  /* 13d480: b #0x13d4a8 */
  goto L_13d4a8;
L_13d484:;
  /* 13d484: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13d488: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d48c: bl #0x13e3d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299600));
  fn1_13e3d0(c);
  /* 13d490: b #0x13d4ac */
  goto L_13d4ac;
  /* 13d494: b #0x13d4a8 */
  goto L_13d4a8;
  /* 13d498: b #0x13d4a8 */
  goto L_13d4a8;
  /* 13d49c: b #0x13d4a8 */
  goto L_13d4a8;
  /* 13d4a0: b #0x13d4a8 */
  goto L_13d4a8;
  /* 13d4a4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299624));
  fn1_a1454(c);
L_13d4a8:;
  /* 13d4a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_13d4ac:;
  /* 13d4ac: sub x0, x29, #0xd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(216)));
  /* 13d4b0: bl #0x13e3d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299636));
  fn1_13e3d0(c);
  /* 13d4b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d4b8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299644));
  fn1_9cc20(c);
}

void fn1_142590(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248272));
  /* 142590: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142594: ldr x17, [x16, #0xf10] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3856))));
  /* 142598: add x16, x16, #0xf10 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3856)));
  /* 14259c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1425a0: nop  */
  /* nop: no architectural effect here */
  /* 1425a4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142b90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249808));
  /* 142b90: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142b94: ldr x17, [x16, #0x110] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(272))));
  /* 142b98: add x16, x16, #0x110 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(272)));
  /* 142b9c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142ba0: nop  */
  /* nop: no architectural effect here */
  /* 142ba4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143190(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251344));
  /* 143190: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143194: ldr x17, [x16, #0x310] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(784))));
  /* 143198: add x16, x16, #0x310 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(784)));
  /* 14319c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1431a0: nop  */
  /* nop: no architectural effect here */
  /* 1431a4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143790(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252880));
  /* 143790: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143794: ldr x17, [x16, #0x510] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1296))));
  /* 143798: add x16, x16, #0x510 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1296)));
  /* 14379c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1437a0: nop  */
  /* nop: no architectural effect here */
  /* 1437a4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143d90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254416));
  /* 143d90: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143d94: ldr x17, [x16, #0x710] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1808))));
  /* 143d98: add x16, x16, #0x710 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1808)));
  /* 143d9c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143da0: nop  */
  /* nop: no architectural effect here */
  /* 143da4: nop  */
  /* nop: no architectural effect here */
}

void fn1_144390(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255952));
  /* 144390: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144394: ldr x17, [x16, #0x910] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2320))));
  /* 144398: add x16, x16, #0x910 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2320)));
  /* 14439c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1443a0: nop  */
  /* nop: no architectural effect here */
  /* 1443a4: nop  */
  /* nop: no architectural effect here */
}

void fn1_144990(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257488));
  /* 144990: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144994: ldr x17, [x16, #0xb10] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2832))));
  /* 144998: add x16, x16, #0xb10 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2832)));
  /* 14499c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1449a0: nop  */
  /* nop: no architectural effect here */
  /* 1449a4: nop  */
  /* nop: no architectural effect here */
}

