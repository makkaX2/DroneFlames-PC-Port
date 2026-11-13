#include "lifted.h"

void fn1_9d6f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038572792));
  /* 9d6f8: bti c */
  /* bti: no architectural effect here */
  /* 9d6fc: cmp w1, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(29));
  /* 9d700: b.le #0x9d720 */
  if (ARC_COND(c, 13)) goto L_9d720;
  /* 9d704: cmp w1, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(31));
  /* 9d708: b.gt #0x9d740 */
  if (ARC_COND(c, 12)) goto L_9d740;
  /* 9d70c: cmp w1, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(30));
  /* 9d710: b.eq #0x9d774 */
  if (ARC_COND(c, 0)) goto L_9d774;
  /* 9d714: cmp w1, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(31));
  /* 9d718: b.eq #0x9d758 */
  if (ARC_COND(c, 0)) goto L_9d758;
  /* 9d71c: b #0x9d760 */
  goto L_9d760;
L_9d720:;
  /* 9d720: cmn w1, #2 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(2), 0);
  /* 9d724: b.eq #0x9d758 */
  if (ARC_COND(c, 0)) goto L_9d758;
  /* 9d728: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 9d72c: b.eq #0x9d750 */
  if (ARC_COND(c, 0)) goto L_9d750;
  /* 9d730: cmp w1, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(29));
  /* 9d734: b.ne #0x9d760 */
  if (ARC_COND(c, 1)) goto L_9d760;
  /* 9d738: str x2, [x0, #0xf8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(248)), ARC_X_R(c, 2));
  /* 9d73c: ret  */
  return;
L_9d740:;
  /* 9d740: cmp w1, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(34));
  /* 9d744: b.eq #0x9d77c */
  if (ARC_COND(c, 0)) goto L_9d77c;
  /* 9d748: cmp w1, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(32));
  /* 9d74c: b.ne #0x9d760 */
  if (ARC_COND(c, 1)) goto L_9d760;
L_9d750:;
  /* 9d750: str x2, [x0, #0x110] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(272)), ARC_X_R(c, 2));
  /* 9d754: ret  */
  return;
L_9d758:;
  /* 9d758: str x2, [x0, #0x108] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(264)), ARC_X_R(c, 2));
  /* 9d75c: ret  */
  return;
L_9d760:;
  /* 9d760: cmp w1, #0x1c */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(28));
  /* 9d764: b.hi #0x9d784 */
  if (ARC_COND(c, 8)) goto L_9d784;
  /* 9d768: add x8, x0, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 9d76c: str x2, [x8, w1, uxtw #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 1)))) << 3)), ARC_X_R(c, 2));
  /* 9d770: ret  */
  return;
L_9d774:;
  /* 9d774: str x2, [x0, #0x100] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(256)), ARC_X_R(c, 2));
  /* 9d778: ret  */
  return;
L_9d77c:;
  /* 9d77c: str x2, [x0, #0x118] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(280)), ARC_X_R(c, 2));
  /* 9d780: ret  */
  return;
L_9d784:;
  /* 9d784: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9d788: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d78c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 9d790: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9d794: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 9d798: nop  */
  /* nop: no architectural effect here */
  /* 9d79c: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* 9d7a0: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* 9d7a4: adrp x2, #0x51000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(331776)));
  /* 9d7a8: add x2, x2, #0x4c6 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(1222)));
  /* 9d7ac: adrp x3, #0x50000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327680)));
  /* 9d7b0: add x3, x3, #0x412 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1042)));
  /* 9d7b4: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9d7b8: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645052));
  fn1_144a38(c);
  /* 9d7bc: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* 9d7c0: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645060));
  fn1_143730(c);
  /* 9d7c4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645064));
  fn1_1427b8(c);
}

void fn1_a1d74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038590836));
  /* a1d74: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1d78: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* a1d7c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1d80: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* a1d84: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a1d88: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1d8c: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a1d90: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* a1d94: cbz x0, #0xa1e34 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a1e34;
  /* a1d98: sub x19, x0, x2 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) - ARC_X_R(c, 2)));
  /* a1d9c: cbz x2, #0xa1e24 */
  if ((ARC_X_R(c, 2)) == 0) goto L_a1e24;
  /* a1da0: ldur x23, [x0, #-8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(-8))));
  /* a1da4: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* a1da8: madd x20, x23, x1, x2 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 2)) + ((uint64_t)(ARC_X_R(c, 23)) * (uint64_t)(ARC_X_R(c, 1)))));
  /* a1dac: cbz x3, #0xa1e28 */
  if ((ARC_X_R(c, 3)) == 0) goto L_a1e28;
  /* a1db0: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a1db4: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* a1db8: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* a1dbc: stp x0, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a1dc0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a1dc4: mov x25, x1 */
  ARC_X_W(c, 25, ARC_X_R(c, 1));
  /* a1dc8: strb w8, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 8));
  /* a1dcc: nop  */
  /* nop: no architectural effect here */
  /* a1dd0: adr x8, #0x156bb8 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1403832)));
  /* a1dd4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a1dd8: str x23, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 23));
  /* a1ddc: stp x1, x21, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a1de0: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663012));
  fn1_144ac8(c);
  /* a1de4: sub x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* a1de8: madd x9, x25, x8, x24 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 24)) + ((uint64_t)(ARC_X_R(c, 25)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* a1dec: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* a1df0: neg x24, x25 */
  ARC_X_W(c, 24, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 25))));
  /* a1df4: ldr w23, [x8, #8] */
  ARC_W_W(c, 23, arc_ld32((ARC_X_R(c, 8) + INT64_C(8))));
  /* a1df8: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
L_a1dfc:;
  /* a1dfc: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* a1e00: sub x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* a1e04: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* a1e08: cbz x8, #0xa1e1c */
  if ((ARC_X_R(c, 8)) == 0) goto L_a1e1c;
  /* a1e0c: add x25, x0, x24 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + ARC_X_R(c, 24)));
  /* a1e10: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663060));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* a1e14: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* a1e18: b #0xa1dfc */
  goto L_a1dfc;
L_a1e1c:;
  /* a1e1c: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* a1e20: b #0xa1e28 */
  goto L_a1e28;
L_a1e24:;
  /* a1e24: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_a1e28:;
  /* a1e28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1e2c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a1e30: blr x4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663092));
  arc_dispatch(c, ARC_X_R(c, 4));
L_a1e34:;
  /* a1e34: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a1e38: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* a1e3c: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1e40: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a1e44: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1e48: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* a1e4c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1e50: ret  */
  return;
  /* a1e54: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663128));
  fn1_a1454(c);
  /* a1e58: cbnz w23, #0xa1e7c */
  if ((ARC_W_R(c, 23)) != 0) goto L_a1e7c;
  /* a1e5c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a1e60: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a1e64: bl #0xa1a0c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663144));
  fn1_a1a0c(c);
  /* a1e68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1e6c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a1e70: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663156));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* a1e74: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a1e78: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663164));
  fn1_9cc20(c);
L_a1e7c:;
  /* a1e7c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663168));
  fn1_142488(c);
  /* a1e80: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(663172));
  fn1_a1454(c);
}

void fn1_a2e34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038595124));
  /* a2e34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2e38: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a2e3c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a2e40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2e44: ldrb w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(16))));
  /* a2e48: tst w8, #0x18 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(24)));
  /* a2e4c: b.eq #0xa2e70 */
  if (ARC_COND(c, 0)) goto L_a2e70;
L_a2e50:;
  /* a2e50: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* a2e54: b.eq #0xa2ec4 */
  if (ARC_COND(c, 0)) goto L_a2ec4;
  /* a2e58: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a2e5c: ldr x1, [x1, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* a2e60: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667236));
  fn1_142848(c);
  /* a2e64: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
L_a2e68:;
  /* a2e68: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a2e6c: b #0xa2ed0 */
  goto L_a2ed0;
L_a2e70:;
  /* a2e70: cbz x1, #0xa2ecc */
  if ((ARC_X_R(c, 1)) == 0) goto L_a2ecc;
  /* a2e74: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2e78: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a2e7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a2e80: ldr x8, [x8, #0x9a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2472))));
  /* a2e84: ldr x2, [x2, #0x9b8] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2488))));
  /* a2e88: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a2e8c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a2e90: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a2e94: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* a2e98: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(667292));
  fn1_142830(c);
  /* a2e9c: cbz x0, #0xa2ed0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a2ed0;
  /* a2ea0: ldrb w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(16))));
  /* a2ea4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a2ea8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a2eac: tst w8, #0x18 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(24)));
  /* a2eb0: b.ne #0xa2e50 */
  if (ARC_COND(c, 1)) goto L_a2e50;
  /* a2eb4: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a2eb8: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* a2ebc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a2ec0: b #0xa2e68 */
  goto L_a2e68;
L_a2ec4:;
  /* a2ec4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a2ec8: b #0xa2ed0 */
  goto L_a2ed0;
L_a2ecc:;
  /* a2ecc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_a2ed0:;
  /* a2ed0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a2ed4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2ed8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2edc: ret  */
  return;
}

void fn1_aa1f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038624752));
  /* aa1f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa1f4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa1f8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* aa1fc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa200: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa204: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* aa208: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* aa20c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* aa210: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* aa214: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* aa218: b.hi #0xaa23c */
  if (ARC_COND(c, 8)) goto L_aa23c;
  /* aa21c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aa220: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* aa224: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696872));
  fn1_1428a8(c);
  /* aa228: cbz x0, #0xaa28c */
  if ((ARC_X_R(c, 0)) == 0) goto L_aa28c;
  /* aa22c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* aa230: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* aa234: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* aa238: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_aa23c:;
  /* aa23c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* aa240: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* aa244: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* aa248: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* aa24c: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* aa250: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* aa254: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* aa258: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* aa25c: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* aa260: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* aa264: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* aa268: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* aa26c: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* aa270: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* aa274: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* aa278: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa27c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* aa280: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa284: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa288: ret  */
  return;
L_aa28c:;
  /* aa28c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(696976));
  fn1_142488(c);
}

void fn1_b0e24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038652452));
  /* b0e24: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b0e28: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0e2c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b0e30: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b0e34: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0e38: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b0e3c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b0e40: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b0e44: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b0e48: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b0e4c: b.hi #0xb0e70 */
  if (ARC_COND(c, 8)) goto L_b0e70;
  /* b0e50: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b0e54: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b0e58: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(724572));
  fn1_1428a8(c);
  /* b0e5c: cbz x0, #0xb0ec0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0ec0;
  /* b0e60: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b0e64: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b0e68: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b0e6c: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b0e70:;
  /* b0e70: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b0e74: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b0e78: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b0e7c: add x8, x8, #0x960 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2400)));
  /* b0e80: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0e84: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* b0e88: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b0e8c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b0e90: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b0e94: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b0e98: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* b0e9c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b0ea0: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b0ea4: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b0ea8: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* b0eac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b0eb0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0eb4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0eb8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b0ebc: ret  */
  return;
L_b0ec0:;
  /* b0ec0: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(724676));
  fn1_142488(c);
}

void fn1_b57b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038671280));
  /* b57b0: bti c */
  /* bti: no architectural effect here */
  /* b57b4: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b57b8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b827c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682236));
  /* b827c: bti c */
  /* bti: no architectural effect here */
  /* b8280: ldr w8, [x1, #0x1c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(28))));
  /* b8284: cmn w8, #1 */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(1), 0);
  /* b8288: b.eq #0xb82b0 */
  if (ARC_COND(c, 0)) goto L_b82b0;
  /* b828c: ldr w8, [x1, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(24))));
  /* b8290: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b8294: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8298: b.ls #0xb82c4 */
  if (ARC_COND(c, 9)) goto L_b82c4;
L_b829c:;
  /* b829c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b82a0: ldr x0, [x9, x8, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* b82a4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b82a8: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b82ac: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b82b0:;
  /* b82b0: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b82b4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b82b8: stp wzr, w9, [x1, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(24));
    arc_st32(_pa, ARC_W_R(c, 31));
    arc_st32(_pa + 4, ARC_W_R(c, 9));
  }
  /* b82bc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b82c0: b.hi #0xb829c */
  if (ARC_COND(c, 8)) goto L_b829c;
L_b82c4:;
  /* b82c4: ret  */
  return;
}

void fn1_bb56c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038695276));
  /* bb56c: bti c */
  /* bti: no architectural effect here */
  /* bb570: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* bb574: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bdce4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705380));
  /* bdce4: bti c */
  /* bti: no architectural effect here */
  /* bdce8: ldur x0, [x0, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(-8))));
  /* bdcec: ret  */
  return;
}

void fn1_d1e7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038787708));
  /* d1e7c: bti c */
  /* bti: no architectural effect here */
  /* d1e80: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d1e84: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* d1e88: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1e8c: b.gt #0xd1e9c */
  if (ARC_COND(c, 12)) goto L_d1e9c;
  /* d1e90: b.hs #0xd1f70 */
  if (ARC_COND(c, 2)) goto L_d1f70;
L_d1e94:;
  /* d1e94: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1e98: ret  */
  return;
L_d1e9c:;
  /* d1e9c: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d1ea0: b.eq #0xd1f98 */
  if (ARC_COND(c, 0)) goto L_d1f98;
  /* d1ea4: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d1ea8: b.eq #0xd209c */
  if (ARC_COND(c, 0)) goto L_d209c;
  /* d1eac: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d1eb0: b.ne #0xd1fe4 */
  if (ARC_COND(c, 1)) goto L_d1fe4;
  /* d1eb4: ldp s0, s1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* d1eb8: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d1ebc: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d1ec0: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d1ec4: stp s0, s2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* d1ec8: ldr s0, [x0, #0xc] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* d1ecc: ldur s1, [x1, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1ed0: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d1ed4: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d1ed8: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d1edc: stur s2, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* d1ee0: str s0, [x0, #0xc] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(12)), (c)->q[0].u32[0]);
  /* d1ee4: ldr s1, [x0, #8] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d1ee8: ldur s0, [x1, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1eec: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d1ef0: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d1ef4: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d1ef8: stur s2, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* d1efc: ldp s2, s1, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* d1f00: ldr s3, [x0, #4] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d1f04: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d1f08: fcsel s2, s1, s2, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* d1f0c: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d1f10: stp s2, s0, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, (c)->q[2].u32[0]);
    arc_st32((_pa + 4), (c)->q[0].u32[0]);
  }
  /* d1f14: ldur s0, [x1, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1f18: fcmp s3, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 3)), (double)(ARC_S_R(c, 0)));
  /* d1f1c: fcsel s1, s3, s0, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 3) : ARC_S_R(c, 0))));
  /* d1f20: fcsel s0, s0, s3, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 3))));
  /* d1f24: stur s1, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), (c)->q[1].u32[0]);
  /* d1f28: ldp s3, s2, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_su_w(c, 3, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* d1f2c: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* d1f30: fcmp s2, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 1)));
  /* d1f34: fcsel s4, s1, s2, pl */
  arc_s_w(c, 4, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* d1f38: fcsel s2, s2, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 2) : ARC_S_R(c, 1))));
  /* d1f3c: fcmp s4, s3 */
  arc_fcmp(c, (double)(ARC_S_R(c, 4)), (double)(ARC_S_R(c, 3)));
  /* d1f40: fcsel s1, s3, s1, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 3) : ARC_S_R(c, 1))));
  /* d1f44: fcsel s3, s4, s3, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 4) : ARC_S_R(c, 3))));
  /* d1f48: fcmp s2, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 0)));
  /* d1f4c: fcsel s4, s0, s2, pl */
  arc_s_w(c, 4, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 2))));
  /* d1f50: fcsel s2, s2, s0, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 2) : ARC_S_R(c, 0))));
  /* d1f54: fcmp s4, s3 */
  arc_fcmp(c, (double)(ARC_S_R(c, 4)), (double)(ARC_S_R(c, 3)));
  /* d1f58: fcsel s0, s3, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 3) : ARC_S_R(c, 0))));
  /* d1f5c: fcsel s3, s4, s3, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 4) : ARC_S_R(c, 3))));
  /* d1f60: stp s1, s0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, (c)->q[1].u32[0]);
    arc_st32((_pa + 4), (c)->q[0].u32[0]);
  }
  /* d1f64: stp s3, s2, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, (c)->q[3].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* d1f68: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1f6c: ret  */
  return;
L_d1f70:;
  /* d1f70: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d1f74: b.ne #0xd1fe4 */
  if (ARC_COND(c, 1)) goto L_d1fe4;
  /* d1f78: ldur s1, [x1, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1f7c: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* d1f80: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* d1f84: b.pl #0xd1e94 */
  if (ARC_COND(c, 5)) goto L_d1e94;
  /* d1f88: str s1, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[1].u32[0]);
  /* d1f8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d1f90: stur s0, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), (c)->q[0].u32[0]);
  /* d1f94: ret  */
  return;
L_d1f98:;
  /* d1f98: ldr s0, [x0, #4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d1f9c: ldur s1, [x1, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1fa0: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d1fa4: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d1fa8: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d1fac: stur s2, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* d1fb0: str s0, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), (c)->q[0].u32[0]);
  /* d1fb4: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* d1fb8: ldur s0, [x1, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d1fbc: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d1fc0: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d1fc4: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d1fc8: stur s2, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* d1fcc: ldp s2, s1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* d1fd0: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d1fd4: fcsel s2, s1, s2, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* d1fd8: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d1fdc: str s2, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[2].u32[0]);
  /* d1fe0: b #0xd210c */
  goto L_d210c;
L_d1fe4:;
  /* d1fe4: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d1fe8: ldp s2, s1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* d1fec: ldr s0, [x11, #8]! */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 11) + INT64_C(8))));
  ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
  /* d1ff0: add x8, x0, #0xc */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(12)));
  /* d1ff4: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* d1ff8: fcsel s3, s1, s0, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d1ffc: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d2000: fcmp s3, s2 */
  arc_fcmp(c, (double)(ARC_S_R(c, 3)), (double)(ARC_S_R(c, 2)));
  /* d2004: fcsel s1, s2, s3, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 2) : ARC_S_R(c, 3))));
  /* d2008: fcsel s3, s3, s2, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 3) : ARC_S_R(c, 2))));
  /* d200c: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* d2010: str s3, [x11] */
  arc_st32(ARC_X_R(c, 11), (c)->q[3].u32[0]);
  /* d2014: fcsel s2, s0, s2, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 2))));
  /* d2018: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d201c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d2020: stp s2, s0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, (c)->q[2].u32[0]);
    arc_st32((_pa + 4), (c)->q[0].u32[0]);
  }
  /* d2024: b.eq #0xd1e94 */
  if (ARC_COND(c, 0)) goto L_d1e94;
  /* d2028: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d202c: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* d2030: b #0xd2060 */
  goto L_d2060;
L_d2034:;
  /* d2034: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d2038:;
  /* d2038: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d203c: str s0, [x11] */
  arc_st32(ARC_X_R(c, 11), (c)->q[0].u32[0]);
  /* d2040: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d2044: b.eq #0xd2118 */
  if (ARC_COND(c, 0)) goto L_d2118;
L_d2048:;
  /* d2048: add x12, x8, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* d204c: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d2050: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* d2054: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d2058: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d205c: b.eq #0xd1e94 */
  if (ARC_COND(c, 0)) goto L_d1e94;
L_d2060:;
  /* d2060: ldr s0, [x8] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* d2064: ldr s1, [x11] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 11)));
  /* d2068: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d206c: b.pl #0xd2048 */
  if (ARC_COND(c, 5)) goto L_d2048;
  /* d2070: mov x11, x10 */
  ARC_X_W(c, 11, ARC_X_R(c, 10));
L_d2074:;
  /* d2074: subs x12, x11, #4 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(4)));
  /* d2078: str s1, [x0, x11] */
  arc_st32((ARC_X_R(c, 0) + ARC_X_R(c, 11)), (c)->q[1].u32[0]);
  /* d207c: b.eq #0xd2034 */
  if (ARC_COND(c, 0)) goto L_d2034;
  /* d2080: add x11, x0, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 11)));
  /* d2084: ldur s1, [x11, #-8] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 11) + INT64_C(-8))));
  /* d2088: mov x11, x12 */
  ARC_X_W(c, 11, ARC_X_R(c, 12));
  /* d208c: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d2090: b.mi #0xd2074 */
  if (ARC_COND(c, 4)) goto L_d2074;
  /* d2094: add x11, x0, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 12)));
  /* d2098: b #0xd2038 */
  goto L_d2038;
L_d209c:;
  /* d209c: ldp s2, s0, [x0, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(4));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* d20a0: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* d20a4: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* d20a8: fcsel s3, s1, s0, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d20ac: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d20b0: str s3, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), (c)->q[3].u32[0]);
  /* d20b4: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* d20b8: ldur s0, [x1, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d20bc: fcmp s2, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 0)));
  /* d20c0: fcsel s1, s2, s0, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 2) : ARC_S_R(c, 0))));
  /* d20c4: fcsel s0, s0, s2, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 2))));
  /* d20c8: stur s1, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), (c)->q[1].u32[0]);
  /* d20cc: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* d20d0: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* d20d4: fcsel s2, s1, s0, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d20d8: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d20dc: stp s0, s2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* d20e0: ldr s0, [x0, #8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* d20e4: ldur s1, [x1, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 1) + INT64_C(-4))));
  /* d20e8: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* d20ec: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d20f0: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d20f4: stur s2, [x1, #-4] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* d20f8: ldr s1, [x0, #4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* d20fc: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* d2100: fcsel s2, s1, s0, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* d2104: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* d2108: str s2, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), (c)->q[2].u32[0]);
L_d210c:;
  /* d210c: str s0, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), (c)->q[0].u32[0]);
  /* d2110: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d2114: ret  */
  return;
L_d2118:;
  /* d2118: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* d211c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d2120: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d2124: ret  */
  return;
}

void fn1_d7d54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038811988));
  /* d7d54: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7d58: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7d5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d7d60: nop  */
  /* nop: no architectural effect here */
  /* d7d64: adr x0, #0x51baa */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334762)));
  /* d7d68: bl #0xd7d6c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884076));
  fn1_d7d6c(c);
}

void fn1_db86c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038827116));
  /* db86c: bti c */
  /* bti: no architectural effect here */
  /* db870: add w0, w1, #3 */
  ARC_W_W(c, 0, (ARC_W_R(c, 1) + UINT64_C(3)));
  /* db874: ret  */
  return;
}

void fn1_e00b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038845624));
  /* e00b8: bti c */
  /* bti: no architectural effect here */
  /* e00bc: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* e00c0: tbnz w8, #0, #0xe00d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e00d8;
  /* e00c4: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e00c8: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* e00cc: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* e00d0: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* e00d4: ret  */
  return;
L_e00d8:;
  /* e00d8: ldp x2, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e00dc: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e00e0: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_e2924(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038855972));
  /* e2924: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2928: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e292c: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* e2930: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e2934: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e2938: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e293c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2940: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e2944: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e2948: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e294c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e2950: csel x20, x10, x8, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e2954: subs x8, x20, x1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 1)));
  /* e2958: b.lo #0xe2aa8 */
  if (ARC_COND(c, 3)) goto L_e2aa8;
  /* e295c: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* e2960: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* e2964: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* e2968: csel x22, x8, x2, lo */
  ARC_X_W(c, 22, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 2)));
  /* e296c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e2970: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* e2974: and x11, x10, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(18446744073709551614)));
  /* e2978: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* e297c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* e2980: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* e2984: csel x1, x9, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* e2988: sub x9, x22, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) - ARC_X_R(c, 20)));
  /* e298c: add x9, x9, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 1)));
  /* e2990: cmp x9, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 3));
  /* e2994: b.hs #0xe29d0 */
  if (ARC_COND(c, 2)) goto L_e29d0;
  /* e2998: add x25, x20, x19 */
  ARC_X_W(c, 25, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
  /* e299c: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* e29a0: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* e29a4: sub x8, x25, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) - ARC_X_R(c, 1)));
  /* e29a8: mov x5, x22 */
  ARC_X_W(c, 5, ARC_X_R(c, 22));
  /* e29ac: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* e29b0: sub x2, x8, x22 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 22)));
  /* e29b4: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* e29b8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928188));
  fn1_142da0(c);
  /* e29bc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e29c0: sub x8, x25, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) - ARC_X_R(c, 22)));
  /* e29c4: ldr x24, [x24, #0x10] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(16))));
  /* e29c8: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* e29cc: b #0xe2a18 */
  goto L_e2a18;
L_e29d0:;
  /* e29d0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e29d4: add x11, x0, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e29d8: tst x10, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 10) & UINT64_C(1)));
  /* e29dc: csel x24, x11, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
  /* e29e0: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* e29e4: b.ls #0xe2a14 */
  if (ARC_COND(c, 9)) goto L_e2a14;
  /* e29e8: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* e29ec: b.eq #0xe2a14 */
  if (ARC_COND(c, 0)) goto L_e2a14;
  /* e29f0: add x9, x24, x23, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* e29f4: sub x10, x8, x22 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 22)));
  /* e29f8: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* e29fc: lsl x2, x10, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(2)) & 63)));
  /* e2a00: add x8, x9, x19, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 19)) << 2)));
  /* e2a04: add x1, x9, x22, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 22)) << 2)));
  /* e2a08: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e2a0c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928272));
  fn1_1449f0(c);
  /* e2a10: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
L_e2a14:;
  /* e2a14: cbz x19, #0xe2a68 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e2a68;
L_e2a18:;
  /* e2a18: add x11, x24, x23, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* e2a1c: cmp x19, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(8));
  /* e2a20: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* e2a24: mov x8, x11 */
  ARC_X_W(c, 8, ARC_X_R(c, 11));
  /* e2a28: b.lo #0xe2a5c */
  if (ARC_COND(c, 3)) goto L_e2a5c;
  /* e2a2c: and x10, x19, #0xfffffffffffffff8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) & UINT64_C(18446744073709551608)));
  /* e2a30: dup v0.4s, w21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 21));
    _t.u32[1] = (ARC_W_R(c, 21));
    _t.u32[2] = (ARC_W_R(c, 21));
    _t.u32[3] = (ARC_W_R(c, 21));
    (c)->q[0] = _t; }
  /* e2a34: and x9, x19, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) & UINT64_C(7)));
  /* e2a38: add x8, x11, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* e2a3c: add x11, x11, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* e2a40: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_e2a44:;
  /* e2a44: subs x12, x12, #8 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(8)));
  /* e2a48: stp q0, q0, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e2a4c: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* e2a50: b.ne #0xe2a44 */
  if (ARC_COND(c, 1)) goto L_e2a44;
  /* e2a54: cmp x19, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* e2a58: b.eq #0xe2a68 */
  if (ARC_COND(c, 0)) goto L_e2a68;
L_e2a5c:;
  /* e2a5c: subs x9, x9, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1)));
  /* e2a60: str w21, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 21));
  }
  /* e2a64: b.ne #0xe2a5c */
  if (ARC_COND(c, 1)) goto L_e2a5c;
L_e2a68:;
  /* e2a68: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e2a6c: sub x8, x19, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) - ARC_X_R(c, 22)));
  /* e2a70: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* e2a74: tbnz w9, #0, #0xe2a84 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e2a84;
  /* e2a78: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e2a7c: strb w9, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* e2a80: b #0xe2a88 */
  goto L_e2a88;
L_e2a84:;
  /* e2a84: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
L_e2a88:;
  /* e2a88: str wzr, [x24, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
  /* e2a8c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2a90: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* e2a94: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2a98: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e2a9c: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2aa0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2aa4: ret  */
  return;
L_e2aa8:;
  /* e2aa8: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(928428));
  fn1_e1f80(c);
}

void fn1_e6900(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038872320));
  /* e6900: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e6904: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* e6908: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e690c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e6910: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e6914: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* e6918: mov w1, w0 */
  ARC_W_W(c, 1, ARC_W_R(c, 0));
  /* e691c: add x0, sp, #5 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(5)));
  /* e6920: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* e6924: add x21, sp, #5 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(5)));
  /* e6928: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(944428));
  fn1_d4eb8(c);
  /* e692c: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* e6930: sub x21, x0, x21 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) - ARC_X_R(c, 21)));
  /* e6934: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e6938: b.hs #0xe6a54 */
  if (ARC_COND(c, 2)) goto L_e6a54;
  /* e693c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e6940: cmp x21, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(4));
  /* e6944: b.hi #0xe6954 */
  if (ARC_COND(c, 8)) goto L_e6954;
  /* e6948: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* e694c: strb w8, [x20], #4 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(4));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e6950: b #0xe697c */
  goto L_e697c;
L_e6954:;
  /* e6954: orr x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(1)));
  /* e6958: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* e695c: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e6960: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e6964: lsl x0, x22, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* e6968: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(944492));
  fn1_1428f0(c);
  /* e696c: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e6970: stp x21, x0, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e6974: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e6978: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_e697c:;
  /* e697c: add x8, sp, #5 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(5)));
  /* e6980: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* e6984: b.eq #0xe69a0 */
  if (ARC_COND(c, 0)) goto L_e69a0;
  /* e6988: cmp x21, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(32));
  /* e698c: add x11, sp, #5 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(5)));
  /* e6990: b.hs #0xe69a8 */
  if (ARC_COND(c, 2)) goto L_e69a8;
  /* e6994: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* e6998: add x9, sp, #5 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(5)));
  /* e699c: b #0xe6a28 */
  goto L_e6a28;
L_e69a0:;
  /* e69a0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* e69a4: b #0xe6a38 */
  goto L_e6a38;
L_e69a8:;
  /* e69a8: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e69ac: and x10, x21, #0x3fffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 21) & UINT64_C(4611686018427387872)));
  /* e69b0: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* e69b4: ldr q0, [x12, #0xb70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 12) + INT64_C(2928))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2928)) + 8));
  /* e69b8: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* e69bc: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* e69c0: add x8, x20, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* e69c4: ldr q1, [x13, #0xd40] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 13) + INT64_C(3392))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3392)) + 8));
  /* e69c8: ldr q2, [x12, #0xc50] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(3152))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3152)) + 8));
  /* e69cc: ldr q3, [x14, #0x940] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 14) + INT64_C(2368))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2368)) + 8));
  /* e69d0: add x9, x11, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* e69d4: add x11, x11, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* e69d8: add x12, x20, #0x40 */
  ARC_X_W(c, 12, (ARC_X_R(c, 20) + UINT64_C(64)));
  /* e69dc: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_e69e0:;
  /* e69e0: ldp q4, q5, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e69e4: subs x13, x13, #0x20 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(32)));
  /* e69e8: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* e69ec: tbl v6.16b, {v4.16b}, v3.16b */
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
  /* e69f0: tbl v7.16b, {v4.16b}, v2.16b */
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
  /* e69f4: tbl v16.16b, {v4.16b}, v1.16b */
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
  /* e69f8: tbl v4.16b, {v4.16b}, v0.16b */
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
  /* e69fc: tbl v17.16b, {v5.16b}, v3.16b */
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
  /* e6a00: stp q7, q6, [x12, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-32));
    arc_st64(_pa, (c)->q[7].u64[0]);
    arc_st64(_pa + 8, (c)->q[7].u64[1]);
    arc_st64((_pa + 16), (c)->q[6].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[6].u64[1]);
  }
  /* e6a04: tbl v6.16b, {v5.16b}, v2.16b */
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
  /* e6a08: tbl v7.16b, {v5.16b}, v1.16b */
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
  /* e6a0c: tbl v5.16b, {v5.16b}, v0.16b */
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
  /* e6a10: stp q4, q16, [x12, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[16].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[16].u64[1]);
  }
  /* e6a14: stp q6, q17, [x12, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(32));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* e6a18: stp q5, q7, [x12], #0x80 */
  { const uint64_t _pa = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(128));
    arc_st64(_pa, (c)->q[5].u64[0]);
    arc_st64(_pa + 8, (c)->q[5].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* e6a1c: b.ne #0xe69e0 */
  if (ARC_COND(c, 1)) goto L_e69e0;
  /* e6a20: cmp x21, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 10));
  /* e6a24: b.eq #0xe6a38 */
  if (ARC_COND(c, 0)) goto L_e6a38;
L_e6a28:;
  /* e6a28: ldrb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* e6a2c: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* e6a30: str w10, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 10));
  }
  /* e6a34: b.ne #0xe6a28 */
  if (ARC_COND(c, 1)) goto L_e6a28;
L_e6a38:;
  /* e6a38: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* e6a3c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e6a40: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e6a44: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6a48: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* e6a4c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e6a50: ret  */
  return;
L_e6a54:;
  /* e6a54: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(944728));
  fn1_e2274(c);
}

void fn1_e9964(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038884708));
  /* e9964: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9968: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e996c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9970: nop  */
  /* nop: no architectural effect here */
  /* e9974: adr x8, #0x15d240 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1430080)));
  /* e9978: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* e997c: tbz w8, #0, #0xe9994 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e9994;
L_e9980:;
  /* e9980: nop  */
  /* nop: no architectural effect here */
  /* e9984: adr x0, #0x156d48 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404232)));
  /* e9988: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e998c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9990: ret  */
  return;
L_e9994:;
  /* e9994: nop  */
  /* nop: no architectural effect here */
  /* e9998: adr x0, #0x15d240 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430080)));
  /* e999c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956832));
  fn1_1424b8(c);
  /* e99a0: cbz w0, #0xe9980 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e9980;
  /* e99a4: nop  */
  /* nop: no architectural effect here */
  /* e99a8: adr x0, #0x15d240 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1430080)));
  /* e99ac: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(956848));
  fn1_1424d0(c);
  /* e99b0: b #0xe9980 */
  goto L_e9980;
}

void fn1_eb7bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892476));
  /* eb7bc: bti c */
  /* bti: no architectural effect here */
  /* eb7c0: b #0x1432b0 */
  fn1_1432b0(c); return;
}

void fn1_ed3e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899680));
  /* ed3e0: bti c */
  /* bti: no architectural effect here */
  /* ed3e4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed3e8: ldr x16, [x8, #0x60] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* ed3ec: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f0d08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038914312));
  /* f0d08: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0d0c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f0d10: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f0d14: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f0d18: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f0d1c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f0d20: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0d24: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0d28: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f0d2c: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0d30: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f0d34: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f0d38: and w22, w10, #0xfffffffd */
  ARC_W_W(c, 22, (ARC_W_R(c, 10) & UINT64_C(4294967293)));
  /* f0d3c: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f0d40: orr w10, w22, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 22) | ARC_W_R(c, 10)));
  /* f0d44: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f0d48: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0d4c: b.ne #0xf0df8 */
  if (ARC_COND(c, 1)) goto L_f0df8;
  /* f0d50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0d54: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f0d58: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f0d5c: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f0d60: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f0d64: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f0d68: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986476));
  fn1_1435f8(c);
  /* f0d6c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f0d70: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f0d74: b.ne #0xf0ddc */
  if (ARC_COND(c, 1)) goto L_f0ddc;
  /* f0d78: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0d7c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0d80: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0d84: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0d88: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0d8c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0d90: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f0d94: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* f0d98: mov w3, #8 */
  ARC_W_W(c, 3, UINT64_C(8));
  /* f0d9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986528));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f0da0: orr w8, w22, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 22) | UINT64_C(4)));
  /* f0da4: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* f0da8: csel w20, w8, w22, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 22)));
L_f0dac:;
  /* f0dac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0db0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0db4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0db8: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f0dbc: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f0dc0: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f0dc4: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f0dc8: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f0dcc: orr w9, w9, w20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 20)));
  /* f0dd0: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* f0dd4: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f0dd8: b.ne #0xf0df8 */
  if (ARC_COND(c, 1)) goto L_f0df8;
L_f0ddc:;
  /* f0ddc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0de0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f0de4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f0de8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f0dec: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f0df0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0df4: ret  */
  return;
L_f0df8:;
  /* f0df8: nop  */
  /* nop: no architectural effect here */
  /* f0dfc: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f0e00: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986628));
  fn1_ec720(c);
  /* f0e04: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986632));
  fn1_142548(c);
  /* f0e08: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0e0c: orr w20, w22, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 22) | UINT64_C(1)));
  /* f0e10: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0e14: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f0e18: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0e1c: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* f0e20: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0e24: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0e28: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0e2c: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f0e30: tbnz w8, #0, #0xf0e3c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f0e3c;
  /* f0e34: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986680));
  fn1_142980(c);
  /* f0e38: b #0xf0dac */
  goto L_f0dac;
L_f0e3c:;
  /* f0e3c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986688));
  fn1_1429b0(c);
  /* f0e40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f0e44: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986696));
  fn1_142980(c);
  /* f0e48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0e4c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986704));
  fn1_9cc20(c);
  /* f0e50: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(986708));
  fn1_a1454(c);
}

void fn1_f3e10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926864));
  /* f3e10: bti c */
  /* bti: no architectural effect here */
  /* f3e14: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3e18: ldr x16, [x8, #0x60] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* f3e1c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f7740(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038941504));
  /* f7740: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f7744: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f7748: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f774c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f7750: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f7754: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f7758: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f775c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7760: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f7764: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f7768: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f776c: ldp w10, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f7770: and w22, w10, #0xfffffffd */
  ARC_W_W(c, 22, (ARC_W_R(c, 10) & UINT64_C(4294967293)));
  /* f7774: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f7778: orr w10, w22, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 22) | ARC_W_R(c, 10)));
  /* f777c: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f7780: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f7784: b.ne #0xf7830 */
  if (ARC_COND(c, 1)) goto L_f7830;
  /* f7788: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f778c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* f7790: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f7794: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f7798: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f779c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f77a0: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013668));
  fn1_143670(c);
  /* f77a4: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f77a8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f77ac: b.ne #0xf7814 */
  if (ARC_COND(c, 1)) goto L_f7814;
  /* f77b0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f77b4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f77b8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f77bc: ldr x0, [x8, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f77c0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f77c4: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f77c8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* f77cc: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* f77d0: mov w3, #8 */
  ARC_W_W(c, 3, UINT64_C(8));
  /* f77d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013720));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f77d8: orr w8, w22, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 22) | UINT64_C(4)));
  /* f77dc: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* f77e0: csel w20, w8, w22, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 22)));
L_f77e4:;
  /* f77e4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f77e8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f77ec: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f77f0: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f77f4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f77f8: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f77fc: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f7800: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f7804: orr w9, w9, w20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 20)));
  /* f7808: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* f780c: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f7810: b.ne #0xf7830 */
  if (ARC_COND(c, 1)) goto L_f7830;
L_f7814:;
  /* f7814: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7818: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f781c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f7820: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f7824: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f7828: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f782c: ret  */
  return;
L_f7830:;
  /* f7830: nop  */
  /* nop: no architectural effect here */
  /* f7834: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f7838: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013820));
  fn1_ec720(c);
  /* f783c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013824));
  fn1_142548(c);
  /* f7840: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f7844: orr w20, w22, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 22) | UINT64_C(1)));
  /* f7848: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f784c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f7850: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f7854: orr w10, w10, w20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 20)));
  /* f7858: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f785c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f7860: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f7864: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f7868: tbnz w8, #0, #0xf7874 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f7874;
  /* f786c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013872));
  fn1_142980(c);
  /* f7870: b #0xf77e4 */
  goto L_f77e4;
L_f7874:;
  /* f7874: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013880));
  fn1_1429b0(c);
  /* f7878: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f787c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013888));
  fn1_142980(c);
  /* f7880: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f7884: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013896));
  fn1_9cc20(c);
  /* f7888: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1013900));
  fn1_a1454(c);
}

void fn1_fc6bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038961852));
  /* fc6bc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fc6c0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fc6c4: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fc6c8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fc6cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fc6d0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fc6d4: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* fc6d8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fc6dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fc6e0: stp q0, q0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fc6e4: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* fc6e8: cbnz x2, #0xfc71c */
  if ((ARC_X_R(c, 2)) != 0) goto L_fc71c;
  /* fc6ec: cbnz x20, #0xfc71c */
  if ((ARC_X_R(c, 20)) != 0) goto L_fc71c;
  /* fc6f0: ldr w8, [x19, #0x9c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(156))));
  /* fc6f4: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* fc6f8: b.ne #0xfc71c */
  if (ARC_COND(c, 1)) goto L_fc71c;
  /* fc6fc: ldr x0, [x19, #0x78] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* fc700: cbz x0, #0xfc714 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fc714;
  /* fc704: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* fc708: bl #0x143778 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1033996));
  fn1_143778(c);
  /* fc70c: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* fc710: b #0xfc718 */
  goto L_fc718;
L_fc714:;
  /* fc714: mov w8, #0x22 */
  ARC_W_W(c, 8, UINT64_C(34));
L_fc718:;
  /* fc718: str w8, [x19, #0x9c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(156)), ARC_W_R(c, 8));
L_fc71c:;
  /* fc71c: ldrb w8, [x19, #0xa0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(160))));
  /* fc720: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fc724: b.ne #0xfc734 */
  if (ARC_COND(c, 1)) goto L_fc734;
  /* fc728: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fc72c: cbz x0, #0xfc734 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fc734;
  /* fc730: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034036));
  fn1_1425a8(c);
L_fc734:;
  /* fc734: ldrb w8, [x19, #0xa1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(161))));
  /* fc738: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fc73c: b.ne #0xfc74c */
  if (ARC_COND(c, 1)) goto L_fc74c;
  /* fc740: ldr x0, [x19, #0x68] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(104))));
  /* fc744: cbz x0, #0xfc74c */
  if ((ARC_X_R(c, 0)) == 0) goto L_fc74c;
  /* fc748: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034060));
  fn1_1425a8(c);
L_fc74c:;
  /* fc74c: cmp x21, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(9));
  /* fc750: str x21, [x19, #0x60] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)), ARC_X_R(c, 21));
  /* fc754: b.lo #0xfc770 */
  if (ARC_COND(c, 3)) goto L_fc770;
  /* fc758: ldrb w22, [x19, #0xa2] */
  ARC_W_W(c, 22, arc_ld8((ARC_X_R(c, 19) + INT64_C(162))));
  /* fc75c: cbz x20, #0xfc7a8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_fc7a8;
  /* fc760: cbz w22, #0xfc7a8 */
  if ((ARC_W_R(c, 22)) == 0) goto L_fc7a8;
  /* fc764: str x20, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 20));
  /* fc768: strb wzr, [x19, #0xa0] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 31));
  /* fc76c: b #0xfc7c0 */
  goto L_fc7c0;
L_fc770:;
  /* fc770: ldrb w10, [x19, #0xa2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(162))));
  /* fc774: add x8, x19, #0x58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* fc778: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* fc77c: str x8, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 8));
  /* fc780: str x9, [x19, #0x60] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)), ARC_X_R(c, 9));
  /* fc784: strb wzr, [x19, #0xa0] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 31));
  /* fc788: tbnz w10, #0, #0xfc7c0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_fc7c0;
  /* fc78c: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* fc790: str x0, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 0));
L_fc794:;
  /* fc794: bl #0x142590 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034136));
  fn1_142590(c);
  /* fc798: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* fc79c: str x0, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 0));
  /* fc7a0: strb w8, [x19, #0xa1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(161)), ARC_W_R(c, 8));
  /* fc7a4: b #0xfc7c8 */
  goto L_fc7c8;
L_fc7a8:;
  /* fc7a8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fc7ac: bl #0x142590 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1034160));
  fn1_142590(c);
  /* fc7b0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* fc7b4: str x0, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 0));
  /* fc7b8: strb w8, [x19, #0xa0] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 8));
  /* fc7bc: tbz w22, #0, #0xfc7e0 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_fc7e0;
L_fc7c0:;
  /* fc7c0: strb wzr, [x19, #0xa1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(161)), ARC_W_R(c, 31));
  /* fc7c4: stp xzr, xzr, [x19, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(104));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
L_fc7c8:;
  /* fc7c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fc7cc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fc7d0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fc7d4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fc7d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fc7dc: ret  */
  return;
L_fc7e0:;
  /* fc7e0: cmp x21, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(8));
  /* fc7e4: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* fc7e8: csel x0, x21, x8, gt */
  ARC_X_W(c, 0, (ARC_COND(c, 12) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 8)));
  /* fc7ec: str x0, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 0));
  /* fc7f0: cbz x20, #0xfc794 */
  if ((ARC_X_R(c, 20)) == 0) goto L_fc794;
  /* fc7f4: cmp x21, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(9));
  /* fc7f8: b.lt #0xfc794 */
  if (ARC_COND(c, 11)) goto L_fc794;
  /* fc7fc: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* fc800: strb wzr, [x19, #0xa1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(161)), ARC_W_R(c, 31));
  /* fc804: b #0xfc7c8 */
  goto L_fc7c8;
}

void fn1_ff530(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038973744));
  /* ff530: bti c */
  /* bti: no architectural effect here */
  /* ff534: ret  */
  return;
}

void fn1_10f614(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039039508));
  /* 10f614: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10f618: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10f61c: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10f620: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10f624: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10f628: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 10f62c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 10f630: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 10f634: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 10f638: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 10f63c: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 10f640: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 10f644: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 10f648: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 10f64c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1111632));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10f650: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 10f654: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 10f658: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 10f65c: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 10f660: ldp x11, x10, [x8, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10f664: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 10f668: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 10f66c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10f670: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 10f674: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 10f678: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* 10f67c: csinc x6, x10, x8, ne */
  ARC_X_W(c, 6, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* 10f680: csel x8, x12, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* 10f684: add x7, x6, x8 */
  ARC_X_W(c, 7, (ARC_X_R(c, 6) + ARC_X_R(c, 8)));
  /* 10f688: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10f68c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10f690: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10f694: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10f698: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10f69c: b #0x143958 */
  fn1_143958(c); return;
}

void fn1_113c68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057512));
  /* 113c68: bti c */
  /* bti: no architectural effect here */
  /* 113c6c: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 113c70: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 113c74: ret  */
  return;
}

void fn1_116440(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039067712));
  /* 116440: bti c */
  /* bti: no architectural effect here */
  /* 116444: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* 116448: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 11644c: sub x12, x2, x1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 116450: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 116454: ands w11, w9, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 11, _r); }
  /* 116458: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 11645c: cmp x12, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(5));
  /* 116460: b.lt #0x116620 */
  if (ARC_COND(c, 11)) goto L_116620;
  /* 116464: cbz x8, #0x116620 */
  if ((ARC_X_R(c, 8)) == 0) goto L_116620;
  /* 116468: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 11646c: sub x8, x2, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) - UINT64_C(4)));
  /* 116470: b.eq #0x116594 */
  if (ARC_COND(c, 0)) goto L_116594;
  /* 116474: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 116478: b.hs #0x116594 */
  if (ARC_COND(c, 2)) goto L_116594;
  /* 11647c: sub x13, x2, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 2) - UINT64_C(8)));
  /* 116480: add x11, x1, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* 116484: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* 116488: csel x9, x13, x11, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 11)));
  /* 11648c: sub x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(4)));
  /* 116490: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* 116494: cinc x10, x1, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 1)) + 1 : (ARC_X_R(c, 1))));
  /* 116498: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* 11649c: sub x10, x9, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* 1164a0: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* 1164a4: lsr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63)));
  /* 1164a8: cinc x12, x10, ne */
  ARC_X_W(c, 12, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1164ac: mov x10, x1 */
  ARC_X_W(c, 10, ARC_X_R(c, 1));
  /* 1164b0: cmp x12, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(19));
  /* 1164b4: b.lo #0x11656c */
  if (ARC_COND(c, 3)) goto L_11656c;
  /* 1164b8: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* 1164bc: csel x9, x13, x11, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 11)));
  /* 1164c0: sub x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(4)));
  /* 1164c4: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* 1164c8: cinc x10, x1, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 1)) + 1 : (ARC_X_R(c, 1))));
  /* 1164cc: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* 1164d0: sub x10, x9, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* 1164d4: lsr x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63)));
  /* 1164d8: cinc x9, x10, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1164dc: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 1164e0: b.hs #0x116504 */
  if (ARC_COND(c, 2)) goto L_116504;
  /* 1164e4: lsl x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(2)) & 63)));
  /* 1164e8: sub x10, x2, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 2) - ARC_X_R(c, 9)));
  /* 1164ec: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 1164f0: sub x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(4)));
  /* 1164f4: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 1164f8: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* 1164fc: mov x10, x1 */
  ARC_X_W(c, 10, ARC_X_R(c, 1));
  /* 116500: b.lo #0x11656c */
  if (ARC_COND(c, 3)) goto L_11656c;
L_116504:;
  /* 116504: add x11, x12, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* 116508: add x13, x1, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 11650c: sub x14, x2, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 2) - UINT64_C(16)));
  /* 116510: and x12, x11, #0x7ffffffffffffff8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) & UINT64_C(9223372036854775800)));
  /* 116514: lsl x10, x12, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(2)) & 63)));
  /* 116518: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
  /* 11651c: sub x9, x8, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 116520: add x10, x1, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) + ARC_X_R(c, 10)));
L_116524:;
  /* 116524: ldp q1, q0, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 116528: sub x15, x15, #8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(8)));
  /* 11652c: ldp q2, q3, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 116530: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 116534: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 116538: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 11653c: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 116540: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 116544: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 116548: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 11654c: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 116550: stp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 116554: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 116558: stp q3, q2, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 11655c: sub x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(32)));
  /* 116560: cbnz x15, #0x116524 */
  if ((ARC_X_R(c, 15)) != 0) goto L_116524;
  /* 116564: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* 116568: b.eq #0x11658c */
  if (ARC_COND(c, 0)) goto L_11658c;
L_11656c:;
  /* 11656c: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_116570:;
  /* 116570: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
  /* 116574: ldur w12, [x10, #-4] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 116578: stur w11, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 11));
  /* 11657c: str w12, [x9], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* 116580: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 116584: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 116588: b.lo #0x116570 */
  if (ARC_COND(c, 3)) goto L_116570;
L_11658c:;
  /* 11658c: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* 116590: and w11, w9, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) & UINT64_C(1)));
L_116594:;
  /* 116594: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 116598: cmp w11, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(0));
  /* 11659c: csinc x10, x10, x0, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 0)) + 1)));
  /* 1165a0: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 1165a4: b.hs #0x1165f8 */
  if (ARC_COND(c, 2)) goto L_1165f8;
  /* 1165a8: lsr w9, w9, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(1)) & 31)));
  /* 1165ac: ldr x12, [x0, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1165b0: cmp w11, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(0));
  /* 1165b4: csel x9, x9, x12, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 12)));
  /* 1165b8: add x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* 1165bc: b #0x1165d8 */
  goto L_1165d8;
L_1165c0:;
  /* 1165c0: sub x11, x9, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
  /* 1165c4: add x1, x1, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4)));
  /* 1165c8: cmp x11, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(1));
  /* 1165cc: cinc x10, x10, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 1165d0: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 1165d4: b.hs #0x1165f8 */
  if (ARC_COND(c, 2)) goto L_1165f8;
L_1165d8:;
  /* 1165d8: ldrb w11, [x10] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 10)));
  /* 1165dc: cbz w11, #0x1165c0 */
  if ((ARC_W_R(c, 11)) == 0) goto L_1165c0;
  /* 1165e0: cmp w11, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(255));
  /* 1165e4: b.eq #0x1165c0 */
  if (ARC_COND(c, 0)) goto L_1165c0;
  /* 1165e8: ldr w12, [x1] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 1)));
  /* 1165ec: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* 1165f0: b.eq #0x1165c0 */
  if (ARC_COND(c, 0)) goto L_1165c0;
  /* 1165f4: b #0x116618 */
  goto L_116618;
L_1165f8:;
  /* 1165f8: ldrb w9, [x10] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 10)));
  /* 1165fc: cbz w9, #0x116620 */
  if ((ARC_W_R(c, 9)) == 0) goto L_116620;
  /* 116600: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 116604: b.eq #0x116620 */
  if (ARC_COND(c, 0)) goto L_116620;
  /* 116608: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 11660c: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 116610: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 116614: b.lo #0x116620 */
  if (ARC_COND(c, 3)) goto L_116620;
L_116618:;
  /* 116618: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 11661c: str w8, [x3] */
  arc_st32(ARC_X_R(c, 3), ARC_W_R(c, 8));
L_116620:;
  /* 116620: ret  */
  return;
}

void fn1_124670(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039125616));
  /* 124670: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 124674: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 124678: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 12467c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 124680: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 124684: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 124688: ldp x0, x8, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12468c: cmp x8, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0));
  /* 124690: adrp x8, #0x14e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1368064)));
  /* 124694: add x8, x8, #0x248 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(584)));
  /* 124698: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12469c: b.eq #0x1246f0 */
  if (ARC_COND(c, 0)) goto L_1246f0;
  /* 1246a0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 1246a4: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* 1246a8: b #0x1246c4 */
  goto L_1246c4;
L_1246ac:;
  /* 1246ac: ldp x0, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1246b0: mov w8, w21 */
  ARC_W_W(c, 8, ARC_W_R(c, 21));
  /* 1246b4: add w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) + UINT64_C(1)));
  /* 1246b8: sub x9, x9, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* 1246bc: cmp x8, x9, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 3)));
  /* 1246c0: b.hs #0x1246f0 */
  if (ARC_COND(c, 2)) goto L_1246f0;
L_1246c4:;
  /* 1246c4: ldr x20, [x0, x8, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 1246c8: cbz x20, #0x1246ac */
  if ((ARC_X_R(c, 20)) == 0) goto L_1246ac;
  /* 1246cc: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1246d0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1246d4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197784));
  fn1_bd950(c);
  /* 1246d8: cbnz x0, #0x1246ac */
  if ((ARC_X_R(c, 0)) != 0) goto L_1246ac;
  /* 1246dc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1246e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1246e4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1246e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197804));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1246ec: b #0x1246ac */
  goto L_1246ac;
L_1246f0:;
  /* 1246f0: ldrb w8, [x19, #0x120] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(288))));
  /* 1246f4: tbz w8, #0, #0x12470c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12470c;
  /* 1246f8: ldr x8, [x19, #0x120] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(288))));
  /* 1246fc: ldr x0, [x19, #0x130] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(304))));
  /* 124700: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 124704: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1197832));
  fn1_142608(c);
  /* 124708: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
L_12470c:;
  /* 12470c: cbz x0, #0x124740 */
  if ((ARC_X_R(c, 0)) == 0) goto L_124740;
  /* 124710: add x8, x19, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* 124714: str x0, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 0));
  /* 124718: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 12471c: b.eq #0x12473c */
  if (ARC_COND(c, 0)) goto L_12473c;
  /* 124720: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 124724: sub x1, x8, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* 124728: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12472c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 124730: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 124734: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124738: b #0x142608 */
  fn1_142608(c); return;
L_12473c:;
  /* 12473c: strb wzr, [x19, #0x118] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(280)), ARC_W_R(c, 31));
L_124740:;
  /* 124740: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 124744: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 124748: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12474c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 124750: ret  */
  return;
}

void fn1_127244(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039136836));
  /* 127244: bti c */
  /* bti: no architectural effect here */
  /* 127248: and w8, w1, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(255)));
  /* 12724c: orr w9, w1, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) | UINT64_C(32)));
  /* 127250: sub w8, w8, #0x5b */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(91)));
  /* 127254: cmn w8, #0x1a */
  (void)arc_add32(c, ARC_W_R(c, 8), UINT64_C(26), 0);
  /* 127258: csel w0, w1, w9, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 1)) : ARC_W_R(c, 9)));
  /* 12725c: ret  */
  return;
}

void fn1_1299c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039146948));
  /* 1299c4: bti c */
  /* bti: no architectural effect here */
  /* 1299c8: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 1299cc: ret  */
  return;
}

void fn1_12afc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039152576));
  /* 12afc0: bti c */
  /* bti: no architectural effect here */
  /* 12afc4: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12afc8: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 12afcc: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12afd0: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12afd4: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12afd8: ret  */
  return;
}

void fn1_12c7ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039158700));
  /* 12c7ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12c7b0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c7b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c7b8: nop  */
  /* nop: no architectural effect here */
  /* 12c7bc: adr x8, #0x15de48 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433160)));
  /* 12c7c0: ldarb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 12c7c4: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c7c8: tbz w9, #0, #0x12c7dc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_12c7dc;
L_12c7cc:;
  /* 12c7cc: ldr x0, [x8, #0xe40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 12c7d0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c7d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12c7d8: ret  */
  return;
L_12c7dc:;
  /* 12c7dc: nop  */
  /* nop: no architectural effect here */
  /* 12c7e0: adr x0, #0x15de48 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433160)));
  /* 12c7e4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230824));
  fn1_1424b8(c);
  /* 12c7e8: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c7ec: cbz w0, #0x12c7cc */
  if ((ARC_W_R(c, 0)) == 0) goto L_12c7cc;
  /* 12c7f0: bl #0x12c818 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230836));
  fn1_12c818(c);
  /* 12c7f4: nop  */
  /* nop: no architectural effect here */
  /* 12c7f8: adr x9, #0x15df40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1433408)));
  /* 12c7fc: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c800: nop  */
  /* nop: no architectural effect here */
  /* 12c804: adr x0, #0x15de48 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433160)));
  /* 12c808: str x9, [x8, #0xe40] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3648)), ARC_X_R(c, 9));
  /* 12c80c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1230864));
  fn1_1424d0(c);
  /* 12c810: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12c814: b #0x12c7cc */
  goto L_12c7cc;
}

void fn1_1349c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192004));
  /* 1349c4: bti c */
  /* bti: no architectural effect here */
  /* 1349c8: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 1349cc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_135104(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193860));
  /* 135104: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 135108: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13510c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135110: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 135114: add x0, x0, #0x8c9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2249)));
  /* 135118: bl #0xd7d6c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265948));
  fn1_d7d6c(c);
}

void fn1_1381f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206384));
  /* 1381f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1381f4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1381f8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1381fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138200: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138204: ldr x8, [x8, #0xe48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3656))));
  /* 138208: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 13820c: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* 138210: add x19, x0, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* 138214: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138218: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 13821c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138220: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 138224: str x9, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 138228: str x8, [x20, #0x70]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(112));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(112));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 13822c: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278512));
  fn1_144558(c);
  /* 138230: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 138234: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278520));
  fn1_1433b8(c);
  /* 138238: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13823c: mov w1, #0x108 */
  ARC_W_W(c, 1, UINT64_C(264));
  /* 138240: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 138244: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138248: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13824c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13c068(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039222376));
  /* 13c068: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13c06c: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 13c070: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13c074: str x21, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 21));
  /* 13c078: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13c07c: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 13c080: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13c084: nop  */
  /* nop: no architectural effect here */
  /* 13c088: adr x8, #0x51922 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(334114)));
  /* 13c08c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13c090: stp x8, x1, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13c094: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13c098: stp xzr, xzr, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13c09c: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 13c0a0: stp x0, x8, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13c0a4: cbz x1, #0x13c0c8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13c0c8;
  /* 13c0a8: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 13c0ac: nop  */
  /* nop: no architectural effect here */
  /* 13c0b0: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c0b4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13c0b8: tbz w8, #0, #0x13c1a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c1a4;
L_13c0bc:;
  /* 13c0bc: nop  */
  /* nop: no architectural effect here */
  /* 13c0c0: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13c0c4: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
L_13c0c8:;
  /* 13c0c8: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 13c0cc: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13c0d0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 13c0d4: add x20, sp, #0x10 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(16)));
  /* 13c0d8: bl #0x13beb4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294556));
  fn1_13beb4(c);
  /* 13c0dc: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13c0e0: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13c0e4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 13c0e8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13c0ec: csinc x0, x9, x20, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 13c0f0: bl #0x144780 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294580));
  fn1_144780(c);
  /* 13c0f4: cbz x0, #0x13c128 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13c128;
  /* 13c0f8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13c0fc: sub x2, x0, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 0) - UINT64_C(1)));
  /* 13c100: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13c104: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
L_13c108:;
  /* 13c108: ldrb w8, [x2, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 2) + INT64_C(1));
    ARC_X_W(c, 2, ARC_X_R(c, 2) + INT64_C(1));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* 13c10c: cbnz w8, #0x13c108 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13c108;
  /* 13c110: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13c114: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13c118: bl #0xda784 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294620));
  fn1_da784(c);
  /* 13c11c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13c120: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294628));
  fn1_142800(c);
  /* 13c124: b #0x13c15c */
  goto L_13c15c;
L_13c128:;
  /* 13c128: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294636));
  fn1_142a58(c);
  /* 13c12c: nop  */
  /* nop: no architectural effect here */
  /* 13c130: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c134: ldr w20, [x0] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 0)));
  /* 13c138: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13c13c: tbz w8, #0, #0x13c1d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c1d8;
L_13c140:;
  /* 13c140: nop  */
  /* nop: no architectural effect here */
  /* 13c144: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13c148: stp x20, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13c14c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 13c150: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13c154: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 13c158: bl #0x13c27c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294684));
  fn1_13c27c(c);
L_13c15c:;
  /* 13c15c: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13c160: tbz w8, #0, #0x13c174 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c174;
  /* 13c164: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13c168: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13c16c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c170: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294708));
  fn1_142608(c);
L_13c174:;
  /* 13c174: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 13c178: tbz w8, #0, #0x13c18c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c18c;
  /* 13c17c: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 13c180: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 13c184: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c188: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294732));
  fn1_142608(c);
L_13c18c:;
  /* 13c18c: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13c190: ldr x21, [sp, #0x70] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(112))));
  /* 13c194: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13c198: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 13c19c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13c1a0: ret  */
  return;
L_13c1a4:;
  /* 13c1a4: nop  */
  /* nop: no architectural effect here */
  /* 13c1a8: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c1ac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13c1b0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13c1b4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294776));
  fn1_1424b8(c);
  /* 13c1b8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 13c1bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13c1c0: cbz w8, #0x13c0bc */
  if ((ARC_W_R(c, 8)) == 0) goto L_13c0bc;
  /* 13c1c4: nop  */
  /* nop: no architectural effect here */
  /* 13c1c8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13c1cc: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294800));
  fn1_1424d0(c);
  /* 13c1d0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13c1d4: b #0x13c0bc */
  goto L_13c0bc;
L_13c1d8:;
  /* 13c1d8: nop  */
  /* nop: no architectural effect here */
  /* 13c1dc: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c1e0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294820));
  fn1_1424b8(c);
  /* 13c1e4: cbz w0, #0x13c140 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13c140;
  /* 13c1e8: nop  */
  /* nop: no architectural effect here */
  /* 13c1ec: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13c1f0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294836));
  fn1_1424d0(c);
  /* 13c1f4: b #0x13c140 */
  goto L_13c140;
  /* 13c1f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13c1fc: b #0x13c224 */
  goto L_13c224;
  /* 13c200: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 13c204: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13c208: tbz w8, #0, #0x13c21c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c21c;
  /* 13c20c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13c210: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 13c214: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c218: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294876));
  fn1_142608(c);
L_13c21c:;
  /* 13c21c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13c220: bl #0x142800 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294884));
  fn1_142800(c);
L_13c224:;
  /* 13c224: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 13c228: tbnz w8, #0, #0x13c23c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13c23c;
  /* 13c22c: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 13c230: tbnz w8, #0, #0x13c264 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13c264;
L_13c234:;
  /* 13c234: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13c238: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294908));
  fn1_9cc20(c);
L_13c23c:;
  /* 13c23c: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13c240: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13c244: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c248: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294924));
  fn1_142608(c);
  /* 13c24c: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 13c250: tbz w8, #0, #0x13c234 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c234;
  /* 13c254: b #0x13c264 */
  goto L_13c264;
  /* 13c258: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13c25c: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 13c260: tbz w8, #0, #0x13c234 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13c234;
L_13c264:;
  /* 13c264: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 13c268: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 13c26c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13c270: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294964));
  fn1_142608(c);
  /* 13c274: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13c278: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1294972));
  fn1_9cc20(c);
}

void fn1_1424e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248104));
  /* 1424e8: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1424ec: ldr x17, [x16, #0xed8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3800))));
  /* 1424f0: add x16, x16, #0xed8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3800)));
  /* 1424f4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1424f8: nop  */
  /* nop: no architectural effect here */
  /* 1424fc: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ae8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249640));
  /* 142ae8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142aec: ldr x17, [x16, #0xd8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(216))));
  /* 142af0: add x16, x16, #0xd8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(216)));
  /* 142af4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142af8: nop  */
  /* nop: no architectural effect here */
  /* 142afc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1430e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251176));
  /* 1430e8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1430ec: ldr x17, [x16, #0x2d8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(728))));
  /* 1430f0: add x16, x16, #0x2d8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(728)));
  /* 1430f4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1430f8: nop  */
  /* nop: no architectural effect here */
  /* 1430fc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1436e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252712));
  /* 1436e8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1436ec: ldr x17, [x16, #0x4d8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1240))));
  /* 1436f0: add x16, x16, #0x4d8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1240)));
  /* 1436f4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1436f8: nop  */
  /* nop: no architectural effect here */
  /* 1436fc: nop  */
  /* nop: no architectural effect here */
}

void fn1_143ce8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254248));
  /* 143ce8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143cec: ldr x17, [x16, #0x6d8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1752))));
  /* 143cf0: add x16, x16, #0x6d8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1752)));
  /* 143cf4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143cf8: nop  */
  /* nop: no architectural effect here */
  /* 143cfc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1442e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255784));
  /* 1442e8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1442ec: ldr x17, [x16, #0x8d8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2264))));
  /* 1442f0: add x16, x16, #0x8d8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2264)));
  /* 1442f4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1442f8: nop  */
  /* nop: no architectural effect here */
  /* 1442fc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1448e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257320));
  /* 1448e8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1448ec: ldr x17, [x16, #0xad8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2776))));
  /* 1448f0: add x16, x16, #0xad8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2776)));
  /* 1448f4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1448f8: nop  */
  /* nop: no architectural effect here */
  /* 1448fc: nop  */
  /* nop: no architectural effect here */
}

