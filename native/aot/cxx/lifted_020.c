#include "lifted.h"

void fn1_9cf8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570892));
  /* 9cf8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9cf90: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9cf94: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 9cf98: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9cf9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9cfa0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 9cfa4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 9cfa8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 9cfac: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 9cfb0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9cfb4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643000));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9cfb8: tbz w0, #0, #0x9cff0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9cff0;
  /* 9cfbc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 9cfc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9cfc4: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 9cfc8: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 9cfcc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643024));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9cfd0: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 9cfd4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 9cfd8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 9cfdc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9cfe0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9cfe4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9cfe8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9cfec: ret  */
  return;
L_9cff0:;
  /* 9cff0: mov w0, #-0x198e */
  ARC_W_W(c, 0, UINT64_C(18446744073709545074));
  /* 9cff4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9cff8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9cffc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d000: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9d004: ret  */
  return;
}

void fn1_a15c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588864));
  /* a15c0: bti c */
  /* bti: no architectural effect here */
  /* a15c4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a15c8: ldr x8, [x8, #0x8c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2240))));
  /* a15cc: ldar x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* a15d0: ret  */
  return;
}

void fn1_a27e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593512));
  /* a27e8: bti c */
  /* bti: no architectural effect here */
  /* a27ec: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* a27f0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a8cbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038619324));
  /* a8cbc: bti c */
  /* bti: no architectural effect here */
  /* a8cc0: ldp x8, x1, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* a8cc4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a8cc8: ret  */
  return;
}

void fn1_b004c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038648908));
  /* b004c: bti c */
  /* bti: no architectural effect here */
  /* b0050: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* b0054: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b4af0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038668016));
  /* b4af0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b4af4: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b4af8: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* b4afc: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b4b00: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b4b04: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b4b08: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b4b0c: movi v0.2d, #0xffffffffffffffff */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = UINT64_C(18446744073709551615);
    _t.u64[1] = UINT64_C(18446744073709551615);
    (c)->q[0] = _t; }
  /* b4b10: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b4b14: ldr x25, [x1, #8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* b4b18: ldp w22, w23, [x1, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(24));
    ARC_W_W(c, 22, arc_ld32(_pa));
    ARC_W_W(c, 23, arc_ld32(_pa + 4));
  }
  /* b4b1c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4b20: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b4b24: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b4b28: str d0, [x1, #0x18] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(24)), (c)->q[0].u64[0]);
  /* b4b2c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4b30: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4b34: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740152));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4b38: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b4b3c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4b40: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4b44: b.eq #0xb4b5c */
  if (ARC_COND(c, 0)) goto L_b4b5c;
  /* b4b48: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4b4c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4b50: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4b54: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4b58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740188));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b4b5c:;
  /* b4b5c: ldr w24, [x19, #0x1c] */
  ARC_W_W(c, 24, arc_ld32((ARC_X_R(c, 19) + INT64_C(28))));
  /* b4b60: cmn w24, #1 */
  (void)arc_add32(c, ARC_W_R(c, 24), UINT64_C(1), 0);
  /* b4b64: b.eq #0xb4c18 */
  if (ARC_COND(c, 0)) goto L_b4c18;
  /* b4b68: cbz w24, #0xb4c6c */
  if ((ARC_W_R(c, 24)) == 0) goto L_b4c6c;
  /* b4b6c: cmp w24, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(2));
  /* b4b70: b.lo #0xb4c70 */
  if (ARC_COND(c, 3)) goto L_b4c70;
  /* b4b74: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* b4b78: mov w26, #0x202c */
  ARC_W_W(c, 26, UINT64_C(8236));
  /* b4b7c: b #0xb4b8c */
  goto L_b4b8c;
L_b4b80:;
  /* b4b80: add w25, w25, #1 */
  ARC_W_W(c, 25, (ARC_W_R(c, 25) + UINT64_C(1)));
  /* b4b84: cmp w24, w25 */
  (void)arc_sub32(c, ARC_W_R(c, 24), ARC_W_R(c, 25));
  /* b4b88: b.eq #0xb4c70 */
  if (ARC_COND(c, 0)) goto L_b4c70;
L_b4b8c:;
  /* b4b8c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b4b90: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4b94: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b4b98: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b4b9c: b.ls #0xb4bc4 */
  if (ARC_COND(c, 9)) goto L_b4bc4;
  /* b4ba0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b4ba4: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* b4ba8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4bac: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4bb0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4bb4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740280));
  fn1_142878(c);
  /* b4bb8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4bbc: cbz x0, #0xb4c90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4c90;
  /* b4bc0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b4bc4:;
  /* b4bc4: strh w26, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 26));
  /* b4bc8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4bcc: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b4bd0: str w25, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 25));
  /* b4bd4: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b4bd8: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* b4bdc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b4be0: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b4be4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4be8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4bec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740336));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4bf0: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b4bf4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4bf8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4bfc: b.eq #0xb4b80 */
  if (ARC_COND(c, 0)) goto L_b4b80;
  /* b4c00: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4c04: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4c08: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4c0c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4c10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740372));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4c14: b #0xb4b80 */
  goto L_b4b80;
L_b4c18:;
  /* b4c18: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b4c1c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4c20: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b4c24: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b4c28: b.ls #0xb4c50 */
  if (ARC_COND(c, 9)) goto L_b4c50;
  /* b4c2c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b4c30: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* b4c34: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4c38: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4c3c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4c40: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740420));
  fn1_142878(c);
  /* b4c44: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4c48: cbz x0, #0xb4c94 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4c94;
  /* b4c4c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b4c50:;
  /* b4c50: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b4c54: mov w9, #0x2e */
  ARC_W_W(c, 9, UINT64_C(46));
  /* b4c58: mov w10, #0x2e2e */
  ARC_W_W(c, 10, UINT64_C(11822));
  /* b4c5c: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* b4c60: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b4c64: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4c68: add x25, x8, #3 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) + UINT64_C(3)));
L_b4c6c:;
  /* b4c6c: str x25, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 25));
L_b4c70:;
  /* b4c70: stp w22, w23, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st32(_pa, ARC_W_R(c, 22));
    arc_st32(_pa + 4, ARC_W_R(c, 23));
  }
  /* b4c74: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4c78: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b4c7c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b4c80: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* b4c84: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4c88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b4c8c: ret  */
  return;
L_b4c90:;
  /* b4c90: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740500));
  fn1_1427b8(c);
L_b4c94:;
  /* b4c94: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740504));
  fn1_1427b8(c);
  /* b4c98: stp w22, w23, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st32(_pa, ARC_W_R(c, 22));
    arc_st32(_pa + 4, ARC_W_R(c, 23));
  }
  /* b4c9c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740512));
  fn1_9cc20(c);
  /* b4ca0: stp w22, w23, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st32(_pa, ARC_W_R(c, 22));
    arc_st32(_pa + 4, ARC_W_R(c, 23));
  }
  /* b4ca4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740520));
  fn1_9cc20(c);
}

void fn1_b7db8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038681016));
  /* b7db8: bti c */
  /* bti: no architectural effect here */
  /* b7dbc: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b7dc0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b7dc4: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* b7dc8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_bacc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038693056));
  /* bacc0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bacc4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bacc8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* baccc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bacd0: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bacd4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bacd8: ldr w11, [x1, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* bacdc: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* bace0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bace4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bace8: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* bacec: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bacf0: str w11, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 11));
  /* bacf4: b.ls #0xbad20 */
  if (ARC_COND(c, 9)) goto L_bad20;
  /* bacf8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bacfc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bad00: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bad04: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bad08: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bad0c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765200));
  fn1_142878(c);
  /* bad10: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bad14: cbz x0, #0xbb034 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb034;
  /* bad18: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bad1c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bad20:;
  /* bad20: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bad24: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* bad28: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bad2c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bad30: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* bad34: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765240));
  fn1_afa48(c);
  /* bad38: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* bad3c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* bad40: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bad44: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* bad48: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bad4c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* bad50: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bad54: b.ls #0xbad80 */
  if (ARC_COND(c, 9)) goto L_bad80;
  /* bad58: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bad5c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bad60: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bad64: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bad68: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bad6c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765296));
  fn1_142878(c);
  /* bad70: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bad74: cbz x0, #0xbb038 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb038;
  /* bad78: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bad7c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bad80:;
  /* bad80: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bad84: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* bad88: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bad8c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bad90: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* bad94: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bad98: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bad9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765344));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bada0: ldr w8, [x20, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(40))));
  /* bada4: tbz w8, #0, #0xbae08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_bae08;
  /* bada8: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* badac: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* badb0: add x10, x8, #6 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(6)));
  /* badb4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* badb8: b.ls #0xbade0 */
  if (ARC_COND(c, 9)) goto L_bade0;
  /* badbc: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* badc0: add x8, x8, #0x3e6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(998)));
  /* badc4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* badc8: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* badcc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* badd0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765396));
  fn1_142878(c);
  /* badd4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* badd8: cbz x0, #0xbb040 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb040;
  /* baddc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bade0:;
  /* bade0: mov w10, #0x6320 */
  ARC_W_W(c, 10, UINT64_C(25376));
  /* bade4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bade8: mov w9, #0x7473 */
  ARC_W_W(c, 9, UINT64_C(29811));
  /* badec: movk w10, #0x6e6f, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1852768256)));
  /* badf0: strh w9, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* badf4: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* badf8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* badfc: add x9, x8, #6 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(6)));
  /* bae00: ldr w8, [x20, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(40))));
  /* bae04: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_bae08:;
  /* bae08: tbz w8, #1, #0xbae70 */
  if (((ARC_W_R(c, 8)) >> 1 & 1) == 0) goto L_bae70;
  /* bae0c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bae10: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bae14: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* bae18: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bae1c: b.ls #0xbae44 */
  if (ARC_COND(c, 9)) goto L_bae44;
  /* bae20: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bae24: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* bae28: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bae2c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bae30: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bae34: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765496));
  fn1_142878(c);
  /* bae38: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bae3c: cbz x0, #0xbb044 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb044;
  /* bae40: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bae44:;
  /* bae44: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* bae48: add x9, x9, #0xe78 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3704)));
  /* bae4c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bae50: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* bae54: mov w10, #0x65 */
  ARC_W_W(c, 10, UINT64_C(101));
  /* bae58: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* bae5c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bae60: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bae64: add x9, x8, #9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* bae68: ldr w8, [x20, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(40))));
  /* bae6c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
L_bae70:;
  /* bae70: tbz w8, #2, #0xbaed4 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_baed4;
  /* bae74: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bae78: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bae7c: add x10, x8, #9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* bae80: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bae84: b.ls #0xbaeac */
  if (ARC_COND(c, 9)) goto L_baeac;
  /* bae88: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bae8c: add x8, x8, #0x3e9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1001)));
  /* bae90: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bae94: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bae98: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bae9c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765600));
  fn1_142878(c);
  /* baea0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* baea4: cbz x0, #0xbb048 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb048;
  /* baea8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_baeac:;
  /* baeac: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* baeb0: add x9, x9, #0xf91 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3985)));
  /* baeb4: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* baeb8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* baebc: mov w10, #0x74 */
  ARC_W_W(c, 10, UINT64_C(116));
  /* baec0: strb w10, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 10));
  /* baec4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* baec8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* baecc: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* baed0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_baed4:;
  /* baed4: ldrb w8, [x20, #0x2c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(44))));
  /* baed8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* baedc: b.eq #0xbaf30 */
  if (ARC_COND(c, 0)) goto L_baf30;
  /* baee0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* baee4: b.ne #0xbaf8c */
  if (ARC_COND(c, 1)) goto L_baf8c;
  /* baee8: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* baeec: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* baef0: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* baef4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* baef8: b.ls #0xbaf20 */
  if (ARC_COND(c, 9)) goto L_baf20;
  /* baefc: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* baf00: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* baf04: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* baf08: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* baf0c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* baf10: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765716));
  fn1_142878(c);
  /* baf14: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* baf18: cbz x0, #0xbb04c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb04c;
  /* baf1c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_baf20:;
  /* baf20: mov w9, #0x2620 */
  ARC_W_W(c, 9, UINT64_C(9760));
  /* baf24: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* baf28: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* baf2c: b #0xbaf80 */
  goto L_baf80;
L_baf30:;
  /* baf30: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* baf34: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* baf38: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* baf3c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* baf40: b.ls #0xbaf68 */
  if (ARC_COND(c, 9)) goto L_baf68;
  /* baf44: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* baf48: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* baf4c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* baf50: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* baf54: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* baf58: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765788));
  fn1_142878(c);
  /* baf5c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* baf60: cbz x0, #0xbb050 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb050;
  /* baf64: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_baf68:;
  /* baf68: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* baf6c: mov w9, #0x26 */
  ARC_W_W(c, 9, UINT64_C(38));
  /* baf70: mov w10, #0x2620 */
  ARC_W_W(c, 10, UINT64_C(9760));
  /* baf74: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* baf78: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* baf7c: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
L_baf80:;
  /* baf80: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* baf84: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* baf88: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_baf8c:;
  /* baf8c: ldr x8, [x20, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* baf90: cbz x8, #0xbb004 */
  if ((ARC_X_R(c, 8)) == 0) goto L_bb004;
  /* baf94: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* baf98: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* baf9c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bafa0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bafa4: b.ls #0xbafd0 */
  if (ARC_COND(c, 9)) goto L_bafd0;
  /* bafa8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bafac: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bafb0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bafb4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bafb8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bafbc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765888));
  fn1_142878(c);
  /* bafc0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bafc4: cbz x0, #0xbb03c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb03c;
  /* bafc8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bafcc: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_bafd0:;
  /* bafd0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* bafd4: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* bafd8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bafdc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bafe0: ldr x20, [x20, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* bafe4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bafe8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bafec: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* baff0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(765940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* baff4: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* baff8: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* baffc: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bb000: b.ne #0xbb014 */
  if (ARC_COND(c, 1)) goto L_bb014;
L_bb004:;
  /* bb004: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bb008: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bb00c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bb010: ret  */
  return;
L_bb014:;
  /* bb014: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bb018: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb01c: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bb020: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb024: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bb028: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bb02c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bb030: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bb034:;
  /* bb034: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766008));
  fn1_1427b8(c);
L_bb038:;
  /* bb038: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766012));
  fn1_1427b8(c);
L_bb03c:;
  /* bb03c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766016));
  fn1_1427b8(c);
L_bb040:;
  /* bb040: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766020));
  fn1_1427b8(c);
L_bb044:;
  /* bb044: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766024));
  fn1_1427b8(c);
L_bb048:;
  /* bb048: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766028));
  fn1_1427b8(c);
L_bb04c:;
  /* bb04c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766032));
  fn1_1427b8(c);
L_bb050:;
  /* bb050: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766036));
  fn1_1427b8(c);
}

void fn1_bd93c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704444));
  /* bd93c: bti c */
  /* bti: no architectural effect here */
  /* bd940: b #0x142968 */
  fn1_142968(c); return;
}

void fn1_d0060(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038780000));
  /* d0060: bti c */
  /* bti: no architectural effect here */
  /* d0064: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d0068: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* d006c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d0070: b.gt #0xd0080 */
  if (ARC_COND(c, 12)) goto L_d0080;
  /* d0074: b.hs #0xd0154 */
  if (ARC_COND(c, 2)) goto L_d0154;
L_d0078:;
  /* d0078: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d007c: ret  */
  return;
L_d0080:;
  /* d0080: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d0084: b.eq #0xd017c */
  if (ARC_COND(c, 0)) goto L_d017c;
  /* d0088: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d008c: b.eq #0xd0280 */
  if (ARC_COND(c, 0)) goto L_d0280;
  /* d0090: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d0094: b.ne #0xd01c8 */
  if (ARC_COND(c, 1)) goto L_d01c8;
  /* d0098: ldp w8, w9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* d009c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d00a0: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d00a4: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d00a8: stp w8, w10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* d00ac: ldr w8, [x0, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* d00b0: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d00b4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d00b8: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d00bc: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d00c0: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d00c4: str w8, [x0, #0xc] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* d00c8: ldr w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d00cc: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d00d0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d00d4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d00d8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d00dc: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d00e0: ldp w9, w10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* d00e4: ldr w11, [x0, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d00e8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d00ec: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d00f0: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d00f4: stp w9, w8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* d00f8: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d00fc: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* d0100: csel w9, w11, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* d0104: csel w8, w11, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* d0108: stur w9, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 9));
  /* d010c: ldp w11, w10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* d0110: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d0114: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d0118: csel w12, w10, w9, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d011c: csel w10, w10, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d0120: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0124: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* d0128: csel w11, w12, w11, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* d012c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0130: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0134: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0138: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d013c: csel w8, w8, w11, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* d0140: stp w9, w8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* d0144: csel w8, w12, w11, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* d0148: stp w8, w10, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* d014c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0150: ret  */
  return;
L_d0154:;
  /* d0154: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d0158: b.ne #0xd01c8 */
  if (ARC_COND(c, 1)) goto L_d01c8;
  /* d015c: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d0160: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* d0164: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d0168: b.hs #0xd0078 */
  if (ARC_COND(c, 2)) goto L_d0078;
  /* d016c: str w9, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d0170: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0174: stur w8, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 8));
  /* d0178: ret  */
  return;
L_d017c:;
  /* d017c: ldr w8, [x0, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d0180: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d0184: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0188: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d018c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0190: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d0194: str w8, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* d0198: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d019c: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d01a0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d01a4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d01a8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d01ac: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d01b0: ldp w9, w10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* d01b4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d01b8: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d01bc: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d01c0: str w9, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d01c4: b #0xd02f0 */
  goto L_d02f0;
L_d01c8:;
  /* d01c8: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d01cc: ldp w10, w9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* d01d0: ldr w8, [x11, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(8));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
    ARC_W_W(c, 8, arc_ld32(_a));
  }
  /* d01d4: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d01d8: csel w12, w9, w8, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d01dc: csel w9, w9, w8, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d01e0: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* d01e4: csel w8, w12, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d01e8: csel w13, w12, w10, lo */
  ARC_W_W(c, 13, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d01ec: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d01f0: str w8, [x11] */
  arc_st32(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* d01f4: add x8, x0, #0xc */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(12)));
  /* d01f8: csel w10, w10, w9, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d01fc: csel w9, w9, w13, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 13)));
  /* d0200: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d0204: stp w10, w9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 10));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* d0208: b.eq #0xd0078 */
  if (ARC_COND(c, 0)) goto L_d0078;
  /* d020c: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d0210: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* d0214: b #0xd0244 */
  goto L_d0244;
L_d0218:;
  /* d0218: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d021c:;
  /* d021c: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d0220: str w12, [x11] */
  arc_st32(ARC_X_R(c, 11), ARC_W_R(c, 12));
  /* d0224: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d0228: b.eq #0xd02fc */
  if (ARC_COND(c, 0)) goto L_d02fc;
L_d022c:;
  /* d022c: add x12, x8, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* d0230: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d0234: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* d0238: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d023c: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d0240: b.eq #0xd0078 */
  if (ARC_COND(c, 0)) goto L_d0078;
L_d0244:;
  /* d0244: ldr w12, [x8] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 8)));
  /* d0248: ldr w11, [x11] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 11)));
  /* d024c: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0250: b.hs #0xd022c */
  if (ARC_COND(c, 2)) goto L_d022c;
  /* d0254: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d0258:;
  /* d0258: subs x13, x14, #4 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(4)));
  /* d025c: str w11, [x0, x14] */
  arc_st32((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_W_R(c, 11));
  /* d0260: b.eq #0xd0218 */
  if (ARC_COND(c, 0)) goto L_d0218;
  /* d0264: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d0268: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d026c: ldur w11, [x11, #-8] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 11) + INT64_C(-8))));
  /* d0270: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0274: b.lo #0xd0258 */
  if (ARC_COND(c, 3)) goto L_d0258;
  /* d0278: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d027c: b #0xd021c */
  goto L_d021c;
L_d0280:;
  /* d0280: ldp w10, w8, [x0, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* d0284: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d0288: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d028c: csel w11, w9, w8, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d0290: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d0294: str w11, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 11));
  /* d0298: str w8, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d029c: ldur w8, [x1, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d02a0: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d02a4: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d02a8: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d02ac: stur w9, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 9));
  /* d02b0: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* d02b4: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d02b8: csel w10, w9, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d02bc: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* d02c0: stp w8, w10, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* d02c4: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d02c8: ldur w9, [x1, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d02cc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d02d0: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d02d4: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d02d8: stur w10, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), ARC_W_R(c, 10));
  /* d02dc: ldr w10, [x0, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d02e0: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d02e4: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d02e8: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d02ec: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
L_d02f0:;
  /* d02f0: str w8, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* d02f4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d02f8: ret  */
  return;
L_d02fc:;
  /* d02fc: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* d0300: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d0304: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d0308: ret  */
  return;
}

void fn1_d77b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810544));
  /* d77b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d77b4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d77b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d77bc: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* d77c0: bl #0x1429c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882628));
  fn1_1429c8(c);
  /* d77c4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882632));
  fn1_142488(c);
}

void fn1_db5e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826472));
  /* db5e8: bti c */
  /* bti: no architectural effect here */
  /* db5ec: mov x8, #0x2d69 */
  ARC_X_W(c, 8, UINT64_C(11625));
  /* db5f0: lsl w9, w0, #3 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 0)) << ((UINT64_C(3)) & 31)));
  /* db5f4: lsr x10, x0, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* db5f8: movk x8, #0xeb38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3946315776)));
  /* db5fc: movk x8, #0xea08, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(257320080637952)));
  /* db600: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* db604: movk x8, #0x9ddf, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(11375811183761162240)));
  /* db608: eor x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ARC_X_R(c, 10)));
  /* db60c: mul x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* db610: eor x10, x10, x9, lsr #47 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* db614: eor x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) ^ ARC_X_R(c, 9)));
  /* db618: mul x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* db61c: lsr x9, x8, #0x2f */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(47)) & 63)));
  /* db620: eor w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) ^ ARC_W_R(c, 8)));
  /* db624: nop  */
  /* nop: no architectural effect here */
  /* db628: adr x9, #0x156c20 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1403936)));
  /* db62c: add w8, w8, w8, lsl #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ((uint32_t)(ARC_W_R(c, 8)) << 3)));
  /* db630: and x8, x8, #0x1f */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(31)));
  /* db634: add x0, x9, x8, lsl #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* db638: ret  */
  return;
}

void fn1_df960(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038843744));
  /* df960: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* df964: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* df968: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* df96c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* df970: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* df974: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* df978: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* df97c: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* df980: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* df984: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* df988: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* df98c: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* df990: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* df994: csinc x20, x9, x1, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* df998: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* df99c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915872));
  fn1_142860(c);
  /* df9a0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* df9a4: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* df9a8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915884));
  fn1_1428f0(c);
  /* df9ac: add x22, x0, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* df9b0: stp x21, x21, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* df9b4: add x2, x21, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* df9b8: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* df9bc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* df9c0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* df9c4: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(915912));
  fn1_1449d8(c);
  /* df9c8: str x22, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 22));
  /* df9cc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* df9d0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* df9d4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* df9d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* df9dc: ret  */
  return;
}

void fn1_e2340(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854464));
  /* e2340: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2344: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2348: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e234c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2350: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2354: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e2358: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* e235c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e2360: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* e2364: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e2368: bl #0x142e30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(926572));
  fn1_142e30(c);
  /* e236c: mov x4, x0 */
  ARC_X_W(c, 4, ARC_X_R(c, 0));
  /* e2370: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e2374: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e2378: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e237c: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* e2380: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2384: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2388: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e238c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2390: b #0x142d28 */
  fn1_142d28(c); return;
}

void fn1_e55cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038867404));
  /* e55cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e55d0: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e55d4: str d8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), (c)->q[8].u64[0]);
  /* e55d8: stp x29, x30, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e55dc: str x23, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 23));
  /* e55e0: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e55e4: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e55e8: add x29, sp, #0x48 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(72)));
  /* e55ec: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* e55f0: mov w22, #0x7473 */
  ARC_W_W(c, 22, UINT64_C(29811));
  /* e55f4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e55f8: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* e55fc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e5600: movk w22, #0x646f, lsl #16 */
  ARC_W_W(c, 22, ((ARC_W_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1684996096)));
  /* e5604: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e5608: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e560c: stur w22, [sp, #9] */
  arc_st32(((c)->sp + INT64_C(9)), ARC_W_R(c, 22));
  /* e5610: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e5614: strb wzr, [sp, #0xd] */
  arc_st8(((c)->sp + INT64_C(13)), ARC_W_R(c, 31));
  /* e5618: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* e561c: csel x20, x10, x9, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e5620: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939556));
  fn1_142a58(c);
  /* e5624: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e5628: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e562c: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e5630: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* e5634: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e5638: bl #0x142f98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939580));
  fn1_142f98(c);
  /* e563c: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* e5640: str w23, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 23));
  /* e5644: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e5648: b.eq #0xe5694 */
  if (ARC_COND(c, 0)) goto L_e5694;
  /* e564c: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e5650: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e5654: b.eq #0xe56c8 */
  if (ARC_COND(c, 0)) goto L_e56c8;
  /* e5658: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* e565c: cbz x19, #0xe5668 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e5668;
  /* e5660: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e5664: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e5668:;
  /* e5668: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e566c: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939632));
  fn1_142e00(c);
  /* e5670: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e5674: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e5678: ldr x23, [sp, #0x58] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(88))));
  /* e567c: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e5680: ldr d8, [sp, #0x40] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* e5684: ldp x29, x30, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e5688: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e568c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e5690: ret  */
  return;
L_e5694:;
  /* e5694: mov w8, #0x24 */
  ARC_W_W(c, 8, UINT64_C(36));
  /* e5698: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e569c: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e56a0: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e56a4: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* e56a8: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e56ac: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* e56b0: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e56b4: stur w22, [x29, #-0x1f] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-31)), ARC_W_R(c, 22));
  /* e56b8: stur x10, [x29, #-0x1b] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-27)), ARC_X_R(c, 10));
  /* e56bc: stur x8, [x29, #-0x15] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-21)), ARC_X_R(c, 8));
  /* e56c0: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e56c4: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939720));
  fn1_da038(c);
L_e56c8:;
  /* e56c8: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e56cc: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e56d0: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e56d4: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e56d8: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* e56dc: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e56e0: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* e56e4: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e56e8: stur w22, [x29, #-0x1f] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-31)), ARC_W_R(c, 22));
  /* e56ec: stur x10, [x29, #-0x1b] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-27)), ARC_X_R(c, 10));
  /* e56f0: stur x8, [x29, #-0x14] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-20)), ARC_X_R(c, 8));
  /* e56f4: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e56f8: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939772));
  fn1_e78a0(c);
  /* e56fc: b #0xe5700 */
  goto L_e5700;
L_e5700:;
  /* e5700: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e5704: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e5708: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939788));
  fn1_142e00(c);
  /* e570c: b #0xe5714 */
  goto L_e5714;
  /* e5710: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e5714:;
  /* e5714: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e5718: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939804));
  fn1_142e00(c);
  /* e571c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e5720: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(939812));
  fn1_9cc20(c);
}

void fn1_e9314(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038883092));
  /* e9314: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9318: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e931c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e9320: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e9324: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9328: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e932c: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* e9330: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955188));
  fn1_1428f0(c);
  /* e9334: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* e9338: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e933c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e9340: add x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* e9344: asr x8, x22, #1 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(1)) & 63))));
  /* e9348: lsr x9, x8, #0x3a */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(58)) & 63)));
  /* e934c: lsl x20, x8, #6 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(6)) & 63)));
  /* e9350: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* e9354: csinv x0, x20, xzr, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* e9358: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* e935c: bl #0x142920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955232));
  fn1_142920(c);
  /* e9360: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e9364: cmp x22, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(2));
  /* e9368: b.lo #0xe937c */
  if (ARC_COND(c, 3)) goto L_e937c;
  /* e936c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e9370: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* e9374: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e9378: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955260));
  fn1_144a20(c);
L_e937c:;
  /* e937c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e9380: str x21, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 21));
  /* e9384: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e9388: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e938c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9390: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9394: ret  */
  return;
  /* e9398: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e939c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e93a0: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* e93a4: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
  /* e93a8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955308));
  fn1_142608(c);
  /* e93ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e93b0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955316));
  fn1_9cc20(c);
}

void fn1_eb310(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038891280));
  /* eb310: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb314: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb318: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb31c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb320: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb324: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963368));
  fn1_142518(c);
  /* eb328: cbnz w0, #0xeb35c */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb35c;
  /* eb32c: ldr w20, [x19, #0x88] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb330: cbnz w20, #0xeb33c */
  if ((ARC_W_R(c, 20)) != 0) goto L_eb33c;
  /* eb334: mov w8, #-0xffffffff80000000 */
  ARC_W_W(c, 8, UINT64_C(18446744071562067968));
  /* eb338: str w8, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 8));
L_eb33c:;
  /* eb33c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb340: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963396));
  fn1_142560(c);
  /* eb344: cmp w20, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(0));
  /* eb348: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* eb34c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb350: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb354: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb358: ret  */
  return;
L_eb35c:;
  /* eb35c: nop  */
  /* nop: no architectural effect here */
  /* eb360: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb364: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963432));
  fn1_142a40(c);
  /* eb368: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963436));
  fn1_a1454(c);
}

void fn1_ed204(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899204));
  /* ed204: bti c */
  /* bti: no architectural effect here */
  /* ed208: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed20c: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* ed210: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_efd88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038910344));
  /* efd88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* efd8c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* efd90: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* efd94: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* efd98: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* efd9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* efda0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* efda4: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* efda8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* efdac: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* efdb0: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* efdb4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* efdb8: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* efdbc: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982464));
  fn1_1435f8(c);
  /* efdc0: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* efdc4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* efdc8: b.ne #0xefee4 */
  if (ARC_COND(c, 1)) goto L_efee4;
  /* efdcc: and w21, w21, #0xff */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) & UINT64_C(255)));
  /* efdd0: add x22, x19, #0x28 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* efdd4: mov x23, #0x7fffffffffffffff */
  ARC_X_W(c, 23, UINT64_C(9223372036854775807));
  /* efdd8: b #0xefdfc */
  goto L_efdfc;
L_efddc:;
  /* efddc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* efde0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* efde4: ldr x0, [x22, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + ARC_X_R(c, 8))));
  /* efde8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* efdec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* efdf0: b.eq #0xefe8c */
  if (ARC_COND(c, 0)) goto L_efe8c;
  /* efdf4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* efdf8: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_efdfc:;
  /* efdfc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* efe00: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* efe04: ldr x0, [x22, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + ARC_X_R(c, 8))));
  /* efe08: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* efe0c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* efe10: b.eq #0xefe1c */
  if (ARC_COND(c, 0)) goto L_efe1c;
  /* efe14: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* efe18: b #0xefe30 */
  goto L_efe30;
L_efe1c:;
  /* efe1c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* efe20: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* efe24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982568));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* efe28: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* efe2c: b.eq #0xefea4 */
  if (ARC_COND(c, 0)) goto L_efea4;
L_efe30:;
  /* efe30: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* efe34: cmp w21, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 21), ARC_W_R(c, 8));
  /* efe38: b.eq #0xefe9c */
  if (ARC_COND(c, 0)) goto L_efe9c;
  /* efe3c: ldp x9, x10, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* efe40: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* efe44: b.eq #0xefe58 */
  if (ARC_COND(c, 0)) goto L_efe58;
  /* efe48: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* efe4c: str x10, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 10));
  /* efe50: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* efe54: b #0xefe74 */
  goto L_efe74;
L_efe58:;
  /* efe58: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* efe5c: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* efe60: and w1, w0, #0xff */
  ARC_W_W(c, 1, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* efe64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* efe68: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982636));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* efe6c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* efe70: b.eq #0xefe9c */
  if (ARC_COND(c, 0)) goto L_efe9c;
L_efe74:;
  /* efe74: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* efe78: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* efe7c: b.eq #0xefddc */
  if (ARC_COND(c, 0)) goto L_efddc;
  /* efe80: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* efe84: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* efe88: b #0xefddc */
  goto L_efddc;
L_efe8c:;
  /* efe8c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* efe90: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* efe94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982680));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* efe98: b #0xefdfc */
  goto L_efdfc;
L_efe9c:;
  /* efe9c: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* efea0: b #0xefea8 */
  goto L_efea8;
L_efea4:;
  /* efea4: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
L_efea8:;
  /* efea8: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* efeac: orr w12, w8, #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* efeb0: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* efeb4: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* efeb8: csel w8, w12, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 8)));
  /* efebc: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* efec0: ldr x11, [x9, #0x28] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* efec4: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* efec8: ldp w10, w11, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* efecc: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* efed0: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* efed4: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* efed8: tst w8, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 11)));
  /* efedc: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* efee0: b.ne #0xeff00 */
  if (ARC_COND(c, 1)) goto L_eff00;
L_efee4:;
  /* efee4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* efee8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* efeec: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* efef0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* efef4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* efef8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* efefc: ret  */
  return;
L_eff00:;
  /* eff00: nop  */
  /* nop: no architectural effect here */
  /* eff04: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* eff08: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982796));
  fn1_ec720(c);
  /* eff0c: b #0xeff10 */
  goto L_eff10;
L_eff10:;
  /* eff10: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982804));
  fn1_142548(c);
  /* eff14: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(982808));
  fn1_142980(c);
  /* eff18: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* eff1c: b #0xefea8 */
  goto L_efea8;
}

void fn1_f3c28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926376));
  /* f3c28: bti c */
  /* bti: no architectural effect here */
  /* f3c2c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3c30: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* f3c34: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f67b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038937528));
  /* f67b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f67bc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f67c0: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* f67c4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f67c8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f67cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f67d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f67d4: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* f67d8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f67dc: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f67e0: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f67e4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f67e8: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f67ec: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009648));
  fn1_143670(c);
  /* f67f0: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f67f4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f67f8: b.ne #0xf6908 */
  if (ARC_COND(c, 1)) goto L_f6908;
  /* f67fc: add x22, x19, #0x28 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* f6800: mov x23, #0x7fffffffffffffff */
  ARC_X_W(c, 23, UINT64_C(9223372036854775807));
  /* f6804: b #0xf6828 */
  goto L_f6828;
L_f6808:;
  /* f6808: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f680c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6810: ldr x0, [x22, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + ARC_X_R(c, 8))));
  /* f6814: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f6818: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f681c: b.eq #0xf68b0 */
  if (ARC_COND(c, 0)) goto L_f68b0;
  /* f6820: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* f6824: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
L_f6828:;
  /* f6828: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f682c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6830: ldr x0, [x22, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + ARC_X_R(c, 8))));
  /* f6834: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f6838: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f683c: b.eq #0xf6848 */
  if (ARC_COND(c, 0)) goto L_f6848;
  /* f6840: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* f6844: b #0xf6858 */
  goto L_f6858;
L_f6848:;
  /* f6848: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f684c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f6850: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009748));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f6854: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
L_f6858:;
  /* f6858: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* f685c: b.eq #0xf68c8 */
  if (ARC_COND(c, 0)) goto L_f68c8;
  /* f6860: cmp w1, w20 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 20));
  /* f6864: b.eq #0xf68c0 */
  if (ARC_COND(c, 0)) goto L_f68c0;
  /* f6868: ldp x8, x9, [x21, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f686c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f6870: b.eq #0xf6880 */
  if (ARC_COND(c, 0)) goto L_f6880;
  /* f6874: str w1, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 1));
  }
  /* f6878: str x8, [x21, #0x30] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(48)), ARC_X_R(c, 8));
  /* f687c: b #0xf6898 */
  goto L_f6898;
L_f6880:;
  /* f6880: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f6884: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* f6888: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f688c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009808));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f6890: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f6894: b.eq #0xf68c0 */
  if (ARC_COND(c, 0)) goto L_f68c0;
L_f6898:;
  /* f6898: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f689c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* f68a0: b.eq #0xf6808 */
  if (ARC_COND(c, 0)) goto L_f6808;
  /* f68a4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f68a8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f68ac: b #0xf6808 */
  goto L_f6808;
L_f68b0:;
  /* f68b0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f68b4: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f68b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009852));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f68bc: b #0xf6828 */
  goto L_f6828;
L_f68c0:;
  /* f68c0: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f68c4: b #0xf68cc */
  goto L_f68cc;
L_f68c8:;
  /* f68c8: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
L_f68cc:;
  /* f68cc: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f68d0: orr w12, w8, #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* f68d4: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f68d8: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f68dc: csel w8, w12, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 8)));
  /* f68e0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f68e4: ldr x11, [x9, #0x28] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f68e8: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* f68ec: ldp w10, w11, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f68f0: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* f68f4: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f68f8: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* f68fc: tst w8, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 11)));
  /* f6900: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f6904: b.ne #0xf6924 */
  if (ARC_COND(c, 1)) goto L_f6924;
L_f6908:;
  /* f6908: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f690c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6910: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* f6914: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f6918: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f691c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f6920: ret  */
  return;
L_f6924:;
  /* f6924: nop  */
  /* nop: no architectural effect here */
  /* f6928: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f692c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009968));
  fn1_ec720(c);
  /* f6930: b #0xf6934 */
  goto L_f6934;
L_f6934:;
  /* f6934: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009976));
  fn1_142548(c);
  /* f6938: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1009980));
  fn1_142980(c);
  /* f693c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f6940: b #0xf68cc */
  goto L_f68cc;
}

void fn1_fb9d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038958552));
  /* fb9d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb9dc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb9e0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fb9e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb9e8: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fb9ec: nop  */
  /* nop: no architectural effect here */
  /* fb9f0: adr x10, #0x15dc40 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fb9f4: ldr x9, [x9, #0xaa8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2728))));
  /* fb9f8: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* fb9fc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fba00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fba04: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fba08: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* fba0c: stp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* fba10: b.eq #0xfba20 */
  if (ARC_COND(c, 0)) goto L_fba20;
  /* fba14: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fba18: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fba1c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1030688));
  fn1_db2e0(c);
L_fba20:;
  /* fba20: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* fba24: adrp x10, #0x151000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fba28: ldr q0, [x8, #0x10]! */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))), arc_ld64((ARC_X_R(c, 8) + INT64_C(16)) + 8));
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(16));
  /* fba2c: add x11, x8, #0x48 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(72)));
  /* fba30: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* fba34: ldr q0, [x8, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))), arc_ld64((ARC_X_R(c, 8) + INT64_C(16)) + 8));
  /* fba38: str q0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* fba3c: ldr q0, [x8, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))), arc_ld64((ARC_X_R(c, 8) + INT64_C(32)) + 8));
  /* fba40: str q0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* fba44: ldr x10, [x10, #0xae8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2792))));
  /* fba48: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* fba4c: add x10, x10, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* fba50: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* fba54: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* fba58: b.eq #0xfba68 */
  if (ARC_COND(c, 0)) goto L_fba68;
  /* fba5c: ldp x11, x13, [x20, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(72));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* fba60: str x9, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 9));
  /* fba64: b #0xfba88 */
  goto L_fba88;
L_fba68:;
  /* fba68: add x9, x19, #0x58 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* fba6c: ldr x12, [x20, #0x50] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 20) + INT64_C(80))));
  /* fba70: str x9, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 9));
  /* fba74: ldp x11, x10, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* fba78: sub x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 11)));
  /* fba7c: sub x12, x12, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* fba80: add x11, x9, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* fba84: add x13, x9, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) + ARC_X_R(c, 12)));
L_fba88:;
  /* fba88: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* fba8c: ldr x12, [x20, #0x68] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 20) + INT64_C(104))));
  /* fba90: stp x11, x13, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 13));
  }
  /* fba94: ldr x11, [x10, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(96));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(96));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* fba98: ldr x13, [x20, #0x70] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* fba9c: stp x11, x12, [x19, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* fbaa0: mov x11, x20 */
  ARC_X_W(c, 11, ARC_X_R(c, 20));
  /* fbaa4: ldur q0, [x20, #0x78] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(120))), arc_ld64((ARC_X_R(c, 20) + INT64_C(120)) + 8));
  /* fbaa8: str x13, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 13));
  /* fbaac: stur q0, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* fbab0: ldr x13, [x11, #0x88]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(136));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(136));
    ARC_X_W(c, 13, arc_ld64(_a));
  }
  /* fbab4: str x13, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 13));
  /* fbab8: ldr x13, [x11, #8] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 11) + INT64_C(8))));
  /* fbabc: str x13, [x19, #0x90] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)), ARC_X_R(c, 13));
  /* fbac0: ldr d0, [x11, #0x10] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 11) + INT64_C(16))));
  /* fbac4: ldrb w13, [x11, #0x18] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 11) + INT64_C(24))));
  /* fbac8: str d0, [x19, #0x98] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(152)), (c)->q[0].u64[0]);
  /* fbacc: strb w13, [x19, #0xa0] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 13));
  /* fbad0: ldurh w13, [x11, #0x19] */
  ARC_W_W(c, 13, arc_ld16((ARC_X_R(c, 11) + INT64_C(25))));
  /* fbad4: sturh w13, [x19, #0xa1] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(161)), ARC_W_R(c, 13));
  /* fbad8: ldur x13, [x11, #-0x60] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 11) + INT64_C(-96))));
  /* fbadc: cbz x13, #0xfbb40 */
  if ((ARC_X_R(c, 13)) == 0) goto L_fbb40;
  /* fbae0: ldr x14, [x20, #0x68] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 20) + INT64_C(104))));
  /* fbae4: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* fbae8: csel x9, x12, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 9)));
  /* fbaec: ldr x12, [x20, #0x38] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* fbaf0: str x9, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 9));
  /* fbaf4: str x9, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 9));
  /* fbaf8: sub x12, x12, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 13)));
  /* fbafc: ldp x15, x14, [x20, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(40));
    ARC_X_W(c, 15, arc_ld64(_pa));
    ARC_X_W(c, 14, arc_ld64(_pa + 8));
  }
  /* fbb00: add x12, x9, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) + ARC_X_R(c, 12)));
  /* fbb04: sub x13, x14, x15 */
  ARC_X_W(c, 13, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* fbb08: add x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* fbb0c: stp x9, x12, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
L_fbb10:;
  /* fbb10: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fbb14: str xzr, [x8, #0x40] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(64)), ARC_X_R(c, 31));
  /* fbb18: stp xzr, xzr, [x11, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fbb1c: str xzr, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 31));
  /* fbb20: stp q0, q0, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fbb24: stp q0, q0, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fbb28: stp q0, q0, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fbb2c: strh wzr, [x11, #0x18] */
  arc_st16((ARC_X_R(c, 11) + INT64_C(24)), ARC_W_R(c, 31));
  /* fbb30: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fbb34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fbb38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fbb3c: ret  */
  return;
L_fbb40:;
  /* fbb40: ldr x13, [x8] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 8)));
  /* fbb44: cbz x13, #0xfbb10 */
  if ((ARC_X_R(c, 13)) == 0) goto L_fbb10;
  /* fbb48: ldp x15, x16, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 15, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* fbb4c: ldr x14, [x20, #0x68] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 20) + INT64_C(104))));
  /* fbb50: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* fbb54: sub x14, x15, x13 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - ARC_X_R(c, 13)));
  /* fbb58: sub x13, x16, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 16) - ARC_X_R(c, 13)));
  /* fbb5c: b.eq #0xfbb74 */
  if (ARC_COND(c, 0)) goto L_fbb74;
  /* fbb60: add x12, x9, x14 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) + ARC_X_R(c, 14)));
  /* fbb64: stp x9, x12, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* fbb68: add x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* fbb6c: str x9, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 9));
  /* fbb70: b #0xfbb10 */
  goto L_fbb10;
L_fbb74:;
  /* fbb74: add x9, x12, x14 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 14)));
  /* fbb78: stp x12, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fbb7c: add x12, x12, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 13)));
  /* fbb80: str x12, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 12));
  /* fbb84: b #0xfbb10 */
  goto L_fbb10;
}

void fn1_ff030(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038972464));
  /* ff030: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff034: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff038: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ff03c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ff040: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ff044: nop  */
  /* nop: no architectural effect here */
  /* ff048: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ff04c: ldr x8, [x8, #0xac8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2760))));
  /* ff050: ldr x20, [x0, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* ff054: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ff058: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ff05c: cmp x20, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 9));
  /* ff060: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ff064: b.eq #0xff088 */
  if (ARC_COND(c, 0)) goto L_ff088;
  /* ff068: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ff06c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ff070: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044596));
  fn1_bd950(c);
  /* ff074: cbnz x0, #0xff088 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ff088;
  /* ff078: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ff07c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ff080: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ff084: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044616));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ff088:;
  /* ff088: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ff08c: mov w1, #0x60 */
  ARC_W_W(c, 1, UINT64_C(96));
  /* ff090: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ff094: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff098: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff09c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_10c270(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039026288));
  /* 10c270: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10c274: sub sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(416)));
  /* 10c278: str d8, [sp, #0x130] */
  arc_st64(((c)->sp + INT64_C(304)), (c)->q[8].u64[0]);
  /* 10c27c: stp x29, x30, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10c280: stp x28, x27, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10c284: stp x26, x25, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10c288: stp x24, x23, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10c28c: stp x22, x21, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10c290: stp x20, x19, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10c294: add x29, sp, #0x140 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(320)));
  /* 10c298: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* 10c29c: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10c2a0: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10c2a4: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10c2a8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10c2ac: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10c2b0: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* 10c2b4: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c2b8: tbnz w9, #0xb, #0x10c2c8 */
  if (((ARC_W_R(c, 9)) >> 11 & 1) != 0) goto L_10c2c8;
  /* 10c2bc: orr x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10c2c0: tbnz w9, #0xa, #0x10c2d8 */
  if (((ARC_W_R(c, 9)) >> 10 & 1) != 0) goto L_10c2d8;
  /* 10c2c4: b #0x10c2e0 */
  goto L_10c2e0;
L_10c2c8:;
  /* 10c2c8: mov w10, #0x2b */
  ARC_W_W(c, 10, UINT64_C(43));
  /* 10c2cc: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10c2d0: sturb w10, [x29, #-7] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-7)), ARC_W_R(c, 10));
  /* 10c2d4: tbz w9, #0xa, #0x10c2e0 */
  if (((ARC_W_R(c, 9)) >> 10 & 1) == 0) goto L_10c2e0;
L_10c2d8:;
  /* 10c2d8: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10c2dc: strb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
L_10c2e0:;
  /* 10c2e0: mov w10, #0x104 */
  ARC_W_W(c, 10, UINT64_C(260));
  /* 10c2e4: nop  */
  /* nop: no architectural effect here */
  /* 10c2e8: adr x22, #0x15dc38 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c2ec: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10c2f0: cmp w10, #0x104 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(260));
  /* 10c2f4: b.ne #0x10c360 */
  if (ARC_COND(c, 1)) goto L_10c360;
  /* 10c2f8: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10c2fc: mov w9, #0x41 */
  ARC_W_W(c, 9, UINT64_C(65));
  /* 10c300: mov w10, #0x61 */
  ARC_W_W(c, 10, UINT64_C(97));
  /* 10c304: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10c308: sub x10, x29, #0x2e */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10c30c: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 10c310: stur x10, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 10));
  /* 10c314: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10c318: tbz w8, #0, #0x10c54c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10c54c;
L_10c31c:;
  /* 10c31c: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 10c320: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10c324: sub x0, x29, #0x2e */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10c328: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10c32c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c330: mov w1, #0x1e */
  ARC_W_W(c, 1, UINT64_C(30));
  /* 10c334: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098552));
  fn1_136860(c);
  /* 10c338: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 10c33c: b.le #0x10c414 */
  if (ARC_COND(c, 13)) goto L_10c414;
  /* 10c340: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10c344: tbz w8, #0, #0x10c5c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10c5c4;
L_10c348:;
  /* 10c348: ldr x1, [x23, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10c34c: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 10c350: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 10c354: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c358: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098588));
  fn1_136920(c);
  /* 10c35c: b #0x10c404 */
  goto L_10c404;
L_10c360:;
  /* 10c360: mov w11, #0x2a2e */
  ARC_W_W(c, 11, UINT64_C(10798));
  /* 10c364: cmp w10, #0x100 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(256));
  /* 10c368: strh w11, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10c36c: b.eq #0x10c388 */
  if (ARC_COND(c, 0)) goto L_10c388;
  /* 10c370: cmp w10, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(4));
  /* 10c374: b.ne #0x10c398 */
  if (ARC_COND(c, 1)) goto L_10c398;
  /* 10c378: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10c37c: mov w9, #0x46 */
  ARC_W_W(c, 9, UINT64_C(70));
  /* 10c380: mov w10, #0x66 */
  ARC_W_W(c, 10, UINT64_C(102));
  /* 10c384: b #0x10c3a4 */
  goto L_10c3a4;
L_10c388:;
  /* 10c388: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10c38c: mov w9, #0x45 */
  ARC_W_W(c, 9, UINT64_C(69));
  /* 10c390: mov w10, #0x65 */
  ARC_W_W(c, 10, UINT64_C(101));
  /* 10c394: b #0x10c3a4 */
  goto L_10c3a4;
L_10c398:;
  /* 10c398: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10c39c: mov w9, #0x47 */
  ARC_W_W(c, 9, UINT64_C(71));
  /* 10c3a0: mov w10, #0x67 */
  ARC_W_W(c, 10, UINT64_C(103));
L_10c3a4:;
  /* 10c3a4: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10c3a8: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10c3ac: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* 10c3b0: sub x8, x29, #0x2e */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10c3b4: stur x8, [x29, #-0x38] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-56)), ARC_X_R(c, 8));
  /* 10c3b8: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10c3bc: tbz w8, #0, #0x10c588 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10c588;
L_10c3c0:;
  /* 10c3c0: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 10c3c4: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10c3c8: ldr w4, [x20, #0x10] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 10c3cc: sub x0, x29, #0x2e */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10c3d0: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c3d4: mov w1, #0x1e */
  ARC_W_W(c, 1, UINT64_C(30));
  /* 10c3d8: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098716));
  fn1_136860(c);
  /* 10c3dc: cmp w0, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(29));
  /* 10c3e0: b.le #0x10c414 */
  if (ARC_COND(c, 13)) goto L_10c414;
  /* 10c3e4: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 10c3e8: tbz w8, #0, #0x10c5fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10c5fc;
L_10c3ec:;
  /* 10c3ec: ldr x1, [x23, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10c3f0: ldr w3, [x20, #0x10] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 10c3f4: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 10c3f8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 10c3fc: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 10c400: bl #0x136920 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098756));
  fn1_136920(c);
L_10c404:;
  /* 10c404: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10c408: b.eq #0x10c5c0 */
  if (ARC_COND(c, 0)) goto L_10c5c0;
  /* 10c40c: ldur x22, [x29, #-0x38] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 10c410: b #0x10c418 */
  goto L_10c418;
L_10c414:;
  /* 10c414: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_10c418:;
  /* 10c418: ldr w9, [x20, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10c41c: ldur x23, [x29, #-0x38] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 10c420: sxtw x8, w0 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 10c424: mov w10, #0xb0 */
  ARC_W_W(c, 10, UINT64_C(176));
  /* 10c428: and w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10c42c: add x24, x23, x8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* 10c430: cmp w9, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(32));
  /* 10c434: mov x26, x24 */
  ARC_X_W(c, 26, ARC_X_R(c, 24));
  /* 10c438: b.eq #0x10c48c */
  if (ARC_COND(c, 0)) goto L_10c48c;
  /* 10c43c: cmp w9, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(16));
  /* 10c440: b.ne #0x10c488 */
  if (ARC_COND(c, 1)) goto L_10c488;
  /* 10c444: ldrb w9, [x23] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 23)));
  /* 10c448: cmp w9, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(45));
  /* 10c44c: b.eq #0x10c458 */
  if (ARC_COND(c, 0)) goto L_10c458;
  /* 10c450: cmp w9, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(43));
  /* 10c454: b.ne #0x10c460 */
  if (ARC_COND(c, 1)) goto L_10c460;
L_10c458:;
  /* 10c458: add x26, x23, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 10c45c: b #0x10c48c */
  goto L_10c48c;
L_10c460:;
  /* 10c460: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 10c464: b.lt #0x10c488 */
  if (ARC_COND(c, 11)) goto L_10c488;
  /* 10c468: cmp w9, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(48));
  /* 10c46c: b.ne #0x10c488 */
  if (ARC_COND(c, 1)) goto L_10c488;
  /* 10c470: ldrb w9, [x23, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 10c474: orr w9, w9, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(32)));
  /* 10c478: cmp w9, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(120));
  /* 10c47c: b.ne #0x10c488 */
  if (ARC_COND(c, 1)) goto L_10c488;
  /* 10c480: add x26, x23, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 23) + UINT64_C(2)));
  /* 10c484: b #0x10c48c */
  goto L_10c48c;
L_10c488:;
  /* 10c488: mov x26, x23 */
  ARC_X_W(c, 26, ARC_X_R(c, 23));
L_10c48c:;
  /* 10c48c: sub x9, x29, #0x2e */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(46)));
  /* 10c490: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 10c494: b.eq #0x10c4b0 */
  if (ARC_COND(c, 0)) goto L_10c4b0;
  /* 10c498: lsl x0, x8, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 10c49c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098912));
  fn1_1428a8(c);
  /* 10c4a0: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 10c4a4: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 10c4a8: cbnz x0, #0x10c4b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_10c4b8;
  /* 10c4ac: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098928));
  fn1_142c08(c);
L_10c4b0:;
  /* 10c4b0: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
  /* 10c4b4: add x27, sp, #0x24 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(36)));
L_10c4b8:;
  /* 10c4b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10c4bc: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10c4c0: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098948));
  fn1_143460(c);
  /* 10c4c4: add x4, sp, #0x18 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(24)));
  /* 10c4c8: add x5, sp, #0x10 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(16)));
  /* 10c4cc: add x6, sp, #8 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(8)));
  /* 10c4d0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10c4d4: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 10c4d8: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 10c4dc: mov x3, x27 */
  ARC_X_W(c, 3, ARC_X_R(c, 27));
  /* 10c4e0: bl #0x143940 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098980));
  fn1_143940(c);
  /* 10c4e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10c4e8: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1098988));
  fn1_143478(c);
  /* 10c4ec: ldp x3, x2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10c4f0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10c4f4: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10c4f8: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10c4fc: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10c500: bl #0x10cdc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099012));
  fn1_10cdc0(c);
  /* 10c504: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c508: cbz x25, #0x10c514 */
  if ((ARC_X_R(c, 25)) == 0) goto L_10c514;
  /* 10c50c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10c510: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099028));
  fn1_142800(c);
L_10c514:;
  /* 10c514: cbz x22, #0x10c520 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10c520;
  /* 10c518: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10c51c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099040));
  fn1_142800(c);
L_10c520:;
  /* 10c520: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10c524: ldp x20, x19, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10c528: ldr d8, [sp, #0x130] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(304))));
  /* 10c52c: ldp x22, x21, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10c530: ldp x24, x23, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10c534: ldp x26, x25, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10c538: ldp x28, x27, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10c53c: ldp x29, x30, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10c540: add sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(416)));
  /* 10c544: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10c548: ret  */
  return;
L_10c54c:;
  /* 10c54c: nop  */
  /* nop: no architectural effect here */
  /* 10c550: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c554: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099096));
  fn1_1424b8(c);
  /* 10c558: cbz w0, #0x10c31c */
  if ((ARC_W_R(c, 0)) == 0) goto L_10c31c;
  /* 10c55c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10c560: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10c564: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10c568: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10c56c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099120));
  fn1_1441e0(c);
  /* 10c570: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10c574: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10c578: nop  */
  /* nop: no architectural effect here */
  /* 10c57c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c580: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099140));
  fn1_1424d0(c);
  /* 10c584: b #0x10c31c */
  goto L_10c31c;
L_10c588:;
  /* 10c588: nop  */
  /* nop: no architectural effect here */
  /* 10c58c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c590: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099156));
  fn1_1424b8(c);
  /* 10c594: cbz w0, #0x10c3c0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10c3c0;
  /* 10c598: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10c59c: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10c5a0: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10c5a4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10c5a8: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099180));
  fn1_1441e0(c);
  /* 10c5ac: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10c5b0: nop  */
  /* nop: no architectural effect here */
  /* 10c5b4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c5b8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099196));
  fn1_1424d0(c);
  /* 10c5bc: b #0x10c3c0 */
  goto L_10c3c0;
L_10c5c0:;
  /* 10c5c0: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099204));
  fn1_142c08(c);
L_10c5c4:;
  /* 10c5c4: nop  */
  /* nop: no architectural effect here */
  /* 10c5c8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c5cc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099216));
  fn1_1424b8(c);
  /* 10c5d0: cbz w0, #0x10c348 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10c348;
  /* 10c5d4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10c5d8: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10c5dc: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10c5e0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10c5e4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099240));
  fn1_1441e0(c);
  /* 10c5e8: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10c5ec: nop  */
  /* nop: no architectural effect here */
  /* 10c5f0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c5f4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099256));
  fn1_1424d0(c);
  /* 10c5f8: b #0x10c348 */
  goto L_10c348;
L_10c5fc:;
  /* 10c5fc: nop  */
  /* nop: no architectural effect here */
  /* 10c600: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c604: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099272));
  fn1_1424b8(c);
  /* 10c608: cbz w0, #0x10c3ec */
  if ((ARC_W_R(c, 0)) == 0) goto L_10c3ec;
  /* 10c60c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10c610: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10c614: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10c618: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10c61c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099296));
  fn1_1441e0(c);
  /* 10c620: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10c624: nop  */
  /* nop: no architectural effect here */
  /* 10c628: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c62c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099312));
  fn1_1424d0(c);
  /* 10c630: b #0x10c3ec */
  goto L_10c3ec;
  /* 10c634: b #0x10c640 */
  goto L_10c640;
  /* 10c638: b #0x10c640 */
  goto L_10c640;
  /* 10c63c: b #0x10c640 */
  goto L_10c640;
L_10c640:;
  /* 10c640: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c644: nop  */
  /* nop: no architectural effect here */
  /* 10c648: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10c64c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099344));
  fn1_1424e8(c);
  /* 10c650: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10c654: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099352));
  fn1_9cc20(c);
  /* 10c658: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099356));
  fn1_9cc20(c);
  /* 10c65c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c660: cbz x22, #0x10c688 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10c688;
  /* 10c664: b #0x10c69c */
  goto L_10c69c;
  /* 10c668: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099372));
  fn1_9cc20(c);
  /* 10c66c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c670: b #0x10c680 */
  goto L_10c680;
  /* 10c674: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10c678: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10c67c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099392));
  fn1_143478(c);
L_10c680:;
  /* 10c680: cbnz x25, #0x10c690 */
  if ((ARC_X_R(c, 25)) != 0) goto L_10c690;
  /* 10c684: cbnz x22, #0x10c69c */
  if ((ARC_X_R(c, 22)) != 0) goto L_10c69c;
L_10c688:;
  /* 10c688: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10c68c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099408));
  fn1_9cc20(c);
L_10c690:;
  /* 10c690: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10c694: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099416));
  fn1_142800(c);
  /* 10c698: cbz x22, #0x10c688 */
  if ((ARC_X_R(c, 22)) == 0) goto L_10c688;
L_10c69c:;
  /* 10c69c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10c6a0: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099428));
  fn1_142800(c);
  /* 10c6a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10c6a8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1099436));
  fn1_9cc20(c);
}

void fn1_113bc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057344));
  /* 113bc0: bti c */
  /* bti: no architectural effect here */
  /* 113bc4: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113bc8: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113bcc: ret  */
  return;
}

void fn1_114114(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058708));
  /* 114114: bti c */
  /* bti: no architectural effect here */
  /* 114118: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 11411c: ldrb w10, [x9, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(48));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(48));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 114120: tbnz w10, #0, #0x114138 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_114138;
  /* 114124: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 114128: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 11412c: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 114130: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 114134: ret  */
  return;
L_114138:;
  /* 114138: ldp x2, x1, [x0, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 11413c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 114140: b #0xe22b8 */
  fn1_e22b8(c); return;
}

void fn1_1202ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039108332));
  /* 1202ec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1202f0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1202f4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1202f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1202fc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 120300: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120304: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 120308: ldr x8, [x8, #0xdb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3512))));
  /* 12030c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 120310: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 120314: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 120318: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* 12031c: stur q0, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 120320: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 120324: stur q0, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 120328: stur q0, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 12032c: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 120330: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 120334: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 120338: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12033c: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 120340: bl #0x143d48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180484));
  fn1_143d48(c);
  /* 120344: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 120348: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12034c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 120350: ret  */
  return;
  /* 120354: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120358: add x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* 12035c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180512));
  fn1_142d58(c);
  /* 120360: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* 120364: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180520));
  fn1_142d58(c);
  /* 120368: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 12036c: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180528));
  fn1_142d58(c);
  /* 120370: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 120374: tbz w8, #0, #0x120388 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_120388;
  /* 120378: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 12037c: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 120380: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 120384: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180552));
  fn1_142608(c);
L_120388:;
  /* 120388: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12038c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1180560));
  fn1_9cc20(c);
}

void fn1_126c04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039135236));
  /* 126c04: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126c08: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126c0c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 126c10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 126c14: and w19, w1, #0xff */
  ARC_W_W(c, 19, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* 126c18: tbnz w1, #7, #0x126c3c */
  if (((ARC_W_R(c, 1)) >> 7 & 1) != 0) goto L_126c3c;
  /* 126c1c: nop  */
  /* nop: no architectural effect here */
  /* 126c20: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126c24: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 126c28: tbz w8, #0, #0x126c50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_126c50;
L_126c2c:;
  /* 126c2c: sub w8, w19, #0x5b */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(91)));
  /* 126c30: add w9, w19, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 19) + UINT64_C(32)));
  /* 126c34: cmn w8, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(26), 0);
  /* 126c38: csel w19, w19, w9, lo */
  ARC_W_W(c, 19, (ARC_COND(c, 3) ? (ARC_W_R(c, 19)) : ARC_W_R(c, 9)));
L_126c3c:;
  /* 126c3c: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 126c40: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 126c44: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 126c48: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 126c4c: ret  */
  return;
L_126c50:;
  /* 126c50: nop  */
  /* nop: no architectural effect here */
  /* 126c54: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126c58: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207388));
  fn1_1424b8(c);
  /* 126c5c: cbz w0, #0x126c2c */
  if ((ARC_W_R(c, 0)) == 0) goto L_126c2c;
  /* 126c60: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 126c64: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 126c68: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 126c6c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 126c70: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207412));
  fn1_1441e0(c);
  /* 126c74: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 126c78: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 126c7c: nop  */
  /* nop: no architectural effect here */
  /* 126c80: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126c84: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207432));
  fn1_1424d0(c);
  /* 126c88: b #0x126c2c */
  goto L_126c2c;
  /* 126c8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 126c90: nop  */
  /* nop: no architectural effect here */
  /* 126c94: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126c98: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207452));
  fn1_1424e8(c);
  /* 126c9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 126ca0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1207460));
  fn1_9cc20(c);
}

void fn1_12920c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144972));
  /* 12920c: bti c */
  /* bti: no architectural effect here */
  /* 129210: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 129214: ret  */
  return;
}

void fn1_12abf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151608));
  /* 12abf8: bti c */
  /* bti: no architectural effect here */
  /* 12abfc: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12ac00: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12ac04: ret  */
  return;
}

void fn1_12bf3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039156540));
  /* 12bf3c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12bf40: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 12bf44: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bf48: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12bf4c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12bf50: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12bf54: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 12bf58: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 12bf5c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 12bf60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12bf64: cmp w8, #0x43 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(67));
  /* 12bf68: b.ne #0x12bf74 */
  if (ARC_COND(c, 1)) goto L_12bf74;
  /* 12bf6c: ldrb w8, [x21, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(1))));
  /* 12bf70: cbz w8, #0x12c104 */
  if ((ARC_W_R(c, 8)) == 0) goto L_12c104;
L_12bf74:;
  /* 12bf74: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 12bf78: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 12bf7c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 12bf80: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228676));
  fn1_1441e0(c);
  /* 12bf84: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* 12bf88: cbz x0, #0x12c158 */
  if ((ARC_X_R(c, 0)) == 0) goto L_12c158;
  /* 12bf8c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12bf90: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228692));
  fn1_1443c0(c);
  /* 12bf94: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12bf98: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* 12bf9c: bl #0x144498 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228704));
  fn1_144498(c);
  /* 12bfa0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12bfa4: cbz x22, #0x12bfb0 */
  if ((ARC_X_R(c, 22)) == 0) goto L_12bfb0;
  /* 12bfa8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12bfac: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228720));
  fn1_1443c0(c);
L_12bfb0:;
  /* 12bfb0: ldr x22, [x21] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 21)));
  /* 12bfb4: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 12bfb8: cbz w8, #0x12c050 */
  if ((ARC_W_R(c, 8)) == 0) goto L_12c050;
  /* 12bfbc: ldrb w9, [x22, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 22) + INT64_C(1))));
  /* 12bfc0: cbz w9, #0x12c04c */
  if ((ARC_W_R(c, 9)) == 0) goto L_12c04c;
  /* 12bfc4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12bfc8: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* 12bfcc: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228752));
  fn1_142860(c);
  /* 12bfd0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 12bfd4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12bfd8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228764));
  fn1_1443c0(c);
  /* 12bfdc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12bfe0: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* 12bfe4: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 12bfe8: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 12bfec: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 12bff0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 12bff4: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228792));
  fn1_144438(c);
  /* 12bff8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12bffc: cbz x23, #0x12c008 */
  if ((ARC_X_R(c, 23)) == 0) goto L_12c008;
  /* 12c000: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12c004: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228808));
  fn1_1443c0(c);
L_12c008:;
  /* 12c008: cmn x22, #2 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(2), 0);
  /* 12c00c: b.hs #0x12c050 */
  if (ARC_COND(c, 2)) goto L_12c050;
  /* 12c010: ldur w22, [x29, #-4] */
  ARC_W_W(c, 22, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 12c014: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c018: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228828));
  fn1_1443c0(c);
  /* 12c01c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 12c020: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* 12c024: mov w0, w22 */
  ARC_W_W(c, 0, ARC_W_R(c, 22));
  /* 12c028: bl #0x1443d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228844));
  fn1_1443d8(c);
  /* 12c02c: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* 12c030: cbz x24, #0x12c03c */
  if ((ARC_X_R(c, 24)) == 0) goto L_12c03c;
  /* 12c034: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 12c038: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228860));
  fn1_1443c0(c);
L_12c03c:;
  /* 12c03c: cmn w23, #1 */
  (void)arc_add32(c, ARC_W_R(c, 23), UINT64_C(1), 0);
  /* 12c040: b.eq #0x12c120 */
  if (ARC_COND(c, 0)) goto L_12c120;
L_12c044:;
  /* 12c044: strb w23, [x19, #0x10] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 23));
  /* 12c048: b #0x12c050 */
  goto L_12c050;
L_12c04c:;
  /* 12c04c: strb w8, [x19, #0x10] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
L_12c050:;
  /* 12c050: ldr x22, [x21, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 12c054: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 12c058: cbz w8, #0x12c0f0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_12c0f0;
  /* 12c05c: ldrb w9, [x22, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 22) + INT64_C(1))));
  /* 12c060: cbz w9, #0x12c0ec */
  if ((ARC_W_R(c, 9)) == 0) goto L_12c0ec;
  /* 12c064: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12c068: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* 12c06c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228912));
  fn1_142860(c);
  /* 12c070: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 12c074: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c078: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228924));
  fn1_1443c0(c);
  /* 12c07c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12c080: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* 12c084: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 12c088: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 12c08c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 12c090: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 12c094: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228952));
  fn1_144438(c);
  /* 12c098: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12c09c: cbz x23, #0x12c0a8 */
  if ((ARC_X_R(c, 23)) == 0) goto L_12c0a8;
  /* 12c0a0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 12c0a4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228968));
  fn1_1443c0(c);
L_12c0a8:;
  /* 12c0a8: cmn x22, #2 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(2), 0);
  /* 12c0ac: b.hs #0x12c0f0 */
  if (ARC_COND(c, 2)) goto L_12c0f0;
  /* 12c0b0: ldur w22, [x29, #-4] */
  ARC_W_W(c, 22, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 12c0b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c0b8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1228988));
  fn1_1443c0(c);
  /* 12c0bc: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 12c0c0: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* 12c0c4: mov w0, w22 */
  ARC_W_W(c, 0, ARC_W_R(c, 22));
  /* 12c0c8: bl #0x1443d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229004));
  fn1_1443d8(c);
  /* 12c0cc: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* 12c0d0: cbz x24, #0x12c0dc */
  if ((ARC_X_R(c, 24)) == 0) goto L_12c0dc;
  /* 12c0d4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 12c0d8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229020));
  fn1_1443c0(c);
L_12c0dc:;
  /* 12c0dc: cmn w23, #1 */
  (void)arc_add32(c, ARC_W_R(c, 23), UINT64_C(1), 0);
  /* 12c0e0: b.eq #0x12c13c */
  if (ARC_COND(c, 0)) goto L_12c13c;
L_12c0e4:;
  /* 12c0e4: strb w23, [x19, #0x11] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(17)), ARC_W_R(c, 23));
  /* 12c0e8: b #0x12c0f0 */
  goto L_12c0f0;
L_12c0ec:;
  /* 12c0ec: strb w8, [x19, #0x11] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(17)), ARC_W_R(c, 8));
L_12c0f0:;
  /* 12c0f0: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 12c0f4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 12c0f8: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229052));
  fn1_e167c(c);
  /* 12c0fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c100: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229060));
  fn1_144210(c);
L_12c104:;
  /* 12c104: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12c108: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12c10c: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 12c110: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c114: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 12c118: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12c11c: ret  */
  return;
L_12c120:;
  /* 12c120: mov w8, #0x202f */
  ARC_W_W(c, 8, UINT64_C(8239));
  /* 12c124: mov w23, #0x20 */
  ARC_W_W(c, 23, UINT64_C(32));
  /* 12c128: cmp w22, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 22), ARC_W_R(c, 8));
  /* 12c12c: b.eq #0x12c044 */
  if (ARC_COND(c, 0)) goto L_12c044;
  /* 12c130: cmp w22, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(160));
  /* 12c134: b.eq #0x12c044 */
  if (ARC_COND(c, 0)) goto L_12c044;
  /* 12c138: b #0x12c050 */
  goto L_12c050;
L_12c13c:;
  /* 12c13c: mov w8, #0x202f */
  ARC_W_W(c, 8, UINT64_C(8239));
  /* 12c140: mov w23, #0x20 */
  ARC_W_W(c, 23, UINT64_C(32));
  /* 12c144: cmp w22, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 22), ARC_W_R(c, 8));
  /* 12c148: b.eq #0x12c0e4 */
  if (ARC_COND(c, 0)) goto L_12c0e4;
  /* 12c14c: cmp w22, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(160));
  /* 12c150: b.eq #0x12c0e4 */
  if (ARC_COND(c, 0)) goto L_12c0e4;
  /* 12c154: b #0x12c0f0 */
  goto L_12c0f0;
L_12c158:;
  /* 12c158: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 12c15c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 12c160: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229156));
  fn1_11dda8(c);
  /* 12c164: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 12c168: add x0, x0, #0x591 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1425)));
  /* 12c16c: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 12c170: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 12c174: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* 12c178: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229180));
  fn1_125878(c);
  /* 12c17c: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 12c180: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 12c184: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12c188: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 12c18c: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229200));
  fn1_142c98(c);
  /* 12c190: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229204));
  fn1_a1454(c);
  /* 12c194: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229208));
  fn1_a1454(c);
  /* 12c198: b #0x12c1fc */
  goto L_12c1fc;
  /* 12c19c: b #0x12c1fc */
  goto L_12c1fc;
  /* 12c1a0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229220));
  fn1_a1454(c);
  /* 12c1a4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229224));
  fn1_a1454(c);
  /* 12c1a8: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 12c1ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c1b0: tbz w8, #0, #0x12c1cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12c1cc;
  /* 12c1b4: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 12c1b8: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 12c1bc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12c1c0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229252));
  fn1_142608(c);
  /* 12c1c4: b #0x12c1cc */
  goto L_12c1cc;
  /* 12c1c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_12c1cc:;
  /* 12c1cc: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 12c1d0: tbz w8, #0, #0x12c210 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12c210;
  /* 12c1d4: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 12c1d8: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12c1dc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12c1e0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229284));
  fn1_142608(c);
  /* 12c1e4: b #0x12c210 */
  goto L_12c210;
  /* 12c1e8: b #0x12c1fc */
  goto L_12c1fc;
  /* 12c1ec: b #0x12c1fc */
  goto L_12c1fc;
  /* 12c1f0: b #0x12c20c */
  goto L_12c20c;
  /* 12c1f4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229304));
  fn1_a1454(c);
  /* 12c1f8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229308));
  fn1_a1454(c);
L_12c1fc:;
  /* 12c1fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c200: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 12c204: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229320));
  fn1_135428(c);
  /* 12c208: b #0x12c210 */
  goto L_12c210;
L_12c20c:;
  /* 12c20c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_12c210:;
  /* 12c210: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 12c214: bl #0x12c2c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229336));
  fn1_12c2c0(c);
  /* 12c218: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c21c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229344));
  fn1_9cc20(c);
}

void fn1_1347e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191520));
  /* 1347e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1347e4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1347e8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1347ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1347f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1347f4: bl #0x144048 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263608));
  fn1_144048(c);
  /* 1347f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1347fc: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 134800: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134804: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134808: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13480c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134fa8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193512));
  /* 134fa8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134fac: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134fb0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134fb4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134fb8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 134fbc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134fc0: ldr x8, [x8, #0xdc0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3520))));
  /* 134fc4: ldrb w9, [x0, #0x60] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* 134fc8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 134fcc: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 134fd0: tbnz w9, #0, #0x134ffc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_134ffc;
  /* 134fd4: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134fd8: tbnz w8, #0, #0x135018 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_135018;
L_134fdc:;
  /* 134fdc: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134fe0: tbnz w8, #0, #0x135034 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_135034;
L_134fe4:;
  /* 134fe4: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134fe8: tbnz w8, #0, #0x135050 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_135050;
L_134fec:;
  /* 134fec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134ff0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134ff4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134ff8: ret  */
  return;
L_134ffc:;
  /* 134ffc: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 135000: ldr x0, [x19, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* 135004: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 135008: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 13500c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265680));
  fn1_142608(c);
  /* 135010: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 135014: tbz w8, #0, #0x134fdc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134fdc;
L_135018:;
  /* 135018: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* 13501c: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 135020: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 135024: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 135028: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265708));
  fn1_142608(c);
  /* 13502c: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 135030: tbz w8, #0, #0x134fe4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134fe4;
L_135034:;
  /* 135034: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 135038: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* 13503c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 135040: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 135044: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265736));
  fn1_142608(c);
  /* 135048: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 13504c: tbz w8, #0, #0x134fec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134fec;
L_135050:;
  /* 135050: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 135054: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 135058: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13505c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 135060: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135064: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135068: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137d10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039205136));
  /* 137d10: bti c */
  /* bti: no architectural effect here */
  /* 137d14: ldr w8, [x0, #0x40] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(64))));
  /* 137d18: tbz w8, #2, #0x137d24 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_137d24;
  /* 137d1c: orr w8, w8, #8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(8)));
  /* 137d20: str w8, [x0, #0x40] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(64)), ARC_W_R(c, 8));
L_137d24:;
  /* 137d24: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 137d28: ret  */
  return;
}

void fn1_13b2b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039218864));
  /* 13b2b0: bti c */
  /* bti: no architectural effect here */
  /* 13b2b4: mov w1, #0x50 */
  ARC_W_W(c, 1, UINT64_C(80));
  /* 13b2b8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1423e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247840));
  /* 1423e0: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1423e4: ldr x17, [x16, #0xe80] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3712))));
  /* 1423e8: add x16, x16, #0xe80 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3712)));
  /* 1423ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1423f0: nop  */
  /* nop: no architectural effect here */
  /* 1423f4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1429e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249376));
  /* 1429e0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1429e4: ldr x17, [x16, #0x80] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(128))));
  /* 1429e8: add x16, x16, #0x80 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(128)));
  /* 1429ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1429f0: nop  */
  /* nop: no architectural effect here */
  /* 1429f4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142fe0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250912));
  /* 142fe0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142fe4: ldr x17, [x16, #0x280] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(640))));
  /* 142fe8: add x16, x16, #0x280 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(640)));
  /* 142fec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142ff0: nop  */
  /* nop: no architectural effect here */
  /* 142ff4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1435e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252448));
  /* 1435e0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1435e4: ldr x17, [x16, #0x480] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1152))));
  /* 1435e8: add x16, x16, #0x480 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1152)));
  /* 1435ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1435f0: nop  */
  /* nop: no architectural effect here */
  /* 1435f4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143be0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253984));
  /* 143be0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143be4: ldr x17, [x16, #0x680] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1664))));
  /* 143be8: add x16, x16, #0x680 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1664)));
  /* 143bec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143bf0: nop  */
  /* nop: no architectural effect here */
  /* 143bf4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1441e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255520));
  /* 1441e0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1441e4: ldr x17, [x16, #0x880] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2176))));
  /* 1441e8: add x16, x16, #0x880 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2176)));
  /* 1441ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1441f0: nop  */
  /* nop: no architectural effect here */
  /* 1441f4: nop  */
  /* nop: no architectural effect here */
}

void fn1_1447e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257056));
  /* 1447e0: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1447e4: ldr x17, [x16, #0xa80] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2688))));
  /* 1447e8: add x16, x16, #0xa80 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2688)));
  /* 1447ec: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1447f0: nop  */
  /* nop: no architectural effect here */
  /* 1447f4: nop  */
  /* nop: no architectural effect here */
}

