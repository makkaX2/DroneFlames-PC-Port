#include "lifted.h"

void fn1_9d11c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038571292));
  /* 9d11c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9d120: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d124: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 9d128: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9d12c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 9d130: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 9d134: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 9d138: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(643388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d13c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 9d140: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 9d144: mov w8, #-0x1995 */
  ARC_W_W(c, 8, UINT64_C(18446744073709545067));
  /* 9d148: csel w0, w8, wzr, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 9d14c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9d150: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d154: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9d158: ret  */
  return;
}

void fn1_a1854(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038589524));
  /* a1854: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1858: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* a185c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1860: str x27, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 27));
  /* a1864: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a1868: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a186c: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1870: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a1874: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* a1878: umulh x8, x0, x1 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 0), ARC_X_R(c, 1)));
  /* a187c: cmp xzr, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 8));
  /* a1880: b.ne #0xa193c */
  if (ARC_COND(c, 1)) goto L_a193c;
  /* a1884: mul x8, x0, x1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 1))));
  /* a1888: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a188c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a1890: mov x27, x2 */
  ARC_X_W(c, 27, ARC_X_R(c, 2));
  /* a1894: adds x23, x8, x2 */
  ARC_X_W(c, 23, arc_add64(c, ARC_X_R(c, 8), ARC_X_R(c, 2), 0));
  /* a1898: b.hs #0xa193c */
  if (ARC_COND(c, 2)) goto L_a193c;
  /* a189c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a18a0: mov x19, x6 */
  ARC_X_W(c, 19, ARC_X_R(c, 6));
  /* a18a4: mov x26, x4 */
  ARC_X_W(c, 26, ARC_X_R(c, 4));
  /* a18a8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* a18ac: blr x5 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661680));
  arc_dispatch(c, ARC_X_R(c, 5));
  /* a18b0: cbz x0, #0xa1910 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a1910;
  /* a18b4: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* a18b8: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* a18bc: cbz x27, #0xa18c8 */
  if ((ARC_X_R(c, 27)) == 0) goto L_a18c8;
  /* a18c0: add x25, x24, x27 */
  ARC_X_W(c, 25, (ARC_X_R(c, 24) + ARC_X_R(c, 27)));
  /* a18c4: stur x21, [x25, #-8] */
  arc_st64((ARC_X_R(c, 25) + INT64_C(-8)), ARC_X_R(c, 21));
L_a18c8:;
  /* a18c8: cbz x22, #0xa1914 */
  if ((ARC_X_R(c, 22)) == 0) goto L_a1914;
  /* a18cc: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a18d0: stp x20, x26, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* a18d4: stp x25, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a18d8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a18dc: strb w8, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 8));
  /* a18e0: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* a18e4: cbz x21, #0xa1914 */
  if ((ARC_X_R(c, 21)) == 0) goto L_a1914;
  /* a18e8: mov x26, x25 */
  ARC_X_W(c, 26, ARC_X_R(c, 25));
L_a18ec:;
  /* a18ec: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* a18f0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661748));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* a18f4: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* a18f8: add x26, x26, x20 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + ARC_X_R(c, 20)));
  /* a18fc: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a1900: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* a1904: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* a1908: b.lo #0xa18ec */
  if (ARC_COND(c, 3)) goto L_a18ec;
  /* a190c: b #0xa1914 */
  goto L_a1914;
L_a1910:;
  /* a1910: mov x25, xzr */
  ARC_X_W(c, 25, ARC_X_R(c, 31));
L_a1914:;
  /* a1914: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* a1918: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a191c: ldr x27, [sp, #0x40] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(64))));
  /* a1920: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1924: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a1928: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a192c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1930: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* a1934: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1938: ret  */
  return;
L_a193c:;
  /* a193c: bl #0xa1e84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661824));
  fn1_a1e84(c);
  /* a1940: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a1944: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a1948: bl #0xa1a0c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661836));
  fn1_a1a0c(c);
  /* a194c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* a1950: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* a1954: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661848));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* a1958: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a195c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661856));
  fn1_9cc20(c);
  /* a1960: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661860));
  fn1_a1454(c);
}

void fn1_a2824(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593572));
  /* a2824: bti c */
  /* bti: no architectural effect here */
  /* a2828: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a282c: ret  */
  return;
}

void fn1_a8e18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038619672));
  /* a8e18: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a8e1c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8e20: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a8e24: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8e28: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8e2c: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a8e30: sub x10, x9, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* a8e34: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* a8e38: b.lo #0xa8e4c */
  if (ARC_COND(c, 3)) goto L_a8e4c;
  /* a8e3c: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* a8e40: mov w11, #0x7453 */
  ARC_W_W(c, 11, UINT64_C(29779));
  /* a8e44: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* a8e48: b.eq #0xa8e94 */
  if (ARC_COND(c, 0)) goto L_a8e94;
L_a8e4c:;
  /* a8e4c: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* a8e50: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a8e54: b.eq #0xa8f3c */
  if (ARC_COND(c, 0)) goto L_a8f3c;
L_a8e58:;
  /* a8e58: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* a8e5c: cmp w8, #0x53 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(83));
  /* a8e60: b.ne #0xa8f3c */
  if (ARC_COND(c, 1)) goto L_a8f3c;
  /* a8e64: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* a8e68: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* a8e6c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a8e70: bl #0xa99c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691828));
  fn1_a99c0(c);
  /* a8e74: mov x3, x0 */
  ARC_X_W(c, 3, ARC_X_R(c, 0));
  /* a8e78: cbz x0, #0xa8f6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8f6c;
  /* a8e7c: ldrb w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 3) + INT64_C(8))));
  /* a8e80: cmp w8, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(27));
  /* a8e84: b.ne #0xa8f58 */
  if (ARC_COND(c, 1)) goto L_a8f58;
  /* a8e88: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a8e8c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a8e90: b #0xa8f40 */
  goto L_a8f40;
L_a8e94:;
  /* a8e94: ldr x20, [x0, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a8e98: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a8e9c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a8ea0: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* a8ea4: sub x10, x9, #0xfd0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - UINT64_C(4048)));
  /* a8ea8: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* a8eac: b.hi #0xa8ee8 */
  if (ARC_COND(c, 8)) goto L_a8ee8;
  /* a8eb0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a8eb4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a8eb8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* a8ebc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a8ec0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(691908));
  fn1_1428a8(c);
  /* a8ec4: cbz x0, #0xa8f84 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8f84;
  /* a8ec8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a8ecc: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* a8ed0: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a8ed4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a8ed8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a8edc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8ee0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a8ee4: str x8, [x22, #0x1330] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(4912)), ARC_X_R(c, 8));
L_a8ee8:;
  /* a8ee8: add x8, x9, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* a8eec: add x19, x20, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 20) + ARC_X_R(c, 9)));
  /* a8ef0: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a8ef4: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* a8ef8: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* a8efc: mov w10, #3 */
  ARC_W_W(c, 10, UINT64_C(3));
  /* a8f00: str x9, [x19, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* a8f04: ldurh w8, [x19, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(9))));
  /* a8f08: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* a8f0c: str x10, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 10));
  /* a8f10: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a8f14: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* a8f18: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* a8f1c: add x9, x9, #0x857 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2135)));
  /* a8f20: sturh w8, [x19, #9] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(9)), ARC_W_R(c, 8));
  /* a8f24: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* a8f28: str x9, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 9));
  /* a8f2c: strb w8, [x19, #8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 8));
  /* a8f30: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a8f34: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a8f38: b.ne #0xa8e58 */
  if (ARC_COND(c, 1)) goto L_a8e58;
L_a8f3c:;
  /* a8f3c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
L_a8f40:;
  /* a8f40: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a8f44: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8f48: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a8f4c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8f50: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8f54: b #0xa9c94 */
  fn1_a9c94(c); return;
L_a8f58:;
  /* a8f58: cbz x19, #0xa8f64 */
  if ((ARC_X_R(c, 19)) == 0) goto L_a8f64;
  /* a8f5c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a8f60: b #0xa8f6c */
  goto L_a8f6c;
L_a8f64:;
  /* a8f64: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a8f68: strb w8, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 8));
L_a8f6c:;
  /* a8f6c: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* a8f70: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8f74: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a8f78: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8f7c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8f80: ret  */
  return;
L_a8f84:;
  /* a8f84: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(692104));
  fn1_142488(c);
}

void fn1_b06e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038650592));
  /* b06e0: bti c */
  /* bti: no architectural effect here */
  /* b06e4: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b06e8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b4f0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038669068));
  /* b4f0c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b4f10: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b4f14: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b4f18: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b4f1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b4f20: ldp x9, x11, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* b4f24: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b4f28: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b4f2c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b4f30: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b4f34: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* b4f38: b.ls #0xb4f6c */
  if (ARC_COND(c, 9)) goto L_b4f6c;
  /* b4f3c: lsl x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b4f40: add x9, x9, #0x3e1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(993)));
  /* b4f44: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b4f48: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b4f4c: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b4f50: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4f54: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741208));
  fn1_142878(c);
  /* b4f58: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4f5c: cbz x0, #0xb5160 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5160;
  /* b4f60: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b4f64: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b4f68: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
L_b4f6c:;
  /* b4f6c: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* b4f70: mov w10, #0x5b */
  ARC_W_W(c, 10, UINT64_C(91));
  /* b4f74: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4f78: strb w10, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 10));
  /* b4f7c: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b4f80: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4f84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4f88: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b4f8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741264));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b4f90: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b4f94: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b4f98: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b4f9c: b.eq #0xb4fb4 */
  if (ARC_COND(c, 0)) goto L_b4fb4;
  /* b4fa0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b4fa4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b4fa8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b4fac: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b4fb0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741300));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b4fb4:;
  /* b4fb4: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b4fb8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b4fbc: add x10, x8, #5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* b4fc0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b4fc4: b.ls #0xb4fec */
  if (ARC_COND(c, 9)) goto L_b4fec;
  /* b4fc8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b4fcc: add x8, x8, #0x3e5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(997)));
  /* b4fd0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b4fd4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b4fd8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b4fdc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741344));
  fn1_142878(c);
  /* b4fe0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b4fe4: cbz x0, #0xb5164 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5164;
  /* b4fe8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b4fec:;
  /* b4fec: mov w10, #0x2e20 */
  ARC_W_W(c, 10, UINT64_C(11808));
  /* b4ff0: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b4ff4: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b4ff8: movk w10, #0x2e2e, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(774766592)));
  /* b4ffc: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* b5000: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5004: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b5008: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b500c: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b5010: add x8, x8, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* b5014: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* b5018: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b501c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b5020: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b5024: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741416));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5028: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b502c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b5030: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b5034: b.eq #0xb504c */
  if (ARC_COND(c, 0)) goto L_b504c;
  /* b5038: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b503c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b5040: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5044: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b5048: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741452));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b504c:;
  /* b504c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b5050: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b5054: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b5058: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b505c: b.ls #0xb5088 */
  if (ARC_COND(c, 9)) goto L_b5088;
  /* b5060: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b5064: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b5068: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b506c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b5070: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b5074: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741496));
  fn1_142878(c);
  /* b5078: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b507c: cbz x0, #0xb5168 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b5168;
  /* b5080: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b5084: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b5088:;
  /* b5088: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b508c: mov w9, #0x5d */
  ARC_W_W(c, 9, UINT64_C(93));
  /* b5090: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b5094: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b5098: ldrb w8, [x21, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(8))));
  /* b509c: sub w8, w8, #0x51 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(81)));
  /* b50a0: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* b50a4: b.lo #0xb5104 */
  if (ARC_COND(c, 3)) goto L_b5104;
  /* b50a8: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b50ac: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b50b0: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b50b4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b50b8: b.ls #0xb50e0 */
  if (ARC_COND(c, 9)) goto L_b50e0;
  /* b50bc: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b50c0: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* b50c4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b50c8: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b50cc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b50d0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741588));
  fn1_142878(c);
  /* b50d4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b50d8: cbz x0, #0xb516c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b516c;
  /* b50dc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b50e0:;
  /* b50e0: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b50e4: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b50e8: mov w10, #0x3d20 */
  ARC_W_W(c, 10, UINT64_C(15648));
  /* b50ec: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* b50f0: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b50f4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b50f8: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b50fc: add x8, x8, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b5100: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b5104:;
  /* b5104: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b5108: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b510c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b5110: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b5114: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741656));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b5118: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b511c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b5120: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b5124: b.ne #0xb513c */
  if (ARC_COND(c, 1)) goto L_b513c;
  /* b5128: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b512c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b5130: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b5134: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b5138: ret  */
  return;
L_b513c:;
  /* b513c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b5140: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b5144: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b5148: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b514c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b5150: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b5154: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b5158: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b515c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b5160:;
  /* b5160: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741732));
  fn1_1427b8(c);
L_b5164:;
  /* b5164: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741736));
  fn1_1427b8(c);
L_b5168:;
  /* b5168: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741740));
  fn1_1427b8(c);
L_b516c:;
  /* b516c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(741744));
  fn1_1427b8(c);
}

void fn1_b7f34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038681396));
  /* b7f34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b7f38: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7f3c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b7f40: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7f44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7f48: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b7f4c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* b7f50: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b7f54: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b7f58: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b7f5c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b7f60: b.hi #0xb7f84 */
  if (ARC_COND(c, 8)) goto L_b7f84;
  /* b7f64: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b7f68: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b7f6c: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753520));
  fn1_1428a8(c);
  /* b7f70: cbz x0, #0xb7fd8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7fd8;
  /* b7f74: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b7f78: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b7f7c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b7f80: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_b7f84:;
  /* b7f84: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b7f88: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* b7f8c: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* b7f90: add x8, x8, #0xba8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2984)));
  /* b7f94: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* b7f98: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* b7f9c: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b7fa0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b7fa4: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b7fa8: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b7fac: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b7fb0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b7fb4: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b7fb8: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* b7fbc: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b7fc0: stp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* b7fc4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7fc8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b7fcc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7fd0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7fd4: ret  */
  return;
L_b7fd8:;
  /* b7fd8: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753628));
  fn1_142488(c);
}

void fn1_bb1d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038694360));
  /* bb1d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bb1dc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bb1e0: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bb1e4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bb1e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bb1ec: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bb1f0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bb1f4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bb1f8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bb1fc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bb200: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bb204: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766472));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bb208: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* bb20c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bb210: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bb214: b.eq #0xbb22c */
  if (ARC_COND(c, 0)) goto L_bb22c;
  /* bb218: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* bb21c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bb220: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb224: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bb228: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766508));
  arc_dispatch(c, ARC_X_R(c, 8));
L_bb22c:;
  /* bb22c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* bb230: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb234: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb238: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* bb23c: b.ls #0xbb264 */
  if (ARC_COND(c, 9)) goto L_bb264;
  /* bb240: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* bb244: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* bb248: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* bb24c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* bb250: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb254: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766552));
  fn1_142878(c);
  /* bb258: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb25c: cbz x0, #0xbb33c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb33c;
  /* bb260: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb264:;
  /* bb264: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* bb268: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* bb26c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb270: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* bb274: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* bb278: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* bb27c: cbz x21, #0xbb2d8 */
  if ((ARC_X_R(c, 21)) == 0) goto L_bb2d8;
  /* bb280: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bb284: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* bb288: ldr x22, [x20, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* bb28c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* bb290: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bb294: b.ls #0xbb2bc */
  if (ARC_COND(c, 9)) goto L_bb2bc;
  /* bb298: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* bb29c: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* bb2a0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bb2a4: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* bb2a8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* bb2ac: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766640));
  fn1_142878(c);
  /* bb2b0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* bb2b4: cbz x0, #0xbb340 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bb340;
  /* bb2b8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_bb2bc:;
  /* bb2bc: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* bb2c0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* bb2c4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* bb2c8: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766668));
  fn1_1449d8(c);
  /* bb2cc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bb2d0: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* bb2d4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_bb2d8:;
  /* bb2d8: ldr x20, [x20, #0x28] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* bb2dc: cbz x20, #0xbb304 */
  if ((ARC_X_R(c, 20)) == 0) goto L_bb304;
  /* bb2e0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bb2e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb2e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb2ec: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* bb2f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bb2f4: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* bb2f8: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* bb2fc: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* bb300: b.ne #0xbb318 */
  if (ARC_COND(c, 1)) goto L_bb318;
L_bb304:;
  /* bb304: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bb308: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bb30c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bb310: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bb314: ret  */
  return;
L_bb318:;
  /* bb318: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* bb31c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bb320: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* bb324: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bb328: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bb32c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bb330: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bb334: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bb338: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bb33c:;
  /* bb33c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766784));
  fn1_1427b8(c);
L_bb340:;
  /* bb340: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(766788));
  fn1_1427b8(c);
}

void fn1_bda94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704788));
  /* bda94: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bda98: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bda9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bdaa0: sub x0, x0, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) - UINT64_C(128)));
  /* bdaa4: nop  */
  /* nop: no architectural effect here */
  /* bdaa8: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* bdaac: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bdab0: b.lo #0xbdad4 */
  if (ARC_COND(c, 3)) goto L_bdad4;
  /* bdab4: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* bdab8: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* bdabc: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bdac0: b.hs #0xbdad4 */
  if (ARC_COND(c, 2)) goto L_bdad4;
  /* bdac4: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776904));
  fn1_a2664(c);
  /* bdac8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdacc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bdad0: ret  */
  return;
L_bdad4:;
  /* bdad4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdad8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bdadc: b #0x142800 */
  fn1_142800(c); return;
  /* bdae0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776932));
  fn1_a1454(c);
}

void fn1_d0b98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038782872));
  /* d0b98: bti c */
  /* bti: no architectural effect here */
  /* d0b9c: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d0ba0: asr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63))));
  /* d0ba4: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d0ba8: b.gt #0xd0bb8 */
  if (ARC_COND(c, 12)) goto L_d0bb8;
  /* d0bac: b.hs #0xd0ca8 */
  if (ARC_COND(c, 2)) goto L_d0ca8;
L_d0bb0:;
  /* d0bb0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0bb4: ret  */
  return;
L_d0bb8:;
  /* d0bb8: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d0bbc: b.eq #0xd0cd0 */
  if (ARC_COND(c, 0)) goto L_d0cd0;
  /* d0bc0: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d0bc4: b.eq #0xd0de0 */
  if (ARC_COND(c, 0)) goto L_d0de0;
  /* d0bc8: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d0bcc: b.ne #0xd0d20 */
  if (ARC_COND(c, 1)) goto L_d0d20;
  /* d0bd0: ldrh w8, [x0] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 0)));
  /* d0bd4: ldrh w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0bd8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0bdc: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0be0: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0be4: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* d0be8: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0bec: ldrh w8, [x0, #6] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(6))));
  /* d0bf0: ldurh w9, [x1, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 1) + INT64_C(-2))));
  /* d0bf4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0bf8: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0bfc: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0c00: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0c04: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* d0c08: ldrh w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(4))));
  /* d0c0c: ldurh w8, [x1, #-2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 1) + INT64_C(-2))));
  /* d0c10: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0c14: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0c18: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0c1c: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0c20: ldrh w10, [x0, #6] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 0) + INT64_C(6))));
  /* d0c24: ldrh w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(4))));
  /* d0c28: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d0c2c: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d0c30: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d0c34: strh w9, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 9));
  /* d0c38: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* d0c3c: ldrh w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0c40: ldurh w9, [x1, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 1) + INT64_C(-2))));
  /* d0c44: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0c48: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0c4c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0c50: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0c54: ldrh w10, [x0, #6] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 0) + INT64_C(6))));
  /* d0c58: ldrh w11, [x0] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 0)));
  /* d0c5c: ldrh w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(4))));
  /* d0c60: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* d0c64: csel w12, w10, w11, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* d0c68: csel w10, w10, w11, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* d0c6c: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* d0c70: csel w11, w11, w9, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* d0c74: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* d0c78: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0c7c: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0c80: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0c84: strh w11, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 11));
  /* d0c88: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* d0c8c: strh w10, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 10));
  /* d0c90: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0c94: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* d0c98: strh w8, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* d0c9c: strh w9, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 9));
  /* d0ca0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0ca4: ret  */
  return;
L_d0ca8:;
  /* d0ca8: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d0cac: b.ne #0xd0d20 */
  if (ARC_COND(c, 1)) goto L_d0d20;
  /* d0cb0: ldurh w9, [x1, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 1) + INT64_C(-2))));
  /* d0cb4: ldrh w8, [x0] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 0)));
  /* d0cb8: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d0cbc: b.hs #0xd0bb0 */
  if (ARC_COND(c, 2)) goto L_d0bb0;
  /* d0cc0: strh w9, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d0cc4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0cc8: sturh w8, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 8));
  /* d0ccc: ret  */
  return;
L_d0cd0:;
  /* d0cd0: ldrh w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0cd4: ldurh w9, [x1, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 1) + INT64_C(-2))));
  /* d0cd8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0cdc: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0ce0: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0ce4: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0ce8: strh w8, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* d0cec: ldrh w9, [x0] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 0)));
  /* d0cf0: ldurh w8, [x1, #-2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 1) + INT64_C(-2))));
  /* d0cf4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0cf8: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0cfc: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0d00: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0d04: ldrh w10, [x0, #2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0d08: ldrh w9, [x0] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 0)));
  /* d0d0c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d0d10: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d0d14: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d0d18: strh w9, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d0d1c: b #0xd0e58 */
  goto L_d0e58;
L_d0d20:;
  /* d0d20: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d0d24: ldrh w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0d28: ldrh w10, [x0] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 0)));
  /* d0d2c: ldrh w9, [x11, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(4));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    ARC_W_W(c, 9, arc_ld16(_a));
  }
  /* d0d30: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0d34: csel w12, w8, w9, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0d38: csel w9, w8, w9, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0d3c: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* d0d40: csel w8, w12, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d0d44: csel w13, w12, w10, lo */
  ARC_W_W(c, 13, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d0d48: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d0d4c: strh w8, [x11] */
  arc_st16(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* d0d50: add x8, x0, #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(6)));
  /* d0d54: csel w10, w10, w9, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d0d58: csel w9, w9, w13, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 13)));
  /* d0d5c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d0d60: strh w10, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 10));
  /* d0d64: strh w9, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d0d68: b.eq #0xd0bb0 */
  if (ARC_COND(c, 0)) goto L_d0bb0;
  /* d0d6c: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d0d70: mov w10, #6 */
  ARC_W_W(c, 10, UINT64_C(6));
  /* d0d74: b #0xd0da4 */
  goto L_d0da4;
L_d0d78:;
  /* d0d78: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d0d7c:;
  /* d0d7c: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d0d80: strh w12, [x11] */
  arc_st16(ARC_X_R(c, 11), ARC_W_R(c, 12));
  /* d0d84: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d0d88: b.eq #0xd0e64 */
  if (ARC_COND(c, 0)) goto L_d0e64;
L_d0d8c:;
  /* d0d8c: add x12, x8, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* d0d90: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d0d94: add x10, x10, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* d0d98: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d0d9c: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d0da0: b.eq #0xd0bb0 */
  if (ARC_COND(c, 0)) goto L_d0bb0;
L_d0da4:;
  /* d0da4: ldrh w12, [x8] */
  ARC_W_W(c, 12, arc_ld16(ARC_X_R(c, 8)));
  /* d0da8: ldrh w11, [x11] */
  ARC_W_W(c, 11, arc_ld16(ARC_X_R(c, 11)));
  /* d0dac: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0db0: b.hs #0xd0d8c */
  if (ARC_COND(c, 2)) goto L_d0d8c;
  /* d0db4: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d0db8:;
  /* d0db8: subs x13, x14, #2 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(2)));
  /* d0dbc: strh w11, [x0, x14] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_W_R(c, 11));
  /* d0dc0: b.eq #0xd0d78 */
  if (ARC_COND(c, 0)) goto L_d0d78;
  /* d0dc4: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d0dc8: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d0dcc: ldurh w11, [x11, #-4] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 11) + INT64_C(-4))));
  /* d0dd0: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0dd4: b.lo #0xd0db8 */
  if (ARC_COND(c, 3)) goto L_d0db8;
  /* d0dd8: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d0ddc: b #0xd0d7c */
  goto L_d0d7c;
L_d0de0:;
  /* d0de0: ldrh w8, [x0] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 0)));
  /* d0de4: ldrh w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(4))));
  /* d0de8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0dec: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0df0: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0df4: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* d0df8: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0dfc: ldrh w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0e00: ldurh w9, [x1, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 1) + INT64_C(-2))));
  /* d0e04: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0e08: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0e0c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0e10: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0e14: ldrh w10, [x0] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 0)));
  /* d0e18: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0e1c: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0e20: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0e24: strh w9, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d0e28: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0e2c: ldrh w8, [x0, #4] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(4))));
  /* d0e30: ldurh w9, [x1, #-2] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 1) + INT64_C(-2))));
  /* d0e34: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0e38: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0e3c: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0e40: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0e44: ldrh w10, [x0, #2] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 0) + INT64_C(2))));
  /* d0e48: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0e4c: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0e50: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0e54: strh w9, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 9));
L_d0e58:;
  /* d0e58: strh w8, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* d0e5c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0e60: ret  */
  return;
L_d0e64:;
  /* d0e64: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* d0e68: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d0e6c: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d0e70: ret  */
  return;
}

void fn1_d784c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810700));
  /* d784c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7850: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7854: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* d7858: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d785c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d7860: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* d7864: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d7868: ldr x8, [x8, #0xa00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2560))));
  /* d786c: ldr x20, [x0, #0x28] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* d7870: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* d7874: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d7878: cbz x20, #0xd78c8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_d78c8;
  /* d787c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* d7880: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* d7884: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882824));
  fn1_bd950(c);
  /* d7888: cbnz x0, #0xd78c8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_d78c8;
  /* d788c: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* d7890: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d7894: ldr x8, [x21], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* d7898: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* d789c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882848));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* d78a0: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* d78a4: cbz x8, #0xd78b8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d78b8;
  /* d78a8: add x1, x20, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* d78ac: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* d78b0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882868));
  fn1_bd950(c);
  /* d78b4: cbnz x0, #0xd78c8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_d78c8;
L_d78b8:;
  /* d78b8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* d78bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d78c0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* d78c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882888));
  arc_dispatch(c, ARC_X_R(c, 8));
L_d78c8:;
  /* d78c8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* d78cc: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* d78d0: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* d78d4: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* d78d8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* d78dc: sub x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* d78e0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* d78e4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882920));
  fn1_a2030(c);
  /* d78e8: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* d78ec: b.mi #0xd7904 */
  if (ARC_COND(c, 4)) goto L_d7904;
  /* d78f0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d78f4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* d78f8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d78fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7900: ret  */
  return;
L_d7904:;
  /* d7904: sub x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* d7908: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d790c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* d7910: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7914: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7918: b #0x1426f8 */
  fn1_1426f8(c); return;
}

void fn1_db6a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826660));
  /* db6a4: bti c */
  /* bti: no architectural effect here */
  /* db6a8: adrp x0, #0x156000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1400832)));
  /* db6ac: add x0, x0, #0xd28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3368)));
  /* db6b0: ret  */
  return;
}

void fn1_dfae8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038844136));
  /* dfae8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dfaec: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dfaf0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* dfaf4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dfaf8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dfafc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dfb00: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* dfb04: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dfb08: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* dfb0c: mov w2, #0x90 */
  ARC_W_W(c, 2, UINT64_C(144));
  /* dfb10: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916244));
  fn1_142818(c);
  /* dfb14: ldr x20, [x29, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* dfb18: cbnz x20, #0xdfb30 */
  if ((ARC_X_R(c, 20)) != 0) goto L_dfb30;
  /* dfb1c: mov w0, #0x90 */
  ARC_W_W(c, 0, UINT64_C(144));
  /* dfb20: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916260));
  fn1_a24dc(c);
  /* dfb24: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* dfb28: cbnz x0, #0xdfb30 */
  if ((ARC_X_R(c, 0)) != 0) goto L_dfb30;
  /* dfb2c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916272));
  fn1_142488(c);
L_dfb30:;
  /* dfb30: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* dfb34: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* dfb38: stp q0, q0, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* dfb3c: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* dfb40: stp q0, q0, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* dfb44: stp q0, q0, [x20, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* dfb48: str q0, [x21, #0x80]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(128));
  /* dfb4c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* dfb50: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* dfb54: bl #0x142cb0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916312));
  fn1_142cb0(c);
  /* dfb58: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dfb5c: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dfb60: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* dfb64: ldr x1, [x1, #0x948] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2376))));
  /* dfb68: ldr x2, [x2, #0x960] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2400))));
  /* dfb6c: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916336));
  fn1_142440(c);
  /* dfb70: nop  */
  /* nop: no architectural effect here */
  /* dfb74: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* dfb78: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dfb7c: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* dfb80: b.lo #0xdfba4 */
  if (ARC_COND(c, 3)) goto L_dfba4;
  /* dfb84: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* dfb88: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* dfb8c: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* dfb90: b.hs #0xdfba4 */
  if (ARC_COND(c, 2)) goto L_dfba4;
  /* dfb94: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dfb98: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916380));
  fn1_a2664(c);
  /* dfb9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dfba0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916388));
  fn1_9cc20(c);
L_dfba4:;
  /* dfba4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dfba8: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916396));
  fn1_142800(c);
  /* dfbac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dfbb0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916404));
  fn1_9cc20(c);
  /* dfbb4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916408));
  fn1_a1454(c);
  /* dfbb8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916412));
  fn1_a1454(c);
}

void fn1_e2474(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854772));
  /* e2474: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2478: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e247c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e2480: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e2484: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2488: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e248c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e2490: ldp x9, x11, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e2494: add x12, x0, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e2498: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e249c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e24a0: csel x21, x12, x11, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* e24a4: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e24a8: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* e24ac: b.hs #0xe24e8 */
  if (ARC_COND(c, 2)) goto L_e24e8;
  /* e24b0: add x22, x21, x2, lsl #2 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 2)) << 2)));
  /* e24b4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e24b8: cbz x3, #0xe24f0 */
  if ((ARC_X_R(c, 3)) == 0) goto L_e24f0;
  /* e24bc: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* e24c0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e24c4: sub x23, x8, x2, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 2)) << 2)));
L_e24c8:;
  /* e24c8: ldr w1, [x22] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 22)));
  /* e24cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e24d0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e24d4: bl #0x142e48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(926936));
  fn1_142e48(c);
  /* e24d8: cbz x0, #0xe24f0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_e24f0;
  /* e24dc: subs x23, x23, #4 */
  ARC_X_W(c, 23, arc_sub64(c, ARC_X_R(c, 23), UINT64_C(4)));
  /* e24e0: add x22, x22, #4 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(4)));
  /* e24e4: b.ne #0xe24c8 */
  if (ARC_COND(c, 1)) goto L_e24c8;
L_e24e8:;
  /* e24e8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* e24ec: b #0xe24f8 */
  goto L_e24f8;
L_e24f0:;
  /* e24f0: sub x8, x22, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* e24f4: asr x0, x8, #2 */
  ARC_X_W(c, 0, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
L_e24f8:;
  /* e24f8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e24fc: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e2500: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2504: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2508: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e250c: ret  */
  return;
}

void fn1_e5bb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038868916));
  /* e5bb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e5bb8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e5bbc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e5bc0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e5bc4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e5bc8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e5bcc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e5bd0: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* e5bd4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e5bd8: add x21, x0, #0x14 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(20)));
  /* e5bdc: tbz x20, #0x3f, #0xe5bf0 */
  if (((ARC_X_R(c, 20)) >> 63 & 1) == 0) goto L_e5bf0;
  /* e5be0: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
  /* e5be4: orr x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | UINT64_C(1)));
  /* e5be8: neg x20, x20 */
  ARC_X_W(c, 20, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 20))));
  /* e5bec: strb w8, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 8));
L_e5bf0:;
  /* e5bf0: sub x8, x21, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 0)));
  /* e5bf4: cmp x8, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(19));
  /* e5bf8: b.gt #0xe5c3c */
  if (ARC_COND(c, 12)) goto L_e5c3c;
  /* e5bfc: orr x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* e5c00: mov w10, #0x40 */
  ARC_W_W(c, 10, UINT64_C(64));
  /* e5c04: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* e5c08: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* e5c0c: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* e5c10: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* e5c14: nop  */
  /* nop: no architectural effect here */
  /* e5c18: adr x10, #0x75298 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(479896)));
  /* e5c1c: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* e5c20: ldr x10, [x10, w9, uxtw #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 3))));
  /* e5c24: cmp x20, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* e5c28: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* e5c2c: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* e5c30: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* e5c34: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* e5c38: b.lt #0xe5d38 */
  if (ARC_COND(c, 11)) goto L_e5d38;
L_e5c3c:;
  /* e5c3c: lsr x8, x20, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(32)) & 63)));
  /* e5c40: cbnz x8, #0xe5c54 */
  if ((ARC_X_R(c, 8)) != 0) goto L_e5c54;
  /* e5c44: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e5c48: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941132));
  fn1_d4eb8(c);
  /* e5c4c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e5c50: b #0xe5d38 */
  goto L_e5d38;
L_e5c54:;
  /* e5c54: mov x22, #0xe3ff */
  ARC_X_W(c, 22, UINT64_C(58367));
  /* e5c58: movk x22, #0x540b, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* e5c5c: movk x22, #2, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* e5c60: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* e5c64: b.ls #0xe5c90 */
  if (ARC_COND(c, 9)) goto L_e5c90;
  /* e5c68: mov x8, #0xd5bf */
  ARC_X_W(c, 8, UINT64_C(54719));
  /* e5c6c: movk x8, #0xbded, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3186425856)));
  /* e5c70: movk x8, #0xfece, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280160716718080)));
  /* e5c74: movk x8, #0xdbe6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15845352338949668864)));
  /* e5c78: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e5c7c: lsr x21, x8, #0x21 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* e5c80: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e5c84: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941192));
  fn1_d4eb8(c);
  /* e5c88: madd x8, x21, x22, x21 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e5c8c: sub x20, x20, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
L_e5c90:;
  /* e5c90: mov x8, #0xcefd */
  ARC_X_W(c, 8, UINT64_C(52989));
  /* e5c94: mov w9, #0xe100 */
  ARC_W_W(c, 9, UINT64_C(57600));
  /* e5c98: mov w10, #0xde83 */
  ARC_W_W(c, 10, UINT64_C(56963));
  /* e5c9c: movk x8, #0x8461, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* e5ca0: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* e5ca4: movk w10, #0x431b, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* e5ca8: movk x8, #0x7711, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* e5cac: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* e5cb0: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* e5cb4: movk x8, #0xabcc, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* e5cb8: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* e5cbc: add x21, x0, #0xa */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(10)));
  /* e5cc0: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e5cc4: lsr x8, x8, #0x1a */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(26)) & 63)));
  /* e5cc8: msub w9, w8, w9, w20 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 20)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* e5ccc: umull x10, w9, w10 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* e5cd0: lsr x10, x10, #0x32 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(50)) & 63)));
  /* e5cd4: msub w9, w10, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e5cd8: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* e5cdc: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* e5ce0: umull x11, w9, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e5ce4: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* e5ce8: msub w9, w11, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* e5cec: nop  */
  /* nop: no architectural effect here */
  /* e5cf0: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* e5cf4: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e5cf8: ubfx w13, w9, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* e5cfc: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e5d00: mov w8, #0x147b */
  ARC_W_W(c, 8, UINT64_C(5243));
  /* e5d04: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* e5d08: mul w8, w13, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 8))));
  /* e5d0c: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* e5d10: ldrh w10, [x12, x11, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* e5d14: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* e5d18: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* e5d1c: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* e5d20: msub w9, w8, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e5d24: ldrh w8, [x12, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* e5d28: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* e5d2c: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e5d30: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e5d34: strh w8, [x0, #8] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
L_e5d38:;
  /* e5d38: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* e5d3c: sub x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) - ARC_X_R(c, 8)));
  /* e5d40: cmn x20, #8 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(8), 0);
  /* e5d44: b.hs #0xe5dbc */
  if (ARC_COND(c, 2)) goto L_e5dbc;
  /* e5d48: cmp x20, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(22));
  /* e5d4c: b.hi #0xe5d5c */
  if (ARC_COND(c, 8)) goto L_e5d5c;
  /* e5d50: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* e5d54: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e5d58: b #0xe5d84 */
  goto L_e5d84;
L_e5d5c:;
  /* e5d5c: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* e5d60: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e5d64: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e5d68: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e5d6c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e5d70: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941428));
  fn1_1428f0(c);
  /* e5d74: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e5d78: stp x20, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e5d7c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e5d80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e5d84:;
  /* e5d84: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* e5d88: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e5d8c: b.eq #0xe5da0 */
  if (ARC_COND(c, 0)) goto L_e5da0;
  /* e5d90: add x1, sp, #0xc */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(12)));
  /* e5d94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e5d98: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e5d9c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941472));
  fn1_1449d8(c);
L_e5da0:;
  /* e5da0: strb wzr, [x19, x20] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* e5da4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e5da8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e5dac: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e5db0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e5db4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e5db8: ret  */
  return;
L_e5dbc:;
  /* e5dbc: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(941504));
  fn1_d7d54(c);
}

void fn1_e954c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038883660));
  /* e954c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9550: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9554: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9558: bl #0x143100 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955740));
  fn1_143100(c);
  /* e955c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9560: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9564: ret  */
  return;
  /* e9568: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955756));
  fn1_a1454(c);
}

void fn1_eb4b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038891704));
  /* eb4b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb4bc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb4c0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb4c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb4c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb4cc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963792));
  fn1_142518(c);
  /* eb4d0: cbnz w0, #0xeb540 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb540;
  /* eb4d4: ldr w9, [x19, #0x88] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb4d8: and w8, w9, #0x7fffffff */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(2147483647)));
  /* eb4dc: and w9, w9, #0x80000000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(2147483648)));
  /* eb4e0: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* eb4e4: orr w9, w8, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* eb4e8: str w9, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 9));
  /* eb4ec: tbnz w9, #0x1f, #0xeb510 */
  if (((ARC_W_R(c, 9)) >> 31 & 1) != 0) goto L_eb510;
  /* eb4f0: mov w9, #0x7ffffffe */
  ARC_W_W(c, 9, UINT64_C(2147483646));
  /* eb4f4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* eb4f8: b.ne #0xeb514 */
  if (ARC_COND(c, 1)) goto L_eb514;
  /* eb4fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb500: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963844));
  fn1_142560(c);
  /* eb504: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb508: bl #0x143100 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963852));
  fn1_143100(c);
  /* eb50c: b #0xeb530 */
  goto L_eb530;
L_eb510:;
  /* eb510: cbz w8, #0xeb520 */
  if ((ARC_W_R(c, 8)) == 0) goto L_eb520;
L_eb514:;
  /* eb514: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb518: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963868));
  fn1_142560(c);
  /* eb51c: b #0xeb530 */
  goto L_eb530;
L_eb520:;
  /* eb520: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb524: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963880));
  fn1_142560(c);
  /* eb528: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* eb52c: bl #0x143100 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963888));
  fn1_143100(c);
L_eb530:;
  /* eb530: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb534: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb538: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb53c: ret  */
  return;
L_eb540:;
  /* eb540: nop  */
  /* nop: no architectural effect here */
  /* eb544: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb548: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963916));
  fn1_142a40(c);
  /* eb54c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963920));
  fn1_a1454(c);
  /* eb550: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963924));
  fn1_a1454(c);
  /* eb554: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963928));
  fn1_a1454(c);
  /* eb558: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963932));
  fn1_a1454(c);
  /* eb55c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963936));
  fn1_a1454(c);
}

void fn1_ed258(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899288));
  /* ed258: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed25c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed260: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ed264: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed268: ldp x9, x8, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ed26c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ed270: b.eq #0xed28c */
  if (ARC_COND(c, 0)) goto L_ed28c;
  /* ed274: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ed278: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* ed27c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ed280: b.eq #0xed2b4 */
  if (ARC_COND(c, 0)) goto L_ed2b4;
L_ed284:;
  /* ed284: ldrb w0, [x9] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 9)));
  /* ed288: b #0xed2cc */
  goto L_ed2cc;
L_ed28c:;
  /* ed28c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed290: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ed294: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* ed298: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(971420));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ed29c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ed2a0: b.eq #0xed2cc */
  if (ARC_COND(c, 0)) goto L_ed2cc;
  /* ed2a4: ldp x9, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ed2a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ed2ac: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ed2b0: b.ne #0xed284 */
  if (ARC_COND(c, 1)) goto L_ed284;
L_ed2b4:;
  /* ed2b4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed2b8: ldr x16, [x8, #0x48] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* ed2bc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed2c0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed2c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed2c8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_ed2cc:;
  /* ed2cc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed2d0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed2d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed2d8: ret  */
  return;
}

void fn1_f046c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038912108));
  /* f046c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0470: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f0474: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f0478: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f047c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0480: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f0484: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f0488: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f048c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f0490: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984212));
  fn1_1435f8(c);
  /* f0494: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f0498: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f049c: b.ne #0xf04c4 */
  if (ARC_COND(c, 1)) goto L_f04c4;
  /* f04a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f04a4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f04a8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f04ac: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f04b0: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f04b4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f04b8: b.eq #0xf04cc */
  if (ARC_COND(c, 0)) goto L_f04cc;
  /* f04bc: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* f04c0: b #0xf04d8 */
  goto L_f04d8;
L_f04c4:;
  /* f04c4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f04c8: b #0xf0514 */
  goto L_f0514;
L_f04cc:;
  /* f04cc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f04d0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f04d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984280));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f04d8:;
  /* f04d8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f04dc: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* f04e0: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
L_f04e4:;
  /* f04e4: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f04e8: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f04ec: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f04f0: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f04f4: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f04f8: ldp w10, w12, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 12, arc_ld32(_pa + 4));
  }
  /* f04fc: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f0500: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f0504: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* f0508: tst w8, w12 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 12)));
  /* f050c: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f0510: b.ne #0xf0524 */
  if (ARC_COND(c, 1)) goto L_f0524;
L_f0514:;
  /* f0514: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f0518: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f051c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0520: ret  */
  return;
L_f0524:;
  /* f0524: nop  */
  /* nop: no architectural effect here */
  /* f0528: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f052c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984368));
  fn1_ec720(c);
  /* f0530: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984372));
  fn1_142548(c);
  /* f0534: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0538: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f053c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0540: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0544: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f0548: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f054c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0550: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0554: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f0558: tbnz w8, #0, #0xf056c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f056c;
  /* f055c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984416));
  fn1_142980(c);
  /* f0560: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f0564: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f0568: b #0xf04e4 */
  goto L_f04e4;
L_f056c:;
  /* f056c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984432));
  fn1_1429b0(c);
  /* f0570: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0574: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984440));
  fn1_142980(c);
  /* f0578: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f057c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984448));
  fn1_9cc20(c);
  /* f0580: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984452));
  fn1_a1454(c);
}

void fn1_f3c80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926464));
  /* f3c80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f3c84: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3c88: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f3c8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3c90: ldp x9, x8, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* f3c94: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* f3c98: b.eq #0xf3cc0 */
  if (ARC_COND(c, 0)) goto L_f3cc0;
  /* f3c9c: ldr w8, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 8, arc_ld32(_a));
  }
  /* f3ca0: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* f3ca4: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* f3ca8: b.eq #0xf3ce0 */
  if (ARC_COND(c, 0)) goto L_f3ce0;
L_f3cac:;
  /* f3cac: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f3cb0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f3cb4: b.eq #0xf3cf4 */
  if (ARC_COND(c, 0)) goto L_f3cf4;
  /* f3cb8: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* f3cbc: b #0xf3ce4 */
  goto L_f3ce4;
L_f3cc0:;
  /* f3cc0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3cc4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f3cc8: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f3ccc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998608));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f3cd0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* f3cd4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3cd8: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* f3cdc: b.ne #0xf3cac */
  if (ARC_COND(c, 1)) goto L_f3cac;
L_f3ce0:;
  /* f3ce0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
L_f3ce4:;
  /* f3ce4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3ce8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3cec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3cf0: ret  */
  return;
L_f3cf4:;
  /* f3cf4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3cf8: ldr x16, [x8, #0x48] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f3cfc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3d00: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3d04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3d08: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f6e88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038939272));
  /* f6e88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f6e8c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6e90: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f6e94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f6e98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6e9c: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f6ea0: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f6ea4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f6ea8: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f6eac: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011376));
  fn1_143670(c);
  /* f6eb0: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f6eb4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f6eb8: b.ne #0xf6ee0 */
  if (ARC_COND(c, 1)) goto L_f6ee0;
  /* f6ebc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6ec0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6ec4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6ec8: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f6ecc: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f6ed0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f6ed4: b.eq #0xf6ee8 */
  if (ARC_COND(c, 0)) goto L_f6ee8;
  /* f6ed8: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* f6edc: b #0xf6ef4 */
  goto L_f6ef4;
L_f6ee0:;
  /* f6ee0: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f6ee4: b #0xf6f30 */
  goto L_f6f30;
L_f6ee8:;
  /* f6ee8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f6eec: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* f6ef0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011444));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f6ef4:;
  /* f6ef4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f6ef8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* f6efc: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
L_f6f00:;
  /* f6f00: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f6f04: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f6f08: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f6f0c: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f6f10: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f6f14: ldp w10, w12, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 12, arc_ld32(_pa + 4));
  }
  /* f6f18: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f6f1c: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f6f20: orr w8, w10, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) | ARC_W_R(c, 8)));
  /* f6f24: tst w8, w12 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 12)));
  /* f6f28: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f6f2c: b.ne #0xf6f40 */
  if (ARC_COND(c, 1)) goto L_f6f40;
L_f6f30:;
  /* f6f30: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f6f34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6f38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f6f3c: ret  */
  return;
L_f6f40:;
  /* f6f40: nop  */
  /* nop: no architectural effect here */
  /* f6f44: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f6f48: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011532));
  fn1_ec720(c);
  /* f6f4c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011536));
  fn1_142548(c);
  /* f6f50: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6f54: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6f58: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f6f5c: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f6f60: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f6f64: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f6f68: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6f6c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6f70: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f6f74: tbnz w8, #0, #0xf6f88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f6f88;
  /* f6f78: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011580));
  fn1_142980(c);
  /* f6f7c: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* f6f80: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f6f84: b #0xf6f00 */
  goto L_f6f00;
L_f6f88:;
  /* f6f88: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011596));
  fn1_1429b0(c);
  /* f6f8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6f90: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011604));
  fn1_142980(c);
  /* f6f94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6f98: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011612));
  fn1_9cc20(c);
  /* f6f9c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011616));
  fn1_a1454(c);
}

void fn1_fbd60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038959456));
  /* fbd60: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fbd64: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fbd68: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* fbd6c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fbd70: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fbd74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fbd78: ldr x21, [x0, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* fbd7c: nop  */
  /* nop: no architectural effect here */
  /* fbd80: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fbd84: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fbd88: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* fbd8c: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* fbd90: b.eq #0xfbda0 */
  if (ARC_COND(c, 0)) goto L_fbda0;
  /* fbd94: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fbd98: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fbd9c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031584));
  fn1_db2e0(c);
L_fbda0:;
  /* fbda0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fbda4: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* fbda8: b.eq #0xfbdb8 */
  if (ARC_COND(c, 0)) goto L_fbdb8;
  /* fbdac: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fbdb0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fbdb4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031608));
  fn1_db2e0(c);
L_fbdb8:;
  /* fbdb8: ldr x22, [x20, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* fbdbc: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* fbdc0: b.eq #0xfbde4 */
  if (ARC_COND(c, 0)) goto L_fbde4;
  /* fbdc4: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* fbdc8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fbdcc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031632));
  fn1_bd950(c);
  /* fbdd0: cbnz x0, #0xfbde4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fbde4;
  /* fbdd4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* fbdd8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fbddc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fbde0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031652));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fbde4:;
  /* fbde4: ldr x22, [x19, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fbde8: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* fbdec: str x22, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 22));
  /* fbdf0: b.eq #0xfbe04 */
  if (ARC_COND(c, 0)) goto L_fbe04;
  /* fbdf4: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fbdf8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fbdfc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031680));
  fn1_db2e0(c);
  /* fbe00: ldr x22, [x19, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_fbe04:;
  /* fbe04: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* fbe08: b.eq #0xfbe2c */
  if (ARC_COND(c, 0)) goto L_fbe2c;
  /* fbe0c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* fbe10: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fbe14: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031704));
  fn1_bd950(c);
  /* fbe18: cbnz x0, #0xfbe2c */
  if ((ARC_X_R(c, 0)) != 0) goto L_fbe2c;
  /* fbe1c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* fbe20: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fbe24: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fbe28: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031724));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fbe2c:;
  /* fbe2c: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* fbe30: str x21, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 21));
  /* fbe34: b.eq #0xfbe58 */
  if (ARC_COND(c, 0)) goto L_fbe58;
  /* fbe38: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fbe3c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fbe40: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031748));
  fn1_bd950(c);
  /* fbe44: cbnz x0, #0xfbe58 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fbe58;
  /* fbe48: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fbe4c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fbe50: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fbe54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031768));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fbe58:;
  /* fbe58: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fbe5c: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* fbe60: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* fbe64: str x9, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 9));
  /* fbe68: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* fbe6c: ldr x9, [x20, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* fbe70: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
  /* fbe74: str x9, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 9));
  /* fbe78: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* fbe7c: ldr x9, [x20, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* fbe80: str x8, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 8));
  /* fbe84: str x9, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 9));
  /* fbe88: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* fbe8c: ldr x9, [x20, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* fbe90: str x8, [x20, #0x28] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)), ARC_X_R(c, 8));
  /* fbe94: str x9, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 9));
  /* fbe98: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* fbe9c: ldr x9, [x20, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* fbea0: str x8, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 8));
  /* fbea4: str x9, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 9));
  /* fbea8: ldr x8, [x19, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* fbeac: ldr x9, [x20, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* fbeb0: str x8, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 8));
  /* fbeb4: add x8, x19, #0x58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* fbeb8: str x9, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 9));
  /* fbebc: add x9, x20, #0x58 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + UINT64_C(88)));
  /* fbec0: ldr x11, [x19, #0x40] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fbec4: ldr x10, [x20, #0x40] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* fbec8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* fbecc: b.eq #0xfbf04 */
  if (ARC_COND(c, 0)) goto L_fbf04;
  /* fbed0: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* fbed4: b.eq #0xfbf04 */
  if (ARC_COND(c, 0)) goto L_fbf04;
  /* fbed8: str x11, [x20, #0x40] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(64)), ARC_X_R(c, 11));
  /* fbedc: str x10, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 10));
  /* fbee0: ldr x10, [x19, #0x48] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* fbee4: ldr x11, [x20, #0x48] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 20) + INT64_C(72))));
  /* fbee8: str x10, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), ARC_X_R(c, 10));
  /* fbeec: str x11, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 11));
  /* fbef0: ldr x10, [x19, #0x50] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fbef4: ldr x11, [x20, #0x50] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 20) + INT64_C(80))));
  /* fbef8: str x10, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 10));
  /* fbefc: str x11, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 11));
  /* fbf00: b #0xfbfac */
  goto L_fbfac;
L_fbf04:;
  /* fbf04: dup v1.2d, x10 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 10));
    _t.u64[1] = (ARC_X_R(c, 10));
    (c)->q[1] = _t; }
  /* fbf08: dup v2.2d, x11 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 11));
    _t.u64[1] = (ARC_X_R(c, 11));
    (c)->q[2] = _t; }
  /* fbf0c: ldur q0, [x20, #0x48] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(72))), arc_ld64((ARC_X_R(c, 20) + INT64_C(72)) + 8));
  /* fbf10: ldur q3, [x19, #0x48] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))), arc_ld64((ARC_X_R(c, 19) + INT64_C(72)) + 8));
  /* fbf14: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* fbf18: cmeq v4.2d, v0.2d, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].u64[0] == 0) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[0].u64[1] == 0) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* fbf1c: sub v0.2d, v0.2d, v1.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[0].u64[0] - (c)->q[1].u64[0];
    _t.u64[1] = (c)->q[0].u64[1] - (c)->q[1].u64[1];
    (c)->q[0] = _t; }
  /* fbf20: cmeq v1.2d, v3.2d, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[3].u64[0] == 0) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[3].u64[1] == 0) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[1] = _t; }
  /* fbf24: sub v2.2d, v3.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] - (c)->q[2].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] - (c)->q[2].u64[1];
    (c)->q[2] = _t; }
  /* fbf28: bic v0.16b, v0.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] & (~(c)->q[4].u8[0]);
    _t.u8[1] = (c)->q[0].u8[1] & (~(c)->q[4].u8[1]);
    _t.u8[2] = (c)->q[0].u8[2] & (~(c)->q[4].u8[2]);
    _t.u8[3] = (c)->q[0].u8[3] & (~(c)->q[4].u8[3]);
    _t.u8[4] = (c)->q[0].u8[4] & (~(c)->q[4].u8[4]);
    _t.u8[5] = (c)->q[0].u8[5] & (~(c)->q[4].u8[5]);
    _t.u8[6] = (c)->q[0].u8[6] & (~(c)->q[4].u8[6]);
    _t.u8[7] = (c)->q[0].u8[7] & (~(c)->q[4].u8[7]);
    _t.u8[8] = (c)->q[0].u8[8] & (~(c)->q[4].u8[8]);
    _t.u8[9] = (c)->q[0].u8[9] & (~(c)->q[4].u8[9]);
    _t.u8[10] = (c)->q[0].u8[10] & (~(c)->q[4].u8[10]);
    _t.u8[11] = (c)->q[0].u8[11] & (~(c)->q[4].u8[11]);
    _t.u8[12] = (c)->q[0].u8[12] & (~(c)->q[4].u8[12]);
    _t.u8[13] = (c)->q[0].u8[13] & (~(c)->q[4].u8[13]);
    _t.u8[14] = (c)->q[0].u8[14] & (~(c)->q[4].u8[14]);
    _t.u8[15] = (c)->q[0].u8[15] & (~(c)->q[4].u8[15]);
    (c)->q[0] = _t; }
  /* fbf2c: bic v1.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] & (~(c)->q[1].u8[0]);
    _t.u8[1] = (c)->q[2].u8[1] & (~(c)->q[1].u8[1]);
    _t.u8[2] = (c)->q[2].u8[2] & (~(c)->q[1].u8[2]);
    _t.u8[3] = (c)->q[2].u8[3] & (~(c)->q[1].u8[3]);
    _t.u8[4] = (c)->q[2].u8[4] & (~(c)->q[1].u8[4]);
    _t.u8[5] = (c)->q[2].u8[5] & (~(c)->q[1].u8[5]);
    _t.u8[6] = (c)->q[2].u8[6] & (~(c)->q[1].u8[6]);
    _t.u8[7] = (c)->q[2].u8[7] & (~(c)->q[1].u8[7]);
    _t.u8[8] = (c)->q[2].u8[8] & (~(c)->q[1].u8[8]);
    _t.u8[9] = (c)->q[2].u8[9] & (~(c)->q[1].u8[9]);
    _t.u8[10] = (c)->q[2].u8[10] & (~(c)->q[1].u8[10]);
    _t.u8[11] = (c)->q[2].u8[11] & (~(c)->q[1].u8[11]);
    _t.u8[12] = (c)->q[2].u8[12] & (~(c)->q[1].u8[12]);
    _t.u8[13] = (c)->q[2].u8[13] & (~(c)->q[1].u8[13]);
    _t.u8[14] = (c)->q[2].u8[14] & (~(c)->q[1].u8[14]);
    _t.u8[15] = (c)->q[2].u8[15] & (~(c)->q[1].u8[15]);
    (c)->q[1] = _t; }
  /* fbf30: b.eq #0xfbf50 */
  if (ARC_COND(c, 0)) goto L_fbf50;
  /* fbf34: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* fbf38: b.ne #0xfbf6c */
  if (ARC_COND(c, 1)) goto L_fbf6c;
  /* fbf3c: str x10, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 10));
  /* fbf40: str x9, [x20, #0x40] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(64)), ARC_X_R(c, 9));
  /* fbf44: ldr x10, [x19, #0x58] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* fbf48: str x10, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), ARC_X_R(c, 10));
  /* fbf4c: b #0xfbf7c */
  goto L_fbf7c;
L_fbf50:;
  /* fbf50: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* fbf54: b.eq #0xfbf6c */
  if (ARC_COND(c, 0)) goto L_fbf6c;
  /* fbf58: str x11, [x20, #0x40] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(64)), ARC_X_R(c, 11));
  /* fbf5c: str x8, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 8));
  /* fbf60: ldr x10, [x20, #0x58] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* fbf64: str x10, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 10));
  /* fbf68: b #0xfbf7c */
  goto L_fbf7c;
L_fbf6c:;
  /* fbf6c: ldr x10, [x8] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 8)));
  /* fbf70: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* fbf74: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* fbf78: str x11, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 11));
L_fbf7c:;
  /* fbf7c: mov x10, v1.d[1] */
  ARC_X_W(c, 10, (c)->q[1].u64[1]);
  /* fbf80: fmov x12, d1 */
  ARC_X_W(c, 12, ARC_DU_R(c, 1));
  /* fbf84: ldr x11, [x20, #0x40] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* fbf88: mov x13, v0.d[1] */
  ARC_X_W(c, 13, (c)->q[0].u64[1]);
  /* fbf8c: fmov x15, d0 */
  ARC_X_W(c, 15, ARC_DU_R(c, 0));
  /* fbf90: ldr x14, [x19, #0x40] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fbf94: add x12, x11, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* fbf98: add x10, x11, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* fbf9c: add x11, x14, x15 */
  ARC_X_W(c, 11, (ARC_X_R(c, 14) + ARC_X_R(c, 15)));
  /* fbfa0: stp x12, x10, [x20, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* fbfa4: add x10, x14, x13 */
  ARC_X_W(c, 10, (ARC_X_R(c, 14) + ARC_X_R(c, 13)));
  /* fbfa8: stp x11, x10, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
L_fbfac:;
  /* fbfac: ldp x10, x11, [x19, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(96));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* fbfb0: ldp x12, x13, [x20, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(96));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* fbfb4: stp x10, x11, [x20, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* fbfb8: ldr x10, [x19, #0x70] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* fbfbc: stp x12, x13, [x19, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 13));
  }
  /* fbfc0: ldur q0, [x19, #0x78] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))), arc_ld64((ARC_X_R(c, 19) + INT64_C(120)) + 8));
  /* fbfc4: ldr x11, [x20, #0x70] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* fbfc8: ldur q1, [x20, #0x78] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(120))), arc_ld64((ARC_X_R(c, 20) + INT64_C(120)) + 8));
  /* fbfcc: str x10, [x20, #0x70] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(112)), ARC_X_R(c, 10));
  /* fbfd0: stur q0, [x20, #0x78] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* fbfd4: str x11, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 11));
  /* fbfd8: ldr x10, [x19, #0x88] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(136))));
  /* fbfdc: stur q1, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)) + 8, (c)->q[1].u64[1]);
  /* fbfe0: ldr x11, [x20, #0x88] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 20) + INT64_C(136))));
  /* fbfe4: str x10, [x20, #0x88] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(136)), ARC_X_R(c, 10));
  /* fbfe8: ldr x10, [x19, #0x90] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(144))));
  /* fbfec: str x11, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 11));
  /* fbff0: ldr x11, [x20, #0x90] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 20) + INT64_C(144))));
  /* fbff4: str x10, [x20, #0x90] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(144)), ARC_X_R(c, 10));
  /* fbff8: ldr w10, [x19, #0x98] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(152))));
  /* fbffc: ldrb w12, [x19, #0xa0] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 19) + INT64_C(160))));
  /* fc000: str x11, [x19, #0x90] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)), ARC_X_R(c, 11));
  /* fc004: ldr w11, [x20, #0x98] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 20) + INT64_C(152))));
  /* fc008: str w10, [x20, #0x98] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(152)), ARC_W_R(c, 10));
  /* fc00c: ldrb w10, [x20, #0xa0] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(160))));
  /* fc010: strb w12, [x20, #0xa0] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(160)), ARC_W_R(c, 12));
  /* fc014: str w11, [x19, #0x98] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(152)), ARC_W_R(c, 11));
  /* fc018: ldr w11, [x19, #0x9c] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(156))));
  /* fc01c: strb w10, [x19, #0xa0] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 10));
  /* fc020: ldrb w10, [x19, #0xa1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(161))));
  /* fc024: ldr w12, [x20, #0x9c] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 20) + INT64_C(156))));
  /* fc028: str w11, [x20, #0x9c] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(156)), ARC_W_R(c, 11));
  /* fc02c: ldrb w11, [x20, #0xa1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 20) + INT64_C(161))));
  /* fc030: strb w10, [x20, #0xa1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(161)), ARC_W_R(c, 10));
  /* fc034: strb w11, [x19, #0xa1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(161)), ARC_W_R(c, 11));
  /* fc038: ldr x11, [x20, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* fc03c: ldrb w10, [x19, #0xa2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(162))));
  /* fc040: str w12, [x19, #0x9c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(156)), ARC_W_R(c, 12));
  /* fc044: ldrb w12, [x20, #0xa2] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 20) + INT64_C(162))));
  /* fc048: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* fc04c: strb w10, [x20, #0xa2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(162)), ARC_W_R(c, 10));
  /* fc050: strb w12, [x19, #0xa2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(162)), ARC_W_R(c, 12));
  /* fc054: b.eq #0xfc084 */
  if (ARC_COND(c, 0)) goto L_fc084;
  /* fc058: ldr x10, [x20, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* fc05c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* fc060: b.ne #0xfc0a0 */
  if (ARC_COND(c, 1)) goto L_fc0a0;
  /* fc064: ldp x11, x10, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* fc068: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* fc06c: sub x11, x11, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 8)));
  /* fc070: add x10, x9, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* fc074: str x10, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 10));
  /* fc078: add x10, x9, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ARC_X_R(c, 11)));
  /* fc07c: stp x9, x10, [x20, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* fc080: b #0xfc0a0 */
  goto L_fc0a0;
L_fc084:;
  /* fc084: ldp x10, x11, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* fc088: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* fc08c: sub x11, x11, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 8)));
  /* fc090: add x10, x9, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* fc094: add x11, x9, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + ARC_X_R(c, 11)));
  /* fc098: stp x9, x10, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* fc09c: str x11, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 11));
L_fc0a0:;
  /* fc0a0: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* fc0a4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* fc0a8: b.eq #0xfc0d8 */
  if (ARC_COND(c, 0)) goto L_fc0d8;
  /* fc0ac: ldr x10, [x19, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* fc0b0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* fc0b4: b.ne #0xfc0f4 */
  if (ARC_COND(c, 1)) goto L_fc0f4;
  /* fc0b8: ldp x11, x10, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* fc0bc: str x8, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 8));
  /* fc0c0: sub x10, x10, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 9)));
  /* fc0c4: sub x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) - ARC_X_R(c, 9)));
  /* fc0c8: add x10, x8, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* fc0cc: add x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* fc0d0: stp x9, x10, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* fc0d4: b #0xfc0f4 */
  goto L_fc0f4;
L_fc0d8:;
  /* fc0d8: ldp x10, x11, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* fc0dc: sub x10, x10, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 9)));
  /* fc0e0: sub x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) - ARC_X_R(c, 9)));
  /* fc0e4: add x10, x8, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* fc0e8: stp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* fc0ec: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* fc0f0: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_fc0f4:;
  /* fc0f4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fc0f8: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* fc0fc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fc100: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fc104: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fc108: ret  */
  return;
}

void fn1_ff244(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038972996));
  /* ff244: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff248: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* ff24c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff250: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ff254: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ff258: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ff25c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* ff260: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* ff264: b.eq #0xff298 */
  if (ARC_COND(c, 0)) goto L_ff298;
  /* ff268: ldrb w8, [x0, #0x58] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(88))));
  /* ff26c: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* ff270: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ff274: stur w1, [x29, #-0xc] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 1));
  /* ff278: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ff27c: b.ne #0xff2a0 */
  if (ARC_COND(c, 1)) goto L_ff2a0;
  /* ff280: ldr x1, [x20, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* ff284: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* ff288: bl #0x143850 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045132));
  fn1_143850(c);
  /* ff28c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ff290: csinv w19, w19, wzr, ne */
  ARC_W_W(c, 19, (ARC_COND(c, 1) ? (ARC_W_R(c, 19)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* ff294: b #0xff34c */
  goto L_ff34c;
L_ff298:;
  /* ff298: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* ff29c: b #0xff34c */
  goto L_ff34c;
L_ff2a0:;
  /* ff2a0: sub x23, x29, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* ff2a4: sub x24, x29, #0xc */
  ARC_X_W(c, 24, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* ff2a8: sub x21, x29, #0xc */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* ff2ac: str x23, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 23));
L_ff2b0:;
  /* ff2b0: ldp x0, x1, [x20, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(72));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* ff2b4: add x3, x24, #4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 24) + UINT64_C(4)));
  /* ff2b8: mov x4, sp */
  ARC_X_W(c, 4, (c)->sp);
  /* ff2bc: sub x5, x29, #8 */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* ff2c0: add x6, x23, #8 */
  ARC_X_W(c, 6, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* ff2c4: add x7, sp, #8 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(8)));
  /* ff2c8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ff2cc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ff2d0: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* ff2d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045208));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ff2d8: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* ff2dc: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* ff2e0: b.eq #0xff348 */
  if (ARC_COND(c, 0)) goto L_ff348;
  /* ff2e4: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* ff2e8: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* ff2ec: b.eq #0xff32c */
  if (ARC_COND(c, 0)) goto L_ff32c;
  /* ff2f0: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* ff2f4: b.hi #0xff348 */
  if (ARC_COND(c, 8)) goto L_ff348;
  /* ff2f8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* ff2fc: ldr x3, [x20, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* ff300: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* ff304: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* ff308: sub x21, x8, x23 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - ARC_X_R(c, 23)));
  /* ff30c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ff310: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045268));
  fn1_1427d0(c);
  /* ff314: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* ff318: b.ne #0xff348 */
  if (ARC_COND(c, 1)) goto L_ff348;
  /* ff31c: ldr x21, [sp] */
  ARC_X_W(c, 21, arc_ld64((c)->sp));
  /* ff320: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* ff324: b.eq #0xff2b0 */
  if (ARC_COND(c, 0)) goto L_ff2b0;
  /* ff328: b #0xff34c */
  goto L_ff34c;
L_ff32c:;
  /* ff32c: ldr x3, [x20, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* ff330: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ff334: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* ff338: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* ff33c: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045312));
  fn1_1427d0(c);
  /* ff340: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* ff344: b.eq #0xff34c */
  if (ARC_COND(c, 0)) goto L_ff34c;
L_ff348:;
  /* ff348: mov w19, #-1 */
  ARC_W_W(c, 19, UINT64_C(18446744073709551615));
L_ff34c:;
  /* ff34c: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* ff350: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ff354: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ff358: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ff35c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff360: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* ff364: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff368: ret  */
  return;
}

void fn1_10cfbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039029692));
  /* 10cfbc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10cfc0: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 10cfc4: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10cfc8: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10cfcc: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10cfd0: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10cfd4: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10cfd8: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10cfdc: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 10cfe0: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10cfe4: mov x26, x6 */
  ARC_X_W(c, 26, ARC_X_R(c, 6));
  /* 10cfe8: mov x23, x5 */
  ARC_X_W(c, 23, ARC_X_R(c, 5));
  /* 10cfec: ldr x22, [x22, #0xb40] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2880))));
  /* 10cff0: ldr x19, [x6] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 6)));
  /* 10cff4: mov x24, x4 */
  ARC_X_W(c, 24, ARC_X_R(c, 4));
  /* 10cff8: mov x28, x3 */
  ARC_X_W(c, 28, ARC_X_R(c, 3));
  /* 10cffc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10d000: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10d004: ldar x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10d008: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 10d00c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10d010: b.eq #0x10d0cc */
  if (ARC_COND(c, 0)) goto L_10d0cc;
  /* 10d014: nop  */
  /* nop: no architectural effect here */
  /* 10d018: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d01c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101856));
  fn1_142518(c);
  /* 10d020: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10d024: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10d028: b.ne #0x10d054 */
  if (ARC_COND(c, 1)) goto L_10d054;
  /* 10d02c: nop  */
  /* nop: no architectural effect here */
  /* 10d030: adr x25, #0x15791c */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10d034: nop  */
  /* nop: no architectural effect here */
  /* 10d038: adr x27, #0x1578f4 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407220)));
L_10d03c:;
  /* 10d03c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10d040: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10d044: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101896));
  fn1_142530(c);
  /* 10d048: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10d04c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10d050: b.eq #0x10d03c */
  if (ARC_COND(c, 0)) goto L_10d03c;
L_10d054:;
  /* 10d054: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10d058: cbz x8, #0x10d06c */
  if ((ARC_X_R(c, 8)) == 0) goto L_10d06c;
  /* 10d05c: nop  */
  /* nop: no architectural effect here */
  /* 10d060: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d064: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101928));
  fn1_142560(c);
  /* 10d068: b #0x10d0cc */
  goto L_10d0cc;
L_10d06c:;
  /* 10d06c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10d070: stur x22, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 22));
  /* 10d074: sturb wzr, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 10d078: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 10d07c: nop  */
  /* nop: no architectural effect here */
  /* 10d080: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d084: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101960));
  fn1_142560(c);
  /* 10d088: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10d08c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10d090: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10d094: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101976));
  fn1_a2030(c);
  /* 10d098: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10d09c: str w8, [x22, #8] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10d0a0: nop  */
  /* nop: no architectural effect here */
  /* 10d0a4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d0a8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101996));
  fn1_142518(c);
  /* 10d0ac: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10d0b0: stlr x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 10d0b4: nop  */
  /* nop: no architectural effect here */
  /* 10d0b8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d0bc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102016));
  fn1_142560(c);
  /* 10d0c0: nop  */
  /* nop: no architectural effect here */
  /* 10d0c4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10d0c8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102028));
  fn1_142578(c);
L_10d0cc:;
  /* 10d0cc: ldp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10d0d0: ldrsw x9, [x22, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(8)))));
  /* 10d0d4: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10d0d8: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10d0dc: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10d0e0: b.hs #0x10d74c */
  if (ARC_COND(c, 2)) goto L_10d74c;
  /* 10d0e4: ldr x25, [x8, x9, lsl #3] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10d0e8: cbz x25, #0x10d74c */
  if ((ARC_X_R(c, 25)) == 0) goto L_10d74c;
  /* 10d0ec: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10d0f0: ldr x22, [x22, #0xcb0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(3248))));
  /* 10d0f4: ldr x19, [x26] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 26)));
  /* 10d0f8: ldar x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10d0fc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10d100: b.eq #0x10d1bc */
  if (ARC_COND(c, 0)) goto L_10d1bc;
  /* 10d104: nop  */
  /* nop: no architectural effect here */
  /* 10d108: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d10c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102096));
  fn1_142518(c);
  /* 10d110: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10d114: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10d118: b.ne #0x10d144 */
  if (ARC_COND(c, 1)) goto L_10d144;
  /* 10d11c: nop  */
  /* nop: no architectural effect here */
  /* 10d120: adr x26, #0x15791c */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10d124: nop  */
  /* nop: no architectural effect here */
  /* 10d128: adr x27, #0x1578f4 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407220)));
L_10d12c:;
  /* 10d12c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 10d130: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 10d134: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102136));
  fn1_142530(c);
  /* 10d138: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10d13c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10d140: b.eq #0x10d12c */
  if (ARC_COND(c, 0)) goto L_10d12c;
L_10d144:;
  /* 10d144: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 10d148: cbz x8, #0x10d15c */
  if ((ARC_X_R(c, 8)) == 0) goto L_10d15c;
  /* 10d14c: nop  */
  /* nop: no architectural effect here */
  /* 10d150: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d154: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102168));
  fn1_142560(c);
  /* 10d158: b #0x10d1bc */
  goto L_10d1bc;
L_10d15c:;
  /* 10d15c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10d160: stur x22, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 22));
  /* 10d164: sturb wzr, [x29, #-0x10] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 10d168: str x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 10d16c: nop  */
  /* nop: no architectural effect here */
  /* 10d170: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d174: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102200));
  fn1_142560(c);
  /* 10d178: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10d17c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10d180: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10d184: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102216));
  fn1_a2030(c);
  /* 10d188: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10d18c: str w8, [x22, #8] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10d190: nop  */
  /* nop: no architectural effect here */
  /* 10d194: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d198: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102236));
  fn1_142518(c);
  /* 10d19c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10d1a0: stlr x8, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 10d1a4: nop  */
  /* nop: no architectural effect here */
  /* 10d1a8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10d1ac: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102256));
  fn1_142560(c);
  /* 10d1b0: nop  */
  /* nop: no architectural effect here */
  /* 10d1b4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10d1b8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102268));
  fn1_142578(c);
L_10d1bc:;
  /* 10d1bc: ldp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10d1c0: ldrsw x9, [x22, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 22) + INT64_C(8)))));
  /* 10d1c4: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10d1c8: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10d1cc: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10d1d0: b.hs #0x10d74c */
  if (ARC_COND(c, 2)) goto L_10d74c;
  /* 10d1d4: ldr x26, [x8, x9, lsl #3] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10d1d8: cbz x26, #0x10d74c */
  if ((ARC_X_R(c, 26)) == 0) goto L_10d74c;
  /* 10d1dc: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10d1e0: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 10d1e4: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 10d1e8: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10d1ec: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102320));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10d1f0: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10d1f4: ldur x9, [x29, #-0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 10d1f8: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* 10d1fc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10d200: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10d204: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 10d208: cbz x8, #0x10d318 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10d318;
  /* 10d20c: str x28, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 28));
  /* 10d210: ldrb w1, [x19] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 19)));
  /* 10d214: str x28, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 28));
  /* 10d218: cmp w1, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(45));
  /* 10d21c: b.eq #0x10d22c */
  if (ARC_COND(c, 0)) goto L_10d22c;
  /* 10d220: cmp w1, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(43));
  /* 10d224: mov x28, x19 */
  ARC_X_W(c, 28, ARC_X_R(c, 19));
  /* 10d228: b.ne #0x10d250 */
  if (ARC_COND(c, 1)) goto L_10d250;
L_10d22c:;
  /* 10d22c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10d230: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10d234: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10d238: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102396));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10d23c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 10d240: add x28, x19, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 10d244: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10d248: str x9, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 10d24c: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
L_10d250:;
  /* 10d250: sub x8, x20, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 28)));
  /* 10d254: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 10d258: b.lt #0x10d2c4 */
  if (ARC_COND(c, 11)) goto L_10d2c4;
  /* 10d25c: ldrb w8, [x28] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 28)));
  /* 10d260: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10d264: b.ne #0x10d2c4 */
  if (ARC_COND(c, 1)) goto L_10d2c4;
  /* 10d268: ldrb w8, [x28, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 28) + INT64_C(1))));
  /* 10d26c: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10d270: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10d274: b.ne #0x10d2c4 */
  if (ARC_COND(c, 1)) goto L_10d2c4;
  /* 10d278: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10d27c: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10d280: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10d284: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 10d288: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102476));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10d28c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 10d290: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10d294: str x9, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 10d298: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 10d29c: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10d2a0: ldrb w1, [x28, #1] */
  ARC_W_W(c, 1, arc_ld8((ARC_X_R(c, 28) + INT64_C(1))));
  /* 10d2a4: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10d2a8: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10d2ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102512));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10d2b0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 10d2b4: add x28, x28, #2 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(2)));
  /* 10d2b8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10d2bc: str x9, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 10d2c0: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
L_10d2c4:;
  /* 10d2c4: cmp x28, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 20));
  /* 10d2c8: str x28, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 28));
  /* 10d2cc: b.eq #0x10d460 */
  if (ARC_COND(c, 0)) goto L_10d460;
  /* 10d2d0: sub x8, x20, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* 10d2d4: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 10d2d8: b.hs #0x10d460 */
  if (ARC_COND(c, 2)) goto L_10d460;
  /* 10d2dc: sub x11, x20, #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) - UINT64_C(2)));
  /* 10d2e0: add x10, x28, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* 10d2e4: mvn x12, x28 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 28))));
  /* 10d2e8: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 10d2ec: csinc x9, x11, x28, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 28)) + 1)));
  /* 10d2f0: adds x9, x9, x12 */
  ARC_X_W(c, 9, arc_add64(c, ARC_X_R(c, 9), ARC_X_R(c, 12), 0));
  /* 10d2f4: cset w13, ne */
  ARC_W_W(c, 13, (ARC_COND(c, 1) ? 1 : 0));
  /* 10d2f8: sub x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 13)));
  /* 10d2fc: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 10d300: cinc x9, x9, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) + 1 : (ARC_X_R(c, 9))));
  /* 10d304: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10d308: cmp x9, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(8));
  /* 10d30c: b.hs #0x10d344 */
  if (ARC_COND(c, 2)) goto L_10d344;
  /* 10d310: mov x11, x28 */
  ARC_X_W(c, 11, ARC_X_R(c, 28));
  /* 10d314: b #0x10d440 */
  goto L_10d440;
L_10d318:;
  /* 10d318: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10d31c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 10d320: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10d324: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 10d328: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 10d32c: mov x3, x28 */
  ARC_X_W(c, 3, ARC_X_R(c, 28));
  /* 10d330: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102644));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10d334: sub x8, x20, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 19)));
  /* 10d338: add x10, x28, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 28) + ARC_X_R(c, 8)));
  /* 10d33c: str x10, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 10));
  /* 10d340: b #0x10d6fc */
  goto L_10d6fc;
L_10d344:;
  /* 10d344: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 10d348: csinc x11, x11, x28, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 28)) + 1)));
  /* 10d34c: adds x11, x11, x12 */
  ARC_X_W(c, 11, arc_add64(c, ARC_X_R(c, 11), ARC_X_R(c, 12), 0));
  /* 10d350: cset w12, ne */
  ARC_W_W(c, 12, (ARC_COND(c, 1) ? 1 : 0));
  /* 10d354: sub x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* 10d358: lsr x11, x11, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* 10d35c: cinc x11, x11, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 10d360: cmp x28, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 20));
  /* 10d364: b.hs #0x10d380 */
  if (ARC_COND(c, 2)) goto L_10d380;
  /* 10d368: mvn x12, x11 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 11))));
  /* 10d36c: add x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* 10d370: add x11, x20, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) + ARC_X_R(c, 12)));
  /* 10d374: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 10d378: mov x11, x28 */
  ARC_X_W(c, 11, ARC_X_R(c, 28));
  /* 10d37c: b.lo #0x10d440 */
  if (ARC_COND(c, 3)) goto L_10d440;
L_10d380:;
  /* 10d380: cmp x9, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(32));
  /* 10d384: b.hs #0x10d390 */
  if (ARC_COND(c, 2)) goto L_10d390;
  /* 10d388: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* 10d38c: b #0x10d3f0 */
  goto L_10d3f0;
L_10d390:;
  /* 10d390: and x10, x9, #0xffffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551584)));
  /* 10d394: add x11, x28, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 28) + UINT64_C(16)));
  /* 10d398: sub x12, x20, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 20) - UINT64_C(16)));
  /* 10d39c: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_10d3a0:;
  /* 10d3a0: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10d3a4: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* 10d3a8: ldp q2, q3, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10d3ac: rev64 v0.16b, v0.16b */
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
  /* 10d3b0: rev64 v1.16b, v1.16b */
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
  /* 10d3b4: rev64 v2.16b, v2.16b */
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
  /* 10d3b8: rev64 v3.16b, v3.16b */
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
  /* 10d3bc: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 10d3c0: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 10d3c4: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 10d3c8: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 10d3cc: stp q0, q1, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 10d3d0: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* 10d3d4: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 10d3d8: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 10d3dc: cbnz x13, #0x10d3a0 */
  if ((ARC_X_R(c, 13)) != 0) goto L_10d3a0;
  /* 10d3e0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10d3e4: b.eq #0x10d460 */
  if (ARC_COND(c, 0)) goto L_10d460;
  /* 10d3e8: tst x9, #0x18 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(24)));
  /* 10d3ec: b.eq #0x10d438 */
  if (ARC_COND(c, 0)) goto L_10d438;
L_10d3f0:;
  /* 10d3f0: and x12, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* 10d3f4: sub x14, x20, x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 20) - ARC_X_R(c, 10)));
  /* 10d3f8: add x13, x28, x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 28) + ARC_X_R(c, 10)));
  /* 10d3fc: sub x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 12)));
  /* 10d400: add x11, x28, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 28) + ARC_X_R(c, 12)));
  /* 10d404: sub x10, x10, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 12)));
  /* 10d408: sub x14, x14, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(8)));
L_10d40c:;
  /* 10d40c: ldr d0, [x14] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 14)));
  /* 10d410: ldr d1, [x13] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 13)));
  /* 10d414: adds x10, x10, #8 */
  ARC_X_W(c, 10, arc_add64(c, ARC_X_R(c, 10), UINT64_C(8), 0));
  /* 10d418: rev64 v0.8b, v0.8b */
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
  /* 10d41c: rev64 v1.8b, v1.8b */
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
  /* 10d420: str d0, [x13], #8 */
  arc_st64(ARC_X_R(c, 13), (c)->q[0].u64[0]);
  ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(8));
  /* 10d424: str d1, [x14], #0xfffffffffffffff8 */
  arc_st64(ARC_X_R(c, 14), (c)->q[1].u64[0]);
  ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(-8));
  /* 10d428: b.ne #0x10d40c */
  if (ARC_COND(c, 1)) goto L_10d40c;
  /* 10d42c: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 10d430: b.ne #0x10d440 */
  if (ARC_COND(c, 1)) goto L_10d440;
  /* 10d434: b #0x10d460 */
  goto L_10d460;
L_10d438:;
  /* 10d438: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 10d43c: add x11, x28, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 28) + ARC_X_R(c, 10)));
L_10d440:;
  /* 10d440: add x9, x11, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + UINT64_C(1)));
L_10d444:;
  /* 10d444: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* 10d448: ldurb w11, [x9, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* 10d44c: sturb w10, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 10));
  /* 10d450: strb w11, [x8], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 10d454: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10d458: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10d45c: b.lo #0x10d444 */
  if (ARC_COND(c, 3)) goto L_10d444;
L_10d460:;
  /* 10d460: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 10d464: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 10d468: mov x21, x24 */
  ARC_X_W(c, 21, ARC_X_R(c, 24));
  /* 10d46c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 10d470: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 10d474: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1102968));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10d478: cmp x28, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 20));
  /* 10d47c: b.hs #0x10d538 */
  if (ARC_COND(c, 2)) goto L_10d538;
  /* 10d480: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10d484: mov w26, w0 */
  ARC_W_W(c, 26, ARC_W_R(c, 0));
  /* 10d488: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 10d48c: orr x27, x8, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10d490: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10d494: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 10d498: sub x24, x20, x8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
L_10d49c:;
  /* 10d49c: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10d4a0: ldur x9, [x29, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10d4a4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10d4a8: mov w8, w19 */
  ARC_W_W(c, 8, ARC_W_R(c, 19));
  /* 10d4ac: csel x10, x27, x9, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 9)));
  /* 10d4b0: ldrb w10, [x10, x8] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 8))));
  /* 10d4b4: cbz w10, #0x10d504 */
  if ((ARC_W_R(c, 10)) == 0) goto L_10d504;
  /* 10d4b8: ldurb w10, [x29, #-0x18] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10d4bc: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* 10d4c0: csel x9, x27, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 9)));
  /* 10d4c4: ldrb w9, [x9, x8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
  /* 10d4c8: cmp w22, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 22), ARC_W_R(c, 9));
  /* 10d4cc: b.ne #0x10d504 */
  if (ARC_COND(c, 1)) goto L_10d504;
  /* 10d4d0: ldr x9, [x23] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 23)));
  /* 10d4d4: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
  /* 10d4d8: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10d4dc: str x10, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 10));
  /* 10d4e0: strb w26, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 26));
  /* 10d4e4: ldurb w9, [x29, #-0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10d4e8: ldur x10, [x29, #-0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 10d4ec: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 10d4f0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 10d4f4: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 10d4f8: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10d4fc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10d500: cinc w19, w19, hi */
  ARC_W_W(c, 19, (ARC_COND(c, 8) ? (ARC_W_R(c, 19)) + 1 : (ARC_W_R(c, 19))));
L_10d504:;
  /* 10d504: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 10d508: ldrb w1, [x28] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 28)));
  /* 10d50c: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 10d510: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10d514: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103128));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10d518: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 10d51c: subs x24, x24, #1 */
  ARC_X_W(c, 24, arc_sub64(c, ARC_X_R(c, 24), UINT64_C(1)));
  /* 10d520: add w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) + UINT64_C(1)));
  /* 10d524: add x28, x28, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* 10d528: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 10d52c: str x9, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* 10d530: strb w0, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 10d534: b.ne #0x10d49c */
  if (ARC_COND(c, 1)) goto L_10d49c;
L_10d538:;
  /* 10d538: ldp x0, x19, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10d53c: ldr x28, [sp, #0x10] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(16))));
  /* 10d540: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 10d544: sub x13, x0, x19 */
  ARC_X_W(c, 13, (ARC_X_R(c, 0) - ARC_X_R(c, 19)));
  /* 10d548: add x9, x28, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) + ARC_X_R(c, 13)));
  /* 10d54c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10d550: b.eq #0x10d610 */
  if (ARC_COND(c, 0)) goto L_10d610;
  /* 10d554: sub x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 10d558: mov x24, x21 */
  ARC_X_W(c, 24, ARC_X_R(c, 21));
  /* 10d55c: ldr x21, [sp, #8] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10d560: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10d564: b.hs #0x10d6fc */
  if (ARC_COND(c, 2)) goto L_10d6fc;
  /* 10d568: add x11, x0, x28 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 28)));
  /* 10d56c: sub x15, x10, #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 10) - UINT64_C(2)));
  /* 10d570: sub x12, x11, x19 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) - ARC_X_R(c, 19)));
  /* 10d574: mvn x11, x0 */
  ARC_X_W(c, 11, (~(uint64_t)(ARC_X_R(c, 0))));
  /* 10d578: add x14, x12, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* 10d57c: add x16, x19, x11 */
  ARC_X_W(c, 16, (ARC_X_R(c, 19) + ARC_X_R(c, 11)));
  /* 10d580: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* 10d584: csinc x17, x15, x12, ls */
  ARC_X_W(c, 17, (ARC_COND(c, 9) ? (ARC_X_R(c, 15)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10d588: add x11, x17, x16 */
  ARC_X_W(c, 11, (ARC_X_R(c, 17) + ARC_X_R(c, 16)));
  /* 10d58c: cmp x11, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 28));
  /* 10d590: cinc x17, x28, ne */
  ARC_X_W(c, 17, (ARC_COND(c, 1) ? (ARC_X_R(c, 28)) + 1 : (ARC_X_R(c, 28))));
  /* 10d594: cmp x11, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 28));
  /* 10d598: sub x17, x11, x17 */
  ARC_X_W(c, 17, (ARC_X_R(c, 11) - ARC_X_R(c, 17)));
  /* 10d59c: lsr x17, x17, #1 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(1)) & 63)));
  /* 10d5a0: cinc x11, x17, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 17)) + 1 : (ARC_X_R(c, 17))));
  /* 10d5a4: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 10d5a8: cmp x11, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(8));
  /* 10d5ac: b.lo #0x10d6d8 */
  if (ARC_COND(c, 3)) goto L_10d6d8;
  /* 10d5b0: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* 10d5b4: csinc x12, x15, x12, ls */
  ARC_X_W(c, 12, (ARC_COND(c, 9) ? (ARC_X_R(c, 15)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10d5b8: add x12, x12, x16 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 16)));
  /* 10d5bc: cmp x12, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 28));
  /* 10d5c0: cinc x14, x28, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 28)) + 1 : (ARC_X_R(c, 28))));
  /* 10d5c4: cmp x12, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 28));
  /* 10d5c8: sub x12, x12, x14 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 10d5cc: cinc x15, x0, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 0)) + 1 : (ARC_X_R(c, 0))));
  /* 10d5d0: lsr x14, x12, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(1)) & 63)));
  /* 10d5d4: cinc x12, x14, ne */
  ARC_X_W(c, 12, (ARC_COND(c, 1) ? (ARC_X_R(c, 14)) + 1 : (ARC_X_R(c, 14))));
  /* 10d5d8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10d5dc: b.hs #0x10d600 */
  if (ARC_COND(c, 2)) goto L_10d600;
  /* 10d5e0: add x14, x15, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + ARC_X_R(c, 14)));
  /* 10d5e4: mvn x12, x12 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 12))));
  /* 10d5e8: sub x14, x14, x19 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - ARC_X_R(c, 19)));
  /* 10d5ec: add x12, x10, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + ARC_X_R(c, 12)));
  /* 10d5f0: add x14, x14, x28 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ARC_X_R(c, 28)));
  /* 10d5f4: add x14, x14, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(1)));
  /* 10d5f8: cmp x12, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 14));
  /* 10d5fc: b.lo #0x10d6d8 */
  if (ARC_COND(c, 3)) goto L_10d6d8;
L_10d600:;
  /* 10d600: cmp x11, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(32));
  /* 10d604: b.hs #0x10d61c */
  if (ARC_COND(c, 2)) goto L_10d61c;
  /* 10d608: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* 10d60c: b #0x10d680 */
  goto L_10d680;
L_10d610:;
  /* 10d610: mov x24, x21 */
  ARC_X_W(c, 24, ARC_X_R(c, 21));
  /* 10d614: ldr x21, [sp, #8] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10d618: b #0x10d6fc */
  goto L_10d6fc;
L_10d61c:;
  /* 10d61c: and x12, x11, #0xffffffffffffffe0 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) & UINT64_C(18446744073709551584)));
  /* 10d620: add x14, x13, x28 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + ARC_X_R(c, 28)));
  /* 10d624: sub x13, x10, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) - UINT64_C(16)));
  /* 10d628: add x14, x14, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(16)));
  /* 10d62c: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
L_10d630:;
  /* 10d630: ldp q1, q0, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10d634: subs x15, x15, #0x20 */
  ARC_X_W(c, 15, arc_sub64(c, ARC_X_R(c, 15), UINT64_C(32)));
  /* 10d638: ldp q2, q3, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 10d63c: rev64 v0.16b, v0.16b */
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
  /* 10d640: rev64 v1.16b, v1.16b */
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
  /* 10d644: rev64 v2.16b, v2.16b */
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
  /* 10d648: rev64 v3.16b, v3.16b */
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
  /* 10d64c: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 10d650: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 10d654: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 10d658: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 10d65c: stp q0, q1, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 10d660: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* 10d664: stp q3, q2, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 10d668: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* 10d66c: b.ne #0x10d630 */
  if (ARC_COND(c, 1)) goto L_10d630;
  /* 10d670: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* 10d674: b.eq #0x10d6f8 */
  if (ARC_COND(c, 0)) goto L_10d6f8;
  /* 10d678: tst x11, #0x18 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 11) & UINT64_C(24)));
  /* 10d67c: b.eq #0x10d6d0 */
  if (ARC_COND(c, 0)) goto L_10d6d0;
L_10d680:;
  /* 10d680: add x14, x0, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 0) + ARC_X_R(c, 12)));
  /* 10d684: and x13, x11, #0xfffffffffffffff8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) & UINT64_C(18446744073709551608)));
  /* 10d688: sub x15, x10, x12 */
  ARC_X_W(c, 15, (ARC_X_R(c, 10) - ARC_X_R(c, 12)));
  /* 10d68c: sub x14, x14, x19 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - ARC_X_R(c, 19)));
  /* 10d690: sub x8, x8, x13 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 13)));
  /* 10d694: add x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* 10d698: add x10, x28, x14 */
  ARC_X_W(c, 10, (ARC_X_R(c, 28) + ARC_X_R(c, 14)));
  /* 10d69c: sub x12, x12, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 13)));
  /* 10d6a0: sub x14, x15, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(8)));
L_10d6a4:;
  /* 10d6a4: ldr d0, [x14] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 14)));
  /* 10d6a8: ldr d1, [x10] */
  arc_du_w(c, 1, arc_ld64(ARC_X_R(c, 10)));
  /* 10d6ac: adds x12, x12, #8 */
  ARC_X_W(c, 12, arc_add64(c, ARC_X_R(c, 12), UINT64_C(8), 0));
  /* 10d6b0: rev64 v0.8b, v0.8b */
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
  /* 10d6b4: rev64 v1.8b, v1.8b */
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
  /* 10d6b8: str d0, [x10], #8 */
  arc_st64(ARC_X_R(c, 10), (c)->q[0].u64[0]);
  ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(8));
  /* 10d6bc: str d1, [x14], #0xfffffffffffffff8 */
  arc_st64(ARC_X_R(c, 14), (c)->q[1].u64[0]);
  ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(-8));
  /* 10d6c0: b.ne #0x10d6a4 */
  if (ARC_COND(c, 1)) goto L_10d6a4;
  /* 10d6c4: cmp x11, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 13));
  /* 10d6c8: b.ne #0x10d6d8 */
  if (ARC_COND(c, 1)) goto L_10d6d8;
  /* 10d6cc: b #0x10d6f8 */
  goto L_10d6f8;
L_10d6d0:;
  /* 10d6d0: sub x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 12)));
  /* 10d6d4: add x9, x9, x12 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 12)));
L_10d6d8:;
  /* 10d6d8: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
L_10d6dc:;
  /* 10d6dc: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* 10d6e0: ldurb w11, [x9, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* 10d6e4: sturb w10, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 10));
  /* 10d6e8: strb w11, [x8], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 10d6ec: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 10d6f0: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 10d6f4: b.lo #0x10d6dc */
  if (ARC_COND(c, 3)) goto L_10d6dc;
L_10d6f8:;
  /* 10d6f8: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
L_10d6fc:;
  /* 10d6fc: sub x8, x21, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 19)));
  /* 10d700: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 10d704: ldurb w9, [x29, #-0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10d708: add x8, x28, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + ARC_X_R(c, 8)));
  /* 10d70c: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 10d710: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 10d714: tbz w9, #0, #0x10d728 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_10d728;
  /* 10d718: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10d71c: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10d720: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10d724: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103656));
  fn1_142608(c);
L_10d728:;
  /* 10d728: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10d72c: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10d730: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10d734: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10d738: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10d73c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10d740: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 10d744: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10d748: ret  */
  return;
L_10d74c:;
  /* 10d74c: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103696));
  fn1_fc3b8(c);
  /* 10d750: b #0x10d774 */
  goto L_10d774;
  /* 10d754: b #0x10d774 */
  goto L_10d774;
  /* 10d758: b #0x10d774 */
  goto L_10d774;
  /* 10d75c: b #0x10d760 */
  goto L_10d760;
L_10d760:;
  /* 10d760: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10d764: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10d768: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103724));
  fn1_d2a78(c);
  /* 10d76c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10d770: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103732));
  fn1_9cc20(c);
L_10d774:;
  /* 10d774: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10d778: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10d77c: tbz w8, #0, #0x10d790 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10d790;
  /* 10d780: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10d784: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 10d788: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10d78c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103760));
  fn1_142608(c);
L_10d790:;
  /* 10d790: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10d794: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1103768));
  fn1_9cc20(c);
}

void fn1_113c04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057412));
  /* 113c04: bti c */
  /* bti: no architectural effect here */
  /* 113c08: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 113c0c: ret  */
  return;
}

void fn1_1141b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058864));
  /* 1141b0: bti c */
  /* bti: no architectural effect here */
  /* 1141b4: ldr w0, [x0, #0x7c] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(124))));
  /* 1141b8: ret  */
  return;
}

void fn1_1207d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039109588));
  /* 1207d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1207d8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1207dc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1207e0: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1207e4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1207e8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1207ec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1207f0: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1207f4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1207f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1207fc: ldr x23, [x23, #0xbf0] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3056))));
  /* 120800: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120804: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 120808: b.eq #0x1208c4 */
  if (ARC_COND(c, 0)) goto L_1208c4;
  /* 12080c: nop  */
  /* nop: no architectural effect here */
  /* 120810: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120814: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181720));
  fn1_142518(c);
  /* 120818: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 12081c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120820: b.ne #0x12084c */
  if (ARC_COND(c, 1)) goto L_12084c;
  /* 120824: nop  */
  /* nop: no architectural effect here */
  /* 120828: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 12082c: nop  */
  /* nop: no architectural effect here */
  /* 120830: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_120834:;
  /* 120834: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120838: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 12083c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181760));
  fn1_142530(c);
  /* 120840: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120844: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120848: b.eq #0x120834 */
  if (ARC_COND(c, 0)) goto L_120834;
L_12084c:;
  /* 12084c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120850: cbz x8, #0x120864 */
  if ((ARC_X_R(c, 8)) == 0) goto L_120864;
  /* 120854: nop  */
  /* nop: no architectural effect here */
  /* 120858: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12085c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181792));
  fn1_142560(c);
  /* 120860: b #0x1208c4 */
  goto L_1208c4;
L_120864:;
  /* 120864: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 120868: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 12086c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 120870: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 120874: nop  */
  /* nop: no architectural effect here */
  /* 120878: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12087c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181824));
  fn1_142560(c);
  /* 120880: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120884: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120888: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 12088c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181840));
  fn1_a2030(c);
  /* 120890: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 120894: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 120898: nop  */
  /* nop: no architectural effect here */
  /* 12089c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1208a0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181860));
  fn1_142518(c);
  /* 1208a4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1208a8: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1208ac: nop  */
  /* nop: no architectural effect here */
  /* 1208b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1208b4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181880));
  fn1_142560(c);
  /* 1208b8: nop  */
  /* nop: no architectural effect here */
  /* 1208bc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1208c0: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181892));
  fn1_142578(c);
L_1208c4:;
  /* 1208c4: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 1208c8: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 1208cc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1208d0: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 1208d4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181912));
  fn1_db2e0(c);
  /* 1208d8: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 1208dc: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1208e0: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 1208e4: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1208e8: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 1208ec: b.hi #0x120918 */
  if (ARC_COND(c, 8)) goto L_120918;
  /* 1208f0: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 1208f4: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 1208f8: b.ls #0x12090c */
  if (ARC_COND(c, 9)) goto L_12090c;
  /* 1208fc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120900: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181956));
  fn1_1352bc(c);
  /* 120904: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120908: b #0x120918 */
  goto L_120918;
L_12090c:;
  /* 12090c: b.hs #0x120918 */
  if (ARC_COND(c, 2)) goto L_120918;
  /* 120910: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 120914: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_120918:;
  /* 120918: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 12091c: cbz x20, #0x120940 */
  if ((ARC_X_R(c, 20)) == 0) goto L_120940;
  /* 120920: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 120924: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120928: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181996));
  fn1_bd950(c);
  /* 12092c: cbnz x0, #0x120940 */
  if ((ARC_X_R(c, 0)) != 0) goto L_120940;
  /* 120930: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 120934: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120938: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 12093c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182016));
  arc_dispatch(c, ARC_X_R(c, 8));
L_120940:;
  /* 120940: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120944: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 120948: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12094c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 120950: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 120954: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 120958: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 12095c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 120960: ret  */
  return;
  /* 120964: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120968: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 12096c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120970: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182068));
  fn1_bd950(c);
  /* 120974: cbnz x0, #0x12099c */
  if ((ARC_X_R(c, 0)) != 0) goto L_12099c;
  /* 120978: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 12097c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 120980: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 120984: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182088));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 120988: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12098c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182096));
  fn1_9cc20(c);
  /* 120990: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120994: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 120998: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182108));
  fn1_d2a78(c);
L_12099c:;
  /* 12099c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1209a0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1182116));
  fn1_9cc20(c);
}

void fn1_126e04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039135748));
  /* 126e04: bti c */
  /* bti: no architectural effect here */
  /* 126e08: sxtb w8, w1 */
  ARC_W_W(c, 8, ((int32_t)(int8_t)(ARC_W_R(c, 1))));
  /* 126e0c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 126e10: csel w0, w2, w1, lt */
  ARC_W_W(c, 0, (ARC_COND(c, 11) ? (ARC_W_R(c, 2)) : ARC_W_R(c, 1)));
  /* 126e14: ret  */
  return;
}

void fn1_1294f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039145720));
  /* 1294f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1294fc: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 129500: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 129504: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 129508: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12950c: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 129510: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 129514: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 129518: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12951c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 129520: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 129524: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 129528: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 12952c: mov x4, x6 */
  ARC_X_W(c, 4, ARC_X_R(c, 6));
  /* 129530: mov w6, #0x10ffff */
  ARC_W_W(c, 6, UINT64_C(1114111));
  /* 129534: mov w7, wzr */
  ARC_W_W(c, 7, ARC_W_R(c, 31));
  /* 129538: bl #0x12955c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1217852));
  fn1_12955c(c);
  /* 12953c: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 129540: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 129544: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 129548: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12954c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 129550: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 129554: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 129558: ret  */
  return;
}

void fn1_12acb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151796));
  /* 12acb4: bti c */
  /* bti: no architectural effect here */
  /* 12acb8: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12acbc: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 12acc0: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12acc4: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 12acc8: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12accc: ret  */
  return;
}

void fn1_12c2e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039157480));
  /* 12c2e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12c2ec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c2f0: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12c2f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c2f8: adrp x8, #0x53000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339968)));
  /* 12c2fc: stp xzr, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12c300: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c304: ldr d0, [x8, #0x2f0] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(752))));
  /* 12c308: str xzr, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 31));
  /* 12c30c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12c310: ldr x8, [x8, #0xcd8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3288))));
  /* 12c314: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 12c318: str d0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  /* 12c31c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12c320: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 12c324: bl #0x143b98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229608));
  fn1_143b98(c);
  /* 12c328: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12c32c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c330: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12c334: ret  */
  return;
  /* 12c338: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12c33c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c340: bl #0x143b68 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229636));
  fn1_143b68(c);
  /* 12c344: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c348: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229644));
  fn1_9cc20(c);
}

void fn1_13492c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191852));
  /* 13492c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134930: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134934: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134938: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13493c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134940: bl #0x144048 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263940));
  fn1_144048(c);
  /* 134944: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134948: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 13494c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134950: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134954: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134958: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1350b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193780));
  /* 1350b4: bti c */
  /* bti: no architectural effect here */
  /* 1350b8: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1350bc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137f1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039205660));
  /* 137f1c: bti c */
  /* bti: no architectural effect here */
  /* 137f20: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 137f24: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 137f28: b.eq #0x137f34 */
  if (ARC_COND(c, 0)) goto L_137f34;
  /* 137f2c: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 137f30: ret  */
  return;
L_137f34:;
  /* 137f34: ldr x9, [x0, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* 137f38: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 137f3c: b.hs #0x137f4c */
  if (ARC_COND(c, 2)) goto L_137f4c;
  /* 137f40: str x9, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 9));
  /* 137f44: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 137f48: ret  */
  return;
L_137f4c:;
  /* 137f4c: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 137f50: ret  */
  return;
}

void fn1_13b8c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039220424));
  /* 13b8c8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13b8cc: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13b8d0: stp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 13b8d4: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13b8d8: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13b8dc: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13b8e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13b8e4: ldp x25, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 25, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 13b8e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b8ec: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13b8f0: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 13b8f4: b.ne #0x13ba24 */
  if (ARC_COND(c, 1)) goto L_13ba24;
  /* 13b8f8: ldp x21, x23, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13b8fc: subs x8, x23, x21 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 21)));
  /* 13b900: b.ls #0x13b948 */
  if (ARC_COND(c, 9)) goto L_13b948;
  /* 13b904: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 13b908: subs x22, x25, x23 */
  ARC_X_W(c, 22, arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 23)));
  /* 13b90c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 13b910: add x8, x8, x8, lsr #63 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 8)) >> 63)));
  /* 13b914: asr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63))));
  /* 13b918: sub x21, x23, x8, lsl #3 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* 13b91c: neg x24, x8 */
  ARC_X_W(c, 24, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 8))));
  /* 13b920: b.eq #0x13b938 */
  if (ARC_COND(c, 0)) goto L_13b938;
  /* 13b924: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13b928: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 13b92c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 13b930: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292596));
  fn1_1449f0(c);
  /* 13b934: ldr x23, [x19, #8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_13b938:;
  /* 13b938: add x8, x23, x24, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 24)) << 3)));
  /* 13b93c: add x25, x21, x22 */
  ARC_X_W(c, 25, (ARC_X_R(c, 21) + ARC_X_R(c, 22)));
  /* 13b940: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 13b944: b #0x13ba24 */
  goto L_13ba24;
L_13b948:;
  /* 13b948: subs x22, x25, x21 */
  ARC_X_W(c, 22, arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 21)));
  /* 13b94c: asr x8, x22, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* 13b950: csinc x8, x8, xzr, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 31)) + 1)));
  /* 13b954: lsr x9, x8, #0x3d */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(61)) & 63)));
  /* 13b958: cbnz x9, #0x13ba4c */
  if ((ARC_X_R(c, 9)) != 0) goto L_13ba4c;
  /* 13b95c: lsl x24, x8, #3 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 13b960: lsr x26, x8, #2 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63)));
  /* 13b964: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13b968: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292652));
  fn1_1428f0(c);
  /* 13b96c: add x8, x0, x26, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 26)) << 3)));
  /* 13b970: subs x10, x25, x23 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 23)));
  /* 13b974: add x9, x0, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 24)));
  /* 13b978: mov x25, x8 */
  ARC_X_W(c, 25, ARC_X_R(c, 8));
  /* 13b97c: b.eq #0x13ba08 */
  if (ARC_COND(c, 0)) goto L_13ba08;
  /* 13b980: sub x11, x10, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) - UINT64_C(8)));
  /* 13b984: add x25, x8, x10 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* 13b988: cmp x11, #0x38 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(56));
  /* 13b98c: b.hs #0x13b998 */
  if (ARC_COND(c, 2)) goto L_13b998;
  /* 13b990: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
  /* 13b994: b #0x13b9f8 */
  goto L_13b9f8;
L_13b998:;
  /* 13b998: lsl x10, x26, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(3)) & 63)));
  /* 13b99c: add x15, x10, x0 */
  ARC_X_W(c, 15, (ARC_X_R(c, 10) + ARC_X_R(c, 0)));
  /* 13b9a0: sub x10, x15, x23 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) - ARC_X_R(c, 23)));
  /* 13b9a4: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 13b9a8: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
  /* 13b9ac: b.lo #0x13b9f8 */
  if (ARC_COND(c, 3)) goto L_13b9f8;
  /* 13b9b0: lsr x10, x11, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(3)) & 63)));
  /* 13b9b4: add x14, x23, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 23) + UINT64_C(16)));
  /* 13b9b8: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
  /* 13b9bc: add x11, x10, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 13b9c0: and x12, x11, #0x3ffffffffffffffc */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) & UINT64_C(4611686018427387900)));
  /* 13b9c4: lsl x13, x12, #3 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(3)) & 63)));
  /* 13b9c8: mov x16, x12 */
  ARC_X_W(c, 16, ARC_X_R(c, 12));
  /* 13b9cc: add x10, x8, x13 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 13)));
  /* 13b9d0: add x13, x23, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 23) + ARC_X_R(c, 13)));
L_13b9d4:;
  /* 13b9d4: ldp q0, q1, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 13b9d8: subs x16, x16, #4 */
  ARC_X_W(c, 16, arc_sub64(c, ARC_X_R(c, 16), UINT64_C(4)));
  /* 13b9dc: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* 13b9e0: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 13b9e4: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 13b9e8: b.ne #0x13b9d4 */
  if (ARC_COND(c, 1)) goto L_13b9d4;
  /* 13b9ec: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* 13b9f0: mov x23, x13 */
  ARC_X_W(c, 23, ARC_X_R(c, 13));
  /* 13b9f4: b.eq #0x13ba08 */
  if (ARC_COND(c, 0)) goto L_13ba08;
L_13b9f8:;
  /* 13b9f8: ldr x11, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* 13b9fc: str x11, [x10], #8 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 11));
  }
  /* 13ba00: cmp x10, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 25));
  /* 13ba04: b.ne #0x13b9f8 */
  if (ARC_COND(c, 1)) goto L_13b9f8;
L_13ba08:;
  /* 13ba08: stp x0, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13ba0c: stp x25, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13ba10: cbz x21, #0x13ba24 */
  if ((ARC_X_R(c, 21)) == 0) goto L_13ba24;
  /* 13ba14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13ba18: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13ba1c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292832));
  fn1_142608(c);
  /* 13ba20: ldr x25, [x19, #0x10] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
L_13ba24:;
  /* 13ba24: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13ba28: str x8, [x25], #8 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 13ba2c: str x25, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 25));
  /* 13ba30: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13ba34: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13ba38: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13ba3c: ldp x26, x25, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13ba40: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13ba44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13ba48: ret  */
  return;
L_13ba4c:;
  /* 13ba4c: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292880));
  fn1_d9fe8(c);
}

void fn1_142440(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247936));
  /* 142440: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142444: ldr x17, [x16, #0xea0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3744))));
  /* 142448: add x16, x16, #0xea0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3744)));
  /* 14244c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142450: nop  */
  /* nop: no architectural effect here */
  /* 142454: nop  */
  /* nop: no architectural effect here */
}

void fn1_142a40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249472));
  /* 142a40: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142a44: ldr x17, [x16, #0xa0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(160))));
  /* 142a48: add x16, x16, #0xa0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(160)));
  /* 142a4c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142a50: nop  */
  /* nop: no architectural effect here */
  /* 142a54: nop  */
  /* nop: no architectural effect here */
}

void fn1_143040(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251008));
  /* 143040: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143044: ldr x17, [x16, #0x2a0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(672))));
  /* 143048: add x16, x16, #0x2a0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(672)));
  /* 14304c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143050: nop  */
  /* nop: no architectural effect here */
  /* 143054: nop  */
  /* nop: no architectural effect here */
}

void fn1_143640(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252544));
  /* 143640: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143644: ldr x17, [x16, #0x4a0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1184))));
  /* 143648: add x16, x16, #0x4a0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1184)));
  /* 14364c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143650: nop  */
  /* nop: no architectural effect here */
  /* 143654: nop  */
  /* nop: no architectural effect here */
}

void fn1_143c40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254080));
  /* 143c40: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143c44: ldr x17, [x16, #0x6a0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1696))));
  /* 143c48: add x16, x16, #0x6a0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1696)));
  /* 143c4c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143c50: nop  */
  /* nop: no architectural effect here */
  /* 143c54: nop  */
  /* nop: no architectural effect here */
}

void fn1_144240(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255616));
  /* 144240: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144244: ldr x17, [x16, #0x8a0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2208))));
  /* 144248: add x16, x16, #0x8a0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2208)));
  /* 14424c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144250: nop  */
  /* nop: no architectural effect here */
  /* 144254: nop  */
  /* nop: no architectural effect here */
}

void fn1_144840(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257152));
  /* 144840: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144844: ldr x17, [x16, #0xaa0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2720))));
  /* 144848: add x16, x16, #0xaa0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2720)));
  /* 14484c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144850: nop  */
  /* nop: no architectural effect here */
  /* 144854: nop  */
  /* nop: no architectural effect here */
}

