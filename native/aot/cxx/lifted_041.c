#include "lifted.h"

void fn1_9dbe8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038574056));
  /* 9dbe8: bti c */
  /* bti: no architectural effect here */
  /* 9dbec: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* 9dbf0: b #0xa0740 */
  fn1_a0740(c); return;
}

void fn1_a1f8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591372));
  /* a1f8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1f90: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1f94: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a1f98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1f9c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a1fa0: bl #0x1425f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663460));
  fn1_1425f0(c);
  /* a1fa4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1fa8: mov w1, #8 */
  ARC_W_W(c, 1, UINT64_C(8));
  /* a1fac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a1fb0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1fb4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1fb8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a3ef0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038599408));
  /* a3ef0: bti c */
  /* bti: no architectural effect here */
  /* a3ef4: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* a3ef8: tbz w5, #0, #0xa3f60 */
  if (((ARC_W_R(c, 5)) >> 0 & 1) == 0) goto L_a3f60;
  /* a3efc: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* a3f00: b.eq #0xa3f70 */
  if (ARC_COND(c, 0)) goto L_a3f70;
  /* a3f04: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a3f08: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a3f0c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a3f10: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a3f14: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a3f18: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3f1c: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a3f20: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a3f24: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* a3f28: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* a3f2c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* a3f30: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* a3f34: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(671544));
  fn1_142848(c);
  /* a3f38: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* a3f3c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* a3f40: mov w4, w21 */
  ARC_W_W(c, 4, ARC_W_R(c, 21));
  /* a3f44: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a3f48: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a3f4c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a3f50: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a3f54: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a3f58: cbz w0, #0xa3f70 */
  if ((ARC_W_R(c, 0)) == 0) goto L_a3f70;
L_a3f5c:;
  /* a3f5c: ret  */
  return;
L_a3f60:;
  /* a3f60: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a3f64: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3f68: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a3f6c: b.ne #0xa3f5c */
  if (ARC_COND(c, 1)) goto L_a3f5c;
L_a3f70:;
  /* a3f70: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* a3f74: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3f78: strb w8, [x1, #0x4d] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(77)), ARC_W_R(c, 8));
  /* a3f7c: cmp x3, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 9));
  /* a3f80: b.ne #0xa3f5c */
  if (ARC_COND(c, 1)) goto L_a3f5c;
  /* a3f84: ldr x9, [x1, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(32))));
  /* a3f88: strb w8, [x1, #0x4c] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(76)), ARC_W_R(c, 8));
  /* a3f8c: cbz x9, #0xa3fa8 */
  if ((ARC_X_R(c, 9)) == 0) goto L_a3fa8;
  /* a3f90: cmp x9, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 2));
  /* a3f94: b.eq #0xa3fc0 */
  if (ARC_COND(c, 0)) goto L_a3fc0;
  /* a3f98: ldr w8, [x1, #0x3c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(60))));
  /* a3f9c: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* a3fa0: str w8, [x1, #0x3c] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(60)), ARC_W_R(c, 8));
  /* a3fa4: b #0xa3fe8 */
  goto L_a3fe8;
L_a3fa8:;
  /* a3fa8: cmp w4, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 4), UINT64_C(1));
  /* a3fac: str x2, [x1, #0x20] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(32)), ARC_X_R(c, 2));
  /* a3fb0: str w4, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 4));
  /* a3fb4: str w8, [x1, #0x3c] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(60)), ARC_W_R(c, 8));
  /* a3fb8: b.eq #0xa3fdc */
  if (ARC_COND(c, 0)) goto L_a3fdc;
  /* a3fbc: b #0xa3f5c */
  goto L_a3f5c;
L_a3fc0:;
  /* a3fc0: ldr w8, [x1, #0x30] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(48))));
  /* a3fc4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a3fc8: b.ne #0xa3fd4 */
  if (ARC_COND(c, 1)) goto L_a3fd4;
  /* a3fcc: mov w8, w4 */
  ARC_W_W(c, 8, ARC_W_R(c, 4));
  /* a3fd0: str w4, [x1, #0x30] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(48)), ARC_W_R(c, 4));
L_a3fd4:;
  /* a3fd4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3fd8: b.ne #0xa3f5c */
  if (ARC_COND(c, 1)) goto L_a3f5c;
L_a3fdc:;
  /* a3fdc: ldr w8, [x1, #0x48] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(72))));
  /* a3fe0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a3fe4: b.ne #0xa3f5c */
  if (ARC_COND(c, 1)) goto L_a3f5c;
L_a3fe8:;
  /* a3fe8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a3fec: strb w8, [x1, #0x4e] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(78)), ARC_W_R(c, 8));
  /* a3ff0: ret  */
  return;
}

void fn1_aa69c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038625948));
L_aa69c:;
  /* aa69c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa6a0: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* aa6a4: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa6a8: str x27, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 27));
  /* aa6ac: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* aa6b0: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* aa6b4: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* aa6b8: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa6bc: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* aa6c0: ldp x21, x22, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* aa6c4: sub x10, x22, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* aa6c8: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* aa6cc: b.hs #0xaa6fc */
  if (ARC_COND(c, 2)) goto L_aa6fc;
L_aa6d0:;
  /* aa6d0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_aa6d4:;
  /* aa6d4: bti j */
  /* bti: no architectural effect here */
  /* aa6d8: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa6dc: ldr x27, [sp, #0x50] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(80))));
  /* aa6e0: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aa6e4: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* aa6e8: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* aa6ec: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa6f0: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
L_aa6f4:;
  /* aa6f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_aa6f8:;
  /* aa6f8: ret  */
  return;
L_aa6fc:;
  /* aa6fc: ldrh w8, [x21] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 21)));
  /* aa700: mov w9, #0x7367 */
  ARC_W_W(c, 9, UINT64_C(29543));
  /* aa704: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* aa708: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* aa70c: cset w20, ne */
  ARC_W_W(c, 20, (ARC_COND(c, 1) ? 1 : 0));
  /* aa710: b.eq #0xaa720 */
  if (ARC_COND(c, 0)) goto L_aa720;
L_aa714:;
  /* aa714: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
L_aa718:;
  /* aa718: strb wzr, [x29, #0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 31));
  /* aa71c: b #0xaa73c */
  goto L_aa73c;
L_aa720:;
  /* aa720: add x21, x21, #2 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2)));
  /* aa724: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* aa728: sub x10, x22, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* aa72c: str x21, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 21));
  /* aa730: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* aa734: strb w23, [x29, #0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(24)), ARC_W_R(c, 23));
  /* aa738: b.lo #0xaa6d0 */
  if (ARC_COND(c, 3)) goto L_aa6d0;
L_aa73c:;
  /* aa73c: mov x9, x21 */
  ARC_X_W(c, 9, ARC_X_R(c, 21));
  /* aa740: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* aa744: mov w13, #0x3e */
  ARC_W_W(c, 13, UINT64_C(62));
  /* aa748: ldrb w11, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* aa74c: nop  */
  /* nop: no architectural effect here */
  /* aa750: adr x8, #0x149d68 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351016)));
  /* aa754: b #0xaa764 */
  goto L_aa764;
L_aa758:;
  /* aa758: add x12, x14, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 14) + UINT64_C(1)));
L_aa75c:;
  /* aa75c: cmp x13, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 12));
  /* aa760: b.eq #0xaa7a4 */
  if (ARC_COND(c, 0)) goto L_aa7a4;
L_aa764:;
  /* aa764: add x14, x12, x13 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) + ARC_X_R(c, 13)));
  /* aa768: lsr x14, x14, #1 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(1)) & 63)));
  /* aa76c: add x15, x8, x14, lsl #4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 14)) << 4)));
  /* aa770: ldrb w16, [x15] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 15)));
L_aa774:;
  /* aa774: cmp w16, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 11));
  /* aa778: b.lo #0xaa758 */
  if (ARC_COND(c, 3)) goto L_aa758;
  /* aa77c: b.ne #0xaa79c */
  if (ARC_COND(c, 1)) goto L_aa79c;
  /* aa780: ldrb w15, [x15, #1] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 15) + INT64_C(1))));
L_aa784:;
  /* aa784: ldrb w16, [x9] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 9)));
L_aa788:;
  /* aa788: and w15, w15, #0xff */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) & UINT64_C(255)));
L_aa78c:;
  /* aa78c: cmp w15, w16, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 15), ((uint64_t)(uint8_t)(ARC_W_R(c, 16))));
  /* aa790: csinc x12, x12, x14, hs */
  ARC_X_W(c, 12, (ARC_COND(c, 2) ? (ARC_X_R(c, 12)) : ((ARC_X_R(c, 14)) + 1)));
  /* aa794: csel x13, x13, x14, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 14)));
  /* aa798: b #0xaa75c */
  goto L_aa75c;
L_aa79c:;
  /* aa79c: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* aa7a0: b #0xaa75c */
  goto L_aa75c;
L_aa7a4:;
  /* aa7a4: add x25, x8, x12, lsl #4 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 12)) << 4)));
  /* aa7a8: ldrb w12, [x25] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 25)));
  /* aa7ac: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* aa7b0: b.ne #0xaa82c */
  if (ARC_COND(c, 1)) goto L_aa82c;
  /* aa7b4: ldrb w12, [x25, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 25) + INT64_C(1))));
  /* aa7b8: ldrb w13, [x9] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 9)));
  /* aa7bc: cmp w12, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 13));
  /* aa7c0: b.ne #0xaa82c */
  if (ARC_COND(c, 1)) goto L_aa82c;
  /* aa7c4: ldr x20, [x25, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* aa7c8: add x27, x21, #2 */
  ARC_X_W(c, 27, (ARC_X_R(c, 21) + UINT64_C(2)));
  /* aa7cc: str x27, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 27));
  /* aa7d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa7d4: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(698328));
  fn1_142860(c);
  /* aa7d8: ldrb w8, [x25, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 25) + INT64_C(2))));
  /* aa7dc: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* aa7e0: b.hi #0xaa954 */
  if (ARC_COND(c, 8)) goto L_aa954;
  /* aa7e4: cmp x0, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(8));
  /* aa7e8: b.lo #0xab9e4 */
  if (ARC_COND(c, 3)) goto L_ab9e4;
  /* aa7ec: mov x10, #0x706f */
  ARC_X_W(c, 10, UINT64_C(28783));
  /* aa7f0: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* aa7f4: movk x10, #0x7265, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1919221760)));
  /* aa7f8: movk x10, #0x7461, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(127959960649728)));
  /* aa7fc: movk x10, #0x726f, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(8245809442738667520)));
L_aa800:;
  /* aa800: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aa804: b.ne #0xab9e4 */
  if (ARC_COND(c, 1)) goto L_ab9e4;
  /* aa808: subs x26, x0, #8 */
  ARC_X_W(c, 26, arc_sub64(c, ARC_X_R(c, 0), UINT64_C(8)));
  /* aa80c: add x24, x20, #8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* aa810: b.eq #0xaa95c */
  if (ARC_COND(c, 0)) goto L_aa95c;
  /* aa814: ldrb w9, [x24] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 24)));
L_aa818:;
  /* aa818: cmp w9, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(32));
  /* aa81c: b.ne #0xaa95c */
  if (ARC_COND(c, 1)) goto L_aa95c;
  /* aa820: add x24, x20, #9 */
  ARC_X_W(c, 24, (ARC_X_R(c, 20) + UINT64_C(9)));
  /* aa824: sub x26, x0, #9 */
  ARC_X_W(c, 26, (ARC_X_R(c, 0) - UINT64_C(9)));
  /* aa828: b #0xaa95c */
  goto L_aa95c;
L_aa82c:;
  /* aa82c: cmp w11, #0x66 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(102));
L_aa830:;
  /* aa830: b.eq #0xaa894 */
  if (ARC_COND(c, 0)) goto L_aa894;
  /* aa834: cmp w11, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(84));
  /* aa838: b.eq #0xaa86c */
  if (ARC_COND(c, 0)) goto L_aa86c;
  /* aa83c: cmp w11, #0x4c */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(76));
  /* aa840: b.ne #0xaa8c8 */
  if (ARC_COND(c, 1)) goto L_aa8c8;
L_aa844:;
  /* aa844: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aa848: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa84c: ldr x27, [sp, #0x50] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(80))));
  /* aa850: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aa854: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* aa858: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* aa85c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa860: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* aa864: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa868: b #0xac08c */
  fn1_ac08c(c); return;
L_aa86c:;
  /* aa86c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aa870: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa874: ldr x27, [sp, #0x50] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(80))));
  /* aa878: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aa87c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* aa880: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* aa884: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa888: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* aa88c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa890: b #0xa94fc */
  fn1_a94fc(c); return;
L_aa894:;
  /* aa894: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* aa898: cmp w11, #0x70 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(112));
  /* aa89c: b.ne #0xaaa14 */
  if (ARC_COND(c, 1)) goto L_aaa14;
L_aa8a0:;
  /* aa8a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aa8a4: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa8a8: ldr x27, [sp, #0x50] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(80))));
  /* aa8ac: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aa8b0: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* aa8b4: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* aa8b8: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa8bc: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* aa8c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa8c4: b #0xaca14 */
  fn1_aca14(c); return;
L_aa8c8:;
  /* aa8c8: ldrh w8, [x21] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 21)));
  /* aa8cc: mov w10, #0x6c69 */
  ARC_W_W(c, 10, UINT64_C(27753));
  /* aa8d0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* aa8d4: b.eq #0xaaa74 */
  if (ARC_COND(c, 0)) goto L_aaa74;
  /* aa8d8: sub x8, x22, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* aa8dc: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* aa8e0: b.lo #0xaa904 */
  if (ARC_COND(c, 3)) goto L_aa904;
  /* aa8e4: ldrh w10, [x21] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 21)));
  /* aa8e8: mov w12, #0x636d */
  ARC_W_W(c, 12, UINT64_C(25453));
  /* aa8ec: cmp w10, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 12));
  /* aa8f0: b.eq #0xaaca4 */
  if (ARC_COND(c, 0)) goto L_aaca4;
  /* aa8f4: ldrh w10, [x21] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 21)));
  /* aa8f8: mov w12, #0x786e */
  ARC_W_W(c, 12, UINT64_C(30830));
  /* aa8fc: cmp w10, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 12));
  /* aa900: b.eq #0xab174 */
  if (ARC_COND(c, 0)) goto L_ab174;
L_aa904:;
  /* aa904: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* aa908: b.eq #0xaab84 */
  if (ARC_COND(c, 0)) goto L_aab84;
  /* aa90c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* aa910: b.lo #0xaab5c */
  if (ARC_COND(c, 3)) goto L_aab5c;
  /* aa914: cmp w11, #0x72 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(114));
  /* aa918: b.ne #0xaab5c */
  if (ARC_COND(c, 1)) goto L_aab5c;
  /* aa91c: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* aa920: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* aa924: cmp w8, #0x71 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(113));
  /* aa928: b.ne #0xaab64 */
  if (ARC_COND(c, 1)) goto L_aab64;
  /* aa92c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aa930: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa934: ldr x27, [sp, #0x50] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(80))));
  /* aa938: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aa93c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* aa940: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* aa944: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa948: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* aa94c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa950: b #0xad308 */
  fn1_ad308(c); return;
L_aa954:;
  /* aa954: mov x24, x20 */
  ARC_X_W(c, 24, ARC_X_R(c, 20));
  /* aa958: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
L_aa95c:;
  /* aa95c: cmp w8, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(12));
  /* aa960: stp x24, x26, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* aa964: b.hi #0xaba34 */
  if (ARC_COND(c, 8)) goto L_aba34;
  /* aa968: nop  */
  /* nop: no architectural effect here */
  /* aa96c: adr x9, #0x53232 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(340530)));
  /* aa970: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* aa974: adr x10, #0xaa6d4 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(698068)));
L_aa978:;
  /* aa978: ldrh w11, [x9, x8, lsl #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* aa97c: add x10, x10, x11, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* aa980: br x10 */
  switch (ARC_X_R(c, 10) - arc_image_bases[1]) {
    case UINT64_C(698756): goto L_aa984;
    case UINT64_C(699860): goto L_aadd4;
    case UINT64_C(699948): goto L_aae2c;
    case UINT64_C(699680): goto L_aad20;
    case UINT64_C(700180): goto L_aaf14;
    case UINT64_C(700256): goto L_aaf60;
    case UINT64_C(700028): goto L_aae7c;
    case UINT64_C(700536): goto L_ab078;
    case UINT64_C(699776): goto L_aad80;
    case UINT64_C(700444): goto L_ab01c;
    case UINT64_C(698068): goto L_aa6d4;
    case UINT64_C(699604): goto L_aacd4;
    case UINT64_C(699752): goto L_aad68;
    case UINT64_C(698136): goto L_aa718;
    case UINT64_C(698844): goto L_aa9dc;
    case UINT64_C(698228): goto L_aa774;
    case UINT64_C(699176): goto L_aab28;
    case UINT64_C(698968): goto L_aaa58;
    case UINT64_C(699128): goto L_aaaf8;
    case UINT64_C(699268): goto L_aab84;
    case UINT64_C(699352): goto L_aabd8;
    case UINT64_C(699640): goto L_aacf8;
    case UINT64_C(699424): goto L_aac20;
    case UINT64_C(698436): goto L_aa844;
    case UINT64_C(699152): goto L_aab10;
    case UINT64_C(699080): goto L_aaac8;
    case UINT64_C(698416): goto L_aa830;
    case UINT64_C(699376): goto L_aabf0;
    case UINT64_C(699400): goto L_aac08;
    case UINT64_C(700296): goto L_aaf88;
    case UINT64_C(700272): goto L_aaf70;
    case UINT64_C(698368): goto L_aa800;
    case UINT64_C(699104): goto L_aaae0;
    case UINT64_C(700320): goto L_aafa0;
    case UINT64_C(698392): goto L_aa818;
    case UINT64_C(699056): goto L_aaab0;
    case UINT64_C(700128): goto L_aaee0;
    case UINT64_C(702164): goto L_ab6d4;
    case UINT64_C(698132): goto L_aa714;
    case UINT64_C(698100): goto L_aa6f4;
    case UINT64_C(698900): goto L_aaa14;
    case UINT64_C(701148): goto L_ab2dc;
    case UINT64_C(698104): goto L_aa6f8;
    case UINT64_C(698744): goto L_aa978;
    case UINT64_C(698248): goto L_aa788;
    case UINT64_C(698252): goto L_aa78c;
    case UINT64_C(698244): goto L_aa784;
    case UINT64_C(702176): goto L_ab6e0;
    case UINT64_C(700116): goto L_aaed4;
    default: break;
  }
  arc_dispatch(c, ARC_X_R(c, 10)); return;
L_aa984:;
  /* aa984: bti j */
  /* bti: no architectural effect here */
  /* aa988: ldrb w21, [x25, #3] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 25) + INT64_C(3))));
  /* aa98c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aa990: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(698772));
  fn1_aa69c(c);
  /* aa994: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aa998: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* aa99c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aa9a0: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* aa9a4: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* aa9a8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* aa9ac: b.hi #0xaa9cc */
  if (ARC_COND(c, 8)) goto L_aa9cc;
  /* aa9b0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* aa9b4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(698808));
  fn1_1428a8(c);
  /* aa9b8: cbz x0, #0xaba28 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba28;
  /* aa9bc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* aa9c0: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* aa9c4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* aa9c8: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_aa9cc:;
  /* aa9cc: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* aa9d0: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* aa9d4: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* aa9d8: add x8, x8, #0x1e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(480)));
L_aa9dc:;
  /* aa9dc: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* aa9e0: lsr w10, w21, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 21)) >> ((UINT64_C(1)) & 31)));
  /* aa9e4: mov w9, #0x42 */
  ARC_W_W(c, 9, UINT64_C(66));
  /* aa9e8: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* aa9ec: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* aa9f0: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* aa9f4: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* aa9f8: orr w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) | ARC_W_R(c, 9)));
  /* aa9fc: stp x24, x26, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* aaa00: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* aaa04: str x20, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 20));
  /* aaa08: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* aaa0c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* aaa10: b #0xaa6d4 */
  goto L_aa6d4;
L_aaa14:;
  /* aaa14: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* aaa18: b.eq #0xaaa34 */
  if (ARC_COND(c, 0)) goto L_aaa34;
  /* aaa1c: cmp w11, #0x4c */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(76));
  /* aaa20: b.ne #0xaaa34 */
  if (ARC_COND(c, 1)) goto L_aaa34;
  /* aaa24: ldrb w10, [x21, #2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 21) + INT64_C(2))));
  /* aaa28: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* aaa2c: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* aaa30: b.hs #0xaa8a0 */
  if (ARC_COND(c, 2)) goto L_aa8a0;
L_aaa34:;
  /* aaa34: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* aaa38: b.eq #0xaa6d0 */
  if (ARC_COND(c, 0)) goto L_aa6d0;
  /* aaa3c: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* aaa40: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* aaa44: b.eq #0xaa6d0 */
  if (ARC_COND(c, 0)) goto L_aa6d0;
  /* aaa48: ldrb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* aaa4c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* aaa50: cmp w9, #0x6b */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(107));
  /* aaa54: b.gt #0xab158 */
  if (ARC_COND(c, 12)) goto L_ab158;
L_aaa58:;
  /* aaa58: cmp w9, #0x4c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(76));
  /* aaa5c: b.eq #0xab4f4 */
  if (ARC_COND(c, 0)) goto L_ab4f4;
  /* aaa60: cmp w9, #0x52 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(82));
  /* aaa64: b.ne #0xaa6d4 */
  if (ARC_COND(c, 1)) goto L_aa6d4;
  /* aaa68: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* aaa6c: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* aaa70: b #0xab508 */
  goto L_ab508;
L_aaa74:;
  /* aaa74: ldp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* aaa78: add x24, x19, #0x28 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* aaa7c: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* aaa80: add x8, x21, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(2)));
  /* aaa84: asr x20, x9, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* aaa88: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* aaa8c: b #0xaaac0 */
  goto L_aaac0;
L_aaa90:;
  /* aaa90: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* aaa94: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699032));
  fn1_142878(c);
  /* aaa98: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* aaa9c: cbz x0, #0xab9e0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ab9e0;
L_aaaa0:;
  /* aaaa0: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* aaaa4: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* aaaa8: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* aaaac: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
L_aaab0:;
  /* aaab0: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_aaab4:;
  /* aaab4: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* aaab8: ldp x8, x22, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* aaabc: str x23, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 23));
L_aaac0:;
  /* aaac0: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* aaac4: b.eq #0xaaad4 */
  if (ARC_COND(c, 0)) goto L_aaad4;
L_aaac8:;
  /* aaac8: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* aaacc: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* aaad0: b.eq #0xaab34 */
  if (ARC_COND(c, 0)) goto L_aab34;
L_aaad4:;
  /* aaad4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aaad8: bl #0xacdd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699100));
  fn1_acdd8(c);
  /* aaadc: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
L_aaae0:;
  /* aaae0: ldp x23, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* aaae4: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* aaae8: b.ne #0xaaab4 */
  if (ARC_COND(c, 1)) goto L_aaab4;
  /* aaaec: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* aaaf0: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* aaaf4: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
L_aaaf8:;
  /* aaaf8: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* aaafc: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* aab00: b.ne #0xaaa90 */
  if (ARC_COND(c, 1)) goto L_aaa90;
  /* aab04: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* aab08: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699148));
  fn1_1428a8(c);
  /* aab0c: cbz x0, #0xaba04 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba04;
L_aab10:;
  /* aab10: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* aab14: b.eq #0xaab2c */
  if (ARC_COND(c, 0)) goto L_aab2c;
  /* aab18: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* aab1c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* aab20: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* aab24: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699176));
  fn1_1449f0(c);
L_aab28:;
  /* aab28: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_aab2c:;
  /* aab2c: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* aab30: b #0xaaaa0 */
  goto L_aaaa0;
L_aab34:;
  /* aab34: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aab38: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aab3c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* aab40: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* aab44: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699208));
  fn1_a77e4(c);
  /* aab48: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* aab4c: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* aab50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aab54: bl #0xad034 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699224));
  fn1_ad034(c);
  /* aab58: b #0xaa6d4 */
  goto L_aa6d4;
L_aab5c:;
  /* aab5c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* aab60: b.lo #0xaab84 */
  if (ARC_COND(c, 3)) goto L_aab84;
L_aab64:;
  /* aab64: ldrh w8, [x21] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 21)));
  /* aab68: mov w9, #0x6f73 */
  ARC_W_W(c, 9, UINT64_C(28531));
  /* aab6c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* aab70: b.eq #0xab38c */
  if (ARC_COND(c, 0)) goto L_ab38c;
  /* aab74: ldrh w8, [x21] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 21)));
  /* aab78: mov w9, #0x7073 */
  ARC_W_W(c, 9, UINT64_C(28787));
  /* aab7c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* aab80: b.eq #0xab638 */
  if (ARC_COND(c, 0)) goto L_ab638;
L_aab84:;
  /* aab84: adrp x1, #0x4f000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(323584)));
  /* aab88: add x1, x1, #0xa40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2624)));
  /* aab8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aab90: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* aab94: bl #0xa468c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699288));
  fn1_a468c(c);
  /* aab98: tbz w0, #0, #0xaabd4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_aabd4;
  /* aab9c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* aaba0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* aaba4: b.eq #0xab144 */
  if (ARC_COND(c, 0)) goto L_ab144;
  /* aaba8: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* aabac: cmp w8, #0x54 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(84));
  /* aabb0: b.ne #0xab144 */
  if (ARC_COND(c, 1)) goto L_ab144;
  /* aabb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aabb8: bl #0xa94fc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699324));
  fn1_a94fc(c);
  /* aabbc: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* aabc0: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aabc4: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* aabc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aabcc: bl #0xadbc8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699344));
  fn1_adbc8(c);
  /* aabd0: b #0xaa6d4 */
  goto L_aa6d4;
L_aabd4:;
  /* aabd4: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
L_aabd8:;
  /* aabd8: add x1, x1, #0x18f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(399)));
  /* aabdc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aabe0: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* aabe4: bl #0xa468c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699368));
  fn1_a468c(c);
  /* aabe8: tbz w0, #0, #0xab1dc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_ab1dc;
  /* aabec: ldp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
L_aabf0:;
  /* aabf0: add x24, x19, #0x28 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* aabf4: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* aabf8: asr x20, x8, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* aabfc: b #0xaac2c */
  goto L_aac2c;
L_aac00:;
  /* aac00: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* aac04: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699400));
  fn1_142878(c);
L_aac08:;
  /* aac08: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* aac0c: cbz x0, #0xaba0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba0c;
L_aac10:;
  /* aac10: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* aac14: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* aac18: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* aac1c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
L_aac20:;
  /* aac20: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_aac24:;
  /* aac24: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* aac28: str x23, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 23));
L_aac2c:;
  /* aac2c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* aac30: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* aac34: b.eq #0xaac44 */
  if (ARC_COND(c, 0)) goto L_aac44;
  /* aac38: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* aac3c: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* aac40: b.eq #0xab600 */
  if (ARC_COND(c, 0)) goto L_ab600;
L_aac44:;
  /* aac44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aac48: bl #0xa7338 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699468));
  fn1_a7338(c);
  /* aac4c: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aac50: ldp x23, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* aac54: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* aac58: b.ne #0xaac24 */
  if (ARC_COND(c, 1)) goto L_aac24;
  /* aac5c: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* aac60: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* aac64: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* aac68: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* aac6c: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* aac70: b.ne #0xaac00 */
  if (ARC_COND(c, 1)) goto L_aac00;
  /* aac74: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* aac78: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699516));
  fn1_1428a8(c);
  /* aac7c: cbz x0, #0xaba18 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba18;
  /* aac80: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* aac84: b.eq #0xaac9c */
  if (ARC_COND(c, 0)) goto L_aac9c;
  /* aac88: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* aac8c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* aac90: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* aac94: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699544));
  fn1_1449f0(c);
  /* aac98: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_aac9c:;
  /* aac9c: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* aaca0: b #0xaac10 */
  goto L_aac10;
L_aaca4:;
  /* aaca4: add x8, x21, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(2)));
  /* aaca8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aacac: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* aacb0: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aacb4: ldr x27, [sp, #0x50] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(80))));
  /* aacb8: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aacbc: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* aacc0: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* aacc4: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aacc8: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* aaccc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aacd0: b #0xad0d8 */
  fn1_ad0d8(c); return;
L_aacd4:;
  /* aacd4: bti j */
  /* bti: no architectural effect here */
  /* aacd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aacdc: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699616));
  fn1_a52b0(c);
  /* aace0: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* aace4: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aace8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aacec: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699632));
  fn1_aa69c(c);
  /* aacf0: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* aacf4: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
L_aacf8:;
  /* aacf8: ldrsb w8, [x25, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* aacfc: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* aad00: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* aad04: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* aad08: sub x4, x29, #0x18 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aad0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aad10: asr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31))));
  /* aad14: stur w8, [x29, #-0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* aad18: bl #0xabfc4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699676));
  fn1_abfc4(c);
  /* aad1c: b #0xaa6d4 */
  goto L_aa6d4;
L_aad20:;
  /* aad20: bti j */
  /* bti: no architectural effect here */
  /* aad24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aad28: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699692));
  fn1_aa69c(c);
  /* aad2c: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* aad30: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aad34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aad38: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699708));
  fn1_aa69c(c);
  /* aad3c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* aad40: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aad44: ldrsb w8, [x25, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* aad48: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* aad4c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* aad50: sub x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aad54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aad58: asr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31))));
  /* aad5c: stur w8, [x29, #-0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* aad60: bl #0xabafc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699748));
  fn1_abafc(c);
  /* aad64: b #0xaa6d4 */
  goto L_aa6d4;
L_aad68:;
  /* aad68: bti j */
  /* bti: no architectural effect here */
  /* aad6c: ldrb w21, [x25, #3] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 25) + INT64_C(3))));
  /* aad70: tbz w21, #0, #0xab24c */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_ab24c;
  /* aad74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aad78: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699772));
  fn1_a52b0(c);
  /* aad7c: b #0xab254 */
  goto L_ab254;
L_aad80:;
  /* aad80: bti j */
  /* bti: no architectural effect here */
  /* aad84: ldrb w20, [x19, #0x308] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 19) + INT64_C(776))));
  /* aad88: strb wzr, [x19, #0x308] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(776)), ARC_W_R(c, 31));
  /* aad8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aad90: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699796));
  fn1_a52b0(c);
  /* aad94: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* aad98: strb w20, [x19, #0x308] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(776)), ARC_W_R(c, 20));
  /* aad9c: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aada0: ldp x10, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* aada4: ldp x8, x11, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* aada8: sub x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* aadac: asr x20, x9, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* aadb0: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* aadb4: b.eq #0xab2d8 */
  if (ARC_COND(c, 0)) goto L_ab2d8;
  /* aadb8: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* aadbc: cmp w9, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(95));
  /* aadc0: b.ne #0xab2d8 */
  if (ARC_COND(c, 1)) goto L_ab2d8;
  /* aadc4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aadc8: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* aadcc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* aadd0: b #0xab2dc */
  goto L_ab2dc;
L_aadd4:;
  /* aadd4: bti j */
  /* bti: no architectural effect here */
  /* aadd8: cmp x27, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 22));
  /* aaddc: b.eq #0xab1a8 */
  if (ARC_COND(c, 0)) goto L_ab1a8;
  /* aade0: ldrb w8, [x27] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 27)));
  /* aade4: cmp w8, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(95));
  /* aade8: b.ne #0xab1a8 */
  if (ARC_COND(c, 1)) goto L_ab1a8;
  /* aadec: ldrsb w9, [x25, #3] */
  ARC_W_W(c, 9, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* aadf0: add x8, x21, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(3)));
  /* aadf4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aadf8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* aadfc: asr w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(1)) & 31))));
  /* aae00: stp x24, x26, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* aae04: stur w8, [x29, #-0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* aae08: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699916));
  fn1_aa69c(c);
  /* aae0c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* aae10: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aae14: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* aae18: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* aae1c: sub x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aae20: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aae24: bl #0xaeba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699944));
  fn1_aeba8(c);
  /* aae28: b #0xaa6d4 */
  goto L_aa6d4;
L_aae2c:;
  /* aae2c: bti j */
  /* bti: no architectural effect here */
  /* aae30: ldrsb w8, [x25, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* aae34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aae38: stp x24, x26, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* aae3c: asr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31))));
  /* aae40: str w8, [x29, #0x1c] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 8));
  /* aae44: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699976));
  fn1_aa69c(c);
  /* aae48: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* aae4c: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aae50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aae54: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(699992));
  fn1_aa69c(c);
  /* aae58: stur x0, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 0));
  /* aae5c: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aae60: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* aae64: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* aae68: sub x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aae6c: add x4, x29, #0x1c */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* aae70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aae74: bl #0xae5c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700024));
  fn1_ae5c8(c);
  /* aae78: b #0xaa6d4 */
  goto L_aa6d4;
L_aae7c:;
  /* aae7c: bti j */
  /* bti: no architectural effect here */
  /* aae80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aae84: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700040));
  fn1_aa69c(c);
  /* aae88: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aae8c: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* aae90: ldrb w21, [x25, #3] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 25) + INT64_C(3))));
  /* aae94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aae98: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* aae9c: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* aaea0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* aaea4: b.hi #0xaaec4 */
  if (ARC_COND(c, 8)) goto L_aaec4;
  /* aaea8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* aaeac: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700080));
  fn1_1428a8(c);
  /* aaeb0: cbz x0, #0xaba28 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba28;
  /* aaeb4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* aaeb8: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* aaebc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* aaec0: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_aaec4:;
  /* aaec4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* aaec8: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* aaecc: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* aaed0: add x8, x8, #0x438 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1080)));
L_aaed4:;
  /* aaed4: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* aaed8: lsr w10, w21, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 21)) >> ((UINT64_C(1)) & 31)));
  /* aaedc: mov w9, #0x41 */
  ARC_W_W(c, 9, UINT64_C(65));
L_aaee0:;
  /* aaee0: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* aaee4: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* aaee8: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* aaeec: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* aaef0: orr w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) | ARC_W_R(c, 9)));
  /* aaef4: str x20, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 20));
  /* aaef8: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* aaefc: strb w23, [x0, #0x18] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(24)), ARC_W_R(c, 23));
  /* aaf00: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* aaf04: and w9, w21, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* aaf08: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* aaf0c: strb w9, [x0, #0x19] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(25)), ARC_W_R(c, 9));
  /* aaf10: b #0xaa6d4 */
  goto L_aa6d4;
L_aaf14:;
  /* aaf14: bti j */
  /* bti: no architectural effect here */
  /* aaf18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aaf1c: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700192));
  fn1_aa69c(c);
  /* aaf20: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* aaf24: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aaf28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aaf2c: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700208));
  fn1_aa69c(c);
  /* aaf30: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* aaf34: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aaf38: ldrsb w8, [x25, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* aaf3c: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* aaf40: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* aaf44: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* aaf48: sub x4, x29, #0x18 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaf4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aaf50: asr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31))));
  /* aaf54: stur w8, [x29, #-0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* aaf58: bl #0xabbb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700252));
  fn1_abbb8(c);
  /* aaf5c: b #0xaa6d4 */
  goto L_aa6d4;
L_aaf60:;
  /* aaf60: bti j */
  /* bti: no architectural effect here */
  /* aaf64: ldp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* aaf68: add x26, x19, #0x28 */
  ARC_X_W(c, 26, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* aaf6c: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
L_aaf70:;
  /* aaf70: asr x20, x8, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* aaf74: b #0xaafa8 */
  goto L_aafa8;
L_aaf78:;
  /* aaf78: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* aaf7c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700288));
  fn1_142878(c);
  /* aaf80: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* aaf84: cbz x0, #0xaba08 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba08;
L_aaf88:;
  /* aaf88: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* aaf8c: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* aaf90: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* aaf94: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* aaf98: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_aaf9c:;
  /* aaf9c: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
L_aafa0:;
  /* aafa0: ldp x27, x22, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 27, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* aafa4: str x23, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 23));
L_aafa8:;
  /* aafa8: cmp x27, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 22));
  /* aafac: b.eq #0xaafbc */
  if (ARC_COND(c, 0)) goto L_aafbc;
  /* aafb0: ldrb w8, [x27] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 27)));
  /* aafb4: cmp w8, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(95));
  /* aafb8: b.eq #0xab3bc */
  if (ARC_COND(c, 0)) goto L_ab3bc;
L_aafbc:;
  /* aafbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* aafc0: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700356));
  fn1_aa69c(c);
  /* aafc4: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* aafc8: ldp x23, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* aafcc: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* aafd0: b.ne #0xaaf9c */
  if (ARC_COND(c, 1)) goto L_aaf9c;
  /* aafd4: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* aafd8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* aafdc: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* aafe0: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* aafe4: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* aafe8: b.ne #0xaaf78 */
  if (ARC_COND(c, 1)) goto L_aaf78;
  /* aafec: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* aaff0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700404));
  fn1_1428a8(c);
  /* aaff4: cbz x0, #0xaba14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba14;
  /* aaff8: cmp x23, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 26));
  /* aaffc: b.eq #0xab014 */
  if (ARC_COND(c, 0)) goto L_ab014;
  /* ab000: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* ab004: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ab008: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ab00c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700432));
  fn1_1449f0(c);
  /* ab010: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_ab014:;
  /* ab014: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ab018: b #0xaaf88 */
  goto L_aaf88;
L_ab01c:;
  /* ab01c: bti j */
  /* bti: no architectural effect here */
  /* ab020: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab024: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700456));
  fn1_aa69c(c);
  /* ab028: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* ab02c: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab030: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab034: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700472));
  fn1_aa69c(c);
  /* ab038: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* ab03c: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab040: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab044: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700488));
  fn1_aa69c(c);
  /* ab048: stur x0, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 0));
  /* ab04c: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab050: ldrsb w8, [x25, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* ab054: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab058: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* ab05c: sub x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab060: add x4, x29, #0x1c */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* ab064: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab068: asr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31))));
  /* ab06c: str w8, [x29, #0x1c] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 8));
  /* ab070: bl #0xabefc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700532));
  fn1_abefc(c);
  /* ab074: b #0xaa6d4 */
  goto L_aa6d4;
L_ab078:;
  /* ab078: bti j */
  /* bti: no architectural effect here */
  /* ab07c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab080: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700548));
  fn1_aa69c(c);
  /* ab084: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* ab088: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab08c: ldp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ab090: add x24, x19, #0x28 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* ab094: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* ab098: asr x20, x8, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* ab09c: b #0xab0cc */
  goto L_ab0cc;
L_ab0a0:;
  /* ab0a0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ab0a4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700584));
  fn1_142878(c);
  /* ab0a8: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ab0ac: cbz x0, #0xaba10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba10;
L_ab0b0:;
  /* ab0b0: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* ab0b4: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* ab0b8: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* ab0bc: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* ab0c0: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_ab0c4:;
  /* ab0c4: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* ab0c8: str x23, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 23));
L_ab0cc:;
  /* ab0cc: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab0d0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ab0d4: b.eq #0xab0e4 */
  if (ARC_COND(c, 0)) goto L_ab0e4;
  /* ab0d8: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ab0dc: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ab0e0: b.eq #0xab660 */
  if (ARC_COND(c, 0)) goto L_ab660;
L_ab0e4:;
  /* ab0e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab0e8: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700652));
  fn1_aa69c(c);
  /* ab0ec: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab0f0: ldp x23, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ab0f4: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* ab0f8: b.ne #0xab0c4 */
  if (ARC_COND(c, 1)) goto L_ab0c4;
  /* ab0fc: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ab100: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* ab104: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* ab108: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* ab10c: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* ab110: b.ne #0xab0a0 */
  if (ARC_COND(c, 1)) goto L_ab0a0;
  /* ab114: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* ab118: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700700));
  fn1_1428a8(c);
  /* ab11c: cbz x0, #0xaba20 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba20;
  /* ab120: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* ab124: b.eq #0xab13c */
  if (ARC_COND(c, 0)) goto L_ab13c;
  /* ab128: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* ab12c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ab130: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ab134: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700728));
  fn1_1449f0(c);
  /* ab138: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_ab13c:;
  /* ab13c: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ab140: b #0xab0b0 */
  goto L_ab0b0;
L_ab144:;
  /* ab144: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab148: bl #0xaca14 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700748));
  fn1_aca14(c);
  /* ab14c: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* ab150: cbnz x0, #0xab628 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ab628;
  /* ab154: b #0xaa6d4 */
  goto L_aa6d4;
L_ab158:;
  /* ab158: cmp w9, #0x6c */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(108));
  /* ab15c: b.eq #0xab500 */
  if (ARC_COND(c, 0)) goto L_ab500;
  /* ab160: cmp w9, #0x72 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(114));
  /* ab164: b.ne #0xaa6d4 */
  if (ARC_COND(c, 1)) goto L_aa6d4;
  /* ab168: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* ab16c: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* ab170: b #0xab508 */
  goto L_ab508;
L_ab174:;
  /* ab174: add x8, x21, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(2)));
  /* ab178: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab17c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab180: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700804));
  fn1_aa69c(c);
  /* ab184: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* ab188: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab18c: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* ab190: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab194: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* ab198: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab19c: str w8, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 8));
  /* ab1a0: bl #0xad248 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700836));
  fn1_ad248(c);
  /* ab1a4: b #0xaa6d4 */
  goto L_aa6d4;
L_ab1a8:;
  /* ab1a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab1ac: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700848));
  fn1_aa69c(c);
  /* ab1b0: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* ab1b4: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab1b8: ldrsb w8, [x25, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* ab1bc: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab1c0: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* ab1c4: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* ab1c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab1cc: asr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31))));
  /* ab1d0: str w8, [sp, #8] */
  arc_st32(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* ab1d4: bl #0xaba3c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700888));
  fn1_aba3c(c);
  /* ab1d8: b #0xaa6d4 */
  goto L_aa6d4;
L_ab1dc:;
  /* ab1dc: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* ab1e0: add x1, x1, #0xcbc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3260)));
  /* ab1e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab1e8: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* ab1ec: bl #0xa468c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700912));
  fn1_a468c(c);
  /* ab1f0: tbz w0, #0, #0xab4b4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_ab4b4;
  /* ab1f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab1f8: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700924));
  fn1_a52b0(c);
  /* ab1fc: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* ab200: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab204: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* ab208: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab20c: sub x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* ab210: asr x20, x8, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
L_ab214:;
  /* ab214: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab218: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ab21c: b.eq #0xab22c */
  if (ARC_COND(c, 0)) goto L_ab22c;
  /* ab220: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ab224: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ab228: b.eq #0xab7e0 */
  if (ARC_COND(c, 0)) goto L_ab7e0;
L_ab22c:;
  /* ab22c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab230: bl #0xacdd8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(700980));
  fn1_acdd8(c);
  /* ab234: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* ab238: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab23c: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab240: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ab244: bl #0xa7670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701000));
  fn1_a7670(c);
  /* ab248: b #0xab214 */
  goto L_ab214;
L_ab24c:;
  /* ab24c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab250: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701012));
  fn1_aa69c(c);
L_ab254:;
  /* ab254: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ab258: cbz x0, #0xaa6d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d0;
  /* ab25c: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ab260: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ab264: sub x9, x8, #0xfb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4016)));
  /* ab268: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ab26c: b.hi #0xab28c */
  if (ARC_COND(c, 8)) goto L_ab28c;
  /* ab270: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ab274: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701048));
  fn1_1428a8(c);
  /* ab278: cbz x0, #0xaba28 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba28;
  /* ab27c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ab280: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ab284: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ab288: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ab28c:;
  /* ab28c: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* ab290: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ab294: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* ab298: add x8, x8, #0x690 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1680)));
  /* ab29c: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ab2a0: lsr w9, w21, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 21)) >> ((UINT64_C(1)) & 31)));
  /* ab2a4: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ab2a8: mov w8, #0x3c */
  ARC_W_W(c, 8, UINT64_C(60));
  /* ab2ac: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* ab2b0: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ab2b4: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ab2b8: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* ab2bc: stp x24, x26, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* ab2c0: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ab2c4: stp xzr, xzr, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ab2c8: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* ab2cc: str x20, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 20));
  /* ab2d0: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ab2d4: b #0xaa6d4 */
  goto L_aa6d4;
L_ab2d8:;
  /* ab2d8: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
L_ab2dc:;
  /* ab2dc: add x26, x19, #0x28 */
  ARC_X_W(c, 26, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* ab2e0: b #0xab314 */
  goto L_ab314;
L_ab2e4:;
  /* ab2e4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ab2e8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701164));
  fn1_142878(c);
  /* ab2ec: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ab2f0: cbz x0, #0xaba1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba1c;
L_ab2f4:;
  /* ab2f4: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* ab2f8: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* ab2fc: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* ab300: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* ab304: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_ab308:;
  /* ab308: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* ab30c: str x23, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 23));
  /* ab310: tbz w24, #0, #0xab6a8 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_ab6a8;
L_ab314:;
  /* ab314: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab318: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ab31c: b.eq #0xab32c */
  if (ARC_COND(c, 0)) goto L_ab32c;
  /* ab320: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ab324: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ab328: b.eq #0xab6f4 */
  if (ARC_COND(c, 0)) goto L_ab6f4;
L_ab32c:;
  /* ab32c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab330: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701236));
  fn1_aa69c(c);
  /* ab334: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab338: ldp x23, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ab33c: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* ab340: b.ne #0xab308 */
  if (ARC_COND(c, 1)) goto L_ab308;
  /* ab344: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ab348: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* ab34c: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* ab350: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* ab354: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* ab358: b.ne #0xab2e4 */
  if (ARC_COND(c, 1)) goto L_ab2e4;
  /* ab35c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* ab360: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701284));
  fn1_1428a8(c);
  /* ab364: cbz x0, #0xaba24 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba24;
  /* ab368: cmp x23, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 26));
  /* ab36c: b.eq #0xab384 */
  if (ARC_COND(c, 0)) goto L_ab384;
  /* ab370: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* ab374: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ab378: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ab37c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701312));
  fn1_1449f0(c);
  /* ab380: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_ab384:;
  /* ab384: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ab388: b #0xab2f4 */
  goto L_ab2f4;
L_ab38c:;
  /* ab38c: add x8, x21, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(2)));
  /* ab390: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab394: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab398: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ab39c: ldr x27, [sp, #0x50] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(80))));
  /* ab3a0: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ab3a4: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ab3a8: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ab3ac: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ab3b0: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* ab3b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ab3b8: b #0xad7d0 */
  fn1_ad7d0(c); return;
L_ab3bc:;
  /* ab3bc: add x8, x27, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* ab3c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab3c4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ab3c8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab3cc: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701392));
  fn1_a77e4(c);
  /* ab3d0: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ab3d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab3d8: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701404));
  fn1_a52b0(c);
  /* ab3dc: stur x0, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 0));
  /* ab3e0: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab3e4: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* ab3e8: add x1, x1, #0xeb3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3763)));
  /* ab3ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab3f0: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* ab3f4: bl #0xa468c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701432));
  fn1_a468c(c);
  /* ab3f8: ldp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ab3fc: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* ab400: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* ab404: asr x20, x8, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* ab408: b #0xab438 */
  goto L_ab438;
L_ab40c:;
  /* ab40c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ab410: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701460));
  fn1_142878(c);
  /* ab414: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ab418: cbz x0, #0xaba2c */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba2c;
L_ab41c:;
  /* ab41c: asr x8, x22, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* ab420: add x24, x0, x22 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* ab424: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* ab428: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* ab42c: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_ab430:;
  /* ab430: str x0, [x24], #8 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* ab434: str x24, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 24));
L_ab438:;
  /* ab438: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab43c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ab440: b.eq #0xab450 */
  if (ARC_COND(c, 0)) goto L_ab450;
  /* ab444: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ab448: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ab44c: b.eq #0xab80c */
  if (ARC_COND(c, 0)) goto L_ab80c;
L_ab450:;
  /* ab450: tbz w21, #0, #0xaa6d0 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_aa6d0;
  /* ab454: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab458: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701532));
  fn1_aa69c(c);
  /* ab45c: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab460: ldp x24, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ab464: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* ab468: b.ne #0xab430 */
  if (ARC_COND(c, 1)) goto L_ab430;
  /* ab46c: ldr x23, [x19, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ab470: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* ab474: sub x22, x24, x23 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) - ARC_X_R(c, 23)));
  /* ab478: cmp x23, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 26));
  /* ab47c: lsl x1, x22, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* ab480: b.ne #0xab40c */
  if (ARC_COND(c, 1)) goto L_ab40c;
  /* ab484: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* ab488: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701580));
  fn1_1428a8(c);
  /* ab48c: cbz x0, #0xaba30 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba30;
  /* ab490: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* ab494: b.eq #0xab4ac */
  if (ARC_COND(c, 0)) goto L_ab4ac;
  /* ab498: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* ab49c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* ab4a0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* ab4a4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701608));
  fn1_1449f0(c);
  /* ab4a8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_ab4ac:;
  /* ab4ac: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* ab4b0: b #0xab41c */
  goto L_ab41c;
L_ab4b4:;
  /* ab4b4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* ab4b8: add x1, x1, #0x9f9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2553)));
  /* ab4bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab4c0: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* ab4c4: bl #0xa468c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701640));
  fn1_a468c(c);
  /* ab4c8: tbz w0, #0, #0xab6bc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_ab6bc;
  /* ab4cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab4d0: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ab4d4: ldr x27, [sp, #0x50] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(80))));
  /* ab4d8: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ab4dc: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ab4e0: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ab4e4: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ab4e8: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* ab4ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ab4f0: b #0xade64 */
  fn1_ade64(c); return;
L_ab4f4:;
  /* ab4f4: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* ab4f8: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* ab4fc: b #0xab508 */
  goto L_ab508;
L_ab500:;
  /* ab500: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* ab504: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
L_ab508:;
  /* ab508: add x9, x21, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + UINT64_C(2)));
  /* ab50c: sub x10, x22, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 22) - ARC_X_R(c, 9)));
  /* ab510: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* ab514: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* ab518: b.lo #0xaa6d0 */
  if (ARC_COND(c, 3)) goto L_aa6d0;
  /* ab51c: ldrb w9, [x21, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 21) + INT64_C(2))));
  /* ab520: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* ab524: mov w11, #0x3e */
  ARC_W_W(c, 11, UINT64_C(62));
  /* ab528: b #0xab538 */
  goto L_ab538;
L_ab52c:;
  /* ab52c: add x10, x12, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) + UINT64_C(1)));
L_ab530:;
  /* ab530: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* ab534: b.eq #0xab578 */
  if (ARC_COND(c, 0)) goto L_ab578;
L_ab538:;
  /* ab538: add x12, x10, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* ab53c: lsr x12, x12, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(1)) & 63)));
  /* ab540: add x13, x8, x12, lsl #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 12)) << 4)));
  /* ab544: ldrb w14, [x13] */
  ARC_W_W(c, 14, arc_ld8(ARC_X_R(c, 13)));
  /* ab548: cmp w14, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 9));
  /* ab54c: b.lo #0xab52c */
  if (ARC_COND(c, 3)) goto L_ab52c;
  /* ab550: b.ne #0xab570 */
  if (ARC_COND(c, 1)) goto L_ab570;
  /* ab554: ldrb w13, [x13, #1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 13) + INT64_C(1))));
  /* ab558: ldrb w14, [x21, #3] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 21) + INT64_C(3))));
  /* ab55c: and w13, w13, #0xff */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) & UINT64_C(255)));
  /* ab560: cmp w13, w14, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 13), ((uint64_t)(uint8_t)(ARC_W_R(c, 14))));
  /* ab564: csinc x10, x10, x12, hs */
  ARC_X_W(c, 10, (ARC_COND(c, 2) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 12)) + 1)));
  /* ab568: csel x11, x11, x12, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 12)));
  /* ab56c: b #0xab530 */
  goto L_ab530;
L_ab570:;
  /* ab570: mov x11, x12 */
  ARC_X_W(c, 11, ARC_X_R(c, 12));
  /* ab574: b #0xab530 */
  goto L_ab530;
L_ab578:;
  /* ab578: add x25, x8, x10, lsl #4 */
  ARC_X_W(c, 25, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 10)) << 4)));
  /* ab57c: ldrb w8, [x25] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 25)));
  /* ab580: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* ab584: b.ne #0xaa6d0 */
  if (ARC_COND(c, 1)) goto L_aa6d0;
  /* ab588: ldrb w8, [x25, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 25) + INT64_C(1))));
  /* ab58c: ldrb w9, [x21, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 21) + INT64_C(3))));
  /* ab590: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* ab594: b.ne #0xaa6d0 */
  if (ARC_COND(c, 1)) goto L_aa6d0;
  /* ab598: ldrb w8, [x25, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 25) + INT64_C(2))));
  /* ab59c: add x9, x21, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* ab5a0: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* ab5a4: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* ab5a8: b.eq #0xab5d0 */
  if (ARC_COND(c, 0)) goto L_ab5d0;
  /* ab5ac: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* ab5b0: b.ne #0xaa6d0 */
  if (ARC_COND(c, 1)) goto L_aa6d0;
  /* ab5b4: ldr x20, [x25, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* ab5b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ab5bc: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701888));
  fn1_142860(c);
  /* ab5c0: add x8, x20, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 0)));
  /* ab5c4: ldurb w8, [x8, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(-1))));
  /* ab5c8: cmp w8, #0x2a */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(42));
  /* ab5cc: b.ne #0xaa6d0 */
  if (ARC_COND(c, 1)) goto L_aa6d0;
L_ab5d0:;
  /* ab5d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab5d4: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701912));
  fn1_aa69c(c);
  /* ab5d8: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab5dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ab5e0: cbz w24, #0xab88c */
  if ((ARC_W_R(c, 24)) == 0) goto L_ab88c;
  /* ab5e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab5e8: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701932));
  fn1_aa69c(c);
  /* ab5ec: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab5f0: cmp w23, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(0));
  /* ab5f4: csel x22, x20, x0, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 0)));
  /* ab5f8: csel x20, x0, x20, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 20)));
  /* ab5fc: b #0xab890 */
  goto L_ab890;
L_ab600:;
  /* ab600: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ab604: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab608: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ab60c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab610: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701972));
  fn1_a77e4(c);
  /* ab614: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ab618: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab61c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab620: bl #0xadd1c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(701988));
  fn1_add1c(c);
  /* ab624: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
L_ab628:;
  /* ab628: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab62c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab630: bl #0xadc68 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702004));
  fn1_adc68(c);
  /* ab634: b #0xaa6d4 */
  goto L_aa6d4;
L_ab638:;
  /* ab638: add x8, x21, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(2)));
  /* ab63c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab640: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab644: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702024));
  fn1_aa69c(c);
  /* ab648: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* ab64c: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab650: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab654: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab658: bl #0xadb28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702044));
  fn1_adb28(c);
  /* ab65c: b #0xaa6d4 */
  goto L_aa6d4;
L_ab660:;
  /* ab660: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ab664: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab668: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ab66c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab670: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702068));
  fn1_a77e4(c);
  /* ab674: ldrsb w8, [x25, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* ab678: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ab67c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ab680: and w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* ab684: asr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31))));
  /* ab688: strb w9, [x29, #0x1c] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 9));
L_ab68c:;
  /* ab68c: stur w8, [x29, #-0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* ab690: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab694: add x3, x29, #0x1c */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* ab698: sub x4, x29, #0x18 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab69c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab6a0: bl #0xabd70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702116));
  fn1_abd70(c);
  /* ab6a4: b #0xaa6d4 */
  goto L_aa6d4;
L_ab6a8:;
  /* ab6a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab6ac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ab6b0: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702132));
  fn1_a77e4(c);
  /* ab6b4: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ab6b8: b #0xab710 */
  goto L_ab710;
L_ab6bc:;
  /* ab6bc: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* ab6c0: add x1, x1, #0xcc5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3269)));
  /* ab6c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab6c8: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* ab6cc: bl #0xa468c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702160));
  fn1_a468c(c);
  /* ab6d0: tbz w0, #0, #0xab73c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_ab73c;
L_ab6d4:;
  /* ab6d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab6d8: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702172));
  fn1_aa69c(c);
  /* ab6dc: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
L_ab6e0:;
  /* ab6e0: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab6e4: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab6e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab6ec: bl #0xadf00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702192));
  fn1_adf00(c);
  /* ab6f0: b #0xaa6d4 */
  goto L_aa6d4;
L_ab6f4:;
  /* ab6f4: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ab6f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab6fc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ab700: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab704: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702216));
  fn1_a77e4(c);
  /* ab708: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ab70c: tbnz w24, #0, #0xab718 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_ab718;
L_ab710:;
  /* ab710: cmp x1, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1));
  /* ab714: b.ne #0xaa6d0 */
  if (ARC_COND(c, 1)) goto L_aa6d0;
L_ab718:;
  /* ab718: ldrsb w8, [x25, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* ab71c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ab720: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab724: sub x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab728: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab72c: asr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31))));
  /* ab730: stur w8, [x29, #-0x18] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* ab734: bl #0xabe3c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702264));
  fn1_abe3c(c);
  /* ab738: b #0xaa6d4 */
  goto L_aa6d4;
L_ab73c:;
  /* ab73c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab740: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ab744: b.eq #0xab85c */
  if (ARC_COND(c, 0)) goto L_ab85c;
  /* ab748: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ab74c: cmp w9, #0x75 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(117));
  /* ab750: b.ne #0xab85c */
  if (ARC_COND(c, 1)) goto L_ab85c;
  /* ab754: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ab758: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab75c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab760: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702308));
  fn1_a8930(c);
  /* ab764: str x0, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 0));
  /* ab768: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab76c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ab770: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* ab774: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702328));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ab778: cmp x1, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(8));
  /* ab77c: b.ne #0xab79c */
  if (ARC_COND(c, 1)) goto L_ab79c;
  /* ab780: mov x9, #0x5f5f */
  ARC_X_W(c, 9, UINT64_C(24415));
  /* ab784: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ab788: movk x9, #0x7575, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1970601984)));
  /* ab78c: movk x9, #0x6469, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(110402134343680)));
  /* ab790: movk x9, #0x666f, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(7381118314283532288)));
  /* ab794: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ab798: b.eq #0xab97c */
  if (ARC_COND(c, 0)) goto L_ab97c;
L_ab79c:;
  /* ab79c: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* ab7a0: ldp x8, x9, [x20, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab7a4: sub x21, x9, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
L_ab7a8:;
  /* ab7a8: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab7ac: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ab7b0: b.eq #0xab7c0 */
  if (ARC_COND(c, 0)) goto L_ab7c0;
  /* ab7b4: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ab7b8: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ab7bc: b.eq #0xab954 */
  if (ARC_COND(c, 0)) goto L_ab954;
L_ab7c0:;
  /* ab7c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab7c4: bl #0xa7338 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702408));
  fn1_a7338(c);
  /* ab7c8: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* ab7cc: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab7d0: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab7d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ab7d8: bl #0xa7670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702428));
  fn1_a7670(c);
  /* ab7dc: b #0xab7a8 */
  goto L_ab7a8;
L_ab7e0:;
  /* ab7e0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ab7e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab7e8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ab7ec: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab7f0: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702452));
  fn1_a77e4(c);
  /* ab7f4: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ab7f8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* ab7fc: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab800: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab804: bl #0xaddb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702472));
  fn1_addb8(c);
  /* ab808: b #0xaa6d4 */
  goto L_aa6d4;
L_ab80c:;
  /* ab80c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ab810: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab814: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ab818: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab81c: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702496));
  fn1_a77e4(c);
  /* ab820: ldrsb w8, [x25, #3] */
  ARC_W_W(c, 8, ((int32_t)(int8_t)arc_ld8((ARC_X_R(c, 25) + INT64_C(3)))));
  /* ab824: stp x0, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ab828: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* ab82c: sub x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab830: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* ab834: add x4, x29, #0x18 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ab838: and w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* ab83c: asr w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)((int32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(1)) & 31))));
  /* ab840: add x5, sp, #4 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(4)));
  /* ab844: add x6, x29, #0x1c */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* ab848: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab84c: strb w9, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 9));
  /* ab850: str w8, [x29, #0x1c] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 8));
  /* ab854: bl #0xabc84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702552));
  fn1_abc84(c);
  /* ab858: b #0xaa6d4 */
  goto L_aa6d4;
L_ab85c:;
  /* ab85c: cmp w20, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(0));
  /* ab860: cset w1, eq */
  ARC_W_W(c, 1, (ARC_COND(c, 0) ? 1 : 0));
  /* ab864: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab868: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ab86c: ldr x27, [sp, #0x50] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(80))));
  /* ab870: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ab874: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ab878: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ab87c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ab880: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* ab884: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ab888: b #0xadfa0 */
  fn1_adfa0(c); return;
L_ab88c:;
  /* ab88c: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_ab890:;
  /* ab890: ldr x21, [x25, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* ab894: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ab898: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702620));
  fn1_142860(c);
  /* ab89c: cmp x0, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(8));
  /* ab8a0: b.lo #0xab9e4 */
  if (ARC_COND(c, 3)) goto L_ab9e4;
  /* ab8a4: mov x9, #0x706f */
  ARC_X_W(c, 9, UINT64_C(28783));
  /* ab8a8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ab8ac: movk x9, #0x7265, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1919221760)));
  /* ab8b0: movk x9, #0x7461, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(127959960649728)));
  /* ab8b4: movk x9, #0x726f, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(8245809442738667520)));
  /* ab8b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ab8bc: b.ne #0xab9e4 */
  if (ARC_COND(c, 1)) goto L_ab9e4;
  /* ab8c0: subs x25, x0, #8 */
  ARC_X_W(c, 25, arc_sub64(c, ARC_X_R(c, 0), UINT64_C(8)));
  /* ab8c4: add x24, x21, #8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ab8c8: b.eq #0xab8e0 */
  if (ARC_COND(c, 0)) goto L_ab8e0;
  /* ab8cc: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* ab8d0: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* ab8d4: b.ne #0xab8e0 */
  if (ARC_COND(c, 1)) goto L_ab8e0;
  /* ab8d8: add x24, x21, #9 */
  ARC_X_W(c, 24, (ARC_X_R(c, 21) + UINT64_C(9)));
  /* ab8dc: sub x25, x0, #9 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) - UINT64_C(9)));
L_ab8e0:;
  /* ab8e0: ldr x21, [x19, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ab8e4: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* ab8e8: sub x9, x8, #0xfb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4016)));
  /* ab8ec: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ab8f0: b.hi #0xab910 */
  if (ARC_COND(c, 8)) goto L_ab910;
  /* ab8f4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ab8f8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702716));
  fn1_1428a8(c);
  /* ab8fc: cbz x0, #0xaba28 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aba28;
  /* ab900: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ab904: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ab908: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ab90c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ab910:;
  /* ab910: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* ab914: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* ab918: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* ab91c: add x8, x8, #0xf00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3840)));
  /* ab920: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* ab924: mov w9, #0x47 */
  ARC_W_W(c, 9, UINT64_C(71));
  /* ab928: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ab92c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ab930: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ab934: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* ab938: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ab93c: stp x20, x22, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* ab940: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* ab944: stp x24, x25, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ab948: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ab94c: strb w23, [x0, #0x30] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(48)), ARC_W_R(c, 23));
  /* ab950: b #0xaa6d4 */
  goto L_aa6d4;
L_ab954:;
  /* ab954: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ab958: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_ab95c:;
  /* ab95c: asr x1, x21, #3 */
  ARC_X_W(c, 1, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(3)) & 63))));
  /* ab960: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab964: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702824));
  fn1_a77e4(c);
  /* ab968: stp x0, x1, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* ab96c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* ab970: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* ab974: strb wzr, [x29, #0x1c] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 31));
  /* ab978: b #0xab68c */
  goto L_ab68c;
L_ab97c:;
  /* ab97c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab980: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ab984: b.eq #0xab79c */
  if (ARC_COND(c, 0)) goto L_ab79c;
  /* ab988: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ab98c: cmp w9, #0x7a */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(122));
  /* ab990: b.eq #0xab9b0 */
  if (ARC_COND(c, 0)) goto L_ab9b0;
  /* ab994: cmp w9, #0x74 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(116));
  /* ab998: b.ne #0xab79c */
  if (ARC_COND(c, 1)) goto L_ab79c;
  /* ab99c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ab9a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab9a4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab9a8: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702892));
  fn1_a52b0(c);
  /* ab9ac: b #0xab9c0 */
  goto L_ab9c0;
L_ab9b0:;
  /* ab9b0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ab9b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab9b8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ab9bc: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702912));
  fn1_aa69c(c);
L_ab9c0:;
  /* ab9c0: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* ab9c4: cbz x0, #0xaa6d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa6d4;
  /* ab9c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab9cc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ab9d0: ldp x8, x9, [x0, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ab9d4: sub x21, x9, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* ab9d8: bl #0xa7670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702940));
  fn1_a7670(c);
  /* ab9dc: b #0xab95c */
  goto L_ab95c;
L_ab9e0:;
  /* ab9e0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702948));
  fn1_1427b8(c);
L_ab9e4:;
  /* ab9e4: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* ab9e8: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* ab9ec: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* ab9f0: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* ab9f4: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* ab9f8: add x3, x3, #0xb1e */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2846)));
  /* ab9fc: mov w2, #0xbc1 */
  ARC_W_W(c, 2, UINT64_C(3009));
  /* aba00: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702980));
  fn1_a23d8(c);
L_aba04:;
  /* aba04: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702984));
  fn1_1427b8(c);
L_aba08:;
  /* aba08: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702988));
  fn1_1427b8(c);
L_aba0c:;
  /* aba0c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702992));
  fn1_1427b8(c);
L_aba10:;
  /* aba10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(702996));
  fn1_1427b8(c);
L_aba14:;
  /* aba14: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703000));
  fn1_1427b8(c);
L_aba18:;
  /* aba18: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703004));
  fn1_1427b8(c);
L_aba1c:;
  /* aba1c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703008));
  fn1_1427b8(c);
L_aba20:;
  /* aba20: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703012));
  fn1_1427b8(c);
L_aba24:;
  /* aba24: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703016));
  fn1_1427b8(c);
L_aba28:;
  /* aba28: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703020));
  fn1_142488(c);
L_aba2c:;
  /* aba2c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703024));
  fn1_1427b8(c);
L_aba30:;
  /* aba30: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703028));
  fn1_1427b8(c);
L_aba34:;
  /* aba34: strb w20, [x19, #0x308] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(776)), ARC_W_R(c, 20));
  /* aba38: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(703036));
  fn1_9cc20(c);
}

void fn1_b1dac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038656428));
  /* b1dac: bti c */
  /* bti: no architectural effect here */
  /* b1db0: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b1db4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b61f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038673908));
  /* b61f4: bti c */
  /* bti: no architectural effect here */
  /* b61f8: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b61fc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b8508(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682888));
  /* b8508: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b850c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b8510: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b8514: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b8518: ldr x19, [x0, #0x18] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b851c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b8520: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b8524: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b8528: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b852c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(754992));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b8530: ldurh w8, [x19, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(9))));
  /* b8534: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b8538: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b853c: b.ne #0xb8550 */
  if (ARC_COND(c, 1)) goto L_b8550;
  /* b8540: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8544: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b8548: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b854c: ret  */
  return;
L_b8550:;
  /* b8550: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b8554: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b8558: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b855c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b8560: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b8564: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b8568: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b856c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_bbc10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038696976));
  /* bbc10: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bbc14: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bbc18: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bbc1c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bbc20: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bbc24: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* bbc28: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* bbc2c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* bbc30: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* bbc34: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* bbc38: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* bbc3c: b.hi #0xbbc60 */
  if (ARC_COND(c, 8)) goto L_bbc60;
  /* bbc40: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* bbc44: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* bbc48: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769100));
  fn1_1428a8(c);
  /* bbc4c: cbz x0, #0xbbcb4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bbcb4;
  /* bbc50: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* bbc54: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* bbc58: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* bbc5c: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_bbc60:;
  /* bbc60: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* bbc64: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* bbc68: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* bbc6c: add x8, x8, #0x580 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1408)));
  /* bbc70: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* bbc74: mov w9, #0x1d */
  ARC_W_W(c, 9, UINT64_C(29));
  /* bbc78: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* bbc7c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bbc80: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* bbc84: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* bbc88: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* bbc8c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* bbc90: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* bbc94: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* bbc98: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* bbc9c: stp x9, x10, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* bbca0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bbca4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bbca8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bbcac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bbcb0: ret  */
  return;
L_bbcb4:;
  /* bbcb4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(769208));
  fn1_142488(c);
}

void fn1_be2f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038706928));
  /* be2f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* be2f4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be2f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* be2fc: nop  */
  /* nop: no architectural effect here */
  /* be300: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* be304: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(779016));
  fn1_144ac8(c);
  /* be308: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* be30c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* be310: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* be314: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be318: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* be31c: ret  */
  return;
}

void fn1_d2cb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038791348));
  /* d2cb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d2cb8: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* d2cbc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d2cc0: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* d2cc4: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* d2cc8: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d2ccc: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d2cd0: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d2cd4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* d2cd8: add x21, x2, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 2) + UINT64_C(1)));
  /* d2cdc: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* d2ce0: cmp x1, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 21));
  /* d2ce4: b.ls #0xd2ec4 */
  if (ARC_COND(c, 9)) goto L_d2ec4;
  /* d2ce8: ldrb w8, [x0, x19] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + ARC_X_R(c, 19))));
  /* d2cec: sub w9, w8, #0x5b */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(91)));
  /* d2cf0: orr w10, w8, #0x20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* d2cf4: cmn w9, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(26), 0);
  /* d2cf8: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d2cfc: cmp w8, w3, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 8), ((uint64_t)(uint8_t)(ARC_W_R(c, 3))));
  /* d2d00: b.ne #0xd2ec4 */
  if (ARC_COND(c, 1)) goto L_d2ec4;
  /* d2d04: add x8, x0, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* d2d08: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* d2d0c: sub w9, w10, #9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - UINT64_C(9)));
  /* d2d10: cmp w9, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(5));
  /* d2d14: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d2d18: b.hs #0xd2d24 */
  if (ARC_COND(c, 2)) goto L_d2d24;
L_d2d1c:;
  /* d2d1c: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* d2d20: b #0xd2ecc */
  goto L_d2ecc;
L_d2d24:;
  /* d2d24: cmp w10, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(32));
  /* d2d28: b.eq #0xd2d1c */
  if (ARC_COND(c, 0)) goto L_d2d1c;
  /* d2d2c: subs x23, x1, x21 */
  ARC_X_W(c, 23, arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 21)));
  /* d2d30: b.eq #0xd2ec4 */
  if (ARC_COND(c, 0)) goto L_d2ec4;
  /* d2d34: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* d2d38: b #0xd2d48 */
  goto L_d2d48;
L_d2d3c:;
  /* d2d3c: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* d2d40: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* d2d44: b.eq #0xd2d64 */
  if (ARC_COND(c, 0)) goto L_d2d64;
L_d2d48:;
  /* d2d48: ldrb w9, [x8, x22] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 22))));
  /* d2d4c: sub w10, w9, #9 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) - UINT64_C(9)));
  /* d2d50: cmp w10, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(5));
  /* d2d54: b.lo #0xd2d3c */
  if (ARC_COND(c, 3)) goto L_d2d3c;
  /* d2d58: cmp w9, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(32));
  /* d2d5c: b.eq #0xd2d3c */
  if (ARC_COND(c, 0)) goto L_d2d3c;
  /* d2d60: b #0xd2d6c */
  goto L_d2d6c;
L_d2d64:;
  /* d2d64: ldrb w9, [x0, x1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + ARC_X_R(c, 1))));
  /* d2d68: mov x22, x23 */
  ARC_X_W(c, 22, ARC_X_R(c, 23));
L_d2d6c:;
  /* d2d6c: cmp w9, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(45));
  /* d2d70: mov w24, #0x7fffffff */
  ARC_W_W(c, 24, UINT64_C(2147483647));
  /* d2d74: b.eq #0xd2d80 */
  if (ARC_COND(c, 0)) goto L_d2d80;
  /* d2d78: cmp w9, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(43));
  /* d2d7c: b.ne #0xd2d94 */
  if (ARC_COND(c, 1)) goto L_d2d94;
L_d2d80:;
  /* d2d80: cmp w9, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(43));
  /* d2d84: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* d2d88: cset w28, eq */
  ARC_W_W(c, 28, (ARC_COND(c, 0) ? 1 : 0));
  /* d2d8c: cinv w24, w24, ne */
  ARC_W_W(c, 24, (ARC_COND(c, 1) ? (~(uint32_t)(ARC_W_R(c, 24))) : (ARC_W_R(c, 24))));
  /* d2d90: b #0xd2d98 */
  goto L_d2d98;
L_d2d94:;
  /* d2d94: mov w28, #1 */
  ARC_W_W(c, 28, UINT64_C(1));
L_d2d98:;
  /* d2d98: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* d2d9c: b.hs #0xd2e68 */
  if (ARC_COND(c, 2)) goto L_d2e68;
  /* d2da0: ldrb w20, [x8, x22] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 22))));
  /* d2da4: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* d2da8: stur x1, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 1));
  /* d2dac: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* d2db0: bl #0xd697c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(863668));
  fn1_d697c(c);
  /* d2db4: tbz w0, #0, #0xd2e68 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_d2e68;
  /* d2db8: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* d2dbc: str w28, [sp, #0xc] */
  arc_st32(((c)->sp + INT64_C(12)), ARC_W_R(c, 28));
  /* d2dc0: bl #0xd69b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(863684));
  fn1_d69b8(c);
  /* d2dc4: cmp w0, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(9));
  /* d2dc8: b.hi #0xd2e98 */
  if (ARC_COND(c, 8)) goto L_d2e98;
  /* d2dcc: add x8, x25, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + ARC_X_R(c, 19)));
  /* d2dd0: mov w25, #0xcccc */
  ARC_W_W(c, 25, UINT64_C(52428));
  /* d2dd4: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* d2dd8: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* d2ddc: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d2de0: mov w27, wzr */
  ARC_W_W(c, 27, ARC_W_R(c, 31));
  /* d2de4: add x28, x22, #2 */
  ARC_X_W(c, 28, (ARC_X_R(c, 22) + UINT64_C(2)));
  /* d2de8: movk w25, #0xccc, lsl #16 */
  ARC_W_W(c, 25, ((ARC_W_R(c, 25) & UINT64_C(18446744069414649855)) | UINT64_C(214695936)));
  /* d2dec: sub x8, x8, x19 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 19)));
  /* d2df0: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
L_d2df4:;
  /* d2df4: add w8, w26, w26, lsl #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) + ((uint32_t)(ARC_W_R(c, 26)) << 2)));
  /* d2df8: cmp w26, w25 */
  (void)arc_sub32(c, ARC_W_R(c, 26), ARC_W_R(c, 25));
  /* d2dfc: sub w9, w24, w0 */
  ARC_W_W(c, 9, (ARC_W_R(c, 24) - ARC_W_R(c, 0)));
  /* d2e00: mov w10, #0x22 */
  ARC_W_W(c, 10, UINT64_C(34));
  /* d2e04: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* d2e08: csel w8, w24, w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 24)) : ARC_W_R(c, 8)));
  /* d2e0c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d2e10: add w8, w0, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + ARC_W_R(c, 8)));
  /* d2e14: csel w8, w24, w8, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 24)) : ARC_W_R(c, 8)));
  /* d2e18: ccmp w26, w25, #2, ls */
  if (ARC_COND(c, 9)) { (void)arc_sub32(c, ARC_W_R(c, 26), ARC_W_R(c, 25)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* d2e1c: csel w9, w10, w27, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 27)));
  /* d2e20: cmp w26, w24 */
  (void)arc_sub32(c, ARC_W_R(c, 26), ARC_W_R(c, 24));
  /* d2e24: csel w26, w24, w8, eq */
  ARC_W_W(c, 26, (ARC_COND(c, 0) ? (ARC_W_R(c, 24)) : ARC_W_R(c, 8)));
  /* d2e28: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* d2e2c: csel w27, w10, w9, eq */
  ARC_W_W(c, 27, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d2e30: cmp x8, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 28));
  /* d2e34: b.eq #0xd2ea8 */
  if (ARC_COND(c, 0)) goto L_d2ea8;
  /* d2e38: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* d2e3c: ldrb w20, [x8, x28] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 28))));
  /* d2e40: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* d2e44: bl #0xd697c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(863816));
  fn1_d697c(c);
  /* d2e48: tbz w0, #0, #0xd2eb0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_d2eb0;
  /* d2e4c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* d2e50: bl #0xd69b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(863828));
  fn1_d69b8(c);
  /* d2e54: cmp w0, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(9));
  /* d2e58: add x28, x28, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* d2e5c: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* d2e60: b.ls #0xd2df4 */
  if (ARC_COND(c, 9)) goto L_d2df4;
  /* d2e64: b #0xd2eb4 */
  goto L_d2eb4;
L_d2e68:;
  /* d2e68: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* d2e6c: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* d2e70: mov w27, wzr */
  ARC_W_W(c, 27, ARC_W_R(c, 31));
L_d2e74:;
  /* d2e74: cmp w28, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(0));
  /* d2e78: lsl x8, x27, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 27)) << ((UINT64_C(32)) & 63)));
  /* d2e7c: cneg w24, w26, eq */
  ARC_W_W(c, 24, (ARC_COND(c, 0) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 26))) : (ARC_W_R(c, 26))));
  /* d2e80: cbz x22, #0xd2ec4 */
  if ((ARC_X_R(c, 22)) == 0) goto L_d2ec4;
L_d2e84:;
  /* d2e84: mov w9, w24 */
  ARC_W_W(c, 9, ARC_W_R(c, 24));
  /* d2e88: add x19, x22, x21 */
  ARC_X_W(c, 19, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* d2e8c: orr x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* d2e90: mov x8, #0x100000000 */
  ARC_X_W(c, 8, UINT64_C(4294967296));
  /* d2e94: b #0xd2ecc */
  goto L_d2ecc;
L_d2e98:;
  /* d2e98: mov w27, wzr */
  ARC_W_W(c, 27, ARC_W_R(c, 31));
  /* d2e9c: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* d2ea0: mov w26, wzr */
  ARC_W_W(c, 26, ARC_W_R(c, 31));
  /* d2ea4: b #0xd2eb4 */
  goto L_d2eb4;
L_d2ea8:;
  /* d2ea8: mov x22, x23 */
  ARC_X_W(c, 22, ARC_X_R(c, 23));
  /* d2eac: b #0xd2eb4 */
  goto L_d2eb4;
L_d2eb0:;
  /* d2eb0: sub x22, x28, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 28) - UINT64_C(1)));
L_d2eb4:;
  /* d2eb4: cmp w27, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(34));
  /* d2eb8: b.ne #0xd2efc */
  if (ARC_COND(c, 1)) goto L_d2efc;
  /* d2ebc: mov x8, #0x2200000000 */
  ARC_X_W(c, 8, UINT64_C(146028888064));
  /* d2ec0: cbnz x22, #0xd2e84 */
  if ((ARC_X_R(c, 22)) != 0) goto L_d2e84;
L_d2ec4:;
  /* d2ec4: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d2ec8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
L_d2ecc:;
  /* d2ecc: mov w9, w9 */
  ARC_W_W(c, 9, ARC_W_R(c, 9));
  /* d2ed0: orr x1, x8, x9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) | ARC_X_R(c, 9)));
  /* d2ed4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d2ed8: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d2edc: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d2ee0: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d2ee4: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* d2ee8: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* d2eec: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d2ef0: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* d2ef4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d2ef8: ret  */
  return;
L_d2efc:;
  /* d2efc: ldr w28, [sp, #0xc] */
  ARC_W_W(c, 28, arc_ld32(((c)->sp + INT64_C(12))));
  /* d2f00: b #0xd2e74 */
  goto L_d2e74;
}

void fn1_d85c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038814144));
  /* d85c0: bti c */
  /* bti: no architectural effect here */
  /* d85c4: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* d85c8: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* d85cc: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* d85d0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d85d4: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d85d8: cbz x8, #0xd8660 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d8660;
  /* d85dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d85e0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* d85e4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d85e8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d85ec: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* d85f0: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* d85f4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d85f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d85fc: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d8600: csinc x9, x10, x0, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 0)) + 1)));
  /* d8604: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d8608: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d860c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* d8610: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* d8614: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886296));
  fn1_da18c(c);
  /* d8618: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d861c: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d8620: b.hi #0xd8638 */
  if (ARC_COND(c, 8)) goto L_d8638;
L_d8624:;
  /* d8624: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d8628: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886316));
  fn1_da18c(c);
  /* d862c: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* d8630: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d8634: b.lo #0xd8624 */
  if (ARC_COND(c, 3)) goto L_d8624;
L_d8638:;
  /* d8638: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* d863c: add x20, x19, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* d8640: b.ne #0xd866c */
  if (ARC_COND(c, 1)) goto L_d866c;
  /* d8644: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d8648: ldp x10, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d864c: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8650: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8654: csel x0, x20, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 9)));
  /* d8658: csel x1, x11, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* d865c: b #0xd86e8 */
  goto L_d86e8;
L_d8660:;
  /* d8660: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d8664: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* d8668: ret  */
  return;
L_d866c:;
  /* d866c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d8670: ldp x10, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* d8674: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d8678: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* d867c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8680: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8684: csel x9, x20, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 9)));
  /* d8688: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* d868c: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* d8690: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* d8694: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* d8698: bl #0xda370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886428));
  fn1_da370(c);
  /* d869c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d86a0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d86a4: ldr x10, [sp, #0x18] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(24))));
  /* d86a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d86ac: csel x8, x20, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 9)));
  /* d86b0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* d86b4: b.eq #0xd86e0 */
  if (ARC_COND(c, 0)) goto L_d86e0;
  /* d86b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d86bc: bl #0xda370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(886464));
  fn1_da370(c);
  /* d86c0: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* d86c4: ldp x10, x11, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* d86c8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d86cc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d86d0: csel x0, x20, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 9)));
  /* d86d4: add x8, x10, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + ARC_X_R(c, 11)));
  /* d86d8: sub x1, x8, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* d86dc: b #0xd86e8 */
  goto L_d86e8;
L_d86e0:;
  /* d86e0: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d86e4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
L_d86e8:;
  /* d86e8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d86ec: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d86f0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* d86f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d86f8: ret  */
  return;
}

void fn1_dbf68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038828904));
  /* dbf68: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dbf6c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dbf70: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dbf74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dbf78: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dbf7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dbf80: ldr x8, [x8, #0xa28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2600))));
  /* dbf84: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* dbf88: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dbf8c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* dbf90: cbz x9, #0xdbf9c */
  if ((ARC_X_R(c, 9)) == 0) goto L_dbf9c;
  /* dbf94: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* dbf98: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
L_dbf9c:;
  /* dbf9c: ldr x20, [x19, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* dbfa0: cbz x20, #0xdbfd0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_dbfd0;
L_dbfa4:;
  /* dbfa4: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* dbfa8: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* dbfac: ldr x3, [x20, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* dbfb0: ldp x20, x1, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* dbfb4: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* dbfb8: ldr x9, [x9, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* dbfbc: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* dbfc0: add x2, x8, #0x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* dbfc4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901064));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* dbfc8: str x20, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 20));
  /* dbfcc: cbnz x20, #0xdbfa4 */
  if ((ARC_X_R(c, 20)) != 0) goto L_dbfa4;
L_dbfd0:;
  /* dbfd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dbfd4: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* dbfd8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dbfdc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dbfe0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dbfe4: b #0x142608 */
  fn1_142608(c); return;
  /* dbfe8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(901100));
  fn1_a1454(c);
}

void fn1_e0668(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038847080));
  /* e0668: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e066c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e0670: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0674: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* e0678: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e067c: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e0680: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0684: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0688: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* e068c: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e0690: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e0694: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e0698: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e069c: csel x26, x10, x8, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e06a0: subs x8, x26, x1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 1)));
  /* e06a4: b.lo #0xe085c */
  if (ARC_COND(c, 3)) goto L_e085c;
  /* e06a8: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* e06ac: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* e06b0: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* e06b4: csel x27, x8, x2, lo */
  ARC_X_W(c, 27, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 2)));
  /* e06b8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e06bc: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* e06c0: and x11, x10, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(18446744073709551614)));
  /* e06c4: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* e06c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e06cc: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* e06d0: csel x21, x9, x11, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* e06d4: sub x9, x27, x26 */
  ARC_X_W(c, 9, (ARC_X_R(c, 27) - ARC_X_R(c, 26)));
  /* e06d8: add x9, x9, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 21)));
  /* e06dc: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* e06e0: and w9, w10, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & UINT64_C(255)));
  /* e06e4: b.hs #0xe0754 */
  if (ARC_COND(c, 2)) goto L_e0754;
  /* e06e8: add x28, x26, x20 */
  ARC_X_W(c, 28, (ARC_X_R(c, 26) + ARC_X_R(c, 20)));
  /* e06ec: mov x10, #-9 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551607));
  /* e06f0: sub x8, x28, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) - ARC_X_R(c, 21)));
  /* e06f4: sub x10, x10, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 21)));
  /* e06f8: sub x8, x8, x27 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 27)));
  /* e06fc: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* e0700: b.hi #0xe0860 */
  if (ARC_COND(c, 8)) goto L_e0860;
  /* e0704: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e0708: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e070c: mov x9, #-0xe */
  ARC_X_W(c, 9, UINT64_C(18446744073709551602));
  /* e0710: movk x9, #0x7fff, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* e0714: stur w4, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 4));
  /* e0718: csinc x24, x10, x19, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 19)) + 1)));
  /* e071c: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* e0720: b.hi #0xe0794 */
  if (ARC_COND(c, 8)) goto L_e0794;
  /* e0724: lsl x9, x21, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* e0728: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* e072c: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* e0730: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* e0734: csel x8, x8, x9, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e0738: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* e073c: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* e0740: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* e0744: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e0748: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* e074c: csel x25, x8, x9, lo */
  ARC_X_W(c, 25, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e0750: b #0xe0798 */
  goto L_e0798;
L_e0754:;
  /* e0754: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e0758: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e075c: csinc x23, x10, x19, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 19)) + 1)));
  /* e0760: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* e0764: b.ls #0xe078c */
  if (ARC_COND(c, 9)) goto L_e078c;
  /* e0768: cmp x20, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 27));
  /* e076c: b.eq #0xe078c */
  if (ARC_COND(c, 0)) goto L_e078c;
  /* e0770: sub x2, x8, x27 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 27)));
  /* e0774: add x8, x23, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 22)));
  /* e0778: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* e077c: add x0, x8, x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* e0780: add x1, x8, x27 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ARC_X_R(c, 27)));
  /* e0784: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919432));
  fn1_1449f0(c);
  /* e0788: mov w4, w21 */
  ARC_W_W(c, 4, ARC_W_R(c, 21));
L_e078c:;
  /* e078c: cbnz x20, #0xe0800 */
  if ((ARC_X_R(c, 20)) != 0) goto L_e0800;
  /* e0790: b #0xe0810 */
  goto L_e0810;
L_e0794:;
  /* e0794: mov x25, #-9 */
  ARC_X_W(c, 25, UINT64_C(18446744073709551607));
L_e0798:;
  /* e0798: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* e079c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919456));
  fn1_1428f0(c);
  /* e07a0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* e07a4: cbz x22, #0xe07b8 */
  if ((ARC_X_R(c, 22)) == 0) goto L_e07b8;
  /* e07a8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e07ac: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* e07b0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* e07b4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919480));
  fn1_1449f0(c);
L_e07b8:;
  /* e07b8: add x8, x27, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + ARC_X_R(c, 22)));
  /* e07bc: subs x2, x26, x8 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8)));
  /* e07c0: b.eq #0xe07d8 */
  if (ARC_COND(c, 0)) goto L_e07d8;
  /* e07c4: add x8, x24, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 22)));
  /* e07c8: add x9, x23, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 22)));
  /* e07cc: add x0, x9, x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + ARC_X_R(c, 20)));
  /* e07d0: add x1, x8, x27 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ARC_X_R(c, 27)));
  /* e07d4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919512));
  fn1_1449f0(c);
L_e07d8:;
  /* e07d8: add x1, x21, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* e07dc: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* e07e0: b.eq #0xe07ec */
  if (ARC_COND(c, 0)) goto L_e07ec;
  /* e07e4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e07e8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919532));
  fn1_142608(c);
L_e07ec:;
  /* e07ec: ldur w4, [x29, #-4] */
  ARC_W_W(c, 4, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* e07f0: orr x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) | UINT64_C(1)));
  /* e07f4: sub x9, x28, x27 */
  ARC_X_W(c, 9, (ARC_X_R(c, 28) - ARC_X_R(c, 27)));
  /* e07f8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e07fc: stp x9, x23, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
L_e0800:;
  /* e0800: add x0, x23, x22 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 22)));
  /* e0804: mov w1, w4 */
  ARC_W_W(c, 1, ARC_W_R(c, 4));
  /* e0808: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e080c: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919568));
  fn1_144a20(c);
L_e0810:;
  /* e0810: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e0814: sub x8, x20, x27 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 27)));
  /* e0818: add x8, x8, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 26)));
  /* e081c: tbnz w9, #0, #0xe082c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e082c;
  /* e0820: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e0824: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e0828: b #0xe0830 */
  goto L_e0830;
L_e082c:;
  /* e082c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e0830:;
  /* e0830: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e0834: strb wzr, [x23, x8] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
  /* e0838: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e083c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e0840: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e0844: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e0848: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* e084c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e0850: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e0854: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e0858: ret  */
  return;
L_e085c:;
  /* e085c: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919648));
  fn1_da020(c);
L_e0860:;
  /* e0860: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(919652));
  fn1_d7d54(c);
}

void fn1_e30a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038857896));
  /* e30a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e30ac: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e30b0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e30b4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e30b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e30bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e30c0: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* e30c4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e30c8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e30cc: bl #0x142e30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(930000));
  fn1_142e30(c);
  /* e30d0: mov x3, x0 */
  ARC_X_W(c, 3, ARC_X_R(c, 0));
  /* e30d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e30d8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e30dc: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e30e0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e30e4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* e30e8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e30ec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e30f0: b #0x142d88 */
  fn1_142d88(c); return;
}

void fn1_e78a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038876320));
  /* e78a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e78a4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e78a8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* e78ac: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e78b0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e78b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e78b8: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e78bc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e78c0: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* e78c4: mov w2, #0x90 */
  ARC_W_W(c, 2, UINT64_C(144));
  /* e78c8: bl #0x142818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948428));
  fn1_142818(c);
  /* e78cc: ldr x20, [x29, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e78d0: cbnz x20, #0xe78e8 */
  if ((ARC_X_R(c, 20)) != 0) goto L_e78e8;
  /* e78d4: mov w0, #0x90 */
  ARC_W_W(c, 0, UINT64_C(144));
  /* e78d8: bl #0xa24dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948444));
  fn1_a24dc(c);
  /* e78dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e78e0: cbnz x0, #0xe78e8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_e78e8;
  /* e78e4: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948456));
  fn1_142488(c);
L_e78e8:;
  /* e78e8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* e78ec: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* e78f0: stp q0, q0, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e78f4: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e78f8: stp q0, q0, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e78fc: stp q0, q0, [x20, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(96));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e7900: str q0, [x21, #0x80]! */
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(128));
  /* e7904: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e7908: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e790c: bl #0xe7a70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948496));
  fn1_e7a70(c);
  /* e7910: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e7914: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e7918: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e791c: ldr x1, [x1, #0x920] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2336))));
  /* e7920: ldr x2, [x2, #0x968] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2408))));
  /* e7924: bl #0x142440 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948520));
  fn1_142440(c);
  /* e7928: nop  */
  /* nop: no architectural effect here */
  /* e792c: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* e7930: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e7934: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e7938: b.lo #0xe795c */
  if (ARC_COND(c, 3)) goto L_e795c;
  /* e793c: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* e7940: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* e7944: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e7948: b.hs #0xe795c */
  if (ARC_COND(c, 2)) goto L_e795c;
  /* e794c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e7950: bl #0xa2664 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948564));
  fn1_a2664(c);
  /* e7954: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7958: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948572));
  fn1_9cc20(c);
L_e795c:;
  /* e795c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e7960: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948580));
  fn1_142800(c);
  /* e7964: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7968: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948588));
  fn1_9cc20(c);
  /* e796c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948592));
  fn1_a1454(c);
  /* e7970: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(948596));
  fn1_a1454(c);
}

void fn1_ea0d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038886616));
  /* ea0d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea0dc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea0e0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ea0e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea0e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ea0ec: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* ea0f0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958708));
  fn1_142518(c);
  /* ea0f4: cbnz w0, #0xea124 */
  if ((ARC_W_R(c, 0)) != 0) goto L_ea124;
  /* ea0f8: ldr w8, [x19, #0x70] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(112))));
  /* ea0fc: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* ea100: str w8, [x19, #0x70] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(112)), ARC_W_R(c, 8));
  /* ea104: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* ea108: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958732));
  fn1_142578(c);
  /* ea10c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ea110: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958740));
  fn1_142560(c);
  /* ea114: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ea118: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ea11c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ea120: ret  */
  return;
L_ea124:;
  /* ea124: nop  */
  /* nop: no architectural effect here */
  /* ea128: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* ea12c: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958768));
  fn1_142a40(c);
  /* ea130: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958772));
  fn1_a1454(c);
  /* ea134: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(958776));
  fn1_a1454(c);
}

void fn1_ebb38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038893368));
  /* ebb38: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ebb3c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebb40: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ebb44: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ebb48: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ebb4c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebb50: ldr x23, [x0] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 0)));
  /* ebb54: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* ebb58: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ebb5c: ldp x9, x8, [x23, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(32));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ebb60: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ebb64: b.hs #0xebb74 */
  if (ARC_COND(c, 2)) goto L_ebb74;
  /* ebb68: stp x20, x19, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ebb6c: add x20, x9, #0x10 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* ebb70: b #0xebbf4 */
  goto L_ebbf4;
L_ebb74:;
  /* ebb74: ldr x10, [x23, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 23) + INT64_C(24))));
  /* ebb78: sub x24, x9, x10 */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* ebb7c: asr x9, x24, #4 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 24)) >> ((UINT64_C(4)) & 63))));
  /* ebb80: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ebb84: lsr x11, x9, #0x3c */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(60)) & 63)));
  /* ebb88: cbnz x11, #0xebc10 */
  if ((ARC_X_R(c, 11)) != 0) goto L_ebc10;
  /* ebb8c: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* ebb90: mov x11, #0x7ffffffffffffff0 */
  ARC_X_W(c, 11, UINT64_C(9223372036854775792));
  /* ebb94: asr x10, x8, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* ebb98: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* ebb9c: csel x9, x10, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* ebba0: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* ebba4: mov x8, #0xfffffffffffffff */
  ARC_X_W(c, 8, UINT64_C(1152921504606846975));
  /* ebba8: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ebbac: lsl x22, x8, #4 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(4)) & 63)));
  /* ebbb0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ebbb4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965560));
  fn1_1428f0(c);
  /* ebbb8: ldp x21, x8, [x23, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(24));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ebbbc: add x9, x0, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 24)));
  /* ebbc0: stp x20, x19, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ebbc4: add x22, x0, x22 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* ebbc8: add x20, x9, #0x10 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* ebbcc: sub x2, x8, x21 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 21)));
  /* ebbd0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* ebbd4: sub x19, x9, x2 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) - ARC_X_R(c, 2)));
  /* ebbd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ebbdc: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965600));
  fn1_1449d8(c);
  /* ebbe0: stp x19, x20, [x23, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* ebbe4: str x22, [x23, #0x28] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(40)), ARC_X_R(c, 22));
  /* ebbe8: cbz x21, #0xebbf4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_ebbf4;
  /* ebbec: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ebbf0: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965620));
  fn1_1426f8(c);
L_ebbf4:;
  /* ebbf4: str x20, [x23, #0x20] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(32)), ARC_X_R(c, 20));
  /* ebbf8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ebbfc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ebc00: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ebc04: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebc08: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ebc0c: ret  */
  return;
L_ebc10:;
  /* ebc10: bl #0xebcf0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(965652));
  fn1_ebcf0(c);
}

void fn1_ed798(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900632));
  /* ed798: bti c */
  /* bti: no architectural effect here */
  /* ed79c: ret  */
  return;
}

void fn1_f1148(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915400));
  /* f1148: bti c */
  /* bti: no architectural effect here */
  /* f114c: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* f1150: strb wzr, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* f1154: str x1, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 1));
  /* f1158: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f115c: add x8, x1, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* f1160: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f1164: cbz w9, #0xf116c */
  if ((ARC_W_R(c, 9)) == 0) goto L_f116c;
  /* f1168: ret  */
  return;
L_f116c:;
  /* f116c: ldr x8, [x8, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(136))));
  /* f1170: cbz x8, #0xf11a0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_f11a0;
  /* f1174: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f1178: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f117c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f1180: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f1184: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f1188: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f118c: bl #0x143490 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(987536));
  fn1_143490(c);
  /* f1190: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f1194: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f1198: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f119c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_f11a0:;
  /* f11a0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f11a4: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* f11a8: ret  */
  return;
}

void fn1_f41c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927816));
  /* f41c8: bti c */
  /* bti: no architectural effect here */
  /* f41cc: ret  */
  return;
}

void fn1_f7b80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942592));
  /* f7b80: bti c */
  /* bti: no architectural effect here */
  /* f7b84: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* f7b88: strb wzr, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* f7b8c: str x1, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 1));
  /* f7b90: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7b94: add x8, x1, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* f7b98: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f7b9c: cbz w9, #0xf7ba4 */
  if ((ARC_W_R(c, 9)) == 0) goto L_f7ba4;
  /* f7ba0: ret  */
  return;
L_f7ba4:;
  /* f7ba4: ldr x8, [x8, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(136))));
  /* f7ba8: cbz x8, #0xf7bd8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_f7bd8;
  /* f7bac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7bb0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f7bb4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f7bb8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f7bbc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f7bc0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f7bc4: bl #0x143508 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1014728));
  fn1_143508(c);
  /* f7bc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7bcc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f7bd0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7bd4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_f7bd8:;
  /* f7bd8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f7bdc: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* f7be0: ret  */
  return;
}

void fn1_fcedc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038963932));
  /* fcedc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fcee0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fcee4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* fcee8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fceec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fcef0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcef4: adrp x9, #0x151000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcef8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fcefc: ldr x8, [x8, #0xb00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))));
  /* fcf00: ldr x9, [x9, #0xae0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2784))));
  /* fcf04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fcf08: add x10, x8, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fcf0c: add x11, x8, #0x68 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* fcf10: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fcf14: stur x10, [x0, #-0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(-16)), ARC_X_R(c, 10));
  /* fcf18: ldrb w10, [x0, #0x48] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(72))));
  /* fcf1c: add x9, x9, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* fcf20: str x11, [x19, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 19) + INT64_C(112));
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 11));
  }
  /* fcf24: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fcf28: tbz w10, #0, #0xfcf3c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_fcf3c;
  /* fcf2c: ldr x8, [x20, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(72))));
  /* fcf30: ldr x0, [x20, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* fcf34: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* fcf38: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036092));
  fn1_142608(c);
L_fcf3c:;
  /* fcf3c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcf40: nop  */
  /* nop: no architectural effect here */
  /* fcf44: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fcf48: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* fcf4c: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* fcf50: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* fcf54: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* fcf58: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* fcf5c: b.eq #0xfcf80 */
  if (ARC_COND(c, 0)) goto L_fcf80;
  /* fcf60: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fcf64: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fcf68: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036140));
  fn1_bd950(c);
  /* fcf6c: cbnz x0, #0xfcf80 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fcf80;
  /* fcf70: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fcf74: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fcf78: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fcf7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1036160));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fcf80:;
  /* fcf80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fcf84: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fcf88: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* fcf8c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fcf90: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fcf94: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_1012e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038981352));
  /* 1012e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1012ec: sub sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(384)));
  /* 1012f0: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1012f4: stp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1012f8: stp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1012fc: stp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 101300: stp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 101304: stp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 101308: add x29, sp, #0x120 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(288)));
  /* 10130c: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 101310: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 101314: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 101318: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10131c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 101320: sub x26, x29, #0x48 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 101324: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 101328: str x5, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 5));
  /* 10132c: b.eq #0x101350 */
  if (ARC_COND(c, 0)) goto L_101350;
  /* 101330: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 101334: b.eq #0x101348 */
  if (ARC_COND(c, 0)) goto L_101348;
  /* 101338: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 10133c: b.ne #0x101358 */
  if (ARC_COND(c, 1)) goto L_101358;
  /* 101340: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 101344: b #0x10135c */
  goto L_10135c;
L_101348:;
  /* 101348: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 10134c: b #0x10135c */
  goto L_10135c;
L_101350:;
  /* 101350: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 101354: b #0x10135c */
  goto L_10135c;
L_101358:;
  /* 101358: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_10135c:;
  /* 10135c: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 101360: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 101364: str x4, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 4));
  /* 101368: bl #0x135800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053548));
  fn1_135800(c);
  /* 10136c: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 101370: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 101374: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 101378: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 10137c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 101380: sub x19, x29, #0x40 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 101384: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053576));
  fn1_142d10(c);
  /* 101388: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 10138c: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 101390: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101394: str x10, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 10));
  /* 101398: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10139c: orr x27, x19, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 19) | UINT64_C(1)));
  /* 1013a0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1013a4: ldr x28, [x28, #0xbe0] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(3040))));
  /* 1013a8: add x22, sp, #0x30 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(48)));
  /* 1013ac: csinc x24, x9, x19, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 1013b0: mov w19, #0x16 */
  ARC_W_W(c, 19, UINT64_C(22));
  /* 1013b4: str wzr, [sp, #0x2c] */
  arc_st32(((c)->sp + INT64_C(44)), ARC_W_R(c, 31));
  /* 1013b8: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 1013bc: b #0x1013c8 */
  goto L_1013c8;
L_1013c0:;
  /* 1013c0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1013c4: str x8, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 8));
L_1013c8:;
  /* 1013c8: cbz x20, #0x1013f0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1013f0;
  /* 1013cc: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1013d0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1013d4: b.eq #0x10140c */
  if (ARC_COND(c, 0)) goto L_10140c;
  /* 1013d8: cbz x21, #0x10147c */
  if ((ARC_X_R(c, 21)) == 0) goto L_10147c;
  /* 1013dc: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1013e0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1013e4: b.ne #0x1015c4 */
  if (ARC_COND(c, 1)) goto L_1015c4;
  /* 1013e8: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* 1013ec: b #0x101458 */
  goto L_101458;
L_1013f0:;
  /* 1013f0: cbz x21, #0x1015c0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1015c0;
  /* 1013f4: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1013f8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1013fc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 101400: b.ne #0x10147c */
  if (ARC_COND(c, 1)) goto L_10147c;
  /* 101404: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 101408: b #0x101458 */
  goto L_101458;
L_10140c:;
  /* 10140c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 101410: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 101414: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101418: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053724));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10141c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101420: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 101424: cbz x21, #0x101448 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101448;
  /* 101428: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10142c: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 101430: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 101434: b.eq #0x101454 */
  if (ARC_COND(c, 0)) goto L_101454;
  /* 101438: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10143c: b.ne #0x1015c4 */
  if (ARC_COND(c, 1)) goto L_1015c4;
  /* 101440: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 101444: b #0x10147c */
  goto L_10147c;
L_101448:;
  /* 101448: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10144c: b.ne #0x10147c */
  if (ARC_COND(c, 1)) goto L_10147c;
  /* 101450: b #0x101928 */
  goto L_101928;
L_101454:;
  /* 101454: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_101458:;
  /* 101458: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 10145c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 101460: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 101464: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053800));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 101468: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 10146c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 101470: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 101474: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 101478: b.eq #0x1015c4 */
  if (ARC_COND(c, 0)) goto L_1015c4;
L_10147c:;
  /* 10147c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101480: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 101484: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 101488: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 10148c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 101490: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 101494: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 101498: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 10149c: b.ne #0x101554 */
  if (ARC_COND(c, 1)) goto L_101554;
  /* 1014a0: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 1014a4: b.lt #0x1014bc */
  if (ARC_COND(c, 11)) goto L_1014bc;
  /* 1014a8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 1014ac: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 1014b0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1014b4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053880));
  fn1_142d10(c);
  /* 1014b8: b #0x1014e0 */
  goto L_1014e0;
L_1014bc:;
  /* 1014bc: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 1014c0: tbnz w8, #0, #0x1014d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1014d4;
  /* 1014c4: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 1014c8: sturb w8, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 8));
  /* 1014cc: mov x8, x27 */
  ARC_X_W(c, 8, ARC_X_R(c, 27));
  /* 1014d0: b #0x1014dc */
  goto L_1014dc;
L_1014d4:;
  /* 1014d4: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1014d8: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_1014dc:;
  /* 1014dc: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_1014e0:;
  /* 1014e0: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1014e4: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1014e8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1014ec: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 1014f0: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 1014f4: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 1014f8: csel x8, x19, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 11)));
  /* 1014fc: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 101500: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 101504: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 101508: b.ls #0x10151c */
  if (ARC_COND(c, 9)) goto L_10151c;
  /* 10150c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 101510: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 101514: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1053976));
  fn1_142d10(c);
  /* 101518: b #0x10153c */
  goto L_10153c;
L_10151c:;
  /* 10151c: tbnz w9, #0, #0x101530 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_101530;
  /* 101520: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 101524: sturb w9, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 9));
  /* 101528: mov x9, x27 */
  ARC_X_W(c, 9, ARC_X_R(c, 27));
  /* 10152c: b #0x101538 */
  goto L_101538;
L_101530:;
  /* 101530: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101534: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_101538:;
  /* 101538: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_10153c:;
  /* 10153c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101540: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101544: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 101548: csel x24, x27, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 9)));
  /* 10154c: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 101550: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_101554:;
  /* 101554: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 101558: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 10155c: b.eq #0x101568 */
  if (ARC_COND(c, 0)) goto L_101568;
  /* 101560: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* 101564: b #0x101578 */
  goto L_101578;
L_101568:;
  /* 101568: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 10156c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 101570: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101574: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1054072));
  arc_dispatch(c, ARC_X_R(c, 8));
L_101578:;
  /* 101578: ldurb w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 10157c: sub x3, x29, #0x48 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 101580: add x4, sp, #0x2c */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(44)));
  /* 101584: sub x6, x29, #0x28 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 101588: add x7, sp, #0x38 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(56)));
  /* 10158c: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 101590: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 101594: stp x22, x28, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* 101598: bl #0x143868 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1054108));
  fn1_143868(c);
  /* 10159c: cbnz w0, #0x1015c4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1015c4;
  /* 1015a0: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1015a4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1015a8: b.ne #0x1013c0 */
  if (ARC_COND(c, 1)) goto L_1013c0;
  /* 1015ac: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1015b0: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 1015b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1015b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1054140));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1015bc: b #0x1013c8 */
  goto L_1013c8;
L_1015c0:;
  /* 1015c0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_1015c4:;
  /* 1015c4: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 1015c8: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 1015cc: ldr x22, [sp, #0x20] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1015d0: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 1015d4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1015d8: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1015dc: cbz x8, #0x101600 */
  if ((ARC_X_R(c, 8)) == 0) goto L_101600;
  /* 1015e0: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1015e4: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 1015e8: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 1015ec: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 1015f0: b.gt #0x101600 */
  if (ARC_COND(c, 12)) goto L_101600;
  /* 1015f4: ldr w9, [sp, #0x2c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(44))));
  /* 1015f8: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 1015fc: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
L_101600:;
  /* 101600: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 101604: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 101608: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10160c: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 101610: bl #0x135d44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1054228));
  fn1_135d44(c);
  /* 101614: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 101618: ldr x12, [sp, #0x30] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(48))));
  /* 10161c: add x11, sp, #0x38 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(56)));
  /* 101620: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 101624: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 101628: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 10162c: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 101630: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 101634: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 101638: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 10163c: str w0, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 0));
  /* 101640: b.lt #0x1017a0 */
  if (ARC_COND(c, 11)) goto L_1017a0;
  /* 101644: cbz x8, #0x1017a0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1017a0;
  /* 101648: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 10164c: add x9, sp, #0x38 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(56)));
  /* 101650: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 101654: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 101658: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 10165c: b.eq #0x10170c */
  if (ARC_COND(c, 0)) goto L_10170c;
  /* 101660: cbz w11, #0x10170c */
  if ((ARC_W_R(c, 11)) == 0) goto L_10170c;
  /* 101664: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 101668: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 10166c: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 101670: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 101674: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 101678: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 10167c: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 101680: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 101684: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 101688: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 10168c: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 101690: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 101694: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 101698: b.lo #0x1016e0 */
  if (ARC_COND(c, 3)) goto L_1016e0;
  /* 10169c: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1016a0: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 1016a4: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 1016a8: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1016ac: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1016b0: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 1016b4: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 1016b8: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 1016bc: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 1016c0: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 1016c4: b.hs #0x101830 */
  if (ARC_COND(c, 2)) goto L_101830;
  /* 1016c8: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 1016cc: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 1016d0: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 1016d4: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 1016d8: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 1016dc: b.hs #0x101830 */
  if (ARC_COND(c, 2)) goto L_101830;
L_1016e0:;
  /* 1016e0: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_1016e4:;
  /* 1016e4: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_1016e8:;
  /* 1016e8: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 1016ec: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 1016f0: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 1016f4: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 1016f8: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1016fc: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 101700: b.lo #0x1016e8 */
  if (ARC_COND(c, 3)) goto L_1016e8;
L_101704:;
  /* 101704: ldurb w10, [x29, #-0x28] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 101708: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_10170c:;
  /* 10170c: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 101710: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 101714: sub x12, x29, #0x28 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 101718: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 10171c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 101720: b.hs #0x101778 */
  if (ARC_COND(c, 2)) goto L_101778;
  /* 101724: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 101728: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 10172c: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 101730: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 101734: add x10, sp, #0x38 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(56)));
  /* 101738: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 10173c: b #0x101758 */
  goto L_101758;
L_101740:;
  /* 101740: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 101744: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 101748: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 10174c: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 101750: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 101754: b.hs #0x101778 */
  if (ARC_COND(c, 2)) goto L_101778;
L_101758:;
  /* 101758: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 10175c: cbz w12, #0x101740 */
  if ((ARC_W_R(c, 12)) == 0) goto L_101740;
  /* 101760: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 101764: b.eq #0x101740 */
  if (ARC_COND(c, 0)) goto L_101740;
  /* 101768: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 10176c: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 101770: b.eq #0x101740 */
  if (ARC_COND(c, 0)) goto L_101740;
  /* 101774: b #0x101798 */
  goto L_101798;
L_101778:;
  /* 101778: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 10177c: cbz w9, #0x1017a0 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1017a0;
  /* 101780: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 101784: b.eq #0x1017a0 */
  if (ARC_COND(c, 0)) goto L_1017a0;
  /* 101788: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 10178c: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 101790: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 101794: b.lo #0x1017a0 */
  if (ARC_COND(c, 3)) goto L_1017a0;
L_101798:;
  /* 101798: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 10179c: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_1017a0:;
  /* 1017a0: cbz x20, #0x1017c8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1017c8;
  /* 1017a4: ldp x8, x9, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1017a8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1017ac: b.eq #0x1017e4 */
  if (ARC_COND(c, 0)) goto L_1017e4;
  /* 1017b0: cbz x21, #0x1018d0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1018d0;
  /* 1017b4: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1017b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1017bc: b.ne #0x1018c4 */
  if (ARC_COND(c, 1)) goto L_1018c4;
  /* 1017c0: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* 1017c4: b #0x1018a4 */
  goto L_1018a4;
L_1017c8:;
  /* 1017c8: cbz x21, #0x101828 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101828;
  /* 1017cc: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1017d0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1017d4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1017d8: b.ne #0x1018d0 */
  if (ARC_COND(c, 1)) goto L_1018d0;
  /* 1017dc: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 1017e0: b #0x1018a4 */
  goto L_1018a4;
L_1017e4:;
  /* 1017e4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1017e8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1017ec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1017f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1054708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1017f4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1017f8: cset w19, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? 1 : 0));
  /* 1017fc: cbz x21, #0x101820 */
  if ((ARC_X_R(c, 21)) == 0) goto L_101820;
  /* 101800: ldp x9, x10, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 101804: csel x8, xzr, x20, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 20)));
  /* 101808: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 10180c: b.eq #0x1018a0 */
  if (ARC_COND(c, 0)) goto L_1018a0;
  /* 101810: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101814: b.ne #0x1018c4 */
  if (ARC_COND(c, 1)) goto L_1018c4;
  /* 101818: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10181c: b #0x1018d0 */
  goto L_1018d0;
L_101820:;
  /* 101820: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 101824: b.ne #0x1018d0 */
  if (ARC_COND(c, 1)) goto L_1018d0;
L_101828:;
  /* 101828: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 10182c: b #0x1018c4 */
  goto L_1018c4;
L_101830:;
  /* 101830: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 101834: add x15, sp, #0x38 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(56)));
  /* 101838: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 10183c: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 101840: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 101844: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 101848: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 10184c: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 101850: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_101854:;
  /* 101854: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 101858: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 10185c: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 101860: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 101864: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 101868: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 10186c: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 101870: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 101874: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 101878: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 10187c: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 101880: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 101884: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 101888: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 10188c: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 101890: cbnz x16, #0x101854 */
  if ((ARC_X_R(c, 16)) != 0) goto L_101854;
  /* 101894: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 101898: b.eq #0x101704 */
  if (ARC_COND(c, 0)) goto L_101704;
  /* 10189c: b #0x1016e4 */
  goto L_1016e4;
L_1018a0:;
  /* 1018a0: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
L_1018a4:;
  /* 1018a4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1018a8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1018ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1018b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1054900));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1018b4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1018b8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1018bc: eor w8, w19, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) ^ ARC_W_R(c, 8)));
  /* 1018c0: tbnz w8, #0, #0x1018d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1018d0;
L_1018c4:;
  /* 1018c4: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 1018c8: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 1018cc: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_1018d0:;
  /* 1018d0: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1018d4: tbz w8, #0, #0x1018e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1018e8;
  /* 1018d8: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 1018dc: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 1018e0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1018e4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1054952));
  fn1_142608(c);
L_1018e8:;
  /* 1018e8: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 1018ec: tbz w8, #0, #0x101900 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_101900;
  /* 1018f0: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 1018f4: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 1018f8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1018fc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1054976));
  fn1_142608(c);
L_101900:;
  /* 101900: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 101904: ldp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 101908: ldp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10190c: ldp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 101910: ldp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 101914: ldp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 101918: ldp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10191c: add sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(384)));
  /* 101920: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 101924: ret  */
  return;
L_101928:;
  /* 101928: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
  /* 10192c: b #0x1015c4 */
  goto L_1015c4;
  /* 101930: b #0x10193c */
  goto L_10193c;
  /* 101934: b #0x10193c */
  goto L_10193c;
  /* 101938: b #0x10193c */
  goto L_10193c;
L_10193c:;
  /* 10193c: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 101940: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 101944: tbnz w8, #0, #0x101958 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_101958;
  /* 101948: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10194c: tbnz w8, #0, #0x101970 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_101970;
L_101950:;
  /* 101950: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 101954: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055064));
  fn1_9cc20(c);
L_101958:;
  /* 101958: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 10195c: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 101960: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 101964: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055080));
  fn1_142608(c);
  /* 101968: ldurb w8, [x29, #-0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 10196c: tbz w8, #0, #0x101950 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_101950;
L_101970:;
  /* 101970: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 101974: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 101978: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10197c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055104));
  fn1_142608(c);
  /* 101980: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 101984: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1055112));
  fn1_9cc20(c);
}

void fn1_11061c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039043612));
  /* 11061c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 110620: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 110624: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 110628: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11062c: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 110630: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 110634: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 110638: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 11063c: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 110640: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 110644: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 110648: bl #0x110db0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1115724));
  fn1_110db0(c);
  /* 11064c: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 110650: sub w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* 110654: cmp w9, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(11));
  /* 110658: b.hi #0x110668 */
  if (ARC_COND(c, 8)) goto L_110668;
  /* 11065c: tbnz w8, #2, #0x110668 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_110668;
  /* 110660: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 110664: b #0x110670 */
  goto L_110670;
L_110668:;
  /* 110668: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 11066c: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_110670:;
  /* 110670: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 110674: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 110678: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11067c: ret  */
  return;
}

void fn1_113d00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057664));
  /* 113d00: bti c */
  /* bti: no architectural effect here */
  /* 113d04: adrp x9, #0x53000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(339968)));
  /* 113d08: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* 113d0c: ldr d0, [x9, #0x2e8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(744))));
  /* 113d10: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 113d14: stur d0, [x8, #4] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(4)), (c)->q[0].u64[0]);
  /* 113d18: ret  */
  return;
}

void fn1_11a02c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039083052));
  /* 11a02c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11a030: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 11a034: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11a038: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 11a03c: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 11a040: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 11a044: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11a048: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11a04c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 11a050: ldr x27, [x29, #0x60] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(96))));
  /* 11a054: ldr x28, [x2] */
  ARC_X_W(c, 28, arc_ld64(ARC_X_R(c, 2)));
  /* 11a058: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 11a05c: mov x20, x6 */
  ARC_X_W(c, 20, ARC_X_R(c, 6));
  /* 11a060: mov x26, x5 */
  ARC_X_W(c, 26, ARC_X_R(c, 5));
  /* 11a064: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 11a068: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 11a06c: mov w25, w1 */
  ARC_W_W(c, 25, ARC_W_R(c, 1));
  /* 11a070: tbz w0, #0, #0x11a140 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_11a140;
  /* 11a074: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11a078: ldr x21, [x21, #0xc20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(3104))));
  /* 11a07c: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11a080: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11a084: b.eq #0x11a220 */
  if (ARC_COND(c, 0)) goto L_11a220;
  /* 11a088: nop  */
  /* nop: no architectural effect here */
  /* 11a08c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a090: str x22, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 22));
  /* 11a094: mov x22, x26 */
  ARC_X_W(c, 22, ARC_X_R(c, 26));
  /* 11a098: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155228));
  fn1_142518(c);
  /* 11a09c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11a0a0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11a0a4: b.ne #0x11a0d0 */
  if (ARC_COND(c, 1)) goto L_11a0d0;
  /* 11a0a8: nop  */
  /* nop: no architectural effect here */
  /* 11a0ac: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11a0b0: nop  */
  /* nop: no architectural effect here */
  /* 11a0b4: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_11a0b8:;
  /* 11a0b8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a0bc: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 11a0c0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155268));
  fn1_142530(c);
  /* 11a0c4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11a0c8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11a0cc: b.eq #0x11a0b8 */
  if (ARC_COND(c, 0)) goto L_11a0b8;
L_11a0d0:;
  /* 11a0d0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11a0d4: cbnz x8, #0x11a1a4 */
  if ((ARC_X_R(c, 8)) != 0) goto L_11a1a4;
  /* 11a0d8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11a0dc: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 11a0e0: strb wzr, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 11a0e4: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 11a0e8: nop  */
  /* nop: no architectural effect here */
  /* 11a0ec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a0f0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155316));
  fn1_142560(c);
  /* 11a0f4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11a0f8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11a0fc: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 11a100: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11a104: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155336));
  fn1_a2030(c);
  /* 11a108: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11a10c: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11a110: nop  */
  /* nop: no architectural effect here */
  /* 11a114: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a118: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155356));
  fn1_142518(c);
  /* 11a11c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11a120: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 11a124: nop  */
  /* nop: no architectural effect here */
  /* 11a128: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a12c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155376));
  fn1_142560(c);
  /* 11a130: nop  */
  /* nop: no architectural effect here */
  /* 11a134: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11a138: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155388));
  fn1_142578(c);
  /* 11a13c: b #0x11a21c */
  goto L_11a21c;
L_11a140:;
  /* 11a140: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11a144: ldr x21, [x21, #0xc18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(3096))));
  /* 11a148: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11a14c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11a150: b.eq #0x11a220 */
  if (ARC_COND(c, 0)) goto L_11a220;
  /* 11a154: nop  */
  /* nop: no architectural effect here */
  /* 11a158: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a15c: str x22, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 22));
  /* 11a160: mov x22, x26 */
  ARC_X_W(c, 22, ARC_X_R(c, 26));
  /* 11a164: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155432));
  fn1_142518(c);
  /* 11a168: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11a16c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11a170: b.ne #0x11a19c */
  if (ARC_COND(c, 1)) goto L_11a19c;
  /* 11a174: nop  */
  /* nop: no architectural effect here */
  /* 11a178: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11a17c: nop  */
  /* nop: no architectural effect here */
  /* 11a180: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_11a184:;
  /* 11a184: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a188: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 11a18c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155472));
  fn1_142530(c);
  /* 11a190: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11a194: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11a198: b.eq #0x11a184 */
  if (ARC_COND(c, 0)) goto L_11a184;
L_11a19c:;
  /* 11a19c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11a1a0: cbz x8, #0x11a1b8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_11a1b8;
L_11a1a4:;
  /* 11a1a4: nop  */
  /* nop: no architectural effect here */
  /* 11a1a8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a1ac: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155504));
  fn1_142560(c);
  /* 11a1b0: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 11a1b4: b #0x11a21c */
  goto L_11a21c;
L_11a1b8:;
  /* 11a1b8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11a1bc: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 11a1c0: strb wzr, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 11a1c4: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 11a1c8: nop  */
  /* nop: no architectural effect here */
  /* 11a1cc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a1d0: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155540));
  fn1_142560(c);
  /* 11a1d4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11a1d8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11a1dc: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 11a1e0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11a1e4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155560));
  fn1_a2030(c);
  /* 11a1e8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11a1ec: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11a1f0: nop  */
  /* nop: no architectural effect here */
  /* 11a1f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a1f8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155580));
  fn1_142518(c);
  /* 11a1fc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11a200: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 11a204: nop  */
  /* nop: no architectural effect here */
  /* 11a208: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11a20c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155600));
  fn1_142560(c);
  /* 11a210: nop  */
  /* nop: no architectural effect here */
  /* 11a214: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11a218: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155612));
  fn1_142578(c);
L_11a21c:;
  /* 11a21c: ldr x22, [sp] */
  ARC_X_W(c, 22, arc_ld64((c)->sp));
L_11a220:;
  /* 11a220: ldp x8, x10, [x28, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 11a224: ldrsw x9, [x21, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 21) + INT64_C(8)))));
  /* 11a228: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 11a22c: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 11a230: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 11a234: b.hs #0x11a394 */
  if (ARC_COND(c, 2)) goto L_11a394;
  /* 11a238: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 11a23c: cbz x23, #0x11a394 */
  if ((ARC_X_R(c, 23)) == 0) goto L_11a394;
  /* 11a240: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a244: tbz w25, #0, #0x11a264 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_11a264;
  /* 11a248: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 11a24c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a250: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155668));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a254: str w0, [x24] */
  arc_st32(ARC_X_R(c, 24), ARC_W_R(c, 0));
  /* 11a258: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a25c: ldr x9, [x8, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 11a260: b #0x11a27c */
  goto L_11a27c;
L_11a264:;
  /* 11a264: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 11a268: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a26c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155696));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a270: str w0, [x24] */
  arc_st32(ARC_X_R(c, 24), ARC_W_R(c, 0));
  /* 11a274: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a278: ldr x9, [x8, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
L_11a27c:;
  /* 11a27c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 11a280: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a284: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155720));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 11a288: ldrb w8, [x27] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 27)));
  /* 11a28c: tbz w8, #0, #0x11a2a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11a2a4;
  /* 11a290: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 11a294: ldr x0, [x27, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* 11a298: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 11a29c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 11a2a0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155748));
  fn1_142608(c);
L_11a2a4:;
  /* 11a2a4: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 11a2a8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 11a2ac: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a2b0: str q0, [x27] */
  arc_st64(ARC_X_R(c, 27), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 27) + 8, (c)->q[0].u64[1]);
  /* 11a2b4: str x8, [x27, #0x10] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11a2b8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a2bc: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 11a2c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155780));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a2c4: str w0, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 0));
  /* 11a2c8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a2cc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a2d0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 11a2d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155800));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a2d8: str w0, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 0));
  /* 11a2dc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a2e0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a2e4: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 11a2e8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 11a2ec: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155824));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 11a2f0: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 11a2f4: tbz w8, #0, #0x11a308 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11a308;
  /* 11a2f8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11a2fc: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 11a300: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 11a304: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155848));
  fn1_142608(c);
L_11a308:;
  /* 11a308: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 11a30c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 11a310: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a314: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 11a318: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11a31c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a320: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 11a324: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 11a328: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155884));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 11a32c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 11a330: tbz w8, #0, #0x11a348 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_11a348;
  /* 11a334: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11a338: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 11a33c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 11a340: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 11a344: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155912));
  fn1_142608(c);
L_11a348:;
  /* 11a348: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 11a34c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 11a350: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 11a354: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 11a358: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11a35c: ldr x19, [x29, #0x68] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(104))));
  /* 11a360: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11a364: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 11a368: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155948));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11a36c: str w0, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 0));
  /* 11a370: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11a374: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11a378: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 11a37c: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 11a380: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 11a384: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11a388: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 11a38c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11a390: ret  */
  return;
L_11a394:;
  /* 11a394: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1155992));
  fn1_fc3b8(c);
  /* 11a398: b #0x11a39c */
  goto L_11a39c;
L_11a39c:;
  /* 11a39c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 11a3a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 11a3a4: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1156008));
  fn1_d2a78(c);
  /* 11a3a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11a3ac: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1156016));
  fn1_9cc20(c);
}

void fn1_124ce0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039127264));
  /* 124ce0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 124ce4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 124ce8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 124cec: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 124cf0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 124cf4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124cf8: mov w0, #0x138 */
  ARC_W_W(c, 0, UINT64_C(312));
  /* 124cfc: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 124d00: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 124d04: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 124d08: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199372));
  fn1_1428f0(c);
  /* 124d0c: ldr x1, [x19] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* 124d10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 124d14: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 124d18: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* 124d1c: bl #0x1210e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199392));
  fn1_1210e4(c);
  /* 124d20: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 124d24: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 124d28: str x19, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 19));
  /* 124d2c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199408));
  fn1_db2e0(c);
  /* 124d30: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 124d34: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 124d38: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 124d3c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124d40: ret  */
  return;
  /* 124d44: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 124d48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 124d4c: mov w1, #0x138 */
  ARC_W_W(c, 1, UINT64_C(312));
  /* 124d50: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199444));
  fn1_142608(c);
  /* 124d54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 124d58: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1199452));
  fn1_9cc20(c);
}

void fn1_127ac0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139008));
  /* 127ac0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127ac4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127ac8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 127acc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 127ad0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 127ad4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 127ad8: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 127adc: b.eq #0x127b00 */
  if (ARC_COND(c, 0)) goto L_127b00;
  /* 127ae0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 127ae4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_127ae8:;
  /* 127ae8: ldr w0, [x19] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 19)));
  /* 127aec: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 127af0: bl #0x144378 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1211124));
  fn1_144378(c);
  /* 127af4: str w0, [x19], #4 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 0));
  }
  /* 127af8: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 127afc: b.ne #0x127ae8 */
  if (ARC_COND(c, 1)) goto L_127ae8;
L_127b00:;
  /* 127b00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 127b04: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 127b08: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127b0c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127b10: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 127b14: ret  */
  return;
}

void fn1_129c44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147588));
  /* 129c44: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 129c48: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 129c4c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 129c50: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 129c54: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 129c58: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 129c5c: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 129c60: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 129c64: ldr x6, [x0, #0x18] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 129c68: ldr w7, [x0, #0x20] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 129c6c: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 129c70: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 129c74: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 129c78: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 129c7c: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 129c80: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 129c84: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 129c88: bl #0x12955c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1219724));
  fn1_12955c(c);
  /* 129c8c: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 129c90: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 129c94: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 129c98: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 129c9c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 129ca0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 129ca4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 129ca8: ret  */
  return;
}

void fn1_12b574(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039154036));
  /* 12b574: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12b578: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12b57c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12b580: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12b584: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12b588: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 12b58c: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 12b590: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 12b594: ldr x6, [x0, #0x18] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b598: ldr w7, [x0, #0x20] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12b59c: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12b5a0: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12b5a4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12b5a8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12b5ac: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 12b5b0: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 12b5b4: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 12b5b8: bl #0x12b5dc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1226172));
  fn1_12b5dc(c);
  /* 12b5bc: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12b5c0: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12b5c4: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 12b5c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12b5cc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12b5d0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 12b5d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12b5d8: ret  */
  return;
}

void fn1_12ddd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039164376));
  /* 12ddd8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12dddc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12dde0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12dde4: nop  */
  /* nop: no architectural effect here */
  /* 12dde8: adr x8, #0x15de98 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433240)));
  /* 12ddec: ldarb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 12ddf0: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12ddf4: tbz w9, #0, #0x12de08 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_12de08;
L_12ddf8:;
  /* 12ddf8: ldr x0, [x8, #0xe90] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3728))));
  /* 12ddfc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12de00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12de04: ret  */
  return;
L_12de08:;
  /* 12de08: nop  */
  /* nop: no architectural effect here */
  /* 12de0c: adr x0, #0x15de98 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433240)));
  /* 12de10: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236500));
  fn1_1424b8(c);
  /* 12de14: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12de18: cbz w0, #0x12ddf8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12ddf8;
  /* 12de1c: bl #0x12de44 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236512));
  fn1_12de44(c);
  /* 12de20: nop  */
  /* nop: no architectural effect here */
  /* 12de24: adr x9, #0x15e6b8 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1435320)));
  /* 12de28: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12de2c: nop  */
  /* nop: no architectural effect here */
  /* 12de30: adr x0, #0x15de98 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433240)));
  /* 12de34: str x9, [x8, #0xe90] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3728)), ARC_X_R(c, 9));
  /* 12de38: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1236540));
  fn1_1424d0(c);
  /* 12de3c: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12de40: b #0x12ddf8 */
  goto L_12ddf8;
}

void fn1_134a60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192160));
  /* 134a60: bti c */
  /* bti: no architectural effect here */
  /* 134a64: add x0, x0, #0x3f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1016)));
  /* 134a68: ret  */
  return;
}

void fn1_13561c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039195164));
  /* 13561c: bti c */
  /* bti: no architectural effect here */
  /* 135620: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 135624: ldrb w8, [x8, #0x6d0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1744))));
  /* 135628: tbz w8, #0, #0x13565c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13565c;
  /* 13562c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135630: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135634: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135638: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 13563c: add x8, x8, #0x6d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1744)));
  /* 135640: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 135644: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 135648: lsl x8, x9, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* 13564c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 135650: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1267284));
  fn1_142608(c);
  /* 135654: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135658: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_13565c:;
  /* 13565c: adrp x8, #0x15e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433600)));
  /* 135660: ldrb w8, [x8, #0x6b8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(1720))));
  /* 135664: tbnz w8, #0, #0x13566c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13566c;
  /* 135668: ret  */
  return;
L_13566c:;
  /* 13566c: nop  */
  /* nop: no architectural effect here */
  /* 135670: adr x8, #0x15e6b8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1435320)));
  /* 135674: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 135678: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13567c: lsl x8, x9, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* 135680: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 135684: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1384dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039207132));
  /* 1384dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1384e0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1384e4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1384e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1384ec: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1384f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1384f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1384f8: ldr x8, [x8, #0xe58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3672))));
  /* 1384fc: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138500: add x10, x8, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 138504: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 138508: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 13850c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* 138510: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 138514: str x10, [x20, #0x78]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(120));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(120));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* 138518: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279260));
  fn1_144558(c);
  /* 13851c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 138520: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1279268));
  fn1_1433b8(c);
  /* 138524: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138528: mov w1, #0x110 */
  ARC_W_W(c, 1, UINT64_C(272));
  /* 13852c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 138530: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138534: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138538: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13d600(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039227904));
  /* 13d600: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13d604: sub sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(416)));
  /* 13d608: stp x29, x30, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13d60c: str x28, [sp, #0x170] */
  arc_st64(((c)->sp + INT64_C(368)), ARC_X_R(c, 28));
  /* 13d610: stp x22, x21, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13d614: stp x20, x19, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13d618: add x29, sp, #0x160 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(352)));
  /* 13d61c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13d620: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13d624: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13d628: add x8, x8, #0xf28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3880)));
  /* 13d62c: nop  */
  /* nop: no architectural effect here */
  /* 13d630: adr x22, #0x156d40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13d634: stp x8, x2, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 13d638: stp x0, x1, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13d63c: cbz x2, #0x13d65c */
  if ((ARC_X_R(c, 2)) == 0) goto L_13d65c;
  /* 13d640: str wzr, [x2] */
  arc_st32(ARC_X_R(c, 2), ARC_W_R(c, 31));
  /* 13d644: nop  */
  /* nop: no architectural effect here */
  /* 13d648: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d64c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d650: tbz w8, #0, #0x13d820 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d820;
L_13d654:;
  /* 13d654: str x22, [x2, #8] */
  arc_st64((ARC_X_R(c, 2) + INT64_C(8)), ARC_X_R(c, 22));
  /* 13d658: b #0x13d66c */
  goto L_13d66c;
L_13d65c:;
  /* 13d65c: nop  */
  /* nop: no architectural effect here */
  /* 13d660: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d664: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d668: tbz w8, #0, #0x13d84c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d84c;
L_13d66c:;
  /* 13d66c: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 13d670: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 13d674: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 13d678: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 13d67c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13d680: str x22, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 22));
  /* 13d684: csinc x0, x9, x20, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 13d688: stur wzr, [x29, #-0x90] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-144)), ARC_W_R(c, 31));
  /* 13d68c: stur x22, [x29, #-0x88] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-136)), ARC_X_R(c, 22));
  /* 13d690: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300116));
  fn1_144588(c);
  /* 13d694: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13d698: b.ne #0x13d6c0 */
  if (ARC_COND(c, 1)) goto L_13d6c0;
  /* 13d69c: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300128));
  fn1_142a58(c);
  /* 13d6a0: nop  */
  /* nop: no architectural effect here */
  /* 13d6a4: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d6a8: ldr w21, [x0] */
  ARC_W_W(c, 21, arc_ld32(ARC_X_R(c, 0)));
  /* 13d6ac: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d6b0: tbz w8, #0, #0x13d86c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d86c;
L_13d6b4:;
  /* 13d6b4: nop  */
  /* nop: no architectural effect here */
  /* 13d6b8: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13d6bc: stp x21, x8, [x29, #-0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-144));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
L_13d6c0:;
  /* 13d6c0: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13d6c4: sub x0, x29, #0x90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 13d6c8: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* 13d6cc: add x3, sp, #0x20 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(32)));
  /* 13d6d0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13d6d4: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300184));
  fn1_1388e8(c);
  /* 13d6d8: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13d6dc: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 13d6e0: b.eq #0x13d6f8 */
  if (ARC_COND(c, 0)) goto L_13d6f8;
  /* 13d6e4: cbnz w8, #0x13d7e4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13d7e4;
L_13d6e8:;
  /* 13d6e8: add x0, sp, #0xb0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(176)));
  /* 13d6ec: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13d6f0: bl #0x13d8bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300212));
  fn1_13d8bc(c);
  /* 13d6f4: b #0x13d7f8 */
  goto L_13d7f8;
L_13d6f8:;
  /* 13d6f8: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13d6fc: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13d700: ldr w1, [sp, #0x40] */
  ARC_W_W(c, 1, arc_ld32(((c)->sp + INT64_C(64))));
  /* 13d704: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13d708: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 13d70c: bl #0x144798 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300240));
  fn1_144798(c);
  /* 13d710: cbz w0, #0x13d818 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d818;
  /* 13d714: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300248));
  fn1_142a58(c);
  /* 13d718: nop  */
  /* nop: no architectural effect here */
  /* 13d71c: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d720: ldr w1, [x0] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* 13d724: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d728: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13d72c: tbz w8, #0, #0x13d88c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d88c;
L_13d730:;
  /* 13d730: nop  */
  /* nop: no architectural effect here */
  /* 13d734: adr x21, #0x156d38 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13d738: mov w9, #0x11 */
  ARC_W_W(c, 9, UINT64_C(17));
  /* 13d73c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 13d740: sub x2, x29, #0x90 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 13d744: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13d748: stp x1, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13d74c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13d750: stp x9, x21, [x29, #-0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-144));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13d754: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300312));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13d758: tbnz w0, #0, #0x13d778 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_13d778;
  /* 13d75c: ldur x0, [x29, #-0x88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-136))));
  /* 13d760: ldur w2, [x29, #-0x90] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 13d764: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13d768: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13d76c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 13d770: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300340));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13d774: tbz w0, #0, #0x13d6e8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13d6e8;
L_13d778:;
  /* 13d778: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13d77c: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13d780: add x10, x19, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 13d784: sub x1, x29, #0x90 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 13d788: str wzr, [sp, #0x10] */
  arc_st32(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 13d78c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13d790: str x22, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 22));
  /* 13d794: csel x0, x10, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 13d798: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 13d79c: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* 13d7a0: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300388));
  fn1_144588(c);
  /* 13d7a4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 13d7a8: b.ne #0x13d7b4 */
  if (ARC_COND(c, 1)) goto L_13d7b4;
  /* 13d7ac: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 13d7b0: stp x8, x21, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
L_13d7b4:;
  /* 13d7b4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 13d7b8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13d7bc: sub x2, x29, #0x90 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 13d7c0: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 13d7c4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13d7c8: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300428));
  fn1_1388e8(c);
  /* 13d7cc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13d7d0: and x9, x8, #0xff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* 13d7d4: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 13d7d8: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 13d7dc: b.ne #0x13d6e8 */
  if (ARC_COND(c, 1)) goto L_13d6e8;
  /* 13d7e0: b #0x13d7f8 */
  goto L_13d7f8;
L_13d7e4:;
  /* 13d7e4: mov w8, #0x14 */
  ARC_W_W(c, 8, UINT64_C(20));
  /* 13d7e8: add x0, sp, #0xb0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(176)));
  /* 13d7ec: sub x1, x29, #0x90 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 13d7f0: stur w8, [x29, #-0x90] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-144)), ARC_W_R(c, 8));
  /* 13d7f4: bl #0x13ec14 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300472));
  fn1_13ec14(c);
L_13d7f8:;
  /* 13d7f8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_13d7fc:;
  /* 13d7fc: ldp x20, x19, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13d800: ldr x28, [sp, #0x170] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(368))));
  /* 13d804: ldp x22, x21, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13d808: ldp x29, x30, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13d80c: add sp, sp, #0x1a0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(416)));
  /* 13d810: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13d814: ret  */
  return;
L_13d818:;
  /* 13d818: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13d81c: b #0x13d7fc */
  goto L_13d7fc;
L_13d820:;
  /* 13d820: nop  */
  /* nop: no architectural effect here */
  /* 13d824: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d828: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 13d82c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300528));
  fn1_1424b8(c);
  /* 13d830: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 13d834: cbz w0, #0x13d654 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d654;
  /* 13d838: nop  */
  /* nop: no architectural effect here */
  /* 13d83c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d840: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300548));
  fn1_1424d0(c);
  /* 13d844: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 13d848: b #0x13d654 */
  goto L_13d654;
L_13d84c:;
  /* 13d84c: nop  */
  /* nop: no architectural effect here */
  /* 13d850: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d854: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300568));
  fn1_1424b8(c);
  /* 13d858: cbz w0, #0x13d66c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d66c;
  /* 13d85c: nop  */
  /* nop: no architectural effect here */
  /* 13d860: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13d864: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300584));
  fn1_1424d0(c);
  /* 13d868: b #0x13d66c */
  goto L_13d66c;
L_13d86c:;
  /* 13d86c: nop  */
  /* nop: no architectural effect here */
  /* 13d870: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d874: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300600));
  fn1_1424b8(c);
  /* 13d878: cbz w0, #0x13d6b4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d6b4;
  /* 13d87c: nop  */
  /* nop: no architectural effect here */
  /* 13d880: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d884: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300616));
  fn1_1424d0(c);
  /* 13d888: b #0x13d6b4 */
  goto L_13d6b4;
L_13d88c:;
  /* 13d88c: nop  */
  /* nop: no architectural effect here */
  /* 13d890: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d894: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 13d898: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300636));
  fn1_1424b8(c);
  /* 13d89c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13d8a0: cbz w0, #0x13d730 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d730;
  /* 13d8a4: nop  */
  /* nop: no architectural effect here */
  /* 13d8a8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13d8ac: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300656));
  fn1_1424d0(c);
  /* 13d8b0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13d8b4: b #0x13d730 */
  goto L_13d730;
  /* 13d8b8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1300668));
  fn1_a1454(c);
}

void fn1_1425d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248344));
  /* 1425d8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1425dc: ldr x17, [x16, #0xf28] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3880))));
  /* 1425e0: add x16, x16, #0xf28 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3880)));
  /* 1425e4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1425e8: nop  */
  /* nop: no architectural effect here */
  /* 1425ec: nop  */
  /* nop: no architectural effect here */
}

void fn1_142bd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249880));
  /* 142bd8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142bdc: ldr x17, [x16, #0x128] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(296))));
  /* 142be0: add x16, x16, #0x128 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(296)));
  /* 142be4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142be8: nop  */
  /* nop: no architectural effect here */
  /* 142bec: nop  */
  /* nop: no architectural effect here */
}

void fn1_1431d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251416));
  /* 1431d8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1431dc: ldr x17, [x16, #0x328] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(808))));
  /* 1431e0: add x16, x16, #0x328 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(808)));
  /* 1431e4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1431e8: nop  */
  /* nop: no architectural effect here */
  /* 1431ec: nop  */
  /* nop: no architectural effect here */
}

void fn1_1437d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252952));
  /* 1437d8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1437dc: ldr x17, [x16, #0x528] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1320))));
  /* 1437e0: add x16, x16, #0x528 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1320)));
  /* 1437e4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1437e8: nop  */
  /* nop: no architectural effect here */
  /* 1437ec: nop  */
  /* nop: no architectural effect here */
}

void fn1_143dd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254488));
  /* 143dd8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143ddc: ldr x17, [x16, #0x728] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1832))));
  /* 143de0: add x16, x16, #0x728 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1832)));
  /* 143de4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143de8: nop  */
  /* nop: no architectural effect here */
  /* 143dec: nop  */
  /* nop: no architectural effect here */
}

void fn1_1443d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256024));
  /* 1443d8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1443dc: ldr x17, [x16, #0x928] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2344))));
  /* 1443e0: add x16, x16, #0x928 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2344)));
  /* 1443e4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1443e8: nop  */
  /* nop: no architectural effect here */
  /* 1443ec: nop  */
  /* nop: no architectural effect here */
}

void fn1_1449d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257560));
  /* 1449d8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1449dc: ldr x17, [x16, #0xb28] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2856))));
  /* 1449e0: add x16, x16, #0xb28 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2856)));
  /* 1449e4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1449e8: nop  */
  /* nop: no architectural effect here */
  /* 1449ec: nop  */
  /* nop: no architectural effect here */
}

