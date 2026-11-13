#include "lifted.h"

void fn1_9d0f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038571252));
  /* 9d0f4: bti c */
  /* bti: no architectural effect here */
  /* 9d0f8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 9d0fc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 9d100: ldr x16, [x8, #0x40] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 9d104: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_a16c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038589120));
  /* a16c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a16c4: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* a16c8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a16cc: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a16d0: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a16d4: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a16d8: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a16dc: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* a16e0: umulh x8, x0, x1 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 1)));
  /* a16e4: cmp xzr, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 8));
  /* a16e8: b.ne #0xa179c */
  if (ARC_COND(c, 1)) goto L_a179c;
  /* a16ec: mul x8, x0, x1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 1))));
  /* a16f0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a16f4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a16f8: mov x26, x2 */
  ARC_X_W(c, 26, ARC_X_R(c, 2));
  /* a16fc: adds x0, x8, x2 */
  ARC_X_W(c, 0, arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 2), 0));
  /* a1700: b.hs #0xa179c */
  if (ARC_COND(c, 2)) goto L_a179c;
  /* a1704: mov x19, x6 */
  ARC_X_W(c, 19, ARC_X_R(c, 6));
  /* a1708: mov x25, x4 */
  ARC_X_W(c, 25, ARC_X_R(c, 4));
  /* a170c: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* a1710: blr x5 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661268));
  arc_dispatch(c, ARC_X_R(c, 5));
  /* a1714: cbz x0, #0xa1774 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a1774;
  /* a1718: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a171c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* a1720: cbz x26, #0xa172c */
  if ((ARC_X_R(c, 26)) == 0) goto L_a172c;
  /* a1724: add x24, x23, x26 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) + ARC_X_R(c, 26)));
  /* a1728: stur x21, [x24, #-8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(-8)), ARC_X_R(c, 21));
L_a172c:;
  /* a172c: cbz x22, #0xa1778 */
  if ((ARC_X_R(c, 22)) == 0) goto L_a1778;
  /* a1730: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* a1734: stp x20, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a1738: stp x24, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a173c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a1740: strb w8, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 8));
  /* a1744: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* a1748: cbz x21, #0xa1778 */
  if ((ARC_X_R(c, 21)) == 0) goto L_a1778;
  /* a174c: mov x25, x24 */
  ARC_X_W(c, 25, ARC_X_R(c, 24));
L_a1750:;
  /* a1750: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* a1754: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661336));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* a1758: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* a175c: add x25, x25, x20 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + ARC_X_R(c, 20)));
  /* a1760: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a1764: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* a1768: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* a176c: b.lo #0xa1750 */
  if (ARC_COND(c, 3)) goto L_a1750;
  /* a1770: b #0xa1778 */
  goto L_a1778;
L_a1774:;
  /* a1774: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
L_a1778:;
  /* a1778: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a177c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1780: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1784: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a1788: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a178c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1790: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* a1794: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1798: ret  */
  return;
L_a179c:;
  /* a179c: bl #0xa1e84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661408));
  fn1_a1e84(c);
  /* a17a0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a17a4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* a17a8: bl #0xa1a0c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661420));
  fn1_a1a0c(c);
  /* a17ac: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a17b0: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661428));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* a17b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a17b8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661436));
  fn1_9cc20(c);
  /* a17bc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661440));
  fn1_a1454(c);
}

void fn1_a2800(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593536));
  /* a2800: bti c */
  /* bti: no architectural effect here */
  /* a2804: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a2808: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* a280c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a2810: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a2814: ret  */
  return;
}

void fn1_a8cd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038619352));
  /* a8cd8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8cdc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8ce0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a8ce4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8ce8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8cec: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* a8cf0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a8cf4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a8cf8: cbz x21, #0xa8d54 */
  if ((ARC_X_R(c, 21)) == 0) goto L_a8d54;
  /* a8cfc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* a8d00: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a8d04: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8d08: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* a8d0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691472));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a8d10: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* a8d14: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* a8d18: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* a8d1c: b.eq #0xa8d34 */
  if (ARC_COND(c, 0)) goto L_a8d34;
  /* a8d20: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* a8d24: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a8d28: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8d2c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a8d30: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691508));
  arc_dispatch(c, ARC_X_R(c, 8));
L_a8d34:;
  /* a8d34: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* a8d38: cbz x8, #0xa8d54 */
  if ((ARC_X_R(c, 8)) == 0) goto L_a8d54;
  /* a8d3c: ldrb w8, [x20, #0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(32))));
  /* a8d40: mov w9, #0x3a */
  ARC_W_W(c, 9, UINT64_C(58));
  /* a8d44: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* a8d48: mov w8, #0x2e */
  ARC_W_W(c, 8, UINT64_C(46));
  /* a8d4c: csel w21, w9, w8, ne */
  ARC_W_W(c, 21, (ARC_COND(c, 1) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* a8d50: b #0xa8d64 */
  goto L_a8d64;
L_a8d54:;
  /* a8d54: ldrb w8, [x20, #0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(32))));
  /* a8d58: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a8d5c: b.ne #0xa8da8 */
  if (ARC_COND(c, 1)) goto L_a8da8;
  /* a8d60: mov w21, #0x3a */
  ARC_W_W(c, 21, UINT64_C(58));
L_a8d64:;
  /* a8d64: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a8d68: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* a8d6c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a8d70: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a8d74: b.ls #0xa8da0 */
  if (ARC_COND(c, 9)) goto L_a8da0;
  /* a8d78: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* a8d7c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* a8d80: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a8d84: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* a8d88: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* a8d8c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691600));
  fn1_142878(c);
  /* a8d90: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* a8d94: cbz x0, #0xa8e08 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8e08;
  /* a8d98: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a8d9c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_a8da0:;
  /* a8da0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* a8da4: strb w21, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 21));
L_a8da8:;
  /* a8da8: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* a8dac: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8db0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* a8db4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a8db8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* a8dbc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691648));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a8dc0: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* a8dc4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* a8dc8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* a8dcc: b.ne #0xa8de4 */
  if (ARC_COND(c, 1)) goto L_a8de4;
  /* a8dd0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8dd4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a8dd8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8ddc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8de0: ret  */
  return;
L_a8de4:;
  /* a8de4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* a8de8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a8dec: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a8df0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8df4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8df8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a8dfc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8e00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8e04: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_a8e08:;
  /* a8e08: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691724));
  fn1_1427b8(c);
}

void fn1_b0230(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038649392));
  /* b0230: bti c */
  /* bti: no architectural effect here */
  /* b0234: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b0238: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b4cb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038668468));
  /* b4cb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b4cb8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b4cbc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b4cc0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b4cc4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b4cc8: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b4ccc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b4cd0: ldrb w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* b4cd4: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b4cd8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b4cdc: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* b4ce0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b4ce4: b.ne #0xb4dac */
  if (ARC_COND(c, 1)) goto L_b4dac;
  /* b4ce8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b4cec: b.ls #0xb4d18 */
  if (ARC_COND(c, 9)) goto L_b4d18;
  /* b4cf0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b4cf4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b4cf8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4cfc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4d00: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4d04: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740616));
  fn1_142878(c);
  /* b4d08: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4d0c: cbz x0, #0xb4ef0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ef0;
  /* b4d10: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4d14: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b4d18:;
  /* b4d18: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b4d1c: mov w9, #0x5b */
  ARC_W_W(c, 9, UINT64_C(91));
  /* b4d20: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4d24: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4d28: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b4d2c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4d30: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4d34: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4d38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740668));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4d3c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b4d40: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4d44: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4d48: b.eq #0xb4d60 */
  if (ARC_COND(c, 0)) goto L_b4d60;
  /* b4d4c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4d50: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4d54: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4d58: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4d5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740704));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b4d60:;
  /* b4d60: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b4d64: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4d68: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b4d6c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b4d70: b.ls #0xb4d9c */
  if (ARC_COND(c, 9)) goto L_b4d9c;
  /* b4d74: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b4d78: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b4d7c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4d80: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4d84: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4d88: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740748));
  fn1_142878(c);
  /* b4d8c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4d90: cbz x0, #0xb4ef8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ef8;
  /* b4d94: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4d98: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b4d9c:;
  /* b4d9c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b4da0: mov w9, #0x5d */
  ARC_W_W(c, 9, UINT64_C(93));
  /* b4da4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4da8: b #0xb4e24 */
  goto L_b4e24;
L_b4dac:;
  /* b4dac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b4db0: b.ls #0xb4ddc */
  if (ARC_COND(c, 9)) goto L_b4ddc;
  /* b4db4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b4db8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b4dbc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4dc0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4dc4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4dc8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740812));
  fn1_142878(c);
  /* b4dcc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4dd0: cbz x0, #0xb4ef4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4ef4;
  /* b4dd4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4dd8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b4ddc:;
  /* b4ddc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b4de0: mov w9, #0x2e */
  ARC_W_W(c, 9, UINT64_C(46));
  /* b4de4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4de8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b4dec: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b4df0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4df4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4df8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4dfc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740864));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4e00: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b4e04: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4e08: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4e0c: b.eq #0xb4e24 */
  if (ARC_COND(c, 0)) goto L_b4e24;
  /* b4e10: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4e14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4e18: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4e1c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4e20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740900));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b4e24:;
  /* b4e24: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b4e28: ldrb w8, [x21, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(8))));
  /* b4e2c: sub w8, w8, #0x51 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(81)));
  /* b4e30: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* b4e34: b.lo #0xb4e94 */
  if (ARC_COND(c, 3)) goto L_b4e94;
  /* b4e38: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b4e3c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4e40: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b4e44: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b4e48: b.ls #0xb4e70 */
  if (ARC_COND(c, 9)) goto L_b4e70;
  /* b4e4c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b4e50: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* b4e54: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4e58: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4e5c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4e60: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(740964));
  fn1_142878(c);
  /* b4e64: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4e68: cbz x0, #0xb4efc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b4efc;
  /* b4e6c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b4e70:;
  /* b4e70: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b4e74: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b4e78: mov w10, #0x3d20 */
  ARC_W_W(c, 10, UINT64_C(15648));
  /* b4e7c: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* b4e80: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b4e84: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4e88: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b4e8c: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b4e90: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b4e94:;
  /* b4e94: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4e98: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4e9c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4ea0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4ea4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741032));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4ea8: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b4eac: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4eb0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4eb4: b.ne #0xb4ecc */
  if (ARC_COND(c, 1)) goto L_b4ecc;
  /* b4eb8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4ebc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b4ec0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4ec4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b4ec8: ret  */
  return;
L_b4ecc:;
  /* b4ecc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4ed0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4ed4: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4ed8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4edc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4ee0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b4ee4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4ee8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b4eec: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b4ef0:;
  /* b4ef0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741108));
  fn1_1427b8(c);
L_b4ef4:;
  /* b4ef4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741112));
  fn1_1427b8(c);
L_b4ef8:;
  /* b4ef8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741116));
  fn1_1427b8(c);
L_b4efc:;
  /* b4efc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741120));
  fn1_1427b8(c);
}

void fn1_b7dd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038681048));
  /* b7dd8: bti c */
  /* bti: no architectural effect here */
  /* b7ddc: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* b7de0: b.eq #0xb7e68 */
  if (ARC_COND(c, 0)) goto L_b7e68;
  /* b7de4: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* b7de8: cmp w8, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(95));
  /* b7dec: b.ne #0xb7e40 */
  if (ARC_COND(c, 1)) goto L_b7e40;
  /* b7df0: add x8, x0, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* b7df4: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* b7df8: b.eq #0xb7e68 */
  if (ARC_COND(c, 0)) goto L_b7e68;
  /* b7dfc: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b7e00: sub w9, w8, #0x3a */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* b7e04: cmn w9, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(10), 0);
  /* b7e08: b.hs #0xb7e6c */
  if (ARC_COND(c, 2)) goto L_b7e6c;
  /* b7e0c: cmp w8, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(95));
  /* b7e10: b.ne #0xb7e68 */
  if (ARC_COND(c, 1)) goto L_b7e68;
  /* b7e14: add x8, x0, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(2)));
  /* b7e18: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* b7e1c: b.eq #0xb7e68 */
  if (ARC_COND(c, 0)) goto L_b7e68;
L_b7e20:;
  /* b7e20: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* b7e24: sub w10, w9, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(58)));
  /* b7e28: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* b7e2c: b.lo #0xb7e7c */
  if (ARC_COND(c, 3)) goto L_b7e7c;
  /* b7e30: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b7e34: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* b7e38: b.ne #0xb7e20 */
  if (ARC_COND(c, 1)) goto L_b7e20;
  /* b7e3c: b #0xb7e68 */
  goto L_b7e68;
L_b7e40:;
  /* b7e40: sub w8, w8, #0x3a */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(58)));
  /* b7e44: cmn w8, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(10), 0);
  /* b7e48: b.lo #0xb7e68 */
  if (ARC_COND(c, 3)) goto L_b7e68;
  /* b7e4c: add x8, x0, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(1)));
L_b7e50:;
  /* b7e50: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* b7e54: b.eq #0xb7e74 */
  if (ARC_COND(c, 0)) goto L_b7e74;
  /* b7e58: ldrb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* b7e5c: sub w9, w9, #0x3a */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - UINT64_C(58)));
  /* b7e60: cmn w9, #0xb */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(11), 0);
  /* b7e64: b.hi #0xb7e50 */
  if (ARC_COND(c, 8)) goto L_b7e50;
L_b7e68:;
  /* b7e68: ret  */
  return;
L_b7e6c:;
  /* b7e6c: add x0, x0, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2)));
  /* b7e70: ret  */
  return;
L_b7e74:;
  /* b7e74: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b7e78: ret  */
  return;
L_b7e7c:;
  /* b7e7c: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* b7e80: csinc x0, x0, x8, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 0)) : ((ARC_X_R(c, 8)) + 1)));
  /* b7e84: ret  */
  return;
}

void fn1_bb060(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038693984));
  /* bb060: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bb064: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bb068: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* bb06c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bb070: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bb074: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bb078: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bb07c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bb080: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bb084: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bb088: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bb08c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766096));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bb090: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* bb094: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bb098: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bb09c: b.eq #0xbb0b4 */
  if (ARC_COND(c, 0)) goto L_bb0b4;
  /* bb0a0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bb0a4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bb0a8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb0ac: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bb0b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766132));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bb0b4:;
  /* bb0b4: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bb0b8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb0bc: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb0c0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bb0c4: b.ls #0xbb0ec */
  if (ARC_COND(c, 9)) goto L_bb0ec;
  /* bb0c8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bb0cc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bb0d0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb0d4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb0d8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb0dc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766176));
  fn1_142878(c);
  /* bb0e0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb0e4: cbz x0, #0xbb1c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb1c0;
  /* bb0e8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb0ec:;
  /* bb0ec: mov w9, #0x3c */
  ARC_W_W(c, 9, UINT64_C(60));
  /* bb0f0: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bb0f4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb0f8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb0fc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bb100: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* bb104: cbz x21, #0xbb160 */
  if ((ARC_X_R(c, 21)) == 0) goto L_bb160;
  /* bb108: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bb10c: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* bb110: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* bb114: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb118: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bb11c: b.ls #0xbb144 */
  if (ARC_COND(c, 9)) goto L_bb144;
  /* bb120: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bb124: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* bb128: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bb12c: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bb130: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb134: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766264));
  fn1_142878(c);
  /* bb138: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb13c: cbz x0, #0xbb1c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb1c8;
  /* bb140: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb144:;
  /* bb144: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bb148: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bb14c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* bb150: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766292));
  fn1_1449d8(c);
  /* bb154: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb158: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* bb15c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bb160:;
  /* bb160: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bb164: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb168: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb16c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bb170: b.ls #0xbb198 */
  if (ARC_COND(c, 9)) goto L_bb198;
  /* bb174: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bb178: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bb17c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb180: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb184: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb188: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766348));
  fn1_142878(c);
  /* bb18c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb190: cbz x0, #0xbb1c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb1c4;
  /* bb194: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb198:;
  /* bb198: mov w9, #0x3e */
  ARC_W_W(c, 9, UINT64_C(62));
  /* bb19c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bb1a0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb1a4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb1a8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bb1ac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bb1b0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* bb1b4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bb1b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bb1bc: ret  */
  return;
L_bb1c0:;
  /* bb1c0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766404));
  fn1_1427b8(c);
L_bb1c4:;
  /* bb1c4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766408));
  fn1_1427b8(c);
L_bb1c8:;
  /* bb1c8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766412));
  fn1_1427b8(c);
}

void fn1_bd980(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704512));
  /* bd980: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bd984: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd988: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* bd98c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bd990: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bd994: add x8, x0, #0x8f */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(143)));
  /* bd998: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* bd99c: ands x19, x8, #-0x10 */
  { uint64_t _r = (uint64_t)(ARC_X_R(c, 8) & UINT64_C(18446744073709551600));
    arc_flags_logical64(c, _r);
    ARC_X_W(c, 19, _r); }
  /* bd9a0: csinc x20, x19, xzr, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 19)) : ((ARC_X_R(c, 31)) + 1)));
  /* bd9a4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* bd9a8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* bd9ac: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* bd9b0: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776628));
  fn1_142818(c);
  /* bd9b4: ldr x21, [x29, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* bd9b8: cbnz x21, #0xbd9cc */
  if ((ARC_X_R(c, 21)) != 0) goto L_bd9cc;
  /* bd9bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bd9c0: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776644));
  fn1_a24dc(c);
  /* bd9c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bd9c8: cbz x0, #0xbd9f4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bd9f4;
L_bd9cc:;
  /* bd9cc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bd9d0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* bd9d4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* bd9d8: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776668));
  fn1_144a20(c);
  /* bd9dc: add x0, x21, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(128)));
  /* bd9e0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bd9e4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* bd9e8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd9ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd9f0: ret  */
  return;
L_bd9f4:;
  /* bd9f4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776696));
  fn1_142488(c);
  /* bd9f8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776700));
  fn1_a1454(c);
}

void fn1_d05e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038781412));
  /* d05e4: bti c */
  /* bti: no architectural effect here */
  /* d05e8: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d05ec: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d05f0: b.gt #0xd0600 */
  if (ARC_COND(c, 12)) goto L_d0600;
  /* d05f4: b.hs #0xd06f0 */
  if (ARC_COND(c, 2)) goto L_d06f0;
L_d05f8:;
  /* d05f8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d05fc: ret  */
  return;
L_d0600:;
  /* d0600: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d0604: b.eq #0xd0718 */
  if (ARC_COND(c, 0)) goto L_d0718;
  /* d0608: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d060c: b.eq #0xd0828 */
  if (ARC_COND(c, 0)) goto L_d0828;
  /* d0610: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d0614: b.ne #0xd0768 */
  if (ARC_COND(c, 1)) goto L_d0768;
  /* d0618: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d061c: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* d0620: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0624: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0628: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d062c: strb w10, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 10));
  /* d0630: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0634: ldrb w8, [x0, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* d0638: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* d063c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0640: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0644: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0648: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d064c: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* d0650: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0654: ldurb w8, [x1, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* d0658: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d065c: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0660: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0664: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d0668: ldrb w10, [x0, #3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* d066c: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0670: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d0674: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d0678: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d067c: strb w9, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d0680: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* d0684: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* d0688: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* d068c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0690: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0694: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0698: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d069c: ldrb w10, [x0, #3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* d06a0: ldrb w11, [x0] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 0)));
  /* d06a4: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* d06a8: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* d06ac: csel w12, w10, w11, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* d06b0: csel w10, w10, w11, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* d06b4: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* d06b8: csel w11, w11, w9, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* d06bc: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* d06c0: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d06c4: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d06c8: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d06cc: strb w11, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 11));
  /* d06d0: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* d06d4: strb w10, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 10));
  /* d06d8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d06dc: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* d06e0: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* d06e4: strb w9, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d06e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d06ec: ret  */
  return;
L_d06f0:;
  /* d06f0: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d06f4: b.ne #0xd0768 */
  if (ARC_COND(c, 1)) goto L_d0768;
  /* d06f8: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* d06fc: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d0700: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d0704: b.hs #0xd05f8 */
  if (ARC_COND(c, 2)) goto L_d05f8;
  /* d0708: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d070c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0710: sturb w8, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 8));
  /* d0714: ret  */
  return;
L_d0718:;
  /* d0718: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* d071c: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* d0720: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0724: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0728: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d072c: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d0730: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* d0734: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* d0738: ldurb w8, [x1, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* d073c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0740: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0744: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0748: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d074c: ldrb w10, [x0, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* d0750: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* d0754: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d0758: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d075c: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d0760: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d0764: b #0xd08a0 */
  goto L_d08a0;
L_d0768:;
  /* d0768: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d076c: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* d0770: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* d0774: ldrb w9, [x11, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(2));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(2));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* d0778: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d077c: csel w12, w8, w9, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0780: csel w9, w8, w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0784: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* d0788: csel w8, w12, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d078c: csel w13, w12, w10, lo */
  ARC_W_W(c, 13, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d0790: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d0794: strb w8, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* d0798: add x8, x0, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(3)));
  /* d079c: csel w10, w10, w9, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d07a0: csel w9, w9, w13, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 13)));
  /* d07a4: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d07a8: strb w10, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 10));
  /* d07ac: strb w9, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 9));
  /* d07b0: b.eq #0xd05f8 */
  if (ARC_COND(c, 0)) goto L_d05f8;
  /* d07b4: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d07b8: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* d07bc: b #0xd07ec */
  goto L_d07ec;
L_d07c0:;
  /* d07c0: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d07c4:;
  /* d07c4: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d07c8: strb w12, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 12));
  /* d07cc: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d07d0: b.eq #0xd08ac */
  if (ARC_COND(c, 0)) goto L_d08ac;
L_d07d4:;
  /* d07d4: add x12, x8, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* d07d8: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d07dc: add x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* d07e0: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d07e4: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d07e8: b.eq #0xd05f8 */
  if (ARC_COND(c, 0)) goto L_d05f8;
L_d07ec:;
  /* d07ec: ldrb w12, [x8] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 8)));
  /* d07f0: ldrb w11, [x11] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 11)));
  /* d07f4: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d07f8: b.hs #0xd07d4 */
  if (ARC_COND(c, 2)) goto L_d07d4;
  /* d07fc: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d0800:;
  /* d0800: subs x13, x14, #1 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1)));
  /* d0804: strb w11, [x0, x14] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_W_R(c, 11));
  /* d0808: b.eq #0xd07c0 */
  if (ARC_COND(c, 0)) goto L_d07c0;
  /* d080c: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d0810: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d0814: ldurb w11, [x11, #-2] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 11) + INT64_C(-2))));
  /* d0818: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d081c: b.lo #0xd0800 */
  if (ARC_COND(c, 3)) goto L_d0800;
  /* d0820: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d0824: b #0xd07c4 */
  goto L_d07c4;
L_d0828:;
  /* d0828: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d082c: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0830: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0834: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0838: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d083c: strb w10, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* d0840: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0844: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* d0848: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* d084c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0850: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0854: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0858: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d085c: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* d0860: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0864: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0868: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d086c: strb w9, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 9));
  /* d0870: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0874: ldrb w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0878: ldurb w9, [x1, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 1) + INT64_C(-1))));
  /* d087c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0880: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0884: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0888: sturb w10, [x1, #-1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(-1)), ARC_W_R(c, 10));
  /* d088c: ldrb w10, [x0, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* d0890: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0894: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0898: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d089c: strb w9, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
L_d08a0:;
  /* d08a0: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* d08a4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d08a8: ret  */
  return;
L_d08ac:;
  /* d08ac: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* d08b0: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d08b4: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d08b8: ret  */
  return;
}

void fn1_d77d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810584));
  /* d77d8: bti c */
  /* bti: no architectural effect here */
  /* d77dc: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* d77e0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_db68c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826636));
  /* db68c: bti c */
  /* bti: no architectural effect here */
  /* db690: brk #1 */
  arc_trap(c, "brk");
}

void fn1_dfa54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038843988));
  /* dfa54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dfa58: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dfa5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dfa60: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dfa64: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* dfa68: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* dfa6c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dfa70: sub x1, x9, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* dfa74: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* dfa78: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* dfa7c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916096));
  fn1_a2030(c);
  /* dfa80: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dfa84: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dfa88: ret  */
  return;
}

void fn1_e23c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854592));
  /* e23c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e23c4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e23c8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e23cc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e23d0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e23d4: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e23d8: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e23dc: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e23e0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e23e4: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e23e8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e23ec: add x8, x0, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e23f0: csel x21, x8, x11, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* e23f4: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e23f8: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* e23fc: csinc x8, x9, x2, hs */
  ARC_X_W(c, 8, (ARC_COND(c, 2) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 2)) + 1)));
  /* e2400: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* e2404: sub x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(4)));
L_e2408:;
  /* e2408: cmn x8, #4 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(4), 0);
  /* e240c: b.eq #0xe2438 */
  if (ARC_COND(c, 0)) goto L_e2438;
  /* e2410: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* e2414: cbz x19, #0xe2430 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e2430;
  /* e2418: ldr w1, [x21, x22] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 21) + ARC_X_R(c, 22))));
  /* e241c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e2420: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e2424: bl #0x142e48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(926760));
  fn1_142e48(c);
  /* e2428: sub x8, x22, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - UINT64_C(4)));
  /* e242c: cbnz x0, #0xe2408 */
  if ((ARC_X_R(c, 0)) != 0) goto L_e2408;
L_e2430:;
  /* e2430: asr x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* e2434: b #0xe243c */
  goto L_e243c;
L_e2438:;
  /* e2438: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
L_e243c:;
  /* e243c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2440: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2444: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2448: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e244c: ret  */
  return;
}

void fn1_e5890(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038868112));
  /* e5890: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e5894: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* e5898: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e589c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e58a0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e58a4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* e58a8: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* e58ac: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* e58b0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e58b4: add x20, x0, #0xb */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(11)));
  /* e58b8: tbz w1, #0x1f, #0xe58cc */
  if (((ARC_W_R(c, 1)) >> 31 & 1) == 0) goto L_e58cc;
  /* e58bc: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
  /* e58c0: orr x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | UINT64_C(1)));
  /* e58c4: neg w1, w1 */
  ARC_W_W(c, 1, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 1))));
  /* e58c8: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
L_e58cc:;
  /* e58cc: sub x8, x20, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 0)));
  /* e58d0: cmp x8, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(9));
  /* e58d4: b.gt #0xe5918 */
  if (ARC_COND(c, 12)) goto L_e5918;
  /* e58d8: orr w9, w1, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) | UINT64_C(1)));
  /* e58dc: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* e58e0: clz w9, w9 */
  ARC_W_W(c, 9, arc_clz32(ARC_W_R(c, 9)));
  /* e58e4: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* e58e8: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* e58ec: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* e58f0: nop  */
  /* nop: no architectural effect here */
  /* e58f4: adr x10, #0x54634 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(345652)));
  /* e58f8: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* e58fc: ldr w10, [x10, w9, uxtw #2] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 2))));
  /* e5900: cmp w1, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 10));
  /* e5904: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* e5908: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* e590c: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* e5910: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* e5914: b.lt #0xe5920 */
  if (ARC_COND(c, 11)) goto L_e5920;
L_e5918:;
  /* e5918: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940316));
  fn1_d4eb8(c);
  /* e591c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_e5920:;
  /* e5920: add x8, sp, #4 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(4)));
  /* e5924: sub x21, x20, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e5928: cmn x21, #8 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(8), 0);
  /* e592c: b.hs #0xe59a4 */
  if (ARC_COND(c, 2)) goto L_e59a4;
  /* e5930: cmp x21, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(22));
  /* e5934: b.hi #0xe5944 */
  if (ARC_COND(c, 8)) goto L_e5944;
  /* e5938: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e593c: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e5940: b #0xe596c */
  goto L_e596c;
L_e5944:;
  /* e5944: orr x8, x21, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(7)));
  /* e5948: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e594c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e5950: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e5954: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e5958: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940380));
  fn1_1428f0(c);
  /* e595c: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e5960: stp x21, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e5964: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e5968: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e596c:;
  /* e596c: add x8, sp, #4 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(4)));
  /* e5970: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* e5974: b.eq #0xe5988 */
  if (ARC_COND(c, 0)) goto L_e5988;
  /* e5978: add x1, sp, #4 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(4)));
  /* e597c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e5980: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* e5984: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940424));
  fn1_1449d8(c);
L_e5988:;
  /* e5988: strb wzr, [x19, x21] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* e598c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e5990: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e5994: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e5998: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* e599c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e59a0: ret  */
  return;
L_e59a4:;
  /* e59a4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940456));
  fn1_d7d54(c);
}

void fn1_e94dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038883548));
  /* e94dc: bti c */
  /* bti: no architectural effect here */
  /* e94e0: cbz x0, #0xe9528 */
  if ((ARC_X_R(c, 0)) == 0) goto L_e9528;
  /* e94e4: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e94e8: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* e94ec: cbz x8, #0xe9520 */
  if ((ARC_X_R(c, 8)) == 0) goto L_e9520;
  /* e94f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e94f4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e94f8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e94fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9500: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e9504: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e9508: mov w1, #0x40 */
  ARC_W_W(c, 1, UINT64_C(64));
  /* e950c: bl #0x142968 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955664));
  fn1_142968(c);
  /* e9510: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e9514: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e9518: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e951c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_e9520:;
  /* e9520: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* e9524: b #0x142608 */
  fn1_142608(c); return;
L_e9528:;
  /* e9528: ret  */
  return;
}

void fn1_eb3c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038891456));
  /* eb3c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb3c4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb3c8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb3cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb3d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb3d4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963544));
  fn1_142518(c);
  /* eb3d8: cbnz w0, #0xeb438 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb438;
  /* eb3dc: ldr w8, [x19, #0x88] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb3e0: mov w9, #0x7fffffff */
  ARC_W_W(c, 9, UINT64_C(2147483647));
  /* eb3e4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* eb3e8: b.lo #0xeb40c */
  if (ARC_COND(c, 3)) goto L_eb40c;
  /* eb3ec: mov w20, #0x7ffffffe */
  ARC_W_W(c, 20, UINT64_C(2147483646));
L_eb3f0:;
  /* eb3f0: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb3f4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eb3f8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963580));
  fn1_142530(c);
  /* eb3fc: cbnz w0, #0xeb42c */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb42c;
  /* eb400: ldr w8, [x19, #0x88] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb404: cmp w8, w20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 20));
  /* eb408: b.hi #0xeb3f0 */
  if (ARC_COND(c, 8)) goto L_eb3f0;
L_eb40c:;
  /* eb40c: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* eb410: str w8, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 8));
  /* eb414: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb418: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963612));
  fn1_142560(c);
  /* eb41c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb420: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb424: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb428: ret  */
  return;
L_eb42c:;
  /* eb42c: nop  */
  /* nop: no architectural effect here */
  /* eb430: adr x1, #0x50514 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328980)));
  /* eb434: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963640));
  fn1_142a40(c);
L_eb438:;
  /* eb438: nop  */
  /* nop: no architectural effect here */
  /* eb43c: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb440: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963652));
  fn1_142a40(c);
  /* eb444: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963656));
  fn1_a1454(c);
  /* eb448: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963660));
  fn1_a1454(c);
  /* eb44c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963664));
  fn1_a1454(c);
}

void fn1_ed224(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899236));
  /* ed224: bti c */
  /* bti: no architectural effect here */
  /* ed228: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed22c: ldr x16, [x8, #0x30] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ed230: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f0024(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038911012));
  /* f0024: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0028: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f002c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f0030: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f0034: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f0038: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f003c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f0040: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f0044: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0048: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f004c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f0050: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f0054: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f0058: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f005c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f0060: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* f0064: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983144));
  fn1_1435f8(c);
  /* f0068: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f006c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f0070: b.ne #0xf018c */
  if (ARC_COND(c, 1)) goto L_f018c;
  /* f0074: and w22, w22, #0xff */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) & UINT64_C(255)));
  /* f0078: add x23, x19, #0x28 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* f007c: sub x24, x20, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* f0080: mov x25, #0x7fffffffffffffff */
  ARC_X_W(c, 25, UINT64_C(9223372036854775807));
L_f0084:;
  /* f0084: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0088: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f008c: ldr x0, [x23, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + ARC_X_R(c, 8))));
  /* f0090: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f0094: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f0098: b.eq #0xf00a4 */
  if (ARC_COND(c, 0)) goto L_f00a4;
  /* f009c: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* f00a0: b #0xf00b8 */
  goto L_f00b8;
L_f00a4:;
  /* f00a4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f00a8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f00ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983216));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f00b0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f00b4: b.eq #0xf0160 */
  if (ARC_COND(c, 0)) goto L_f0160;
L_f00b8:;
  /* f00b8: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* f00bc: cmp w22, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 22), ARC_W_R(c, 8));
  /* f00c0: b.eq #0xf0128 */
  if (ARC_COND(c, 0)) goto L_f0128;
  /* f00c4: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f00c8: cmp x9, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 24));
  /* f00cc: b.ge #0xf0150 */
  if (ARC_COND(c, 10)) goto L_f0150;
  /* f00d0: mov x26, x21 */
  ARC_X_W(c, 26, ARC_X_R(c, 21));
  /* f00d4: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f00d8: strb w8, [x26], #1 */
  { const uint64_t _a = ARC_X_R(c, 26);
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* f00dc: ldur x8, [x9, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f00e0: ldr x0, [x23, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + ARC_X_R(c, 8))));
  /* f00e4: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f00e8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f00ec: b.eq #0xf00fc */
  if (ARC_COND(c, 0)) goto L_f00fc;
  /* f00f0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f00f4: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* f00f8: b #0xf0108 */
  goto L_f0108;
L_f00fc:;
  /* f00fc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0100: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f0104: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983304));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f0108:;
  /* f0108: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f010c: mov x21, x26 */
  ARC_X_W(c, 21, ARC_X_R(c, 26));
  /* f0110: cmp x8, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 25));
  /* f0114: b.eq #0xf0084 */
  if (ARC_COND(c, 0)) goto L_f0084;
  /* f0118: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f011c: mov x21, x26 */
  ARC_X_W(c, 21, ARC_X_R(c, 26));
  /* f0120: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f0124: b #0xf0084 */
  goto L_f0084;
L_f0128:;
  /* f0128: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f012c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0130: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0134: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0138: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f013c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f0140: b.eq #0xf0170 */
  if (ARC_COND(c, 0)) goto L_f0170;
  /* f0144: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f0148: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* f014c: b #0xf017c */
  goto L_f017c;
L_f0150:;
  /* f0150: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* f0154: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f0158: b.ge #0xf0198 */
  if (ARC_COND(c, 10)) goto L_f0198;
  /* f015c: b #0xf019c */
  goto L_f019c;
L_f0160:;
  /* f0160: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* f0164: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f0168: b.ge #0xf0198 */
  if (ARC_COND(c, 10)) goto L_f0198;
  /* f016c: b #0xf019c */
  goto L_f019c;
L_f0170:;
  /* f0170: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0174: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f0178: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983420));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f017c:;
  /* f017c: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f0180: mov x8, #0x7fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(9223372036854775807));
  /* f0184: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f0188: b.ne #0xf01fc */
  if (ARC_COND(c, 1)) goto L_f01fc;
L_f018c:;
  /* f018c: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f0190: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f0194: b.lt #0xf019c */
  if (ARC_COND(c, 11)) goto L_f019c;
L_f0198:;
  /* f0198: strb wzr, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 31));
L_f019c:;
  /* f019c: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f01a0: orr w12, w8, #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* f01a4: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f01a8: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f01ac: csel w8, w12, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 8)));
  /* f01b0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f01b4: ldr x11, [x9, #0x28] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f01b8: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* f01bc: ldp w10, w11, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f01c0: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* f01c4: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f01c8: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* f01cc: tst w8, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 11)));
  /* f01d0: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f01d4: b.ne #0xf0214 */
  if (ARC_COND(c, 1)) goto L_f0214;
  /* f01d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f01dc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f01e0: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f01e4: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f01e8: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f01ec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f01f0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f01f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f01f8: ret  */
  return;
L_f01fc:;
  /* f01fc: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f0200: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* f0204: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* f0208: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f020c: b.ge #0xf0198 */
  if (ARC_COND(c, 10)) goto L_f0198;
  /* f0210: b #0xf019c */
  goto L_f019c;
L_f0214:;
  /* f0214: nop  */
  /* nop: no architectural effect here */
  /* f0218: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f021c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983584));
  fn1_ec720(c);
  /* f0220: b #0xf022c */
  goto L_f022c;
  /* f0224: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* f0228: b #0xf022c */
  goto L_f022c;
L_f022c:;
  /* f022c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983600));
  fn1_142548(c);
  /* f0230: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0234: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0238: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f023c: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0240: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f0244: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0248: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f024c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0250: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f0254: tbnz w8, #0, #0xf026c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f026c;
  /* f0258: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983644));
  fn1_142980(c);
  /* f025c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f0260: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f0264: b.ge #0xf0198 */
  if (ARC_COND(c, 10)) goto L_f0198;
  /* f0268: b #0xf019c */
  goto L_f019c;
L_f026c:;
  /* f026c: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f0270: b.lt #0xf0278 */
  if (ARC_COND(c, 11)) goto L_f0278;
  /* f0274: strb wzr, [x21] */
  arc_st8(ARC_X_R(c, 21), ARC_W_R(c, 31));
L_f0278:;
  /* f0278: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983676));
  fn1_1429b0(c);
  /* f027c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0280: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983684));
  fn1_142980(c);
  /* f0284: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0288: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983692));
  fn1_9cc20(c);
  /* f028c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983696));
  fn1_a1454(c);
}

void fn1_f3c48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926408));
  /* f3c48: bti c */
  /* bti: no architectural effect here */
  /* f3c4c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3c50: ldr x16, [x8, #0x30] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f3c54: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f6a48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038938184));
  /* f6a48: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f6a4c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f6a50: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6a54: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f6a58: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f6a5c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f6a60: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f6a64: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f6a68: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6a6c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f6a70: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f6a74: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f6a78: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f6a7c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f6a80: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f6a84: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* f6a88: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010316));
  fn1_143670(c);
  /* f6a8c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f6a90: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f6a94: b.ne #0xf6ba8 */
  if (ARC_COND(c, 1)) goto L_f6ba8;
  /* f6a98: add x23, x19, #0x28 */
  ARC_X_W(c, 23, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* f6a9c: sub x24, x20, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* f6aa0: mov x25, #0x7fffffffffffffff */
  ARC_X_W(c, 25, UINT64_C(9223372036854775807));
  /* f6aa4: b #0xf6abc */
  goto L_f6abc;
L_f6aa8:;
  /* f6aa8: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* f6aac: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
L_f6ab0:;
  /* f6ab0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f6ab4: mov x21, x26 */
  ARC_X_W(c, 21, ARC_X_R(c, 26));
  /* f6ab8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_f6abc:;
  /* f6abc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6ac0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6ac4: ldr x0, [x23, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + ARC_X_R(c, 8))));
  /* f6ac8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f6acc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f6ad0: b.eq #0xf6adc */
  if (ARC_COND(c, 0)) goto L_f6adc;
  /* f6ad4: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* f6ad8: b #0xf6ae8 */
  goto L_f6ae8;
L_f6adc:;
  /* f6adc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f6ae0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f6ae4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010408));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f6ae8:;
  /* f6ae8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f6aec: b.eq #0xf6b44 */
  if (ARC_COND(c, 0)) goto L_f6b44;
  /* f6af0: cmp w0, w22 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 22));
  /* f6af4: b.eq #0xf6b54 */
  if (ARC_COND(c, 0)) goto L_f6b54;
  /* f6af8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6afc: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* f6b00: b.ge #0xf6b7c */
  if (ARC_COND(c, 10)) goto L_f6b7c;
  /* f6b04: mov x26, x21 */
  ARC_X_W(c, 26, ARC_X_R(c, 21));
  /* f6b08: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f6b0c: str w0, [x26], #4 */
  { const uint64_t _a = ARC_X_R(c, 26);
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* f6b10: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f6b14: ldr x0, [x23, x9] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + ARC_X_R(c, 9))));
  /* f6b18: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f6b1c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* f6b20: b.ne #0xf6aa8 */
  if (ARC_COND(c, 1)) goto L_f6aa8;
  /* f6b24: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f6b28: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f6b2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010480));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f6b30: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6b34: mov x21, x26 */
  ARC_X_W(c, 21, ARC_X_R(c, 26));
  /* f6b38: cmp x8, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 25));
  /* f6b3c: b.eq #0xf6abc */
  if (ARC_COND(c, 0)) goto L_f6abc;
  /* f6b40: b #0xf6ab0 */
  goto L_f6ab0;
L_f6b44:;
  /* f6b44: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* f6b48: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f6b4c: b.ge #0xf6bb4 */
  if (ARC_COND(c, 10)) goto L_f6bb4;
  /* f6b50: b #0xf6bb8 */
  goto L_f6bb8;
L_f6b54:;
  /* f6b54: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6b58: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6b5c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6b60: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f6b64: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f6b68: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f6b6c: b.eq #0xf6b8c */
  if (ARC_COND(c, 0)) goto L_f6b8c;
  /* f6b70: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* f6b74: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* f6b78: b #0xf6b98 */
  goto L_f6b98;
L_f6b7c:;
  /* f6b7c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* f6b80: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f6b84: b.ge #0xf6bb4 */
  if (ARC_COND(c, 10)) goto L_f6bb4;
  /* f6b88: b #0xf6bb8 */
  goto L_f6bb8;
L_f6b8c:;
  /* f6b8c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f6b90: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f6b94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010584));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f6b98:;
  /* f6b98: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6b9c: mov x8, #0x7fffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(9223372036854775807));
  /* f6ba0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f6ba4: b.ne #0xf6c18 */
  if (ARC_COND(c, 1)) goto L_f6c18;
L_f6ba8:;
  /* f6ba8: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f6bac: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f6bb0: b.lt #0xf6bb8 */
  if (ARC_COND(c, 11)) goto L_f6bb8;
L_f6bb4:;
  /* f6bb4: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
L_f6bb8:;
  /* f6bb8: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f6bbc: orr w12, w8, #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* f6bc0: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f6bc4: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f6bc8: csel w8, w12, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 8)));
  /* f6bcc: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f6bd0: ldr x11, [x9, #0x28] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f6bd4: cmp x11, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(0));
  /* f6bd8: ldp w10, w11, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f6bdc: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* f6be0: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f6be4: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* f6be8: tst w8, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 11)));
  /* f6bec: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f6bf0: b.ne #0xf6c30 */
  if (ARC_COND(c, 1)) goto L_f6c30;
  /* f6bf4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6bf8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6bfc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f6c00: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f6c04: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f6c08: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6c0c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f6c10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f6c14: ret  */
  return;
L_f6c18:;
  /* f6c18: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f6c1c: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* f6c20: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* f6c24: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f6c28: b.ge #0xf6bb4 */
  if (ARC_COND(c, 10)) goto L_f6bb4;
  /* f6c2c: b #0xf6bb8 */
  goto L_f6bb8;
L_f6c30:;
  /* f6c30: nop  */
  /* nop: no architectural effect here */
  /* f6c34: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f6c38: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010748));
  fn1_ec720(c);
  /* f6c3c: b #0xf6c48 */
  goto L_f6c48;
  /* f6c40: add x21, x21, #4 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* f6c44: b #0xf6c48 */
  goto L_f6c48;
L_f6c48:;
  /* f6c48: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010764));
  fn1_142548(c);
  /* f6c4c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6c50: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6c54: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f6c58: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f6c5c: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f6c60: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f6c64: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6c68: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6c6c: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f6c70: tbnz w8, #0, #0xf6c88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f6c88;
  /* f6c74: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010808));
  fn1_142980(c);
  /* f6c78: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f6c7c: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f6c80: b.ge #0xf6bb4 */
  if (ARC_COND(c, 10)) goto L_f6bb4;
  /* f6c84: b #0xf6bb8 */
  goto L_f6bb8;
L_f6c88:;
  /* f6c88: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* f6c8c: b.lt #0xf6c94 */
  if (ARC_COND(c, 11)) goto L_f6c94;
  /* f6c90: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
L_f6c94:;
  /* f6c94: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010840));
  fn1_1429b0(c);
  /* f6c98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6c9c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010848));
  fn1_142980(c);
  /* f6ca0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6ca4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010856));
  fn1_9cc20(c);
  /* f6ca8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010860));
  fn1_a1454(c);
}

void fn1_fbca4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038959268));
  /* fbca4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fbca8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fbcac: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fbcb0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fbcb4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fbcb8: ldr x20, [x0, #0x78] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* fbcbc: cbz x20, #0xfbd04 */
  if ((ARC_X_R(c, 20)) == 0) goto L_fbd04;
  /* fbcc0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fbcc4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fbcc8: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* fbccc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031376));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fbcd0: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* fbcd4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fbcd8: bl #0x143700 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031388));
  fn1_143700(c);
  /* fbcdc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fbce0: str xzr, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 31));
  /* fbce4: orr w9, w0, w21 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) | ARC_W_R(c, 21)));
  /* fbce8: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* fbcec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fbcf0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* fbcf4: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* fbcf8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* fbcfc: csel x20, x19, xzr, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 31)));
  /* fbd00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031428));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fbd04:;
  /* fbd04: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fbd08: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fbd0c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fbd10: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fbd14: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fbd18: ret  */
  return;
  /* fbd1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fbd20: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fbd24: bl #0x143700 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031464));
  fn1_143700(c);
  /* fbd28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fbd2c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031472));
  fn1_9cc20(c);
}

void fn1_ff0fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038972668));
  /* ff0fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff100: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ff104: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff108: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ff10c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ff110: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ff114: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ff118: add x22, sp, #8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(8)));
L_ff11c:;
  /* ff11c: ldp x0, x1, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* ff120: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* ff124: add x3, x22, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* ff128: mov x4, sp */
  ARC_X_W(c, 4, (c)->sp);
  /* ff12c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ff130: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ff134: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044792));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ff138: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* ff13c: ldr x3, [x19, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* ff140: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* ff144: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ff148: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* ff14c: sub x21, x8, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - ARC_X_R(c, 22)));
  /* ff150: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ff154: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044824));
  fn1_1427d0(c);
  /* ff158: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* ff15c: b.ne #0xff170 */
  if (ARC_COND(c, 1)) goto L_ff170;
  /* ff160: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* ff164: b.eq #0xff11c */
  if (ARC_COND(c, 0)) goto L_ff11c;
  /* ff168: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* ff16c: b.ne #0xff178 */
  if (ARC_COND(c, 1)) goto L_ff178;
L_ff170:;
  /* ff170: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* ff174: b #0xff188 */
  goto L_ff188;
L_ff178:;
  /* ff178: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* ff17c: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1044864));
  fn1_143730(c);
  /* ff180: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* ff184: csetm w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? (uint32_t)~(uint32_t)0 : 0));
L_ff188:;
  /* ff188: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ff18c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ff190: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff194: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ff198: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff19c: ret  */
  return;
}

void fn1_10caf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039028464));
  /* 10caf0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10caf4: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* 10caf8: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10cafc: stp x28, x27, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10cb00: stp x26, x25, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10cb04: stp x24, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10cb08: stp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10cb0c: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10cb10: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* 10cb14: nop  */
  /* nop: no architectural effect here */
  /* 10cb18: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10cb1c: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10cb20: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10cb24: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10cb28: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10cb2c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10cb30: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10cb34: tbz w8, #0, #0x10cd48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10cd48;
L_10cb38:;
  /* 10cb38: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10cb3c: nop  */
  /* nop: no architectural effect here */
  /* 10cb40: adr x3, #0x50087 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327815)));
  /* 10cb44: sub x0, x29, #0x2c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(44)));
  /* 10cb48: mov w1, #0x14 */
  ARC_W_W(c, 1, UINT64_C(20));
  /* 10cb4c: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10cb50: sub x22, x29, #0x2c */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(44)));
  /* 10cb54: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100632));
  fn1_136860(c);
  /* 10cb58: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10cb5c: sxtw x25, w0 */
  ARC_X_W(c, 25, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 10cb60: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10cb64: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10cb68: add x22, x22, x25 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ARC_X_R(c, 25)));
  /* 10cb6c: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10cb70: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 10cb74: b.eq #0x10cbd0 */
  if (ARC_COND(c, 0)) goto L_10cbd0;
  /* 10cb78: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10cb7c: b.ne #0x10cbcc */
  if (ARC_COND(c, 1)) goto L_10cbcc;
  /* 10cb80: ldurb w8, [x29, #-0x2c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-44))));
  /* 10cb84: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10cb88: b.eq #0x10cb94 */
  if (ARC_COND(c, 0)) goto L_10cb94;
  /* 10cb8c: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10cb90: b.ne #0x10cba0 */
  if (ARC_COND(c, 1)) goto L_10cba0;
L_10cb94:;
  /* 10cb94: sub x8, x29, #0x2c */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(44)));
  /* 10cb98: orr x26, x8, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10cb9c: b #0x10cbd0 */
  goto L_10cbd0;
L_10cba0:;
  /* 10cba0: cmp w25, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(2));
  /* 10cba4: b.lt #0x10cbcc */
  if (ARC_COND(c, 11)) goto L_10cbcc;
  /* 10cba8: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10cbac: b.ne #0x10cbcc */
  if (ARC_COND(c, 1)) goto L_10cbcc;
  /* 10cbb0: ldurb w8, [x29, #-0x2b] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-43))));
  /* 10cbb4: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10cbb8: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10cbbc: b.ne #0x10cbcc */
  if (ARC_COND(c, 1)) goto L_10cbcc;
  /* 10cbc0: sub x8, x29, #0x2c */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(44)));
  /* 10cbc4: orr x26, x8, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10cbc8: b #0x10cbd0 */
  goto L_10cbd0;
L_10cbcc:;
  /* 10cbcc: sub x26, x29, #0x2c */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(44)));
L_10cbd0:;
  /* 10cbd0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10cbd4: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10cbd8: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100764));
  fn1_143460(c);
  /* 10cbdc: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10cbe0: ldr x28, [x28, #0xb58] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(2904))));
  /* 10cbe4: ldr x27, [sp, #8] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10cbe8: ldar x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10cbec: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10cbf0: b.eq #0x10ccac */
  if (ARC_COND(c, 0)) goto L_10ccac;
  /* 10cbf4: nop  */
  /* nop: no architectural effect here */
  /* 10cbf8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10cbfc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100800));
  fn1_142518(c);
  /* 10cc00: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10cc04: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10cc08: b.ne #0x10cc34 */
  if (ARC_COND(c, 1)) goto L_10cc34;
  /* 10cc0c: nop  */
  /* nop: no architectural effect here */
  /* 10cc10: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10cc14: nop  */
  /* nop: no architectural effect here */
  /* 10cc18: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_10cc1c:;
  /* 10cc1c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10cc20: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 10cc24: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100840));
  fn1_142530(c);
  /* 10cc28: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10cc2c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10cc30: b.eq #0x10cc1c */
  if (ARC_COND(c, 0)) goto L_10cc1c;
L_10cc34:;
  /* 10cc34: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10cc38: cbz x8, #0x10cc4c */
  if ((ARC_X_R(c, 8)) == 0) goto L_10cc4c;
  /* 10cc3c: nop  */
  /* nop: no architectural effect here */
  /* 10cc40: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10cc44: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100872));
  fn1_142560(c);
  /* 10cc48: b #0x10ccac */
  goto L_10ccac;
L_10cc4c:;
  /* 10cc4c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10cc50: stur x28, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 28));
  /* 10cc54: sturb wzr, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 10cc58: str x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 10cc5c: nop  */
  /* nop: no architectural effect here */
  /* 10cc60: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10cc64: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100904));
  fn1_142560(c);
  /* 10cc68: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10cc6c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10cc70: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10cc74: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100920));
  fn1_a2030(c);
  /* 10cc78: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10cc7c: str w8, [x28, #8] */
  arc_st32((ARC_X_R(c, 28) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10cc80: nop  */
  /* nop: no architectural effect here */
  /* 10cc84: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10cc88: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100940));
  fn1_142518(c);
  /* 10cc8c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10cc90: stlr x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 10cc94: nop  */
  /* nop: no architectural effect here */
  /* 10cc98: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10cc9c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100960));
  fn1_142560(c);
  /* 10cca0: nop  */
  /* nop: no architectural effect here */
  /* 10cca4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10cca8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1100972));
  fn1_142578(c);
L_10ccac:;
  /* 10ccac: ldp x8, x10, [x27, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10ccb0: ldrsw x9, [x28, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 28) + INT64_C(8)))));
  /* 10ccb4: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10ccb8: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10ccbc: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10ccc0: b.hs #0x10cd44 */
  if (ARC_COND(c, 2)) goto L_10cd44;
  /* 10ccc4: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10ccc8: cbz x23, #0x10cd44 */
  if ((ARC_X_R(c, 23)) == 0) goto L_10cd44;
  /* 10cccc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10ccd0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101012));
  fn1_143478(c);
  /* 10ccd4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 10ccd8: sub x1, x29, #0x2c */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(44)));
  /* 10ccdc: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 10cce0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10cce4: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10cce8: sub x23, x29, #0x2c */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(44)));
  /* 10ccec: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 10ccf0: add x24, sp, #0x10 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(16)));
  /* 10ccf4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101048));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10ccf8: sub x8, x26, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) - ARC_X_R(c, 23)));
  /* 10ccfc: add x3, x24, x25, lsl #2 */
  ARC_X_W(c, 3, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 25)) << 2)));
  /* 10cd00: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 10cd04: add x8, x24, x8, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 8)) << 2)));
  /* 10cd08: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 10cd0c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10cd10: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10cd14: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10cd18: csel x2, x3, x8, eq */
  ARC_X_W(c, 2, (ARC_COND(c, 0) ? (ARC_X_R(c, 3)) : ARC_X_R(c, 8)));
  /* 10cd1c: bl #0x10cdc0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101088));
  fn1_10cdc0(c);
  /* 10cd20: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10cd24: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10cd28: ldp x24, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10cd2c: ldp x26, x25, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10cd30: ldp x28, x27, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10cd34: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10cd38: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* 10cd3c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10cd40: ret  */
  return;
L_10cd44:;
  /* 10cd44: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101128));
  fn1_fc3b8(c);
L_10cd48:;
  /* 10cd48: nop  */
  /* nop: no architectural effect here */
  /* 10cd4c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10cd50: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101140));
  fn1_1424b8(c);
  /* 10cd54: cbz w0, #0x10cb38 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10cb38;
  /* 10cd58: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10cd5c: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10cd60: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10cd64: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10cd68: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101164));
  fn1_1441e0(c);
  /* 10cd6c: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10cd70: nop  */
  /* nop: no architectural effect here */
  /* 10cd74: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10cd78: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101180));
  fn1_1424d0(c);
  /* 10cd7c: b #0x10cb38 */
  goto L_10cb38;
  /* 10cd80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10cd84: nop  */
  /* nop: no architectural effect here */
  /* 10cd88: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10cd8c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101200));
  fn1_1424e8(c);
  /* 10cd90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10cd94: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101208));
  fn1_9cc20(c);
  /* 10cd98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10cd9c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10cda0: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101220));
  fn1_d2a78(c);
  /* 10cda4: b #0x10cdb0 */
  goto L_10cdb0;
  /* 10cda8: b #0x10cdac */
  goto L_10cdac;
L_10cdac:;
  /* 10cdac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10cdb0:;
  /* 10cdb0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10cdb4: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101240));
  fn1_143478(c);
  /* 10cdb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10cdbc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101248));
  fn1_9cc20(c);
}

void fn1_113be0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057376));
  /* 113be0: bti c */
  /* bti: no architectural effect here */
  /* 113be4: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113be8: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113bec: ret  */
  return;
}

void fn1_114174(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058804));
  /* 114174: bti c */
  /* bti: no architectural effect here */
  /* 114178: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 11417c: ldrb w10, [x9, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(96));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(96));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 114180: tbnz w10, #0, #0x114198 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_114198;
  /* 114184: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 114188: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 11418c: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 114190: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 114194: ret  */
  return;
L_114198:;
  /* 114198: ldp x2, x1, [x0, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(104));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 11419c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1141a0: b #0xe22b8 */
  fn1_e22b8(c); return;
}

void fn1_120560(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039108960));
  /* 120560: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 120564: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 120568: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12056c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 120570: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 120574: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120578: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* 12057c: ldr x8, [x8, #0xdc0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3520))));
  /* 120580: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 120584: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 120588: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 12058c: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* 120590: stur q0, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 120594: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 120598: stur q0, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 12059c: stur q0, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 1205a0: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 1205a4: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1205a8: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 1205ac: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1205b0: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 1205b4: bl #0x143d60 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181112));
  fn1_143d60(c);
  /* 1205b8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1205bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1205c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1205c4: ret  */
  return;
  /* 1205c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1205cc: add x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* 1205d0: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181140));
  fn1_142d58(c);
  /* 1205d4: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* 1205d8: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181148));
  fn1_142d58(c);
  /* 1205dc: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 1205e0: bl #0x142d58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181156));
  fn1_142d58(c);
  /* 1205e4: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1205e8: tbz w8, #0, #0x1205fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1205fc;
  /* 1205ec: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1205f0: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 1205f4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1205f8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181180));
  fn1_142608(c);
L_1205fc:;
  /* 1205fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120600: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181188));
  fn1_9cc20(c);
}

void fn1_126d74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039135604));
  /* 126d74: bti c */
  /* bti: no architectural effect here */
  /* 126d78: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* 126d7c: ret  */
  return;
}

void fn1_129248(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039145032));
  /* 129248: bti c */
  /* bti: no architectural effect here */
  /* 12924c: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 129250: b.hs #0x129350 */
  if (ARC_COND(c, 2)) goto L_129350;
  /* 129254: mov w8, #0xd800 */
  ARC_W_W(c, 8, UINT64_C(55296));
  /* 129258: b #0x12926c */
  goto L_12926c;
L_12925c:;
  /* 12925c: mov x5, x9 */
  ARC_X_W(c, 5, ARC_X_R(c, 9));
L_129260:;
  /* 129260: add x2, x2, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(4)));
  /* 129264: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 129268: b.hs #0x129350 */
  if (ARC_COND(c, 2)) goto L_129350;
L_12926c:;
  /* 12926c: ldr w9, [x2] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 2)));
  /* 129270: lsr w10, w9, #0x10 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(16)) & 31)));
  /* 129274: and w11, w9, #0xfffff800 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) & UINT64_C(4294965248)));
  /* 129278: cmp w10, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(16));
  /* 12927c: ccmp w11, w8, #4, ls */
  if (ARC_COND(c, 9)) { (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 129280: b.eq #0x129358 */
  if (ARC_COND(c, 0)) goto L_129358;
  /* 129284: cmp w9, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(127));
  /* 129288: b.hi #0x1292a0 */
  if (ARC_COND(c, 8)) goto L_1292a0;
  /* 12928c: sub x10, x6, x5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 129290: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* 129294: b.lt #0x129360 */
  if (ARC_COND(c, 11)) goto L_129360;
  /* 129298: strb w9, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12929c: b #0x129260 */
  goto L_129260;
L_1292a0:;
  /* 1292a0: cmp w9, #0x7ff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2047));
  /* 1292a4: b.hi #0x1292d4 */
  if (ARC_COND(c, 8)) goto L_1292d4;
  /* 1292a8: sub x10, x6, x5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 1292ac: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* 1292b0: b.lt #0x129360 */
  if (ARC_COND(c, 11)) goto L_129360;
  /* 1292b4: lsr w10, w9, #6 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(6)) & 31)));
  /* 1292b8: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 1292bc: bfxil w11, w9, #0, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* 1292c0: add x9, x5, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + UINT64_C(2)));
  /* 1292c4: orr w10, w10, #0xc0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(192)));
  /* 1292c8: strb w10, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 10));
  /* 1292cc: strb w11, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 11));
  /* 1292d0: b #0x12925c */
  goto L_12925c;
L_1292d4:;
  /* 1292d4: sub x11, x6, x5 */
  ARC_X_W(c, 11, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 1292d8: cbnz w10, #0x129310 */
  if ((ARC_W_R(c, 10)) != 0) goto L_129310;
  /* 1292dc: cmp x11, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(3));
  /* 1292e0: b.lt #0x129360 */
  if (ARC_COND(c, 11)) goto L_129360;
  /* 1292e4: lsr w10, w9, #0xc */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* 1292e8: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 1292ec: mov w12, #0x80 */
  ARC_W_W(c, 12, UINT64_C(128));
  /* 1292f0: bfxil w11, w9, #6, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 6) & UINT64_C(63))));
  /* 1292f4: bfxil w12, w9, #0, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* 1292f8: add x9, x5, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + UINT64_C(3)));
  /* 1292fc: orr w10, w10, #0xe0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(224)));
  /* 129300: strb w10, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 10));
  /* 129304: strb w11, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 11));
  /* 129308: strb w12, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 12));
  /* 12930c: b #0x12925c */
  goto L_12925c;
L_129310:;
  /* 129310: cmp x11, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(4));
  /* 129314: b.lt #0x129360 */
  if (ARC_COND(c, 11)) goto L_129360;
  /* 129318: lsr w10, w9, #0x12 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(18)) & 31)));
  /* 12931c: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 129320: mov w12, #0x80 */
  ARC_W_W(c, 12, UINT64_C(128));
  /* 129324: mov w13, #0x80 */
  ARC_W_W(c, 13, UINT64_C(128));
  /* 129328: bfxil w11, w9, #0xc, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 12) & UINT64_C(63))));
  /* 12932c: bfxil w12, w9, #6, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 6) & UINT64_C(63))));
  /* 129330: bfxil w13, w9, #0, #6 */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 13)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* 129334: orr w10, w10, #0xf0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(240)));
  /* 129338: add x9, x5, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + UINT64_C(4)));
  /* 12933c: strb w10, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 10));
  /* 129340: strb w11, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 11));
  /* 129344: strb w12, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 12));
  /* 129348: strb w13, [x5, #3] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(3)), ARC_W_R(c, 13));
  /* 12934c: b #0x12925c */
  goto L_12925c;
L_129350:;
  /* 129350: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 129354: b #0x129364 */
  goto L_129364;
L_129358:;
  /* 129358: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 12935c: b #0x129364 */
  goto L_129364;
L_129360:;
  /* 129360: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_129364:;
  /* 129364: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 129368: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12936c: ret  */
  return;
}

void fn1_12ac14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151636));
  /* 12ac14: bti c */
  /* bti: no architectural effect here */
  /* 12ac18: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12ac1c: ret  */
  return;
}

void fn1_12c290(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039157392));
  /* 12c290: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12c294: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c298: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12c29c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c2a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c2a4: bl #0x144180 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229480));
  fn1_144180(c);
  /* 12c2a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c2ac: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 12c2b0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12c2b4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c2b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12c2bc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134840(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191616));
  /* 134840: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134844: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134848: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 13484c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 134850: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134854: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 134858: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13485c: adrp x21, #0x15d000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 134860: ldr x8, [x8, #0xc88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3208))));
  /* 134864: ldr x20, [x0, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 134868: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13486c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 134870: nop  */
  /* nop: no architectural effect here */
  /* 134874: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 134878: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13487c: tbz w8, #0, #0x1348a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1348a8;
L_134880:;
  /* 134880: ldr x8, [x21, #0xc30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(3120))));
  /* 134884: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 134888: b.eq #0x134894 */
  if (ARC_COND(c, 0)) goto L_134894;
  /* 13488c: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 134890: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263764));
  fn1_144210(c);
L_134894:;
  /* 134894: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 134898: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13489c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1348a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1348a4: ret  */
  return;
L_1348a8:;
  /* 1348a8: nop  */
  /* nop: no architectural effect here */
  /* 1348ac: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1348b0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263796));
  fn1_1424b8(c);
  /* 1348b4: cbz w0, #0x134880 */
  if ((ARC_W_R(c, 0)) == 0) goto L_134880;
  /* 1348b8: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 1348bc: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 1348c0: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 1348c4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1348c8: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263820));
  fn1_1441e0(c);
  /* 1348cc: str x0, [x21, #0xc30] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 1348d0: nop  */
  /* nop: no architectural effect here */
  /* 1348d4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1348d8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263836));
  fn1_1424d0(c);
  /* 1348dc: b #0x134880 */
  goto L_134880;
  /* 1348e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1348e4: nop  */
  /* nop: no architectural effect here */
  /* 1348e8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1348ec: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263856));
  fn1_1424e8(c);
  /* 1348f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1348f4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263864));
  fn1_a1454(c);
  /* 1348f8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263868));
  fn1_a1454(c);
}

void fn1_13509c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193756));
  /* 13509c: bti c */
  /* bti: no architectural effect here */
  /* 1350a0: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1350a4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137d40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039205184));
  /* 137d40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 137d44: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137d48: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 137d4c: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 137d50: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 137d54: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137d58: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137d5c: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 137d60: b.eq #0x137d88 */
  if (ARC_COND(c, 0)) goto L_137d88;
  /* 137d64: ldp x8, x9, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 137d68: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 137d6c: b.eq #0x137d90 */
  if (ARC_COND(c, 0)) goto L_137d90;
L_137d70:;
  /* 137d70: strb w1, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* 137d74: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* 137d78: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 137d7c: str x8, [x0, #0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)), ARC_X_R(c, 8));
  /* 137d80: and w0, w1, #0xff */
  ARC_W_W(c, 0, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* 137d84: b #0x137df8 */
  goto L_137df8;
L_137d88:;
  /* 137d88: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 137d8c: b #0x137df8 */
  goto L_137df8;
L_137d90:;
  /* 137d90: ldr w9, [x0, #0x40] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(64))));
  /* 137d94: and w9, w9, #0xc */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(12)));
  /* 137d98: cmp w9, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(4));
  /* 137d9c: b.ne #0x137df4 */
  if (ARC_COND(c, 1)) goto L_137df4;
  /* 137da0: ldr x9, [x0, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 137da4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 137da8: ldr x24, [x0, #0x10] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 137dac: mov w22, w1 */
  ARC_W_W(c, 22, ARC_W_R(c, 1));
  /* 137db0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 137db4: csel x25, x9, x8, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 137db8: ldp x10, x8, [x0, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(72));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 137dbc: sub x21, x25, x24 */
  ARC_X_W(c, 21, (ARC_X_R(c, 25) - ARC_X_R(c, 24)));
  /* 137dc0: lsl x9, x21, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* 137dc4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 137dc8: csel x9, x10, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 137dcc: mov w10, #0x1000 */
  ARC_W_W(c, 10, UINT64_C(4096));
  /* 137dd0: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* 137dd4: csel x19, x10, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 137dd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137ddc: cbz x8, #0x137e14 */
  if ((ARC_X_R(c, 8)) == 0) goto L_137e14;
  /* 137de0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1277412));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 137de4: cbz x0, #0x137df4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_137df4;
  /* 137de8: ldr x8, [x23, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 137dec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 137df0: b #0x137e20 */
  goto L_137e20;
L_137df4:;
  /* 137df4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
L_137df8:;
  /* 137df8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 137dfc: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 137e00: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 137e04: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 137e08: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137e0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137e10: ret  */
  return;
L_137e14:;
  /* 137e14: bl #0x142590 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1277464));
  fn1_142590(c);
  /* 137e18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 137e1c: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
L_137e20:;
  /* 137e20: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 137e24: cmp x25, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 24));
  /* 137e28: b.eq #0x137e44 */
  if (ARC_COND(c, 0)) goto L_137e44;
  /* 137e2c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 137e30: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 137e34: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 137e38: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1277500));
  fn1_1449d8(c);
  /* 137e3c: ldr x8, [x23, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 137e40: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_137e44:;
  /* 137e44: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 137e48: mov w1, w22 */
  ARC_W_W(c, 1, ARC_W_R(c, 22));
  /* 137e4c: ldp x12, x11, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 137e50: ldrb w13, [x0, #0x40] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 0) + INT64_C(64))));
  /* 137e54: sub x25, x9, x8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 137e58: sub x24, x10, x8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 137e5c: sub x21, x11, x12 */
  ARC_X_W(c, 21, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* 137e60: tbz w13, #0, #0x137e8c */
  if (((ARC_W_R(c, 13)) >> 0 & 1) == 0) goto L_137e8c;
  /* 137e64: ldr x9, [x0, #0x58] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(88))));
  /* 137e68: cbz x9, #0x137e78 */
  if ((ARC_X_R(c, 9)) == 0) goto L_137e78;
  /* 137e6c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 137e70: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1277556));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 137e74: b #0x137e84 */
  goto L_137e84;
L_137e78:;
  /* 137e78: cbz x8, #0x137e8c */
  if ((ARC_X_R(c, 8)) == 0) goto L_137e8c;
  /* 137e7c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 137e80: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1277572));
  fn1_1425a8(c);
L_137e84:;
  /* 137e84: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 137e88: mov w1, w22 */
  ARC_W_W(c, 1, ARC_W_R(c, 22));
L_137e8c:;
  /* 137e8c: ldr w11, [x0, #0x40] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 0) + INT64_C(64))));
  /* 137e90: add x8, x20, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 25)));
  /* 137e94: add x9, x20, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 24)));
  /* 137e98: stp x20, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 137e9c: add x10, x20, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
  /* 137ea0: add x8, x9, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 21)));
  /* 137ea4: stp x9, x9, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 137ea8: orr w9, w11, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 11) | UINT64_C(1)));
  /* 137eac: stp x8, x10, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 137eb0: str w9, [x0, #0x40] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(64)), ARC_W_R(c, 9));
  /* 137eb4: b #0x137d70 */
  goto L_137d70;
}

void fn1_13b4a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039219364));
  /* 13b4a4: bti c */
  /* bti: no architectural effect here */
  /* 13b4a8: mov w1, #0x50 */
  ARC_W_W(c, 1, UINT64_C(80));
  /* 13b4ac: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_142410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247888));
  /* 142410: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142414: ldr x17, [x16, #0xe90] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3728))));
  /* 142418: add x16, x16, #0xe90 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3728)));
  /* 14241c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142420: nop  */
  /* nop: no architectural effect here */
  /* 142424: nop  */
  /* nop: no architectural effect here */
}

void fn1_142a10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249424));
  /* 142a10: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142a14: ldr x17, [x16, #0x90] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(144))));
  /* 142a18: add x16, x16, #0x90 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(144)));
  /* 142a1c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142a20: nop  */
  /* nop: no architectural effect here */
  /* 142a24: nop  */
  /* nop: no architectural effect here */
}

void fn1_143010(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250960));
  /* 143010: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143014: ldr x17, [x16, #0x290] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(656))));
  /* 143018: add x16, x16, #0x290 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(656)));
  /* 14301c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143020: nop  */
  /* nop: no architectural effect here */
  /* 143024: nop  */
  /* nop: no architectural effect here */
}

void fn1_143610(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252496));
  /* 143610: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143614: ldr x17, [x16, #0x490] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1168))));
  /* 143618: add x16, x16, #0x490 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1168)));
  /* 14361c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143620: nop  */
  /* nop: no architectural effect here */
  /* 143624: nop  */
  /* nop: no architectural effect here */
}

void fn1_143c10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254032));
  /* 143c10: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143c14: ldr x17, [x16, #0x690] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1680))));
  /* 143c18: add x16, x16, #0x690 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1680)));
  /* 143c1c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143c20: nop  */
  /* nop: no architectural effect here */
  /* 143c24: nop  */
  /* nop: no architectural effect here */
}

void fn1_144210(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255568));
  /* 144210: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144214: ldr x17, [x16, #0x890] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2192))));
  /* 144218: add x16, x16, #0x890 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2192)));
  /* 14421c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144220: nop  */
  /* nop: no architectural effect here */
  /* 144224: nop  */
  /* nop: no architectural effect here */
}

void fn1_144810(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257104));
  /* 144810: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144814: ldr x17, [x16, #0xa90] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2704))));
  /* 144818: add x16, x16, #0xa90 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2704)));
  /* 14481c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144820: nop  */
  /* nop: no architectural effect here */
  /* 144824: nop  */
  /* nop: no architectural effect here */
}

