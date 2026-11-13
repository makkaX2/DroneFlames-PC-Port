#include "lifted.h"

void fn1_9d978(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038573432));
  /* 9d978: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9d97c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d980: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9d984: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 9d988: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* 9d98c: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 9d990: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645524));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d994: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 9d998: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d99c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9d9a0: ret  */
  return;
}

void fn1_a1f64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591332));
  /* a1f64: bti c */
  /* bti: no architectural effect here */
  /* a1f68: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* a1f6c: add x0, x0, #0xaeb */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2795)));
  /* a1f70: ret  */
  return;
}

void fn1_a3b80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038598528));
  /* a3b80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a3b84: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a3b88: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a3b8c: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a3b90: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a3b94: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a3b98: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a3b9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a3ba0: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* a3ba4: mov w23, w5 */
  ARC_W_W(c, 23, ARC_W_R(c, 5));
  /* a3ba8: mov w20, w4 */
  ARC_W_W(c, 20, ARC_W_R(c, 4));
  /* a3bac: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* a3bb0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a3bb4: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* a3bb8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* a3bbc: tbz w5, #0, #0xa3c10 */
  if (((ARC_W_R(c, 5)) >> 0 & 1) == 0) goto L_a3c10;
  /* a3bc0: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* a3bc4: b.eq #0xa3bd8 */
  if (ARC_COND(c, 0)) goto L_a3bd8;
  /* a3bc8: ldr x0, [x24, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* a3bcc: ldr x1, [x8, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3bd0: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(670676));
  fn1_142848(c);
  /* a3bd4: cbnz w0, #0xa3c20 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a3c20;
L_a3bd8:;
  /* a3bd8: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a3bdc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3be0: strb w8, [x19, #0x4d] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(77)), ARC_W_R(c, 8));
  /* a3be4: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* a3be8: b.ne #0xa3d8c */
  if (ARC_COND(c, 1)) goto L_a3d8c;
  /* a3bec: ldr x9, [x19, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a3bf0: strb w8, [x19, #0x4c] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(76)), ARC_W_R(c, 8));
  /* a3bf4: cbz x9, #0xa3d44 */
  if ((ARC_X_R(c, 9)) == 0) goto L_a3d44;
  /* a3bf8: cmp x9, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 21));
  /* a3bfc: b.eq #0xa3d5c */
  if (ARC_COND(c, 0)) goto L_a3d5c;
  /* a3c00: ldr w8, [x19, #0x3c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(60))));
  /* a3c04: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* a3c08: str w8, [x19, #0x3c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(60)), ARC_W_R(c, 8));
  /* a3c0c: b #0xa3d84 */
  goto L_a3d84;
L_a3c10:;
  /* a3c10: ldr x9, [x24, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* a3c14: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3c18: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a3c1c: b.eq #0xa3bd8 */
  if (ARC_COND(c, 0)) goto L_a3bd8;
L_a3c20:;
  /* a3c20: ldrb w26, [x19, #0x4c] */
  ARC_W_W(c, 26, arc_ld8((ARC_X_R(c, 19) + INT64_C(76))));
  /* a3c24: ldrb w28, [x19, #0x4d] */
  ARC_W_W(c, 28, arc_ld8((ARC_X_R(c, 19) + INT64_C(77))));
  /* a3c28: ldr w25, [x24, #0x14] */
  ARC_W_W(c, 25, arc_ld32((ARC_X_R(c, 24) + INT64_C(20))));
  /* a3c2c: strh wzr, [x19, #0x4c] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(76)), ARC_W_R(c, 31));
  /* a3c30: ldr x9, [x24, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 24) + INT64_C(32))));
  /* a3c34: asr x8, x9, #8 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63))));
  /* a3c38: tbz w9, #0, #0xa3c44 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_a3c44;
  /* a3c3c: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* a3c40: ldr x8, [x10, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
L_a3c44:;
  /* a3c44: ldr x0, [x24, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + INT64_C(24))));
  /* a3c48: tst x9, #2 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2)));
  /* a3c4c: mov w11, #2 */
  ARC_W_W(c, 11, UINT64_C(2));
  /* a3c50: csel w4, w11, w20, eq */
  ARC_W_W(c, 4, (ARC_COND(c, 0) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 20)));
  /* a3c54: add x3, x22, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a3c58: and w5, w23, #1 */
  ARC_W_W(c, 5, (ARC_W_R(c, 23) & UINT64_C(1)));
  /* a3c5c: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* a3c60: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a3c64: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a3c68: ldr x9, [x10, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(40))));
  /* a3c6c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(670832));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* a3c70: ldrb w8, [x19, #0x4c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(76))));
  /* a3c74: ldrb w9, [x19, #0x4d] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(77))));
  /* a3c78: cmp w25, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(2));
  /* a3c7c: orr w27, w8, w26 */
  ARC_W_W(c, 27, (ARC_W_R(c, 8) | ARC_W_R(c, 26)));
  /* a3c80: orr w26, w9, w28 */
  ARC_W_W(c, 26, (ARC_W_R(c, 9) | ARC_W_R(c, 28)));
  /* a3c84: b.lo #0xa3d30 */
  if (ARC_COND(c, 3)) goto L_a3d30;
  /* a3c88: add x10, x24, x25, lsl #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 25)) << 4)));
  /* a3c8c: add x25, x24, #0x28 */
  ARC_X_W(c, 25, (ARC_X_R(c, 24) + UINT64_C(40)));
  /* a3c90: add x28, x10, #0x18 */
  ARC_X_W(c, 28, (ARC_X_R(c, 10) + UINT64_C(24)));
  /* a3c94: b #0xa3ce4 */
  goto L_a3ce4;
L_a3c98:;
  /* a3c98: ldr x0, [x25], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(16));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* a3c9c: tst x9, #2 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(2)));
  /* a3ca0: add x3, x22, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* a3ca4: and w5, w23, #1 */
  ARC_W_W(c, 5, (ARC_W_R(c, 23) & UINT64_C(1)));
  /* a3ca8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a3cac: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* a3cb0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a3cb4: ldr x9, [x10, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(40))));
  /* a3cb8: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* a3cbc: csel w4, w10, w20, eq */
  ARC_W_W(c, 4, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 20)));
  /* a3cc0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(670916));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* a3cc4: ldrb w8, [x19, #0x4c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(76))));
  /* a3cc8: ldrb w9, [x19, #0x4d] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(77))));
  /* a3ccc: cmp x25, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 28));
  /* a3cd0: orr w10, w8, w27 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) | ARC_W_R(c, 27)));
  /* a3cd4: orr w11, w9, w26 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) | ARC_W_R(c, 26)));
  /* a3cd8: and w27, w10, #1 */
  ARC_W_W(c, 27, (ARC_W_R(c, 10) & UINT64_C(1)));
  /* a3cdc: and w26, w11, #1 */
  ARC_W_W(c, 26, (ARC_W_R(c, 11) & UINT64_C(1)));
  /* a3ce0: b.hs #0xa3d30 */
  if (ARC_COND(c, 2)) goto L_a3d30;
L_a3ce4:;
  /* a3ce4: ldrb w10, [x19, #0x4e] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(78))));
  /* a3ce8: tbnz w10, #0, #0xa3d30 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_a3d30;
  /* a3cec: tbz w8, #0, #0xa3d08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a3d08;
  /* a3cf0: ldr w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(48))));
  /* a3cf4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3cf8: b.eq #0xa3d30 */
  if (ARC_COND(c, 0)) goto L_a3d30;
  /* a3cfc: ldrb w8, [x24, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 24) + INT64_C(16))));
  /* a3d00: tbnz w8, #1, #0xa3d14 */
  if (((ARC_W_R(c, 8)) >> 1 & 1) != 0) goto L_a3d14;
  /* a3d04: b #0xa3d30 */
  goto L_a3d30;
L_a3d08:;
  /* a3d08: tbz w9, #0, #0xa3d14 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_a3d14;
  /* a3d0c: ldrb w8, [x24, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 24) + INT64_C(16))));
  /* a3d10: tbz w8, #0, #0xa3d30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_a3d30;
L_a3d14:;
  /* a3d14: strh wzr, [x19, #0x4c] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(76)), ARC_W_R(c, 31));
  /* a3d18: ldr x9, [x25, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* a3d1c: asr x8, x9, #8 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63))));
  /* a3d20: tbz w9, #0, #0xa3c98 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_a3c98;
  /* a3d24: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* a3d28: ldr x8, [x10, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
  /* a3d2c: b #0xa3c98 */
  goto L_a3c98;
L_a3d30:;
  /* a3d30: and w8, w27, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) & UINT64_C(1)));
  /* a3d34: and w9, w26, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 26) & UINT64_C(1)));
  /* a3d38: strb w8, [x19, #0x4c] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(76)), ARC_W_R(c, 8));
  /* a3d3c: strb w9, [x19, #0x4d] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(77)), ARC_W_R(c, 9));
  /* a3d40: b #0xa3d8c */
  goto L_a3d8c;
L_a3d44:;
  /* a3d44: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* a3d48: str x21, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 21));
  /* a3d4c: str w20, [x19, #0x30] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 20));
  /* a3d50: str w8, [x19, #0x3c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(60)), ARC_W_R(c, 8));
  /* a3d54: b.eq #0xa3d78 */
  if (ARC_COND(c, 0)) goto L_a3d78;
  /* a3d58: b #0xa3d8c */
  goto L_a3d8c;
L_a3d5c:;
  /* a3d5c: ldr w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(48))));
  /* a3d60: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a3d64: b.ne #0xa3d70 */
  if (ARC_COND(c, 1)) goto L_a3d70;
  /* a3d68: mov w8, w20 */
  ARC_W_W(c, 8, ARC_W_R(c, 20));
  /* a3d6c: str w20, [x19, #0x30] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 20));
L_a3d70:;
  /* a3d70: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3d74: b.ne #0xa3d8c */
  if (ARC_COND(c, 1)) goto L_a3d8c;
L_a3d78:;
  /* a3d78: ldr w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(72))));
  /* a3d7c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3d80: b.ne #0xa3d8c */
  if (ARC_COND(c, 1)) goto L_a3d8c;
L_a3d84:;
  /* a3d84: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3d88: strb w8, [x19, #0x4e] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(78)), ARC_W_R(c, 8));
L_a3d8c:;
  /* a3d8c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a3d90: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a3d94: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a3d98: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a3d9c: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a3da0: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a3da4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a3da8: ret  */
  return;
}

void fn1_aa640(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038625856));
  /* aa640: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa644: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa648: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa64c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa650: ldrb w20, [x0, #0x20] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* aa654: tbnz w20, #0, #0xaa678 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_aa678;
  /* aa658: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* aa65c: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* aa660: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* aa664: strb w8, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* aa668: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* aa66c: ldr x8, [x9, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* aa670: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697972));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* aa674: strb w20, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
L_aa678:;
  /* aa678: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa67c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa680: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa684: ret  */
  return;
  /* aa688: strb w20, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* aa68c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(698000));
  fn1_9cc20(c);
}

void fn1_b1bd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038655956));
  /* b1bd4: bti c */
  /* bti: no architectural effect here */
  /* b1bd8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* b1bdc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b6070(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038673520));
  /* b6070: bti c */
  /* bti: no architectural effect here */
  /* b6074: mov w1, #0x48 */
  ARC_W_W(c, 1, UINT64_C(72));
  /* b6078: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b84f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682864));
  /* b84f0: bti c */
  /* bti: no architectural effect here */
  /* b84f4: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* b84f8: b #0xafa48 */
  fn1_afa48(c); return;
}

void fn1_bbb64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038696804));
  /* bbb64: bti c */
  /* bti: no architectural effect here */
  /* bbb68: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* bbb6c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_be0c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038706376));
  /* be0c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* be0cc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be0d0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* be0d4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* be0d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* be0dc: cbz x0, #0xbe208 */
  if ((ARC_X_R(c, 0)) == 0) goto L_be208;
  /* be0e0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* be0e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* be0e8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* be0ec: mov w2, #0x80 */
  ARC_W_W(c, 2, UINT64_C(128));
  /* be0f0: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* be0f4: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778488));
  fn1_142818(c);
  /* be0f8: ldr x19, [x29, #0x18] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* be0fc: cbnz x19, #0xbe110 */
  if ((ARC_X_R(c, 19)) != 0) goto L_be110;
  /* be100: mov w0, #0x80 */
  ARC_W_W(c, 0, UINT64_C(128));
  /* be104: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778504));
  fn1_a24dc(c);
  /* be108: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* be10c: cbz x0, #0xbe21c */
  if ((ARC_X_R(c, 0)) == 0) goto L_be21c;
L_be110:;
  /* be110: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* be114: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* be118: sub x1, x20, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) - UINT64_C(120)));
  /* be11c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* be120: str q0, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)) + 8, (c)->q[0].u64[1]);
  /* be124: stp q0, q0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* be128: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* be12c: stp q0, q0, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* be130: str q0, [x21, #0x60]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(96)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(96));
  /* be134: str x20, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 20));
  /* be138: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778556));
  fn1_bd950(c);
  /* be13c: ldur x8, [x20, #-0x70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-112))));
  /* be140: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* be144: nop  */
  /* nop: no architectural effect here */
  /* be148: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* be14c: ldr x9, [x9, #0x8b8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2232))));
  /* be150: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* be154: ldar x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* be158: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* be15c: ldr x9, [x9, #0x8b0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2224))));
  /* be160: ldar x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* be164: mov x9, #0x2b00 */
  ARC_X_W(c, 9, UINT64_C(11008));
  /* be168: movk x9, #0x432b, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1126891520)));
  /* be16c: movk x9, #0x4e47, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(86066849644544)));
  /* be170: stp x10, x8, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* be174: movk x9, #0x434c, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(4849250898771181568)));
  /* be178: orr x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* be17c: str x9, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* be180: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778628));
  fn1_144ac8(c);
  /* be184: ldr w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* be188: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* be18c: nop  */
  /* nop: no architectural effect here */
  /* be190: adr x8, #0xbe220 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(778784)));
  /* be194: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* be198: str x8, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 8));
  /* be19c: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* be1a0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* be1a4: bl #0x9c8d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778664));
  fn1_9c8d0(c);
  /* be1a8: mov x9, #0x2b2b */
  ARC_X_W(c, 9, UINT64_C(11051));
  /* be1ac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* be1b0: movk x9, #0x4743, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* be1b4: movk x9, #0x4c4e, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* be1b8: movk x9, #0x43, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* be1bc: cmp x9, x8, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)(ARC_X_R(c, 8)) >> 8));
  /* be1c0: b.ne #0xbe1fc */
  if (ARC_COND(c, 1)) goto L_be1fc;
  /* be1c4: ldr w9, [x19, #0x38] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(56))));
  /* be1c8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* be1cc: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* be1d0: cneg w9, w9, mi */
  ARC_W_W(c, 9, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 9))) : (ARC_W_R(c, 9))));
  /* be1d4: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* be1d8: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* be1dc: str w9, [x19, #0x38] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(56)), ARC_W_R(c, 9));
  /* be1e0: b.eq #0xbe1ec */
  if (ARC_COND(c, 0)) goto L_be1ec;
  /* be1e4: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* be1e8: str x19, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 19));
L_be1ec:;
  /* be1ec: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* be1f0: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* be1f4: str w8, [x20, #8] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 8));
  /* be1f8: b #0xbe208 */
  goto L_be208;
L_be1fc:;
  /* be1fc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* be200: cbnz x8, #0xbe21c */
  if ((ARC_X_R(c, 8)) != 0) goto L_be21c;
  /* be204: str x19, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 19));
L_be208:;
  /* be208: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* be20c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* be210: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be214: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* be218: ret  */
  return;
L_be21c:;
  /* be21c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(778784));
  fn1_142488(c);
}

void fn1_d2a78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038790776));
  /* d2a78: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d2a7c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d2a80: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* d2a84: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d2a88: ldrb w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* d2a8c: tbnz w8, #0, #0xd2ac0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_d2ac0;
  /* d2a90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d2a94: nop  */
  /* nop: no architectural effect here */
  /* d2a98: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* d2a9c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862880));
  fn1_142518(c);
  /* d2aa0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* d2aa4: str xzr, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 31));
  /* d2aa8: nop  */
  /* nop: no architectural effect here */
  /* d2aac: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* d2ab0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862900));
  fn1_142560(c);
  /* d2ab4: nop  */
  /* nop: no architectural effect here */
  /* d2ab8: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* d2abc: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862912));
  fn1_142578(c);
L_d2ac0:;
  /* d2ac0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d2ac4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d2ac8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d2acc: ret  */
  return;
  /* d2ad0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(862932));
  fn1_a1454(c);
}

void fn1_d8418(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038813720));
  /* d8418: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d841c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* d8420: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d8424: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d8428: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* d842c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d8430: ldp x10, x9, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d8434: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d8438: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d843c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8440: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8444: csinc x9, x9, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* d8448: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d844c: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d8450: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d8454: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d8458: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* d845c: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885856));
  fn1_da18c(c);
  /* d8460: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d8464: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d8468: b.eq #0xd84d0 */
  if (ARC_COND(c, 0)) goto L_d84d0;
  /* d846c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d8470: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d8474: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d8478: b.ne #0xd84f4 */
  if (ARC_COND(c, 1)) goto L_d84f4;
  /* d847c: ldp x0, x1, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* d8480: adds x8, x0, x1 */
  ARC_X_W(c, 8, arc_add64(c, ARC_X_R(c, 0), ARC_X_R(c, 1), 0));
  /* d8484: b.eq #0xd84f4 */
  if (ARC_COND(c, 0)) goto L_d84f4;
  /* d8488: ldp x9, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d848c: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* d8490: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d8494: b.eq #0xd84f4 */
  if (ARC_COND(c, 0)) goto L_d84f4;
  /* d8498: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d849c: cmp w8, #0x2f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(47));
  /* d84a0: b.ne #0xd84f4 */
  if (ARC_COND(c, 1)) goto L_d84f4;
  /* d84a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d84a8: add x20, x19, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* d84ac: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885936));
  fn1_da18c(c);
  /* d84b0: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d84b4: ldp x10, x11, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* d84b8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d84bc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d84c0: csel x0, x20, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 9)));
  /* d84c4: add x8, x10, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* d84c8: sub x1, x8, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* d84cc: b #0xd84f4 */
  goto L_d84f4;
L_d84d0:;
  /* d84d0: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* d84d4: nop  */
  /* nop: no architectural effect here */
  /* d84d8: adr x9, #0x5004e */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327758)));
  /* d84dc: nop  */
  /* nop: no architectural effect here */
  /* d84e0: adr x10, #0x501db */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(328155)));
  /* d84e4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* d84e8: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d84ec: cmp w8, #0x5c */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(92));
  /* d84f0: csel x0, x10, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
L_d84f4:;
  /* d84f4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d84f8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d84fc: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* d8500: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d8504: ret  */
  return;
}

void fn1_dbd88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038828424));
  /* dbd88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dbd8c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dbd90: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dbd94: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dbd98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dbd9c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* dbda0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* dbda4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* dbda8: cbz x8, #0xdbddc */
  if ((ARC_X_R(c, 8)) == 0) goto L_dbddc;
  /* dbdac: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* dbdb0: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* dbdb4: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* dbdb8: b.hi #0xdbddc */
  if (ARC_COND(c, 8)) goto L_dbddc;
  /* dbdbc: sub x10, x8, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* dbdc0: neg x11, x2 */
  ARC_X_W(c, 11, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 2))));
  /* dbdc4: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* dbdc8: and x0, x10, x11 */
  ARC_X_W(c, 0, (ARC_X_R(c, 10) & ARC_X_R(c, 11)));
  /* dbdcc: cmp x8, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0));
  /* dbdd0: b.hi #0xdbddc */
  if (ARC_COND(c, 8)) goto L_dbddc;
  /* dbdd4: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* dbdd8: cbnz x0, #0xdbed8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_dbed8;
L_dbddc:;
  /* dbddc: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* dbde0: cbz x8, #0xdbe08 */
  if ((ARC_X_R(c, 8)) == 0) goto L_dbe08;
  /* dbde4: ldp x9, x10, [x8, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* dbde8: sub x11, x10, x9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) - ARC_X_R(c, 9)));
  /* dbdec: cmp x19, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 11));
  /* dbdf0: b.ls #0xdbeb0 */
  if (ARC_COND(c, 9)) goto L_dbeb0;
L_dbdf4:;
  /* dbdf4: cmp x2, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(8));
  /* dbdf8: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* dbdfc: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* dbe00: csel x21, x2, x10, hi */
  ARC_X_W(c, 21, (ARC_COND(c, 8) ? (ARC_X_R(c, 2)) : ARC_X_R(c, 10)));
  /* dbe04: b #0xdbe28 */
  goto L_dbe28;
L_dbe08:;
  /* dbe08: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* dbe0c: ldr x9, [x20, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* dbe10: cmp x2, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(8));
  /* dbe14: sub x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* dbe18: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* dbe1c: add x8, x8, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(7)));
  /* dbe20: csel x21, x2, x9, hi */
  ARC_X_W(c, 21, (ARC_COND(c, 8) ? (ARC_X_R(c, 2)) : ARC_X_R(c, 9)));
  /* dbe24: and x8, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
L_dbe28:;
  /* dbe28: add x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* dbe2c: ldr x0, [x20, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* dbe30: add x10, x19, #7 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(7)));
  /* dbe34: lsl x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(1)) & 63)));
  /* dbe38: and x10, x10, #0xfffffffffffffff8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(18446744073709551608)));
  /* dbe3c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* dbe40: ldr x11, [x0] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 0)));
  /* dbe44: add x10, x10, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(32)));
  /* dbe48: sub x9, x9, #0x39 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(57)));
  /* dbe4c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* dbe50: and x9, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* dbe54: ldr x8, [x11, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 11) + INT64_C(16))));
  /* dbe58: add x9, x9, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* dbe5c: csel x22, x10, x9, hi */
  ARC_X_W(c, 22, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* dbe60: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* dbe64: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(900712));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* dbe68: ldr x10, [x20, #0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* dbe6c: add x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* dbe70: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* dbe74: stur x0, [x8, #-0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(-24)), ARC_X_R(c, 0));
  /* dbe78: str x10, [x9, #-0x20]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-32));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-32));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* dbe7c: sub x10, x22, #0x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 22) - UINT64_C(32)));
  /* dbe80: cmp x19, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* dbe84: stp x9, x21, [x8, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dbe88: str x9, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 9));
  /* dbe8c: b.hi #0xdbea8 */
  if (ARC_COND(c, 8)) goto L_dbea8;
  /* dbe90: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* dbe94: neg x12, x21 */
  ARC_X_W(c, 12, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 21))));
  /* dbe98: sub x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* dbe9c: and x0, x11, x12 */
  ARC_X_W(c, 0, (ARC_X_R(c, 11) & ARC_X_R(c, 12)));
  /* dbea0: cmp x9, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* dbea4: b.ls #0xdbed4 */
  if (ARC_COND(c, 9)) goto L_dbed4;
L_dbea8:;
  /* dbea8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* dbeac: b #0xdbed8 */
  goto L_dbed8;
L_dbeb0:;
  /* dbeb0: sub x12, x10, x19 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - ARC_X_R(c, 19)));
  /* dbeb4: neg x13, x2 */
  ARC_X_W(c, 13, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 2))));
  /* dbeb8: and x0, x12, x13 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) & ARC_X_R(c, 13)));
  /* dbebc: cbz x0, #0xdbdf4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_dbdf4;
  /* dbec0: sub x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 11)));
  /* dbec4: cmp x10, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 0));
  /* dbec8: b.hi #0xdbdf4 */
  if (ARC_COND(c, 8)) goto L_dbdf4;
  /* dbecc: str x0, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 0));
  /* dbed0: b #0xdbed8 */
  goto L_dbed8;
L_dbed4:;
  /* dbed4: stur x0, [x8, #-0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(-16)), ARC_X_R(c, 0));
L_dbed8:;
  /* dbed8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dbedc: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dbee0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dbee4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dbee8: ret  */
  return;
}

void fn1_e04d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038846676));
  /* e04d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e04d8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e04dc: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e04e0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e04e4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e04e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e04ec: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e04f0: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e04f4: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e04f8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e04fc: csel x22, x10, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e0500: cmp x22, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 1));
  /* e0504: b.lo #0xe05e8 */
  if (ARC_COND(c, 3)) goto L_e05e8;
  /* e0508: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e050c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0510: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* e0514: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e0518: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* e051c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e0520: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e0524: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* e0528: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* e052c: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* e0530: sub x9, x1, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 22)));
  /* e0534: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* e0538: b.hs #0xe0564 */
  if (ARC_COND(c, 2)) goto L_e0564;
  /* e053c: add x8, x22, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 20)));
  /* e0540: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e0544: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* e0548: sub x2, x8, x1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* e054c: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* e0550: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e0554: mov x6, x20 */
  ARC_X_W(c, 6, ARC_X_R(c, 20));
  /* e0558: mov x7, x23 */
  ARC_X_W(c, 7, ARC_X_R(c, 23));
  /* e055c: bl #0x142b90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918880));
  fn1_142b90(c);
  /* e0560: b #0xe05cc */
  goto L_e05cc;
L_e0564:;
  /* e0564: cbz x20, #0xe05cc */
  if ((ARC_X_R(c, 20)) == 0) goto L_e05cc;
  /* e0568: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e056c: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e0570: csinc x24, x9, x19, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e0574: subs x2, x22, x21 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21)));
  /* e0578: b.eq #0xe059c */
  if (ARC_COND(c, 0)) goto L_e059c;
  /* e057c: add x8, x24, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 22)));
  /* e0580: add x1, x24, x21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + ARC_X_R(c, 21)));
  /* e0584: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* e0588: add x0, x1, x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ARC_X_R(c, 20)));
  /* e058c: ccmp x23, x1, #0, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* e0590: csel x8, x20, xzr, hs */
  ARC_X_W(c, 8, (ARC_COND(c, 2) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 31)));
  /* e0594: add x23, x23, x8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* e0598: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918940));
  fn1_1449f0(c);
L_e059c:;
  /* e059c: add x0, x24, x21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + ARC_X_R(c, 21)));
  /* e05a0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* e05a4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e05a8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918956));
  fn1_1449f0(c);
  /* e05ac: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e05b0: add x8, x22, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 20)));
  /* e05b4: tbnz w9, #0, #0xe05c4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e05c4;
  /* e05b8: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e05bc: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e05c0: b #0xe05c8 */
  goto L_e05c8;
L_e05c4:;
  /* e05c4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e05c8:;
  /* e05c8: strb wzr, [x24, x8] */
  arc_st8((ARC_X_R(c, 24) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_e05cc:;
  /* e05cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e05d0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e05d4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e05d8: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e05dc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e05e0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e05e4: ret  */
  return;
L_e05e8:;
  /* e05e8: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919020));
  fn1_da020(c);
}

void fn1_e2f60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038857568));
  /* e2f60: bti c */
  /* bti: no architectural effect here */
  /* e2f64: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e2f68: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e2f6c: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e2f70: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e2f74: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e2f78: subs x8, x8, x2 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2)));
  /* e2f7c: b.ls #0xe2fcc */
  if (ARC_COND(c, 9)) goto L_e2fcc;
  /* e2f80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2f84: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2f88: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e2f8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2f90: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e2f94: add x11, x0, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e2f98: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e2f9c: csel x19, x11, x10, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e2fa0: add x0, x19, x2, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 2)) << 2)));
  /* e2fa4: mov x2, x8 */
  ARC_X_W(c, 2, ARC_X_R(c, 8));
  /* e2fa8: bl #0x142e48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929708));
  fn1_142e48(c);
  /* e2fac: sub x8, x0, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 19)));
  /* e2fb0: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* e2fb4: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e2fb8: csinv x0, x8, xzr, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* e2fbc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e2fc0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2fc4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2fc8: ret  */
  return;
L_e2fcc:;
  /* e2fcc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* e2fd0: ret  */
  return;
}

void fn1_e7660(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038875744));
  /* e7660: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7664: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e7668: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e766c: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* e7670: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e7674: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e7678: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e767c: mov w0, #0x58 */
  ARC_W_W(c, 0, UINT64_C(88));
  /* e7680: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* e7684: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e7688: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947852));
  fn1_1428f0(c);
  /* e768c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* e7690: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* e7694: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* e7698: ldr q1, [x8, #0xd80] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(3456))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3456)) + 8));
  /* e769c: str wzr, [x0, #0x50] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(80)), ARC_W_R(c, 31));
  /* e76a0: str q1, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[1].u64[0]);
  arc_st64(((c)->sp + INT64_C(16)) + 8, (c)->q[1].u64[1]);
  /* e76a4: stp q0, q0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e76a8: stp q0, q0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e76ac: str q0, [x0, #0x40] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)) + 8, (c)->q[0].u64[1]);
  /* e76b0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* e76b4: mov w1, #0x15 */
  ARC_W_W(c, 1, UINT64_C(21));
  /* e76b8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e76bc: add x20, sp, #0x10 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(16)));
  /* e76c0: bl #0x142dd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947908));
  fn1_142dd0(c);
  /* e76c4: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* e76c8: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* e76cc: orr x22, x20, #4 */
  ARC_X_W(c, 22, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* e76d0: adrp x20, #0x75000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(479232)));
  /* e76d4: add x20, x20, #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* e76d8: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* e76dc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e76e0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e76e4: csel x21, x10, x9, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
L_e76e8:;
  /* e76e8: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* e76ec: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e76f0: csel x0, x22, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 9)));
  /* e76f4: ldr q0, [sp] */
  arc_q_w(c, 0, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* e76f8: add x1, x21, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* e76fc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e7700: bl #0x142fc8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(947972));
  fn1_142fc8(c);
  /* e7704: tbnz w0, #0x1f, #0xe771c */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_e771c;
  /* e7708: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* e770c: cmp x21, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 1));
  /* e7710: b.hs #0xe7738 */
  if (ARC_COND(c, 2)) goto L_e7738;
  /* e7714: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e7718: b #0xe7720 */
  goto L_e7720;
L_e771c:;
  /* e771c: orr x21, x23, x21, lsl #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) | ((uint64_t)(ARC_X_R(c, 21)) << 1)));
L_e7720:;
  /* e7720: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* e7724: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e7728: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e772c: bl #0x142dd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948016));
  fn1_142dd0(c);
  /* e7730: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* e7734: b #0xe76e8 */
  goto L_e76e8;
L_e7738:;
  /* e7738: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* e773c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e7740: bl #0x142dd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948036));
  fn1_142dd0(c);
  /* e7744: ldr q0, [sp, #0x10] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(16))), arc_ld64(((c)->sp + INT64_C(16)) + 8));
  /* e7748: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e774c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* e7750: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e7754: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e7758: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* e775c: str xzr, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 31));
  /* e7760: bl #0x142e18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948068));
  fn1_142e18(c);
  /* e7764: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e7768: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* e776c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e7770: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7774: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e7778: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e777c: ret  */
  return;
  /* e7780: b #0xe7788 */
  goto L_e7788;
  /* e7784: b #0xe7788 */
  goto L_e7788;
L_e7788:;
  /* e7788: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e778c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* e7790: bl #0x142e18 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948116));
  fn1_142e18(c);
  /* e7794: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7798: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948124));
  fn1_9cc20(c);
}

void fn1_e9e90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038886032));
  /* e9e90: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9e94: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9e98: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e9e9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9ea0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e9ea4: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e9ea8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e9eac: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958128));
  fn1_142518(c);
  /* e9eb0: cbnz w0, #0xe9f04 */
  if ((ARC_W_R(c, 0)) != 0) goto L_e9f04;
  /* e9eb4: ldrb w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(112))));
  /* e9eb8: tbnz w8, #0, #0xe9efc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e9efc;
  /* e9ebc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e9ec0: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* e9ec4: cbnz x8, #0xe9efc */
  if ((ARC_X_R(c, 8)) != 0) goto L_e9efc;
  /* e9ec8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e9ecc: bl #0x142a70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958160));
  fn1_142a70(c);
  /* e9ed0: ldr w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(112))));
  /* e9ed4: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* e9ed8: str w8, [x19, #0x70] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(112)), ARC_W_R(c, 8));
  /* e9edc: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* e9ee0: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958180));
  fn1_142578(c);
  /* e9ee4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e9ee8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958188));
  fn1_142560(c);
  /* e9eec: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e9ef0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9ef4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9ef8: ret  */
  return;
L_e9efc:;
  /* e9efc: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* e9f00: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958212));
  fn1_e9be0(c);
L_e9f04:;
  /* e9f04: nop  */
  /* nop: no architectural effect here */
  /* e9f08: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* e9f0c: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958224));
  fn1_142a40(c);
  /* e9f10: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958228));
  fn1_a1454(c);
  /* e9f14: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958232));
  fn1_a1454(c);
  /* e9f18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e9f1c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e9f20: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958244));
  fn1_142560(c);
  /* e9f24: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e9f28: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958252));
  fn1_9cc20(c);
  /* e9f2c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958256));
  fn1_a1454(c);
}

void fn1_eb9dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038893020));
  /* eb9dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb9e0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb9e4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb9e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb9ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb9f0: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* eb9f4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965112));
  fn1_1428f0(c);
  /* eb9f8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* eb9fc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* eba00: stp q0, q0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eba04: str q0, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* eba08: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eba0c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eba10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eba14: ret  */
  return;
}

void fn1_ed780(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900608));
  /* ed780: bti c */
  /* bti: no architectural effect here */
  /* ed784: stp x1, x1, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ed788: str x2, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), ARC_X_R(c, 2));
  /* ed78c: ret  */
  return;
}

void fn1_f10a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915240));
  /* f10a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f10ac: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f10b0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f10b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f10b8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f10bc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f10c0: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f10c4: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f10c8: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987340));
  fn1_1433b8(c);
  /* f10cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f10d0: mov w1, #0xa0 */
  ARC_W_W(c, 1, UINT64_C(160));
  /* f10d4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f10d8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f10dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f10e0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_f41b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927792));
  /* f41b0: bti c */
  /* bti: no architectural effect here */
  /* f41b4: stp x1, x1, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* f41b8: str x2, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), ARC_X_R(c, 2));
  /* f41bc: ret  */
  return;
}

void fn1_f7ae0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942432));
  /* f7ae0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7ae4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7ae8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f7aec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7af0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f7af4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7af8: add x19, x0, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f7afc: add x0, x19, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* f7b00: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014532));
  fn1_1433b8(c);
  /* f7b04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7b08: mov w1, #0xa0 */
  ARC_W_W(c, 1, UINT64_C(160));
  /* f7b0c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7b10: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7b14: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f7b18: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_fcd58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038963544));
  /* fcd58: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fcd5c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fcd60: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fcd64: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fcd68: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fcd6c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcd70: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcd74: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fcd78: ldr x8, [x8, #0xb00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))));
  /* fcd7c: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fcd80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fcd84: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fcd88: add x11, x8, #0x68 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* fcd8c: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fcd90: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* fcd94: ldrb w10, [x0, #0x58] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(88))));
  /* fcd98: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fcd9c: str x11, [x19, #0x80]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(128));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(128));
    arc_st64(_a, ARC_X_R(c, 11));
  }
  /* fcda0: stp x8, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fcda4: tbz w10, #0, #0xfcdb8 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_fcdb8;
  /* fcda8: ldr x8, [x20, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* fcdac: ldr x0, [x20, #0x68] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(104))));
  /* fcdb0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fcdb4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035704));
  fn1_142608(c);
L_fcdb8:;
  /* fcdb8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcdbc: nop  */
  /* nop: no architectural effect here */
  /* fcdc0: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fcdc4: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fcdc8: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* fcdcc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fcdd0: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fcdd4: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
  /* fcdd8: b.eq #0xfcdfc */
  if (ARC_COND(c, 0)) goto L_fcdfc;
  /* fcddc: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fcde0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fcde4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035752));
  fn1_bd950(c);
  /* fcde8: cbnz x0, #0xfcdfc */
  if ((ARC_X_R(c, 0)) != 0) goto L_fcdfc;
  /* fcdec: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fcdf0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fcdf4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fcdf8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035772));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fcdfc:;
  /* fcdfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fce00: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fce04: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fce08: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fce0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fce10: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_1005a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038977960));
  /* 1005a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1005ac: sub sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(384)));
  /* 1005b0: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1005b4: stp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1005b8: stp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1005bc: stp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1005c0: stp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1005c4: stp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1005c8: add x29, sp, #0x120 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(288)));
  /* 1005cc: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 1005d0: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 1005d4: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 1005d8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1005dc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1005e0: sub x26, x29, #0x48 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1005e4: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 1005e8: str x5, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 5));
  /* 1005ec: b.eq #0x100610 */
  if (ARC_COND(c, 0)) goto L_100610;
  /* 1005f0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 1005f4: b.eq #0x100608 */
  if (ARC_COND(c, 0)) goto L_100608;
  /* 1005f8: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 1005fc: b.ne #0x100618 */
  if (ARC_COND(c, 1)) goto L_100618;
  /* 100600: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 100604: b #0x10061c */
  goto L_10061c;
L_100608:;
  /* 100608: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 10060c: b #0x10061c */
  goto L_10061c;
L_100610:;
  /* 100610: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 100614: b #0x10061c */
  goto L_10061c;
L_100618:;
  /* 100618: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_10061c:;
  /* 10061c: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 100620: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 100624: str x4, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 4));
  /* 100628: bl #0x135800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050156));
  fn1_135800(c);
  /* 10062c: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 100630: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 100634: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 100638: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 10063c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 100640: sub x19, x29, #0x40 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 100644: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050184));
  fn1_142d10(c);
  /* 100648: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 10064c: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 100650: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100654: str x10, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 10));
  /* 100658: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10065c: orr x27, x19, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 100660: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100664: ldr x28, [x28, #0xbe0] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(3040))));
  /* 100668: add x22, sp, #0x30 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(48)));
  /* 10066c: csinc x24, x9, x19, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 100670: mov w19, #0x16 */
  ARC_W_W(c, 19, UINT64_C(22));
  /* 100674: str wzr, [sp, #0x2c] */
  arc_st32(((c)->sp + INT64_C(44)), ARC_W_R(c, 31));
  /* 100678: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 10067c: b #0x100688 */
  goto L_100688;
L_100680:;
  /* 100680: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 100684: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_100688:;
  /* 100688: cbz x20, #0x1006b0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1006b0;
  /* 10068c: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100690: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100694: b.eq #0x1006cc */
  if (ARC_COND(c, 0)) goto L_1006cc;
  /* 100698: cbz x21, #0x10073c */
  if ((ARC_X_R(c, 21)) == 0) goto L_10073c;
  /* 10069c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1006a0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1006a4: b.ne #0x100884 */
  if (ARC_COND(c, 1)) goto L_100884;
  /* 1006a8: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* 1006ac: b #0x100718 */
  goto L_100718;
L_1006b0:;
  /* 1006b0: cbz x21, #0x100880 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100880;
  /* 1006b4: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1006b8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1006bc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1006c0: b.ne #0x10073c */
  if (ARC_COND(c, 1)) goto L_10073c;
  /* 1006c4: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 1006c8: b #0x100718 */
  goto L_100718;
L_1006cc:;
  /* 1006cc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1006d0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1006d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1006d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050332));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1006dc: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1006e0: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 1006e4: cbz x21, #0x100708 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100708;
  /* 1006e8: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1006ec: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 1006f0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 1006f4: b.eq #0x100714 */
  if (ARC_COND(c, 0)) goto L_100714;
  /* 1006f8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1006fc: b.ne #0x100884 */
  if (ARC_COND(c, 1)) goto L_100884;
  /* 100700: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 100704: b #0x10073c */
  goto L_10073c;
L_100708:;
  /* 100708: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10070c: b.ne #0x10073c */
  if (ARC_COND(c, 1)) goto L_10073c;
  /* 100710: b #0x100be8 */
  goto L_100be8;
L_100714:;
  /* 100714: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_100718:;
  /* 100718: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10071c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100720: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 100724: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050408));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 100728: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10072c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 100730: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 100734: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 100738: b.eq #0x100884 */
  if (ARC_COND(c, 0)) goto L_100884;
L_10073c:;
  /* 10073c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100740: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 100744: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 100748: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10074c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100750: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 100754: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 100758: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 10075c: b.ne #0x100814 */
  if (ARC_COND(c, 1)) goto L_100814;
  /* 100760: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 100764: b.lt #0x10077c */
  if (ARC_COND(c, 11)) goto L_10077c;
  /* 100768: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 10076c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 100770: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 100774: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050488));
  fn1_142d10(c);
  /* 100778: b #0x1007a0 */
  goto L_1007a0;
L_10077c:;
  /* 10077c: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 100780: tbnz w8, #0, #0x100794 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_100794;
  /* 100784: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 100788: sturb w8, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 8));
  /* 10078c: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 100790: b #0x10079c */
  goto L_10079c;
L_100794:;
  /* 100794: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100798: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_10079c:;
  /* 10079c: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_1007a0:;
  /* 1007a0: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1007a4: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1007a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1007ac: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 1007b0: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 1007b4: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 1007b8: csel x8, x19, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 11)));
  /* 1007bc: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 1007c0: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 1007c4: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 1007c8: b.ls #0x1007dc */
  if (ARC_COND(c, 9)) goto L_1007dc;
  /* 1007cc: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1007d0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1007d4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050584));
  fn1_142d10(c);
  /* 1007d8: b #0x1007fc */
  goto L_1007fc;
L_1007dc:;
  /* 1007dc: tbnz w9, #0, #0x1007f0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_1007f0;
  /* 1007e0: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 1007e4: sturb w9, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 9));
  /* 1007e8: mov x9, x27 */
  ARC_X_W(c, 9, ARC_X_R(c, 27));
  /* 1007ec: b #0x1007f8 */
  goto L_1007f8;
L_1007f0:;
  /* 1007f0: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1007f4: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_1007f8:;
  /* 1007f8: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_1007fc:;
  /* 1007fc: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100800: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100804: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100808: csel x24, x27, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 9)));
  /* 10080c: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 100810: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_100814:;
  /* 100814: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100818: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10081c: b.eq #0x100828 */
  if (ARC_COND(c, 0)) goto L_100828;
  /* 100820: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 100824: b #0x100838 */
  goto L_100838;
L_100828:;
  /* 100828: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10082c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100830: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100834: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050680));
  arc_dispatch(c, ARC_X_R(c, 8));
L_100838:;
  /* 100838: ldurb w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 10083c: sub x3, x29, #0x48 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 100840: add x4, sp, #0x2c */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(44)));
  /* 100844: sub x6, x29, #0x28 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 100848: add x7, sp, #0x38 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(56)));
  /* 10084c: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 100850: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 100854: stp x22, x28, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* 100858: bl #0x143868 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050716));
  fn1_143868(c);
  /* 10085c: cbnz w0, #0x100884 */
  if ((ARC_W_R(c, 0)) != 0) goto L_100884;
  /* 100860: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100864: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100868: b.ne #0x100680 */
  if (ARC_COND(c, 1)) goto L_100680;
  /* 10086c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 100870: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 100874: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100878: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050748));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10087c: b #0x100688 */
  goto L_100688;
L_100880:;
  /* 100880: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_100884:;
  /* 100884: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 100888: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 10088c: ldr x22, [sp, #0x20] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(32))));
  /* 100890: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 100894: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 100898: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10089c: cbz x8, #0x1008c0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1008c0;
  /* 1008a0: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1008a4: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 1008a8: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 1008ac: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 1008b0: b.gt #0x1008c0 */
  if (ARC_COND(c, 12)) goto L_1008c0;
  /* 1008b4: ldr w9, [sp, #0x2c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(44))));
  /* 1008b8: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 1008bc: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
L_1008c0:;
  /* 1008c0: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 1008c4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1008c8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1008cc: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 1008d0: bl #0x135ac4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1050836));
  fn1_135ac4(c);
  /* 1008d4: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 1008d8: ldr x12, [sp, #0x30] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1008dc: add x11, sp, #0x38 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(56)));
  /* 1008e0: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 1008e4: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 1008e8: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 1008ec: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 1008f0: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 1008f4: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1008f8: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 1008fc: str x0, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 100900: b.lt #0x100a60 */
  if (ARC_COND(c, 11)) goto L_100a60;
  /* 100904: cbz x8, #0x100a60 */
  if ((ARC_X_R(c, 8)) == 0) goto L_100a60;
  /* 100908: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 10090c: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 100910: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 100914: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 100918: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 10091c: b.eq #0x1009cc */
  if (ARC_COND(c, 0)) goto L_1009cc;
  /* 100920: cbz w11, #0x1009cc */
  if ((ARC_W_R(c, 11)) == 0) goto L_1009cc;
  /* 100924: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 100928: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 10092c: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 100930: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 100934: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 100938: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 10093c: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 100940: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 100944: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 100948: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 10094c: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 100950: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 100954: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 100958: b.lo #0x1009a0 */
  if (ARC_COND(c, 3)) goto L_1009a0;
  /* 10095c: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 100960: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 100964: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 100968: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 10096c: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 100970: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 100974: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 100978: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 10097c: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 100980: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 100984: b.hs #0x100af0 */
  if (ARC_COND(c, 2)) goto L_100af0;
  /* 100988: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 10098c: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 100990: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 100994: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 100998: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 10099c: b.hs #0x100af0 */
  if (ARC_COND(c, 2)) goto L_100af0;
L_1009a0:;
  /* 1009a0: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_1009a4:;
  /* 1009a4: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_1009a8:;
  /* 1009a8: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 1009ac: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 1009b0: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 1009b4: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 1009b8: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1009bc: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 1009c0: b.lo #0x1009a8 */
  if (ARC_COND(c, 3)) goto L_1009a8;
L_1009c4:;
  /* 1009c4: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 1009c8: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_1009cc:;
  /* 1009cc: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 1009d0: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 1009d4: sub x12, x29, #0x28 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1009d8: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 1009dc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1009e0: b.hs #0x100a38 */
  if (ARC_COND(c, 2)) goto L_100a38;
  /* 1009e4: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 1009e8: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 1009ec: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 1009f0: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 1009f4: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 1009f8: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 1009fc: b #0x100a18 */
  goto L_100a18;
L_100a00:;
  /* 100a00: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 100a04: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 100a08: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 100a0c: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 100a10: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 100a14: b.hs #0x100a38 */
  if (ARC_COND(c, 2)) goto L_100a38;
L_100a18:;
  /* 100a18: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 100a1c: cbz w12, #0x100a00 */
  if ((ARC_W_R(c, 12)) == 0) goto L_100a00;
  /* 100a20: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 100a24: b.eq #0x100a00 */
  if (ARC_COND(c, 0)) goto L_100a00;
  /* 100a28: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 100a2c: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 100a30: b.eq #0x100a00 */
  if (ARC_COND(c, 0)) goto L_100a00;
  /* 100a34: b #0x100a58 */
  goto L_100a58;
L_100a38:;
  /* 100a38: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 100a3c: cbz w9, #0x100a60 */
  if ((ARC_W_R(c, 9)) == 0) goto L_100a60;
  /* 100a40: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 100a44: b.eq #0x100a60 */
  if (ARC_COND(c, 0)) goto L_100a60;
  /* 100a48: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 100a4c: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 100a50: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 100a54: b.lo #0x100a60 */
  if (ARC_COND(c, 3)) goto L_100a60;
L_100a58:;
  /* 100a58: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 100a5c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_100a60:;
  /* 100a60: cbz x20, #0x100a88 */
  if ((ARC_X_R(c, 20)) == 0) goto L_100a88;
  /* 100a64: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100a68: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100a6c: b.eq #0x100aa4 */
  if (ARC_COND(c, 0)) goto L_100aa4;
  /* 100a70: cbz x21, #0x100b90 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100b90;
  /* 100a74: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100a78: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100a7c: b.ne #0x100b84 */
  if (ARC_COND(c, 1)) goto L_100b84;
  /* 100a80: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 100a84: b #0x100b64 */
  goto L_100b64;
L_100a88:;
  /* 100a88: cbz x21, #0x100ae8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100ae8;
  /* 100a8c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 100a90: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 100a94: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 100a98: b.ne #0x100b90 */
  if (ARC_COND(c, 1)) goto L_100b90;
  /* 100a9c: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 100aa0: b #0x100b64 */
  goto L_100b64;
L_100aa4:;
  /* 100aa4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 100aa8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100aac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100ab0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051316));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 100ab4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100ab8: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 100abc: cbz x21, #0x100ae0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_100ae0;
  /* 100ac0: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 100ac4: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 100ac8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 100acc: b.eq #0x100b60 */
  if (ARC_COND(c, 0)) goto L_100b60;
  /* 100ad0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100ad4: b.ne #0x100b84 */
  if (ARC_COND(c, 1)) goto L_100b84;
  /* 100ad8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 100adc: b #0x100b90 */
  goto L_100b90;
L_100ae0:;
  /* 100ae0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100ae4: b.ne #0x100b90 */
  if (ARC_COND(c, 1)) goto L_100b90;
L_100ae8:;
  /* 100ae8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 100aec: b #0x100b84 */
  goto L_100b84;
L_100af0:;
  /* 100af0: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 100af4: add x15, sp, #0x38 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(56)));
  /* 100af8: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 100afc: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 100b00: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 100b04: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 100b08: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 100b0c: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 100b10: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_100b14:;
  /* 100b14: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 100b18: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 100b1c: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 100b20: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 100b24: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 100b28: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 100b2c: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 100b30: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 100b34: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 100b38: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 100b3c: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 100b40: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 100b44: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 100b48: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 100b4c: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 100b50: cbnz x16, #0x100b14 */
  if ((ARC_X_R(c, 16)) != 0) goto L_100b14;
  /* 100b54: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 100b58: b.eq #0x1009c4 */
  if (ARC_COND(c, 0)) goto L_1009c4;
  /* 100b5c: b #0x1009a4 */
  goto L_1009a4;
L_100b60:;
  /* 100b60: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_100b64:;
  /* 100b64: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 100b68: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 100b6c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 100b70: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051508));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 100b74: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 100b78: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 100b7c: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 100b80: tbnz w8, #0, #0x100b90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_100b90;
L_100b84:;
  /* 100b84: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 100b88: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 100b8c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_100b90:;
  /* 100b90: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100b94: tbz w8, #0, #0x100ba8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_100ba8;
  /* 100b98: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 100b9c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100ba0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 100ba4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051560));
  fn1_142608(c);
L_100ba8:;
  /* 100ba8: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 100bac: tbz w8, #0, #0x100bc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_100bc0;
  /* 100bb0: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 100bb4: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 100bb8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 100bbc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051584));
  fn1_142608(c);
L_100bc0:;
  /* 100bc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 100bc4: ldp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 100bc8: ldp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 100bcc: ldp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 100bd0: ldp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 100bd4: ldp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 100bd8: ldp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 100bdc: add sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(384)));
  /* 100be0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 100be4: ret  */
  return;
L_100be8:;
  /* 100be8: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 100bec: b #0x100884 */
  goto L_100884;
  /* 100bf0: b #0x100bfc */
  goto L_100bfc;
  /* 100bf4: b #0x100bfc */
  goto L_100bfc;
  /* 100bf8: b #0x100bfc */
  goto L_100bfc;
L_100bfc:;
  /* 100bfc: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 100c00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 100c04: tbnz w8, #0, #0x100c18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_100c18;
  /* 100c08: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 100c0c: tbnz w8, #0, #0x100c30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_100c30;
L_100c10:;
  /* 100c10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 100c14: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051672));
  fn1_9cc20(c);
L_100c18:;
  /* 100c18: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 100c1c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 100c20: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 100c24: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051688));
  fn1_142608(c);
  /* 100c28: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 100c2c: tbz w8, #0, #0x100c10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_100c10;
L_100c30:;
  /* 100c30: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 100c34: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 100c38: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 100c3c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051712));
  fn1_142608(c);
  /* 100c40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 100c44: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1051720));
  fn1_9cc20(c);
}

void fn1_110558(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039043416));
  /* 110558: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11055c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 110560: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 110564: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 110568: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 11056c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 110570: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 110574: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 110578: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 11057c: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 110580: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 110584: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115528));
  fn1_110db0(c);
  /* 110588: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 11058c: sub w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 110590: cmp w9, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(30));
  /* 110594: b.hi #0x1105a4 */
  if (ARC_COND(c, 8)) goto L_1105a4;
  /* 110598: tbnz w8, #2, #0x1105a4 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_1105a4;
  /* 11059c: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 1105a0: b #0x1105ac */
  goto L_1105ac;
L_1105a4:;
  /* 1105a4: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 1105a8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1105ac:;
  /* 1105ac: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1105b0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1105b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1105b8: ret  */
  return;
}

void fn1_113ce0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057632));
  /* 113ce0: bti c */
  /* bti: no architectural effect here */
  /* 113ce4: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113ce8: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113cec: ret  */
  return;
}

void fn1_11963c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039080508));
  /* 11963c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 119640: sub sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(384)));
  /* 119644: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 119648: stp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 11964c: stp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 119650: stp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 119654: stp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 119658: stp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11965c: add x29, sp, #0x120 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(288)));
  /* 119660: mov x28, x1 */
  ARC_X_W(c, 28, ARC_X_R(c, 1));
  /* 119664: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 119668: add x1, x3, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) + UINT64_C(48)));
  /* 11966c: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* 119670: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* 119674: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 119678: mov w24, w2 */
  ARC_W_W(c, 24, ARC_W_R(c, 2));
  /* 11967c: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152640));
  fn1_143460(c);
  /* 119680: adrp x27, #0x151000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 119684: ldr x27, [x27, #0xb40] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 27) + INT64_C(2880))));
  /* 119688: ldur x26, [x29, #-0x10] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 11968c: ldar x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 119690: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 119694: b.eq #0x119750 */
  if (ARC_COND(c, 0)) goto L_119750;
  /* 119698: nop  */
  /* nop: no architectural effect here */
  /* 11969c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1196a0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152676));
  fn1_142518(c);
  /* 1196a4: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 1196a8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1196ac: b.ne #0x1196d8 */
  if (ARC_COND(c, 1)) goto L_1196d8;
  /* 1196b0: nop  */
  /* nop: no architectural effect here */
  /* 1196b4: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1196b8: nop  */
  /* nop: no architectural effect here */
  /* 1196bc: adr x25, #0x1578f4 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407220)));
L_1196c0:;
  /* 1196c0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1196c4: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 1196c8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152716));
  fn1_142530(c);
  /* 1196cc: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 1196d0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1196d4: b.eq #0x1196c0 */
  if (ARC_COND(c, 0)) goto L_1196c0;
L_1196d8:;
  /* 1196d8: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 1196dc: cbz x8, #0x1196f0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1196f0;
  /* 1196e0: nop  */
  /* nop: no architectural effect here */
  /* 1196e4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1196e8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152748));
  fn1_142560(c);
  /* 1196ec: b #0x119750 */
  goto L_119750;
L_1196f0:;
  /* 1196f0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1196f4: str x27, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 27));
  /* 1196f8: strb wzr, [sp, #0x58] */
  arc_st8(((c)->sp + INT64_C(88)), ARC_W_R(c, 31));
  /* 1196fc: str x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 119700: nop  */
  /* nop: no architectural effect here */
  /* 119704: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 119708: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152780));
  fn1_142560(c);
  /* 11970c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 119710: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 119714: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 119718: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152796));
  fn1_a2030(c);
  /* 11971c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 119720: str w8, [x27, #8] */
  arc_st32((ARC_X_R(c, 27) + INT64_C(8)), ARC_W_R(c, 8));
  /* 119724: nop  */
  /* nop: no architectural effect here */
  /* 119728: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11972c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152816));
  fn1_142518(c);
  /* 119730: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 119734: stlr x8, [x27] */
  arc_st64(ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 119738: nop  */
  /* nop: no architectural effect here */
  /* 11973c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 119740: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152836));
  fn1_142560(c);
  /* 119744: nop  */
  /* nop: no architectural effect here */
  /* 119748: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11974c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152848));
  fn1_142578(c);
L_119750:;
  /* 119750: ldp x8, x10, [x26, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 119754: ldrsw x9, [x27, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 27) + INT64_C(8)))));
  /* 119758: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 11975c: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 119760: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 119764: b.hs #0x1199d4 */
  if (ARC_COND(c, 2)) goto L_1199d4;
  /* 119768: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 11976c: cbz x23, #0x1199d4 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1199d4;
  /* 119770: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 119774: ldr x9, [x22, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* 119778: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 11977c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 119780: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 119784: cbz x9, #0x1197b8 */
  if ((ARC_X_R(c, 9)) == 0) goto L_1197b8;
  /* 119788: ldr x9, [x22, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 11978c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 119790: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 119794: csinc x9, x9, x22, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 22)) + 1)));
  /* 119798: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 11979c: ldrb w19, [x9] */
  ARC_W_W(c, 19, arc_ld8(ARC_X_R(c, 9)));
  /* 1197a0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1197a4: mov w1, #0x2d */
  ARC_W_W(c, 1, UINT64_C(45));
  /* 1197a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1152940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1197ac: cmp w19, w0, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 19), ((uint64_t)(uint8_t)(ARC_W_R(c, 0))));
  /* 1197b0: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 1197b4: b #0x1197bc */
  goto L_1197bc;
L_1197b8:;
  /* 1197b8: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
L_1197bc:;
  /* 1197bc: str x28, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 28));
  /* 1197c0: stp xzr, xzr, [x29, #-0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-56));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1197c4: stur xzr, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 31));
  /* 1197c8: stp xzr, xzr, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1197cc: stur xzr, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 31));
  /* 1197d0: stp xzr, xzr, [x29, #-0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-104));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1197d4: stur xzr, [x29, #-0x58] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-88)), ARC_X_R(c, 31));
  /* 1197d8: sub x8, x29, #0x6c */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(108)));
  /* 1197dc: sub x9, x29, #0x68 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 1197e0: and w0, w24, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 24) & UINT64_C(1)));
  /* 1197e4: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1197e8: sub x3, x29, #0x14 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(20)));
  /* 1197ec: sub x4, x29, #0x18 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1197f0: sub x5, x29, #0x1c */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) - UINT64_C(28)));
  /* 1197f4: sub x6, x29, #0x38 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1197f8: sub x7, x29, #0x50 */
  ARC_X_W(c, 7, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1197fc: mov w1, w25 */
  ARC_W_W(c, 1, ARC_W_R(c, 25));
  /* 119800: stp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 119804: bl #0x143a60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153032));
  fn1_143a60(c);
  /* 119808: ldrb w19, [x22] */
  ARC_W_W(c, 19, arc_ld8(ARC_X_R(c, 22)));
  /* 11980c: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* 119810: ldursw x28, [x29, #-0x6c] */
  ARC_X_W(c, 28, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 29) + INT64_C(-108)))));
  /* 119814: lsr x9, x19, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 19)) >> ((UINT64_C(1)) & 63)));
  /* 119818: tst w19, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 19) & UINT64_C(1)));
  /* 11981c: csel x27, x9, x8, eq */
  ARC_X_W(c, 27, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 119820: cmp w28, w27 */
  (void)arc_sub32(c, ARC_W_R(c, 28), ARC_W_R(c, 27));
  /* 119824: b.ge #0x119878 */
  if (ARC_COND(c, 10)) goto L_119878;
  /* 119828: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11982c: ldurb w9, [x29, #-0x50] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 119830: ldur x10, [x29, #-0x60] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 119834: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 119838: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11983c: ldur x8, [x29, #-0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 119840: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 119844: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 119848: sub x11, x27, x28 */
  ARC_X_W(c, 11, (ARC_X_R(c, 27) - ARC_X_R(c, 28)));
  /* 11984c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 119850: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 119854: add x9, x28, x11, lsl #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + ((uint64_t)(ARC_X_R(c, 11)) << 1)));
  /* 119858: add x8, x10, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* 11985c: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 119860: add x0, x8, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 119864: cmp x0, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(101));
  /* 119868: b.hs #0x1198b4 */
  if (ARC_COND(c, 2)) goto L_1198b4;
L_11986c:;
  /* 11986c: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 119870: add x26, sp, #0x50 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(80)));
  /* 119874: b #0x1198c4 */
  goto L_1198c4;
L_119878:;
  /* 119878: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11987c: ldurb w9, [x29, #-0x50] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 119880: ldur x10, [x29, #-0x60] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 119884: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 119888: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 11988c: ldur x8, [x29, #-0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-72))));
  /* 119890: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 119894: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 119898: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 11989c: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 1198a0: add x9, x28, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + ARC_X_R(c, 10)));
  /* 1198a4: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 1198a8: add x0, x8, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 1198ac: cmp x0, #0x65 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(101));
  /* 1198b0: b.lo #0x11986c */
  if (ARC_COND(c, 3)) goto L_11986c;
L_1198b4:;
  /* 1198b4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153208));
  fn1_1428a8(c);
  /* 1198b8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1198bc: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 1198c0: cbz x0, #0x1199d8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1199d8;
L_1198c4:;
  /* 1198c4: ldr x8, [x22, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1198c8: ldr w3, [x20, #8] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1198cc: tst w19, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 19) & UINT64_C(1)));
  /* 1198d0: ldurb w9, [x29, #-0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 1198d4: ldurb w10, [x29, #-0x1c] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-28))));
  /* 1198d8: csinc x4, x8, x22, ne */
  ARC_X_W(c, 4, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 22)) + 1)));
  /* 1198dc: sub x8, x29, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 1198e0: sub x11, x29, #0x50 */
  ARC_X_W(c, 11, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1198e4: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 1198e8: stp x11, x8, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1198ec: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1198f0: sub x11, x29, #0x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 29) - UINT64_C(20)));
  /* 1198f4: add x2, sp, #0x40 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(64)));
  /* 1198f8: add x5, x4, x27 */
  ARC_X_W(c, 5, (ARC_X_R(c, 4) + ARC_X_R(c, 27)));
  /* 1198fc: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 119900: mov x6, x23 */
  ARC_X_W(c, 6, ARC_X_R(c, 23));
  /* 119904: mov w7, w25 */
  ARC_W_W(c, 7, ARC_W_R(c, 25));
  /* 119908: str w28, [sp, #0x30] */
  arc_st32(((c)->sp + INT64_C(48)), ARC_W_R(c, 28));
  /* 11990c: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 119910: strb w10, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 10));
  /* 119914: strb w9, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 9));
  /* 119918: str x11, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 11));
  /* 11991c: bl #0x143a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153312));
  fn1_143a78(c);
  /* 119920: ldp x3, x2, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 119924: ldr x0, [sp, #0x38] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(56))));
  /* 119928: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 11992c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 119930: mov w5, w21 */
  ARC_W_W(c, 5, ARC_W_R(c, 21));
  /* 119934: bl #0x10b5d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153336));
  fn1_10b5d8(c);
  /* 119938: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11993c: cbz x24, #0x119948 */
  if ((ARC_X_R(c, 24)) == 0) goto L_119948;
  /* 119940: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 119944: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153352));
  fn1_142800(c);
L_119948:;
  /* 119948: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 11994c: tbnz w8, #0, #0x1199a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1199a0;
  /* 119950: ldurb w8, [x29, #-0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 119954: tbnz w8, #0, #0x1199b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1199b8;
L_119958:;
  /* 119958: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 11995c: tbz w8, #0, #0x119970 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119970;
L_119960:;
  /* 119960: ldur x8, [x29, #-0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 119964: ldur x0, [x29, #-0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 119968: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11996c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153392));
  fn1_142608(c);
L_119970:;
  /* 119970: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 119974: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153400));
  fn1_143478(c);
  /* 119978: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11997c: ldp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 119980: ldp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 119984: ldp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 119988: ldp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 11998c: ldp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 119990: ldp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 119994: add sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(384)));
  /* 119998: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11999c: ret  */
  return;
L_1199a0:;
  /* 1199a0: ldur x8, [x29, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 1199a4: ldur x0, [x29, #-0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-88))));
  /* 1199a8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1199ac: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153456));
  fn1_142608(c);
  /* 1199b0: ldurb w8, [x29, #-0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 1199b4: tbz w8, #0, #0x119958 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119958;
L_1199b8:;
  /* 1199b8: ldur x8, [x29, #-0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 1199bc: ldur x0, [x29, #-0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1199c0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1199c4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153480));
  fn1_142608(c);
  /* 1199c8: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 1199cc: tbnz w8, #0, #0x119960 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_119960;
  /* 1199d0: b #0x119970 */
  goto L_119970;
L_1199d4:;
  /* 1199d4: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153496));
  fn1_fc3b8(c);
L_1199d8:;
  /* 1199d8: bl #0x142c08 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153500));
  fn1_142c08(c);
  /* 1199dc: b #0x1199f4 */
  goto L_1199f4;
  /* 1199e0: b #0x119a80 */
  goto L_119a80;
  /* 1199e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1199e8: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1199ec: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153520));
  fn1_d2a78(c);
  /* 1199f0: b #0x119a84 */
  goto L_119a84;
L_1199f4:;
  /* 1199f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1199f8: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 1199fc: tbz w8, #0, #0x119a44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119a44;
L_119a00:;
  /* 119a00: ldur x8, [x29, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 119a04: ldur x0, [x29, #-0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-88))));
  /* 119a08: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 119a0c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153552));
  fn1_142608(c);
  /* 119a10: ldurb w8, [x29, #-0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 119a14: tbz w8, #0, #0x119a4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119a4c;
L_119a18:;
  /* 119a18: ldur x8, [x29, #-0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 119a1c: ldur x0, [x29, #-0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 119a20: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 119a24: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153576));
  fn1_142608(c);
  /* 119a28: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 119a2c: tbz w8, #0, #0x119a84 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119a84;
  /* 119a30: b #0x119a54 */
  goto L_119a54;
  /* 119a34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 119a38: cbnz x24, #0x119a68 */
  if ((ARC_X_R(c, 24)) != 0) goto L_119a68;
  /* 119a3c: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 119a40: tbnz w8, #0, #0x119a00 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_119a00;
L_119a44:;
  /* 119a44: ldurb w8, [x29, #-0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 119a48: tbnz w8, #0, #0x119a18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_119a18;
L_119a4c:;
  /* 119a4c: ldurb w8, [x29, #-0x38] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 119a50: tbz w8, #0, #0x119a84 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119a84;
L_119a54:;
  /* 119a54: ldur x8, [x29, #-0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-56))));
  /* 119a58: ldur x0, [x29, #-0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 119a5c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 119a60: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153636));
  fn1_142608(c);
  /* 119a64: b #0x119a84 */
  goto L_119a84;
L_119a68:;
  /* 119a68: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 119a6c: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153648));
  fn1_142800(c);
  /* 119a70: ldurb w8, [x29, #-0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 119a74: tbz w8, #0, #0x119a44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_119a44;
  /* 119a78: b #0x119a00 */
  goto L_119a00;
  /* 119a7c: b #0x119a80 */
  goto L_119a80;
L_119a80:;
  /* 119a80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_119a84:;
  /* 119a84: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 119a88: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153676));
  fn1_143478(c);
  /* 119a8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 119a90: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1153684));
  fn1_9cc20(c);
}

void fn1_124b1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039126812));
  /* 124b1c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 124b20: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 124b24: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 124b28: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 124b2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 124b30: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124b34: mov w0, #0x138 */
  ARC_W_W(c, 0, UINT64_C(312));
  /* 124b38: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 124b3c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198912));
  fn1_1428f0(c);
  /* 124b40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 124b44: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 124b48: bl #0x11de78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198924));
  fn1_11de78(c);
  /* 124b4c: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 124b50: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124b54: str x19, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* 124b58: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198940));
  fn1_db2e0(c);
  /* 124b5c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 124b60: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 124b64: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 124b68: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124b6c: ret  */
  return;
  /* 124b70: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124b74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124b78: mov w1, #0x138 */
  ARC_W_W(c, 1, UINT64_C(312));
  /* 124b7c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198976));
  fn1_142608(c);
  /* 124b80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 124b84: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198984));
  fn1_9cc20(c);
}

void fn1_127984(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039138692));
  /* 127984: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127988: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12798c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 127990: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 127994: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127998: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12799c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1279a0: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 1279a4: b.eq #0x127a90 */
  if (ARC_COND(c, 0)) goto L_127a90;
  /* 1279a8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1279ac: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1279b0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1279b4: b #0x1279d4 */
  goto L_1279d4;
L_1279b8:;
  /* 1279b8: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1279bc: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1279c0: bl #0x1442a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210820));
  fn1_1442a0(c);
  /* 1279c4: cbz w0, #0x1279dc */
  if ((ARC_W_R(c, 0)) == 0) goto L_1279dc;
L_1279c8:;
  /* 1279c8: add x19, x19, #4 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1279cc: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1279d0: b.eq #0x127a90 */
  if (ARC_COND(c, 0)) goto L_127a90;
L_1279d4:;
  /* 1279d4: ldr w23, [x19] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 19)));
  /* 1279d8: tbnz w21, #0, #0x1279b8 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_1279b8;
L_1279dc:;
  /* 1279dc: tbz w21, #1, #0x1279f0 */
  if (((ARC_W_R(c, 21)) >> 1 & 1) == 0) goto L_1279f0;
  /* 1279e0: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1279e4: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1279e8: bl #0x1442b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210860));
  fn1_1442b8(c);
  /* 1279ec: cbnz w0, #0x1279c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1279c8;
L_1279f0:;
  /* 1279f0: tbz w21, #2, #0x127a04 */
  if (((ARC_W_R(c, 21)) >> 2 & 1) == 0) goto L_127a04;
  /* 1279f4: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1279f8: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1279fc: bl #0x1442d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210880));
  fn1_1442d0(c);
  /* 127a00: cbnz w0, #0x1279c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1279c8;
L_127a04:;
  /* 127a04: tbz w21, #3, #0x127a18 */
  if (((ARC_W_R(c, 21)) >> 3 & 1) == 0) goto L_127a18;
  /* 127a08: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127a0c: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127a10: bl #0x1442e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210900));
  fn1_1442e8(c);
  /* 127a14: cbnz w0, #0x1279c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1279c8;
L_127a18:;
  /* 127a18: tbz w21, #4, #0x127a2c */
  if (((ARC_W_R(c, 21)) >> 4 & 1) == 0) goto L_127a2c;
  /* 127a1c: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127a20: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127a24: bl #0x144288 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210920));
  fn1_144288(c);
  /* 127a28: cbnz w0, #0x1279c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1279c8;
L_127a2c:;
  /* 127a2c: tbz w21, #5, #0x127a40 */
  if (((ARC_W_R(c, 21)) >> 5 & 1) == 0) goto L_127a40;
  /* 127a30: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127a34: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127a38: bl #0x144300 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210940));
  fn1_144300(c);
  /* 127a3c: cbnz w0, #0x1279c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1279c8;
L_127a40:;
  /* 127a40: tbz w21, #6, #0x127a54 */
  if (((ARC_W_R(c, 21)) >> 6 & 1) == 0) goto L_127a54;
  /* 127a44: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127a48: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127a4c: bl #0x144318 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210960));
  fn1_144318(c);
  /* 127a50: cbnz w0, #0x1279c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1279c8;
L_127a54:;
  /* 127a54: tbz w21, #7, #0x127a68 */
  if (((ARC_W_R(c, 21)) >> 7 & 1) == 0) goto L_127a68;
  /* 127a58: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127a5c: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127a60: bl #0x144330 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1210980));
  fn1_144330(c);
  /* 127a64: cbnz w0, #0x1279c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1279c8;
L_127a68:;
  /* 127a68: tbz w21, #8, #0x127a7c */
  if (((ARC_W_R(c, 21)) >> 8 & 1) == 0) goto L_127a7c;
  /* 127a6c: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127a70: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127a74: bl #0x144348 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211000));
  fn1_144348(c);
  /* 127a78: cbnz w0, #0x1279c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1279c8;
L_127a7c:;
  /* 127a7c: tbz w21, #9, #0x127a90 */
  if (((ARC_W_R(c, 21)) >> 9 & 1) == 0) goto L_127a90;
  /* 127a80: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 127a84: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 127a88: bl #0x144360 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211020));
  fn1_144360(c);
  /* 127a8c: cbnz w0, #0x1279c8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1279c8;
L_127a90:;
  /* 127a90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127a94: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127a98: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127a9c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 127aa0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127aa4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127aa8: ret  */
  return;
}

void fn1_129bd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147472));
  /* 129bd0: bti c */
  /* bti: no architectural effect here */
  /* 129bd4: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 129bd8: ret  */
  return;
}

void fn1_12b2e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039153384));
  /* 12b2e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12b2ec: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12b2f0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12b2f4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12b2f8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12b2fc: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 12b300: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 12b304: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 12b308: ldr x6, [x0, #0x18] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b30c: ldr w7, [x0, #0x20] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12b310: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12b314: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12b318: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12b31c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12b320: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 12b324: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 12b328: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 12b32c: bl #0x12b350 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1225520));
  fn1_12b350(c);
  /* 12b330: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12b334: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12b338: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 12b33c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12b340: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12b344: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 12b348: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12b34c: ret  */
  return;
}

void fn1_12dc8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039164044));
  /* 12dc8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12dc90: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12dc94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12dc98: nop  */
  /* nop: no architectural effect here */
  /* 12dc9c: adr x8, #0x15de88 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433224)));
  /* 12dca0: ldarb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 12dca4: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12dca8: tbz w9, #0, #0x12dcbc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_12dcbc;
L_12dcac:;
  /* 12dcac: ldr x0, [x8, #0xe80] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3712))));
  /* 12dcb0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12dcb4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12dcb8: ret  */
  return;
L_12dcbc:;
  /* 12dcbc: nop  */
  /* nop: no architectural effect here */
  /* 12dcc0: adr x0, #0x15de88 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433224)));
  /* 12dcc4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236168));
  fn1_1424b8(c);
  /* 12dcc8: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12dccc: cbz w0, #0x12dcac */
  if ((ARC_W_R(c, 0)) == 0) goto L_12dcac;
  /* 12dcd0: bl #0x12dcf8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236180));
  fn1_12dcf8(c);
  /* 12dcd4: nop  */
  /* nop: no architectural effect here */
  /* 12dcd8: adr x9, #0x15e680 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1435264)));
  /* 12dcdc: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12dce0: nop  */
  /* nop: no architectural effect here */
  /* 12dce4: adr x0, #0x15de88 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433224)));
  /* 12dce8: str x9, [x8, #0xe80] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3712)), ARC_X_R(c, 9));
  /* 12dcec: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236208));
  fn1_1424d0(c);
  /* 12dcf0: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12dcf4: b #0x12dcac */
  goto L_12dcac;
}

void fn1_134a48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192136));
  /* 134a48: bti c */
  /* bti: no architectural effect here */
  /* 134a4c: add x0, x0, #0x3b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(944)));
  /* 134a50: ret  */
  return;
}

void fn1_13555c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039194972));
  /* 13555c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135560: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135564: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135568: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13556c: adrp x19, #0x15e000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 135570: add x19, x19, #0x660 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(1632)));
  /* 135574: mov x20, #-0x240 */
  ARC_X_W(c, 20, UINT64_C(18446744073709551040));
  /* 135578: b #0x135588 */
  goto L_135588;
L_13557c:;
  /* 13557c: adds x20, x20, #0x18 */
  ARC_X_W(c, 20, arc_add64(c, ARC_X_R(c, 20), UINT64_C(24), 0));
  /* 135580: sub x19, x19, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) - UINT64_C(24)));
  /* 135584: b.eq #0x1355a8 */
  if (ARC_COND(c, 0)) goto L_1355a8;
L_135588:;
  /* 135588: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13558c: tbz w8, #0, #0x13557c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13557c;
  /* 135590: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 135594: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 135598: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 13559c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 1355a0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267108));
  fn1_142608(c);
  /* 1355a4: b #0x13557c */
  goto L_13557c;
L_1355a8:;
  /* 1355a8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1355ac: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1355b0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1355b4: ret  */
  return;
}

void fn1_138434(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206964));
  /* 138434: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138438: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13843c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 138440: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138444: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138448: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13844c: ldr x8, [x8, #0xe58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3672))));
  /* 138450: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138454: add x10, x8, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 138458: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 13845c: stur x9, [x0, #-0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(-16)), ARC_X_R(c, 9));
  /* 138460: str x10, [x19, #0x68]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(104));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(104));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* 138464: str x8, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 138468: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279084));
  fn1_144558(c);
  /* 13846c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138470: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 138474: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138478: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13847c: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_13d4bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039227580));
  /* 13d4bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13d4c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13d4c4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13d4c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13d4cc: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* 13d4d0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13d4d4: tbnz w9, #0, #0x13d4ec */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_13d4ec;
  /* 13d4d8: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 13d4dc: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13d4e0: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 13d4e4: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 13d4e8: b #0x13d504 */
  goto L_13d504;
L_13d4ec:;
  /* 13d4ec: ldp x2, x8, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 13d4f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d4f4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13d4f8: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 13d4fc: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299712));
  fn1_da588(c);
  /* 13d500: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
L_13d504:;
  /* 13d504: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d508: bl #0x13b0f4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299724));
  fn1_13b0f4(c);
  /* 13d50c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13d510: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13d514: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13d518: ret  */
  return;
  /* 13d51c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13d520: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13d524: tbz w8, #0, #0x13d538 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d538;
  /* 13d528: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13d52c: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13d530: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13d534: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299768));
  fn1_142608(c);
L_13d538:;
  /* 13d538: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13d53c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1299776));
  fn1_9cc20(c);
}

void fn1_1425a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248296));
  /* 1425a8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1425ac: ldr x17, [x16, #0xf18] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3864))));
  /* 1425b0: add x16, x16, #0xf18 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3864)));
  /* 1425b4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1425b8: nop  */
  /* nop: no architectural effect here */
  /* 1425bc: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ba8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249832));
  /* 142ba8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142bac: ldr x17, [x16, #0x118] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(280))));
  /* 142bb0: add x16, x16, #0x118 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(280)));
  /* 142bb4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142bb8: nop  */
  /* nop: no architectural effect here */
  /* 142bbc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1431a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251368));
  /* 1431a8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1431ac: ldr x17, [x16, #0x318] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(792))));
  /* 1431b0: add x16, x16, #0x318 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(792)));
  /* 1431b4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1431b8: nop  */
  /* nop: no architectural effect here */
  /* 1431bc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1437a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252904));
  /* 1437a8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1437ac: ldr x17, [x16, #0x518] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1304))));
  /* 1437b0: add x16, x16, #0x518 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1304)));
  /* 1437b4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1437b8: nop  */
  /* nop: no architectural effect here */
  /* 1437bc: nop  */
  /* nop: no architectural effect here */
}

void fn1_143da8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254440));
  /* 143da8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143dac: ldr x17, [x16, #0x718] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1816))));
  /* 143db0: add x16, x16, #0x718 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1816)));
  /* 143db4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143db8: nop  */
  /* nop: no architectural effect here */
  /* 143dbc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1443a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255976));
  /* 1443a8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1443ac: ldr x17, [x16, #0x918] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2328))));
  /* 1443b0: add x16, x16, #0x918 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2328)));
  /* 1443b4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1443b8: nop  */
  /* nop: no architectural effect here */
  /* 1443bc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1449a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257512));
  /* 1449a8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1449ac: ldr x17, [x16, #0xb18] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2840))));
  /* 1449b0: add x16, x16, #0xb18 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2840)));
  /* 1449b4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1449b8: nop  */
  /* nop: no architectural effect here */
  /* 1449bc: nop  */
  /* nop: no architectural effect here */
}

