#include "lifted.h"

void fn1_9c8a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038569120));
  /* 9c8a0: bti c */
  /* bti: no architectural effect here */
  /* 9c8a4: cbz x0, #0x9c8b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_9c8b0;
  /* 9c8a8: mov x16, x0 */
  ARC_X_W(c, 16, ARC_X_R(c, 0));
  /* 9c8ac: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_9c8b0:;
  /* 9c8b0: ret  */
  return;
}

void fn1_a113c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038587708));
  /* a113c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1140: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1144: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1148: nop  */
  /* nop: no architectural effect here */
  /* a114c: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* a1150: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659796));
  fn1_144ac8(c);
  /* a1154: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1158: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a115c: ret  */
  return;
}

void fn1_a2664(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593124));
  /* a2664: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a2668: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a266c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a2670: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2674: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a2678: sub x20, x0, #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) - UINT64_C(4)));
  /* a267c: nop  */
  /* nop: no architectural effect here */
  /* a2680: adr x0, #0x1576b0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406640)));
  /* a2684: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665224));
  fn1_142518(c);
  /* a2688: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a268c: ldr x9, [x8, #0x6d8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(1752))));
  /* a2690: cbz x9, #0xa26ec */
  if ((ARC_X_R(c, 9)) == 0) goto L_a26ec;
  /* a2694: adrp x10, #0x157000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a2698: add x10, x10, #0x8e0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2272)));
  /* a269c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* a26a0: b.eq #0xa26ec */
  if (ARC_COND(c, 0)) goto L_a26ec;
  /* a26a4: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* a26a8: nop  */
  /* nop: no architectural effect here */
  /* a26ac: adr x12, #0x1576e0 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(1406688)));
  /* a26b0: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
L_a26b4:;
  /* a26b4: ldrh w13, [x11, #2] */
  ARC_W_W(c, 13, arc_ld16((ARC_X_R(c, 11) + INT64_C(2))));
  /* a26b8: add x14, x11, x13, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 13)) << 2)));
  /* a26bc: cmp x14, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 20));
  /* a26c0: b.eq #0xa2708 */
  if (ARC_COND(c, 0)) goto L_a2708;
  /* a26c4: ldurh w14, [x19, #-2] */
  ARC_W_W(c, 14, arc_ld16((ARC_X_R(c, 19) + INT64_C(-2))));
  /* a26c8: add x15, x20, x14, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* a26cc: cmp x15, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 11));
  /* a26d0: b.eq #0xa2718 */
  if (ARC_COND(c, 0)) goto L_a2718;
  /* a26d4: ldrh w10, [x11] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 11)));
  /* a26d8: add x13, x12, x10, lsl #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* a26dc: cmp x10, #0x80 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(128));
  /* a26e0: mov x10, x11 */
  ARC_X_W(c, 10, ARC_X_R(c, 11));
  /* a26e4: mov x11, x13 */
  ARC_X_W(c, 11, ARC_X_R(c, 13));
  /* a26e8: b.ne #0xa26b4 */
  if (ARC_COND(c, 1)) goto L_a26b4;
L_a26ec:;
  /* a26ec: nop  */
  /* nop: no architectural effect here */
  /* a26f0: adr x10, #0x1576e0 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1406688)));
  /* a26f4: str x20, [x8, #0x6d8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(1752)), ARC_X_R(c, 20));
  /* a26f8: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* a26fc: lsr w9, w9, #2 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(2)) & 31)));
  /* a2700: strh w9, [x20] */
  arc_st16(ARC_X_R(c, 20), ARC_W_R(c, 9));
  /* a2704: b #0xa2748 */
  goto L_a2748;
L_a2708:;
  /* a2708: ldurh w8, [x19, #-2] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 19) + INT64_C(-2))));
  /* a270c: add w8, w8, w13 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ARC_W_R(c, 13)));
  /* a2710: strh w8, [x11, #2] */
  arc_st16((ARC_X_R(c, 11) + INT64_C(2)), ARC_W_R(c, 8));
  /* a2714: b #0xa2748 */
  goto L_a2748;
L_a2718:;
  /* a2718: add w9, w14, w13 */
  ARC_W_W(c, 9, (ARC_W_R(c, 14) + ARC_W_R(c, 13)));
  /* a271c: sturh w9, [x19, #-2] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(-2)), ARC_W_R(c, 9));
  /* a2720: cbz x10, #0xa273c */
  if ((ARC_X_R(c, 10)) == 0) goto L_a273c;
  /* a2724: nop  */
  /* nop: no architectural effect here */
  /* a2728: adr x8, #0x1576e0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1406688)));
  /* a272c: sub w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) - ARC_W_R(c, 8)));
  /* a2730: lsr w8, w8, #2 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(2)) & 31)));
  /* a2734: strh w8, [x10] */
  arc_st16(ARC_X_R(c, 10), ARC_W_R(c, 8));
  /* a2738: b #0xa2748 */
  goto L_a2748;
L_a273c:;
  /* a273c: ldrh w9, [x11] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 11)));
  /* a2740: str x20, [x8, #0x6d8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(1752)), ARC_X_R(c, 20));
  /* a2744: strh w9, [x20] */
  arc_st16(ARC_X_R(c, 20), ARC_W_R(c, 9));
L_a2748:;
  /* a2748: nop  */
  /* nop: no architectural effect here */
  /* a274c: adr x0, #0x1576b0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406640)));
  /* a2750: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665428));
  fn1_142560(c);
  /* a2754: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a2758: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a275c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a2760: ret  */
  return;
  /* a2764: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665448));
  fn1_a1454(c);
}

void fn1_a8688(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038617736));
  /* a8688: bti c */
  /* bti: no architectural effect here */
  /* a868c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a8690: ret  */
  return;
}

void fn1_aee48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038644296));
  /* aee48: bti c */
  /* bti: no architectural effect here */
  /* aee4c: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* aee50: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b39b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038663600));
  /* b39b0: bti c */
  /* bti: no architectural effect here */
  /* b39b4: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b39b8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b76f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038679284));
  /* b76f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b76f8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b76fc: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7700: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7704: ldp x8, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b7708: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b770c: ldr w11, [x1, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* b7710: ldr x0, [x1] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* b7714: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7718: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b771c: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b7720: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b7724: str w11, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 11));
  /* b7728: b.ls #0xb7754 */
  if (ARC_COND(c, 9)) goto L_b7754;
  /* b772c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b7730: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b7734: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b7738: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b773c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b7740: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751428));
  fn1_142878(c);
  /* b7744: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b7748: cbz x0, #0xb77d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b77d0;
  /* b774c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b7750: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b7754:;
  /* b7754: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b7758: mov w9, #0x5b */
  ARC_W_W(c, 9, UINT64_C(91));
  /* b775c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b7760: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b7764: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* b7768: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751468));
  fn1_afa48(c);
  /* b776c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b7770: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b7774: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b7778: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b777c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b7780: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b7784: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b7788: b.ls #0xb77b4 */
  if (ARC_COND(c, 9)) goto L_b77b4;
  /* b778c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b7790: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b7794: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b7798: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b779c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b77a0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751524));
  fn1_142878(c);
  /* b77a4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b77a8: cbz x0, #0xb77d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b77d4;
  /* b77ac: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b77b0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b77b4:;
  /* b77b4: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b77b8: mov w9, #0x5d */
  ARC_W_W(c, 9, UINT64_C(93));
  /* b77bc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b77c0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b77c4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b77c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b77cc: ret  */
  return;
L_b77d0:;
  /* b77d0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751572));
  fn1_1427b8(c);
L_b77d4:;
  /* b77d4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751576));
  fn1_1427b8(c);
}

void fn1_ba18c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038690188));
  /* ba18c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ba190: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ba194: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ba198: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ba19c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ba1a0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ba1a4: ldp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ba1a8: sub x10, x8, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* ba1ac: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* ba1b0: b.lo #0xba1c4 */
  if (ARC_COND(c, 3)) goto L_ba1c4;
  /* ba1b4: ldrh w10, [x9] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 9)));
  /* ba1b8: mov w11, #0x7644 */
  ARC_W_W(c, 11, UINT64_C(30276));
  /* ba1bc: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* ba1c0: b.eq #0xba1e0 */
  if (ARC_COND(c, 0)) goto L_ba1e0;
L_ba1c4:;
  /* ba1c4: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_ba1c8:;
  /* ba1c8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba1cc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ba1d0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba1d4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ba1d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba1dc: ret  */
  return;
L_ba1e0:;
  /* ba1e0: add x20, x9, #2 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ba1e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ba1e8: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* ba1ec: str x20, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* ba1f0: b.eq #0xba374 */
  if (ARC_COND(c, 0)) goto L_ba374;
  /* ba1f4: ldrb w10, [x20] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 20)));
  /* ba1f8: cmp w10, #0x31 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(49));
  /* ba1fc: b.lo #0xba374 */
  if (ARC_COND(c, 3)) goto L_ba374;
  /* ba200: cmp w10, #0x39 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(57));
  /* ba204: b.hi #0xba2fc */
  if (ARC_COND(c, 8)) goto L_ba2fc;
  /* ba208: add x21, x9, #2 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ba20c: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_ba210:;
  /* ba210: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* ba214: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* ba218: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* ba21c: b.lo #0xba238 */
  if (ARC_COND(c, 3)) goto L_ba238;
  /* ba220: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ba224: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* ba228: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ba22c: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* ba230: b.ne #0xba210 */
  if (ARC_COND(c, 1)) goto L_ba210;
  /* ba234: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
L_ba238:;
  /* ba238: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ba23c: ldr x9, [x22, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ba240: sub x8, x9, #0xfd0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - UINT64_C(4048)));
  /* ba244: cmn x8, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(4081), 0);
  /* ba248: b.hi #0xba270 */
  if (ARC_COND(c, 8)) goto L_ba270;
  /* ba24c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba250: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762452));
  fn1_1428a8(c);
  /* ba254: cbz x0, #0xba43c */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba43c;
  /* ba258: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* ba25c: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* ba260: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba264: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ba268: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ba26c: str x8, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 8));
L_ba270:;
  /* ba270: add x8, x9, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(32)));
  /* ba274: add x10, x22, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 22) + ARC_X_R(c, 9)));
  /* ba278: mov w9, #0x540 */
  ARC_W_W(c, 9, UINT64_C(1344));
  /* ba27c: str x8, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 8));
  /* ba280: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* ba284: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* ba288: str x8, [x10, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(16));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ba28c: ldurh w8, [x10, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 10) + INT64_C(9))));
  /* ba290: str x20, [x10, #0x10] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(16)), ARC_X_R(c, 20));
  /* ba294: sub x11, x21, x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* ba298: mov w12, #8 */
  ARC_W_W(c, 12, UINT64_C(8));
  /* ba29c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ba2a0: strb w12, [x10, #8] */
  arc_st8((ARC_X_R(c, 10) + INT64_C(8)), ARC_W_R(c, 12));
  /* ba2a4: orr w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 9)));
  /* ba2a8: str x11, [x10, #0x18] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(24)), ARC_X_R(c, 11));
  /* ba2ac: sturh w8, [x10, #9] */
  arc_st16((ARC_X_R(c, 10) + INT64_C(9)), ARC_W_R(c, 8));
  /* ba2b0: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ba2b4: str x10, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 10));
  /* ba2b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ba2bc: b.eq #0xba1c4 */
  if (ARC_COND(c, 0)) goto L_ba1c4;
  /* ba2c0: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* ba2c4: cmp w10, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(95));
  /* ba2c8: b.ne #0xba1c4 */
  if (ARC_COND(c, 1)) goto L_ba1c4;
  /* ba2cc: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ba2d0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* ba2d4: str x10, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 10));
  /* ba2d8: b.eq #0xba41c */
  if (ARC_COND(c, 0)) goto L_ba41c;
  /* ba2dc: ldrb w9, [x10] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 10)));
  /* ba2e0: cmp w9, #0x70 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(112));
  /* ba2e4: b.ne #0xba41c */
  if (ARC_COND(c, 1)) goto L_ba41c;
  /* ba2e8: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* ba2ec: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ba2f0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ba2f4: bl #0xbbb70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762616));
  fn1_bbb70(c);
  /* ba2f8: b #0xba1c8 */
  goto L_ba1c8;
L_ba2fc:;
  /* ba2fc: cmp w10, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(95));
  /* ba300: b.ne #0xba374 */
  if (ARC_COND(c, 1)) goto L_ba374;
  /* ba304: add x8, x9, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* ba308: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* ba30c: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762640));
  fn1_a52b0(c);
  /* ba310: cbz x0, #0xba1c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba1c8;
  /* ba314: ldr x21, [x19, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ba318: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ba31c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* ba320: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ba324: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ba328: b.hi #0xba348 */
  if (ARC_COND(c, 8)) goto L_ba348;
  /* ba32c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba330: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762676));
  fn1_1428a8(c);
  /* ba334: cbz x0, #0xba43c */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba43c;
  /* ba338: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ba33c: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba340: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ba344: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ba348:;
  /* ba348: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ba34c: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* ba350: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* ba354: add x8, x8, #0x580 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1408)));
  /* ba358: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba35c: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ba360: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ba364: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ba368: mov w9, #0x1d */
  ARC_W_W(c, 9, UINT64_C(29));
  /* ba36c: stp x20, xzr, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba370: b #0xba408 */
  goto L_ba408;
L_ba374:;
  /* ba374: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762744));
  fn1_aa69c(c);
  /* ba378: cbz x0, #0xba1c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba1c8;
  /* ba37c: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ba380: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ba384: b.eq #0xba1c4 */
  if (ARC_COND(c, 0)) goto L_ba1c4;
  /* ba388: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* ba38c: cmp w10, #0x5f */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(95));
  /* ba390: b.ne #0xba1c4 */
  if (ARC_COND(c, 1)) goto L_ba1c4;
  /* ba394: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ba398: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* ba39c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ba3a0: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* ba3a4: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762792));
  fn1_a52b0(c);
  /* ba3a8: cbz x0, #0xba1c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba1c8;
  /* ba3ac: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* ba3b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ba3b4: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ba3b8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* ba3bc: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ba3c0: b.hi #0xba3e0 */
  if (ARC_COND(c, 8)) goto L_ba3e0;
  /* ba3c4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba3c8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762828));
  fn1_1428a8(c);
  /* ba3cc: cbz x0, #0xba43c */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba43c;
  /* ba3d0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ba3d4: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba3d8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ba3dc: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_ba3e0:;
  /* ba3e0: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* ba3e4: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ba3e8: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* ba3ec: add x8, x8, #0x580 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1408)));
  /* ba3f0: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba3f4: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ba3f8: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ba3fc: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ba400: mov w9, #0x1d */
  ARC_W_W(c, 9, UINT64_C(29));
  /* ba404: stp x20, x21, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
L_ba408:;
  /* ba408: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ba40c: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ba410: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* ba414: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ba418: b #0xba1c8 */
  goto L_ba1c8;
L_ba41c:;
  /* ba41c: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762912));
  fn1_a52b0(c);
  /* ba420: str x0, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 0));
  /* ba424: cbz x0, #0xba1c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba1c8;
  /* ba428: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* ba42c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* ba430: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ba434: bl #0xbbc10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762936));
  fn1_bbc10(c);
  /* ba438: b #0xba1c8 */
  goto L_ba1c8;
L_ba43c:;
  /* ba43c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762944));
  fn1_142488(c);
}

void fn1_bd858(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704216));
  /* bd858: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bd85c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd860: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bd864: bl #0x142590 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776296));
  fn1_142590(c);
L_bd868:;
  /* bd868: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd86c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd870: ret  */
  return;
  /* bd874: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776312));
  fn1_142548(c);
  /* bd878: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776316));
  fn1_142980(c);
  /* bd87c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* bd880: b #0xbd868 */
  goto L_bd868;
  /* bd884: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776328));
  fn1_a1454(c);
}

void fn1_ca9cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038757836));
  /* ca9cc: bti c */
  /* bti: no architectural effect here */
  /* ca9d0: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* ca9d4: mov w8, #0x7e */
  ARC_W_W(c, 8, UINT64_C(126));
  /* ca9d8: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* ca9dc: asr x9, x9, #3 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* ca9e0: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* ca9e4: sub x2, x8, x9, lsl #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ((uint64_t)(ARC_X_R(c, 9)) << 1)));
  /* ca9e8: b #0xca9ec */
  fn1_ca9ec(c); return;
}

void fn1_d7390(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809488));
  /* d7390: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d7394: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d7398: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* d739c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d73a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* d73a4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* d73a8: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* d73ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881584));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* d73b0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* d73b4: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* d73b8: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d73bc: ccmp w9, w0, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 0)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* d73c0: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d73c4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d73c8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d73cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d73d0: ret  */
  return;
}

void fn1_db38c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825868));
  /* db38c: bti c */
  /* bti: no architectural effect here */
  /* db390: ret  */
  return;
}

void fn1_dc604(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038830596));
  /* dc604: bti c */
  /* bti: no architectural effect here */
  /* dc608: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* dc60c: b #0x142c80 */
  fn1_142c80(c); return;
}

void fn1_e1a50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038852176));
  /* e1a50: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1a54: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1a58: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* e1a5c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1a60: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1a64: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1a68: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e1a6c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* e1a70: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e1a74: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924280));
  fn1_142860(c);
  /* e1a78: ldp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* e1a7c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e1a80: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e1a84: and x11, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e1a88: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e1a8c: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* e1a90: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* e1a94: ubfx x12, x8, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* e1a98: csel x1, x9, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* e1a9c: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e1aa0: csel x22, x12, x10, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* e1aa4: sub x9, x1, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 22)));
  /* e1aa8: cmp x9, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* e1aac: b.hs #0xe1ad8 */
  if (ARC_COND(c, 2)) goto L_e1ad8;
  /* e1ab0: sub x8, x21, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 1)));
  /* e1ab4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e1ab8: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* e1abc: add x2, x8, x22 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* e1ac0: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* e1ac4: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e1ac8: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* e1acc: mov x7, x20 */
  ARC_X_W(c, 7, ARC_X_R(c, 20));
  /* e1ad0: bl #0x142b90 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924372));
  fn1_142b90(c);
  /* e1ad4: b #0xe1b18 */
  goto L_e1b18;
L_e1ad8:;
  /* e1ad8: cbz x21, #0xe1b18 */
  if ((ARC_X_R(c, 21)) == 0) goto L_e1b18;
  /* e1adc: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e1ae0: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e1ae4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e1ae8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* e1aec: csinc x23, x9, x19, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e1af0: add x0, x23, x22 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 22)));
  /* e1af4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924408));
  fn1_1449f0(c);
  /* e1af8: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e1afc: add x8, x22, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* e1b00: tbnz w9, #0, #0xe1b10 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e1b10;
  /* e1b04: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e1b08: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e1b0c: b #0xe1b14 */
  goto L_e1b14;
L_e1b10:;
  /* e1b10: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e1b14:;
  /* e1b14: strb wzr, [x23, x8] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_e1b18:;
  /* e1b18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e1b1c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1b20: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* e1b24: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e1b28: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1b2c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1b30: ret  */
  return;
}

void fn1_e4440(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038862912));
  /* e4440: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e4444: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e4448: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e444c: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* e4450: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e4454: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e4458: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e445c: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* e4460: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e4464: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* e4468: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* e446c: mov w8, #0x7473 */
  ARC_W_W(c, 8, UINT64_C(29811));
  /* e4470: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e4474: movk w8, #0x6c6f, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1819213824)));
  /* e4478: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e447c: strb wzr, [sp, #5] */
  arc_st8(((c)->sp + INT64_C(5)), ARC_W_R(c, 31));
  /* e4480: stur w8, [sp, #1] */
  arc_st32(((c)->sp + INT64_C(1)), ARC_W_R(c, 8));
  /* e4484: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e4488: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* e448c: csinc x20, x8, x0, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 0)) + 1)));
  /* e4490: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935060));
  fn1_142a58(c);
  /* e4494: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e4498: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e449c: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e44a0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e44a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e44a8: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* e44ac: bl #0x142e78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935088));
  fn1_142e78(c);
  /* e44b0: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e44b4: str w23, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 23));
  /* e44b8: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e44bc: b.eq #0xe4500 */
  if (ARC_COND(c, 0)) goto L_e4500;
  /* e44c0: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* e44c4: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e44c8: b.eq #0xe452c */
  if (ARC_COND(c, 0)) goto L_e452c;
  /* e44cc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e44d0: cbz x19, #0xe44d8 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e44d8;
  /* e44d4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e44d8:;
  /* e44d8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e44dc: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935136));
  fn1_142e00(c);
  /* e44e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e44e4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e44e8: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* e44ec: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e44f0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e44f4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e44f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e44fc: ret  */
  return;
L_e4500:;
  /* e4500: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* e4504: add x1, x1, #0xa7d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2685)));
  /* e4508: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* e450c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e4510: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* e4514: bl #0xe7974 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935192));
  fn1_e7974(c);
  /* e4518: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* e451c: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* e4520: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e4524: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e4528: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935212));
  fn1_da038(c);
L_e452c:;
  /* e452c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e4530: bl #0xe779c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935220));
  fn1_e779c(c);
  /* e4534: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e4538: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e453c: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935232));
  fn1_142e00(c);
  /* e4540: b #0xe4548 */
  goto L_e4548;
  /* e4544: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e4548:;
  /* e4548: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e454c: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935248));
  fn1_142e00(c);
  /* e4550: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4554: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(935256));
  fn1_9cc20(c);
}

void fn1_e8d20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038881568));
  /* e8d20: bti c */
  /* bti: no architectural effect here */
  /* e8d24: nop  */
  /* nop: no architectural effect here */
  /* e8d28: adr x0, #0x52537 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(337207)));
  /* e8d2c: ret  */
  return;
}

void fn1_eae08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889992));
  /* eae08: bti c */
  /* bti: no architectural effect here */
  /* eae0c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* eae10: stur q0, [x0, #0x49] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(73)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(73)) + 8, (c)->q[0].u64[1]);
  /* eae14: stp q0, q0, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eae18: stp q0, q0, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* eae1c: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
  /* eae20: ret  */
  return;
}

void fn1_eccf4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038897908));
  /* eccf4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eccf8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eccfc: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* ecd00: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ecd04: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ecd08: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ecd0c: ldr w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(8))));
  /* ecd10: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* ecd14: nop  */
  /* nop: no architectural effect here */
  /* ecd18: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ecd1c: ldr w10, [x0, #8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* ecd20: ldr x21, [x0, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* ecd24: str w8, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* ecd28: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* ecd2c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ecd30: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* ecd34: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ecd38: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* ecd3c: ldr x9, [x1, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(24))));
  /* ecd40: str w10, [x1, #8] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 10));
  /* ecd44: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* ecd48: ldr w8, [x1, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(32))));
  /* ecd4c: ldr x10, [x0, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* ecd50: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* ecd54: ldr w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* ecd58: str w8, [x0, #0x20] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* ecd5c: str w9, [x1, #0x20] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(32)), ARC_W_R(c, 9));
  /* ecd60: ldr w8, [x1, #0x24] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(36))));
  /* ecd64: ldr w9, [x0, #0x24] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(36))));
  /* ecd68: str x10, [x1, #0x18] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(24)), ARC_X_R(c, 10));
  /* ecd6c: str w8, [x0, #0x24] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(36)), ARC_W_R(c, 8));
  /* ecd70: str w9, [x1, #0x24] */
  arc_st32((ARC_X_R(c, 1) + INT64_C(36)), ARC_W_R(c, 9));
  /* ecd74: b.eq #0xecd84 */
  if (ARC_COND(c, 0)) goto L_ecd84;
  /* ecd78: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ecd7c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ecd80: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970116));
  fn1_db2e0(c);
L_ecd84:;
  /* ecd84: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* ecd88: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* ecd8c: b.eq #0xecd9c */
  if (ARC_COND(c, 0)) goto L_ecd9c;
  /* ecd90: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ecd94: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ecd98: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970140));
  fn1_db2e0(c);
L_ecd9c:;
  /* ecd9c: ldr x22, [x20, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* ecda0: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* ecda4: b.eq #0xecdc8 */
  if (ARC_COND(c, 0)) goto L_ecdc8;
  /* ecda8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* ecdac: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ecdb0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970164));
  fn1_bd950(c);
  /* ecdb4: cbnz x0, #0xecdc8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ecdc8;
  /* ecdb8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* ecdbc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ecdc0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ecdc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970184));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ecdc8:;
  /* ecdc8: ldr x22, [x19, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* ecdcc: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* ecdd0: str x22, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 22));
  /* ecdd4: b.eq #0xecde8 */
  if (ARC_COND(c, 0)) goto L_ecde8;
  /* ecdd8: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ecddc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ecde0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970212));
  fn1_db2e0(c);
  /* ecde4: ldr x22, [x19, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
L_ecde8:;
  /* ecde8: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* ecdec: b.eq #0xece10 */
  if (ARC_COND(c, 0)) goto L_ece10;
  /* ecdf0: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* ecdf4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ecdf8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970236));
  fn1_bd950(c);
  /* ecdfc: cbnz x0, #0xece10 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ece10;
  /* ece00: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* ece04: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ece08: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ece0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970256));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ece10:;
  /* ece10: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* ece14: str x21, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 21));
  /* ece18: b.eq #0xece3c */
  if (ARC_COND(c, 0)) goto L_ece3c;
  /* ece1c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ece20: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ece24: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970280));
  fn1_bd950(c);
  /* ece28: cbnz x0, #0xece3c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ece3c;
  /* ece2c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ece30: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ece34: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ece38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970300));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ece3c:;
  /* ece3c: ldr x8, [x19, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* ece40: ldr x9, [x20, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* ece44: str x8, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 8));
  /* ece48: str x9, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 9));
  /* ece4c: ldp x8, x9, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ece50: ldp x10, x11, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ece54: stp x8, x9, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* ece58: stp x10, x11, [x19, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* ece5c: ldp x8, x9, [x19, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(80));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ece60: ldp x10, x11, [x20, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(80));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ece64: stp x8, x9, [x20, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* ece68: str x10, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 10));
  /* ece6c: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* ece70: ldr x9, [x20, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(96))));
  /* ece74: str x8, [x20, #0x60] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(96)), ARC_X_R(c, 8));
  /* ece78: stp x11, x9, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* ece7c: ldp x8, x9, [x19, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(104));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ece80: ldp x10, x11, [x20, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(104));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ece84: stp x8, x9, [x20, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(104));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* ece88: str x10, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 10));
  /* ece8c: ldr x8, [x19, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* ece90: ldr x9, [x20, #0x78] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(120))));
  /* ece94: str x8, [x20, #0x78] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(120)), ARC_X_R(c, 8));
  /* ece98: stp x11, x9, [x19, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* ece9c: ldr x8, [x19, #0x80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(128))));
  /* ecea0: ldr x9, [x20, #0x80] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(128))));
  /* ecea4: str x8, [x20, #0x80] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(128)), ARC_X_R(c, 8));
  /* ecea8: str x9, [x19, #0x80] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(128)), ARC_X_R(c, 9));
  /* eceac: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eceb0: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* eceb4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* eceb8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ecebc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ecec0: ret  */
  return;
}

void fn1_eea74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038905460));
  /* eea74: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eea78: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* eea7c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eea80: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* eea84: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eea88: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* eea8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eea90: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* eea94: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* eea98: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* eea9c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* eeaa0: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* eeaa4: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977576));
  fn1_1435f8(c);
  /* eeaa8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* eeaac: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* eeab0: b.ne #0xeeb78 */
  if (ARC_COND(c, 1)) goto L_eeb78;
  /* eeab4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eeab8: nop  */
  /* nop: no architectural effect here */
  /* eeabc: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* eeac0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eeac4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eeac8: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* eeacc: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eead0: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* eead4: b.eq #0xeeae4 */
  if (ARC_COND(c, 0)) goto L_eeae4;
  /* eead8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eeadc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* eeae0: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977636));
  fn1_db2e0(c);
L_eeae4:;
  /* eeae4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* eeae8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* eeaec: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* eeaf0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977652));
  fn1_143748(c);
  /* eeaf4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eeaf8: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* eeafc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eeb00: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eeb04: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* eeb08: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* eeb0c: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* eeb10: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* eeb14: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* eeb18: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977692));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* eeb1c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eeb20: b.eq #0xeeb44 */
  if (ARC_COND(c, 0)) goto L_eeb44;
  /* eeb24: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eeb28: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eeb2c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977712));
  fn1_bd950(c);
  /* eeb30: cbnz x0, #0xeeb44 */
  if ((ARC_X_R(c, 0)) != 0) goto L_eeb44;
  /* eeb34: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* eeb38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eeb3c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eeb40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977732));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eeb44:;
  /* eeb44: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eeb48: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* eeb4c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eeb50: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eeb54: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* eeb58: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* eeb5c: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* eeb60: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* eeb64: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* eeb68: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* eeb6c: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* eeb70: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* eeb74: b.ne #0xeeb94 */
  if (ARC_COND(c, 1)) goto L_eeb94;
L_eeb78:;
  /* eeb78: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eeb7c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eeb80: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* eeb84: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eeb88: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* eeb8c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eeb90: ret  */
  return;
L_eeb94:;
  /* eeb94: nop  */
  /* nop: no architectural effect here */
  /* eeb98: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* eeb9c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977824));
  fn1_ec720(c);
  /* eeba0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* eeba4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* eeba8: b.eq #0xeebcc */
  if (ARC_COND(c, 0)) goto L_eebcc;
  /* eebac: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* eebb0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eebb4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977848));
  fn1_bd950(c);
  /* eebb8: cbnz x0, #0xeebcc */
  if ((ARC_X_R(c, 0)) != 0) goto L_eebcc;
  /* eebbc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* eebc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eebc4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eebc8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977868));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eebcc:;
  /* eebcc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* eebd0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977876));
  fn1_142548(c);
  /* eebd4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eebd8: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* eebdc: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eebe0: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* eebe4: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* eebe8: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* eebec: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* eebf0: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* eebf4: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* eebf8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eebfc: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eec00: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* eec04: tbnz w8, #0, #0xeec10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_eec10;
  /* eec08: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977932));
  fn1_142980(c);
  /* eec0c: b #0xeeb44 */
  goto L_eeb44;
L_eec10:;
  /* eec10: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977940));
  fn1_1429b0(c);
  /* eec14: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eec18: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977948));
  fn1_142980(c);
  /* eec1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eec20: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977956));
  fn1_9cc20(c);
  /* eec24: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977960));
  fn1_a1454(c);
}

void fn1_f3840(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925376));
  /* f3840: bti c */
  /* bti: no architectural effect here */
  /* f3844: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3848: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f384c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* f3850: add x0, x8, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* f3854: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f54a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038932648));
  /* f54a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f54ac: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f54b0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f54b4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f54b8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f54bc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f54c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f54c4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f54c8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f54cc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f54d0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f54d4: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f54d8: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004764));
  fn1_143670(c);
  /* f54dc: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f54e0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f54e4: b.ne #0xf55ac */
  if (ARC_COND(c, 1)) goto L_f55ac;
  /* f54e8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f54ec: nop  */
  /* nop: no architectural effect here */
  /* f54f0: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f54f4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f54f8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f54fc: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f5500: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5504: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f5508: b.eq #0xf5518 */
  if (ARC_COND(c, 0)) goto L_f5518;
  /* f550c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5510: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f5514: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004824));
  fn1_db2e0(c);
L_f5518:;
  /* f5518: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f551c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f5520: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f5524: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004840));
  fn1_143748(c);
  /* f5528: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f552c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f5530: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5534: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5538: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* f553c: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f5540: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f5544: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f5548: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f554c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004880));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f5550: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5554: b.eq #0xf5578 */
  if (ARC_COND(c, 0)) goto L_f5578;
  /* f5558: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f555c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5560: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004900));
  fn1_bd950(c);
  /* f5564: cbnz x0, #0xf5578 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5578;
  /* f5568: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f556c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5570: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5574: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004920));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5578:;
  /* f5578: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f557c: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5580: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5584: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5588: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f558c: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f5590: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f5594: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5598: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f559c: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f55a0: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f55a4: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f55a8: b.ne #0xf55c8 */
  if (ARC_COND(c, 1)) goto L_f55c8;
L_f55ac:;
  /* f55ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f55b0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f55b4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f55b8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f55bc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f55c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f55c4: ret  */
  return;
L_f55c8:;
  /* f55c8: nop  */
  /* nop: no architectural effect here */
  /* f55cc: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f55d0: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005012));
  fn1_ec720(c);
  /* f55d4: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f55d8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f55dc: b.eq #0xf5600 */
  if (ARC_COND(c, 0)) goto L_f5600;
  /* f55e0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f55e4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f55e8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005036));
  fn1_bd950(c);
  /* f55ec: cbnz x0, #0xf5600 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5600;
  /* f55f0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f55f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f55f8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f55fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005056));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5600:;
  /* f5600: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f5604: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005064));
  fn1_142548(c);
  /* f5608: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f560c: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5610: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5614: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f5618: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f561c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f5620: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f5624: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5628: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f562c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5630: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5634: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f5638: tbnz w8, #0, #0xf5644 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f5644;
  /* f563c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005120));
  fn1_142980(c);
  /* f5640: b #0xf5578 */
  goto L_f5578;
L_f5644:;
  /* f5644: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005128));
  fn1_1429b0(c);
  /* f5648: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f564c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005136));
  fn1_142980(c);
  /* f5650: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5654: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005144));
  fn1_9cc20(c);
  /* f5658: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1005148));
  fn1_a1454(c);
}

void fn1_fae68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038955624));
  /* fae68: bti c */
  /* bti: no architectural effect here */
  /* fae6c: ldr x8, [x0, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(88))));
  /* fae70: ldr x9, [x0, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* fae74: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* fae78: b.hs #0xfae84 */
  if (ARC_COND(c, 2)) goto L_fae84;
  /* fae7c: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* fae80: str x9, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), ARC_X_R(c, 9));
L_fae84:;
  /* fae84: ldrb w9, [x0, #0x60] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* fae88: tbz w9, #3, #0xfaeb4 */
  if (((ARC_W_R(c, 9)) >> 3 & 1) == 0) goto L_faeb4;
  /* fae8c: ldr x9, [x0, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* fae90: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* fae94: b.hs #0xfaea0 */
  if (ARC_COND(c, 2)) goto L_faea0;
  /* fae98: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* fae9c: str x8, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 8));
L_faea0:;
  /* faea0: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* faea4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* faea8: b.hs #0xfaeb4 */
  if (ARC_COND(c, 2)) goto L_faeb4;
  /* faeac: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* faeb0: ret  */
  return;
L_faeb4:;
  /* faeb4: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* faeb8: ret  */
  return;
}

void fn1_fe4e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038969568));
  /* fe4e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe4e4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* fe4e8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe4ec: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fe4f0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fe4f4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fe4f8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* fe4fc: adrp x22, #0x151000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe500: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* fe504: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* fe508: ldr x22, [x22, #0xaa8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2728))));
  /* fe50c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fe510: adrp x24, #0x15d000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1429504)));
  /* fe514: nop  */
  /* nop: no architectural effect here */
  /* fe518: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fe51c: add x8, x22, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* fe520: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* fe524: nop  */
  /* nop: no architectural effect here */
  /* fe528: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fe52c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* fe530: tbz w8, #0, #0xfe63c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_fe63c;
L_fe534:;
  /* fe534: ldr x8, [x24, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(3464))));
  /* fe538: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* fe53c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* fe540: b.eq #0xfe594 */
  if (ARC_COND(c, 0)) goto L_fe594;
  /* fe544: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fe548: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fe54c: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* fe550: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041748));
  fn1_db2e0(c);
  /* fe554: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fe558: str x21, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 21));
  /* fe55c: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fe560: adrp x8, #0x14e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1368064)));
  /* fe564: add x8, x8, #0x80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(128)));
  /* fe568: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* fe56c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fe570: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* fe574: stp q0, q0, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fe578: str q0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* fe57c: b.eq #0xfe5c0 */
  if (ARC_COND(c, 0)) goto L_fe5c0;
  /* fe580: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fe584: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fe588: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041804));
  fn1_db2e0(c);
  /* fe58c: mov w24, wzr */
  ARC_W_W(c, 24, ARC_W_R(c, 31));
  /* fe590: b #0xfe5c4 */
  goto L_fe5c4;
L_fe594:;
  /* fe594: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fe598: adrp x8, #0x14e000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1368064)));
  /* fe59c: add x8, x8, #0x80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(128)));
  /* fe5a0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fe5a4: mov w24, #1 */
  ARC_W_W(c, 24, UINT64_C(1));
  /* fe5a8: str x21, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 21));
  /* fe5ac: mov x21, x23 */
  ARC_X_W(c, 21, ARC_X_R(c, 23));
  /* fe5b0: str x23, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 23));
  /* fe5b4: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fe5b8: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* fe5bc: b #0xfe5c4 */
  goto L_fe5c4;
L_fe5c0:;
  /* fe5c0: mov x21, x23 */
  ARC_X_W(c, 21, ARC_X_R(c, 23));
L_fe5c4:;
  /* fe5c4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fe5c8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fe5cc: ldr x1, [x1, #0xb70] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2928))));
  /* fe5d0: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041876));
  fn1_143748(c);
  /* fe5d4: tbnz w24, #0, #0xfe608 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_fe608;
  /* fe5d8: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fe5dc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* fe5e0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fe5e4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041896));
  fn1_bd950(c);
  /* fe5e8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* fe5ec: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fe5f0: cbnz x8, #0xfe608 */
  if ((ARC_X_R(c, 8)) != 0) goto L_fe608;
  /* fe5f4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fe5f8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fe5fc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fe600: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041924));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe604: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_fe608:;
  /* fe608: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fe60c: stp x0, x20, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* fe610: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* fe614: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041944));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe618: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* fe61c: strb w8, [x19, #0x58] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(88)), ARC_W_R(c, 8));
  /* fe620: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe624: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fe628: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fe62c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe630: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* fe634: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe638: ret  */
  return;
L_fe63c:;
  /* fe63c: nop  */
  /* nop: no architectural effect here */
  /* fe640: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fe644: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041992));
  fn1_1424b8(c);
  /* fe648: cbz w0, #0xfe534 */
  if ((ARC_W_R(c, 0)) == 0) goto L_fe534;
  /* fe64c: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042000));
  fn1_143ac0(c);
  /* fe650: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fe654: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* fe658: str x8, [x24, #0xd88] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(3464)), ARC_X_R(c, 8));
  /* fe65c: b.eq #0xfe66c */
  if (ARC_COND(c, 0)) goto L_fe66c;
  /* fe660: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fe664: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fe668: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042028));
  fn1_db2e0(c);
L_fe66c:;
  /* fe66c: nop  */
  /* nop: no architectural effect here */
  /* fe670: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fe674: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042040));
  fn1_1424d0(c);
  /* fe678: b #0xfe534 */
  goto L_fe534;
  /* fe67c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fe680: nop  */
  /* nop: no architectural effect here */
  /* fe684: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* fe688: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042060));
  fn1_1424e8(c);
  /* fe68c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fe690: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042068));
  fn1_a1454(c);
  /* fe694: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fe698: tbnz w24, #0, #0xfe6bc */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_fe6bc;
  /* fe69c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fe6a0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fe6a4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042088));
  fn1_bd950(c);
  /* fe6a8: cbnz x0, #0xfe6bc */
  if ((ARC_X_R(c, 0)) != 0) goto L_fe6bc;
  /* fe6ac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fe6b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fe6b4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fe6b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042108));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fe6bc:;
  /* fe6bc: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fe6c0: add x8, x22, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* fe6c4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fe6c8: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* fe6cc: b.eq #0xfe6f0 */
  if (ARC_COND(c, 0)) goto L_fe6f0;
  /* fe6d0: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fe6d4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fe6d8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042140));
  fn1_bd950(c);
  /* fe6dc: cbnz x0, #0xfe6f0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fe6f0;
  /* fe6e0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fe6e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fe6e8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fe6ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042160));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fe6f0:;
  /* fe6f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fe6f4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042168));
  fn1_9cc20(c);
}

void fn1_10a3dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039018460));
  /* 10a3dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10a3e0: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 10a3e4: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10a3e8: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 10a3ec: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10a3f0: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10a3f4: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 10a3f8: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10a3fc: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10a400: add x10, x29, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a404: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10a408: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10a40c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10a410: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10a414: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 10a418: orr x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) | UINT64_C(1)));
  /* 10a41c: tbz w9, #0xb, #0x10a448 */
  if (((ARC_W_R(c, 9)) >> 11 & 1) == 0) goto L_10a448;
  /* 10a420: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10a424: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10a428: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10a42c: b.eq #0x10a448 */
  if (ARC_COND(c, 0)) goto L_10a448;
  /* 10a430: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10a434: b.eq #0x10a448 */
  if (ARC_COND(c, 0)) goto L_10a448;
  /* 10a438: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a43c: mov w10, #0x2b */
  ARC_W_W(c, 10, UINT64_C(43));
  /* 10a440: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10a444: strb w10, [x29, #0x19] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(25)), ARC_W_R(c, 10));
L_10a448:;
  /* 10a448: tbz w9, #9, #0x10a454 */
  if (((ARC_W_R(c, 9)) >> 9 & 1) == 0) goto L_10a454;
  /* 10a44c: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10a450: strb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
L_10a454:;
  /* 10a454: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10a458: mov w11, #0x6c6c */
  ARC_W_W(c, 11, UINT64_C(27756));
  /* 10a45c: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10a460: strh w11, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10a464: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10a468: b.eq #0x10a488 */
  if (ARC_COND(c, 0)) goto L_10a488;
  /* 10a46c: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10a470: b.ne #0x10a490 */
  if (ARC_COND(c, 1)) goto L_10a490;
  /* 10a474: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10a478: mov w9, #0x58 */
  ARC_W_W(c, 9, UINT64_C(88));
  /* 10a47c: mov w10, #0x78 */
  ARC_W_W(c, 10, UINT64_C(120));
  /* 10a480: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10a484: b #0x10a494 */
  goto L_10a494;
L_10a488:;
  /* 10a488: mov w9, #0x6f */
  ARC_W_W(c, 9, UINT64_C(111));
  /* 10a48c: b #0x10a494 */
  goto L_10a494;
L_10a490:;
  /* 10a490: mov w9, #0x64 */
  ARC_W_W(c, 9, UINT64_C(100));
L_10a494:;
  /* 10a494: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* 10a498: nop  */
  /* nop: no architectural effect here */
  /* 10a49c: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a4a0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10a4a4: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10a4a8: tbz w8, #0, #0x10a5a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10a5a4;
L_10a4ac:;
  /* 10a4ac: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10a4b0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a4b4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a4b8: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 10a4bc: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10a4c0: sub x22, x29, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a4c4: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090760));
  fn1_136860(c);
  /* 10a4c8: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10a4cc: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10a4d0: add x22, x22, w0, sxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 0)))));
  /* 10a4d4: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10a4d8: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* 10a4dc: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10a4e0: b.eq #0x10a53c */
  if (ARC_COND(c, 0)) goto L_10a53c;
  /* 10a4e4: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10a4e8: b.ne #0x10a538 */
  if (ARC_COND(c, 1)) goto L_10a538;
  /* 10a4ec: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10a4f0: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10a4f4: b.eq #0x10a500 */
  if (ARC_COND(c, 0)) goto L_10a500;
  /* 10a4f8: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10a4fc: b.ne #0x10a50c */
  if (ARC_COND(c, 1)) goto L_10a50c;
L_10a500:;
  /* 10a500: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a504: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10a508: b #0x10a53c */
  goto L_10a53c;
L_10a50c:;
  /* 10a50c: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 10a510: b.lt #0x10a538 */
  if (ARC_COND(c, 11)) goto L_10a538;
  /* 10a514: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10a518: b.ne #0x10a538 */
  if (ARC_COND(c, 1)) goto L_10a538;
  /* 10a51c: ldurb w8, [x29, #-0x17] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-23))));
  /* 10a520: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10a524: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10a528: b.ne #0x10a538 */
  if (ARC_COND(c, 1)) goto L_10a538;
  /* 10a52c: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a530: orr x23, x8, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10a534: b #0x10a53c */
  goto L_10a53c;
L_10a538:;
  /* 10a538: sub x23, x29, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(24)));
L_10a53c:;
  /* 10a53c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a540: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10a544: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090888));
  fn1_143460(c);
  /* 10a548: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a54c: add x3, sp, #0x1b */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(27)));
  /* 10a550: add x4, sp, #0x10 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(16)));
  /* 10a554: add x5, sp, #8 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(8)));
  /* 10a558: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 10a55c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10a560: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10a564: bl #0x1438f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090920));
  fn1_1438f8(c);
  /* 10a568: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a56c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090928));
  fn1_143478(c);
  /* 10a570: ldp x3, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10a574: add x1, sp, #0x1b */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(27)));
  /* 10a578: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10a57c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10a580: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10a584: bl #0x10b5d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090952));
  fn1_10b5d8(c);
  /* 10a588: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10a58c: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* 10a590: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10a594: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10a598: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 10a59c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10a5a0: ret  */
  return;
L_10a5a4:;
  /* 10a5a4: nop  */
  /* nop: no architectural effect here */
  /* 10a5a8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a5ac: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090992));
  fn1_1424b8(c);
  /* 10a5b0: cbz w0, #0x10a4ac */
  if ((ARC_W_R(c, 0)) == 0) goto L_10a4ac;
  /* 10a5b4: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10a5b8: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10a5bc: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10a5c0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10a5c4: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091016));
  fn1_1441e0(c);
  /* 10a5c8: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10a5cc: nop  */
  /* nop: no architectural effect here */
  /* 10a5d0: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a5d4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091032));
  fn1_1424d0(c);
  /* 10a5d8: b #0x10a4ac */
  goto L_10a4ac;
  /* 10a5dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10a5e0: nop  */
  /* nop: no architectural effect here */
  /* 10a5e4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a5e8: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091052));
  fn1_1424e8(c);
  /* 10a5ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a5f0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091060));
  fn1_9cc20(c);
  /* 10a5f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10a5f8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a5fc: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091072));
  fn1_143478(c);
  /* 10a600: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a604: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1091080));
  fn1_9cc20(c);
}

void fn1_112bb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039053236));
  /* 112bb4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 112bb8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 112bbc: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112bc0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 112bc4: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 112bc8: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 112bcc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 112bd0: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 112bd4: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 112bd8: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 112bdc: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 112be0: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125348));
  fn1_112ec0(c);
  /* 112be4: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 112be8: cmp w0, #0x3c */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(60));
  /* 112bec: b.gt #0x112bfc */
  if (ARC_COND(c, 12)) goto L_112bfc;
  /* 112bf0: tbnz w8, #2, #0x112bfc */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_112bfc;
  /* 112bf4: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 112bf8: b #0x112c04 */
  goto L_112c04;
L_112bfc:;
  /* 112bfc: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 112c00: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_112c04:;
  /* 112c04: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 112c08: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 112c0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 112c10: ret  */
  return;
}

void fn1_113fc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058372));
  /* 113fc4: bti c */
  /* bti: no architectural effect here */
  /* 113fc8: ldr w0, [x0, #0x80] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(128))));
  /* 113fcc: ret  */
  return;
}

void fn1_11ecfc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039102716));
  /* 11ecfc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11ed00: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11ed04: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11ed08: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11ed0c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11ed10: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11ed14: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11ed18: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ed1c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11ed20: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11ed24: ldr x23, [x23, #0xb70] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(2928))));
  /* 11ed28: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ed2c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11ed30: b.eq #0x11edec */
  if (ARC_COND(c, 0)) goto L_11edec;
  /* 11ed34: nop  */
  /* nop: no architectural effect here */
  /* 11ed38: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ed3c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174848));
  fn1_142518(c);
  /* 11ed40: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ed44: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11ed48: b.ne #0x11ed74 */
  if (ARC_COND(c, 1)) goto L_11ed74;
  /* 11ed4c: nop  */
  /* nop: no architectural effect here */
  /* 11ed50: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11ed54: nop  */
  /* nop: no architectural effect here */
  /* 11ed58: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11ed5c:;
  /* 11ed5c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ed60: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11ed64: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174888));
  fn1_142530(c);
  /* 11ed68: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ed6c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11ed70: b.eq #0x11ed5c */
  if (ARC_COND(c, 0)) goto L_11ed5c;
L_11ed74:;
  /* 11ed74: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11ed78: cbz x8, #0x11ed8c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11ed8c;
  /* 11ed7c: nop  */
  /* nop: no architectural effect here */
  /* 11ed80: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ed84: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174920));
  fn1_142560(c);
  /* 11ed88: b #0x11edec */
  goto L_11edec;
L_11ed8c:;
  /* 11ed8c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11ed90: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11ed94: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11ed98: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11ed9c: nop  */
  /* nop: no architectural effect here */
  /* 11eda0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11eda4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174952));
  fn1_142560(c);
  /* 11eda8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11edac: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11edb0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11edb4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174968));
  fn1_a2030(c);
  /* 11edb8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11edbc: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11edc0: nop  */
  /* nop: no architectural effect here */
  /* 11edc4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11edc8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174988));
  fn1_142518(c);
  /* 11edcc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11edd0: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11edd4: nop  */
  /* nop: no architectural effect here */
  /* 11edd8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11eddc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175008));
  fn1_142560(c);
  /* 11ede0: nop  */
  /* nop: no architectural effect here */
  /* 11ede4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11ede8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175020));
  fn1_142578(c);
L_11edec:;
  /* 11edec: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11edf0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11edf4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11edf8: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11edfc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175040));
  fn1_db2e0(c);
  /* 11ee00: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11ee04: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11ee08: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11ee0c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11ee10: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11ee14: b.hi #0x11ee40 */
  if (ARC_COND(c, 8)) goto L_11ee40;
  /* 11ee18: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11ee1c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11ee20: b.ls #0x11ee34 */
  if (ARC_COND(c, 9)) goto L_11ee34;
  /* 11ee24: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ee28: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175084));
  fn1_1352bc(c);
  /* 11ee2c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11ee30: b #0x11ee40 */
  goto L_11ee40;
L_11ee34:;
  /* 11ee34: b.hs #0x11ee40 */
  if (ARC_COND(c, 2)) goto L_11ee40;
  /* 11ee38: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11ee3c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11ee40:;
  /* 11ee40: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11ee44: cbz x20, #0x11ee68 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11ee68;
  /* 11ee48: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11ee4c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11ee50: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175124));
  fn1_bd950(c);
  /* 11ee54: cbnz x0, #0x11ee68 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11ee68;
  /* 11ee58: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11ee5c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11ee60: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11ee64: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175144));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11ee68:;
  /* 11ee68: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11ee6c: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11ee70: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11ee74: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11ee78: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11ee7c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11ee80: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11ee84: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11ee88: ret  */
  return;
  /* 11ee8c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11ee90: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11ee94: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11ee98: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175196));
  fn1_bd950(c);
  /* 11ee9c: cbnz x0, #0x11eec4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11eec4;
  /* 11eea0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11eea4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11eea8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11eeac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175216));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11eeb0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11eeb4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175224));
  fn1_9cc20(c);
  /* 11eeb8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11eebc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11eec0: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175236));
  fn1_d2a78(c);
L_11eec4:;
  /* 11eec4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11eec8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1175244));
  fn1_9cc20(c);
}

void fn1_126500(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133440));
  /* 126500: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 126504: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 126508: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12650c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 126510: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* 126514: cmp w1, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(127));
  /* 126518: b.hi #0x126548 */
  if (ARC_COND(c, 8)) goto L_126548;
  /* 12651c: nop  */
  /* nop: no architectural effect here */
  /* 126520: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126524: adrp x20, #0x15d000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 126528: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12652c: tbz w8, #0, #0x12655c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12655c;
L_126530:;
  /* 126530: ldr x1, [x20, #0xc30] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(3120))));
  /* 126534: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 126538: bl #0x144288 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205564));
  fn1_144288(c);
  /* 12653c: sub w8, w19, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(32)));
  /* 126540: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 126544: csel w19, w19, w8, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? (ARC_W_R(c, 19)) : ARC_W_R(c, 8)));
L_126548:;
  /* 126548: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 12654c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 126550: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 126554: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 126558: ret  */
  return;
L_12655c:;
  /* 12655c: nop  */
  /* nop: no architectural effect here */
  /* 126560: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 126564: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205608));
  fn1_1424b8(c);
  /* 126568: cbz w0, #0x126530 */
  if ((ARC_W_R(c, 0)) == 0) goto L_126530;
  /* 12656c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 126570: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 126574: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 126578: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 12657c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205632));
  fn1_1441e0(c);
  /* 126580: str x0, [x20, #0xc30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 126584: nop  */
  /* nop: no architectural effect here */
  /* 126588: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 12658c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205648));
  fn1_1424d0(c);
  /* 126590: b #0x126530 */
  goto L_126530;
  /* 126594: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 126598: nop  */
  /* nop: no architectural effect here */
  /* 12659c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1265a0: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205668));
  fn1_1424e8(c);
  /* 1265a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1265a8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1205676));
  fn1_9cc20(c);
}

void fn1_128e74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144052));
  /* 128e74: bti c */
  /* bti: no architectural effect here */
  /* 128e78: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 128e7c: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 128e80: ret  */
  return;
}

void fn1_12a798(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039150488));
  /* 12a798: bti c */
  /* bti: no architectural effect here */
  /* 12a79c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a7a0: ret  */
  return;
}

void fn1_12bcc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155904));
  /* 12bcc0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12bcc4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bcc8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12bccc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12bcd0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12bcd4: bl #0x144150 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1227992));
  fn1_144150(c);
  /* 12bcd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12bcdc: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* 12bce0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12bce4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12bce8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12bcec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_132470(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039182448));
  /* 132470: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 132474: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 132478: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13247c: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 132480: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 132484: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 132488: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 13248c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 132490: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 132494: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 132498: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 13249c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254560));
  fn1_1441e0(c);
  /* 1324a0: stur x0, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 0));
  /* 1324a4: cbz x0, #0x132790 */
  if ((ARC_X_R(c, 0)) == 0) goto L_132790;
  /* 1324a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1324ac: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254576));
  fn1_1443c0(c);
  /* 1324b0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1324b4: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 1324b8: bl #0x144498 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254588));
  fn1_144498(c);
  /* 1324bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1324c0: cbz x22, #0x1324cc */
  if ((ARC_X_R(c, 22)) == 0) goto L_1324cc;
  /* 1324c4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1324c8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254604));
  fn1_1443c0(c);
L_1324cc:;
  /* 1324cc: ldr x23, [x21, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* 1324d0: ldrb w22, [x23] */
  ARC_W_W(c, 22, arc_ld8(ARC_X_R(c, 23)));
  /* 1324d4: cbz w22, #0x132578 */
  if ((ARC_W_R(c, 22)) == 0) goto L_132578;
  /* 1324d8: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 1324dc: cbz w8, #0x13257c */
  if ((ARC_W_R(c, 8)) == 0) goto L_13257c;
  /* 1324e0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1324e4: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 1324e8: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254636));
  fn1_142860(c);
  /* 1324ec: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1324f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1324f4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254648));
  fn1_1443c0(c);
  /* 1324f8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1324fc: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 132500: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 132504: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 132508: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 13250c: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 132510: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254676));
  fn1_144438(c);
  /* 132514: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 132518: cbz x22, #0x132524 */
  if ((ARC_X_R(c, 22)) == 0) goto L_132524;
  /* 13251c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 132520: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254692));
  fn1_1443c0(c);
L_132524:;
  /* 132524: cmn x23, #2 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(2), 0);
  /* 132528: b.hs #0x132578 */
  if (ARC_COND(c, 2)) goto L_132578;
  /* 13252c: ldur w23, [x29, #-4] */
  ARC_W_W(c, 23, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 132530: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132534: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254712));
  fn1_1443c0(c);
  /* 132538: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 13253c: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 132540: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 132544: bl #0x1443d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254728));
  fn1_1443d8(c);
  /* 132548: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 13254c: cbz x24, #0x132558 */
  if ((ARC_X_R(c, 24)) == 0) goto L_132558;
  /* 132550: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 132554: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254744));
  fn1_1443c0(c);
L_132558:;
  /* 132558: cmn w22, #1 */
  (void)arc_add32(c, ARC_W_R(c, 22), UINT64_C(1), 0);
  /* 13255c: b.ne #0x13257c */
  if (ARC_COND(c, 1)) goto L_13257c;
  /* 132560: cmp w23, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(160));
  /* 132564: mov w8, #0x202f */
  ARC_W_W(c, 8, UINT64_C(8239));
  /* 132568: ccmp w23, w8, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 13256c: mov w8, #0x20 */
  ARC_W_W(c, 8, UINT64_C(32));
  /* 132570: csinv w22, w8, wzr, eq */
  ARC_W_W(c, 22, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* 132574: b #0x13257c */
  goto L_13257c;
L_132578:;
  /* 132578: mov w22, #0xff */
  ARC_W_W(c, 22, UINT64_C(255));
L_13257c:;
  /* 13257c: strb w22, [x20, #0x10] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(16)), ARC_W_R(c, 22));
  /* 132580: ldr x23, [x21, #0x30] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* 132584: ldrb w22, [x23] */
  ARC_W_W(c, 22, arc_ld8(ARC_X_R(c, 23)));
  /* 132588: cbz w22, #0x13262c */
  if ((ARC_W_R(c, 22)) == 0) goto L_13262c;
  /* 13258c: ldrb w8, [x23, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 23) + INT64_C(1))));
  /* 132590: cbz w8, #0x132630 */
  if ((ARC_W_R(c, 8)) == 0) goto L_132630;
  /* 132594: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 132598: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 13259c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254816));
  fn1_142860(c);
  /* 1325a0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1325a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1325a8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254828));
  fn1_1443c0(c);
  /* 1325ac: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1325b0: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 1325b4: sub x0, x29, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1325b8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1325bc: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1325c0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 1325c4: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254856));
  fn1_144438(c);
  /* 1325c8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1325cc: cbz x22, #0x1325d8 */
  if ((ARC_X_R(c, 22)) == 0) goto L_1325d8;
  /* 1325d0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1325d4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254872));
  fn1_1443c0(c);
L_1325d8:;
  /* 1325d8: cmn x23, #2 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(2), 0);
  /* 1325dc: b.hs #0x13262c */
  if (ARC_COND(c, 2)) goto L_13262c;
  /* 1325e0: ldur w23, [x29, #-4] */
  ARC_W_W(c, 23, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1325e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1325e8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254892));
  fn1_1443c0(c);
  /* 1325ec: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1325f0: str x0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 0));
  /* 1325f4: mov w0, w23 */
  ARC_W_W(c, 0, ARC_W_R(c, 23));
  /* 1325f8: bl #0x1443d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254908));
  fn1_1443d8(c);
  /* 1325fc: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 132600: cbz x24, #0x13260c */
  if ((ARC_X_R(c, 24)) == 0) goto L_13260c;
  /* 132604: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 132608: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254924));
  fn1_1443c0(c);
L_13260c:;
  /* 13260c: cmn w22, #1 */
  (void)arc_add32(c, ARC_W_R(c, 22), UINT64_C(1), 0);
  /* 132610: b.ne #0x132630 */
  if (ARC_COND(c, 1)) goto L_132630;
  /* 132614: cmp w23, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 23), UINT64_C(160));
  /* 132618: mov w8, #0x202f */
  ARC_W_W(c, 8, UINT64_C(8239));
  /* 13261c: ccmp w23, w8, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 23), ARC_W_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 132620: mov w8, #0x20 */
  ARC_W_W(c, 8, UINT64_C(32));
  /* 132624: csinv w22, w8, wzr, eq */
  ARC_W_W(c, 22, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* 132628: b #0x132630 */
  goto L_132630;
L_13262c:;
  /* 13262c: mov w22, #0xff */
  ARC_W_W(c, 22, UINT64_C(255));
L_132630:;
  /* 132630: strb w22, [x20, #0x11] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(17)), ARC_W_R(c, 22));
  /* 132634: ldr x1, [x21, #0x38] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(56))));
  /* 132638: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13263c: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254976));
  fn1_e167c(c);
  /* 132640: ldr x1, [x21, #0x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(32))));
  /* 132644: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 132648: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254988));
  fn1_e167c(c);
  /* 13264c: ldrb w8, [x21, #0x51] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(81))));
  /* 132650: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 132654: csel w8, wzr, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* 132658: str w8, [x20, #0x78] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(120)), ARC_W_R(c, 8));
  /* 13265c: ldrb w8, [x21, #0x56] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(86))));
  /* 132660: cbz w8, #0x1326a0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1326a0;
  /* 132664: ldr x1, [x21, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(64))));
  /* 132668: add x0, x20, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(72)));
  /* 13266c: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255024));
  fn1_e167c(c);
  /* 132670: ldrb w8, [x21, #0x57] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(87))));
  /* 132674: cbz w8, #0x1326d8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1326d8;
L_132678:;
  /* 132678: ldr x1, [x21, #0x48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* 13267c: add x0, x20, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(96)));
  /* 132680: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255044));
  fn1_e167c(c);
  /* 132684: ldurb w8, [x20, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(48))));
  /* 132688: tbnz w8, #0, #0x132710 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_132710;
L_13268c:;
  /* 13268c: ldur q0, [x20, #0x30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))), arc_ld64((ARC_X_R(c, 20) + INT64_C(48)) + 8));
  /* 132690: ldur x8, [x20, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* 132694: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 132698: str x8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 8));
  /* 13269c: b #0x13271c */
  goto L_13271c;
L_1326a0:;
  /* 1326a0: ldurb w8, [x20, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(72))));
  /* 1326a4: tbnz w8, #0, #0x1326b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1326b8;
  /* 1326a8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1326ac: strb w8, [x20, #0x48] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(72)), ARC_W_R(c, 8));
  /* 1326b0: add x8, x20, #0x49 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(73)));
  /* 1326b4: b #0x1326c4 */
  goto L_1326c4;
L_1326b8:;
  /* 1326b8: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 1326bc: ldr x8, [x20, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* 1326c0: str x9, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 9));
L_1326c4:;
  /* 1326c4: mov w9, #0x2928 */
  ARC_W_W(c, 9, UINT64_C(10536));
  /* 1326c8: strb wzr, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 31));
  /* 1326cc: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 1326d0: ldrb w8, [x21, #0x57] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(87))));
  /* 1326d4: cbnz w8, #0x132678 */
  if ((ARC_W_R(c, 8)) != 0) goto L_132678;
L_1326d8:;
  /* 1326d8: ldurb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* 1326dc: tbnz w8, #0, #0x1326f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1326f0;
  /* 1326e0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1326e4: strb w8, [x20, #0x60] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(96)), ARC_W_R(c, 8));
  /* 1326e8: add x8, x20, #0x61 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(97)));
  /* 1326ec: b #0x1326fc */
  goto L_1326fc;
L_1326f0:;
  /* 1326f0: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 1326f4: ldr x8, [x20, #0x70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* 1326f8: str x9, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 9));
L_1326fc:;
  /* 1326fc: mov w9, #0x2928 */
  ARC_W_W(c, 9, UINT64_C(10536));
  /* 132700: strb wzr, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 31));
  /* 132704: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 132708: ldurb w8, [x20, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(48))));
  /* 13270c: tbz w8, #0, #0x13268c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13268c;
L_132710:;
  /* 132710: ldp x2, x1, [x20, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 132714: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 132718: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255196));
  fn1_da588(c);
L_13271c:;
  /* 13271c: ldrb w5, [x21, #0x56] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 21) + INT64_C(86))));
  /* 132720: ldrb w4, [x21, #0x53] */
  ARC_W_W(c, 4, arc_ld8((ARC_X_R(c, 21) + INT64_C(83))));
  /* 132724: ldrb w3, [x21, #0x52] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(82))));
  /* 132728: add x0, x20, #0x7c */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(124)));
  /* 13272c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 132730: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 132734: bl #0x132874 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255224));
  fn1_132874(c);
  /* 132738: ldrb w5, [x21, #0x57] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 21) + INT64_C(87))));
  /* 13273c: ldrb w4, [x21, #0x55] */
  ARC_W_W(c, 4, arc_ld8((ARC_X_R(c, 21) + INT64_C(85))));
  /* 132740: ldrb w3, [x21, #0x54] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(84))));
  /* 132744: add x0, x20, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* 132748: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 13274c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 132750: bl #0x132874 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255252));
  fn1_132874(c);
  /* 132754: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 132758: tbz w8, #0, #0x13276c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13276c;
  /* 13275c: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 132760: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 132764: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 132768: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255276));
  fn1_142608(c);
L_13276c:;
  /* 13276c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132770: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255284));
  fn1_144210(c);
  /* 132774: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 132778: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13277c: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 132780: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132784: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 132788: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13278c: ret  */
  return;
L_132790:;
  /* 132790: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 132794: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 132798: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255324));
  fn1_11dda8(c);
  /* 13279c: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 1327a0: add x0, x0, #0xfc2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4034)));
  /* 1327a4: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 1327a8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1327ac: add x19, sp, #0x20 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(32)));
  /* 1327b0: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255348));
  fn1_125878(c);
  /* 1327b4: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 1327b8: ldr x9, [sp, #0x30] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1327bc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1327c0: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 1327c4: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255368));
  fn1_142c98(c);
  /* 1327c8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255372));
  fn1_a1454(c);
  /* 1327cc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255376));
  fn1_a1454(c);
  /* 1327d0: b #0x132830 */
  goto L_132830;
  /* 1327d4: b #0x132830 */
  goto L_132830;
  /* 1327d8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255388));
  fn1_a1454(c);
  /* 1327dc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255392));
  fn1_a1454(c);
  /* 1327e0: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 1327e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1327e8: tbz w8, #0, #0x132804 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_132804;
  /* 1327ec: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1327f0: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1327f4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1327f8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255420));
  fn1_142608(c);
  /* 1327fc: b #0x132804 */
  goto L_132804;
  /* 132800: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_132804:;
  /* 132804: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 132808: tbz w8, #0, #0x132864 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_132864;
  /* 13280c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 132810: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 132814: b #0x132854 */
  goto L_132854;
  /* 132818: b #0x132830 */
  goto L_132830;
  /* 13281c: b #0x132830 */
  goto L_132830;
  /* 132820: b #0x132860 */
  goto L_132860;
  /* 132824: b #0x132860 */
  goto L_132860;
  /* 132828: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255468));
  fn1_a1454(c);
  /* 13282c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255472));
  fn1_a1454(c);
L_132830:;
  /* 132830: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 132834: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 132838: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255484));
  fn1_135428(c);
  /* 13283c: b #0x132864 */
  goto L_132864;
  /* 132840: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 132844: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 132848: tbz w8, #0, #0x132864 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_132864;
  /* 13284c: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 132850: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
L_132854:;
  /* 132854: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 132858: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255516));
  fn1_142608(c);
  /* 13285c: b #0x132864 */
  goto L_132864;
L_132860:;
  /* 132860: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_132864:;
  /* 132864: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 132868: bl #0x12c2c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255532));
  fn1_12c2c0(c);
  /* 13286c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132870: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1255540));
  fn1_9cc20(c);
}

void fn1_134c40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192640));
  /* 134c40: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134c44: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134c48: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134c4c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134c50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134c54: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 134c58: bl #0x143d00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1264732));
  fn1_143d00(c);
  /* 134c5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134c60: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 134c64: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134c68: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134c6c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134c70: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137074(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039201908));
  /* 137074: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 137078: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13707c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 137080: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137084: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137088: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 13708c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 137090: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137094: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 137098: adrp x21, #0x15d000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 13709c: nop  */
  /* nop: no architectural effect here */
  /* 1370a0: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 1370a4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1370a8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1370ac: nop  */
  /* nop: no architectural effect here */
  /* 1370b0: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1370b4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1370b8: tbz w8, #0, #0x137118 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_137118;
L_1370bc:;
  /* 1370bc: ldr x8, [x21, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(3464))));
  /* 1370c0: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 1370c4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1370c8: b.eq #0x1370d8 */
  if (ARC_COND(c, 0)) goto L_1370d8;
  /* 1370cc: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 1370d0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1370d4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274072));
  fn1_db2e0(c);
L_1370d8:;
  /* 1370d8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1370dc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1370e0: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 1370e4: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 1370e8: str w9, [x19, #0x40] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 9));
  /* 1370ec: stp xzr, xzr, [x19, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1370f0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1370f4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1370f8: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 1370fc: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 137100: str x20, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 20));
  /* 137104: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 137108: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13710c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137110: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137114: ret  */
  return;
L_137118:;
  /* 137118: nop  */
  /* nop: no architectural effect here */
  /* 13711c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137120: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274148));
  fn1_1424b8(c);
  /* 137124: cbz w0, #0x1370bc */
  if ((ARC_W_R(c, 0)) == 0) goto L_1370bc;
  /* 137128: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274156));
  fn1_143ac0(c);
  /* 13712c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 137130: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 137134: str x8, [x21, #0xd88] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 137138: b.eq #0x137148 */
  if (ARC_COND(c, 0)) goto L_137148;
  /* 13713c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137140: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137144: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274184));
  fn1_db2e0(c);
L_137148:;
  /* 137148: nop  */
  /* nop: no architectural effect here */
  /* 13714c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137150: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274196));
  fn1_1424d0(c);
  /* 137154: b #0x1370bc */
  goto L_1370bc;
  /* 137158: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13715c: nop  */
  /* nop: no architectural effect here */
  /* 137160: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137164: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274216));
  fn1_1424e8(c);
  /* 137168: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13716c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1274224));
  fn1_a1454(c);
}

void fn1_13a6cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039215820));
  /* 13a6cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13a6d0: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 13a6d4: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13a6d8: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 13a6dc: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13a6e0: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13a6e4: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 13a6e8: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13a6ec: add x8, x8, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 13a6f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13a6f4: stp x8, x1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13a6f8: nop  */
  /* nop: no architectural effect here */
  /* 13a6fc: adr x21, #0x156d40 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13a700: nop  */
  /* nop: no architectural effect here */
  /* 13a704: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a708: stp xzr, xzr, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a70c: cbz x1, #0x13a724 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13a724;
  /* 13a710: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 13a714: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13a718: tbz w8, #0, #0x13a968 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a968;
L_13a71c:;
  /* 13a71c: str x21, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 21));
  /* 13a720: b #0x13a72c */
  goto L_13a72c;
L_13a724:;
  /* 13a724: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13a728: tbz w8, #0, #0x13a994 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a994;
L_13a72c:;
  /* 13a72c: ldr x20, [x19] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 19)));
  /* 13a730: stp xzr, xzr, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a734: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 13a738: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* 13a73c: str x21, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 21));
  /* 13a740: cbz x8, #0x13a7b8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13a7b8;
  /* 13a744: mov x21, #0xe38f */
  ARC_X_W(c, 21, UINT64_C(58255));
  /* 13a748: mov w22, #0x24 */
  ARC_W_W(c, 22, UINT64_C(36));
  /* 13a74c: mov w23, #0x70 */
  ARC_W_W(c, 23, UINT64_C(112));
  /* 13a750: movk x21, #0x8e38, lsl #16 */
  ARC_X_W(c, 21, ((ARC_X_R(c, 21) & UINT64_C(18446744069414649855)) | UINT64_C(2386034688)));
  /* 13a754: movk x21, #0x38e3, lsl #32 */
  ARC_X_W(c, 21, ((ARC_X_R(c, 21) & UINT64_C(18446462603027808255)) | UINT64_C(62547608731648)));
  /* 13a758: movk x21, #0xe38e, lsl #48 */
  ARC_X_W(c, 21, ((ARC_X_R(c, 21) & UINT64_C(281474976710655)) | UINT64_C(16397043293302554624)));
L_13a75c:;
  /* 13a75c: ldr x9, [x20, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 13a760: ldr x10, [x20, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 13a764: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 13a768: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 13a76c: umulh x9, x8, x21 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 8), ARC_X_R(c, 21)));
  /* 13a770: lsr x9, x9, #5 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(5)) & 63)));
  /* 13a774: msub x8, x9, x22, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* 13a778: ldr x9, [x10, x9, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 13a77c: nop  */
  /* nop: no architectural effect here */
  /* 13a780: madd x0, x8, x23, x9 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 23)))));
  /* 13a784: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13a788: bl #0x139da4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288076));
  fn1_139da4(c);
  /* 13a78c: tbnz w0, #0, #0x13a8f8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_13a8f8;
  /* 13a790: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 13a794: cbnz w8, #0x13a814 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13a814;
  /* 13a798: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13a79c: bl #0x13ba8c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288096));
  fn1_13ba8c(c);
  /* 13a7a0: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* 13a7a4: cbnz x8, #0x13a75c */
  if ((ARC_X_R(c, 8)) != 0) goto L_13a75c;
  /* 13a7a8: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 13a7ac: cbz w8, #0x13a7b8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13a7b8;
  /* 13a7b0: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 13a7b4: b #0x13a81c */
  goto L_13a81c;
L_13a7b8:;
  /* 13a7b8: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13a7bc: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a7c0: cbz x20, #0x13a8f8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_13a8f8;
  /* 13a7c4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 13a7c8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a7cc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288144));
  fn1_bd950(c);
  /* 13a7d0: cbnz x0, #0x13a8f8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a8f8;
  /* 13a7d4: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 13a7d8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13a7dc: ldr x8, [x19], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13a7e0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13a7e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288168));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13a7e8: ldar x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13a7ec: cbz x8, #0x13a800 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13a800;
  /* 13a7f0: add x1, x20, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 13a7f4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a7f8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288188));
  fn1_bd950(c);
  /* 13a7fc: cbnz x0, #0x13a8f8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a8f8;
L_13a800:;
  /* 13a800: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13a804: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13a808: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13a80c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288208));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13a810: b #0x13a8f8 */
  goto L_13a8f8;
L_13a814:;
  /* 13a814: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* 13a818: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
L_13a81c:;
  /* 13a81c: ldr x9, [x20, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 13a820: mov w10, #0x24 */
  ARC_W_W(c, 10, UINT64_C(36));
  /* 13a824: mov w11, #0x70 */
  ARC_W_W(c, 11, UINT64_C(112));
  /* 13a828: add x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* 13a82c: umulh x9, x8, x21 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 8), ARC_X_R(c, 21)));
  /* 13a830: lsr x9, x9, #5 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(5)) & 63)));
  /* 13a834: msub x8, x9, x10, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 10)))));
  /* 13a838: ldr x10, [x20, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 13a83c: ldr x9, [x10, x9, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 13a840: nop  */
  /* nop: no architectural effect here */
  /* 13a844: madd x8, x8, x11, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13a848: ldur q0, [x8, #8] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))), arc_ld64((ARC_X_R(c, 8) + INT64_C(8)) + 8));
  /* 13a84c: ldr x9, [x8, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 13a850: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 13a854: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 13a858: stp xzr, xzr, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a85c: str xzr, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 31));
  /* 13a860: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13a864: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a868: cbz x20, #0x13a8b8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_13a8b8;
  /* 13a86c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 13a870: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a874: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288312));
  fn1_bd950(c);
  /* 13a878: cbnz x0, #0x13a8b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a8b8;
  /* 13a87c: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 13a880: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13a884: ldr x8, [x19], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13a888: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13a88c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288336));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13a890: ldar x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13a894: cbz x8, #0x13a8a8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13a8a8;
  /* 13a898: add x1, x20, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 13a89c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a8a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288356));
  fn1_bd950(c);
  /* 13a8a4: cbnz x0, #0x13a8b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a8b8;
L_13a8a8:;
  /* 13a8a8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13a8ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13a8b0: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13a8b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288376));
  arc_dispatch(c, ARC_X_R(c, 8));
L_13a8b8:;
  /* 13a8b8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13a8bc: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13a8c0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13a8c4: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 13a8c8: csinc x3, x9, x8, ne */
  ARC_X_W(c, 3, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 13a8cc: nop  */
  /* nop: no architectural effect here */
  /* 13a8d0: adr x2, #0x52107 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(336135)));
  /* 13a8d4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13a8d8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13a8dc: bl #0x138aa8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288416));
  fn1_138aa8(c);
  /* 13a8e0: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13a8e4: tbz w8, #0, #0x13a8f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a8f8;
  /* 13a8e8: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13a8ec: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13a8f0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a8f4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288440));
  fn1_142608(c);
L_13a8f8:;
  /* 13a8f8: ldr x19, [sp, #0x38] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(56))));
  /* 13a8fc: cbz x19, #0x13a94c */
  if ((ARC_X_R(c, 19)) == 0) goto L_13a94c;
  /* 13a900: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 13a904: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a908: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288460));
  fn1_bd950(c);
  /* 13a90c: cbnz x0, #0x13a94c */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a94c;
  /* 13a910: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 13a914: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a918: ldr x8, [x20], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13a91c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13a920: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288484));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13a924: ldar x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13a928: cbz x8, #0x13a93c */
  if ((ARC_X_R(c, 8)) == 0) goto L_13a93c;
  /* 13a92c: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 13a930: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a934: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288504));
  fn1_bd950(c);
  /* 13a938: cbnz x0, #0x13a94c */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a94c;
L_13a93c:;
  /* 13a93c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13a940: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a944: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13a948: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288524));
  arc_dispatch(c, ARC_X_R(c, 8));
L_13a94c:;
  /* 13a94c: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13a950: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* 13a954: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13a958: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a95c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 13a960: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13a964: ret  */
  return;
L_13a968:;
  /* 13a968: nop  */
  /* nop: no architectural effect here */
  /* 13a96c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a970: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13a974: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288568));
  fn1_1424b8(c);
  /* 13a978: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13a97c: cbz w0, #0x13a71c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13a71c;
  /* 13a980: nop  */
  /* nop: no architectural effect here */
  /* 13a984: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a988: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288588));
  fn1_1424d0(c);
  /* 13a98c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13a990: b #0x13a71c */
  goto L_13a71c;
L_13a994:;
  /* 13a994: nop  */
  /* nop: no architectural effect here */
  /* 13a998: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a99c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288608));
  fn1_1424b8(c);
  /* 13a9a0: cbz w0, #0x13a72c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13a72c;
  /* 13a9a4: nop  */
  /* nop: no architectural effect here */
  /* 13a9a8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a9ac: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288624));
  fn1_1424d0(c);
  /* 13a9b0: b #0x13a72c */
  goto L_13a72c;
  /* 13a9b4: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13a9b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13a9bc: tbz w8, #0, #0x13a9d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a9d8;
  /* 13a9c0: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13a9c4: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13a9c8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a9cc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288656));
  fn1_142608(c);
  /* 13a9d0: b #0x13a9d8 */
  goto L_13a9d8;
  /* 13a9d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_13a9d8:;
  /* 13a9d8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 13a9dc: bl #0x13b074 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288672));
  fn1_13b074(c);
  /* 13a9e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a9e4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1288680));
  fn1_9cc20(c);
}

void fn1_14128c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039243404));
  /* 14128c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 141290: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 141294: stp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 141298: str x21, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 21));
  /* 14129c: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1412a0: add x29, sp, #0x90 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(144)));
  /* 1412a4: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 1412a8: nop  */
  /* nop: no architectural effect here */
  /* 1412ac: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1412b0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1412b4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1412b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1412bc: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1412c0: tbz w9, #0, #0x141344 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_141344;
L_1412c4:;
  /* 1412c4: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 1412c8: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1412cc: nop  */
  /* nop: no architectural effect here */
  /* 1412d0: adr x10, #0x156d40 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1412d4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1412d8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1412dc: stur x10, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 10));
  /* 1412e0: csinc x0, x9, x20, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 1412e4: bl #0x144570 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315560));
  fn1_144570(c);
  /* 1412e8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1412ec: b.ne #0x141314 */
  if (ARC_COND(c, 1)) goto L_141314;
  /* 1412f0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315572));
  fn1_142a58(c);
  /* 1412f4: nop  */
  /* nop: no architectural effect here */
  /* 1412f8: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1412fc: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 141300: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 141304: tbz w9, #0, #0x141364 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_141364;
L_141308:;
  /* 141308: nop  */
  /* nop: no architectural effect here */
  /* 14130c: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 141310: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_141314:;
  /* 141314: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 141318: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 14131c: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 141320: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 141324: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 141328: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315628));
  fn1_1388e8(c);
  /* 14132c: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 141330: ldr x21, [sp, #0xa0] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(160))));
  /* 141334: ldp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 141338: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 14133c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 141340: ret  */
  return;
L_141344:;
  /* 141344: nop  */
  /* nop: no architectural effect here */
  /* 141348: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 14134c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315664));
  fn1_1424b8(c);
  /* 141350: cbz w0, #0x1412c4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1412c4;
  /* 141354: nop  */
  /* nop: no architectural effect here */
  /* 141358: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 14135c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315680));
  fn1_1424d0(c);
  /* 141360: b #0x1412c4 */
  goto L_1412c4;
L_141364:;
  /* 141364: nop  */
  /* nop: no architectural effect here */
  /* 141368: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 14136c: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 141370: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315700));
  fn1_1424b8(c);
  /* 141374: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 141378: cbz w0, #0x141308 */
  if ((ARC_W_R(c, 0)) == 0) goto L_141308;
  /* 14137c: nop  */
  /* nop: no architectural effect here */
  /* 141380: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 141384: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315720));
  fn1_1424d0(c);
  /* 141388: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 14138c: b #0x141308 */
  goto L_141308;
}

void fn1_1428a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249064));
  /* 1428a8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1428ac: ldr x17, [x16, #0x18] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(24))));
  /* 1428b0: add x16, x16, #0x18 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(24)));
  /* 1428b4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1428b8: nop  */
  /* nop: no architectural effect here */
  /* 1428bc: nop  */
  /* nop: no architectural effect here */
}

void fn1_142ea8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250600));
  /* 142ea8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142eac: ldr x17, [x16, #0x218] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(536))));
  /* 142eb0: add x16, x16, #0x218 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(536)));
  /* 142eb4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142eb8: nop  */
  /* nop: no architectural effect here */
  /* 142ebc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1434a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252136));
  /* 1434a8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1434ac: ldr x17, [x16, #0x418] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1048))));
  /* 1434b0: add x16, x16, #0x418 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1048)));
  /* 1434b4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1434b8: nop  */
  /* nop: no architectural effect here */
  /* 1434bc: nop  */
  /* nop: no architectural effect here */
}

void fn1_143aa8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253672));
  /* 143aa8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143aac: ldr x17, [x16, #0x618] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1560))));
  /* 143ab0: add x16, x16, #0x618 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1560)));
  /* 143ab4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143ab8: nop  */
  /* nop: no architectural effect here */
  /* 143abc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1440a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255208));
  /* 1440a8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1440ac: ldr x17, [x16, #0x818] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2072))));
  /* 1440b0: add x16, x16, #0x818 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2072)));
  /* 1440b4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1440b8: nop  */
  /* nop: no architectural effect here */
  /* 1440bc: nop  */
  /* nop: no architectural effect here */
}

void fn1_1446a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256744));
  /* 1446a8: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 1446ac: ldr x17, [x16, #0xa18] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2584))));
  /* 1446b0: add x16, x16, #0xa18 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2584)));
  /* 1446b4: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1446b8: nop  */
  /* nop: no architectural effect here */
  /* 1446bc: nop  */
  /* nop: no architectural effect here */
}

