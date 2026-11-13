#include "lifted.h"
#include "df_lse.h"

void fn2_9bf38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076494648));
  /* 9bf38: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 9bf3c: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9bf40: str x19, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 19));
  /* 9bf44: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 9bf48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9bf4c: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 9bf50: add x1, x1, #0xf9a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3994)));
  /* 9bf54: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9bf58: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638812));
  fn2_1b7d24(c);
  /* 9bf5c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9bf60: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9bf64: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638824));
  fn2_1bc2f8(c);
  /* 9bf68: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9bf6c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638832));
  fn2_1ccd9c(c);
  /* 9bf70: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 9bf74: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 9bf78: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9bf7c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638848));
  fn2_1b7d24(c);
  /* 9bf80: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9bf84: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9bf88: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638860));
  fn2_1bc2f8(c);
  /* 9bf8c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9bf90: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638868));
  fn2_1ccd9c(c);
  /* 9bf94: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9bf98: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 9bf9c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 9bfa0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 9bfa4: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638888));
  fn2_1d9c5c(c);
  /* 9bfa8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9bfac: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9bfb0: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638900));
  fn2_1bc84c(c);
  /* 9bfb4: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 9bfb8: add x1, x1, #0x221 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(545)));
  /* 9bfbc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9bfc0: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638916));
  fn2_1b865c(c);
  /* 9bfc4: tbz w0, #0, #0x9bfd0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9bfd0;
  /* 9bfc8: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* 9bfcc: b #0x9bfdc */
  goto L_9bfdc;
L_9bfd0:;
  /* 9bfd0: add x0, x19, #0x71 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(113)));
  /* 9bfd4: bl #0x1ce4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638936));
  fn2_1ce4a4(c);
  /* 9bfd8: eor w19, w0, #1 */
  ARC_W_W(c, 19, (ARC_W_R(c, 0) ^ UINT64_C(1)));
L_9bfdc:;
  /* 9bfdc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9bfe0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638948));
  fn2_1ccd9c(c);
  /* 9bfe4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9bfe8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638956));
  fn2_1bc620(c);
  /* 9bfec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9bff0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638964));
  fn2_1bc620(c);
  /* 9bff4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9bff8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(638972));
  fn2_1bc620(c);
  /* 9bffc: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* 9c000: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9c004: ldr x19, [sp, #0x60] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(96))));
  /* 9c008: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 9c00c: ret  */
  return;
}

void fn2_9f558(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076508504));
  /* 9f558: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 9f55c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9f560: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9f564: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 9f568: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 9f56c: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f570: add x0, x0, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(56)));
  /* 9f574: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 9f578: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 9f57c: bl #0x1cde7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652672));
  fn2_1cde7c(c);
  /* 9f580: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 9f584: add x1, x1, #0xb6e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2926)));
  /* 9f588: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9f58c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652688));
  fn2_1b7d24(c);
  /* 9f590: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f594: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 9f598: mov x2, #-1 */
  ARC_X_W(c, 2, UINT64_C(18446744073709551615));
  /* 9f59c: bl #0x1cd1d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652704));
  fn2_1cd1d8(c);
  /* 9f5a0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 9f5a4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9f5a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652716));
  fn2_1ccd9c(c);
  /* 9f5ac: cmp x20, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(0));
  /* 9f5b0: b.le #0x9f62c */
  if (ARC_COND(c, 13)) goto L_9f62c;
  /* 9f5b4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 9f5b8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f5bc: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 9f5c0: bl #0x1cdd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652740));
  fn2_1cdd9c(c);
  /* 9f5c4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 9f5c8: add x1, x1, #0x2bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(700)));
  /* 9f5cc: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 9f5d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9f5d4: bl #0x1b7f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652760));
  fn2_1b7f54(c);
  /* 9f5d8: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 9f5dc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f5e0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9f5e4: mov x2, #-1 */
  ARC_X_W(c, 2, UINT64_C(18446744073709551615));
  /* 9f5e8: bl #0x1ccf2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652780));
  fn2_1ccf2c(c);
  /* 9f5ec: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9f5f0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9f5f4: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 9f5f8: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652796));
  fn2_1cf868(c);
  /* 9f5fc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9f600: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652804));
  fn2_1ccd9c(c);
  /* 9f604: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 9f608: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652812));
  fn2_1ccd9c(c);
  /* 9f60c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9f610: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652820));
  fn2_1ccd9c(c);
  /* 9f614: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f618: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652828));
  fn2_1ccd9c(c);
  /* 9f61c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9f620: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9f624: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 9f628: ret  */
  return;
L_9f62c:;
  /* 9f62c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 9f630: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 9f634: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9f638: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652860));
  fn2_1b7d24(c);
  /* 9f63c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9f640: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(652868));
  fn2_1ccd9c(c);
  /* 9f644: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9f648: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9f64c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 9f650: ret  */
  return;
}

void fn2_a7608(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076541448));
  /* a7608: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a760c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a7610: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7614: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* a7618: add x8, x8, #0xa50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2640)));
  /* a761c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a7620: str x8, [x0], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7624: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(685608));
  fn2_1d79fc(c);
  /* a7628: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a762c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7630: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a7634: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_a878c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076545932));
  /* a878c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8790: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a8794: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a8798: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* a879c: add x8, x8, #0xbb8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3000)));
  /* a87a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a87a4: add x0, x0, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* a87a8: str x8, [x19], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a87ac: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(690096));
  fn2_1d79fc(c);
  /* a87b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a87b4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a87b8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a87bc: b #0x1ccd9c */
  fn2_1ccd9c(c); return;
}

void fn2_a9470(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076549232));
  /* a9470: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a9474: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a9478: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a947c: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* a9480: add x8, x8, #0xd20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3360)));
  /* a9484: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a9488: str x8, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a948c: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(693392));
  fn2_1d79fc(c);
  /* a9490: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a9494: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a9498: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a949c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_a9f90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076552080));
  /* a9f90: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a9f94: ret  */
  return;
}

void fn2_aa530(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076553520));
  /* aa530: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* aa534: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* aa538: ret  */
  return;
}

void fn2_ab578(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076557688));
  /* ab578: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* ab57c: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ab580: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ab584: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* ab588: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ab58c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ab590: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* ab594: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* ab598: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab59c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701856));
  fn2_1b7d24(c);
  /* ab5a0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ab5a4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab5a8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701868));
  fn2_1bc2f8(c);
  /* ab5ac: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab5b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701876));
  fn2_1ccd9c(c);
  /* ab5b4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ab5b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ab5bc: bl #0x1bbf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701888));
  fn2_1bbf90(c);
  /* ab5c0: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701892));
  fn2_1bcc90(c);
  /* ab5c4: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* ab5c8: b.ne #0xab69c */
  if (ARC_COND(c, 1)) goto L_ab69c;
  /* ab5cc: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* ab5d0: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* ab5d4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab5d8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701916));
  fn2_1b7d24(c);
  /* ab5dc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ab5e0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab5e4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701928));
  fn2_1bc2f8(c);
  /* ab5e8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab5ec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701936));
  fn2_1ccd9c(c);
  /* ab5f0: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* ab5f4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ab5f8: bl #0x1bbf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701948));
  fn2_1bbf90(c);
  /* ab5fc: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* ab600: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701956));
  fn2_1bccb8(c);
  /* ab604: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* ab608: add x1, x1, #0xc7c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3196)));
  /* ab60c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab610: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701972));
  fn2_1b7d24(c);
  /* ab614: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* ab618: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab61c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701984));
  fn2_1bc2f8(c);
  /* ab620: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab624: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(701992));
  fn2_1ccd9c(c);
  /* ab628: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ab62c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702000));
  fn2_1bc084(c);
  /* ab630: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab634: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* ab638: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* ab63c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* ab640: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702020));
  fn2_1d9c5c(c);
  /* ab644: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ab648: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702028));
  fn2_1bc620(c);
  /* ab64c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* ab650: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702036));
  fn2_1bc620(c);
  /* ab654: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* ab658: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702044));
  fn2_1d97fc(c);
  /* ab65c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ab660: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702052));
  fn2_1bc620(c);
  /* ab664: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ab668: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702060));
  fn2_1bc620(c);
  /* ab66c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab670: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702068));
  fn2_1bcc90(c);
  /* ab674: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* ab678: b.eq #0xab6bc */
  if (ARC_COND(c, 0)) goto L_ab6bc;
L_ab67c:;
  /* ab67c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ab680: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702084));
  fn2_1d9740(c);
  /* ab684: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab688: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702092));
  fn2_1bc620(c);
  /* ab68c: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ab690: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ab694: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* ab698: ret  */
  return;
L_ab69c:;
  /* ab69c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab6a0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702116));
  fn2_1bc084(c);
  /* ab6a4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ab6a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702124));
  fn2_1bc620(c);
  /* ab6ac: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab6b0: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702132));
  fn2_1bcc90(c);
  /* ab6b4: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* ab6b8: b.ne #0xab67c */
  if (ARC_COND(c, 1)) goto L_ab67c;
L_ab6bc:;
  /* ab6bc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab6c0: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* ab6c4: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702152));
  fn2_1bccb8(c);
  /* ab6c8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ab6cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(702160));
  fn2_1bc620(c);
  /* ab6d0: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ab6d4: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ab6d8: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* ab6dc: ret  */
  return;
}

void fn2_ac2fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076561148));
  /* ac2fc: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* ac300: ret  */
  return;
}

void fn2_acdd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076563928));
  /* acdd8: adrp x0, #0xad000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(708608)));
  /* acddc: add x0, x0, #0x2ac */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(684)));
  /* acde0: ret  */
  return;
}

void fn2_adb98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076567448));
  /* adb98: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* adb9c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* adba0: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* adba4: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_ae8e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076570852));
  /* ae8e4: ldr x0, [x0, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* ae8e8: ret  */
  return;
}

void fn2_aea30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076571184));
  /* aea30: b #0x9a264 */
  fn2_9a264(c); return;
}

void fn2_afb84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076575620));
  /* afb84: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* afb88: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* afb8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* afb90: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* afb94: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* afb98: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* afb9c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* afba0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(719780));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* afba4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* afba8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* afbac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* afbb0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* afbb4: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_b0488(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076577928));
  /* b0488: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b048c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b0490: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0494: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b0498: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* b049c: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* b04a0: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* b04a4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b04a8: cbz x0, #0xb04d8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b04d8;
L_b04ac:;
  /* b04ac: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* b04b0: cbz x1, #0xb04c8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_b04c8;
  /* b04b4: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722104));
  fn2_aeb74(c);
  /* b04b8: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b04bc: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* b04c0: cbnz w8, #0xb04ac */
  if ((ARC_W_R(c, 8)) != 0) goto L_b04ac;
  /* b04c4: b #0xb04d0 */
  goto L_b04d0;
L_b04c8:;
  /* b04c8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* b04cc: cbnz w8, #0xb04e8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_b04e8;
L_b04d0:;
  /* b04d0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b04d4: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722136));
  fn2_1b5ce8(c);
L_b04d8:;
  /* b04d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b04dc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b04e0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b04e4: b #0x24b730 */
  fn2_24b730(c); return;
L_b04e8:;
  /* b04e8: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* b04ec: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* b04f0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* b04f4: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* b04f8: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* b04fc: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* b0500: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* b0504: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* b0508: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* b050c: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722192));
  fn2_1b54b0(c);
  /* b0510: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b0514: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0518: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b051c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b10cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076581068));
  /* b10cc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b10d0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b10d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b10d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b10dc: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(725216));
  fn2_1b6040(c);
  /* b10e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b10e4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b10e8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b10ec: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b2154(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076585300));
  /* b2154: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2158: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b215c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b2160: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2164: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b2168: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* b216c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* b2170: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b2174: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* b2178: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* b217c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729472));
  fn2_1b5d1c(c);
  /* b2180: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* b2184: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b2188: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b218c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* b2190: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b2194: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* b2198: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b219c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729504));
  fn2_1d2c2c(c);
  /* b21a0: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b21a4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729512));
  fn2_1d2c2c(c);
  /* b21a8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* b21ac: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* b21b0: add x8, x8, #0xbe0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3040)));
  /* b21b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b21b8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b21bc: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* b21c0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b21c4: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b21c8: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* b21cc: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* b21d0: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* b21d4: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* b21d8: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729564));
  fn2_1b5e68(c);
  /* b21dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b21e0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b21e4: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* b21e8: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729580));
  fn2_1b5d9c(c);
  /* b21ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b21f0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b21f4: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729592));
  fn2_1b5d8c(c);
  /* b21f8: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b21fc: add x8, x8, #0xdb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3504)));
  /* b2200: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b2204: tbz w8, #0, #0xb2240 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b2240;
L_b2208:;
  /* b2208: adrp x1, #0x25c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b220c: add x1, x1, #0xda8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3496)));
  /* b2210: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b2214: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729624));
  fn2_1d2c40(c);
  /* b2218: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b221c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b2220: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729636));
  fn2_1d5dc0(c);
  /* b2224: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b2228: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729644));
  fn2_1d2d24(c);
  /* b222c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2230: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b2234: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b2238: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b223c: ret  */
  return;
L_b2240:;
  /* b2240: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2244: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b2248: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729676));
  fn2_24b710(c);
  /* b224c: cbz w0, #0xb2208 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b2208;
  /* b2250: adrp x20, #0x25c000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2254: add x20, x20, #0xda8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3496)));
  /* b2258: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* b225c: add x1, x1, #0x51c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1308)));
  /* b2260: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b2264: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729704));
  fn2_1b907c(c);
  /* b2268: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* b226c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* b2270: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* b2274: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* b2278: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b227c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729728));
  fn2_24b6f0(c);
  /* b2280: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2284: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b2288: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(729740));
  fn2_24b720(c);
  /* b228c: b #0xb2208 */
  goto L_b2208;
}

void fn2_b324c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076589644));
  /* b324c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b3250: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b3254: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b3258: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b325c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b3260: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* b3264: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* b3268: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b326c: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* b3270: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* b3274: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(733816));
  fn2_1b5d1c(c);
  /* b3278: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* b327c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b3280: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b3284: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* b3288: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b328c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* b3290: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b3294: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(733848));
  fn2_1d2c2c(c);
  /* b3298: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b329c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(733856));
  fn2_1d2c2c(c);
  /* b32a0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* b32a4: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* b32a8: add x8, x8, #0xd60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3424)));
  /* b32ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b32b0: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* b32b4: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* b32b8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b32bc: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b32c0: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* b32c4: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* b32c8: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* b32cc: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* b32d0: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* b32d4: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(733912));
  fn2_1b5e68(c);
  /* b32d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b32dc: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b32e0: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* b32e4: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(733928));
  fn2_1b5d9c(c);
  /* b32e8: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b32ec: add x8, x8, #0xdb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3504)));
  /* b32f0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b32f4: tbz w8, #0, #0xb3330 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b3330;
L_b32f8:;
  /* b32f8: adrp x1, #0x25c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b32fc: add x1, x1, #0xda8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3496)));
  /* b3300: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b3304: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(733960));
  fn2_1d2c40(c);
  /* b3308: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b330c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b3310: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(733972));
  fn2_1d5dc0(c);
  /* b3314: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b3318: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(733980));
  fn2_1d2d24(c);
  /* b331c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b3320: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3324: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b3328: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b332c: ret  */
  return;
L_b3330:;
  /* b3330: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b3334: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b3338: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(734012));
  fn2_24b710(c);
  /* b333c: cbz w0, #0xb32f8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b32f8;
  /* b3340: adrp x20, #0x25c000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b3344: add x20, x20, #0xda8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3496)));
  /* b3348: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* b334c: add x1, x1, #0x51c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1308)));
  /* b3350: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b3354: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(734040));
  fn2_1b907c(c);
  /* b3358: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* b335c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* b3360: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* b3364: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* b3368: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b336c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(734064));
  fn2_24b6f0(c);
  /* b3370: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b3374: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b3378: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(734076));
  fn2_24b720(c);
  /* b337c: b #0xb32f8 */
  goto L_b32f8;
}

void fn2_b4718(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076594968));
  /* b4718: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b471c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b4720: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b4724: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b4728: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* b472c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* b4730: b.hi #0xb47b4 */
  if (ARC_COND(c, 8)) goto L_b47b4;
  /* b4734: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* b4738: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* b473c: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* b4740: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739140));
  fn2_1d2c2c(c);
  /* b4744: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* b4748: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739148));
  fn2_1d2c2c(c);
  /* b474c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b4750: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* b4754: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739160));
  fn2_1ccc74(c);
  /* b4758: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* b475c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b4760: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* b4764: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b4768: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* b476c: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* b4770: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739188));
  fn2_b2de4(c);
  /* b4774: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b4778: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* b477c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b4780: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739204));
  fn2_b2de4(c);
  /* b4784: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b4788: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* b478c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b4790: bl #0xb4020 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739220));
  fn2_b4020(c);
  /* b4794: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b4798: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* b479c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b47a0: bl #0xb1e98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739236));
  fn2_b1e98(c);
  /* b47a4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b47a8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b47ac: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b47b0: ret  */
  return;
L_b47b4:;
  /* b47b4: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* b47b8: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* b47bc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b47c0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b47c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b47c8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739276));
  fn2_1b8fd4(c);
  /* b47cc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b47d0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b47d4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739288));
  fn2_1b7d24(c);
  /* b47d8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b47dc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b47e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b47e4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739304));
  fn2_1b8fd4(c);
  /* b47e8: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* b47ec: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* b47f0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739316));
  fn2_1d2c2c(c);
  /* b47f4: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* b47f8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739324));
  fn2_1d2c2c(c);
  /* b47fc: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b4800: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* b4804: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739336));
  fn2_1ccc74(c);
  /* b4808: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* b480c: mov w8, #0x1a */
  ARC_W_W(c, 8, UINT64_C(26));
  /* b4810: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* b4814: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b4818: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* b481c: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* b4820: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739364));
  fn2_1d5dc0(c);
  /* b4824: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b4828: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* b482c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* b4830: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739380));
  fn2_1d06b8(c);
  /* b4834: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* b4838: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b483c: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* b4840: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739396));
  fn2_1d5dc0(c);
  /* b4844: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b4848: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739404));
  fn2_1d2d24(c);
  /* b484c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b4850: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739412));
  fn2_1ccd9c(c);
  /* b4854: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b4858: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739420));
  fn2_1d2d24(c);
  /* b485c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4860: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4864: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b4868: ret  */
  return;
}

void fn2_b59fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076599804));
  /* b59fc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b5a00: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b5a04: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b5a08: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b5a0c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* b5a10: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b5a14: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* b5a18: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* b5a1c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b5a20: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* b5a24: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* b5a28: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(743980));
  fn2_1b5d1c(c);
  /* b5a2c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* b5a30: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* b5a34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b5a38: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* b5a3c: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* b5a40: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* b5a44: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b5a48: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744012));
  fn2_1d2c2c(c);
  /* b5a4c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b5a50: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744020));
  fn2_1d2c2c(c);
  /* b5a54: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* b5a58: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* b5a5c: add x8, x8, #0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(0)));
  /* b5a60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b5a64: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b5a68: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* b5a6c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b5a70: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b5a74: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* b5a78: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* b5a7c: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* b5a80: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* b5a84: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744072));
  fn2_1b5e68(c);
  /* b5a88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b5a8c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b5a90: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* b5a94: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744088));
  fn2_1b5d9c(c);
  /* b5a98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b5a9c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b5aa0: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744100));
  fn2_1b5d8c(c);
  /* b5aa4: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b5aa8: add x8, x8, #0xdb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3504)));
  /* b5aac: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b5ab0: tbz w8, #0, #0xb5af0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b5af0;
L_b5ab4:;
  /* b5ab4: adrp x1, #0x25c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b5ab8: add x1, x1, #0xda8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3496)));
  /* b5abc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b5ac0: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744132));
  fn2_1d2c40(c);
  /* b5ac4: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b5ac8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b5acc: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744144));
  fn2_1d5dc0(c);
  /* b5ad0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b5ad4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744152));
  fn2_1d2d24(c);
  /* b5ad8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b5adc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b5ae0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b5ae4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b5ae8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b5aec: ret  */
  return;
L_b5af0:;
  /* b5af0: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b5af4: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b5af8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744188));
  fn2_24b710(c);
  /* b5afc: cbz w0, #0xb5ab4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b5ab4;
  /* b5b00: adrp x20, #0x25c000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b5b04: add x20, x20, #0xda8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3496)));
  /* b5b08: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* b5b0c: add x1, x1, #0x51c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1308)));
  /* b5b10: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b5b14: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744216));
  fn2_1b907c(c);
  /* b5b18: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* b5b1c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* b5b20: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* b5b24: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* b5b28: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b5b2c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744240));
  fn2_24b6f0(c);
  /* b5b30: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b5b34: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b5b38: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744252));
  fn2_24b720(c);
  /* b5b3c: b #0xb5ab4 */
  goto L_b5ab4;
}

void fn2_b6a64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076604004));
  /* b6a64: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b6a68: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6a6c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6a70: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b6a74: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* b6a78: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* b6a7c: b.hi #0xb6ae0 */
  if (ARC_COND(c, 8)) goto L_b6ae0;
  /* b6a80: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* b6a84: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* b6a88: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* b6a8c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748176));
  fn2_1d2c2c(c);
  /* b6a90: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* b6a94: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748184));
  fn2_1d2c2c(c);
  /* b6a98: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b6a9c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* b6aa0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748196));
  fn2_1ccc74(c);
  /* b6aa4: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* b6aa8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b6aac: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* b6ab0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b6ab4: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* b6ab8: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* b6abc: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748224));
  fn2_b2de4(c);
  /* b6ac0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b6ac4: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* b6ac8: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* b6acc: bl #0xb1d4c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748240));
  fn2_b1d4c(c);
  /* b6ad0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6ad4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6ad8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b6adc: ret  */
  return;
L_b6ae0:;
  /* b6ae0: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* b6ae4: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* b6ae8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b6aec: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b6af0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b6af4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748280));
  fn2_1b8fd4(c);
  /* b6af8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b6afc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b6b00: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748292));
  fn2_1b7d24(c);
  /* b6b04: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b6b08: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b6b0c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b6b10: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748308));
  fn2_1b8fd4(c);
  /* b6b14: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* b6b18: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* b6b1c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748320));
  fn2_1d2c2c(c);
  /* b6b20: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* b6b24: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748328));
  fn2_1d2c2c(c);
  /* b6b28: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b6b2c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* b6b30: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748340));
  fn2_1ccc74(c);
  /* b6b34: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* b6b38: mov w8, #0x1a */
  ARC_W_W(c, 8, UINT64_C(26));
  /* b6b3c: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* b6b40: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b6b44: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* b6b48: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* b6b4c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748368));
  fn2_1d5dc0(c);
  /* b6b50: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b6b54: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* b6b58: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* b6b5c: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748384));
  fn2_1d06b8(c);
  /* b6b60: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* b6b64: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b6b68: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* b6b6c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748400));
  fn2_1d5dc0(c);
  /* b6b70: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b6b74: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748408));
  fn2_1d2d24(c);
  /* b6b78: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b6b7c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748416));
  fn2_1ccd9c(c);
  /* b6b80: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b6b84: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748424));
  fn2_1d2d24(c);
  /* b6b88: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6b8c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6b90: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b6b94: ret  */
  return;
}

void fn2_b7b24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076608292));
  /* b7b24: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* b7b28: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7b2c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b7b30: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7b34: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* b7b38: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* b7b3c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7b40: cmp w8, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 0));
  /* b7b44: b.ne #0xb7c50 */
  if (ARC_COND(c, 1)) goto L_b7c50;
  /* b7b48: adrp x21, #0x1e000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(122880)));
  /* b7b4c: add x21, x21, #0xb6f */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2927)));
  /* b7b50: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* b7b54: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b7b58: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b7b5c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b7b60: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752484));
  fn2_1b8fd4(c);
  /* b7b64: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* b7b68: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b7b6c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752496));
  fn2_1b7d24(c);
  /* b7b70: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* b7b74: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* b7b78: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b7b7c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752512));
  fn2_1b8fd4(c);
  /* b7b80: add x21, sp, #4 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(4)));
  /* b7b84: str wzr, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 31));
  /* b7b88: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* b7b8c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752528));
  fn2_1d2c2c(c);
  /* b7b90: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* b7b94: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752536));
  fn2_1d2c2c(c);
  /* b7b98: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* b7b9c: str wzr, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* b7ba0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752548));
  fn2_1ccc74(c);
  /* b7ba4: mov w22, #6 */
  ARC_W_W(c, 22, UINT64_C(6));
  /* b7ba8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* b7bac: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* b7bb0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b7bb4: str w22, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 22));
  /* b7bb8: str w8, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* b7bbc: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752576));
  fn2_1d5dc0(c);
  /* b7bc0: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* b7bc4: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* b7bc8: str wzr, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* b7bcc: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752592));
  fn2_1d06b8(c);
  /* b7bd0: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* b7bd4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* b7bd8: str w22, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 22));
  /* b7bdc: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752608));
  fn2_1d5dc0(c);
  /* b7be0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* b7be4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752616));
  fn2_1d2d24(c);
  /* b7be8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* b7bec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752624));
  fn2_1ccd9c(c);
  /* b7bf0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b7bf4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752632));
  fn2_1d2d24(c);
  /* b7bf8: ldr w8, [sp, #4] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(4))));
  /* b7bfc: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* b7c00: add x1, x21, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* b7c04: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* b7c08: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752652));
  fn2_1d2b98(c);
  /* b7c0c: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* b7c10: add x1, x21, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* b7c14: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752664));
  fn2_1d2b98(c);
  /* b7c18: ldr w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(24))));
  /* b7c1c: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* b7c20: add x1, x21, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* b7c24: str w8, [x20, #0x14] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(20)), ARC_W_R(c, 8));
  /* b7c28: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752684));
  fn2_1d0708(c);
  /* b7c2c: ldr w8, [sp, #0x24] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(36))));
  /* b7c30: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* b7c34: str w8, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 8));
  /* b7c38: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752700));
  fn2_1ccd9c(c);
  /* b7c3c: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* b7c40: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752708));
  fn2_1d2d24(c);
  /* b7c44: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* b7c48: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(752716));
  fn2_1d2d24(c);
  /* b7c4c: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
L_b7c50:;
  /* b7c50: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* b7c54: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* b7c58: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7c5c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b7c60: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7c64: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* b7c68: ret  */
  return;
}

void fn2_bac08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076620808));
  /* bac08: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* bac0c: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bac10: str x28, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), ARC_X_R(c, 28));
  /* bac14: stp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bac18: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bac1c: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* bac20: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bac24: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bac28: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* bac2c: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* bac30: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* bac34: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(764984));
  fn2_1b7d24(c);
  /* bac38: sub x0, x29, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* bac3c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* bac40: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(764996));
  fn2_1bc2f8(c);
  /* bac44: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* bac48: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765004));
  fn2_1ccd9c(c);
  /* bac4c: sub x1, x29, #0x68 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* bac50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bac54: bl #0x1bbf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765016));
  fn2_1bbf90(c);
  /* bac58: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765020));
  fn2_1bc668(c);
  /* bac5c: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* bac60: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* bac64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bac68: bl #0xb99b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765036));
  fn2_b99b0(c);
  /* bac6c: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* bac70: sub x0, x29, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* bac74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765048));
  fn2_1bc620(c);
  /* bac78: tbz w21, #0, #0xbaec0 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_baec0;
  /* bac7c: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765056));
  fn2_205d68(c);
  /* bac80: bl #0x206d2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765060));
  fn2_206d2c(c);
  /* bac84: bl #0xae3c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765064));
  fn2_ae3c4(c);
  /* bac88: cbz x0, #0xbaee4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_baee4;
  /* bac8c: fmov d0, #1.50000000 */
  arc_d_w(c, 0, (double)(1.5));
  /* bac90: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* bac94: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* bac98: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* bac9c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* baca0: bl #0x22a480 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765092));
  fn2_22a480(c);
  /* baca4: ldr x19, [x29, #0x18] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* baca8: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* bacac: add x1, x1, #0x250 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(592)));
  /* bacb0: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* bacb4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* bacb8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765116));
  fn2_1b8fd4(c);
  /* bacbc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* bacc0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bacc4: add x21, sp, #8 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(8)));
  /* bacc8: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765132));
  fn2_1ccc88(c);
  /* baccc: add x0, x21, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* bacd0: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* bacd4: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765144));
  fn2_1ccc88(c);
  /* bacd8: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* bacdc: add x1, x20, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* bace0: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765156));
  fn2_1bc0b8(c);
  /* bace4: ldrb w8, [x20, #0x28] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(40))));
  /* bace8: add x0, x21, #0x29 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(41)));
  /* bacec: add x1, x20, #0x29 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(41)));
  /* bacf0: strb w8, [sp, #0x30] */
  arc_st8(((c)->sp + INT64_C(48)), ARC_W_R(c, 8));
  /* bacf4: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765176));
  fn2_1ddca4(c);
  /* bacf8: add x0, x21, #0x39 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(57)));
  /* bacfc: add x1, x20, #0x39 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(57)));
  /* bad00: bl #0x1e4590 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765188));
  fn2_1e4590(c);
  /* bad04: add x0, x21, #0x49 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(73)));
  /* bad08: add x1, x20, #0x49 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(73)));
  /* bad0c: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765200));
  fn2_1d788c(c);
  /* bad10: ldr x8, [x20, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(96))));
  /* bad14: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* bad18: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* bad1c: mov w0, #0x78 */
  ARC_W_W(c, 0, UINT64_C(120));
  /* bad20: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* bad24: str x8, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), ARC_X_R(c, 8));
  /* bad28: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765228));
  fn2_1b5d1c(c);
  /* bad2c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bad30: sub x0, x29, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* bad34: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* bad38: sub x22, x29, #0x68 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* bad3c: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765248));
  fn2_1ccc88(c);
  /* bad40: add x0, x22, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* bad44: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* bad48: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765260));
  fn2_1ccc88(c);
  /* bad4c: add x0, x22, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* bad50: add x1, x21, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* bad54: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765272));
  fn2_1bc0b8(c);
  /* bad58: ldrb w8, [sp, #0x30] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(48))));
  /* bad5c: add x0, x22, #0x29 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(41)));
  /* bad60: add x1, x21, #0x29 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(41)));
  /* bad64: sturb w8, [x29, #-0x40] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-64)), ARC_W_R(c, 8));
  /* bad68: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765292));
  fn2_1ddca4(c);
  /* bad6c: add x0, x22, #0x39 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(57)));
  /* bad70: add x1, x21, #0x39 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(57)));
  /* bad74: bl #0x1e4590 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765304));
  fn2_1e4590(c);
  /* bad78: add x0, x22, #0x49 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(73)));
  /* bad7c: add x1, x21, #0x49 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(73)));
  /* bad80: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765316));
  fn2_1d788c(c);
  /* bad84: ldr x8, [sp, #0x68] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(104))));
  /* bad88: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* bad8c: sub x1, x29, #0x68 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* bad90: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* bad94: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* bad98: add x8, x8, #0x898 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2200)));
  /* bad9c: stp x8, xzr, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* bada0: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765348));
  fn2_1ccc88(c);
  /* bada4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* bada8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* badac: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765360));
  fn2_1ccc88(c);
  /* badb0: add x0, x20, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(32)));
  /* badb4: add x1, x22, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* badb8: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765372));
  fn2_1bc0b8(c);
  /* badbc: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* badc0: add x0, x20, #0x39 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(57)));
  /* badc4: add x1, x22, #0x29 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(41)));
  /* badc8: strb w8, [x20, #0x38] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(56)), ARC_W_R(c, 8));
  /* badcc: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765392));
  fn2_1ddca4(c);
  /* badd0: add x0, x20, #0x49 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(73)));
  /* badd4: add x1, x22, #0x39 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(57)));
  /* badd8: bl #0x1e4590 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765404));
  fn2_1e4590(c);
  /* baddc: add x0, x20, #0x59 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(89)));
  /* bade0: add x1, x22, #0x49 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(73)));
  /* bade4: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765416));
  fn2_1d788c(c);
  /* bade8: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* badec: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* badf0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* badf4: str x8, [x20, #0x70] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(112)), ARC_X_R(c, 8));
  /* badf8: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765436));
  fn2_1b75a4(c);
  /* badfc: add x0, x22, #0x49 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(73)));
  /* bae00: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765444));
  fn2_1d79fc(c);
  /* bae04: add x0, x22, #0x39 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(57)));
  /* bae08: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765452));
  fn2_1e46f4(c);
  /* bae0c: add x0, x22, #0x29 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(41)));
  /* bae10: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765460));
  fn2_1dde08(c);
  /* bae14: add x0, x22, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* bae18: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765468));
  fn2_1bc620(c);
  /* bae1c: add x0, x22, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* bae20: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765476));
  fn2_1ccd9c(c);
  /* bae24: sub x0, x29, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* bae28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765484));
  fn2_1ccd9c(c);
  /* bae2c: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* bae30: add x2, sp, #0x70 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(112)));
  /* bae34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bae38: mov w3, #4 */
  ARC_W_W(c, 3, UINT64_C(4));
  /* bae3c: bl #0x221ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765504));
  fn2_221ca0(c);
  /* bae40: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* bae44: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765512));
  fn2_1d79fc(c);
  /* bae48: add x0, x21, #0x49 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(73)));
  /* bae4c: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765520));
  fn2_1d79fc(c);
  /* bae50: add x0, x21, #0x39 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(57)));
  /* bae54: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765528));
  fn2_1e46f4(c);
  /* bae58: add x0, x21, #0x29 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(41)));
  /* bae5c: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765536));
  fn2_1dde08(c);
  /* bae60: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* bae64: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765544));
  fn2_1bc620(c);
  /* bae68: add x0, x21, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* bae6c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765552));
  fn2_1ccd9c(c);
  /* bae70: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* bae74: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765560));
  fn2_1ccd9c(c);
  /* bae78: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* bae7c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765568));
  fn2_1d2d24(c);
  /* bae80: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* bae84: cbz x0, #0xbaea8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_baea8;
  /* bae88: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765580));
  fn2_225abc(c);
  /* bae8c: tbz w0, #0, #0xbaea8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_baea8;
  /* bae90: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* bae94: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* bae98: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* bae9c: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* baea0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* baea4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765608));
  arc_dispatch(c, ARC_X_R(c, 9));
L_baea8:;
  /* baea8: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* baeac: ldr x28, [sp, #0x100] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(256))));
  /* baeb0: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* baeb4: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* baeb8: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* baebc: ret  */
  return;
L_baec0:;
  /* baec0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* baec4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* baec8: bl #0xbaf24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765644));
  fn2_baf24(c);
  /* baecc: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* baed0: ldr x28, [sp, #0x100] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(256))));
  /* baed4: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* baed8: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* baedc: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* baee0: ret  */
  return;
L_baee4:;
  /* baee4: adrp x0, #0x22000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(139264)));
  /* baee8: add x0, x0, #0xebe */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3774)));
  /* baeec: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* baef0: add x1, x1, #0xc83 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3203)));
  /* baef4: adrp x3, #0x25000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(151552)));
  /* baef8: add x3, x3, #0xc3f */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3135)));
  /* baefc: mov w2, #0x11c */
  ARC_W_W(c, 2, UINT64_C(284));
  /* baf00: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* baf04: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* baf08: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(765708));
  fn2_1b54b0(c);
  /* baf0c: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* baf10: ldr x28, [sp, #0x100] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(256))));
  /* baf14: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* baf18: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* baf1c: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* baf20: ret  */
  return;
}

void fn2_bd130(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076630320));
  /* bd130: adrp x0, #0xbd000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(774144)));
  /* bd134: add x0, x0, #0x374 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(884)));
  /* bd138: ret  */
  return;
}

void fn2_bda10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076632592));
  /* bda10: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* bda14: cbz x0, #0xbda48 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bda48;
  /* bda18: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bda1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bda20: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* bda24: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* bda28: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* bda2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(776752));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bda30: cbz x0, #0xbda40 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bda40;
  /* bda34: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(776760));
  fn2_1b62dc(c);
  /* bda38: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* bda3c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_bda40:;
  /* bda40: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bda44: ret  */
  return;
L_bda48:;
  /* bda48: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bda4c: ret  */
  return;
}

void fn2_be278(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076634744));
  /* be278: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be27c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* be280: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* be284: add x8, x8, #0xf00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3840)));
  /* be288: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* be28c: tbnz w8, #0, #0xbe2bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_be2bc;
  /* be290: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* be294: add x0, x0, #0xf00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3840)));
  /* be298: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(778908));
  fn2_24b710(c);
  /* be29c: cbz w0, #0xbe2bc */
  if ((ARC_W_R(c, 0)) == 0) goto L_be2bc;
  /* be2a0: nop  */
  /* nop: no architectural effect here */
  /* be2a4: adr x0, #0xbfa08 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(784904)));
  /* be2a8: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(778924));
  fn2_1aff64(c);
  /* be2ac: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* be2b0: add x0, x0, #0xf00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3840)));
  /* be2b4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be2b8: b #0x24b720 */
  fn2_24b720(c); return;
L_be2bc:;
  /* be2bc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be2c0: ret  */
  return;
}

void fn2_bf47c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076639356));
  /* bf47c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf480: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bf484: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bf488: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bf48c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* bf490: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* bf494: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* bf498: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* bf49c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(783520));
  fn2_1b5d1c(c);
  /* bf4a0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bf4a4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bf4a8: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(783532));
  fn2_1afdf8(c);
  /* bf4ac: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* bf4b0: add x8, x8, #0x530 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1328)));
  /* bf4b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bf4b8: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* bf4bc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bf4c0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf4c4: ret  */
  return;
}

void fn2_bfe70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076641904));
  /* bfe70: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bfe74: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bfe78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bfe7c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bfe80: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* bfe84: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* bfe88: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* bfe8c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* bfe90: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(786068));
  fn2_1b5d1c(c);
  /* bfe94: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bfe98: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bfe9c: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(786080));
  fn2_1afdf8(c);
  /* bfea0: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* bfea4: add x8, x8, #0x6d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1752)));
  /* bfea8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bfeac: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* bfeb0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bfeb4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bfeb8: ret  */
  return;
}

void fn2_c08b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076644528));
  /* c08b0: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* c08b4: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c08b8: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c08bc: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c08c0: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c08c4: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c08c8: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c08cc: ldp x26, x25, [x5] */
  { const uint64_t _pa = ARC_X_R(c, 5);
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c08d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* c08d4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c08d8: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* c08dc: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* c08e0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* c08e4: mov w24, w2 */
  ARC_W_W(c, 24, ARC_W_R(c, 2));
  /* c08e8: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* c08ec: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788720));
  fn2_1bc084(c);
  /* c08f0: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* c08f4: b.lt #0xc091c */
  if (ARC_COND(c, 11)) goto L_c091c;
  /* c08f8: ldr x1, [x23] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 23)));
  /* c08fc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0900: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788740));
  fn2_1bc09c(c);
  /* c0904: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c0908: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c090c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788752));
  fn2_1bcf04(c);
  /* c0910: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0914: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788760));
  fn2_1bc620(c);
  /* c0918: b #0xc094c */
  goto L_c094c;
L_c091c:;
  /* c091c: sub x8, x25, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) - ARC_X_R(c, 26)));
  /* c0920: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* c0924: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* c0928: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* c092c: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* c0930: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c0934: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* c0938: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* c093c: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* c0940: nop  */
  /* nop: no architectural effect here */
  /* c0944: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* c0948: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788812));
  fn2_1bce10(c);
L_c094c:;
  /* c094c: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* c0950: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c0954: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* c0958: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788828));
  fn2_1bc84c(c);
  /* c095c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* c0960: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788836));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* c0964: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* c0968: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c096c: and w1, w8, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c0970: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788852));
  fn2_1bc25c(c);
  /* c0974: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0978: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c097c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788864));
  fn2_1bcf04(c);
  /* c0980: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0984: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788872));
  fn2_1bc620(c);
  /* c0988: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* c098c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788880));
  fn2_1ccd9c(c);
  /* c0990: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c0994: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(788888));
  fn2_1bc620(c);
  /* c0998: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c099c: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c09a0: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c09a4: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c09a8: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c09ac: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* c09b0: ret  */
  return;
}

void fn2_c1d6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076649836));
  /* c1d6c: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* c1d70: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c1d74: str x23, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 23));
  /* c1d78: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c1d7c: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c1d80: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* c1d84: add x21, x0, x2, asr #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* c1d88: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* c1d8c: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* c1d90: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c1d94: str wzr, [x5] */
  arc_st32(ARC_X_R(c, 5), ARC_W_R(c, 31));
  /* c1d98: tbz w2, #0, #0xc1da4 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_c1da4;
  /* c1d9c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* c1da0: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_c1da4:;
  /* c1da4: ldr x0, [x22] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 22)));
  /* c1da8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* c1dac: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794032));
  fn2_1bc84c(c);
  /* c1db0: ldr x0, [x22, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* c1db4: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* c1db8: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794044));
  fn2_1bc84c(c);
  /* c1dbc: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* c1dc0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* c1dc4: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794056));
  fn2_1bc0b8(c);
  /* c1dc8: ldr x0, [x22, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* c1dcc: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794064));
  fn2_1bc630(c);
  /* c1dd0: ldr x9, [x22, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(32))));
  /* c1dd4: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* c1dd8: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* c1ddc: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* c1de0: bl #0x1bccd0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794084));
  fn2_1bccd0(c);
  /* c1de4: ldr x0, [x22, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* c1de8: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* c1dec: bl #0x1bcd0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794096));
  fn2_1bcd0c(c);
  /* c1df0: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* c1df4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* c1df8: sub x2, x29, #0x30 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* c1dfc: add x3, sp, #0x28 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(40)));
  /* c1e00: and w4, w23, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 23) & UINT64_C(1)));
  /* c1e04: add x5, sp, #0x18 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(24)));
  /* c1e08: add x6, sp, #8 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(8)));
  /* c1e0c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* c1e10: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794132));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* c1e14: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c1e18: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* c1e1c: bl #0x1bc51c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794144));
  fn2_1bc51c(c);
  /* c1e20: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c1e24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c1e28: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794156));
  fn2_1bcf04(c);
  /* c1e2c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c1e30: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794164));
  fn2_1bc620(c);
  /* c1e34: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* c1e38: bl #0x1d8710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794172));
  fn2_1d8710(c);
  /* c1e3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c1e40: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794180));
  fn2_1e46f4(c);
  /* c1e44: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* c1e48: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794188));
  fn2_1dde08(c);
  /* c1e4c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* c1e50: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794196));
  fn2_1bc620(c);
  /* c1e54: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* c1e58: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794204));
  fn2_1ccd9c(c);
  /* c1e5c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* c1e60: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(794212));
  fn2_1ccd9c(c);
  /* c1e64: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c1e68: ldr x23, [sp, #0x80] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(128))));
  /* c1e6c: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c1e70: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c1e74: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* c1e78: ret  */
  return;
}

void fn2_c560c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076664332));
  /* c560c: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* c5610: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c5614: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c5618: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c561c: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* c5620: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* c5624: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* c5628: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* c562c: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* c5630: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c5634: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* c5638: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808508));
  fn2_1bc084(c);
  /* c563c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* c5640: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c5644: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808520));
  fn2_1bcf04(c);
  /* c5648: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* c564c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808528));
  fn2_1bc620(c);
  /* c5650: ldr x19, [x22, #0x10] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* c5654: cmp w21, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(1));
  /* c5658: b.lt #0xc566c */
  if (ARC_COND(c, 11)) goto L_c566c;
  /* c565c: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* c5660: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c5664: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808552));
  fn2_1bc0b8(c);
  /* c5668: b #0xc5674 */
  goto L_c5674;
L_c566c:;
  /* c566c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c5670: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808564));
  fn2_1bc084(c);
L_c5674:;
  /* c5674: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* c5678: add x1, x1, #0x23a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(570)));
  /* c567c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* c5680: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* c5684: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808584));
  fn2_1b8fd4(c);
  /* c5688: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* c568c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* c5690: sub x21, x29, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* c5694: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808600));
  fn2_1bc44c(c);
  /* c5698: add x20, x21, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* c569c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* c56a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* c56a4: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808616));
  fn2_1bc0b8(c);
  /* c56a8: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* c56ac: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* c56b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c56b4: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* c56b8: stp x21, x20, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* c56bc: bl #0x2213f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808640));
  fn2_2213f8(c);
  /* c56c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* c56c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808648));
  fn2_1bc620(c);
  /* c56c8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* c56cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808656));
  fn2_1bc620(c);
  /* c56d0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* c56d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808664));
  fn2_1bc620(c);
  /* c56d8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* c56dc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808672));
  fn2_1d2d24(c);
  /* c56e0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c56e4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(808680));
  fn2_1bc620(c);
  /* c56e8: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c56ec: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c56f0: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c56f4: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* c56f8: ret  */
  return;
}

void fn2_c6c58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076670040));
  /* c6c58: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* c6c5c: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* c6c60: ret  */
  return;
}

void fn2_c7a9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076673692));
  /* c7a9c: mov w8, #0x1a */
  ARC_W_W(c, 8, UINT64_C(26));
  /* c7aa0: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* c7aa4: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* c7aa8: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c7aac: ret  */
  return;
}

void fn2_c8cac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076678316));
  /* c8cac: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* c8cb0: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c8cb4: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c8cb8: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c8cbc: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c8cc0: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c8cc4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c8cc8: ldp x26, x25, [x5] */
  { const uint64_t _pa = ARC_X_R(c, 5);
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c8ccc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* c8cd0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c8cd4: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* c8cd8: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* c8cdc: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* c8ce0: mov w24, w2 */
  ARC_W_W(c, 24, ARC_W_R(c, 2));
  /* c8ce4: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* c8ce8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822508));
  fn2_1bc084(c);
  /* c8cec: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* c8cf0: b.lt #0xc8d18 */
  if (ARC_COND(c, 11)) goto L_c8d18;
  /* c8cf4: ldr x1, [x23] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 23)));
  /* c8cf8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c8cfc: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822528));
  fn2_1bc09c(c);
  /* c8d00: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c8d04: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c8d08: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822540));
  fn2_1bcf04(c);
  /* c8d0c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c8d10: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822548));
  fn2_1bc620(c);
  /* c8d14: b #0xc8d48 */
  goto L_c8d48;
L_c8d18:;
  /* c8d18: sub x8, x25, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) - ARC_X_R(c, 26)));
  /* c8d1c: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* c8d20: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* c8d24: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* c8d28: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* c8d2c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c8d30: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* c8d34: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* c8d38: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* c8d3c: nop  */
  /* nop: no architectural effect here */
  /* c8d40: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* c8d44: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822600));
  fn2_1bce10(c);
L_c8d48:;
  /* c8d48: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* c8d4c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c8d50: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* c8d54: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822616));
  fn2_1bc84c(c);
  /* c8d58: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* c8d5c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* c8d60: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822628));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* c8d64: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c8d68: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* c8d6c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822640));
  fn2_1bc2f8(c);
  /* c8d70: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c8d74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c8d78: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822652));
  fn2_1bcf04(c);
  /* c8d7c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c8d80: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822660));
  fn2_1bc620(c);
  /* c8d84: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* c8d88: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822668));
  fn2_1ccd9c(c);
  /* c8d8c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* c8d90: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822676));
  fn2_1ccd9c(c);
  /* c8d94: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c8d98: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(822684));
  fn2_1bc620(c);
  /* c8d9c: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c8da0: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c8da4: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c8da8: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c8dac: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c8db0: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* c8db4: ret  */
  return;
}

void fn2_cc3bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076692412));
  /* cc3bc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cc3c0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* cc3c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* cc3c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* cc3cc: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* cc3d0: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* cc3d4: add x8, x8, #0x2a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(680)));
  /* cc3d8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cc3dc: cbz x0, #0xcc400 */
  if ((ARC_X_R(c, 0)) == 0) goto L_cc400;
  /* cc3e0: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(836580));
  fn2_225abc(c);
  /* cc3e4: tbz w0, #0, #0xcc400 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_cc400;
  /* cc3e8: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* cc3ec: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cc3f0: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* cc3f4: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* cc3f8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* cc3fc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(836608));
  arc_dispatch(c, ARC_X_R(c, 9));
L_cc400:;
  /* cc400: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cc404: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* cc408: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cc40c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_cd0d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076695768));
  /* cd0d8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cd0dc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* cd0e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* cd0e4: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* cd0e8: add x8, x8, #0x410 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1040)));
  /* cd0ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* cd0f0: add x0, x0, #0x22 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(34)));
  /* cd0f4: str x8, [x19], #0x19 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(25));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* cd0f8: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(839932));
  fn2_1d79fc(c);
  /* cd0fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cd100: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* cd104: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cd108: b #0x1ccd9c */
  fn2_1ccd9c(c); return;
}

void fn2_cdb60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076698464));
  /* cdb60: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cdb64: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* cdb68: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* cdb6c: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* cdb70: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* cdb74: tbnz w8, #0, #0xcdba4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_cdba4;
  /* cdb78: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* cdb7c: add x0, x0, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(64)));
  /* cdb80: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842628));
  fn2_24b710(c);
  /* cdb84: cbz w0, #0xcdba4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_cdba4;
  /* cdb88: nop  */
  /* nop: no architectural effect here */
  /* cdb8c: adr x0, #0xcddc4 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(843204)));
  /* cdb90: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842644));
  fn2_1aff64(c);
  /* cdb94: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* cdb98: add x0, x0, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(64)));
  /* cdb9c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cdba0: b #0x24b720 */
  fn2_24b720(c); return;
L_cdba4:;
  /* cdba4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cdba8: ret  */
  return;
}

void fn2_ce838(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076701752));
  /* ce838: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* ce83c: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ce840: stp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* ce844: stp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ce848: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ce84c: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ce850: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ce854: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* ce858: ldp x9, x8, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ce85c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ce860: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ce864: mov x25, x7 */
  ARC_X_W(c, 25, ARC_X_R(c, 7));
  /* ce868: str x6, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 6));
  /* ce86c: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* ce870: mov w27, w4 */
  ARC_W_W(c, 27, ARC_W_R(c, 4));
  /* ce874: mov x26, x3 */
  ARC_X_W(c, 26, ARC_X_R(c, 3));
  /* ce878: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* ce87c: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* ce880: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* ce884: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* ce888: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* ce88c: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* ce890: add x19, sp, #0x30 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(48)));
  /* ce894: mul x28, x8, x9 */
  ARC_X_W(c, 28, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* ce898: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(845980));
  fn2_1bc084(c);
  /* ce89c: add x24, x19, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* ce8a0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* ce8a4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(845992));
  fn2_1bc084(c);
  /* ce8a8: cmp w27, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(0));
  /* ce8ac: b.le #0xce900 */
  if (ARC_COND(c, 13)) goto L_ce900;
  /* ce8b0: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* ce8b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ce8b8: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846012));
  fn2_1bc09c(c);
  /* ce8bc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ce8c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ce8c4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846024));
  fn2_1bcf04(c);
  /* ce8c8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ce8cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846032));
  fn2_1bc620(c);
  /* ce8d0: cmp w27, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(1));
  /* ce8d4: str x19, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 19));
  /* ce8d8: b.eq #0xce920 */
  if (ARC_COND(c, 0)) goto L_ce920;
  /* ce8dc: ldr x1, [x26, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* ce8e0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ce8e4: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846056));
  fn2_1bc09c(c);
  /* ce8e8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ce8ec: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* ce8f0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846068));
  fn2_1bcf04(c);
  /* ce8f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ce8f8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846076));
  fn2_1bc620(c);
  /* ce8fc: b #0xce93c */
  goto L_ce93c;
L_ce900:;
  /* ce900: sub w8, w28, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 28) - UINT64_C(2)));
  /* ce904: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* ce908: ldr x10, [x25] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 25)));
  /* ce90c: nop  */
  /* nop: no architectural effect here */
  /* ce910: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* ce914: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ce918: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846108));
  fn2_1bce10(c);
  /* ce91c: str x19, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 19));
L_ce920:;
  /* ce920: sub w8, w28, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 28) - UINT64_C(1)));
  /* ce924: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* ce928: ldr x10, [x25] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 25)));
  /* ce92c: nop  */
  /* nop: no architectural effect here */
  /* ce930: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* ce934: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* ce938: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846140));
  fn2_1bce10(c);
L_ce93c:;
  /* ce93c: ldr x5, [sp] */
  ARC_X_W(c, 5, arc_ld64((c)->sp));
  /* ce940: add x3, sp, #0x20 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(32)));
  /* ce944: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ce948: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* ce94c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* ce950: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* ce954: str x24, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 24));
  /* ce958: bl #0xce990 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846172));
  fn2_ce990(c);
  /* ce95c: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* ce960: add x0, x8, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* ce964: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846184));
  fn2_1bc620(c);
  /* ce968: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* ce96c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(846192));
  fn2_1bc620(c);
  /* ce970: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ce974: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ce978: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ce97c: ldp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ce980: ldp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ce984: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ce988: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* ce98c: ret  */
  return;
}

void fn2_cfc3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076706876));
  /* cfc3c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* cfc40: ret  */
  return;
}

void fn2_d1d6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076715372));
  /* d1d6c: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* d1d70: stp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d1d74: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d1d78: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d1d7c: add x29, sp, #0x90 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(144)));
  /* d1d80: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d1d84: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d1d88: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* d1d8c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d1d90: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859540));
  fn2_1bc290(c);
  /* d1d94: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* d1d98: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859548));
  fn2_1db4a4(c);
  /* d1d9c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d1da0: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* d1da4: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859560));
  fn2_1bc544(c);
  /* d1da8: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1dac: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* d1db0: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* d1db4: add x2, sp, #0x28 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(40)));
  /* d1db8: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859580));
  fn2_1d9c5c(c);
  /* d1dbc: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* d1dc0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1dc4: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859592));
  fn2_1bccc4(c);
  /* d1dc8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1dcc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859600));
  fn2_1bc620(c);
  /* d1dd0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d1dd4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859608));
  fn2_1bc620(c);
  /* d1dd8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* d1ddc: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859616));
  fn2_1db788(c);
  /* d1de0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d1de4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859624));
  fn2_1bc620(c);
  /* d1de8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1dec: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d1df0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859636));
  fn2_1bc530(c);
  /* d1df4: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* d1df8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1dfc: bl #0x1db988 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859648));
  fn2_1db988(c);
  /* d1e00: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1e04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859656));
  fn2_1bc620(c);
  /* d1e08: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* d1e0c: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859664));
  fn2_1db794(c);
  /* d1e10: cmp x0, #0x51 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(81));
  /* d1e14: b.lt #0xd1e3c */
  if (ARC_COND(c, 11)) goto L_d1e3c;
L_d1e18:;
  /* d1e18: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* d1e1c: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* d1e20: bl #0x1dbdc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859684));
  fn2_1dbdc4(c);
  /* d1e24: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d1e28: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859692));
  fn2_1bc620(c);
  /* d1e2c: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* d1e30: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859700));
  fn2_1db794(c);
  /* d1e34: cmp x0, #0x50 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(80));
  /* d1e38: b.gt #0xd1e18 */
  if (ARC_COND(c, 12)) goto L_d1e18;
L_d1e3c:;
  /* d1e3c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1e40: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* d1e44: sub x22, x29, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1e48: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859724));
  fn2_1bc544(c);
  /* d1e4c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d1e50: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d1e54: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859736));
  fn2_1bc290(c);
  /* d1e58: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* d1e5c: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* d1e60: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859748));
  fn2_1bbfa0(c);
  /* d1e64: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1e68: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859756));
  fn2_1bcf04(c);
  /* d1e6c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d1e70: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859764));
  fn2_1bc620(c);
  /* d1e74: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1e78: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859772));
  fn2_1bc620(c);
  /* d1e7c: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* d1e80: add x1, x1, #0x304 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(772)));
  /* d1e84: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d1e88: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d1e8c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859792));
  fn2_1b8fd4(c);
  /* d1e90: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1e94: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* d1e98: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859804));
  fn2_1bc44c(c);
  /* d1e9c: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* d1ea0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d1ea4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d1ea8: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859820));
  fn2_1bc290(c);
  /* d1eac: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* d1eb0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d1eb4: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* d1eb8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d1ebc: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859840));
  fn2_221204(c);
  /* d1ec0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d1ec4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859848));
  fn2_1bc620(c);
  /* d1ec8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* d1ecc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859856));
  fn2_1bc620(c);
  /* d1ed0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* d1ed4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859864));
  fn2_1d2d24(c);
  /* d1ed8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* d1edc: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(859872));
  fn2_1db788(c);
  /* d1ee0: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d1ee4: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d1ee8: ldp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d1eec: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* d1ef0: ret  */
  return;
}

void fn2_dad90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076752272));
  /* dad90: add x1, x0, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* dad94: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* dad98: b #0x1d9754 */
  fn2_1d9754(c); return;
}

void fn2_dbe88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076756616));
  /* dbe88: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dbe8c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* dbe90: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dbe94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dbe98: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* dbe9c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* dbea0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* dbea4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* dbea8: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* dbeac: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* dbeb0: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(900788));
  fn2_1b5d1c(c);
  /* dbeb4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* dbeb8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* dbebc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dbec0: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* dbec4: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* dbec8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dbecc: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* dbed0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(900820));
  fn2_1d2c2c(c);
  /* dbed4: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dbed8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(900828));
  fn2_1d2c2c(c);
  /* dbedc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* dbee0: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* dbee4: add x8, x8, #0xa00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2560)));
  /* dbee8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dbeec: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* dbef0: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* dbef4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* dbef8: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dbefc: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* dbf00: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* dbf04: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* dbf08: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* dbf0c: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(900880));
  fn2_1b5e68(c);
  /* dbf10: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* dbf14: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dbf18: add x8, x8, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(136)));
  /* dbf1c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* dbf20: tbz w8, #0, #0xdbf5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_dbf5c;
L_dbf24:;
  /* dbf24: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dbf28: add x1, x1, #0x80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(128)));
  /* dbf2c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dbf30: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(900916));
  fn2_1d2c40(c);
  /* dbf34: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dbf38: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dbf3c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(900928));
  fn2_1d5dc0(c);
  /* dbf40: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dbf44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(900936));
  fn2_1d2d24(c);
  /* dbf48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dbf4c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dbf50: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* dbf54: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dbf58: ret  */
  return;
L_dbf5c:;
  /* dbf5c: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dbf60: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dbf64: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(900968));
  fn2_24b710(c);
  /* dbf68: cbz w0, #0xdbf24 */
  if ((ARC_W_R(c, 0)) == 0) goto L_dbf24;
  /* dbf6c: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dbf70: add x20, x20, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* dbf74: nop  */
  /* nop: no architectural effect here */
  /* dbf78: adr x1, #0x36644 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222788)));
  /* dbf7c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dbf80: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(900996));
  fn2_1b907c(c);
  /* dbf84: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* dbf88: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* dbf8c: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* dbf90: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* dbf94: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* dbf98: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(901020));
  fn2_24b6f0(c);
  /* dbf9c: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dbfa0: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dbfa4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(901032));
  fn2_24b720(c);
  /* dbfa8: b #0xdbf24 */
  goto L_dbf24;
}

void fn2_dd4a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076762280));
  /* dd4a8: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* dd4ac: cset w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? 1 : 0));
  /* dd4b0: lsl w0, w8, #2 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* dd4b4: ret  */
  return;
}

void fn2_de7b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076767156));
  /* de7b4: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* de7b8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* de7bc: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* de7c0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* de7c4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* de7c8: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* de7cc: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* de7d0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* de7d4: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* de7d8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911324));
  fn2_1d2c2c(c);
  /* de7dc: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* de7e0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911332));
  fn2_1d2c2c(c);
  /* de7e4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* de7e8: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* de7ec: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911344));
  fn2_1ccc74(c);
  /* de7f0: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* de7f4: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* de7f8: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* de7fc: b.hi #0xde838 */
  if (ARC_COND(c, 8)) goto L_de838;
  /* de800: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* de804: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* de808: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* de80c: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* de810: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911380));
  fn2_b4168(c);
  /* de814: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* de818: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* de81c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* de820: bl #0xde9a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911396));
  fn2_de9a0(c);
  /* de824: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* de828: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* de82c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* de830: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* de834: ret  */
  return;
L_de838:;
  /* de838: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* de83c: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* de840: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* de844: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* de848: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* de84c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911440));
  fn2_1d2c2c(c);
  /* de850: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* de854: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911448));
  fn2_1d2c2c(c);
  /* de858: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* de85c: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* de860: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911460));
  fn2_1ccc74(c);
  /* de864: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* de868: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* de86c: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* de870: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* de874: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* de878: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911484));
  fn2_1d2b98(c);
  /* de87c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* de880: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* de884: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911496));
  fn2_1d2b98(c);
  /* de888: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* de88c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* de890: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* de894: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* de898: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911516));
  fn2_1d0708(c);
  /* de89c: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* de8a0: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* de8a4: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* de8a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911532));
  fn2_1ccd9c(c);
  /* de8ac: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* de8b0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911540));
  fn2_1d2d24(c);
  /* de8b4: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* de8b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911548));
  fn2_1d2d24(c);
  /* de8bc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* de8c0: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* de8c4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* de8c8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* de8cc: ret  */
  return;
}

void fn2_e0fec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076777452));
  /* e0fec: sub sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(384)));
  /* e0ff0: stp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0ff4: stp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* e0ff8: stp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e0ffc: stp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e1000: stp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1004: stp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1008: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* e100c: ldp x9, x10, [x2, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 2) + INT64_C(32));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* e1010: ldp x11, x12, [x2, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 2) + INT64_C(48));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* e1014: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* e1018: ldp x13, x14, [x2, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 2) + INT64_C(64));
    ARC_X_W(c, 13, arc_ld64(_pa));
    ARC_X_W(c, 14, arc_ld64(_pa + 8));
  }
  /* e101c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* e1020: ldp x15, x16, [x2, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 2) + INT64_C(80));
    ARC_X_W(c, 15, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e1024: str xzr, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), ARC_X_R(c, 31));
  /* e1028: stp q0, q0, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e102c: ldp x17, x3, [x2, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 2) + INT64_C(96));
    ARC_X_W(c, 17, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* e1030: stp q0, q0, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e1034: ldp x4, x5, [x2] */
  { const uint64_t _pa = ARC_X_R(c, 2);
    ARC_X_W(c, 4, arc_ld64(_pa));
    ARC_X_W(c, 5, arc_ld64(_pa + 8));
  }
  /* e1038: stp q0, q0, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e103c: ldp x6, x7, [x2, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 2) + INT64_C(16));
    ARC_X_W(c, 6, arc_ld64(_pa));
    ARC_X_W(c, 7, arc_ld64(_pa + 8));
  }
  /* e1040: stp q0, q0, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e1044: ldp x19, x2, [x2, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 2) + INT64_C(112));
    ARC_X_W(c, 19, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* e1048: stp q0, q0, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e104c: stp q0, q0, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e1050: stp q0, q0, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e1054: stp x9, x1, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* e1058: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
L_e105c:;
  /* e105c: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* e1060: ldr x22, [x9, x8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
  /* e1064: add x9, sp, #0x20 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(32)));
  /* e1068: add x21, x9, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* e106c: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* e1070: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* e1074: ldp x23, x24, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 24, arc_ld64(_pa + 8));
  }
  /* e1078: cmp x8, #0x80 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(128));
  /* e107c: ldp x25, x26, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 25, arc_ld64(_pa));
    ARC_X_W(c, 26, arc_ld64(_pa + 8));
  }
  /* e1080: nop  */
  /* nop: no architectural effect here */
  /* e1084: madd x23, x4, x22, x23 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 23)) + ((uint64_t)(ARC_X_R(c, 4)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e1088: ldp x20, x0, [x21, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* e108c: nop  */
  /* nop: no architectural effect here */
  /* e1090: madd x24, x5, x22, x24 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 24)) + ((uint64_t)(ARC_X_R(c, 5)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e1094: ldp x27, x28, [x21, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(32));
    ARC_X_W(c, 27, arc_ld64(_pa));
    ARC_X_W(c, 28, arc_ld64(_pa + 8));
  }
  /* e1098: ldp x29, x30, [x21, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e109c: nop  */
  /* nop: no architectural effect here */
  /* e10a0: madd x25, x6, x22, x25 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 25)) + ((uint64_t)(ARC_X_R(c, 6)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10a4: madd x26, x7, x22, x26 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 26)) + ((uint64_t)(ARC_X_R(c, 7)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10a8: stp x23, x24, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* e10ac: ldp x23, x24, [x21, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(96));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 24, arc_ld64(_pa + 8));
  }
  /* e10b0: nop  */
  /* nop: no architectural effect here */
  /* e10b4: madd x20, x13, x22, x20 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 20)) + ((uint64_t)(ARC_X_R(c, 13)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10b8: madd x0, x14, x22, x0 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10bc: stp x25, x26, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 26));
  }
  /* e10c0: ldp x25, x26, [x21, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(112));
    ARC_X_W(c, 25, arc_ld64(_pa));
    ARC_X_W(c, 26, arc_ld64(_pa + 8));
  }
  /* e10c4: nop  */
  /* nop: no architectural effect here */
  /* e10c8: madd x27, x9, x22, x27 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 27)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10cc: ldp x9, x1, [x21, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(80));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* e10d0: nop  */
  /* nop: no architectural effect here */
  /* e10d4: madd x28, x10, x22, x28 */
  ARC_X_W(c, 28, ((uint64_t)(ARC_X_R(c, 28)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10d8: stp x20, x0, [x21, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e10dc: nop  */
  /* nop: no architectural effect here */
  /* e10e0: madd x29, x11, x22, x29 */
  ARC_X_W(c, 29, ((uint64_t)(ARC_X_R(c, 29)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10e4: madd x30, x12, x22, x30 */
  ARC_X_W(c, 30, ((uint64_t)(ARC_X_R(c, 30)) + ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10e8: stp x27, x28, [x21, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* e10ec: nop  */
  /* nop: no architectural effect here */
  /* e10f0: madd x9, x15, x22, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10f4: madd x1, x16, x22, x1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) + ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e10f8: stp x29, x30, [x21, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e10fc: nop  */
  /* nop: no architectural effect here */
  /* e1100: madd x23, x17, x22, x23 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 23)) + ((uint64_t)(ARC_X_R(c, 17)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e1104: madd x24, x3, x22, x24 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 24)) + ((uint64_t)(ARC_X_R(c, 3)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e1108: stp x9, x1, [x21, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* e110c: nop  */
  /* nop: no architectural effect here */
  /* e1110: madd x25, x19, x22, x25 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 25)) + ((uint64_t)(ARC_X_R(c, 19)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e1114: madd x0, x2, x22, x26 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 26)) + ((uint64_t)(ARC_X_R(c, 2)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e1118: stp x23, x24, [x21, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* e111c: stp x25, x0, [x21, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 25));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e1120: b.ne #0xe105c */
  if (ARC_COND(c, 1)) goto L_e105c;
  /* e1124: ldr x9, [sp, #0xa0] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(160))));
  /* e1128: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e112c: ldr x21, [sp, #8] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(8))));
  /* e1130: ldp x10, x11, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e1134: ldr x13, [sp, #0x90] */
  ARC_X_W(c, 13, arc_ld64(((c)->sp + INT64_C(144))));
  /* e1138: nop  */
  /* nop: no architectural effect here */
  /* e113c: madd x9, x9, x8, x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1140: ldp x10, x12, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* e1144: ldp x17, x0, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 17, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* e1148: ldp x24, x23, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e114c: nop  */
  /* nop: no architectural effect here */
  /* e1150: madd x10, x10, x8, x11 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1154: ldp x11, x14, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 14, arc_ld64(_pa + 8));
  }
  /* e1158: ldp x26, x25, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e115c: nop  */
  /* nop: no architectural effect here */
  /* e1160: madd x11, x12, x8, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1164: ldp x12, x15, [sp, #0xb8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(184));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 15, arc_ld64(_pa + 8));
  }
  /* e1168: ldp x28, x27, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* e116c: ldp x29, x30, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1170: nop  */
  /* nop: no architectural effect here */
  /* e1174: madd x12, x12, x8, x14 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 14)) + ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1178: stp x9, x10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* e117c: stp x11, x12, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* e1180: ldp x9, x11, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e1184: ldp q1, q0, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* e1188: nop  */
  /* nop: no architectural effect here */
  /* e118c: madd x12, x15, x8, x9 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1190: ldp x9, x14, [sp, #0xc8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(200));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 14, arc_ld64(_pa + 8));
  }
  /* e1194: stp q1, q0, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e1198: nop  */
  /* nop: no architectural effect here */
  /* e119c: madd x15, x9, x8, x11 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e11a0: ldp x10, x9, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* e11a4: nop  */
  /* nop: no architectural effect here */
  /* e11a8: madd x14, x14, x8, x17 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 17)) + ((uint64_t)(ARC_X_R(c, 14)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e11ac: add x11, x10, #0x10, lsl #12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(65536)));
  /* e11b0: and x10, x10, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* e11b4: add x11, x9, x11, asr #16 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 16))));
  /* e11b8: mov w9, #0xffff */
  ARC_W_W(c, 9, UINT64_C(65535));
  /* e11bc: stp x12, x15, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 15));
  }
  /* e11c0: ldp x1, x15, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 15, arc_ld64(_pa + 8));
  }
  /* e11c4: add x17, x11, x9 */
  ARC_X_W(c, 17, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* e11c8: ldr q0, [sp, #0x40] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(64))), arc_ld64(((c)->sp + INT64_C(64)) + 8));
  /* e11cc: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* e11d0: and x11, x11, #0xffff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e11d4: add x12, x1, x17, asr #16 */
  ARC_X_W(c, 12, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 17)) >> 16))));
  /* e11d8: ldp x16, x17, [sp, #0xd8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(216));
    ARC_X_W(c, 16, arc_ld64(_pa));
    ARC_X_W(c, 17, arc_ld64(_pa + 8));
  }
  /* e11dc: str q0, [x21, #0x20] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* e11e0: mov x20, x11 */
  ARC_X_W(c, 20, ARC_X_R(c, 11));
  /* e11e4: stp x10, x11, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* e11e8: nop  */
  /* nop: no architectural effect here */
  /* e11ec: madd x16, x16, x8, x0 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e11f0: add x0, x12, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) + ARC_X_R(c, 9)));
  /* e11f4: sub w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - UINT64_C(1)));
  /* e11f8: add x15, x15, x0, asr #16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + ((uint64_t)((int64_t)(ARC_X_R(c, 0)) >> 16))));
  /* e11fc: ldp x0, x2, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* e1200: nop  */
  /* nop: no architectural effect here */
  /* e1204: madd x17, x17, x8, x0 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 17)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1208: and x12, x12, #0xffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & UINT64_C(65535)));
  /* e120c: add x0, x15, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 15) + ARC_X_R(c, 9)));
  /* e1210: sub w15, w15, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) - UINT64_C(1)));
  /* e1214: and x15, x15, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & UINT64_C(65535)));
  /* e1218: stp x14, x16, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 14));
    arc_st64(_pa + 8, ARC_X_R(c, 16));
  }
  /* e121c: ldp x3, x16, [x21, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(32));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e1220: ldr q0, [sp, #0x50] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(80))), arc_ld64(((c)->sp + INT64_C(80)) + 8));
  /* e1224: stp x12, x15, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 12));
    arc_st64(_pa + 8, ARC_X_R(c, 15));
  }
  /* e1228: add x14, x3, x0, asr #16 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) + ((uint64_t)((int64_t)(ARC_X_R(c, 0)) >> 16))));
  /* e122c: ldp x1, x0, [sp, #0xe8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(232));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* e1230: str q0, [x21, #0x30] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* e1234: nop  */
  /* nop: no architectural effect here */
  /* e1238: madd x2, x1, x8, x2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 2)) + ((uint64_t)(ARC_X_R(c, 1)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e123c: add x1, x14, x9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 14) + ARC_X_R(c, 9)));
  /* e1240: sub w14, w14, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) - UINT64_C(1)));
  /* e1244: add x1, x16, x1, asr #16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 16) + ((uint64_t)((int64_t)(ARC_X_R(c, 1)) >> 16))));
  /* e1248: ldp x16, x4, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 16, arc_ld64(_pa));
    ARC_X_W(c, 4, arc_ld64(_pa + 8));
  }
  /* e124c: nop  */
  /* nop: no architectural effect here */
  /* e1250: madd x16, x0, x8, x16 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) + ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1254: add x0, x1, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* e1258: stp x17, x2, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 17));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* e125c: ldp x5, x2, [x21, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(48));
    ARC_X_W(c, 5, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* e1260: ldr q0, [sp, #0x60] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* e1264: add x17, x5, x0, asr #16 */
  ARC_X_W(c, 17, (ARC_X_R(c, 5) + ((uint64_t)((int64_t)(ARC_X_R(c, 0)) >> 16))));
  /* e1268: ldp x3, x0, [sp, #0xf8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(248));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* e126c: str q0, [x21, #0x40] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(64)) + 8, (c)->q[0].u64[1]);
  /* e1270: nop  */
  /* nop: no architectural effect here */
  /* e1274: madd x3, x3, x8, x4 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 4)) + ((uint64_t)(ARC_X_R(c, 3)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1278: add x4, x17, x9 */
  ARC_X_W(c, 4, (ARC_X_R(c, 17) + ARC_X_R(c, 9)));
  /* e127c: sub w17, w17, #1 */
  ARC_W_W(c, 17, (ARC_W_R(c, 17) - UINT64_C(1)));
  /* e1280: add x6, x2, x4, asr #16 */
  ARC_X_W(c, 6, (ARC_X_R(c, 2) + ((uint64_t)((int64_t)(ARC_X_R(c, 4)) >> 16))));
  /* e1284: ldp x2, x4, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 4, arc_ld64(_pa + 8));
  }
  /* e1288: nop  */
  /* nop: no architectural effect here */
  /* e128c: madd x0, x0, x8, x2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 2)) + ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1290: add x2, x6, x9 */
  ARC_X_W(c, 2, (ARC_X_R(c, 6) + ARC_X_R(c, 9)));
  /* e1294: stp x16, x3, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 16));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* e1298: ldp x7, x16, [x21, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(64));
    ARC_X_W(c, 7, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e129c: ldr q0, [sp, #0x70] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* e12a0: add x3, x7, x2, asr #16 */
  ARC_X_W(c, 3, (ARC_X_R(c, 7) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 16))));
  /* e12a4: ldp x5, x2, [sp, #0x108] */
  { const uint64_t _pa = ((c)->sp + INT64_C(264));
    ARC_X_W(c, 5, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* e12a8: str q0, [x21, #0x50] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(80)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(80)) + 8, (c)->q[0].u64[1]);
  /* e12ac: nop  */
  /* nop: no architectural effect here */
  /* e12b0: madd x4, x5, x8, x4 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 4)) + ((uint64_t)(ARC_X_R(c, 5)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e12b4: add x5, x3, x9 */
  ARC_X_W(c, 5, (ARC_X_R(c, 3) + ARC_X_R(c, 9)));
  /* e12b8: add x19, x16, x5, asr #16 */
  ARC_X_W(c, 19, (ARC_X_R(c, 16) + ((uint64_t)((int64_t)(ARC_X_R(c, 5)) >> 16))));
  /* e12bc: madd x13, x2, x8, x13 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) + ((uint64_t)(ARC_X_R(c, 2)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e12c0: add x5, x19, x9 */
  ARC_X_W(c, 5, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* e12c4: stp x0, x4, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* e12c8: ldp x16, x0, [x21, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(80));
    ARC_X_W(c, 16, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* e12cc: ldr q1, [sp, #0x80] */
  arc_q_w(c, 1, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* e12d0: str x13, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 13));
  /* e12d4: add x4, x16, x5, asr #16 */
  ARC_X_W(c, 4, (ARC_X_R(c, 16) + ((uint64_t)((int64_t)(ARC_X_R(c, 5)) >> 16))));
  /* e12d8: ldr q0, [sp, #0x90] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* e12dc: add x16, x4, x9 */
  ARC_X_W(c, 16, (ARC_X_R(c, 4) + ARC_X_R(c, 9)));
  /* e12e0: stp q1, q0, [x21, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(96));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* e12e4: add x7, x0, x16, asr #16 */
  ARC_X_W(c, 7, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 16)) >> 16))));
  /* e12e8: ldp x16, x13, [x21, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(96));
    ARC_X_W(c, 16, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* e12ec: add x0, x7, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 7) + ARC_X_R(c, 9)));
  /* e12f0: add x2, x16, x0, asr #16 */
  ARC_X_W(c, 2, (ARC_X_R(c, 16) + ((uint64_t)((int64_t)(ARC_X_R(c, 0)) >> 16))));
  /* e12f4: add x16, x2, x9 */
  ARC_X_W(c, 16, (ARC_X_R(c, 2) + ARC_X_R(c, 9)));
  /* e12f8: add x5, x13, x16, asr #16 */
  ARC_X_W(c, 5, (ARC_X_R(c, 13) + ((uint64_t)((int64_t)(ARC_X_R(c, 16)) >> 16))));
  /* e12fc: ldp x13, x0, [x21, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(112));
    ARC_X_W(c, 13, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* e1300: add x16, x5, x9 */
  ARC_X_W(c, 16, (ARC_X_R(c, 5) + ARC_X_R(c, 9)));
  /* e1304: add x13, x13, x16, asr #16 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + ((uint64_t)((int64_t)(ARC_X_R(c, 16)) >> 16))));
  /* e1308: add x16, x13, x9 */
  ARC_X_W(c, 16, (ARC_X_R(c, 13) + ARC_X_R(c, 9)));
  /* e130c: sub w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - UINT64_C(1)));
  /* e1310: add x16, x0, x16, asr #16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 16)) >> 16))));
  /* e1314: add x0, x16, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 16) + ARC_X_R(c, 9)));
  /* e1318: asr x0, x0, #0x10 */
  ARC_X_W(c, 0, ((uint64_t)((int64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(16)) & 63))));
  /* e131c: madd x11, x0, x8, x10 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) + ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1320: mov w10, #0xffda */
  ARC_W_W(c, 10, UINT64_C(65498));
  /* e1324: ldr x0, [x21, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* e1328: add x10, x11, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* e132c: sub w11, w11, #0x26 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(38)));
  /* e1330: add x10, x20, x10, asr #16 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 16))));
  /* e1334: and x11, x11, #0xffff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e1338: add x15, x10, x9 */
  ARC_X_W(c, 15, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* e133c: sub w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(1)));
  /* e1340: add x12, x12, x15, asr #16 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> 16))));
  /* e1344: and x15, x14, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) & UINT64_C(65535)));
  /* e1348: sub w14, w1, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 1) - UINT64_C(1)));
  /* e134c: and x20, x14, #0xffff */
  ARC_X_W(c, 20, (ARC_X_R(c, 14) & UINT64_C(65535)));
  /* e1350: and x10, x10, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* e1354: add x1, x12, x9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 12) + ARC_X_R(c, 9)));
  /* e1358: stp x15, x20, [x21, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 15));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* e135c: add x14, x0, x1, asr #16 */
  ARC_X_W(c, 14, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 1)) >> 16))));
  /* e1360: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e1364: stp x11, x10, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* e1368: add x0, x14, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) + ARC_X_R(c, 9)));
  /* e136c: sub w10, w14, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 14) - UINT64_C(1)));
  /* e1370: add x15, x15, x0, asr #16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + ((uint64_t)((int64_t)(ARC_X_R(c, 0)) >> 16))));
  /* e1374: and x0, x17, #0xffff */
  ARC_X_W(c, 0, (ARC_X_R(c, 17) & UINT64_C(65535)));
  /* e1378: sub w17, w6, #1 */
  ARC_W_W(c, 17, (ARC_W_R(c, 6) - UINT64_C(1)));
  /* e137c: and x20, x17, #0xffff */
  ARC_X_W(c, 20, (ARC_X_R(c, 17) & UINT64_C(65535)));
  /* e1380: and x10, x10, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* e1384: add x6, x15, x9 */
  ARC_X_W(c, 6, (ARC_X_R(c, 15) + ARC_X_R(c, 9)));
  /* e1388: stp x0, x20, [x21, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* e138c: add x17, x1, x6, asr #16 */
  ARC_X_W(c, 17, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 6)) >> 16))));
  /* e1390: mov x6, x20 */
  ARC_X_W(c, 6, ARC_X_R(c, 20));
  /* e1394: add x1, x17, x9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 17) + ARC_X_R(c, 9)));
  /* e1398: add x1, x0, x1, asr #16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 1)) >> 16))));
  /* e139c: sub w0, w3, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 3) - UINT64_C(1)));
  /* e13a0: sub w3, w19, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 19) - UINT64_C(1)));
  /* e13a4: and x20, x3, #0xffff */
  ARC_X_W(c, 20, (ARC_X_R(c, 3) & UINT64_C(65535)));
  /* e13a8: and x0, x0, #0xffff */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) & UINT64_C(65535)));
  /* e13ac: add x19, x1, x9 */
  ARC_X_W(c, 19, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* e13b0: stp x0, x20, [x21, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* e13b4: add x3, x6, x19, asr #16 */
  ARC_X_W(c, 3, (ARC_X_R(c, 6) + ((uint64_t)((int64_t)(ARC_X_R(c, 19)) >> 16))));
  /* e13b8: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* e13bc: add x6, x3, x9 */
  ARC_X_W(c, 6, (ARC_X_R(c, 3) + ARC_X_R(c, 9)));
  /* e13c0: add x6, x0, x6, asr #16 */
  ARC_X_W(c, 6, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 6)) >> 16))));
  /* e13c4: sub w0, w4, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 4) - UINT64_C(1)));
  /* e13c8: sub w4, w7, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 7) - UINT64_C(1)));
  /* e13cc: and x20, x4, #0xffff */
  ARC_X_W(c, 20, (ARC_X_R(c, 4) & UINT64_C(65535)));
  /* e13d0: and x0, x0, #0xffff */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) & UINT64_C(65535)));
  /* e13d4: add x7, x6, x9 */
  ARC_X_W(c, 7, (ARC_X_R(c, 6) + ARC_X_R(c, 9)));
  /* e13d8: stp x0, x20, [x21, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* e13dc: add x4, x19, x7, asr #16 */
  ARC_X_W(c, 4, (ARC_X_R(c, 19) + ((uint64_t)((int64_t)(ARC_X_R(c, 7)) >> 16))));
  /* e13e0: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* e13e4: add x7, x4, x9 */
  ARC_X_W(c, 7, (ARC_X_R(c, 4) + ARC_X_R(c, 9)));
  /* e13e8: add x7, x0, x7, asr #16 */
  ARC_X_W(c, 7, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 7)) >> 16))));
  /* e13ec: sub w0, w2, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 2) - UINT64_C(1)));
  /* e13f0: sub w2, w5, #1 */
  ARC_W_W(c, 2, (ARC_W_R(c, 5) - UINT64_C(1)));
  /* e13f4: and x20, x2, #0xffff */
  ARC_X_W(c, 20, (ARC_X_R(c, 2) & UINT64_C(65535)));
  /* e13f8: and x0, x0, #0xffff */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) & UINT64_C(65535)));
  /* e13fc: add x5, x7, x9 */
  ARC_X_W(c, 5, (ARC_X_R(c, 7) + ARC_X_R(c, 9)));
  /* e1400: stp x0, x20, [x21, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* e1404: add x2, x19, x5, asr #16 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) + ((uint64_t)((int64_t)(ARC_X_R(c, 5)) >> 16))));
  /* e1408: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* e140c: add x5, x2, x9 */
  ARC_X_W(c, 5, (ARC_X_R(c, 2) + ARC_X_R(c, 9)));
  /* e1410: add x5, x0, x5, asr #16 */
  ARC_X_W(c, 5, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 5)) >> 16))));
  /* e1414: and x0, x13, #0xffff */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) & UINT64_C(65535)));
  /* e1418: sub w13, w16, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 16) - UINT64_C(1)));
  /* e141c: and x20, x13, #0xffff */
  ARC_X_W(c, 20, (ARC_X_R(c, 13) & UINT64_C(65535)));
  /* e1420: add x16, x5, x9 */
  ARC_X_W(c, 16, (ARC_X_R(c, 5) + ARC_X_R(c, 9)));
  /* e1424: stp x0, x20, [x21, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* e1428: add x13, x19, x16, asr #16 */
  ARC_X_W(c, 13, (ARC_X_R(c, 19) + ((uint64_t)((int64_t)(ARC_X_R(c, 16)) >> 16))));
  /* e142c: mov x16, x0 */
  ARC_X_W(c, 16, ARC_X_R(c, 0));
  /* e1430: add x0, x13, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) + ARC_X_R(c, 9)));
  /* e1434: add x16, x16, x0, asr #16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ((uint64_t)((int64_t)(ARC_X_R(c, 0)) >> 16))));
  /* e1438: add x0, x16, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 16) + ARC_X_R(c, 9)));
  /* e143c: add x0, x20, x0, asr #16 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ((uint64_t)((int64_t)(ARC_X_R(c, 0)) >> 16))));
  /* e1440: ldp x20, x19, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1444: add x9, x0, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* e1448: asr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63))));
  /* e144c: madd x8, x9, x8, x11 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* e1450: sub w9, w12, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 12) - UINT64_C(1)));
  /* e1454: sub w11, w15, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 15) - UINT64_C(1)));
  /* e1458: and x9, x9, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e145c: stp x9, x10, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* e1460: sub w10, w17, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 17) - UINT64_C(1)));
  /* e1464: and x9, x11, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e1468: and x10, x10, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* e146c: sub w11, w1, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 1) - UINT64_C(1)));
  /* e1470: stp x9, x10, [x21, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* e1474: sub w10, w3, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 3) - UINT64_C(1)));
  /* e1478: and x9, x11, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e147c: and x10, x10, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* e1480: sub w11, w6, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 6) - UINT64_C(1)));
  /* e1484: sub x8, x8, #0x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(38)));
  /* e1488: stp x9, x10, [x21, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* e148c: sub w10, w4, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 4) - UINT64_C(1)));
  /* e1490: and x9, x11, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e1494: and x10, x10, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* e1498: sub w11, w7, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 7) - UINT64_C(1)));
  /* e149c: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e14a0: stp x9, x10, [x21, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* e14a4: sub w10, w2, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 2) - UINT64_C(1)));
  /* e14a8: and x9, x11, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e14ac: and x10, x10, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* e14b0: sub w11, w5, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 5) - UINT64_C(1)));
  /* e14b4: stp x9, x10, [x21, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* e14b8: sub w10, w13, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 13) - UINT64_C(1)));
  /* e14bc: and x9, x11, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e14c0: and x10, x10, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* e14c4: stp x9, x10, [x21, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* e14c8: sub w9, w16, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 16) - UINT64_C(1)));
  /* e14cc: sub w10, w0, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* e14d0: and x9, x9, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e14d4: and x8, x10, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* e14d8: stp x9, x8, [x21, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* e14dc: ldp x22, x21, [sp, #0x160] */
  { const uint64_t _pa = ((c)->sp + INT64_C(352));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e14e0: add sp, sp, #0x180 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(384)));
  /* e14e4: ret  */
  return;
}

void fn2_e35ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076787180));
  /* e35ec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e35f0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e35f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e35f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e35fc: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(931328));
  fn2_1b6040(c);
  /* e3600: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e3604: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e3608: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e360c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_e6840(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076800064));
  /* e6840: fmov d0, #7.00000000 */
  arc_d_w(c, 0, (double)(7.0));
  /* e6844: ret  */
  return;
}

void fn2_e7518(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076803352));
  /* e7518: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* e751c: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* e7520: csel w0, w8, wzr, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* e7524: ret  */
  return;
}

void fn2_e8a90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076808848));
  /* e8a90: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e8a94: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8a98: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* e8a9c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* e8aa0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8aa4: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* e8aa8: add x1, x1, #0x966 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2406)));
  /* e8aac: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8ab0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e8ab4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953016));
  fn2_1b8fd4(c);
  /* e8ab8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e8abc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8ac0: bl #0x1afcfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953028));
  fn2_1afcfc(c);
  /* e8ac4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8ac8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953036));
  fn2_1d2d24(c);
  /* e8acc: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* e8ad0: add x8, x8, #0xf0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(240)));
  /* e8ad4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8ad8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e8adc: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953056));
  fn2_1d9740(c);
  /* e8ae0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* e8ae4: adrp x9, #0x25d000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2478080)));
  /* e8ae8: nop  */
  /* nop: no architectural effect here */
  /* e8aec: adr x1, #0x2879f */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(165791)));
  /* e8af0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8af4: strb w8, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* e8af8: str x19, [x9, #0x110] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(272)), ARC_X_R(c, 19));
  /* e8afc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953088));
  fn2_1b7d24(c);
  /* e8b00: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8b04: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8b08: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953100));
  fn2_1bc2f8(c);
  /* e8b0c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8b10: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953108));
  fn2_1ccd9c(c);
  /* e8b14: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* e8b18: add x1, x1, #0xcfe */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3326)));
  /* e8b1c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8b20: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953124));
  fn2_1b7d24(c);
  /* e8b24: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8b28: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8b2c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953136));
  fn2_1bc2f8(c);
  /* e8b30: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8b34: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953144));
  fn2_1ccd9c(c);
  /* e8b38: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8b3c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8b40: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953156));
  fn2_1bbfa0(c);
  /* e8b44: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e8b48: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953164));
  fn2_1bcf04(c);
  /* e8b4c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8b50: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953172));
  fn2_1bc620(c);
  /* e8b54: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8b58: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953180));
  fn2_1bc620(c);
  /* e8b5c: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* e8b60: add x1, x1, #0xd06 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3334)));
  /* e8b64: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8b68: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953196));
  fn2_1b7d24(c);
  /* e8b6c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8b70: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8b74: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953208));
  fn2_1bc2f8(c);
  /* e8b78: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8b7c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953216));
  fn2_1ccd9c(c);
  /* e8b80: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* e8b84: add x1, x1, #0xc01 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3073)));
  /* e8b88: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8b8c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953232));
  fn2_1b7d24(c);
  /* e8b90: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8b94: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8b98: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953244));
  fn2_1bc2f8(c);
  /* e8b9c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8ba0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953252));
  fn2_1ccd9c(c);
  /* e8ba4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8ba8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8bac: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953264));
  fn2_1bbfa0(c);
  /* e8bb0: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e8bb4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953272));
  fn2_1bcf04(c);
  /* e8bb8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8bbc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953280));
  fn2_1bc620(c);
  /* e8bc0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8bc4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953288));
  fn2_1bc620(c);
  /* e8bc8: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* e8bcc: add x1, x1, #0x7a1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1953)));
  /* e8bd0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8bd4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953304));
  fn2_1b7d24(c);
  /* e8bd8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8bdc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8be0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953316));
  fn2_1bc2f8(c);
  /* e8be4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8be8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953324));
  fn2_1ccd9c(c);
  /* e8bec: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* e8bf0: add x1, x1, #0xb20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2848)));
  /* e8bf4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8bf8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953340));
  fn2_1b7d24(c);
  /* e8bfc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8c00: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8c04: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953352));
  fn2_1bc2f8(c);
  /* e8c08: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8c0c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953360));
  fn2_1ccd9c(c);
  /* e8c10: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8c14: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8c18: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953372));
  fn2_1bbfa0(c);
  /* e8c1c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e8c20: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953380));
  fn2_1bcf04(c);
  /* e8c24: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8c28: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953388));
  fn2_1bc620(c);
  /* e8c2c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8c30: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953396));
  fn2_1bc620(c);
  /* e8c34: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* e8c38: add x1, x1, #0x7a3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1955)));
  /* e8c3c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8c40: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953412));
  fn2_1b7d24(c);
  /* e8c44: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8c48: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8c4c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953424));
  fn2_1bc2f8(c);
  /* e8c50: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8c54: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953432));
  fn2_1ccd9c(c);
  /* e8c58: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* e8c5c: add x1, x1, #0x95e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2398)));
  /* e8c60: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8c64: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953448));
  fn2_1b7d24(c);
  /* e8c68: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8c6c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8c70: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953460));
  fn2_1bc2f8(c);
  /* e8c74: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8c78: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953468));
  fn2_1ccd9c(c);
  /* e8c7c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8c80: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8c84: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953480));
  fn2_1bbfa0(c);
  /* e8c88: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e8c8c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953488));
  fn2_1bcf04(c);
  /* e8c90: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8c94: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953496));
  fn2_1bc620(c);
  /* e8c98: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8c9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953504));
  fn2_1bc620(c);
  /* e8ca0: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* e8ca4: add x1, x1, #0xd08 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3336)));
  /* e8ca8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8cac: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953520));
  fn2_1b7d24(c);
  /* e8cb0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8cb4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8cb8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953532));
  fn2_1bc2f8(c);
  /* e8cbc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8cc0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953540));
  fn2_1ccd9c(c);
  /* e8cc4: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* e8cc8: add x1, x1, #0x112 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(274)));
  /* e8ccc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8cd0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953556));
  fn2_1b7d24(c);
  /* e8cd4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8cd8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8cdc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953568));
  fn2_1bc2f8(c);
  /* e8ce0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8ce4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953576));
  fn2_1ccd9c(c);
  /* e8ce8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8cec: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8cf0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953588));
  fn2_1bbfa0(c);
  /* e8cf4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e8cf8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953596));
  fn2_1bcf04(c);
  /* e8cfc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8d00: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953604));
  fn2_1bc620(c);
  /* e8d04: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8d08: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953612));
  fn2_1bc620(c);
  /* e8d0c: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* e8d10: add x1, x1, #0x905 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2309)));
  /* e8d14: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8d18: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953628));
  fn2_1b7d24(c);
  /* e8d1c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8d20: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8d24: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953640));
  fn2_1bc2f8(c);
  /* e8d28: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8d2c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953648));
  fn2_1ccd9c(c);
  /* e8d30: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* e8d34: add x1, x1, #0x4b5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1205)));
  /* e8d38: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8d3c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953664));
  fn2_1b7d24(c);
  /* e8d40: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8d44: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8d48: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953676));
  fn2_1bc2f8(c);
  /* e8d4c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8d50: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953684));
  fn2_1ccd9c(c);
  /* e8d54: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8d58: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8d5c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953696));
  fn2_1bbfa0(c);
  /* e8d60: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e8d64: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953704));
  fn2_1bcf04(c);
  /* e8d68: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8d6c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953712));
  fn2_1bc620(c);
  /* e8d70: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8d74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953720));
  fn2_1bc620(c);
  /* e8d78: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* e8d7c: add x1, x1, #0x648 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1608)));
  /* e8d80: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8d84: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953736));
  fn2_1b7d24(c);
  /* e8d88: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8d8c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8d90: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953748));
  fn2_1bc2f8(c);
  /* e8d94: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8d98: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953756));
  fn2_1ccd9c(c);
  /* e8d9c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* e8da0: add x1, x1, #0xc61 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3169)));
  /* e8da4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8da8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953772));
  fn2_1b7d24(c);
  /* e8dac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8db0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8db4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953784));
  fn2_1bc2f8(c);
  /* e8db8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8dbc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953792));
  fn2_1ccd9c(c);
  /* e8dc0: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8dc4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8dc8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953804));
  fn2_1bbfa0(c);
  /* e8dcc: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e8dd0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953812));
  fn2_1bcf04(c);
  /* e8dd4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8dd8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953820));
  fn2_1bc620(c);
  /* e8ddc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8de0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953828));
  fn2_1bc620(c);
  /* e8de4: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* e8de8: add x1, x1, #0x907 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2311)));
  /* e8dec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8df0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953844));
  fn2_1b7d24(c);
  /* e8df4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8df8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8dfc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953856));
  fn2_1bc2f8(c);
  /* e8e00: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8e04: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953864));
  fn2_1ccd9c(c);
  /* e8e08: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* e8e0c: add x1, x1, #0xc06 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3078)));
  /* e8e10: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8e14: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953880));
  fn2_1b7d24(c);
  /* e8e18: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8e1c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8e20: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953892));
  fn2_1bc2f8(c);
  /* e8e24: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* e8e28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953900));
  fn2_1ccd9c(c);
  /* e8e2c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8e30: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e8e34: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953912));
  fn2_1bbfa0(c);
  /* e8e38: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e8e3c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953920));
  fn2_1bcf04(c);
  /* e8e40: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8e44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953928));
  fn2_1bc620(c);
  /* e8e48: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e8e4c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953936));
  fn2_1bc620(c);
  /* e8e50: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* e8e54: bl #0x1da088 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(953944));
  fn2_1da088(c);
  /* e8e58: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8e5c: ldr x19, [sp, #0x40] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(64))));
  /* e8e60: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e8e64: ret  */
  return;
}

void fn2_eb688(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076820104));
  /* eb688: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb68c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* eb690: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb694: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb698: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* eb69c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* eb6a0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* eb6a4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* eb6a8: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* eb6ac: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* eb6b0: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964276));
  fn2_1b5d1c(c);
  /* eb6b4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* eb6b8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* eb6bc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb6c0: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* eb6c4: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* eb6c8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* eb6cc: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* eb6d0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964308));
  fn2_1d2c2c(c);
  /* eb6d4: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* eb6d8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964316));
  fn2_1d2c2c(c);
  /* eb6dc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* eb6e0: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* eb6e4: add x8, x8, #0xb20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2848)));
  /* eb6e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb6ec: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* eb6f0: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* eb6f4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* eb6f8: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* eb6fc: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* eb700: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* eb704: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* eb708: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* eb70c: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964368));
  fn2_1b5e68(c);
  /* eb710: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb714: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* eb718: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* eb71c: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964384));
  fn2_1b5d9c(c);
  /* eb720: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb724: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* eb728: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964396));
  fn2_1b5d8c(c);
  /* eb72c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* eb730: add x8, x8, #0x120 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(288)));
  /* eb734: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* eb738: tbz w8, #0, #0xeb774 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_eb774;
L_eb73c:;
  /* eb73c: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* eb740: add x1, x1, #0x118 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(280)));
  /* eb744: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* eb748: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964428));
  fn2_1d2c40(c);
  /* eb74c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* eb750: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* eb754: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964440));
  fn2_1d5dc0(c);
  /* eb758: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* eb75c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964448));
  fn2_1d2d24(c);
  /* eb760: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb764: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb768: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb76c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb770: ret  */
  return;
L_eb774:;
  /* eb774: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* eb778: add x0, x0, #0x120 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(288)));
  /* eb77c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964480));
  fn2_24b710(c);
  /* eb780: cbz w0, #0xeb73c */
  if ((ARC_W_R(c, 0)) == 0) goto L_eb73c;
  /* eb784: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* eb788: add x20, x20, #0x118 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(280)));
  /* eb78c: nop  */
  /* nop: no architectural effect here */
  /* eb790: adr x1, #0x363c0 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222144)));
  /* eb794: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eb798: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964508));
  fn2_1b907c(c);
  /* eb79c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* eb7a0: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* eb7a4: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* eb7a8: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* eb7ac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* eb7b0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964532));
  fn2_24b6f0(c);
  /* eb7b4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* eb7b8: add x0, x0, #0x120 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(288)));
  /* eb7bc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(964544));
  fn2_24b720(c);
  /* eb7c0: b #0xeb73c */
  goto L_eb73c;
}

void fn2_f3998(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076853656));
  /* f3998: fmov d0, #4.00000000 */
  arc_d_w(c, 0, (double)(4.0));
  /* f399c: ret  */
  return;
}

void fn2_f3afc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076854012));
  /* f3afc: add x1, x0, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(80)));
  /* f3b00: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f3b04: b #0x1ccc88 */
  fn2_1ccc88(c); return;
}

void fn2_f4b94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076858260));
  /* f4b94: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* f4b98: ret  */
  return;
}

void fn2_f5d98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076862872));
  /* f5d98: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f5d9c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f5da0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5da4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f5da8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f5dac: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f5db0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* f5db4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* f5db8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f5dbc: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* f5dc0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* f5dc4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007048));
  fn2_1b5d1c(c);
  /* f5dc8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* f5dcc: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* f5dd0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5dd4: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f5dd8: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* f5ddc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* f5de0: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* f5de4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007080));
  fn2_1d2c2c(c);
  /* f5de8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f5dec: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007088));
  fn2_1d2c2c(c);
  /* f5df0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* f5df4: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* f5df8: add x8, x8, #0x4c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1224)));
  /* f5dfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5e00: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f5e04: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* f5e08: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* f5e0c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5e10: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* f5e14: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* f5e18: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* f5e1c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* f5e20: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007140));
  fn2_1b5e68(c);
  /* f5e24: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* f5e28: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5e2c: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* f5e30: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* f5e34: tbz w8, #0, #0xf5e74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f5e74;
L_f5e38:;
  /* f5e38: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5e3c: add x1, x1, #0x140 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(320)));
  /* f5e40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5e44: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007176));
  fn2_1d2c40(c);
  /* f5e48: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f5e4c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* f5e50: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007188));
  fn2_1d5dc0(c);
  /* f5e54: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5e58: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007196));
  fn2_1d2d24(c);
  /* f5e5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5e60: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f5e64: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f5e68: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5e6c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f5e70: ret  */
  return;
L_f5e74:;
  /* f5e74: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5e78: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f5e7c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007232));
  fn2_24b710(c);
  /* f5e80: cbz w0, #0xf5e38 */
  if ((ARC_W_R(c, 0)) == 0) goto L_f5e38;
  /* f5e84: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5e88: add x20, x20, #0x140 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(320)));
  /* f5e8c: nop  */
  /* nop: no architectural effect here */
  /* f5e90: adr x1, #0x365bc */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222652)));
  /* f5e94: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5e98: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007260));
  fn2_1b907c(c);
  /* f5e9c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* f5ea0: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* f5ea4: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* f5ea8: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* f5eac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f5eb0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007284));
  fn2_24b6f0(c);
  /* f5eb4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5eb8: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f5ebc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007296));
  fn2_24b720(c);
  /* f5ec0: b #0xf5e38 */
  goto L_f5e38;
}

void fn2_fcadc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076890844));
  /* fcadc: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* fcae0: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fcae4: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* fcae8: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* fcaec: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fcaf0: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fcaf4: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fcaf8: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* fcafc: ldp x28, x27, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* fcb00: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* fcb04: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fcb08: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* fcb0c: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* fcb10: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* fcb14: mov w26, w4 */
  ARC_W_W(c, 26, ARC_W_R(c, 4));
  /* fcb18: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* fcb1c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* fcb20: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fcb24: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035048));
  fn2_1bc084(c);
  /* fcb28: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* fcb2c: b.lt #0xfcbd8 */
  if (ARC_COND(c, 11)) goto L_fcbd8;
  /* fcb30: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* fcb34: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* fcb38: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035068));
  fn2_1bc09c(c);
  /* fcb3c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fcb40: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* fcb44: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035080));
  fn2_1bcf04(c);
  /* fcb48: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* fcb4c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035088));
  fn2_1bc620(c);
  /* fcb50: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* fcb54: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* fcb58: tbz w22, #0, #0xfcb64 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_fcb64;
L_fcb5c:;
  /* fcb5c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* fcb60: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_fcb64:;
  /* fcb64: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fcb68: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* fcb6c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035120));
  fn2_1bc0b8(c);
  /* fcb70: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fcb74: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* fcb78: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* fcb7c: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035136));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* fcb80: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* fcb84: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fcb88: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035148));
  fn2_1bc2f8(c);
  /* fcb8c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* fcb90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fcb94: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035160));
  fn2_1bcf04(c);
  /* fcb98: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* fcb9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035168));
  fn2_1bc620(c);
  /* fcba0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fcba4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035176));
  fn2_1ccd9c(c);
  /* fcba8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fcbac: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035184));
  fn2_1bc620(c);
  /* fcbb0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fcbb4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035192));
  fn2_1bc620(c);
  /* fcbb8: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fcbbc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fcbc0: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fcbc4: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* fcbc8: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* fcbcc: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fcbd0: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* fcbd4: ret  */
  return;
L_fcbd8:;
  /* fcbd8: sub x8, x27, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 28)));
  /* fcbdc: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* fcbe0: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* fcbe4: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* fcbe8: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* fcbec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fcbf0: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* fcbf4: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* fcbf8: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* fcbfc: nop  */
  /* nop: no architectural effect here */
  /* fcc00: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* fcc04: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035272));
  fn2_1bce10(c);
  /* fcc08: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* fcc0c: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* fcc10: tbnz w22, #0, #0xfcb5c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_fcb5c;
  /* fcc14: b #0xfcb64 */
  goto L_fcb64;
}

void fn2_feb48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076899144));
  /* feb48: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* feb4c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* feb50: str x19, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 19));
  /* feb54: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* feb58: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* feb5c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* feb60: bl #0x2187d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1043300));
  fn2_2187d0(c);
  /* feb64: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* feb68: cbz x0, #0xfebc8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_febc8;
  /* feb6c: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* feb70: bl #0x210fc8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1043316));
  fn2_210fc8(c);
  /* feb74: sxtw x1, w19 */
  ARC_X_W(c, 1, ((int64_t)(int32_t)(ARC_W_R(c, 19))));
  /* feb78: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* feb7c: bl #0x1e0040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1043328));
  fn2_1e0040(c);
  /* feb80: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* feb84: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* feb88: bl #0x1dfd84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1043340));
  fn2_1dfd84(c);
  /* feb8c: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* feb90: cbz x0, #0xfebb4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_febb4;
  /* feb94: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1043352));
  fn2_225abc(c);
  /* feb98: tbz w0, #0, #0xfebb4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_febb4;
  /* feb9c: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* feba0: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* feba4: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* feba8: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* febac: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* febb0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1043380));
  arc_dispatch(c, ARC_X_R(c, 9));
L_febb4:;
  /* febb4: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* febb8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* febbc: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* febc0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* febc4: ret  */
  return;
L_febc8:;
  /* febc8: and w0, wzr, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 31) & UINT64_C(1)));
  /* febcc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* febd0: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* febd4: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* febd8: ret  */
  return;
}

void fn2_1298e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074660));
  /* 1298e4: str x1, [x0, #0x40] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(64)), ARC_X_R(c, 1));
  /* 1298e8: ret  */
  return;
}

void fn2_129a20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074976));
  /* 129a20: ldr d0, [x1] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 129a24: str d0, [x0, #0xc0] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(192)), (c)->q[0].u64[0]);
  /* 129a28: ret  */
  return;
}

void fn2_129b60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075296));
  /* 129b60: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 129b64: str x8, [x0, #0x140] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(320)), ARC_X_R(c, 8));
  /* 129b68: ret  */
  return;
}

void fn2_129ca0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075616));
  /* 129ca0: ldr d0, [x1] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 129ca4: str d0, [x0, #0x1c0] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(448)), (c)->q[0].u64[0]);
  /* 129ca8: ret  */
  return;
}

void fn2_129de0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075936));
  /* 129de0: ldr d0, [x1] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 129de4: str d0, [x0, #0x218] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(536)), (c)->q[0].u64[0]);
  /* 129de8: ret  */
  return;
}

void fn2_129f20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076256));
  /* 129f20: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 129f24: strb w8, [x0, #0x291] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(657)), ARC_W_R(c, 8));
  /* 129f28: ret  */
  return;
}

void fn2_12a060(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076576));
  /* 12a060: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 12a064: str x8, [x0, #0x330] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(816)), ARC_X_R(c, 8));
  /* 12a068: ret  */
  return;
}

void fn2_12a1a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076896));
  /* 12a1a0: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 12a1a4: strb w8, [x0, #0x3b0] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(944)), ARC_W_R(c, 8));
  /* 12a1a8: ret  */
  return;
}

void fn2_12a2e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077077220));
  /* 12a2e4: add x0, x0, #0x430 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1072)));
  /* 12a2e8: b #0x1da22c */
  fn2_1da22c(c); return;
}

void fn2_12ac0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077079564));
  /* 12ac0c: mov w0, #0x1b */
  ARC_W_W(c, 0, UINT64_C(27));
  /* 12ac10: ret  */
  return;
}

void fn2_12bc58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077083736));
  /* 12bc58: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 12bc5c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12bc60: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 12bc64: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12bc68: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 12bc6c: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* 12bc70: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 12bc74: cmp w8, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 0));
  /* 12bc78: b.ne #0x12bce4 */
  if (ARC_COND(c, 1)) goto L_12bce4;
  /* 12bc7c: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* 12bc80: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 12bc84: add x21, sp, #0xc */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(12)));
  /* 12bc88: bl #0x12bd00 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1227916));
  fn2_12bd00(c);
  /* 12bc8c: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 12bc90: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 12bc94: add x1, x21, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 12bc98: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 12bc9c: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1227936));
  fn2_1d2b98(c);
  /* 12bca0: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 12bca4: add x1, x21, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 12bca8: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1227948));
  fn2_1d2b98(c);
  /* 12bcac: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 12bcb0: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 12bcb4: add x1, x21, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 12bcb8: str w8, [x20, #0x14] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(20)), ARC_W_R(c, 8));
  /* 12bcbc: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1227968));
  fn2_1d0708(c);
  /* 12bcc0: ldr w8, [sp, #0x2c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(44))));
  /* 12bcc4: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 12bcc8: str w8, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 8));
  /* 12bccc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1227984));
  fn2_1ccd9c(c);
  /* 12bcd0: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 12bcd4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1227992));
  fn2_1d2d24(c);
  /* 12bcd8: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 12bcdc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1228000));
  fn2_1d2d24(c);
  /* 12bce0: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
L_12bce4:;
  /* 12bce4: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 12bce8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 12bcec: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12bcf0: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 12bcf4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12bcf8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 12bcfc: ret  */
  return;
}

void fn2_12d344(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077089604));
  /* 12d344: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12d348: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12d34c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12d350: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12d354: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1233752));
  fn2_1b6040(c);
  /* 12d358: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12d35c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12d360: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12d364: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_12e7a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077094820));
  /* 12e7a4: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* 12e7a8: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 12e7ac: csel w0, w8, wzr, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 12e7b0: ret  */
  return;
}

void fn2_12fb84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077099908));
  /* 12fb84: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 12fb88: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12fb8c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12fb90: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12fb94: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 12fb98: add x20, x0, x2, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* 12fb9c: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 12fba0: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 12fba4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 12fba8: tbz w2, #0, #0x12fbb4 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_12fbb4;
  /* 12fbac: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12fbb0: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_12fbb4:;
  /* 12fbb4: ldr x1, [x22] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 22)));
  /* 12fbb8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 12fbbc: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244096));
  fn2_1d9754(c);
  /* 12fbc0: ldr x1, [x22, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* 12fbc4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12fbc8: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244108));
  fn2_1d9754(c);
  /* 12fbcc: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 12fbd0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 12fbd4: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12fbd8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12fbdc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244128));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 12fbe0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 12fbe4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12fbe8: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244140));
  fn2_1d06b8(c);
  /* 12fbec: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 12fbf0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244148));
  fn2_1ccd9c(c);
  /* 12fbf4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12fbf8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244156));
  fn2_1d97fc(c);
  /* 12fbfc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 12fc00: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244164));
  fn2_1d97fc(c);
  /* 12fc04: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12fc08: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12fc0c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12fc10: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 12fc14: ret  */
  return;
}

void fn2_131198(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077105560));
  /* 131198: tst w1, #0xfffffffb */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 1) & UINT64_C(4294967291)));
  /* 13119c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 1311a0: lsl w0, w8, #2 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* 1311a4: ret  */
  return;
}

void fn2_13290c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077111564));
  /* 13290c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 132910: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 132914: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 132918: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13291c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 132920: add x20, x0, x2, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* 132924: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 132928: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 13292c: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 132930: tbz w2, #0, #0x13293c */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_13293c;
  /* 132934: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 132938: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_13293c:;
  /* 13293c: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 132940: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 132944: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255752));
  fn2_1bc84c(c);
  /* 132948: ldr x0, [x21, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 13294c: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 132950: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255764));
  fn2_1bc84c(c);
  /* 132954: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 132958: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255772));
  fn2_1bc668(c);
  /* 13295c: ldr x9, [x21, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 132960: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 132964: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 132968: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 13296c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255792));
  fn2_1bc84c(c);
  /* 132970: ldr x0, [x21, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(32))));
  /* 132974: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 132978: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255804));
  fn2_1bccb8(c);
  /* 13297c: ldr x0, [x21, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* 132980: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 132984: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255816));
  fn2_1bc84c(c);
  /* 132988: ldr x0, [x21, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* 13298c: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 132990: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255828));
  fn2_1bc84c(c);
  /* 132994: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 132998: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 13299c: add x4, sp, #0x18 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(24)));
  /* 1329a0: add x5, sp, #0x10 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(16)));
  /* 1329a4: add x6, sp, #8 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(8)));
  /* 1329a8: mov x7, sp */
  ARC_X_W(c, 7, (c)->sp);
  /* 1329ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1329b0: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 1329b4: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255864));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 1329b8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1329bc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255872));
  fn2_1ccd9c(c);
  /* 1329c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1329c4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255880));
  fn2_1ccd9c(c);
  /* 1329c8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1329cc: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255888));
  fn2_1d97fc(c);
  /* 1329d0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1329d4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255896));
  fn2_1ccd9c(c);
  /* 1329d8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1329dc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255904));
  fn2_1ccd9c(c);
  /* 1329e0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1329e4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1255912));
  fn2_1ccd9c(c);
  /* 1329e8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1329ec: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1329f0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1329f4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1329f8: ret  */
  return;
}

void fn2_134038(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077117496));
  /* 134038: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13403c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134040: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134044: ldr x10, [x0, #0x60] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(96))));
  /* 134048: mov x9, x4 */
  ARC_X_W(c, 9, ARC_X_R(c, 4));
  /* 13404c: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* 134050: add x4, x0, #0x48 */
  ARC_X_W(c, 4, (ARC_X_R(c, 0) + UINT64_C(72)));
  /* 134054: mov w2, w3 */
  ARC_W_W(c, 2, ARC_W_R(c, 3));
  /* 134058: mov x3, x9 */
  ARC_X_W(c, 3, ARC_X_R(c, 9));
  /* 13405c: mov x0, x10 */
  ARC_X_W(c, 0, ARC_X_R(c, 10));
  /* 134060: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 134064: bl #0x134270 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1261672));
  fn2_134270(c);
  /* 134068: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13406c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134070: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134074: b #0x1bc084 */
  fn2_1bc084(c); return;
}

void fn2_135620(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077123104));
  /* 135620: cbz w1, #0x135628 */
  if ((ARC_W_R(c, 1)) == 0) goto L_135628;
  /* 135624: b #0xce208 */
  fn2_ce208(c); return;
L_135628:;
  /* 135628: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13562c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 135630: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135634: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 135638: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 13563c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 135640: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267268));
  fn2_1d2c2c(c);
  /* 135644: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 135648: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267276));
  fn2_1d2c2c(c);
  /* 13564c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 135650: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 135654: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267288));
  fn2_1ccc74(c);
  /* 135658: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 13565c: add x1, x29, #0x1c */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 135660: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 135664: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 135668: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 13566c: str wzr, [x29, #0x1c] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 31));
  /* 135670: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267316));
  fn2_b2de4(c);
  /* 135674: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 135678: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13567c: ret  */
  return;
}

void fn2_136aa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077128352));
  /* 136aa0: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 136aa4: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 136aa8: csel w0, w8, wzr, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 136aac: ret  */
  return;
}

void fn2_137c78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077132920));
  /* 137c78: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 137c7c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137c80: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 137c84: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137c88: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 137c8c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 137c90: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 137c94: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 137c98: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 137c9c: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 137ca0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 137ca4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277096));
  fn2_1b5d1c(c);
  /* 137ca8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 137cac: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 137cb0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137cb4: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 137cb8: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 137cbc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 137cc0: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 137cc4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277128));
  fn2_1d2c2c(c);
  /* 137cc8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 137ccc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277136));
  fn2_1d2c2c(c);
  /* 137cd0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 137cd4: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 137cd8: add x8, x8, #0xa38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2616)));
  /* 137cdc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137ce0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 137ce4: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 137ce8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 137cec: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 137cf0: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 137cf4: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 137cf8: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 137cfc: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 137d00: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277188));
  fn2_1b5e68(c);
  /* 137d04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137d08: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 137d0c: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 137d10: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277204));
  fn2_1b5d9c(c);
  /* 137d14: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 137d18: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 137d1c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 137d20: tbz w8, #0, #0x137d60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_137d60;
L_137d24:;
  /* 137d24: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 137d28: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 137d2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 137d30: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277236));
  fn2_1d2c40(c);
  /* 137d34: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 137d38: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 137d3c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277248));
  fn2_1d5dc0(c);
  /* 137d40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 137d44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277256));
  fn2_1d2d24(c);
  /* 137d48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137d4c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 137d50: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 137d54: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137d58: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 137d5c: ret  */
  return;
L_137d60:;
  /* 137d60: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 137d64: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 137d68: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277292));
  fn2_24b710(c);
  /* 137d6c: cbz w0, #0x137d24 */
  if ((ARC_W_R(c, 0)) == 0) goto L_137d24;
  /* 137d70: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 137d74: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 137d78: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 137d7c: add x1, x1, #0x3e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1000)));
  /* 137d80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 137d84: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277320));
  fn2_1b907c(c);
  /* 137d88: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 137d8c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 137d90: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 137d94: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 137d98: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 137d9c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277344));
  fn2_24b6f0(c);
  /* 137da0: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 137da4: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 137da8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277356));
  fn2_24b720(c);
  /* 137dac: b #0x137d24 */
  goto L_137d24;
}

void fn2_13910c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077138188));
  /* 13910c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 139110: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 139114: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 139118: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13911c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 139120: ldp x22, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 139124: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 139128: add x19, x1, x8, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 13912c: tbz w8, #0, #0x139138 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_139138;
  /* 139130: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 139134: ldr x22, [x8, x22] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 22))));
L_139138:;
  /* 139138: ldp x8, x1, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13913c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 139140: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 139144: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1282376));
  fn2_1ccc88(c);
  /* 139148: ldr x1, [x20, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 13914c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 139150: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1282388));
  fn2_1ccc88(c);
  /* 139154: ldr x8, [x20, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 139158: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 13915c: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 139160: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 139164: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 139168: ldr x4, [x8] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 8)));
  /* 13916c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1282416));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 139170: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 139174: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1282424));
  fn2_1ccd9c(c);
  /* 139178: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13917c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1282432));
  fn2_1ccd9c(c);
  /* 139180: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 139184: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 139188: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13918c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 139190: ret  */
  return;
}

void fn2_13a534(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077143348));
  /* 13a534: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13a538: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13a53c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13a540: mov x5, x4 */
  ARC_X_W(c, 5, ARC_X_R(c, 4));
  /* 13a544: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* 13a548: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* 13a54c: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* 13a550: ldp x1, x2, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 13a554: add x6, x0, #0x48 */
  ARC_X_W(c, 6, (ARC_X_R(c, 0) + UINT64_C(72)));
  /* 13a558: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 13a55c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13a560: bl #0x13a5c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1287524));
  fn2_13a5c8(c);
  /* 13a564: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a568: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13a56c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a570: b #0x1bc084 */
  fn2_1bc084(c); return;
}

void fn2_13ba94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077148820));
  /* 13ba94: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 13ba98: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13ba9c: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 13baa0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13baa4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 13baa8: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 13baac: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 13bab0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13bab4: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 13bab8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1292988));
  fn2_1d2c2c(c);
  /* 13babc: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 13bac0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1292996));
  fn2_1d2c2c(c);
  /* 13bac4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 13bac8: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 13bacc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293008));
  fn2_1ccc74(c);
  /* 13bad0: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* 13bad4: cmp w20, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(5));
  /* 13bad8: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* 13badc: b.hi #0x13bb58 */
  if (ARC_COND(c, 8)) goto L_13bb58;
  /* 13bae0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13bae4: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13bae8: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13baec: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 13baf0: bl #0xb1d4c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293044));
  fn2_b1d4c(c);
  /* 13baf4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13baf8: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13bafc: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13bb00: bl #0xc1814 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293060));
  fn2_c1814(c);
  /* 13bb04: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13bb08: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13bb0c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13bb10: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293076));
  fn2_b4168(c);
  /* 13bb14: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13bb18: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13bb1c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13bb20: bl #0xb4020 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293092));
  fn2_b4020(c);
  /* 13bb24: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13bb28: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13bb2c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13bb30: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293108));
  fn2_b4168(c);
  /* 13bb34: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13bb38: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13bb3c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13bb40: bl #0x134128 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293124));
  fn2_134128(c);
  /* 13bb44: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13bb48: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13bb4c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13bb50: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13bb54: ret  */
  return;
L_13bb58:;
  /* 13bb58: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13bb5c: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 13bb60: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 13bb64: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13bb68: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13bb6c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293168));
  fn2_1d2c2c(c);
  /* 13bb70: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13bb74: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293176));
  fn2_1d2c2c(c);
  /* 13bb78: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13bb7c: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* 13bb80: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293188));
  fn2_1ccc74(c);
  /* 13bb84: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* 13bb88: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 13bb8c: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13bb90: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* 13bb94: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 13bb98: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293212));
  fn2_1d2b98(c);
  /* 13bb9c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 13bba0: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13bba4: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293224));
  fn2_1d2b98(c);
  /* 13bba8: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* 13bbac: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 13bbb0: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13bbb4: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 13bbb8: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293244));
  fn2_1d0708(c);
  /* 13bbbc: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 13bbc0: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 13bbc4: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 13bbc8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293260));
  fn2_1ccd9c(c);
  /* 13bbcc: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13bbd0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293268));
  fn2_1d2d24(c);
  /* 13bbd4: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13bbd8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293276));
  fn2_1d2d24(c);
  /* 13bbdc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13bbe0: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 13bbe4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13bbe8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 13bbec: ret  */
  return;
}

void fn2_13cd64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077153636));
  /* 13cd64: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13cd68: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13cd6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13cd70: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13cd74: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1297784));
  fn2_1b6040(c);
  /* 13cd78: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13cd7c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13cd80: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13cd84: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_141308(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077171464));
  /* 141308: ldrb w8, [x0, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(105))));
  /* 14130c: cbz w8, #0x141760 */
  if ((ARC_W_R(c, 8)) == 0) goto L_141760;
  /* 141310: sub sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(336)));
  /* 141314: stp x29, x30, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 141318: str x28, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), ARC_X_R(c, 28));
  /* 14131c: stp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 141320: stp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 141324: add x29, sp, #0x110 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(272)));
  /* 141328: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14132c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 141330: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 141334: bl #0x2187d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315640));
  fn2_2187d0(c);
  /* 141338: ldur x0, [x29, #-0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 14133c: bl #0x210aa4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315648));
  fn2_210aa4(c);
  /* 141340: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 141344: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 141348: cbz x8, #0x141370 */
  if ((ARC_X_R(c, 8)) == 0) goto L_141370;
  /* 14134c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 141350: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315668));
  fn2_225abc(c);
  /* 141354: tbz w0, #0, #0x141370 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_141370;
  /* 141358: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 14135c: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 141360: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 141364: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 141368: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 14136c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315696));
  arc_dispatch(c, ARC_X_R(c, 9));
L_141370:;
  /* 141370: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 141374: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 141378: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315708));
  fn2_1bc530(c);
  /* 14137c: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 141380: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 141384: bl #0x24aa1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315720));
  fn2_24aa1c(c);
  /* 141388: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 14138c: bl #0x1dde90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315728));
  fn2_1dde90(c);
  /* 141390: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 141394: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 141398: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315740));
  fn2_1dde08(c);
  /* 14139c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1413a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315748));
  fn2_1bc620(c);
  /* 1413a4: cmp x22, #0x640 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(1600));
  /* 1413a8: b.gt #0x14174c */
  if (ARC_COND(c, 12)) goto L_14174c;
  /* 1413ac: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1413b0: add x1, x1, #0xd53 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3411)));
  /* 1413b4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1413b8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315772));
  fn2_1b7d24(c);
  /* 1413bc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1413c0: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1413c4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315784));
  fn2_1bc2f8(c);
  /* 1413c8: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1413cc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315792));
  fn2_1ccd9c(c);
  /* 1413d0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1413d4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315800));
  fn2_1bc084(c);
  /* 1413d8: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1413dc: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1413e0: sub x2, x29, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1413e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1413e8: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315820));
  fn2_1d9c5c(c);
  /* 1413ec: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1413f0: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315828));
  fn2_1bcc90(c);
  /* 1413f4: cmp w0, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(4));
  /* 1413f8: b.ne #0x1414ec */
  if (ARC_COND(c, 1)) goto L_1414ec;
  /* 1413fc: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 141400: add x1, x1, #0xb88 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2952)));
  /* 141404: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 141408: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315852));
  fn2_1b7d24(c);
  /* 14140c: sub x0, x29, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 141410: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 141414: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315864));
  fn2_1bc2f8(c);
  /* 141418: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 14141c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315872));
  fn2_1ccd9c(c);
  /* 141420: add x0, sp, #0x80 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(128)));
  /* 141424: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315880));
  fn2_1bc084(c);
  /* 141428: sub x8, x29, #0x60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 14142c: sub x1, x29, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 141430: add x2, sp, #0x80 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(128)));
  /* 141434: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 141438: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315900));
  fn2_1d9c5c(c);
  /* 14143c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 141440: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315908));
  fn2_1bcc90(c);
  /* 141444: cmp w0, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(4));
  /* 141448: b.ne #0x141508 */
  if (ARC_COND(c, 1)) goto L_141508;
  /* 14144c: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 141450: add x1, x1, #0x7f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2032)));
  /* 141454: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 141458: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315932));
  fn2_1b7d24(c);
  /* 14145c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 141460: add x1, sp, #0x68 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(104)));
  /* 141464: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315944));
  fn2_1bc2f8(c);
  /* 141468: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 14146c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315952));
  fn2_1ccd9c(c);
  /* 141470: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 141474: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315960));
  fn2_1bc084(c);
  /* 141478: add x8, sp, #0x68 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(104)));
  /* 14147c: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* 141480: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* 141484: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 141488: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315980));
  fn2_1d9c5c(c);
  /* 14148c: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 141490: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1315988));
  fn2_1bcc90(c);
  /* 141494: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 141498: b.ne #0x141510 */
  if (ARC_COND(c, 1)) goto L_141510;
  /* 14149c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1414a0: add x1, x1, #0xd53 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3411)));
  /* 1414a4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1414a8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316012));
  fn2_1b7d24(c);
  /* 1414ac: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1414b0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1414b4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316024));
  fn2_1bc2f8(c);
  /* 1414b8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1414bc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316032));
  fn2_1ccd9c(c);
  /* 1414c0: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1414c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1414c8: bl #0x1bbf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316044));
  fn2_1bbf90(c);
  /* 1414cc: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1414d0: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316052));
  fn2_1bc84c(c);
  /* 1414d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1414d8: bl #0x1ccef8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316060));
  fn2_1ccef8(c);
  /* 1414dc: cmp x0, #0x40 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(64));
  /* 1414e0: b.le #0x141518 */
  if (ARC_COND(c, 13)) goto L_141518;
  /* 1414e4: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 1414e8: b #0x14155c */
  goto L_14155c;
L_1414ec:;
  /* 1414ec: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1414f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316084));
  fn2_1bc620(c);
  /* 1414f4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1414f8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316092));
  fn2_1bc620(c);
  /* 1414fc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 141500: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316100));
  fn2_1bc620(c);
  /* 141504: b #0x14174c */
  goto L_14174c;
L_141508:;
  /* 141508: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 14150c: b #0x141584 */
  goto L_141584;
L_141510:;
  /* 141510: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 141514: b #0x14156c */
  goto L_14156c;
L_141518:;
  /* 141518: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 14151c: add x1, x1, #0xb88 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2952)));
  /* 141520: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 141524: bl #0xda8a8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316136));
  fn2_da8a8(c);
  /* 141528: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 14152c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 141530: bl #0x1bbf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316148));
  fn2_1bbf90(c);
  /* 141534: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 141538: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316156));
  fn2_1bc84c(c);
  /* 14153c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 141540: bl #0x1ccef8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316164));
  fn2_1ccef8(c);
  /* 141544: cmp x0, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(32));
  /* 141548: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 14154c: cset w22, gt */
  ARC_W_W(c, 22, (ARC_COND(c, 12) ? 1 : 0));
  /* 141550: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316180));
  fn2_1ccd9c(c);
  /* 141554: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 141558: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316188));
  fn2_1bc620(c);
L_14155c:;
  /* 14155c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141560: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316196));
  fn2_1ccd9c(c);
  /* 141564: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141568: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316204));
  fn2_1bc620(c);
L_14156c:;
  /* 14156c: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 141570: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316212));
  fn2_1bc620(c);
  /* 141574: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 141578: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316220));
  fn2_1bc620(c);
  /* 14157c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 141580: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316228));
  fn2_1bc620(c);
L_141584:;
  /* 141584: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 141588: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316236));
  fn2_1bc620(c);
  /* 14158c: add x0, sp, #0x80 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(128)));
  /* 141590: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316244));
  fn2_1bc620(c);
  /* 141594: sub x0, x29, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 141598: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316252));
  fn2_1bc620(c);
  /* 14159c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1415a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316260));
  fn2_1bc620(c);
  /* 1415a4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1415a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316268));
  fn2_1bc620(c);
  /* 1415ac: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1415b0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316276));
  fn2_1bc620(c);
  /* 1415b4: tbnz w22, #0, #0x14174c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_14174c;
  /* 1415b8: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 1415bc: sxtw x1, w21 */
  ARC_X_W(c, 1, ((int64_t)(int32_t)(ARC_W_R(c, 21))));
  /* 1415c0: cbz w8, #0x141738 */
  if ((ARC_W_R(c, 8)) == 0) goto L_141738;
  /* 1415c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1415c8: bl #0x141764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316300));
  fn2_141764(c);
  /* 1415cc: tbnz x0, #0x3f, #0x14174c */
  if (((ARC_X_R(c, 0)) >> 63 & 1) != 0) goto L_14174c;
  /* 1415d0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1415d4: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316312));
  fn2_22eb3c(c);
  /* 1415d8: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316316));
  fn2_2302d4(c);
  /* 1415dc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1415e0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1415e4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1415e8: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316332));
  fn2_1bc290(c);
  /* 1415ec: sub x8, x29, #0x78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 1415f0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1415f4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1415f8: bl #0x149838 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316348));
  fn2_149838(c);
  /* 1415fc: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 141600: sub x1, x29, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 141604: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316360));
  fn2_1bc544(c);
  /* 141608: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14160c: add x0, x19, #0x460 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1120)));
  /* 141610: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 141614: sub x2, x29, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 141618: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316380));
  fn2_1d9c5c(c);
  /* 14161c: sub x8, x29, #0x60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 141620: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 141624: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316392));
  fn2_1bccc4(c);
  /* 141628: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14162c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316400));
  fn2_1bc620(c);
  /* 141630: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 141634: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316408));
  fn2_1bc620(c);
  /* 141638: sub x0, x29, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 14163c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316416));
  fn2_1db788(c);
  /* 141640: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 141644: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316424));
  fn2_1bc620(c);
  /* 141648: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 14164c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 141650: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316436));
  fn2_1bbf48(c);
  /* 141654: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316440));
  fn2_1bc668(c);
  /* 141658: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 14165c: sub x8, x22, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 0)));
  /* 141660: cmp x8, #0x3e8 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1000));
  /* 141664: b.lt #0x14168c */
  if (ARC_COND(c, 11)) goto L_14168c;
  /* 141668: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14166c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 141670: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 141674: bl #0x149838 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316472));
  fn2_149838(c);
  /* 141678: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 14167c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 141680: bl #0x1dc768 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316484));
  fn2_1dc768(c);
  /* 141684: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 141688: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316492));
  fn2_1db788(c);
L_14168c:;
  /* 14168c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 141690: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 141694: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316504));
  fn2_1bbf48(c);
  /* 141698: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316508));
  fn2_1bc668(c);
  /* 14169c: cmp x0, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(9));
  /* 1416a0: b.gt #0x14172c */
  if (ARC_COND(c, 12)) goto L_14172c;
  /* 1416a4: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1416a8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1416ac: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316528));
  fn2_1bbf48(c);
  /* 1416b0: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316532));
  fn2_1bc668(c);
  /* 1416b4: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 1416b8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1416bc: add x1, x8, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1416c0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316548));
  fn2_1bc290(c);
  /* 1416c4: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1416c8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1416cc: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316560));
  fn2_1bbf48(c);
  /* 1416d0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1416d4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316568));
  fn2_1bcf04(c);
  /* 1416d8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1416dc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316576));
  fn2_1bc620(c);
  /* 1416e0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1416e4: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1416e8: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316588));
  fn2_1bc544(c);
  /* 1416ec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1416f0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1416f4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316600));
  fn2_1bc290(c);
  /* 1416f8: add x0, x19, #0x460 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1120)));
  /* 1416fc: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 141700: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316612));
  fn2_1bbfa0(c);
  /* 141704: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 141708: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316620));
  fn2_1bcf04(c);
  /* 14170c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 141710: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316628));
  fn2_1bc620(c);
  /* 141714: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 141718: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316636));
  fn2_1bc620(c);
  /* 14171c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 141720: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 141724: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 141728: bl #0x140e90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316652));
  fn2_140e90(c);
L_14172c:;
  /* 14172c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 141730: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316660));
  fn2_1db788(c);
  /* 141734: b #0x14174c */
  goto L_14174c;
L_141738:;
  /* 141738: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 14173c: b.ne #0x14174c */
  if (ARC_COND(c, 1)) goto L_14174c;
  /* 141740: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 141744: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 141748: bl #0x141858 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1316684));
  fn2_141858(c);
L_14174c:;
  /* 14174c: ldp x20, x19, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 141750: ldr x28, [sp, #0x120] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(288))));
  /* 141754: ldp x22, x21, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 141758: ldp x29, x30, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14175c: add sp, sp, #0x150 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(336)));
L_141760:;
  /* 141760: ret  */
  return;
}

void fn2_148dc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077202888));
  /* 148dc8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 148dcc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 148dd0: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 148dd4: add x8, x8, #0x208 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(520)));
  /* 148dd8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 148ddc: tbnz w8, #0, #0x148e0c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_148e0c;
  /* 148de0: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 148de4: add x0, x0, #0x208 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(520)));
  /* 148de8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347052));
  fn2_24b710(c);
  /* 148dec: cbz w0, #0x148e0c */
  if ((ARC_W_R(c, 0)) == 0) goto L_148e0c;
  /* 148df0: nop  */
  /* nop: no architectural effect here */
  /* 148df4: adr x0, #0x14b00c */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1355788)));
  /* 148df8: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347068));
  fn2_1aff64(c);
  /* 148dfc: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 148e00: add x0, x0, #0x208 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(520)));
  /* 148e04: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 148e08: b #0x24b720 */
  fn2_24b720(c); return;
L_148e0c:;
  /* 148e0c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 148e10: ret  */
  return;
}

void fn2_14b0e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077211876));
  /* 14b0e4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14b0e8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 14b0ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 14b0f0: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 14b0f4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 14b0f8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 14b0fc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 14b100: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1356036));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 14b104: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14b108: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 14b10c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 14b110: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14b114: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_14edf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077227504));
  /* 14edf0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 14edf4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14edf8: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 14edfc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 14ee00: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 14ee04: add x1, x1, #0x9c2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2498)));
  /* 14ee08: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14ee0c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14ee10: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 14ee14: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1371672));
  fn2_1b8fd4(c);
  /* 14ee18: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 14ee1c: add x1, x1, #0x4b1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1201)));
  /* 14ee20: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14ee24: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14ee28: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1371692));
  fn2_1b8fd4(c);
  /* 14ee2c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 14ee30: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14ee34: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 14ee38: bl #0x14a1cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1371708));
  fn2_14a1cc(c);
  /* 14ee3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14ee40: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 14ee44: bl #0x14ee70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1371720));
  fn2_14ee70(c);
  /* 14ee48: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14ee4c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1371728));
  fn2_1bc620(c);
  /* 14ee50: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14ee54: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1371736));
  fn2_1d2d24(c);
  /* 14ee58: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14ee5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1371744));
  fn2_1d2d24(c);
  /* 14ee60: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14ee64: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 14ee68: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 14ee6c: ret  */
  return;
}

void fn2_155364(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077253476));
  /* 155364: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 155368: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 15536c: str x19, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 19));
  /* 155370: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 155374: ldrb w8, [x0, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(104))));
  /* 155378: cbz w8, #0x155394 */
  if ((ARC_W_R(c, 8)) == 0) goto L_155394;
  /* 15537c: ldrb w19, [x0, #0x88] */
  ARC_W_W(c, 19, arc_ld8((ARC_X_R(c, 0) + INT64_C(136))));
  /* 155380: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* 155384: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 155388: ldr x19, [sp, #0x60] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(96))));
  /* 15538c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 155390: ret  */
  return;
L_155394:;
  /* 155394: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 155398: add x0, x0, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(106)));
  /* 15539c: bl #0x1db7c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397664));
  fn2_1db7c8(c);
  /* 1553a0: tbz w0, #0, #0x1553b8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1553b8;
  /* 1553a4: and w0, wzr, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 31) & UINT64_C(1)));
  /* 1553a8: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1553ac: ldr x19, [sp, #0x60] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(96))));
  /* 1553b0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1553b4: ret  */
  return;
L_1553b8:;
  /* 1553b8: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 1553bc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1553c0: bl #0x1bbf38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397700));
  fn2_1bbf38(c);
  /* 1553c4: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1553c8: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397708));
  fn2_1bccb8(c);
  /* 1553cc: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1553d0: add x1, x1, #0x96b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2411)));
  /* 1553d4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1553d8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397724));
  fn2_1b7d24(c);
  /* 1553dc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1553e0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1553e4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397736));
  fn2_1bc2f8(c);
  /* 1553e8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1553ec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397744));
  fn2_1ccd9c(c);
  /* 1553f0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1553f4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1553f8: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397756));
  fn2_1bc25c(c);
  /* 1553fc: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 155400: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 155404: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 155408: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 15540c: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397776));
  fn2_1d9c5c(c);
  /* 155410: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 155414: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397784));
  fn2_1bc630(c);
  /* 155418: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 15541c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 155420: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397796));
  fn2_1bc620(c);
  /* 155424: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 155428: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397804));
  fn2_1bc620(c);
  /* 15542c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 155430: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397812));
  fn2_1bc620(c);
  /* 155434: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 155438: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1397820));
  fn2_1d97fc(c);
  /* 15543c: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* 155440: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 155444: ldr x19, [sp, #0x60] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(96))));
  /* 155448: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 15544c: ret  */
  return;
}

void fn2_15be98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077280920));
  /* 15be98: fmov d0, #1.00000000 */
  arc_d_w(c, 0, (double)(1.0));
  /* 15be9c: ldr d1, [x0, #0x130] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(304))));
  /* 15bea0: ldrb w9, [x0, #0x128] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(296))));
  /* 15bea4: ldrb w10, [x0, #0x68] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 0) + INT64_C(104))));
  /* 15bea8: mov w11, #2 */
  ARC_W_W(c, 11, UINT64_C(2));
  /* 15beac: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* 15beb0: fmov d0, #3.00000000 */
  arc_d_w(c, 0, (double)(3.0));
  /* 15beb4: cset w8, ge */
  ARC_W_W(c, 8, (ARC_COND(c, 10) ? 1 : 0));
  /* 15beb8: fcmp d1, d0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 1)), (double)(ARC_D_R(c, 0)));
  /* 15bebc: csel x8, x8, x11, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* 15bec0: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* 15bec4: ldrb w9, [x0, #0x148] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(328))));
  /* 15bec8: ldrb w11, [x0, #0x69] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 0) + INT64_C(105))));
  /* 15becc: ccmp w10, #0, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 15bed0: ccmp w9, #0, #4, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 15bed4: ccmp w11, #0, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(0)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 15bed8: csel x0, xzr, x8, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* 15bedc: ret  */
  return;
}

void fn2_164768(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077315944));
  /* 164768: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 16476c: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 164770: str x23, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 23));
  /* 164774: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 164778: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 16477c: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* 164780: ldrb w8, [x0, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(105))));
  /* 164784: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 164788: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 16478c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 164790: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 164794: tbz w8, #0, #0x164a64 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_164a64;
  /* 164798: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 16479c: ldr x8, [x8, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(136))));
  /* 1647a0: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1647a4: cbz x23, #0x164b34 */
  if ((ARC_X_R(c, 23)) == 0) goto L_164b34;
  /* 1647a8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1647ac: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 1647b0: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460148));
  fn2_1bc544(c);
  /* 1647b4: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1647b8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1647bc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1647c0: bl #0xe96f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460164));
  fn2_e96f4(c);
  /* 1647c4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1647c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460172));
  fn2_1bc620(c);
  /* 1647cc: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1647d0: add x1, x1, #0xadb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2779)));
  /* 1647d4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1647d8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460188));
  fn2_1b7d24(c);
  /* 1647dc: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 1647e0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1647e4: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460200));
  fn2_1ccc88(c);
  /* 1647e8: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1647ec: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1647f0: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460212));
  fn2_1ccc88(c);
  /* 1647f4: add x8, sp, #0x48 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(72)));
  /* 1647f8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1647fc: bl #0x24a86c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460224));
  fn2_24a86c(c);
  /* 164800: sub x8, x29, #0x50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 164804: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164808: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 16480c: add x2, sp, #0x50 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(80)));
  /* 164810: add x3, sp, #0x48 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(72)));
  /* 164814: bl #0x167d40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460248));
  fn2_167d40(c);
  /* 164818: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 16481c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460256));
  fn2_1ccd9c(c);
  /* 164820: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 164824: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460264));
  fn2_1ccd9c(c);
  /* 164828: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 16482c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460272));
  fn2_1ccd9c(c);
  /* 164830: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164834: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460280));
  fn2_1ccd9c(c);
  /* 164838: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460284));
  fn2_22eb3c(c);
  /* 16483c: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460288));
  fn2_2302d4(c);
  /* 164840: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 164844: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 164848: add x1, x20, #0x360 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(864)));
  /* 16484c: bl #0x1cf730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460304));
  fn2_1cf730(c);
  /* 164850: tbz w0, #0, #0x164864 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_164864;
  /* 164854: ldr x8, [x20, #0x368] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(872))));
  /* 164858: sub x8, x23, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - ARC_X_R(c, 8)));
  /* 16485c: cmp x8, #0x190 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(400));
  /* 164860: b.lt #0x164a54 */
  if (ARC_COND(c, 11)) goto L_164a54;
L_164864:;
  /* 164864: add x0, x20, #0x360 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(864)));
  /* 164868: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 16486c: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460336));
  fn2_1d06b8(c);
  /* 164870: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 164874: add x1, x1, #0x3e2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(994)));
  /* 164878: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 16487c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 164880: str x23, [x20, #0x368] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(872)), ARC_X_R(c, 23));
  /* 164884: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460360));
  fn2_1b8fd4(c);
  /* 164888: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 16488c: add x1, x1, #0x8cd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2253)));
  /* 164890: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 164894: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 164898: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460380));
  fn2_1b8fd4(c);
  /* 16489c: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 1648a0: add x1, x1, #0xcbe */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3262)));
  /* 1648a4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1648a8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460396));
  fn2_1b7d24(c);
  /* 1648ac: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 1648b0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1648b4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1648b8: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1648bc: bl #0x149e90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460416));
  fn2_149e90(c);
  /* 1648c0: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1648c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460424));
  fn2_1bc620(c);
  /* 1648c8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1648cc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460432));
  fn2_1ccd9c(c);
  /* 1648d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1648d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460440));
  fn2_1d2d24(c);
  /* 1648d8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1648dc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460448));
  fn2_1d2d24(c);
  /* 1648e0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 1648e4: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460456));
  fn2_1d9740(c);
  /* 1648e8: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1648ec: add x1, x1, #0x658 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1624)));
  /* 1648f0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1648f4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460472));
  fn2_1b7d24(c);
  /* 1648f8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1648fc: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 164900: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460484));
  fn2_1bc2f8(c);
  /* 164904: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 164908: add x1, x1, #0x2a5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(677)));
  /* 16490c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 164910: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460500));
  fn2_1b7d24(c);
  /* 164914: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 164918: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 16491c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460512));
  fn2_1bc2f8(c);
  /* 164920: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 164924: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460520));
  fn2_1ccd9c(c);
  /* 164928: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 16492c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 164930: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460532));
  fn2_1bbfa0(c);
  /* 164934: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164938: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460540));
  fn2_1bcf04(c);
  /* 16493c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 164940: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460548));
  fn2_1bc620(c);
  /* 164944: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164948: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460556));
  fn2_1bc620(c);
  /* 16494c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 164950: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460564));
  fn2_1ccd9c(c);
  /* 164954: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164958: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 16495c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460576));
  fn2_1bc2f8(c);
  /* 164960: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 164964: add x1, x1, #0xfb0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4016)));
  /* 164968: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 16496c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460592));
  fn2_1b7d24(c);
  /* 164970: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 164974: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 164978: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460604));
  fn2_1bc2f8(c);
  /* 16497c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 164980: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460612));
  fn2_1ccd9c(c);
  /* 164984: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 164988: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 16498c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460624));
  fn2_1bbfa0(c);
  /* 164990: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164994: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460632));
  fn2_1bcf04(c);
  /* 164998: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16499c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460640));
  fn2_1bc620(c);
  /* 1649a0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1649a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460648));
  fn2_1bc620(c);
  /* 1649a8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1649ac: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1649b0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460660));
  fn2_1bc2f8(c);
  /* 1649b4: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1649b8: add x1, x1, #0x8e1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2273)));
  /* 1649bc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1649c0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460676));
  fn2_1b7d24(c);
  /* 1649c4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1649c8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1649cc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460688));
  fn2_1bc2f8(c);
  /* 1649d0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1649d4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460696));
  fn2_1ccd9c(c);
  /* 1649d8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 1649dc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1649e0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460708));
  fn2_1bbfa0(c);
  /* 1649e4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1649e8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460716));
  fn2_1bcf04(c);
  /* 1649ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1649f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460724));
  fn2_1bc620(c);
  /* 1649f4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1649f8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460732));
  fn2_1bc620(c);
  /* 1649fc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 164a00: add x1, x1, #0xf24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3876)));
  /* 164a04: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 164a08: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460748));
  fn2_1b7d24(c);
  /* 164a0c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164a10: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 164a14: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460760));
  fn2_1bc2f8(c);
  /* 164a18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 164a1c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460768));
  fn2_1ccd9c(c);
  /* 164a20: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 164a24: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164a28: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460780));
  fn2_1bbfa0(c);
  /* 164a2c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 164a30: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460788));
  fn2_1bce10(c);
  /* 164a34: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164a38: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460796));
  fn2_1bc620(c);
  /* 164a3c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 164a40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 164a44: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 164a48: bl #0x164d60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460812));
  fn2_164d60(c);
  /* 164a4c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 164a50: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460820));
  fn2_1d97fc(c);
L_164a54:;
  /* 164a54: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 164a58: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460828));
  fn2_1ccd9c(c);
  /* 164a5c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 164a60: b #0x164b00 */
  goto L_164b00;
L_164a64:;
  /* 164a64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 164a68: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 164a6c: mov x23, x3 */
  ARC_X_W(c, 23, ARC_X_R(c, 3));
  /* 164a70: bl #0x164ba0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460852));
  fn2_164ba0(c);
  /* 164a74: cbz x0, #0x164b1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_164b1c;
  /* 164a78: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 164a7c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 164a80: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 164a84: bl #0x1d2c70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460872));
  fn2_1d2c70(c);
  /* 164a88: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164a8c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 164a90: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 164a94: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 164a98: bl #0x2215f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460892));
  fn2_2215f0(c);
  /* 164a9c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 164aa0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460900));
  fn2_1d2d24(c);
  /* 164aa4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 164aa8: bl #0x1d7b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460908));
  fn2_1d7b84(c);
  /* 164aac: tbz w0, #0, #0x164afc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_164afc;
L_164ab0:;
  /* 164ab0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 164ab4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164ab8: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 164abc: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460928));
  fn2_1bc0b8(c);
  /* 164ac0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 164ac4: str x20, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 20));
  /* 164ac8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460940));
  fn2_1bc084(c);
  /* 164acc: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 164ad0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 164ad4: sub x2, x29, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 164ad8: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 164adc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 164ae0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 164ae4: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* 164ae8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460972));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 164aec: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 164af0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460980));
  fn2_1bc620(c);
  /* 164af4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 164af8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460988));
  fn2_1bc620(c);
L_164afc:;
  /* 164afc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
L_164b00:;
  /* 164b00: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1460996));
  fn2_1bc620(c);
  /* 164b04: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 164b08: ldr x23, [sp, #0xc0] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(192))));
  /* 164b0c: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 164b10: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 164b14: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 164b18: ret  */
  return;
L_164b1c:;
  /* 164b1c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 164b20: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1461028));
  fn2_1bc084(c);
  /* 164b24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 164b28: bl #0x1d7b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1461036));
  fn2_1d7b84(c);
  /* 164b2c: tbnz w0, #0, #0x164ab0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_164ab0;
  /* 164b30: b #0x164afc */
  goto L_164afc;
L_164b34:;
  /* 164b34: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 164b38: add x0, x0, #0xf6d */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3949)));
  /* 164b3c: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 164b40: add x1, x1, #0x978 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2424)));
  /* 164b44: adrp x3, #0x25000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(151552)));
  /* 164b48: add x3, x3, #0x601 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1537)));
  /* 164b4c: mov w2, #0x1b9 */
  ARC_W_W(c, 2, UINT64_C(441));
  /* 164b50: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 164b54: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 164b58: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 164b5c: ldr x23, [sp, #0xc0] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(192))));
  /* 164b60: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 164b64: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 164b68: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 164b6c: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_16d85c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077353052));
  /* 16d85c: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 16d860: str d8, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), (c)->q[8].u64[0]);
  /* 16d864: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 16d868: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 16d86c: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 16d870: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 16d874: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 16d878: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 16d87c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 16d880: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 16d884: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 16d888: strb w8, [x0, #0x288] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(648)), ARC_W_R(c, 8));
  /* 16d88c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 16d890: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 16d894: add x0, x0, #0x428 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1064)));
  /* 16d898: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 16d89c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 16d8a0: str x2, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 2));
  /* 16d8a4: bl #0x1b852c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497256));
  fn2_1b852c(c);
  /* 16d8a8: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 16d8ac: cbz x8, #0x16daa0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_16daa0;
  /* 16d8b0: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497268));
  fn2_22eb3c(c);
  /* 16d8b4: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497272));
  fn2_2302d4(c);
  /* 16d8b8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 16d8bc: str x0, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 0));
  /* 16d8c0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 16d8c4: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497288));
  fn2_1d9740(c);
  /* 16d8c8: ldr x24, [x19, #0x20] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 16d8cc: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 16d8d0: add x1, x1, #0x51c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1308)));
  /* 16d8d4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16d8d8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16d8dc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497312));
  fn2_1b8fd4(c);
  /* 16d8e0: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d8e4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 16d8e8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 16d8ec: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497328));
  fn2_21fe38(c);
  /* 16d8f0: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d8f4: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497336));
  fn2_1bcbbc(c);
  /* 16d8f8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 16d8fc: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d900: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497348));
  fn2_1bc620(c);
  /* 16d904: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16d908: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497356));
  fn2_1d2d24(c);
  /* 16d90c: cbz x24, #0x16d9d8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_16d9d8;
  /* 16d910: ldr x25, [x19, #0x20] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 16d914: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 16d918: add x1, x1, #0xf64 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3940)));
  /* 16d91c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16d920: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16d924: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497384));
  fn2_1b8fd4(c);
  /* 16d928: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d92c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 16d930: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 16d934: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497400));
  fn2_21fe38(c);
  /* 16d938: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d93c: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497408));
  fn2_1bcbbc(c);
  /* 16d940: bl #0xdbc60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497412));
  fn2_dbc60(c);
  /* 16d944: ldrb w26, [x19, #0x8a] */
  ARC_W_W(c, 26, arc_ld8((ARC_X_R(c, 19) + INT64_C(138))));
  /* 16d948: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 16d94c: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d950: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497428));
  fn2_1bc620(c);
  /* 16d954: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16d958: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497436));
  fn2_1d2d24(c);
  /* 16d95c: cbz x25, #0x16d9d8 */
  if ((ARC_X_R(c, 25)) == 0) goto L_16d9d8;
  /* 16d960: cbnz w26, #0x16d9d8 */
  if ((ARC_W_R(c, 26)) != 0) goto L_16d9d8;
  /* 16d964: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 16d968: add x1, x1, #0x219 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(537)));
  /* 16d96c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16d970: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16d974: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497464));
  fn2_1b8fd4(c);
  /* 16d978: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d97c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 16d980: sub x25, x29, #0x28 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d984: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497480));
  fn2_1bc44c(c);
  /* 16d988: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 16d98c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16d990: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 16d994: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 16d998: stur x25, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 25));
  /* 16d99c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497504));
  fn2_221308(c);
  /* 16d9a0: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d9a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497512));
  fn2_1bc620(c);
  /* 16d9a8: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d9ac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16d9b0: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497524));
  fn2_1bccb8(c);
  /* 16d9b4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 16d9b8: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d9bc: bl #0x1da27c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497536));
  fn2_1da27c(c);
  /* 16d9c0: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16d9c4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497544));
  fn2_1d97fc(c);
  /* 16d9c8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16d9cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497552));
  fn2_1bc620(c);
  /* 16d9d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16d9d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497560));
  fn2_1d2d24(c);
L_16d9d8:;
  /* 16d9d8: ldr d8, [x19, #0x3a0] */
  arc_du_w(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(928))));
  /* 16d9dc: fcmp d8, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 8)), (double)(0.0));
  /* 16d9e0: b.le #0x16da5c */
  if (ARC_COND(c, 13)) goto L_16da5c;
  /* 16d9e4: ldrb w8, [x19, #0x8a] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(138))));
  /* 16d9e8: cbz w8, #0x16da5c */
  if ((ARC_W_R(c, 8)) == 0) goto L_16da5c;
  /* 16d9ec: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 16d9f0: add x1, x1, #0xbaa */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2986)));
  /* 16d9f4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16d9f8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16d9fc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497600));
  fn2_1b8fd4(c);
  /* 16da00: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16da04: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16da08: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 16da0c: bl #0x1d78bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497616));
  fn2_1d78bc(c);
  /* 16da10: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16da14: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16da18: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* 16da1c: add x3, sp, #0x20 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(32)));
  /* 16da20: add x4, sp, #0x28 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(40)));
  /* 16da24: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 16da28: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 16da2c: bl #0x16f2d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497648));
  fn2_16f2d0(c);
  /* 16da30: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* 16da34: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16da38: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 16da3c: bl #0x1499c0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497664));
  fn2_1499c0(c);
  /* 16da40: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16da44: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497672));
  fn2_1d79fc(c);
  /* 16da48: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16da4c: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497680));
  fn2_1d79fc(c);
  /* 16da50: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16da54: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497688));
  fn2_1d2d24(c);
  /* 16da58: b #0x16da78 */
  goto L_16da78;
L_16da5c:;
  /* 16da5c: add x3, sp, #0x20 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(32)));
  /* 16da60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 16da64: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 16da68: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 16da6c: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* 16da70: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 16da74: bl #0x16e110 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497720));
  fn2_16e110(c);
L_16da78:;
  /* 16da78: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 16da7c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1497728));
  fn2_1d97fc(c);
  /* 16da80: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 16da84: ldr d8, [sp, #0x50] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(80))));
  /* 16da88: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 16da8c: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 16da90: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 16da94: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16da98: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 16da9c: ret  */
  return;
L_16daa0:;
  /* 16daa0: adrp x0, #0x1d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(118784)));
  /* 16daa4: add x0, x0, #0x566 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1382)));
  /* 16daa8: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 16daac: add x1, x1, #0x430 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1072)));
  /* 16dab0: adrp x3, #0x1a000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(106496)));
  /* 16dab4: add x3, x3, #0xa84 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2692)));
  /* 16dab8: mov w2, #0x22e */
  ARC_W_W(c, 2, UINT64_C(558));
  /* 16dabc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 16dac0: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 16dac4: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 16dac8: ldr d8, [sp, #0x50] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(80))));
  /* 16dacc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 16dad0: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 16dad4: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 16dad8: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16dadc: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 16dae0: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_1701ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077363692));
  /* 1701ec: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1701f0: ret  */
  return;
}

void fn2_172f08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077375240));
  /* 172f08: b #0x1729e0 */
  fn2_1729e0(c); return;
}

void fn2_175a38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077386296));
  /* 175a38: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 175a3c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 175a40: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 175a44: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 175a48: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 175a4c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 175a50: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 175a54: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 175a58: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 175a5c: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 175a60: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 175a64: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530472));
  fn2_1b5d1c(c);
  /* 175a68: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 175a6c: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 175a70: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 175a74: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 175a78: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 175a7c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 175a80: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 175a84: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530504));
  fn2_1d2c2c(c);
  /* 175a88: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 175a8c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530512));
  fn2_1d2c2c(c);
  /* 175a90: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 175a94: adrp x8, #0x255000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 175a98: add x8, x8, #0x460 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1120)));
  /* 175a9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 175aa0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 175aa4: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 175aa8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 175aac: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 175ab0: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 175ab4: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 175ab8: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 175abc: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 175ac0: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530564));
  fn2_1b5e68(c);
  /* 175ac4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 175ac8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 175acc: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 175ad0: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530580));
  fn2_1b5d9c(c);
  /* 175ad4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 175ad8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 175adc: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530592));
  fn2_1b5d8c(c);
  /* 175ae0: nop  */
  /* nop: no architectural effect here */
  /* 175ae4: adr x8, #0x25d2c8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478792)));
  /* 175ae8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 175aec: tbz w8, #0, #0x175b2c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_175b2c;
L_175af0:;
  /* 175af0: nop  */
  /* nop: no architectural effect here */
  /* 175af4: adr x1, #0x25d2c0 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478784)));
  /* 175af8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 175afc: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530624));
  fn2_1d2c40(c);
  /* 175b00: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 175b04: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 175b08: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530636));
  fn2_1d5dc0(c);
  /* 175b0c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 175b10: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530644));
  fn2_1d2d24(c);
  /* 175b14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 175b18: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 175b1c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 175b20: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 175b24: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 175b28: ret  */
  return;
L_175b2c:;
  /* 175b2c: nop  */
  /* nop: no architectural effect here */
  /* 175b30: adr x0, #0x25d2c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478792)));
  /* 175b34: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530680));
  fn2_24b710(c);
  /* 175b38: cbz w0, #0x175af0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_175af0;
  /* 175b3c: nop  */
  /* nop: no architectural effect here */
  /* 175b40: adr x20, #0x25d2c0 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478784)));
  /* 175b44: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 175b48: add x1, x1, #0x3a4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(932)));
  /* 175b4c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 175b50: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530708));
  fn2_1b907c(c);
  /* 175b54: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 175b58: nop  */
  /* nop: no architectural effect here */
  /* 175b5c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 175b60: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 175b64: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 175b68: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530732));
  fn2_24b6f0(c);
  /* 175b6c: nop  */
  /* nop: no architectural effect here */
  /* 175b70: adr x0, #0x25d2c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478792)));
  /* 175b74: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1530744));
  fn2_24b720(c);
  /* 175b78: b #0x175af0 */
  goto L_175af0;
}

void fn2_1771bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077392316));
  /* 1771bc: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1771c0: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 1771c4: mov w9, #0x1b */
  ARC_W_W(c, 9, UINT64_C(27));
  /* 1771c8: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 1771cc: ret  */
  return;
}

void fn2_1798cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077402316));
  /* 1798cc: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1798d0: ret  */
  return;
}

void fn2_17c864(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077414500));
  /* 17c864: cbz x0, #0x17c87c */
  if ((ARC_X_R(c, 0)) == 0) goto L_17c87c;
  /* 17c868: ldr x8, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 17c86c: cbz x8, #0x17c878 */
  if ((ARC_X_R(c, 8)) == 0) goto L_17c878;
  /* 17c870: ldr w8, [x8, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 8) + INT64_C(16))));
  /* 17c874: cbnz w8, #0x17c88c */
  if ((ARC_W_R(c, 8)) != 0) goto L_17c88c;
L_17c878:;
  /* 17c878: b #0x1afec8 */
  fn2_1afec8(c); return;
L_17c87c:;
  /* 17c87c: cbz x1, #0x17c8c8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_17c8c8;
  /* 17c880: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 17c884: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 17c888: ret  */
  return;
L_17c88c:;
  /* 17c88c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17c890: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 17c894: adrp x0, #0x24000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(147456)));
  /* 17c898: add x0, x0, #0xbba */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3002)));
  /* 17c89c: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 17c8a0: add x1, x1, #0x9a4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2468)));
  /* 17c8a4: adrp x3, #0x29000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(167936)));
  /* 17c8a8: add x3, x3, #0x73a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1850)));
  /* 17c8ac: adrp x4, #0x2f000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(192512)));
  /* 17c8b0: add x4, x4, #0x9be */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(2494)));
  /* 17c8b4: mov w2, #0x11 */
  ARC_W_W(c, 2, UINT64_C(17));
  /* 17c8b8: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 17c8bc: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 17c8c0: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1558724));
  fn2_1b5598(c);
  /* 17c8c4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
L_17c8c8:;
  /* 17c8c8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 17c8cc: ret  */
  return;
}

void fn2_17d72c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077418284));
  /* 17d72c: cbz x0, #0x17d744 */
  if ((ARC_X_R(c, 0)) == 0) goto L_17d744;
  /* 17d730: ldr x8, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 17d734: cbz x8, #0x17d740 */
  if ((ARC_X_R(c, 8)) == 0) goto L_17d740;
  /* 17d738: ldr w8, [x8, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 8) + INT64_C(16))));
  /* 17d73c: cbnz w8, #0x17d754 */
  if ((ARC_W_R(c, 8)) != 0) goto L_17d754;
L_17d740:;
  /* 17d740: b #0x1afec8 */
  fn2_1afec8(c); return;
L_17d744:;
  /* 17d744: cbz x1, #0x17d790 */
  if ((ARC_X_R(c, 1)) == 0) goto L_17d790;
  /* 17d748: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 17d74c: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 17d750: ret  */
  return;
L_17d754:;
  /* 17d754: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17d758: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 17d75c: adrp x0, #0x24000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(147456)));
  /* 17d760: add x0, x0, #0xbba */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3002)));
  /* 17d764: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 17d768: add x1, x1, #0x9f5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2549)));
  /* 17d76c: adrp x3, #0x29000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(167936)));
  /* 17d770: add x3, x3, #0x73a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1850)));
  /* 17d774: adrp x4, #0x2f000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(192512)));
  /* 17d778: add x4, x4, #0x9be */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(2494)));
  /* 17d77c: mov w2, #0x12 */
  ARC_W_W(c, 2, UINT64_C(18));
  /* 17d780: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 17d784: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 17d788: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1562508));
  fn2_1b5598(c);
  /* 17d78c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
L_17d790:;
  /* 17d790: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 17d794: ret  */
  return;
}

void fn2_17e6bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077422268));
  /* 17e6bc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17e6c0: ret  */
  return;
}

void fn2_17f584(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077426052));
  /* 17f584: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17f588: ret  */
  return;
}

void fn2_18044c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077429836));
  /* 18044c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 180450: ret  */
  return;
}

void fn2_181314(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077433620));
  /* 181314: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 181318: ret  */
  return;
}

void fn2_1822e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077437668));
  /* 1822e4: cbz x0, #0x1822fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1822fc;
  /* 1822e8: ldr x8, [x0, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1822ec: cbz x8, #0x1822f8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1822f8;
  /* 1822f0: ldr w8, [x8, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1822f4: cbnz w8, #0x18230c */
  if ((ARC_W_R(c, 8)) != 0) goto L_18230c;
L_1822f8:;
  /* 1822f8: b #0x1afec8 */
  fn2_1afec8(c); return;
L_1822fc:;
  /* 1822fc: cbz x1, #0x182348 */
  if ((ARC_X_R(c, 1)) == 0) goto L_182348;
  /* 182300: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 182304: str wzr, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 182308: ret  */
  return;
L_18230c:;
  /* 18230c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 182310: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 182314: adrp x0, #0x24000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(147456)));
  /* 182318: add x0, x0, #0xbba */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3002)));
  /* 18231c: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 182320: add x1, x1, #0xf89 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3977)));
  /* 182324: adrp x3, #0x29000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(167936)));
  /* 182328: add x3, x3, #0x73a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1850)));
  /* 18232c: adrp x4, #0x2f000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(192512)));
  /* 182330: add x4, x4, #0x9be */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(2494)));
  /* 182334: mov w2, #0x17 */
  ARC_W_W(c, 2, UINT64_C(23));
  /* 182338: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 18233c: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 182340: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1581892));
  fn2_1b5598(c);
  /* 182344: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
L_182348:;
  /* 182348: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 18234c: ret  */
  return;
}

void fn2_18361c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077442588));
  /* 18361c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 183620: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 183624: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 183628: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 18362c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 183630: ldr x8, [x8, #0xb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(184))));
  /* 183634: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1586744));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 183638: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* 18363c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 183640: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 183644: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 183648: ret  */
  return;
}

void fn2_184574(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077446516));
  /* 184574: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 184578: ret  */
  return;
}

void fn2_1855ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077450668));
  /* 1855ac: ret  */
  return;
}

void fn2_1861e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077453800));
  /* 1861e8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1861ec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1861f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1861f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1861f8: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1861fc: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 186200: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 186204: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 186208: cbz x0, #0x186238 */
  if ((ARC_X_R(c, 0)) == 0) goto L_186238;
L_18620c:;
  /* 18620c: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 186210: cbz x1, #0x186228 */
  if ((ARC_X_R(c, 1)) == 0) goto L_186228;
  /* 186214: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1597976));
  fn2_aeb74(c);
  /* 186218: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 18621c: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 186220: cbnz w8, #0x18620c */
  if ((ARC_W_R(c, 8)) != 0) goto L_18620c;
  /* 186224: b #0x186230 */
  goto L_186230;
L_186228:;
  /* 186228: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 18622c: cbnz w8, #0x186248 */
  if ((ARC_W_R(c, 8)) != 0) goto L_186248;
L_186230:;
  /* 186230: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 186234: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1598008));
  fn2_1b5ce8(c);
L_186238:;
  /* 186238: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18623c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 186240: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 186244: b #0x24b730 */
  fn2_24b730(c); return;
L_186248:;
  /* 186248: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 18624c: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 186250: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 186254: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 186258: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 18625c: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 186260: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 186264: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 186268: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 18626c: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1598064));
  fn2_1b54b0(c);
  /* 186270: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 186274: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 186278: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18627c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_1897a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077467552));
  /* 1897a0: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 1897a4: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1897a8: str x23, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 23));
  /* 1897ac: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1897b0: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1897b4: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* 1897b8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1897bc: add x8, sp, #0x50 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(80)));
  /* 1897c0: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 1897c4: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1897c8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1897cc: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611728));
  fn2_1bccb8(c);
  /* 1897d0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1897d4: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* 1897d8: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 1897dc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611744));
  fn2_1b7d24(c);
  /* 1897e0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1897e4: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 1897e8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611756));
  fn2_1bc2f8(c);
  /* 1897ec: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 1897f0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611764));
  fn2_1ccd9c(c);
  /* 1897f4: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 1897f8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1897fc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611776));
  fn2_1bbfa0(c);
  /* 189800: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611780));
  fn2_1bc668(c);
  /* 189804: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 189808: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 18980c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611792));
  fn2_1bc620(c);
  /* 189810: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 189814: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* 189818: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 18981c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611808));
  fn2_1b7d24(c);
  /* 189820: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189824: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 189828: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611820));
  fn2_1bc2f8(c);
  /* 18982c: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 189830: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611828));
  fn2_1ccd9c(c);
  /* 189834: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 189838: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 18983c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611840));
  fn2_1bbfa0(c);
  /* 189840: add x8, sp, #0x48 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(72)));
  /* 189844: bl #0x188870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611848));
  fn2_188870(c);
  /* 189848: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 18984c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611856));
  fn2_1bc620(c);
  /* 189850: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* 189854: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 189858: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611868));
  fn2_1bc84c(c);
  /* 18985c: sub x22, x20, #0xc8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 20) - UINT64_C(200)));
  /* 189860: cmp x22, #0x64 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(100));
  /* 189864: b.lo #0x18987c */
  if (ARC_COND(c, 3)) goto L_18987c;
  /* 189868: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 18986c: add x1, x1, #0xc37 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3127)));
  /* 189870: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 189874: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611896));
  fn2_1b865c(c);
  /* 189878: tbz w0, #0, #0x1898b8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1898b8;
L_18987c:;
  /* 18987c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189880: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 189884: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611912));
  fn2_1bc25c(c);
  /* 189888: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 18988c: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 189890: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611924));
  fn2_1bc2f8(c);
  /* 189894: add x0, x21, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(32)));
  /* 189898: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 18989c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611936));
  fn2_1bbfa0(c);
  /* 1898a0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1898a4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611944));
  fn2_1bcf04(c);
  /* 1898a8: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 1898ac: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611952));
  fn2_1bc620(c);
  /* 1898b0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1898b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611960));
  fn2_1bc620(c);
L_1898b8:;
  /* 1898b8: cmp x22, #0x64 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(100));
  /* 1898bc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1898c0: cset w21, lo */
  ARC_W_W(c, 21, (ARC_COND(c, 3) ? 1 : 0));
  /* 1898c4: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611976));
  fn2_1d9740(c);
  /* 1898c8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1898cc: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 1898d0: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1611988));
  fn2_1bc25c(c);
  /* 1898d4: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 1898d8: add x1, x1, #0x134 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(308)));
  /* 1898dc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1898e0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612004));
  fn2_1b7d24(c);
  /* 1898e4: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 1898e8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1898ec: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612016));
  fn2_1bc2f8(c);
  /* 1898f0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1898f4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612024));
  fn2_1ccd9c(c);
  /* 1898f8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1898fc: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 189900: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612036));
  fn2_1bbfa0(c);
  /* 189904: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189908: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612044));
  fn2_1bcf04(c);
  /* 18990c: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 189910: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612052));
  fn2_1bc620(c);
  /* 189914: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189918: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612060));
  fn2_1bc620(c);
  /* 18991c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189920: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 189924: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612072));
  fn2_1bc290(c);
  /* 189928: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 18992c: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* 189930: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 189934: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612088));
  fn2_1b7d24(c);
  /* 189938: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 18993c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 189940: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612100));
  fn2_1bc2f8(c);
  /* 189944: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 189948: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612108));
  fn2_1ccd9c(c);
  /* 18994c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 189950: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 189954: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612120));
  fn2_1bbfa0(c);
  /* 189958: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 18995c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612128));
  fn2_1bcf04(c);
  /* 189960: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 189964: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612136));
  fn2_1bc620(c);
  /* 189968: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 18996c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612144));
  fn2_1bc620(c);
  /* 189970: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189974: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 189978: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612156));
  fn2_1bc2f8(c);
  /* 18997c: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 189980: add x1, x1, #0xf36 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3894)));
  /* 189984: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 189988: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612172));
  fn2_1b7d24(c);
  /* 18998c: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 189990: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 189994: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612184));
  fn2_1bc2f8(c);
  /* 189998: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 18999c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612192));
  fn2_1ccd9c(c);
  /* 1899a0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1899a4: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 1899a8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612204));
  fn2_1bbfa0(c);
  /* 1899ac: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1899b0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612212));
  fn2_1bcf04(c);
  /* 1899b4: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 1899b8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612220));
  fn2_1bc620(c);
  /* 1899bc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1899c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612228));
  fn2_1bc620(c);
  /* 1899c4: adrp x21, #0x23000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(143360)));
  /* 1899c8: add x21, x21, #0x411 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1041)));
  /* 1899cc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1899d0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1899d4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612248));
  fn2_1b7d24(c);
  /* 1899d8: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1899dc: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 1899e0: bl #0x1cd2d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612260));
  fn2_1cd2d8(c);
  /* 1899e4: adrp x8, #0x21000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1899e8: add x8, x8, #0xaf4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2804)));
  /* 1899ec: tst w0, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 0) & UINT64_C(1)));
  /* 1899f0: adrp x23, #0x1e000 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1899f4: add x23, x23, #0xd53 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(3411)));
  /* 1899f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1899fc: csel x1, x23, x8, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 8)));
  /* 189a00: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612292));
  fn2_1b7d24(c);
  /* 189a04: sub x8, x29, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 189a08: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 189a0c: add x2, sp, #0x48 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(72)));
  /* 189a10: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 189a14: bl #0x18912c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612312));
  fn2_18912c(c);
  /* 189a18: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189a1c: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 189a20: sub x22, x29, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189a24: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612328));
  fn2_1bc2f8(c);
  /* 189a28: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 189a2c: add x1, x1, #0x8dc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2268)));
  /* 189a30: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 189a34: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612344));
  fn2_1b7d24(c);
  /* 189a38: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 189a3c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 189a40: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612356));
  fn2_1bc2f8(c);
  /* 189a44: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 189a48: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612364));
  fn2_1ccd9c(c);
  /* 189a4c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 189a50: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 189a54: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612376));
  fn2_1bbfa0(c);
  /* 189a58: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189a5c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612384));
  fn2_1bcf04(c);
  /* 189a60: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 189a64: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612392));
  fn2_1bc620(c);
  /* 189a68: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189a6c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612400));
  fn2_1bc620(c);
  /* 189a70: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 189a74: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612408));
  fn2_1ccd9c(c);
  /* 189a78: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 189a7c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612416));
  fn2_1ccd9c(c);
  /* 189a80: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 189a84: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612424));
  fn2_1ccd9c(c);
  /* 189a88: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 189a8c: add x1, x1, #0x1fa */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(506)));
  /* 189a90: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 189a94: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612440));
  fn2_1b7d24(c);
  /* 189a98: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 189a9c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 189aa0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612452));
  fn2_1b7d24(c);
  /* 189aa4: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 189aa8: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 189aac: bl #0x1cd2d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612464));
  fn2_1cd2d8(c);
  /* 189ab0: tst w0, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 0) & UINT64_C(1)));
  /* 189ab4: adrp x8, #0x23000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(143360)));
  /* 189ab8: add x8, x8, #0xf64 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3940)));
  /* 189abc: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 189ac0: add x1, x1, #0x61e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1566)));
  /* 189ac4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 189ac8: csel x21, x23, x8, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 23)) : ARC_X_R(c, 8)));
  /* 189acc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612496));
  fn2_1b7d24(c);
  /* 189ad0: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 189ad4: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 189ad8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 189adc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 189ae0: bl #0x1ccfa4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612516));
  fn2_1ccfa4(c);
  /* 189ae4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 189ae8: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 189aec: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612528));
  fn2_1ccc88(c);
  /* 189af0: sub x8, x29, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 189af4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 189af8: add x2, sp, #0x28 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(40)));
  /* 189afc: add x4, sp, #0x18 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(24)));
  /* 189b00: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 189b04: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 189b08: bl #0x18ba5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612556));
  fn2_18ba5c(c);
  /* 189b0c: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 189b10: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 189b14: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612568));
  fn2_1bc2f8(c);
  /* 189b18: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189b1c: add x1, sp, #0x58 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(88)));
  /* 189b20: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612580));
  fn2_1bc0b8(c);
  /* 189b24: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 189b28: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 189b2c: str x22, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 22));
  /* 189b30: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612596));
  fn2_24a164(c);
  /* 189b34: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189b38: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612604));
  fn2_1bc620(c);
  /* 189b3c: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 189b40: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612612));
  fn2_1bc620(c);
  /* 189b44: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 189b48: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612620));
  fn2_1ccd9c(c);
  /* 189b4c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 189b50: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612628));
  fn2_1ccd9c(c);
  /* 189b54: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 189b58: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612636));
  fn2_1ccd9c(c);
  /* 189b5c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 189b60: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612644));
  fn2_1ccd9c(c);
  /* 189b64: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 189b68: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612652));
  fn2_1ccd9c(c);
  /* 189b6c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 189b70: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612660));
  fn2_1ccd9c(c);
  /* 189b74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 189b78: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612668));
  fn2_1bcbbc(c);
  /* 189b7c: bl #0x157338 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612672));
  fn2_157338(c);
  /* 189b80: cbz x0, #0x189c04 */
  if ((ARC_X_R(c, 0)) == 0) goto L_189c04;
  /* 189b84: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 189b88: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 189b8c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 189b90: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612692));
  fn2_1bc530(c);
  /* 189b94: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 189b98: add x1, x1, #0x23a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(570)));
  /* 189b9c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 189ba0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 189ba4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612712));
  fn2_1b8fd4(c);
  /* 189ba8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189bac: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 189bb0: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612724));
  fn2_1bc44c(c);
  /* 189bb4: add x20, x22, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 189bb8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 189bbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 189bc0: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612740));
  fn2_1bc0b8(c);
  /* 189bc4: add x8, sp, #0x58 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(88)));
  /* 189bc8: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 189bcc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 189bd0: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 189bd4: stp x22, x20, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 189bd8: bl #0x2213f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612764));
  fn2_2213f8(c);
  /* 189bdc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 189be0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612772));
  fn2_1bc620(c);
  /* 189be4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 189be8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612780));
  fn2_1bc620(c);
  /* 189bec: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 189bf0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612788));
  fn2_1bc620(c);
  /* 189bf4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 189bf8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612796));
  fn2_1d2d24(c);
  /* 189bfc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 189c00: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612804));
  fn2_1bc620(c);
L_189c04:;
  /* 189c04: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 189c08: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612812));
  fn2_1d97fc(c);
  /* 189c0c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 189c10: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612820));
  fn2_1ccd9c(c);
  /* 189c14: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 189c18: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612828));
  fn2_1ccd9c(c);
  /* 189c1c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 189c20: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1612836));
  fn2_1d97fc(c);
  /* 189c24: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 189c28: ldr x23, [sp, #0xc0] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(192))));
  /* 189c2c: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 189c30: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 189c34: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 189c38: ret  */
  return;
}

void fn2_18c168(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077478248));
  /* 18c168: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_18d730(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077483824));
  /* 18d730: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 18d734: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18d738: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 18d73c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18d740: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 18d744: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 18d748: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 18d74c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 18d750: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 18d754: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 18d758: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 18d75c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628000));
  fn2_1b5d1c(c);
  /* 18d760: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 18d764: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 18d768: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 18d76c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 18d770: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 18d774: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 18d778: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 18d77c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628032));
  fn2_1d2c2c(c);
  /* 18d780: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 18d784: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628040));
  fn2_1d2c2c(c);
  /* 18d788: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 18d78c: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 18d790: add x8, x8, #0xdc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3520)));
  /* 18d794: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18d798: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 18d79c: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 18d7a0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 18d7a4: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 18d7a8: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 18d7ac: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 18d7b0: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 18d7b4: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 18d7b8: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628092));
  fn2_1b5e68(c);
  /* 18d7bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18d7c0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 18d7c4: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 18d7c8: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628108));
  fn2_1b5d9c(c);
  /* 18d7cc: nop  */
  /* nop: no architectural effect here */
  /* 18d7d0: adr x8, #0x25d338 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478904)));
  /* 18d7d4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 18d7d8: tbz w8, #0, #0x18d818 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_18d818;
L_18d7dc:;
  /* 18d7dc: nop  */
  /* nop: no architectural effect here */
  /* 18d7e0: adr x1, #0x25d32d */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478893)));
  /* 18d7e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18d7e8: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628140));
  fn2_1d2c40(c);
  /* 18d7ec: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 18d7f0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 18d7f4: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628152));
  fn2_1d5dc0(c);
  /* 18d7f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18d7fc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628160));
  fn2_1d2d24(c);
  /* 18d800: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18d804: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18d808: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18d80c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18d810: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 18d814: ret  */
  return;
L_18d818:;
  /* 18d818: nop  */
  /* nop: no architectural effect here */
  /* 18d81c: adr x0, #0x25d338 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478904)));
  /* 18d820: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628196));
  fn2_24b710(c);
  /* 18d824: cbz w0, #0x18d7dc */
  if ((ARC_W_R(c, 0)) == 0) goto L_18d7dc;
  /* 18d828: nop  */
  /* nop: no architectural effect here */
  /* 18d82c: adr x20, #0x25d32d */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478893)));
  /* 18d830: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 18d834: add x1, x1, #0x4a8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1192)));
  /* 18d838: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 18d83c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628224));
  fn2_1b907c(c);
  /* 18d840: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 18d844: nop  */
  /* nop: no architectural effect here */
  /* 18d848: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 18d84c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 18d850: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 18d854: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628248));
  fn2_24b6f0(c);
  /* 18d858: nop  */
  /* nop: no architectural effect here */
  /* 18d85c: adr x0, #0x25d338 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478904)));
  /* 18d860: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1628260));
  fn2_24b720(c);
  /* 18d864: b #0x18d7dc */
  goto L_18d7dc;
}

void fn2_1913b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077499320));
  /* 1913b8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1913bc: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1913c0: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1913c4: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1913c8: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1913cc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1913d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1913d4: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643480));
  fn2_1bcc90(c);
  /* 1913d8: cmp w0, #0x1a */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(26));
  /* 1913dc: b.ne #0x191418 */
  if (ARC_COND(c, 1)) goto L_191418;
  /* 1913e0: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1913e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1913e8: bl #0x1bccac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643500));
  fn2_1bccac(c);
  /* 1913ec: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1913f0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1913f4: mov w2, #4 */
  ARC_W_W(c, 2, UINT64_C(4));
  /* 1913f8: bl #0x1d881c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643516));
  fn2_1d881c(c);
  /* 1913fc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 191400: bl #0x1d8710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643524));
  fn2_1d8710(c);
  /* 191404: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 191408: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 19140c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 191410: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 191414: ret  */
  return;
L_191418:;
  /* 191418: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 19141c: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643552));
  fn2_1bcc90(c);
  /* 191420: cmp w0, #0x18 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(24));
  /* 191424: b.ne #0x1914dc */
  if (ARC_COND(c, 1)) goto L_1914dc;
  /* 191428: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 19142c: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643568));
  fn2_1bcbbc(c);
  /* 191430: cbz x0, #0x1914dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1914dc;
  /* 191434: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 191438: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 19143c: add x1, x1, #0x312 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(786)));
  /* 191440: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 191444: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643592));
  fn2_1b7d24(c);
  /* 191448: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 19144c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 191450: bl #0x21fc30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643604));
  fn2_21fc30(c);
  /* 191454: tbz w0, #0, #0x1914d4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1914d4;
  /* 191458: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 19145c: add x1, x1, #0xd4f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3407)));
  /* 191460: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 191464: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 191468: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643628));
  fn2_1b8fd4(c);
  /* 19146c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 191470: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 191474: bl #0x221900 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643640));
  fn2_221900(c);
  /* 191478: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 19147c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 191480: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643652));
  fn2_1d2d24(c);
  /* 191484: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 191488: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643660));
  fn2_1ccd9c(c);
  /* 19148c: tbz w22, #0, #0x1914dc */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_1914dc;
  /* 191490: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 191494: add x1, x1, #0xd4f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3407)));
  /* 191498: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 19149c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1914a0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643684));
  fn2_1b8fd4(c);
  /* 1914a4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1914a8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1914ac: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 1914b0: mov w3, #4 */
  ARC_W_W(c, 3, UINT64_C(4));
  /* 1914b4: bl #0x221ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643704));
  fn2_221ca0(c);
  /* 1914b8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1914bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643712));
  fn2_1d2d24(c);
  /* 1914c0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1914c4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1914c8: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1914cc: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1914d0: ret  */
  return;
L_1914d4:;
  /* 1914d4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1914d8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643740));
  fn2_1ccd9c(c);
L_1914dc:;
  /* 1914dc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1914e0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1914e4: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1914e8: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643756));
  fn2_1bc0b8(c);
  /* 1914ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1914f0: str x20, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 20));
  /* 1914f4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643768));
  fn2_1bc084(c);
  /* 1914f8: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1914fc: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 191500: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 191504: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 191508: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 19150c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 191510: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* 191514: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643800));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 191518: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 19151c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643808));
  fn2_1bc620(c);
  /* 191520: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 191524: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1643816));
  fn2_1bc620(c);
  /* 191528: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19152c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 191530: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 191534: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 191538: ret  */
  return;
}

void fn2_1929d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077504984));
  /* 1929d8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1929dc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1929e0: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 1929e4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1929e8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1929ec: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1929f0: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649140));
  fn2_1db4a4(c);
  /* 1929f4: fmov d0, #1.00000000 */
  arc_d_w(c, 0, (double)(1.0));
  /* 1929f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1929fc: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649152));
  fn2_1bc2c4(c);
  /* 192a00: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192a04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192a08: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649164));
  fn2_1db920(c);
  /* 192a0c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a10: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649172));
  fn2_1bc620(c);
  /* 192a14: fmov d0, #2.00000000 */
  arc_d_w(c, 0, (double)(2.0));
  /* 192a18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a1c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649184));
  fn2_1bc2c4(c);
  /* 192a20: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192a24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192a28: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649196));
  fn2_1db920(c);
  /* 192a2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a30: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649204));
  fn2_1bc620(c);
  /* 192a34: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192a38: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a3c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649216));
  fn2_1bc2c4(c);
  /* 192a40: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192a44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192a48: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649228));
  fn2_1db920(c);
  /* 192a4c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a50: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649236));
  fn2_1bc620(c);
  /* 192a54: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192a58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a5c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649248));
  fn2_1bc2c4(c);
  /* 192a60: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192a64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192a68: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649260));
  fn2_1db920(c);
  /* 192a6c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a70: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649268));
  fn2_1bc620(c);
  /* 192a74: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192a78: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a7c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649280));
  fn2_1bc2c4(c);
  /* 192a80: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192a84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192a88: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649292));
  fn2_1db920(c);
  /* 192a8c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a90: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649300));
  fn2_1bc620(c);
  /* 192a94: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192a98: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192a9c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649312));
  fn2_1bc2c4(c);
  /* 192aa0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192aa4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192aa8: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649324));
  fn2_1db920(c);
  /* 192aac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192ab0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649332));
  fn2_1bc620(c);
  /* 192ab4: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192ab8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192abc: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649344));
  fn2_1bc2c4(c);
  /* 192ac0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192ac4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192ac8: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649356));
  fn2_1db920(c);
  /* 192acc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192ad0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649364));
  fn2_1bc620(c);
  /* 192ad4: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192ad8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192adc: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649376));
  fn2_1bc2c4(c);
  /* 192ae0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192ae4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192ae8: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649388));
  fn2_1db920(c);
  /* 192aec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192af0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649396));
  fn2_1bc620(c);
  /* 192af4: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192af8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192afc: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649408));
  fn2_1bc2c4(c);
  /* 192b00: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192b04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192b08: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649420));
  fn2_1db920(c);
  /* 192b0c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b10: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649428));
  fn2_1bc620(c);
  /* 192b14: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192b18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b1c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649440));
  fn2_1bc2c4(c);
  /* 192b20: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192b24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192b28: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649452));
  fn2_1db920(c);
  /* 192b2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b30: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649460));
  fn2_1bc620(c);
  /* 192b34: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192b38: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b3c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649472));
  fn2_1bc2c4(c);
  /* 192b40: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192b44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192b48: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649484));
  fn2_1db920(c);
  /* 192b4c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b50: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649492));
  fn2_1bc620(c);
  /* 192b54: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192b58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b5c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649504));
  fn2_1bc2c4(c);
  /* 192b60: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192b64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192b68: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649516));
  fn2_1db920(c);
  /* 192b6c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b70: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649524));
  fn2_1bc620(c);
  /* 192b74: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192b78: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b7c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649536));
  fn2_1bc2c4(c);
  /* 192b80: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192b84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192b88: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649548));
  fn2_1db920(c);
  /* 192b8c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b90: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649556));
  fn2_1bc620(c);
  /* 192b94: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192b98: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192b9c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649568));
  fn2_1bc2c4(c);
  /* 192ba0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192ba4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192ba8: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649580));
  fn2_1db920(c);
  /* 192bac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192bb0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649588));
  fn2_1bc620(c);
  /* 192bb4: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192bb8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192bbc: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649600));
  fn2_1bc2c4(c);
  /* 192bc0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192bc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192bc8: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649612));
  fn2_1db920(c);
  /* 192bcc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192bd0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649620));
  fn2_1bc620(c);
  /* 192bd4: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192bd8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192bdc: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649632));
  fn2_1bc2c4(c);
  /* 192be0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192be4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192be8: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649644));
  fn2_1db920(c);
  /* 192bec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192bf0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649652));
  fn2_1bc620(c);
  /* 192bf4: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192bf8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192bfc: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649664));
  fn2_1bc2c4(c);
  /* 192c00: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192c04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192c08: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649676));
  fn2_1db920(c);
  /* 192c0c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192c10: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649684));
  fn2_1bc620(c);
  /* 192c14: fmov d0, #5.00000000 */
  arc_d_w(c, 0, (double)(5.0));
  /* 192c18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192c1c: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649696));
  fn2_1bc2c4(c);
  /* 192c20: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 192c24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 192c28: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649708));
  fn2_1db920(c);
  /* 192c2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 192c30: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1649716));
  fn2_1bc620(c);
  /* 192c34: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 192c38: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 192c3c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 192c40: ret  */
  return;
}

void fn2_197e6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077526636));
  /* 197e6c: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* 197e70: str d8, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), (c)->q[8].u64[0]);
  /* 197e74: stp x29, x30, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 197e78: str x23, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 23));
  /* 197e7c: stp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 197e80: stp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 197e84: add x29, sp, #0xa8 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(168)));
  /* 197e88: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 197e8c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 197e90: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* 197e94: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 197e98: str xzr, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 31));
  /* 197e9c: bl #0xaec88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670816));
  fn2_aec88(c);
  /* 197ea0: ldr x20, [sp, #0x38] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(56))));
  /* 197ea4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 197ea8: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670828));
  fn2_2258f4(c);
  /* 197eac: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 197eb0: ldr x0, [x20, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 197eb4: tbz w8, #0, #0x197ed4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_197ed4;
  /* 197eb8: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* 197ebc: b.eq #0x197f10 */
  if (ARC_COND(c, 0)) goto L_197f10;
  /* 197ec0: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 197ec4: cbnz x0, #0x197edc */
  if ((ARC_X_R(c, 0)) != 0) goto L_197edc;
  /* 197ec8: str x20, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 20));
  /* 197ecc: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 197ed0: b #0x197f04 */
  goto L_197f04;
L_197ed4:;
  /* 197ed4: cbz x0, #0x197f30 */
  if ((ARC_X_R(c, 0)) == 0) goto L_197f30;
  /* 197ed8: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_197edc:;
  /* 197edc: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670880));
  fn2_225abc(c);
  /* 197ee0: tbz w0, #0, #0x197efc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_197efc;
  /* 197ee4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 197ee8: ldr x8, [x20, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 197eec: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 197ef0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 197ef4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 197ef8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670908));
  arc_dispatch(c, ARC_X_R(c, 9));
L_197efc:;
  /* 197efc: str x22, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 22));
  /* 197f00: cbz x22, #0x197f30 */
  if ((ARC_X_R(c, 22)) == 0) goto L_197f30;
L_197f04:;
  /* 197f04: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 197f08: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670924));
  fn2_2259d8(c);
  /* 197f0c: mov x20, x22 */
  ARC_X_W(c, 20, ARC_X_R(c, 22));
L_197f10:;
  /* 197f10: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 197f14: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670936));
  fn2_225abc(c);
  /* 197f18: tbz w0, #0, #0x197f30 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_197f30;
  /* 197f1c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 197f20: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 197f24: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 197f28: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 197f2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670960));
  arc_dispatch(c, ARC_X_R(c, 8));
L_197f30:;
  /* 197f30: ldr x20, [sp, #0x38] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(56))));
  /* 197f34: cbz x20, #0x197f40 */
  if ((ARC_X_R(c, 20)) == 0) goto L_197f40;
  /* 197f38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 197f3c: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670976));
  fn2_2259d8(c);
L_197f40:;
  /* 197f40: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670980));
  fn2_22eb3c(c);
  /* 197f44: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1670984));
  fn2_2302d4(c);
  /* 197f48: ldr x8, [x21, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(32))));
  /* 197f4c: cbz x8, #0x1980dc */
  if ((ARC_X_R(c, 8)) == 0) goto L_1980dc;
  /* 197f50: ldrb w8, [x21, #0x78] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(120))));
  /* 197f54: cbnz w8, #0x1980dc */
  if ((ARC_W_R(c, 8)) != 0) goto L_1980dc;
  /* 197f58: mov x8, #0x400000000000 */
  ARC_X_W(c, 8, UINT64_C(70368744177664));
  /* 197f5c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 197f60: movk x8, #0x408f, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4651936940097011712)));
  /* 197f64: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* 197f68: fmul d0, d8, d0 */
  arc_d_w(c, 0, (double)(arc_fmul64(ARC_D_R(c, 8), ARC_D_R(c, 0))));
  /* 197f6c: fcvtzs x23, d0 */
  ARC_X_W(c, 23, arc_f2i64((double)(ARC_D_R(c, 0))));
  /* 197f70: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671028));
  fn2_22eb3c(c);
  /* 197f74: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671032));
  fn2_2302d4(c);
  /* 197f78: sub x8, x0, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 22)));
  /* 197f7c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 197f80: b.ge #0x1980dc */
  if (ARC_COND(c, 10)) goto L_1980dc;
  /* 197f84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 197f88: bl #0x2139a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671052));
  fn2_2139a0(c);
  /* 197f8c: tbz w0, #0, #0x1980dc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1980dc;
  /* 197f90: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 197f94: cbz x20, #0x197fa4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_197fa4;
  /* 197f98: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 197f9c: str x20, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 20));
  /* 197fa0: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671076));
  fn2_2259d8(c);
L_197fa4:;
  /* 197fa4: add x0, x21, #0xa0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(160)));
  /* 197fa8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 197fac: stp x22, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 197fb0: bl #0x19e2ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671092));
  fn2_19e2ec(c);
  /* 197fb4: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 197fb8: cbz x0, #0x197fdc */
  if ((ARC_X_R(c, 0)) == 0) goto L_197fdc;
  /* 197fbc: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671104));
  fn2_225abc(c);
  /* 197fc0: tbz w0, #0, #0x197fdc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_197fdc;
  /* 197fc4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 197fc8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 197fcc: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 197fd0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 197fd4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 197fd8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671132));
  arc_dispatch(c, ARC_X_R(c, 9));
L_197fdc:;
  /* 197fdc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 197fe0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 197fe4: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 197fe8: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 197fec: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 197ff0: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671156));
  fn2_1b5d1c(c);
  /* 197ff4: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 197ff8: add x8, x8, #0x80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(128)));
  /* 197ffc: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 198000: stp x8, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 198004: nop  */
  /* nop: no architectural effect here */
  /* 198008: adr x8, #0x1981f4 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1671668)));
  /* 19800c: mov w2, #0x18 */
  ARC_W_W(c, 2, UINT64_C(24));
  /* 198010: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 198014: stp x8, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 198018: str x21, [x1, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 1) + INT64_C(24));
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 19801c: bl #0x1b7894 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671200));
  fn2_1b7894(c);
  /* 198020: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 198024: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 198028: bl #0x1b793c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671212));
  fn2_1b793c(c);
  /* 19802c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 198030: bl #0x217978 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671220));
  fn2_217978(c);
  /* 198034: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 198038: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 19803c: add x1, x1, #0xe0b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3595)));
  /* 198040: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 198044: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 198048: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671244));
  fn2_1b8fd4(c);
  /* 19804c: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 198050: sub x2, x29, #0x38 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 198054: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 198058: bl #0x221ecc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671260));
  fn2_221ecc(c);
  /* 19805c: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 198060: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 198064: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671272));
  fn2_1d2d24(c);
  /* 198068: tbnz w22, #0, #0x19809c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_19809c;
  /* 19806c: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 198070: add x1, x1, #0xe0b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3595)));
  /* 198074: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 198078: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 19807c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671296));
  fn2_1b8fd4(c);
  /* 198080: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 198084: sub x2, x29, #0x38 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 198088: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 19808c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 198090: bl #0x221ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671316));
  fn2_221ca0(c);
  /* 198094: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 198098: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671324));
  fn2_1d2d24(c);
L_19809c:;
  /* 19809c: ldr x21, [sp, #0x38] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(56))));
  /* 1980a0: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1980a4: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* 1980a8: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1980ac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1980b0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671348));
  fn2_1b8fd4(c);
  /* 1980b4: add x2, sp, #0x48 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(72)));
  /* 1980b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1980bc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1980c0: bl #0x1d85d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671364));
  fn2_1d85d0(c);
  /* 1980c4: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1980c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671372));
  fn2_1d2d24(c);
  /* 1980cc: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1980d0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671380));
  fn2_1d79fc(c);
  /* 1980d4: cbnz x20, #0x198190 */
  if ((ARC_X_R(c, 20)) != 0) goto L_198190;
  /* 1980d8: b #0x1981b0 */
  goto L_1981b0;
L_1980dc:;
  /* 1980dc: ldr x21, [sp, #0x38] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(56))));
  /* 1980e0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1980e4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671400));
  fn2_1bc084(c);
  /* 1980e8: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 1980ec: add x1, x1, #0x23a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(570)));
  /* 1980f0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1980f4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1980f8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671420));
  fn2_1b8fd4(c);
  /* 1980fc: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 198100: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 198104: sub x23, x29, #0x38 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 198108: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671436));
  fn2_1bc44c(c);
  /* 19810c: add x22, x23, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 198110: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 198114: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 198118: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671452));
  fn2_1bc0b8(c);
  /* 19811c: add x8, sp, #0x48 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(72)));
  /* 198120: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 198124: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 198128: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 19812c: stp x23, x22, [x29, #-0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-72));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 198130: bl #0x2213f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671476));
  fn2_2213f8(c);
  /* 198134: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 198138: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671484));
  fn2_1bc620(c);
  /* 19813c: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 198140: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671492));
  fn2_1bc620(c);
  /* 198144: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 198148: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671500));
  fn2_1bc620(c);
  /* 19814c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 198150: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671508));
  fn2_1d2d24(c);
  /* 198154: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 198158: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671516));
  fn2_1bc620(c);
  /* 19815c: ldr x21, [sp, #0x38] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(56))));
  /* 198160: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 198164: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* 198168: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 19816c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 198170: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671540));
  fn2_1b8fd4(c);
  /* 198174: sub x2, x29, #0x38 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 198178: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 19817c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 198180: bl #0x1d85d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671556));
  fn2_1d85d0(c);
  /* 198184: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 198188: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671564));
  fn2_1d2d24(c);
  /* 19818c: cbz x20, #0x1981b0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1981b0;
L_198190:;
  /* 198190: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 198194: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671576));
  fn2_225abc(c);
  /* 198198: tbz w0, #0, #0x1981b0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1981b0;
  /* 19819c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1981a0: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 1981a4: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1981a8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1981ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671600));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1981b0:;
  /* 1981b0: ldr x0, [sp, #0x38] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(56))));
  /* 1981b4: cbz x0, #0x1981d8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1981d8;
  /* 1981b8: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671612));
  fn2_225abc(c);
  /* 1981bc: tbz w0, #0, #0x1981d8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1981d8;
  /* 1981c0: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1981c4: ldr x8, [sp, #0x38] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(56))));
  /* 1981c8: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 1981cc: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1981d0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1981d4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1671640));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1981d8:;
  /* 1981d8: ldp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1981dc: ldr x23, [sp, #0xb8] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(184))));
  /* 1981e0: ldp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1981e4: ldr d8, [sp, #0xa0] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(160))));
  /* 1981e8: ldp x29, x30, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1981ec: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* 1981f0: ret  */
  return;
}

void fn2_19eadc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077554396));
  /* 19eadc: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 19eae0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 19eae4: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 19eae8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 19eaec: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19eaf0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 19eaf4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 19eaf8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19eafc: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 19eb00: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 19eb04: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698568));
  fn2_1bc084(c);
  /* 19eb08: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 19eb0c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 19eb10: mov w0, #0x68 */
  ARC_W_W(c, 0, UINT64_C(104));
  /* 19eb14: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 19eb18: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698588));
  fn2_1b5d1c(c);
  /* 19eb1c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 19eb20: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* 19eb24: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 19eb28: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 19eb2c: str w23, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 23));
  /* 19eb30: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 19eb34: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 19eb38: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698620));
  fn2_1d2c2c(c);
  /* 19eb3c: add x0, x21, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(20)));
  /* 19eb40: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698628));
  fn2_1d2c2c(c);
  /* 19eb44: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 19eb48: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 19eb4c: add x8, x8, #0x170 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(368)));
  /* 19eb50: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 19eb54: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 19eb58: stur xzr, [x21, #0x1c] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(28)), ARC_X_R(c, 31));
  /* 19eb5c: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 19eb60: stp xzr, x22, [x21, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 19eb64: stur q0, [x21, #0x28] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 19eb68: stur q0, [x21, #0x38] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 19eb6c: stur q0, [x21, #0x48] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 19eb70: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698676));
  fn2_1b5e68(c);
  /* 19eb74: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 19eb78: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 19eb7c: str w23, [x21, #0x1c] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(28)), ARC_W_R(c, 23));
  /* 19eb80: bl #0x1b5d94 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698692));
  fn2_1b5d94(c);
  /* 19eb84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 19eb88: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 19eb8c: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698704));
  fn2_1b5d9c(c);
  /* 19eb90: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19eb94: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 19eb98: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698716));
  fn2_1d2c40(c);
  /* 19eb9c: add x0, x21, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(20)));
  /* 19eba0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19eba4: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698728));
  fn2_1d5dc0(c);
  /* 19eba8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19ebac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698736));
  fn2_1d2d24(c);
  /* 19ebb0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 19ebb4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 19ebb8: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 19ebbc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 19ebc0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 19ebc4: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698760));
  fn2_1b0eac(c);
  /* 19ebc8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 19ebcc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19ebd0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1698772));
  fn2_1bc620(c);
  /* 19ebd4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 19ebd8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19ebdc: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 19ebe0: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 19ebe4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19ebe8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 19ebec: ret  */
  return;
}

void fn2_19f9b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077558200));
  /* 19f9b8: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 19f9bc: b #0x220748 */
  fn2_220748(c); return;
}

void fn2_1a03bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077560764));
  /* 1a03bc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a03c0: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 1a03c4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a03c8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a03cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a03d0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1a03d4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1a03d8: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 1a03dc: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1a03e0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1a03e4: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* 1a03e8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1704940));
  fn2_1bc084(c);
  /* 1a03ec: ldr x0, [x22, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(96))));
  /* 1a03f0: add x5, x22, #0x48 */
  ARC_X_W(c, 5, (ARC_X_R(c, 22) + UINT64_C(72)));
  /* 1a03f4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1a03f8: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 1a03fc: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 1a0400: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* 1a0404: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a0408: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a040c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a0410: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a0414: b #0x1a06d4 */
  fn2_1a06d4(c); return;
}

void fn2_1a1978(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077566328));
  /* 1a1978: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1a197c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a1980: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* 1a1984: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a1988: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a198c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1a1990: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1a1994: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1a1998: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 1a199c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1a19a0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1a19a4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1710504));
  fn2_1bc084(c);
  /* 1a19a8: ldp x23, x22, [x22, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(96));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* 1a19ac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a19b0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1710516));
  fn2_1bc084(c);
  /* 1a19b4: add x0, x21, x22, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* 1a19b8: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 1a19bc: tbz w22, #0, #0x1a19c8 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_1a19c8;
  /* 1a19c0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1a19c4: ldr x23, [x8, x23] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 23))));
L_1a19c8:;
  /* 1a19c8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a19cc: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1710544));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1a19d0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1a19d4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a19d8: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1710556));
  fn2_1bc544(c);
  /* 1a19dc: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1a19e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a19e4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1710568));
  fn2_1bcf04(c);
  /* 1a19e8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1a19ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1710576));
  fn2_1bc620(c);
  /* 1a19f0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a19f4: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1710584));
  fn2_1db788(c);
  /* 1a19f8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a19fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1710592));
  fn2_1bc620(c);
  /* 1a1a00: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a1a04: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1a1a08: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a1a0c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a1a10: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1a1a14: ret  */
  return;
}

void fn2_1a3124(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077572388));
  /* 1a3124: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1a3128: ret  */
  return;
}

void fn2_1a4d7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077579644));
  /* 1a4d7c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1a4d80: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a4d84: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a4d88: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a4d8c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1a4d90: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1a4d94: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a4d98: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1a4d9c: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 1a4da0: bl #0xaec88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1723812));
  fn2_aec88(c);
  /* 1a4da4: ldur x21, [x29, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1a4da8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1a4dac: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1723824));
  fn2_2258f4(c);
  /* 1a4db0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1a4db4: ldr x0, [x21, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 1a4db8: tbz w8, #0, #0x1a4dd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a4dd8;
  /* 1a4dbc: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* 1a4dc0: b.eq #0x1a4e14 */
  if (ARC_COND(c, 0)) goto L_1a4e14;
  /* 1a4dc4: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
  /* 1a4dc8: cbnz x0, #0x1a4de0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_1a4de0;
  /* 1a4dcc: str x21, [x21, #0x18] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)), ARC_X_R(c, 21));
  /* 1a4dd0: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
  /* 1a4dd4: b #0x1a4e08 */
  goto L_1a4e08;
L_1a4dd8:;
  /* 1a4dd8: cbz x0, #0x1a4e34 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a4e34;
  /* 1a4ddc: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_1a4de0:;
  /* 1a4de0: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1723876));
  fn2_225abc(c);
  /* 1a4de4: tbz w0, #0, #0x1a4e00 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a4e00;
  /* 1a4de8: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a4dec: ldr x8, [x21, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 1a4df0: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 1a4df4: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1a4df8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1a4dfc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1723904));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1a4e00:;
  /* 1a4e00: str x22, [x21, #0x18] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)), ARC_X_R(c, 22));
  /* 1a4e04: cbz x22, #0x1a4e34 */
  if ((ARC_X_R(c, 22)) == 0) goto L_1a4e34;
L_1a4e08:;
  /* 1a4e08: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1a4e0c: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1723920));
  fn2_2259d8(c);
  /* 1a4e10: mov x21, x22 */
  ARC_X_W(c, 21, ARC_X_R(c, 22));
L_1a4e14:;
  /* 1a4e14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1a4e18: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1723932));
  fn2_225abc(c);
  /* 1a4e1c: tbz w0, #0, #0x1a4e34 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a4e34;
  /* 1a4e20: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a4e24: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 1a4e28: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1a4e2c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1a4e30: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1723956));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1a4e34:;
  /* 1a4e34: ldur x21, [x29, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1a4e38: cbz x21, #0x1a4ee0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1a4ee0;
  /* 1a4e3c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1a4e40: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1723972));
  fn2_2259d8(c);
  /* 1a4e44: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a4e48: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a4e4c: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 1a4e50: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1a4e54: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1723992));
  fn2_1b5d1c(c);
  /* 1a4e58: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1a4e5c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1a4e60: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724004));
  fn2_2259d8(c);
  /* 1a4e64: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 1a4e68: add x8, x8, #0x4b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1200)));
  /* 1a4e6c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1a4e70: stp x8, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1a4e74: str x21, [x22, #0x10] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(16)), ARC_X_R(c, 21));
  /* 1a4e78: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724028));
  fn2_2259d8(c);
  /* 1a4e7c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a4e80: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1a4e84: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724040));
  fn2_1b75a4(c);
  /* 1a4e88: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1a4e8c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724048));
  fn2_225abc(c);
  /* 1a4e90: tbz w0, #0, #0x1a4ea8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a4ea8;
  /* 1a4e94: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a4e98: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 1a4e9c: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1a4ea0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1a4ea4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724072));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1a4ea8:;
  /* 1a4ea8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a4eac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1a4eb0: bl #0x1a4f90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724084));
  fn2_1a4f90(c);
  /* 1a4eb4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a4eb8: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724092));
  fn2_1d79fc(c);
  /* 1a4ebc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1a4ec0: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724100));
  fn2_225abc(c);
  /* 1a4ec4: tbz w0, #0, #0x1a4f24 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a4f24;
  /* 1a4ec8: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a4ecc: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 1a4ed0: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1a4ed4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1a4ed8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724124));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1a4edc: b #0x1a4f24 */
  goto L_1a4f24;
L_1a4ee0:;
  /* 1a4ee0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a4ee4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a4ee8: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 1a4eec: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1a4ef0: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724148));
  fn2_1b5d1c(c);
  /* 1a4ef4: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 1a4ef8: add x8, x8, #0x4b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1200)));
  /* 1a4efc: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a4f00: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1a4f04: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1a4f08: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a4f0c: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724176));
  fn2_1b75a4(c);
  /* 1a4f10: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a4f14: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1a4f18: bl #0x1a4f90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724188));
  fn2_1a4f90(c);
  /* 1a4f1c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a4f20: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724196));
  fn2_1d79fc(c);
L_1a4f24:;
  /* 1a4f24: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1a4f28: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1a4f2c: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* 1a4f30: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a4f34: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a4f38: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724220));
  fn2_1b8fd4(c);
  /* 1a4f3c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1a4f40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a4f44: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1a4f48: bl #0x1d85d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724236));
  fn2_1d85d0(c);
  /* 1a4f4c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a4f50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724244));
  fn2_1d2d24(c);
  /* 1a4f54: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1a4f58: cbz x0, #0x1a4f7c */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a4f7c;
  /* 1a4f5c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724256));
  fn2_225abc(c);
  /* 1a4f60: tbz w0, #0, #0x1a4f7c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a4f7c;
  /* 1a4f64: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a4f68: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1a4f6c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 1a4f70: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1a4f74: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1a4f78: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1724284));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1a4f7c:;
  /* 1a4f7c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a4f80: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a4f84: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a4f88: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1a4f8c: ret  */
  return;
}

void fn2_1a7c9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077591708));
  /* 1a7c9c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a7ca0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1a7ca4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a7ca8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a7cac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1a7cb0: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 1a7cb4: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 1a7cb8: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* 1a7cbc: bl #0x1d7f88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1735872));
  fn2_1d7f88(c);
  /* 1a7cc0: str w20, [x21, #0x28] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(40)), ARC_W_R(c, 20));
  /* 1a7cc4: strb w19, [x21, #0x2c] */
  arc_st8((ARC_X_R(c, 21) + INT64_C(44)), ARC_W_R(c, 19));
  /* 1a7cc8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a7ccc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a7cd0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a7cd4: ret  */
  return;
}

void fn2_1a9d84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077600132));
  /* 1a9d84: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a9d88: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1a9d8c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a9d90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a9d94: add x2, x29, #0x1c */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 1a9d98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a9d9c: str wzr, [x29, #0x1c] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 31));
  /* 1a9da0: bl #0x1ab6c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1744292));
  fn2_1ab6c4(c);
  /* 1a9da4: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 1a9da8: tbz w0, #0, #0x1a9ee8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a9ee8;
  /* 1a9dac: ldr w9, [x19, #0x28] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(40))));
  /* 1a9db0: ldr w14, [x29, #0x1c] */
  ARC_W_W(c, 14, arc_ld32((ARC_X_R(c, 29) + INT64_C(28))));
  /* 1a9db4: adrp x8, #0x36000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1a9db8: add x8, x8, #0x700 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1792)));
  /* 1a9dbc: adrp x11, #0x36000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1a9dc0: add x11, x11, #0x68c */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1676)));
  /* 1a9dc4: ldr x8, [x8, x9, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1a9dc8: add w10, w14, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 14) + UINT64_C(1)));
  /* 1a9dcc: ldr w9, [x11, x9, lsl #2] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 9)) << 2))));
  /* 1a9dd0: mul x10, x8, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 10))));
  /* 1a9dd4: umulh x11, x10, x9 */
  ARC_X_W(c, 11, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 9)));
  /* 1a9dd8: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1a9ddc: add x15, x10, x11, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* 1a9de0: ldr w13, [x15] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 15)));
  /* 1a9de4: cbz w13, #0x1a9e60 */
  if ((ARC_W_R(c, 13)) == 0) goto L_1a9e60;
L_1a9de8:;
  /* 1a9de8: mul x12, x8, x13 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 13))));
  /* 1a9dec: add w17, w11, w9 */
  ARC_W_W(c, 17, (ARC_W_R(c, 11) + ARC_W_R(c, 9)));
  /* 1a9df0: umulh x16, x12, x9 */
  ARC_X_W(c, 16, arc_umulh(ARC_X_R(c, 12), ARC_X_R(c, 9)));
  /* 1a9df4: sub w16, w17, w16 */
  ARC_W_W(c, 16, (ARC_W_R(c, 17) - ARC_W_R(c, 16)));
  /* 1a9df8: mul x16, x8, x16 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 16))));
  /* 1a9dfc: umulh x16, x16, x9 */
  ARC_X_W(c, 16, arc_umulh(ARC_X_R(c, 16), ARC_X_R(c, 9)));
  /* 1a9e00: cbz x16, #0x1a9e60 */
  if ((ARC_X_R(c, 16)) == 0) goto L_1a9e60;
  /* 1a9e04: ubfiz x14, x14, #2, #0x20 */
  ARC_X_W(c, 14, ((uint64_t)((((uint64_t)(ARC_X_R(c, 14))) & UINT64_C(4294967295))) << 2));
  /* 1a9e08: mov w12, w11 */
  ARC_W_W(c, 12, ARC_W_R(c, 11));
  /* 1a9e0c: ldr w16, [x10, x14] */
  ARC_W_W(c, 16, arc_ld32((ARC_X_R(c, 10) + ARC_X_R(c, 14))));
  /* 1a9e10: str w16, [x15] */
  arc_st32(ARC_X_R(c, 15), ARC_W_R(c, 16));
  /* 1a9e14: add w15, w11, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* 1a9e18: mul x15, x8, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 15))));
  /* 1a9e1c: str w13, [x10, x14] */
  arc_st32((ARC_X_R(c, 10) + ARC_X_R(c, 14)), ARC_W_R(c, 13));
  /* 1a9e20: ldr x13, [x19, #8] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a9e24: ldr w10, [x29, #0x1c] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(28))));
  /* 1a9e28: lsl x14, x11, #3 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(3)) & 63)));
  /* 1a9e2c: str w11, [x29, #0x1c] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 11));
  /* 1a9e30: lsl x10, x10, #3 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(3)) & 63)));
  /* 1a9e34: ldr x16, [x13, x14] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 13) + ARC_X_R(c, 14))));
  /* 1a9e38: umulh x11, x15, x9 */
  ARC_X_W(c, 11, arc_umulh(ARC_X_R(c, 15), ARC_X_R(c, 9)));
  /* 1a9e3c: ldr x15, [x13, x10] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 13) + ARC_X_R(c, 10))));
  /* 1a9e40: str x15, [x13, x14] */
  arc_st64((ARC_X_R(c, 13) + ARC_X_R(c, 14)), ARC_X_R(c, 15));
  /* 1a9e44: mov w14, w12 */
  ARC_W_W(c, 14, ARC_W_R(c, 12));
  /* 1a9e48: str x16, [x13, x10] */
  arc_st64((ARC_X_R(c, 13) + ARC_X_R(c, 10)), ARC_X_R(c, 16));
  /* 1a9e4c: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1a9e50: add x15, x10, x11, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* 1a9e54: ldr w13, [x15] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 15)));
  /* 1a9e58: cbnz w13, #0x1a9de8 */
  if ((ARC_W_R(c, 13)) != 0) goto L_1a9de8;
  /* 1a9e5c: b #0x1a9e64 */
  goto L_1a9e64;
L_1a9e60:;
  /* 1a9e60: mov w12, w14 */
  ARC_W_W(c, 12, ARC_W_R(c, 14));
L_1a9e64:;
  /* 1a9e64: str wzr, [x10, w12, uxtw #2] */
  arc_st32((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 12)))) << 2)), ARC_W_R(c, 31));
  /* 1a9e68: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a9e6c: ldr x10, [x19, #0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1a9e70: ldr w9, [x29, #0x1c] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(28))));
  /* 1a9e74: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1a9e78: cmp x10, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 21));
  /* 1a9e7c: b.eq #0x1a9efc */
  if (ARC_COND(c, 0)) goto L_1a9efc;
  /* 1a9e80: ldr x10, [x19, #0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 1a9e84: cmp x10, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 21));
  /* 1a9e88: b.eq #0x1a9f14 */
  if (ARC_COND(c, 0)) goto L_1a9f14;
L_1a9e8c:;
  /* 1a9e8c: ldr x10, [x21, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 1a9e90: cbz x10, #0x1a9ea0 */
  if ((ARC_X_R(c, 10)) == 0) goto L_1a9ea0;
L_1a9e94:;
  /* 1a9e94: ldr x11, [x21] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 21)));
  /* 1a9e98: str x11, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1a9e9c: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
L_1a9ea0:;
  /* 1a9ea0: ldr x10, [x21] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 21)));
  /* 1a9ea4: cbz x10, #0x1a9eb4 */
  if ((ARC_X_R(c, 10)) == 0) goto L_1a9eb4;
  /* 1a9ea8: ldr x11, [x21, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 1a9eac: str x11, [x10, #8] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(8)), ARC_X_R(c, 11));
  /* 1a9eb0: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
L_1a9eb4:;
  /* 1a9eb4: add x0, x21, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(32)));
  /* 1a9eb8: bl #0x1aa1f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1744572));
  fn2_1aa1f4(c);
  /* 1a9ebc: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 1a9ec0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1744580));
  fn2_1ccd9c(c);
  /* 1a9ec4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1a9ec8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1a9ecc: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1744592));
  fn2_1b5ce8(c);
  /* 1a9ed0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a9ed4: ldr w9, [x29, #0x1c] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(28))));
  /* 1a9ed8: ldr w10, [x19, #0x2c] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(44))));
  /* 1a9edc: str xzr, [x8, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 31));
  /* 1a9ee0: sub w8, w10, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 10) - UINT64_C(1)));
  /* 1a9ee4: str w8, [x19, #0x2c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(44)), ARC_W_R(c, 8));
L_1a9ee8:;
  /* 1a9ee8: and w0, w20, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 20) & UINT64_C(1)));
  /* 1a9eec: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a9ef0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a9ef4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a9ef8: ret  */
  return;
L_1a9efc:;
  /* 1a9efc: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1a9f00: str x10, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 10));
  /* 1a9f04: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1a9f08: ldr x10, [x19, #0x20] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 1a9f0c: cmp x10, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 21));
  /* 1a9f10: b.ne #0x1a9e8c */
  if (ARC_COND(c, 1)) goto L_1a9e8c;
L_1a9f14:;
  /* 1a9f14: ldr x10, [x21, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 1a9f18: str x10, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 10));
  /* 1a9f1c: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1a9f20: ldr x10, [x21, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 1a9f24: cbnz x10, #0x1a9e94 */
  if ((ARC_X_R(c, 10)) != 0) goto L_1a9e94;
  /* 1a9f28: b #0x1a9ea0 */
  goto L_1a9ea0;
}

void fn2_1ab27c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077605500));
  /* 1ab27c: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 1ab280: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ab284: str x27, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 27));
  /* 1ab288: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1ab28c: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1ab290: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ab294: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ab298: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 1ab29c: ldp x9, x8, [x6] */
  { const uint64_t _pa = ARC_X_R(c, 6);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1ab2a0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ab2a4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1ab2a8: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* 1ab2ac: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 1ab2b0: mov w25, w4 */
  ARC_W_W(c, 25, ARC_W_R(c, 4));
  /* 1ab2b4: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 1ab2b8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1ab2bc: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 1ab2c0: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 1ab2c4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1ab2c8: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 1ab2cc: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 1ab2d0: add x26, sp, #0x20 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(32)));
  /* 1ab2d4: mul x27, x8, x9 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 1ab2d8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749724));
  fn2_1bc084(c);
  /* 1ab2dc: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 1ab2e0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749732));
  fn2_1bc084(c);
  /* 1ab2e4: cmp w25, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(0));
  /* 1ab2e8: b.le #0x1ab344 */
  if (ARC_COND(c, 13)) goto L_1ab344;
  /* 1ab2ec: ldr x1, [x24] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 24)));
  /* 1ab2f0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ab2f4: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749752));
  fn2_1bc09c(c);
  /* 1ab2f8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1ab2fc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ab300: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749764));
  fn2_1bcf04(c);
  /* 1ab304: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ab308: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749772));
  fn2_1bc620(c);
  /* 1ab30c: cmp w25, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(1));
  /* 1ab310: b.eq #0x1ab360 */
  if (ARC_COND(c, 0)) goto L_1ab360;
  /* 1ab314: ldr x1, [x24, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 1ab318: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ab31c: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749792));
  fn2_1bc09c(c);
  /* 1ab320: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 1ab324: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ab328: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749804));
  fn2_1bcf04(c);
  /* 1ab32c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ab330: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749812));
  fn2_1bc620(c);
  /* 1ab334: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* 1ab338: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 1ab33c: tbnz w21, #0, #0x1ab388 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_1ab388;
  /* 1ab340: b #0x1ab390 */
  goto L_1ab390;
L_1ab344:;
  /* 1ab344: sub w8, w27, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(2)));
  /* 1ab348: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 1ab34c: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 1ab350: nop  */
  /* nop: no architectural effect here */
  /* 1ab354: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 1ab358: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1ab35c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749856));
  fn2_1bce10(c);
L_1ab360:;
  /* 1ab360: sub w8, w27, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(1)));
  /* 1ab364: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 1ab368: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 1ab36c: nop  */
  /* nop: no architectural effect here */
  /* 1ab370: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 1ab374: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 1ab378: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749884));
  fn2_1bce10(c);
  /* 1ab37c: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* 1ab380: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 1ab384: tbz w21, #0, #0x1ab390 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_1ab390;
L_1ab388:;
  /* 1ab388: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 1ab38c: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_1ab390:;
  /* 1ab390: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1ab394: add x21, sp, #0x20 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(32)));
  /* 1ab398: bl #0x1bc698 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749916));
  fn2_1bc698(c);
  /* 1ab39c: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 1ab3a0: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1ab3a4: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 1ab3a8: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749932));
  fn2_1bccb8(c);
  /* 1ab3ac: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1ab3b0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ab3b4: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 1ab3b8: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749948));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 1ab3bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ab3c0: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749956));
  fn2_1d97fc(c);
  /* 1ab3c4: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 1ab3c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749964));
  fn2_1bc620(c);
  /* 1ab3cc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1ab3d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1749972));
  fn2_1bc620(c);
  /* 1ab3d4: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ab3d8: ldr x27, [sp, #0x60] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(96))));
  /* 1ab3dc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ab3e0: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1ab3e4: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1ab3e8: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ab3ec: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 1ab3f0: ret  */
  return;
}

void fn2_1af568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077622632));
  /* 1af568: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1af56c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1af570: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1af574: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1af578: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1af57c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1af580: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1af584: ldr x8, [x21, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 21) + INT64_C(8));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1af588: cbz x8, #0x1af5d8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1af5d8;
  /* 1af58c: ldur x8, [x8, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1af590: add x1, x8, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1af594: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1af598: bl #0x1af804 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1766812));
  fn2_1af804(c);
  /* 1af59c: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 1af5a0: cbnz w0, #0x1af5ec */
  if ((ARC_W_R(c, 0)) != 0) goto L_1af5ec;
L_1af5a4:;
  /* 1af5a4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1af5a8: cbz x8, #0x1af618 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1af618;
  /* 1af5ac: ldur x4, [x8, #-8] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1af5b0: cmp x4, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 4), UINT64_C(0));
  /* 1af5b4: sub x22, x4, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 4) - UINT64_C(1)));
  /* 1af5b8: b.le #0x1af620 */
  if (ARC_COND(c, 13)) goto L_1af620;
  /* 1af5bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1af5c0: bl #0x1afb70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1766852));
  fn2_1afb70(c);
  /* 1af5c4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1af5c8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1af5cc: add x0, x8, x22, lsl #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)));
  /* 1af5d0: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1766868));
  fn2_1d5dc0(c);
  /* 1af5d4: b #0x1af65c */
  goto L_1af65c;
L_1af5d8:;
  /* 1af5d8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1af5dc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1af5e0: bl #0x1af804 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1766884));
  fn2_1af804(c);
  /* 1af5e4: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 1af5e8: cbz w0, #0x1af5a4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1af5a4;
L_1af5ec:;
  /* 1af5ec: adrp x0, #0x28000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1af5f0: add x0, x0, #0x795 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1941)));
  /* 1af5f4: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 1af5f8: add x1, x1, #0x8cc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2252)));
  /* 1af5fc: adrp x3, #0x2f000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1af600: add x3, x3, #0x641 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1601)));
  /* 1af604: mov w2, #0x13f */
  ARC_W_W(c, 2, UINT64_C(319));
  /* 1af608: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1af60c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1af610: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1766932));
  fn2_1b54b0(c);
  /* 1af614: b #0x1af65c */
  goto L_1af65c;
L_1af618:;
  /* 1af618: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 1af61c: mov x22, #-1 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551615));
L_1af620:;
  /* 1af620: adrp x0, #0x19000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(102400)));
  /* 1af624: add x0, x0, #0xd7d */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3453)));
  /* 1af628: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1af62c: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1af630: adrp x5, #0x25000 */
  ARC_X_W(c, 5, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1af634: add x5, x5, #0x33c */
  ARC_X_W(c, 5, (ARC_X_R(c, 5) + UINT64_C(828)));
  /* 1af638: adrp x6, #0x20000 */
  ARC_X_W(c, 6, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1af63c: add x6, x6, #0xcfc */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) + UINT64_C(3324)));
  /* 1af640: adrp x7, #0x1e000 */
  ARC_X_W(c, 7, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1af644: add x7, x7, #0xb6f */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) + UINT64_C(2927)));
  /* 1af648: mov w2, #0xd5 */
  ARC_W_W(c, 2, UINT64_C(213));
  /* 1af64c: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 1af650: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1af654: strb wzr, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 31));
  /* 1af658: bl #0x1b5870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1767004));
  fn2_1b5870(c);
L_1af65c:;
  /* 1af65c: cmp w19, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(0));
  /* 1af660: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1af664: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1af668: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1af66c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1af670: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1af674: ret  */
  return;
}

void fn2_1b21b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077633972));
  /* 1b21b4: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1b21b8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b21bc: str x21, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 21));
  /* 1b21c0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b21c4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1b21c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b21cc: nop  */
  /* nop: no architectural effect here */
  /* 1b21d0: adr x0, #0x25d9c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2480584)));
  /* 1b21d4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b21d8: bl #0x1b4c64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778140));
  fn2_1b4c64(c);
  /* 1b21dc: cbz x0, #0x1b21f8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b21f8;
  /* 1b21e0: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1b21e4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b21e8: ldr x21, [sp, #0x50] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1b21ec: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b21f0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1b21f4: ret  */
  return;
L_1b21f8:;
  /* 1b21f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b21fc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b2200: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778180));
  fn2_1d2c40(c);
  /* 1b2204: nop  */
  /* nop: no architectural effect here */
  /* 1b2208: adr x20, #0x25d9c8 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2480584)));
L_1b220c:;
  /* 1b220c: bl #0x1e98c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778192));
  fn2_1e98c4(c);
  /* 1b2210: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 1b2214: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b2218: bl #0x1e9d30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778204));
  fn2_1e9d30(c);
  /* 1b221c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b2220: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1b2224: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778216));
  fn2_1d2b98(c);
  /* 1b2228: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1b222c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778224));
  fn2_1d2d24(c);
  /* 1b2230: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1b2234: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778232));
  fn2_1d2c2c(c);
  /* 1b2238: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b223c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1b2240: bl #0x1d5690 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778244));
  fn2_1d5690(c);
  /* 1b2244: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 1b2248: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1b224c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778256));
  fn2_1d2d24(c);
  /* 1b2250: tbnz w21, #0, #0x1b2288 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_1b2288;
  /* 1b2254: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b2258: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b225c: bl #0x1b4c64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778272));
  fn2_1b4c64(c);
  /* 1b2260: cbz x0, #0x1b220c */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b220c;
  /* 1b2264: ldr x19, [x0, #0x18] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
L_1b2268:;
  /* 1b2268: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b226c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778288));
  fn2_1d2d24(c);
  /* 1b2270: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b2274: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b2278: ldr x21, [sp, #0x50] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1b227c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b2280: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1b2284: ret  */
  return;
L_1b2288:;
  /* 1b2288: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 1b228c: add x1, x1, #0x9c5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2501)));
  /* 1b2290: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1b2294: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778328));
  fn2_1b7d24(c);
  /* 1b2298: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b229c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b22a0: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778340));
  fn2_1d2c40(c);
  /* 1b22a4: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1b22a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b22ac: bl #0x1b3338 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778352));
  fn2_1b3338(c);
  /* 1b22b0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1b22b4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1b22b8: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778364));
  fn2_1bc544(c);
  /* 1b22bc: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 1b22c0: add x1, x1, #0xa7c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2684)));
  /* 1b22c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1b22c8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778380));
  fn2_1b7d24(c);
  /* 1b22cc: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1b22d0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1b22d4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1b22d8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1b22dc: bl #0x1cd460 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778400));
  fn2_1cd460(c);
  /* 1b22e0: adrp x0, #0x27000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(159744)));
  /* 1b22e4: add x0, x0, #0x551 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1361)));
  /* 1b22e8: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1b22ec: add x1, x1, #0x203 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(515)));
  /* 1b22f0: adrp x3, #0x2b000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1b22f4: add x3, x3, #0xc63 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3171)));
  /* 1b22f8: sub x4, x29, #8 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1b22fc: mov w2, #0x144 */
  ARC_W_W(c, 2, UINT64_C(324));
  /* 1b2300: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1b2304: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 1b2308: bl #0x1b5698 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778444));
  fn2_1b5698(c);
  /* 1b230c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1b2310: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778452));
  fn2_1ccd9c(c);
  /* 1b2314: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1b2318: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778460));
  fn2_1ccd9c(c);
  /* 1b231c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1b2320: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778468));
  fn2_1bc620(c);
  /* 1b2324: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1b2328: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778476));
  fn2_1db788(c);
  /* 1b232c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b2330: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778484));
  fn2_1d2d24(c);
  /* 1b2334: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1b2338: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1778492));
  fn2_1ccd9c(c);
  /* 1b233c: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* 1b2340: b #0x1b2268 */
  goto L_1b2268;
}

void fn2_1b4800(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077643776));
  /* 1b4800: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b4804: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b4808: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b480c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b4810: cbz x1, #0x1b48a4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_1b48a4;
  /* 1b4814: lsr x8, x1, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 1)) >> ((UINT64_C(61)) & 63)));
  /* 1b4818: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1b481c: cbnz x8, #0x1b49d4 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1b49d4;
  /* 1b4820: lsl x0, x20, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(3)) & 63)));
  /* 1b4824: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1787944));
  fn2_24b750(c);
  /* 1b4828: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1b482c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 1b4830: cbz x8, #0x1b483c */
  if ((ARC_X_R(c, 8)) == 0) goto L_1b483c;
  /* 1b4834: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1b4838: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1787964));
  fn2_24b730(c);
L_1b483c:;
  /* 1b483c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 1b4840: str x20, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 20));
L_1b4844:;
  /* 1b4844: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1b4848: str xzr, [x9, x8, lsl #3] */
  arc_st64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3)), ARC_X_R(c, 31));
  /* 1b484c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1b4850: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1b4854: b.ne #0x1b4844 */
  if (ARC_COND(c, 1)) goto L_1b4844;
  /* 1b4858: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* 1b485c: ldr x8, [x10, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(16));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1b4860: cbz x8, #0x1b4898 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1b4898;
  /* 1b4864: fmov d0, x20 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 20)));
  /* 1b4868: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1b486c: cnt v0.8b, v0.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_popcount8((c)->q[0].u8[0]);
    _t.u8[1] = arc_popcount8((c)->q[0].u8[1]);
    _t.u8[2] = arc_popcount8((c)->q[0].u8[2]);
    _t.u8[3] = arc_popcount8((c)->q[0].u8[3]);
    _t.u8[4] = arc_popcount8((c)->q[0].u8[4]);
    _t.u8[5] = arc_popcount8((c)->q[0].u8[5]);
    _t.u8[6] = arc_popcount8((c)->q[0].u8[6]);
    _t.u8[7] = arc_popcount8((c)->q[0].u8[7]);
    (c)->q[0] = _t; }
  /* 1b4870: uaddlv h0, v0.8b */
  { uint64_t _r = (uint64_t)((c)->q[0].u8[0]);
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[1]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[2]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[3]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[4]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[5]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[6]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[7]));
    arc_su_w(c, 0, ((uint64_t)_r & UINT64_C(65535))); }
  /* 1b4874: fmov w11, s0 */
  ARC_W_W(c, 11, ARC_SU_R(c, 0));
  /* 1b4878: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 1b487c: b.hs #0x1b48c4 */
  if (ARC_COND(c, 2)) goto L_1b48c4;
  /* 1b4880: sub x11, x20, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* 1b4884: ldr x12, [x19] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 19)));
  /* 1b4888: and x9, x9, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & ARC_X_R(c, 11)));
  /* 1b488c: str x10, [x12, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 10));
  /* 1b4890: ldr x10, [x8] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 8)));
  /* 1b4894: cbnz x10, #0x1b48ec */
  if ((ARC_X_R(c, 10)) != 0) goto L_1b48ec;
L_1b4898:;
  /* 1b4898: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b489c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b48a0: ret  */
  return;
L_1b48a4:;
  /* 1b48a4: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 1b48a8: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 1b48ac: cbz x0, #0x1b48b4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b48b4;
  /* 1b48b0: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1788084));
  fn2_24b730(c);
L_1b48b4:;
  /* 1b48b4: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
  /* 1b48b8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b48bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b48c0: ret  */
  return;
L_1b48c4:;
  /* 1b48c4: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 1b48c8: b.lo #0x1b48d4 */
  if (ARC_COND(c, 3)) goto L_1b48d4;
  /* 1b48cc: udiv x12, x9, x20 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 20)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 9)) / (uint64_t)(ARC_X_R(c, 20)))));
  /* 1b48d0: msub x9, x12, x20, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) - ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 20)))));
L_1b48d4:;
  /* 1b48d4: ldr x12, [x19] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 19)));
  /* 1b48d8: str x10, [x12, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 10));
  /* 1b48dc: ldr x10, [x8] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 8)));
  /* 1b48e0: cbz x10, #0x1b4898 */
  if ((ARC_X_R(c, 10)) == 0) goto L_1b4898;
  /* 1b48e4: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 1b48e8: b.hs #0x1b4994 */
  if (ARC_COND(c, 2)) goto L_1b4994;
L_1b48ec:;
  /* 1b48ec: sub x11, x20, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* 1b48f0: b #0x1b4900 */
  goto L_1b4900;
L_1b48f4:;
  /* 1b48f4: mov x8, x10 */
  ARC_X_W(c, 8, ARC_X_R(c, 10));
L_1b48f8:;
  /* 1b48f8: ldr x10, [x8] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 8)));
  /* 1b48fc: cbz x10, #0x1b4898 */
  if ((ARC_X_R(c, 10)) == 0) goto L_1b4898;
L_1b4900:;
  /* 1b4900: ldr x12, [x10, #8] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 10) + INT64_C(8))));
  /* 1b4904: and x12, x12, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & ARC_X_R(c, 11)));
  /* 1b4908: cmp x12, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 9));
  /* 1b490c: b.eq #0x1b48f4 */
  if (ARC_COND(c, 0)) goto L_1b48f4;
  /* 1b4910: ldr x13, [x19] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 19)));
  /* 1b4914: ldr x14, [x13, x12, lsl #3] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 12)) << 3))));
  /* 1b4918: cbz x14, #0x1b4948 */
  if ((ARC_X_R(c, 14)) == 0) goto L_1b4948;
  /* 1b491c: ldr x13, [x10] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 10)));
  /* 1b4920: lsl x12, x12, #3 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(3)) & 63)));
  /* 1b4924: str x13, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 13));
  /* 1b4928: ldr x13, [x19] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 19)));
  /* 1b492c: ldr x13, [x13, x12] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 13) + ARC_X_R(c, 12))));
  /* 1b4930: ldr x13, [x13] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 13)));
  /* 1b4934: str x13, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 13));
  /* 1b4938: ldr x13, [x19] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 19)));
  /* 1b493c: ldr x12, [x13, x12] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 13) + ARC_X_R(c, 12))));
  /* 1b4940: str x10, [x12] */
  arc_st64(ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* 1b4944: b #0x1b48f8 */
  goto L_1b48f8;
L_1b4948:;
  /* 1b4948: str x8, [x13, x12, lsl #3] */
  arc_st64((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 12)) << 3)), ARC_X_R(c, 8));
  /* 1b494c: mov x8, x10 */
  ARC_X_W(c, 8, ARC_X_R(c, 10));
  /* 1b4950: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* 1b4954: b #0x1b48f8 */
  goto L_1b48f8;
L_1b4958:;
  /* 1b4958: ldr x12, [x10] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 10)));
  /* 1b495c: lsl x11, x11, #3 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(3)) & 63)));
  /* 1b4960: str x12, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 12));
  /* 1b4964: ldr x12, [x19] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 19)));
  /* 1b4968: ldr x12, [x12, x11] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + ARC_X_R(c, 11))));
  /* 1b496c: ldr x12, [x12] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 12)));
  /* 1b4970: str x12, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 1b4974: ldr x12, [x19] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 19)));
  /* 1b4978: ldr x11, [x12, x11] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 12) + ARC_X_R(c, 11))));
  /* 1b497c: str x10, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 1b4980: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_1b4984:;
  /* 1b4984: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* 1b4988: mov x8, x10 */
  ARC_X_W(c, 8, ARC_X_R(c, 10));
  /* 1b498c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1b4990: cbz x10, #0x1b4898 */
  if ((ARC_X_R(c, 10)) == 0) goto L_1b4898;
L_1b4994:;
  /* 1b4994: ldr x11, [x10, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 10) + INT64_C(8))));
  /* 1b4998: cmp x11, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 20));
  /* 1b499c: b.lo #0x1b49a8 */
  if (ARC_COND(c, 3)) goto L_1b49a8;
  /* 1b49a0: udiv x12, x11, x20 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 20)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 11)) / (uint64_t)(ARC_X_R(c, 20)))));
  /* 1b49a4: msub x11, x12, x20, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) - ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 20)))));
L_1b49a8:;
  /* 1b49a8: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1b49ac: b.eq #0x1b4984 */
  if (ARC_COND(c, 0)) goto L_1b4984;
  /* 1b49b0: ldr x12, [x19] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 19)));
  /* 1b49b4: ldr x13, [x12, x11, lsl #3] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 3))));
  /* 1b49b8: cbnz x13, #0x1b4958 */
  if ((ARC_X_R(c, 13)) != 0) goto L_1b4958;
  /* 1b49bc: str x8, [x12, x11, lsl #3] */
  arc_st64((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 3)), ARC_X_R(c, 8));
  /* 1b49c0: mov x8, x10 */
  ARC_X_W(c, 8, ARC_X_R(c, 10));
  /* 1b49c4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1b49c8: mov x9, x11 */
  ARC_X_W(c, 9, ARC_X_R(c, 11));
  /* 1b49cc: cbnz x10, #0x1b4994 */
  if ((ARC_X_R(c, 10)) != 0) goto L_1b4994;
  /* 1b49d0: b #0x1b4898 */
  goto L_1b4898;
L_1b49d4:;
  /* 1b49d4: bl #0x179cc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1788376));
  fn2_179cc0(c);
}

void fn2_1b5dc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077649344));
  /* 1b5dc0: add x0, x0, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(40)));
  /* 1b5dc4: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 1b5dc8: b.eq #0x1b5de0 */
  if (ARC_COND(c, 0)) goto L_1b5de0;
  /* 1b5dcc: ldp x8, x2, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 1b5dd0: sub x9, x2, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - ARC_X_R(c, 8)));
  /* 1b5dd4: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1b5dd8: asr x3, x9, #3 */
  ARC_X_W(c, 3, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 1b5ddc: b #0x1b6100 */
  fn2_1b6100(c); return;
L_1b5de0:;
  /* 1b5de0: ret  */
  return;
}

void fn2_1b7840(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077656128));
  /* 1b7840: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b7844: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b7848: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b784c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b7850: ldr x8, [x8, #0x9c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2496))));
  /* 1b7854: ldr x9, [x9, #0x670] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(1648))));
  /* 1b7858: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b785c: ldr x1, [x9] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 9)));
  /* 1b7860: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1800292));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b7864: cbz x0, #0x1b7884 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b7884;
  /* 1b7868: nop  */
  /* nop: no architectural effect here */
  /* 1b786c: adr x1, #0x256788 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2451336)));
  /* 1b7870: nop  */
  /* nop: no architectural effect here */
  /* 1b7874: adr x2, #0x256798 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2451352)));
  /* 1b7878: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1b787c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b7880: b #0x24b740 */
  fn2_24b740(c); return;
L_1b7884:;
  /* 1b7884: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b7888: ret  */
  return;
}

void fn2_1b81e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077658600));
  /* 1b81e8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1b81ec: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b81f0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b81f4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b81f8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1b81fc: adrp x22, #0x258000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b8200: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1b8204: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1b8208: ldr x22, [x22, #0x848] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(2120))));
  /* 1b820c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1b8210: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1b8214: ldr x9, [x22] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 22)));
  /* 1b8218: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1802780));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1b821c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b8220: add x1, x0, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* 1b8224: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b8228: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1b822c: bl #0x1b9b5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1802800));
  fn2_1b9b5c(c);
  /* 1b8230: ldr x22, [x22] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 22)));
  /* 1b8234: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b8238: bl #0x1bb9b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1802812));
  fn2_1bb9b0(c);
  /* 1b823c: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 1b8240: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b8244: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 1b8248: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1802828));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1b824c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1b8250: tbnz x19, #0x3f, #0x1b8294 */
  if (((ARC_X_R(c, 19)) >> 63 & 1) != 0) goto L_1b8294;
  /* 1b8254: cbz x8, #0x1b8288 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1b8288;
  /* 1b8258: ldur x9, [x8, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1b825c: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* 1b8260: b.le #0x1b8294 */
  if (ARC_COND(c, 13)) goto L_1b8294;
L_1b8264:;
  /* 1b8264: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1b8268: bl #0x1bb9b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1802860));
  fn2_1bb9b0(c);
  /* 1b826c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1b8270: strh wzr, [x8, x19, lsl #1] */
  arc_st16((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 19)) << 1)), ARC_W_R(c, 31));
  /* 1b8274: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b8278: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b827c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b8280: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1b8284: ret  */
  return;
L_1b8288:;
  /* 1b8288: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 1b828c: cmp xzr, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 19));
  /* 1b8290: b.gt #0x1b8264 */
  if (ARC_COND(c, 12)) goto L_1b8264;
L_1b8294:;
  /* 1b8294: cbz x8, #0x1b82a0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1b82a0;
  /* 1b8298: ldur x4, [x8, #-8] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1b829c: b #0x1b82a4 */
  goto L_1b82a4;
L_1b82a0:;
  /* 1b82a0: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
L_1b82a4:;
  /* 1b82a4: adrp x0, #0x19000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(102400)));
  /* 1b82a8: add x0, x0, #0xd7d */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3453)));
  /* 1b82ac: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1b82b0: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1b82b4: adrp x5, #0x25000 */
  ARC_X_W(c, 5, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1b82b8: add x5, x5, #0x33c */
  ARC_X_W(c, 5, (ARC_X_R(c, 5) + UINT64_C(828)));
  /* 1b82bc: adrp x6, #0x20000 */
  ARC_X_W(c, 6, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1b82c0: add x6, x6, #0xcfc */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) + UINT64_C(3324)));
  /* 1b82c4: adrp x7, #0x1e000 */
  ARC_X_W(c, 7, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1b82c8: add x7, x7, #0xb6f */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) + UINT64_C(2927)));
  /* 1b82cc: mov w2, #0xd5 */
  ARC_W_W(c, 2, UINT64_C(213));
  /* 1b82d0: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 1b82d4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1b82d8: strb wzr, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 31));
  /* 1b82dc: bl #0x1b5870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1802976));
  fn2_1b5870(c);
  /* 1b82e0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b82e4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b82e8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b82ec: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1b82f0: ret  */
  return;
}

void fn2_1b8c64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077661284));
  /* 1b8c64: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b8c68: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b8c6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b8c70: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b8c74: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1b8c78: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1b8c7c: ldr x8, [x8, #0x818] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2072))));
  /* 1b8c80: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8c84: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1b8c88: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b8c8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1805456));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b8c90: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8c94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b8c98: bl #0x1cf730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1805468));
  fn2_1cf730(c);
  /* 1b8c9c: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 1b8ca0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8ca4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1805480));
  fn2_1ccd9c(c);
  /* 1b8ca8: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* 1b8cac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b8cb0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b8cb4: ret  */
  return;
}

void fn2_1b98d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077664468));
  /* 1b98d4: b #0x1b97e0 */
  fn2_1b97e0(c); return;
}

void fn2_1ba994(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077668756));
  /* 1ba994: stp x1, x0, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1ba998: ret  */
  return;
}

void fn2_1bb818(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077672472));
  /* 1bb818: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bb81c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1bb820: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bb824: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1bb828: cbz x8, #0x1bb864 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1bb864;
  /* 1bb82c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1bb830: sub x1, x8, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1bb834: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1bb838: bl #0x24b680 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1816636));
  fn2_24b680(c);
  /* 1bb83c: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 1bb840: b.ne #0x1bb860 */
  if (ARC_COND(c, 1)) goto L_1bb860;
  /* 1bb844: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1bb848: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1bb84c: sub x0, x8, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1bb850: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 1bb854: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1bb858: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bb85c: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_1bb860:;
  /* 1bb860: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
L_1bb864:;
  /* 1bb864: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1bb868: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bb86c: ret  */
  return;
}

void fn2_1bbe38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077674040));
  /* 1bbe38: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bbe3c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1bbe40: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* 1bbe44: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbe48: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc320(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077675296));
  /* 1bc320: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc324: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bc328: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1bc32c: ldr x2, [x8, #0xa90] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(2704))));
  /* 1bc330: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc5f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077676024));
  /* 1bc5f8: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc5fc: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bc600: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1bc604: ldr x2, [x8, #0xb88] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(2952))));
  /* 1bc608: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bcba4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077677476));
  /* 1bcba4: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bcba8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1bcbac: b #0x1d6440 */
  fn2_1d6440(c); return;
}

void fn2_1bd4bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077679804));
  /* 1bd4bc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bd4c0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1bd4c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bd4c8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bd4cc: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 1bd4d0: add x3, x29, #0x1c */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 1bd4d4: ldr x8, [x8, #0x6e8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1768))));
  /* 1bd4d8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bd4dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1823968));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bd4e0: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* 1bd4e4: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1bd4e8: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 1bd4ec: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1bd4f0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1bd4f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bd4f8: ret  */
  return;
}

void fn2_1be048(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077682760));
  /* 1be048: ldr s0, [x1, #8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1be04c: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1be050: stur xzr, [x0, #0xc] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(12)), ARC_X_R(c, 31));
  /* 1be054: stur xzr, [x0, #4] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(4)), ARC_X_R(c, 31));
  /* 1be058: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* 1be05c: ldr d0, [x8, #0x6e8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1768))));
  /* 1be060: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1be064: ldr s1, [x1, #0xc] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1be068: stp xzr, xzr, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1be06c: str d0, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), (c)->q[0].u64[0]);
  /* 1be070: str s1, [x0, #0x14] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(20)), (c)->q[1].u32[0]);
  /* 1be074: ldr d1, [x8, #0x6f0] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(1776))));
  /* 1be078: ldr s0, [x1] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 1)));
  /* 1be07c: str s0, [x0, #0x30] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(48)), (c)->q[0].u32[0]);
  /* 1be080: ldr s0, [x1, #4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1be084: str d1, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[1].u64[0]);
  /* 1be088: str s0, [x0, #0x34] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(52)), (c)->q[0].u32[0]);
  /* 1be08c: ret  */
  return;
}

void fn2_1c0cfc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077694204));
  /* 1c0cfc: mov w8, #0x3f000000 */
  ARC_W_W(c, 8, UINT64_C(1056964608));
  /* 1c0d00: stur xzr, [x0, #0xc] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(12)), ARC_X_R(c, 31));
  /* 1c0d04: str w8, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1c0d08: str w8, [x0, #0x14] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1c0d0c: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c0d10: ldr q0, [x8, #0x9c0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2496))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2496)) + 8));
  /* 1c0d14: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1c0d18: stur xzr, [x0, #4] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(4)), ARC_X_R(c, 31));
  /* 1c0d1c: ldr d1, [x8, #0x710] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(1808))));
  /* 1c0d20: stp xzr, xzr, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1c0d24: stur q0, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 1c0d28: str d1, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[1].u64[0]);
  /* 1c0d2c: ret  */
  return;
}

void fn2_1c21e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077699560));
  /* 1c21e8: ldp q0, q1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1c21ec: ldr w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c21f0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1c21f4: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* 1c21f8: stp q0, q1, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1c21fc: b #0x1c2074 */
  fn2_1c2074(c); return;
}

void fn2_1c4070(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077707376));
  /* 1c4070: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1c4074: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c4078: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* 1c407c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1c4080: ldp q0, q1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1c4084: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* 1c4088: ldr w8, [x0, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c408c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1c4090: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1c4094: str w8, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 8));
  /* 1c4098: bl #0x1c2074 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1851548));
  fn2_1c2074(c);
  /* 1c409c: ldp q2, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1c40a0: ldr s1, [sp, #0x20] */
  arc_su_w(c, 1, arc_ld32(((c)->sp + INT64_C(32))));
  /* 1c40a4: mov s3, v0.s[3] */
  arc_su_w(c, 3, (c)->q[0].u32[3]);
  /* 1c40a8: fmul s4, s1, s0 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1c40ac: fmul s6, s1, v2.s[1] */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 1), (c)->q[2].f32[1])));
  /* 1c40b0: fmul s5, s3, v0.s[1] */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 3), (c)->q[0].f32[1])));
  /* 1c40b4: fmul s3, s3, v2.s[2] */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), (c)->q[2].f32[2])));
  /* 1c40b8: fsub s4, s4, s5 */
  arc_s_w(c, 4, (float)(arc_fsub32(ARC_S_R(c, 4), ARC_S_R(c, 5))));
  /* 1c40bc: mov v5.16b, v0.16b */
  (c)->q[5] = (c)->q[0];
  /* 1c40c0: fsub s3, s6, s3 */
  arc_s_w(c, 3, (float)(arc_fsub32(ARC_S_R(c, 6), ARC_S_R(c, 3))));
  /* 1c40c4: ext v6.16b, v2.16b, v2.16b, #8 */
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
    (c)->q[6] = _t; }
  /* 1c40c8: mov v5.s[0], v4.s[0] */
  (c)->q[5].u32[0] = ((c)->q[4].u32[0]);
  /* 1c40cc: mov v4.16b, v0.16b */
  (c)->q[4] = (c)->q[0];
  /* 1c40d0: mov v4.s[1], v3.s[0] */
  (c)->q[4].u32[1] = ((c)->q[3].u32[0]);
  /* 1c40d4: fmul v5.2s, v2.2s, v5.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[2].f32[0], (c)->q[5].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[2].f32[1], (c)->q[5].f32[1]);
    (c)->q[5] = _t; }
  /* 1c40d8: fmul v4.2s, v6.2s, v4.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[6].f32[0], (c)->q[4].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[6].f32[1], (c)->q[4].f32[1]);
    (c)->q[4] = _t; }
  /* 1c40dc: rev64 v3.2s, v5.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[1];
    _t.u32[1] = (c)->q[5].u32[0];
    (c)->q[3] = _t; }
  /* 1c40e0: fsub v3.2s, v3.2s, v4.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[3].f32[0], (c)->q[4].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[3].f32[1], (c)->q[4].f32[1]);
    (c)->q[3] = _t; }
  /* 1c40e4: fmul s4, s3, v0.s[2] */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 3), (c)->q[0].f32[2])));
  /* 1c40e8: mov s3, v3.s[1] */
  arc_su_w(c, 3, (c)->q[3].u32[1]);
  /* 1c40ec: fadd s3, s4, s3 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 3))));
  /* 1c40f0: fcmp s3, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 3)), (double)(0.0));
  /* 1c40f4: b.pl #0x1c410c */
  if (ARC_COND(c, 5)) goto L_1c410c;
  /* 1c40f8: fneg v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = -((c)->q[2].f32[0]);
    _t.f32[1] = -((c)->q[2].f32[1]);
    _t.f32[2] = -((c)->q[2].f32[2]);
    _t.f32[3] = -((c)->q[2].f32[3]);
    (c)->q[2] = _t; }
  /* 1c40fc: fneg v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = -((c)->q[0].f32[0]);
    _t.f32[1] = -((c)->q[0].f32[1]);
    _t.f32[2] = -((c)->q[0].f32[2]);
    _t.f32[3] = -((c)->q[0].f32[3]);
    (c)->q[0] = _t; }
  /* 1c4100: fneg s1, s1 */
  arc_s_w(c, 1, (float)((-(ARC_S_R(c, 1)))));
  /* 1c4104: stp q2, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 1c4108: str s1, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), (c)->q[1].u32[0]);
L_1c410c:;
  /* 1c410c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1c4110: mov w1, w19 */
  ARC_W_W(c, 1, ARC_W_R(c, 19));
  /* 1c4114: bl #0x1c4128 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1851672));
  fn2_1c4128(c);
  /* 1c4118: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c411c: ldr x19, [sp, #0x40] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1c4120: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1c4124: ret  */
  return;
}

void fn2_1c68bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077717692));
  /* 1c68bc: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 1c68c0: fmul v1.4s, v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[0].f32[1]);
    _t.f32[2] = arc_fmul32((c)->q[0].f32[2], (c)->q[0].f32[2]);
    _t.f32[3] = arc_fmul32((c)->q[0].f32[3], (c)->q[0].f32[3]);
    (c)->q[1] = _t; }
  /* 1c68c4: dup v2.2s, v1.s[1] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].u32[1]);
    _t.u32[1] = ((c)->q[1].u32[1]);
    (c)->q[2] = _t; }
  /* 1c68c8: ext v3.16b, v1.16b, v1.16b, #8 */
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
    (c)->q[3] = _t; }
  /* 1c68cc: fadd v2.2s, v1.2s, v2.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[1].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[1].f32[1], (c)->q[2].f32[1]);
    (c)->q[2] = _t; }
  /* 1c68d0: dup v1.2s, v1.s[3] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].u32[3]);
    _t.u32[1] = ((c)->q[1].u32[3]);
    (c)->q[1] = _t; }
  /* 1c68d4: fadd v2.2s, v2.2s, v3.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[2].f32[0], (c)->q[3].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[2].f32[1], (c)->q[3].f32[1]);
    (c)->q[2] = _t; }
  /* 1c68d8: fadd v1.2s, v2.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[2].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[2].f32[1], (c)->q[1].f32[1]);
    (c)->q[1] = _t; }
  /* 1c68dc: fmov s2, #1.00000000 */
  arc_s_w(c, 2, (float)(1.0));
  /* 1c68e0: fsqrt s1, s1 */
  arc_s_w(c, 1, (float)(arc_fsqrt32(ARC_S_R(c, 1))));
  /* 1c68e4: fdiv s1, s2, s1 */
  arc_s_w(c, 1, (float)(arc_fdiv32(ARC_S_R(c, 2), ARC_S_R(c, 1))));
  /* 1c68e8: fmul v0.4s, v0.4s, v1.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[1].f32[0]);
    _t.f32[2] = arc_fmul32((c)->q[0].f32[2], (c)->q[1].f32[0]);
    _t.f32[3] = arc_fmul32((c)->q[0].f32[3], (c)->q[1].f32[0]);
    (c)->q[0] = _t; }
  /* 1c68ec: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 1c68f0: ret  */
  return;
}

void fn2_1c95cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077729228));
  /* 1c95cc: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* 1c95d0: mov w8, #0x7f800000 */
  ARC_W_W(c, 8, UINT64_C(2139095040));
  /* 1c95d4: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c95d8: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* 1c95dc: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c95e0: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c95e4: b.eq #0x1c9628 */
  if (ARC_COND(c, 0)) goto L_1c9628;
  /* 1c95e8: b.vs #0x1c9628 */
  if (ARC_COND(c, 6)) goto L_1c9628;
  /* 1c95ec: ldr s0, [x0, #4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1c95f0: mov w8, #0x7f800000 */
  ARC_W_W(c, 8, UINT64_C(2139095040));
  /* 1c95f4: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c95f8: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* 1c95fc: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c9600: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c9604: b.eq #0x1c9628 */
  if (ARC_COND(c, 0)) goto L_1c9628;
  /* 1c9608: b.vs #0x1c9628 */
  if (ARC_COND(c, 6)) goto L_1c9628;
  /* 1c960c: ldr s0, [x0, #8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c9610: mov w8, #0x7f800000 */
  ARC_W_W(c, 8, UINT64_C(2139095040));
  /* 1c9614: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c9618: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c961c: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c9620: cset w8, mi */
  ARC_W_W(c, 8, (ARC_COND(c, 4) ? 1 : 0));
  /* 1c9624: csinc w8, w8, wzr, le */
  ARC_W_W(c, 8, (ARC_COND(c, 13) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
L_1c9628:;
  /* 1c9628: mov w0, w8 */
  ARC_W_W(c, 0, ARC_W_R(c, 8));
  /* 1c962c: ret  */
  return;
}

void fn2_1ca4f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077733104));
  /* 1ca4f0: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 1ca4f4: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ca4f8: str x21, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 21));
  /* 1ca4fc: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ca500: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 1ca504: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* 1ca508: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1ca50c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1ca510: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 1ca514: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1ca518: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 1ca51c: bl #0x1b7e54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877280));
  fn2_1b7e54(c);
  /* 1ca520: adrp x0, #0x24000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(147456)));
  /* 1ca524: add x0, x0, #0xe4f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3663)));
  /* 1ca528: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 1ca52c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1ca530: bl #0x1b8e18 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877300));
  fn2_1b8e18(c);
  /* 1ca534: adrp x21, #0x1d000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(118784)));
  /* 1ca538: add x21, x21, #0x6c6 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1734)));
  /* 1ca53c: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 1ca540: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1ca544: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ca548: bl #0x1b7f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877324));
  fn2_1b7f54(c);
  /* 1ca54c: ldr s0, [x20, #4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 20) + INT64_C(4))));
  /* 1ca550: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1ca554: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1ca558: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 1ca55c: bl #0x1b7e54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877344));
  fn2_1b7e54(c);
  /* 1ca560: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1ca564: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 1ca568: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1ca56c: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877360));
  fn2_1cf868(c);
  /* 1ca570: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1ca574: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1ca578: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ca57c: bl #0x1b7f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877376));
  fn2_1b7f54(c);
  /* 1ca580: ldr s0, [x20, #8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1ca584: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1ca588: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1ca58c: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 1ca590: bl #0x1b7e54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877396));
  fn2_1b7e54(c);
  /* 1ca594: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1ca598: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1ca59c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ca5a0: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877412));
  fn2_1cf868(c);
  /* 1ca5a4: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ca5a8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1ca5ac: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ca5b0: bl #0x1b7f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877428));
  fn2_1b7f54(c);
  /* 1ca5b4: ldr s0, [x20, #0xc] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 20) + INT64_C(12))));
  /* 1ca5b8: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 1ca5bc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1ca5c0: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 1ca5c4: bl #0x1b7e54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877448));
  fn2_1b7e54(c);
  /* 1ca5c8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ca5cc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ca5d0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1ca5d4: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877464));
  fn2_1cf868(c);
  /* 1ca5d8: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1ca5dc: add x1, x1, #0xe22 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3618)));
  /* 1ca5e0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ca5e4: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 1ca5e8: bl #0x1b7f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877484));
  fn2_1b7f54(c);
  /* 1ca5ec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ca5f0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877492));
  fn2_1ccd9c(c);
  /* 1ca5f4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ca5f8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877500));
  fn2_1ccd9c(c);
  /* 1ca5fc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ca600: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877508));
  fn2_1ccd9c(c);
  /* 1ca604: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1ca608: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877516));
  fn2_1ccd9c(c);
  /* 1ca60c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ca610: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877524));
  fn2_1ccd9c(c);
  /* 1ca614: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1ca618: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877532));
  fn2_1ccd9c(c);
  /* 1ca61c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1ca620: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877540));
  fn2_1ccd9c(c);
  /* 1ca624: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1ca628: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877548));
  fn2_1ccd9c(c);
  /* 1ca62c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 1ca630: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877556));
  fn2_1ccd9c(c);
  /* 1ca634: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1ca638: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877564));
  fn2_1ccd9c(c);
  /* 1ca63c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1ca640: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1877572));
  fn2_1ccd9c(c);
  /* 1ca644: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ca648: ldr x21, [sp, #0x60] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(96))));
  /* 1ca64c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ca650: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 1ca654: ret  */
  return;
}

void fn2_1cd358(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077744984));
  /* 1cd358: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1cd35c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cd360: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cd364: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cd368: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1cd36c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1cd370: ldr x8, [x8, #0xf10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3856))));
  /* 1cd374: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1cd378: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1cd37c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1889152));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cd380: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1cd384: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1cd388: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1cd38c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cd390: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1cd394: ret  */
  return;
}

void fn2_1ce02c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077748268));
  /* 1ce02c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1ce030: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ce034: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ce038: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ce03c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1ce040: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1ce044: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1ce048: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ce04c: ldr x0, [x8, #0x1d0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(464))));
  /* 1ce050: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1ce054: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ce058: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1ce05c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1ce060: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ce064: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1892456));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ce068: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ce06c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ce070: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ce074: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1ce078: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1ce07c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ce080: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ce084: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1ce088: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1ceb04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077751044));
  /* 1ceb04: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1ceb08: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ceb0c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ceb10: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1ceb14: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1ceb18: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ceb1c: ldr x8, [x8, #0x110] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(272))));
  /* 1ceb20: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1ceb24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1895208));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ceb28: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1ceb2c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1ceb30: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1ceb34: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ceb38: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1ceb3c: ret  */
  return;
}

void fn2_1cf550(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077753680));
  /* 1cf550: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1cf554: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cf558: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cf55c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1cf560: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1cf564: ldr x8, [x8, #0x220] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(544))));
  /* 1cf568: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1897836));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cf56c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1cf570: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1cf574: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1cf578: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cf57c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1cf580: ret  */
  return;
}

void fn2_1cff90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077756304));
  /* 1cff90: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cff94: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1cff98: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cff9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1cffa0: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1cffa4: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cffa8: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cffac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1cffb0: ldr x0, [x8, #0x4e8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1256))));
  /* 1cffb4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cffb8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1cffbc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cffc0: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1cffc4: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1cffc8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cffcc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1900496));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cffd0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cffd4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1cffd8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1cffdc: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1cffe0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cffe4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1cffe8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cffec: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d2da0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077768096));
  /* 1d2da0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d2da4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d2da8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d2dac: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d2db0: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1d2db4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1d2db8: ldr x8, [x8, #0x420] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1056))));
  /* 1d2dbc: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1d2dc0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d2dc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1912264));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d2dc8: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d2dcc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d2dd0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d2dd4: ret  */
  return;
}

void fn2_1d3728(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077770536));
  /* 1d3728: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1d372c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d3730: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1d3734: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d3738: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1d373c: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d3740: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3744: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d3748: ldr x22, [x8, #0x520] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(1312))));
  /* 1d374c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1d3750: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1d3754: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1d3758: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1914716));
  fn2_1ccc74(c);
  /* 1d375c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1d3760: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1d3764: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d3768: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d376c: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1d3770: stp x8, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d3774: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1914744));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1d3778: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d377c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1d3780: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d3784: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1d3788: ret  */
  return;
}

void fn2_1d41f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077773300));
  /* 1d41f4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d41f8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d41fc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d4200: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d4204: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1d4208: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1d420c: ldr x8, [x8, #0x620] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1568))));
  /* 1d4210: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d4214: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d4218: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1917468));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d421c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d4220: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d4224: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d4228: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d422c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d4230: ret  */
  return;
}

void fn2_1d4acc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077775564));
  /* 1d4acc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1d4ad0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d4ad4: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1d4ad8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d4adc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d4ae0: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d4ae4: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d4ae8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d4aec: ldr x21, [x8, #0x720] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(1824))));
  /* 1d4af0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d4af4: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1d4af8: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1919740));
  fn2_1ccc74(c);
  /* 1d4afc: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1d4b00: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1d4b04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d4b08: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d4b0c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d4b10: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1d4b14: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1919768));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1d4b18: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d4b1c: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1d4b20: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d4b24: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1d4b28: ret  */
  return;
}

void fn2_1d5460(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077778016));
  /* 1d5460: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d5464: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d5468: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d546c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d5470: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d5474: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d5478: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d547c: ldr x0, [x9, #0x828] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2088))));
  /* 1d5480: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d5484: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d5488: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d548c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1922192));
  fn2_1ccc74(c);
  /* 1d5490: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d5494: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d5498: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d549c: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d54a0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d54a4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d54a8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d54ac: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d5dc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077780416));
  /* 1d5dc0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d5dc4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d5dc8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d5dcc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d5dd0: adrp x21, #0x25e000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d5dd4: add x21, x21, #0x3f8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1016)));
  /* 1d5dd8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d5ddc: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1d5de0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d5de4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1924584));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d5de8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1d5dec: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1d5df0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d5df4: str x19, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 19));
  /* 1d5df8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1924604));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d5dfc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d5e00: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d5e04: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d5e08: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d5e0c: ret  */
  return;
}

void fn2_1d6d28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077784360));
  /* 1d6d28: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d6d2c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d6d30: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d6d34: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d6d38: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1d6d3c: ldr x8, [x8, #0xa18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2584))));
  /* 1d6d40: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1d6d44: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1d6d48: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1928524));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d6d4c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d6d50: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d6d54: ret  */
  return;
}

void fn2_1d7c84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077788292));
  /* 1d7c84: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d7c88: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d7c8c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d7c90: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d7c94: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1d7c98: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d7c9c: ldr x8, [x8, #0xaf8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2808))));
  /* 1d7ca0: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d7ca4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1932456));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d7ca8: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d7cac: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d7cb0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d7cb4: ret  */
  return;
}

void fn2_1d8990(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077791632));
  /* 1d8990: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d8994: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d8998: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d899c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d89a0: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d89a4: ldr x8, [x8, #0xc10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3088))));
  /* 1d89a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1935788));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d89ac: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d89b0: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d89b4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d89b8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d89bc: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d89c0: ret  */
  return;
}

void fn2_1d9d2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077796652));
  /* 1d9d2c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d9d30: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d9d34: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1d9d38: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d9d3c: stp x1, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1d9d40: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1d9d44: ldr x8, [x8, #0xcf8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3320))));
  /* 1d9d48: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d9d4c: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1d9d50: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1940820));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d9d54: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d9d58: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d9d5c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d9d60: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d9d64: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d9d68: ret  */
  return;
}

void fn2_1db5b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077802932));
  /* 1db5b4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1db5b8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1db5bc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1db5c0: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1db5c4: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1db5c8: ldr x8, [x8, #0xe10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3600))));
  /* 1db5cc: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1db5d0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1db5d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1947096));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1db5d8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1db5dc: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1db5e0: ret  */
  return;
}

void fn2_1dbcfc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077804796));
  /* 1dbcfc: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1dbd00: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dbd04: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1dbd08: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dbd0c: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1dbd10: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1dbd14: ldr x8, [x8, #0xf08] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3848))));
  /* 1dbd18: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1dbd1c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1dbd20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1948964));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dbd24: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1dbd28: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dbd2c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1dbd30: ret  */
  return;
}

void fn2_1dc5b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077807028));
  /* 1dc5b4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1dc5b8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dc5bc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1dc5c0: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1dc5c4: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1dc5c8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 1dc5cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1951184));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dc5d0: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1dc5d4: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1dc5d8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1dc5dc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dc5e0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1dc5e4: ret  */
  return;
}

void fn2_1de1b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077814192));
  /* 1de1b0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1de1b4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1de1b8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1de1bc: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1de1c0: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1de1c4: strb w2, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 2));
  /* 1de1c8: ldr x8, [x8, #0x100] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(256))));
  /* 1de1cc: add x10, sp, #0xc */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(12)));
  /* 1de1d0: stp x1, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1de1d4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1de1d8: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1de1dc: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1de1e0: str x10, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 10));
  /* 1de1e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1958376));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1de1e8: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1de1ec: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1de1f0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1de1f4: ret  */
  return;
}

void fn2_1deb30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077816624));
  /* 1deb30: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1deb34: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1deb38: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1deb3c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1deb40: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1deb44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1deb48: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1deb4c: ldr x0, [x9, #0x200] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(512))));
  /* 1deb50: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1deb54: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1deb58: bl #0x1e209c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1960796));
  fn2_1e209c(c);
  /* 1deb5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1deb60: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1deb64: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1deb68: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1deb6c: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1deb70: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1deb74: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1deb78: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1deb7c: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1dfc0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077820940));
  /* 1dfc0c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1dfc10: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1dfc14: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1dfc18: ldr x2, [x8, #0x300] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(768))));
  /* 1dfc1c: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1e0400(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077822976));
  /* 1e0400: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e0404: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e0408: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e040c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e0410: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e0414: ldr x8, [x8, #0x418] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1048))));
  /* 1e0418: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967132));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e041c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e0420: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e0424: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e0428: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e042c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e0430: ret  */
  return;
}

void fn2_1e14b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077827248));
  /* 1e14b0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1e14b4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e14b8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1e14bc: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e14c0: stp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1e14c4: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1e14c8: ldr x8, [x8, #0x4f0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1264))));
  /* 1e14cc: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 1e14d0: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1e14d4: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1e14d8: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e14dc: stp x9, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1e14e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1971428));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e14e4: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1e14e8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e14ec: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1e14f0: ret  */
  return;
}

void fn2_1e252c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077831468));
  /* 1e252c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e2530: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e2534: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e2538: ldr x4, [x8, #0x5e8] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(1512))));
  /* 1e253c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e2540: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1e3610(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077835792));
  /* 1e3610: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e3614: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e3618: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e361c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e3620: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e3624: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e3628: ldr x8, [x8, #0x6e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1760))));
  /* 1e362c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e3630: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e3634: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1979960));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e3638: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e363c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e3640: ret  */
  return;
}

void fn2_1e46f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077840116));
  /* 1e46f4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e46f8: ldr x1, [x8, #0x7d8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(2008))));
  /* 1e46fc: br x1 */
  arc_dispatch(c, ARC_X_R(c, 1)); return;
}

void fn2_1e4f4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077842252));
  /* 1e4f4c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e4f50: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e4f54: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1e4f58: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e4f5c: mov w0, #0x23 */
  ARC_W_W(c, 0, UINT64_C(35));
  /* 1e4f60: ldr x8, [x8, #0x7a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1960))));
  /* 1e4f64: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e4f68: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1986412));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e4f6c: adrp x19, #0x258000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e4f70: nop  */
  /* nop: no architectural effect here */
  /* 1e4f74: adr x20, #0x25f8e8 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2488552)));
  /* 1e4f78: ldr x19, [x19, #0x7c8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(1992))));
  /* 1e4f7c: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 1e4f80: mov w0, #0x23 */
  ARC_W_W(c, 0, UINT64_C(35));
  /* 1e4f84: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1e4f88: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1e4f8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1986448));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e4f90: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1e4f94: str x0, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 0));
  /* 1e4f98: mov w0, #0x23 */
  ARC_W_W(c, 0, UINT64_C(35));
  /* 1e4f9c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1e4fa0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1986468));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e4fa4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1e4fa8: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1e4fac: mov w0, #0x23 */
  ARC_W_W(c, 0, UINT64_C(35));
  /* 1e4fb0: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 1e4fb4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1986488));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e4fb8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e4fbc: ldr x8, [x8, #0x7d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2000))));
  /* 1e4fc0: str x0, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1e4fc4: mov w0, #0x23 */
  ARC_W_W(c, 0, UINT64_C(35));
  /* 1e4fc8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e4fcc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1986512));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e4fd0: str x0, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 0));
  /* 1e4fd4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e4fd8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e4fdc: ret  */
  return;
}

void fn2_1e5ef8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077846264));
  /* 1e5ef8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e5efc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e5f00: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e5f04: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e5f08: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e5f0c: ldr x8, [x8, #0x9e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2528))));
  /* 1e5f10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1990420));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e5f14: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e5f18: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e5f1c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e5f20: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e5f24: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e5f28: ret  */
  return;
}

void fn2_1e6fb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077850544));
  /* 1e6fb0: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e6fb4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e6fb8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e6fbc: ldr x4, [x8, #0xac8] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(2760))));
  /* 1e6fc0: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e6fc4: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1e8050(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077854800));
  /* 1e8050: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e8054: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e8058: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1e805c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e8060: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1e8064: str x2, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 2));
  /* 1e8068: ldr x8, [x8, #0xbc0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3008))));
  /* 1e806c: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1e8070: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e8074: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1e8078: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e807c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1998976));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e8080: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1e8084: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e8088: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e808c: ret  */
  return;
}

void fn2_1e90d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077859032));
  /* 1e90d8: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e90dc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e90e0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1e90e4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e90e8: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1e90ec: str x2, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 2));
  /* 1e90f0: ldr x8, [x8, #0xcb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3256))));
  /* 1e90f4: stp x1, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1e90f8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1e90fc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e9100: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e9104: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2003208));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e9108: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e910c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e9110: ret  */
  return;
}

void fn2_1e9af4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077861620));
  /* 1e9af4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e9af8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1e9afc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1e9b00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1e9b04: bl #0x1e9944 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2005768));
  fn2_1e9944(c);
  /* 1e9b08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1e9b0c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1e9b10: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e9b14: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_1ebc9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077870236));
  /* 1ebc9c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1ebca0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ebca4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ebca8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ebcac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1ebcb0: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ebcb4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1ebcb8: ldr x0, [x0, #0xa40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2624))));
  /* 1ebcbc: bl #0x24b830 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2014400));
  fn2_24b830(c);
  /* 1ebcc0: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ebcc4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1ebcc8: ldr x0, [x0, #0xa48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2632))));
  /* 1ebccc: bl #0x1ebe34 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2014416));
  fn2_1ebe34(c);
  /* 1ebcd0: cbz x0, #0x1ebd0c */
  if ((ARC_X_R(c, 0)) == 0) goto L_1ebd0c;
  /* 1ebcd4: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1ebcd8: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* 1ebcdc: b.eq #0x1ebd34 */
  if (ARC_COND(c, 0)) goto L_1ebd34;
  /* 1ebce0: adrp x0, #0x2b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1ebce4: add x0, x0, #0xd5c */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3420)));
  /* 1ebce8: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1ebcec: add x1, x1, #0x8eb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2283)));
  /* 1ebcf0: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1ebcf4: add x3, x3, #0x794 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1940)));
  /* 1ebcf8: mov w2, #0xaf */
  ARC_W_W(c, 2, UINT64_C(175));
  /* 1ebcfc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1ebd00: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1ebd04: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2014472));
  fn2_1b54b0(c);
  /* 1ebd08: b #0x1ebd34 */
  goto L_1ebd34;
L_1ebd0c:;
  /* 1ebd0c: str x20, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 20));
  /* 1ebd10: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ebd14: adrp x2, #0x39000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(233472)));
  /* 1ebd18: add x2, x2, #0x317 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(791)));
  /* 1ebd1c: ldr x0, [x0, #0xa48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2632))));
  /* 1ebd20: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1ebd24: add x4, sp, #7 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(7)));
  /* 1ebd28: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1ebd2c: bl #0x1ebf6c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2014512));
  fn2_1ebf6c(c);
  /* 1ebd30: str x19, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 19));
L_1ebd34:;
  /* 1ebd34: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ebd38: ldr x0, [x0, #0xa40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2624))));
  /* 1ebd3c: bl #0x24b840 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2014528));
  fn2_24b840(c);
  /* 1ebd40: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ebd44: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ebd48: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1ebd4c: ret  */
  return;
}

void fn2_1ee158(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077879640));
  /* 1ee158: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1ee15c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ee160: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1ee164: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ee168: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ee16c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ee170: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ee174: add x8, x8, #0x158 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(344)));
  /* 1ee178: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ee17c: tbz w8, #0, #0x1ee1d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ee1d4;
L_1ee180:;
  /* 1ee180: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ee184: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ee188: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ee18c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1ee190: ldr x8, [x8, #0x150] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(336))));
  /* 1ee194: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ee198: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1ee19c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1ee1a0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1ee1a4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ee1a8: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1ee1ac: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2023856));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1ee1b0: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1ee1b4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1ee1b8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1ee1bc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ee1c0: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1ee1c4: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ee1c8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ee1cc: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1ee1d0: ret  */
  return;
L_1ee1d4:;
  /* 1ee1d4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ee1d8: add x8, x8, #0x158 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(344)));
  /* 1ee1dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ee1e0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ee1e4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1ee1e8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1ee1ec: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2023920));
  fn2_24b710(c);
  /* 1ee1f0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ee1f4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ee1f8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ee1fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ee200: cbz w8, #0x1ee180 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ee180;
  /* 1ee204: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ee208: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ee20c: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1ee210: bl #0x1ee2b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2023956));
  fn2_1ee2b8(c);
  /* 1ee214: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ee218: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1ee21c: add x1, x1, #0x187 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(391)));
  /* 1ee220: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ee224: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ee228: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2023980));
  fn2_1b8fd4(c);
  /* 1ee22c: mov w2, #0x2b9d */
  ARC_W_W(c, 2, UINT64_C(11165));
  /* 1ee230: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1ee234: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ee238: movk w2, #0x3d0b, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1024131072)));
  /* 1ee23c: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2024000));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1ee240: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ee244: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ee248: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2024012));
  fn2_1d2d24(c);
  /* 1ee24c: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ee250: add x0, x0, #0x150 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(336)));
  /* 1ee254: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1ee258: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2024028));
  fn2_24b720(c);
  /* 1ee25c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ee260: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ee264: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ee268: b #0x1ee180 */
  goto L_1ee180;
}

void fn2_1efbb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077886392));
  /* 1efbb8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1efbbc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1efbc0: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1efbc4: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1efbc8: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1efbcc: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1efbd0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1efbd4: add x8, x8, #0x2e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(744)));
  /* 1efbd8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1efbdc: tbz w8, #0, #0x1efc34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1efc34;
L_1efbe0:;
  /* 1efbe0: sxtw x8, w3 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 1efbe4: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1efbe8: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1efbec: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1efbf0: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1efbf4: stp x8, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1efbf8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1efbfc: ldr x0, [x9, #0x2e0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(736))));
  /* 1efc00: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1efc04: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1efc08: stp x2, x9, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1efc0c: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1efc10: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1efc14: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2030616));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1efc18: ldur w0, [x29, #-8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1efc1c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1efc20: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1efc24: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1efc28: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1efc2c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1efc30: ret  */
  return;
L_1efc34:;
  /* 1efc34: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1efc38: add x8, x8, #0x2e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(744)));
  /* 1efc3c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1efc40: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1efc44: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1efc48: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1efc4c: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 1efc50: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2030676));
  fn2_24b710(c);
  /* 1efc54: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 1efc58: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1efc5c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1efc60: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1efc64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1efc68: cbz w8, #0x1efbe0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1efbe0;
  /* 1efc6c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1efc70: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1efc74: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1efc78: bl #0x1f0cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2030716));
  fn2_1f0cc4(c);
  /* 1efc7c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1efc80: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1efc84: add x1, x1, #0x7db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2011)));
  /* 1efc88: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1efc8c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1efc90: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2030740));
  fn2_1b8fd4(c);
  /* 1efc94: mov w2, #0x2061 */
  ARC_W_W(c, 2, UINT64_C(8289));
  /* 1efc98: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1efc9c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1efca0: movk w2, #0x3f5f, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1063190528)));
  /* 1efca4: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2030760));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1efca8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1efcac: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1efcb0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2030772));
  fn2_1d2d24(c);
  /* 1efcb4: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1efcb8: add x0, x0, #0x2e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(736)));
  /* 1efcbc: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1efcc0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2030788));
  fn2_24b720(c);
  /* 1efcc4: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 1efcc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1efccc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1efcd0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1efcd4: b #0x1efbe0 */
  goto L_1efbe0;
}

void fn2_1f1e10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077895184));
  /* 1f1e10: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* 1f1e14: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f1e18: stp x28, x27, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1f1e1c: stp x26, x25, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1f1e20: stp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1f1e24: stp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f1e28: stp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f1e2c: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 1f1e30: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f1e34: add x8, x8, #0x4e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1248)));
  /* 1f1e38: ldr w27, [x29, #0x68] */
  ARC_W_W(c, 27, arc_ld32((ARC_X_R(c, 29) + INT64_C(104))));
  /* 1f1e3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f1e40: ldr w28, [x29, #0x60] */
  ARC_W_W(c, 28, arc_ld32((ARC_X_R(c, 29) + INT64_C(96))));
  /* 1f1e44: tbz w8, #0, #0x1f1ed0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f1ed0;
L_1f1e48:;
  /* 1f1e48: sxtw x8, w3 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 1f1e4c: sxtw x9, w4 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 4))));
  /* 1f1e50: sxtw x10, w27 */
  ARC_X_W(c, 10, ((int64_t)(int32_t)(ARC_W_R(c, 27))));
  /* 1f1e54: str x6, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 6));
  /* 1f1e58: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f1e5c: stp x28, x9, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f1e60: add x9, sp, #0x20 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(32)));
  /* 1f1e64: stp x8, x1, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1f1e68: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 1f1e6c: str x10, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 10));
  /* 1f1e70: add x10, sp, #0x18 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(24)));
  /* 1f1e74: stp x2, x8, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1f1e78: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f1e7c: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* 1f1e80: stp x9, x5, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 5));
  }
  /* 1f1e84: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f1e88: ldr x8, [x8, #0x4d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1240))));
  /* 1f1e8c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f1e90: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f1e94: stp x7, x10, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 7));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1f1e98: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 1f1e9c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f1ea0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f1ea4: str x10, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 10));
  /* 1f1ea8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2039468));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f1eac: ldur w0, [x29, #-8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1f1eb0: ldp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f1eb4: ldp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f1eb8: ldp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1f1ebc: ldp x26, x25, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1f1ec0: ldp x28, x27, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1f1ec4: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f1ec8: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* 1f1ecc: ret  */
  return;
L_1f1ed0:;
  /* 1f1ed0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f1ed4: add x8, x8, #0x4e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1248)));
  /* 1f1ed8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f1edc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f1ee0: mov x20, x7 */
  ARC_X_W(c, 20, ARC_X_R(c, 7));
  /* 1f1ee4: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 1f1ee8: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* 1f1eec: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 1f1ef0: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 1f1ef4: mov x25, x4 */
  ARC_X_W(c, 25, ARC_X_R(c, 4));
  /* 1f1ef8: mov x26, x3 */
  ARC_X_W(c, 26, ARC_X_R(c, 3));
  /* 1f1efc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2039552));
  fn2_24b710(c);
  /* 1f1f00: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 1f1f04: mov x4, x25 */
  ARC_X_W(c, 4, ARC_X_R(c, 25));
  /* 1f1f08: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1f1f0c: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 1f1f10: mov x5, x22 */
  ARC_X_W(c, 5, ARC_X_R(c, 22));
  /* 1f1f14: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* 1f1f18: mov x7, x20 */
  ARC_X_W(c, 7, ARC_X_R(c, 20));
  /* 1f1f1c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f1f20: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f1f24: cbz w8, #0x1f1e48 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f1e48;
  /* 1f1f28: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f1f2c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f1f30: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1f1f34: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
  /* 1f1f38: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2039612));
  fn2_20293c(c);
  /* 1f1f3c: str x27, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 27));
  /* 1f1f40: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 1f1f44: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 1f1f48: add x1, x1, #0x7e3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2019)));
  /* 1f1f4c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1f1f50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f1f54: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2039640));
  fn2_1b8fd4(c);
  /* 1f1f58: mov w2, #0xb0df */
  ARC_W_W(c, 2, UINT64_C(45279));
  /* 1f1f5c: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1f1f60: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 1f1f64: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 1f1f68: movk w2, #0xc48c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3297509376)));
  /* 1f1f6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2039664));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1f1f70: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* 1f1f74: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1f1f78: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2039676));
  fn2_1d2d24(c);
  /* 1f1f7c: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f1f80: add x0, x0, #0x4d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1240)));
  /* 1f1f84: str x27, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 27));
  }
  /* 1f1f88: ldr x27, [sp, #8] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1f1f8c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2039696));
  fn2_24b720(c);
  /* 1f1f90: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 1f1f94: mov x4, x25 */
  ARC_X_W(c, 4, ARC_X_R(c, 25));
  /* 1f1f98: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 1f1f9c: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 1f1fa0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f1fa4: mov x5, x22 */
  ARC_X_W(c, 5, ARC_X_R(c, 22));
  /* 1f1fa8: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* 1f1fac: mov x7, x20 */
  ARC_X_W(c, 7, ARC_X_R(c, 20));
  /* 1f1fb0: b #0x1f1e48 */
  goto L_1f1e48;
}

void fn2_1f429c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077904540));
  /* 1f429c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1f42a0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f42a4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1f42a8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f42ac: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f42b0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f42b4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f42b8: add x8, x8, #0x6e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1760)));
  /* 1f42bc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f42c0: tbz w8, #0, #0x1f4314 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f4314;
L_1f42c4:;
  /* 1f42c4: sxtw x8, w2 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f42c8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f42cc: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f42d0: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f42d4: mov x11, sp */
  ARC_X_W(c, 11, (c)->sp);
  /* 1f42d8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1f42dc: stp x8, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1f42e0: ldr x8, [x9, #0x6d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1752))));
  /* 1f42e4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f42e8: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 1f42ec: stp x11, x3, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 1f42f0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f42f4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f42f8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2048764));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f42fc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f4300: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f4304: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1f4308: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f430c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1f4310: ret  */
  return;
L_1f4314:;
  /* 1f4314: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f4318: add x8, x8, #0x6e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1760)));
  /* 1f431c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f4320: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f4324: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1f4328: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1f432c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 1f4330: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2048820));
  fn2_24b710(c);
  /* 1f4334: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1f4338: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1f433c: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1f4340: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f4344: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f4348: cbz w8, #0x1f42c4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f42c4;
  /* 1f434c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f4350: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f4354: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1f4358: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2048860));
  fn2_20293c(c);
  /* 1f435c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1f4360: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1f4364: add x1, x1, #0x996 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2454)));
  /* 1f4368: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f436c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f4370: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2048884));
  fn2_1b8fd4(c);
  /* 1f4374: mov w2, #0x7938 */
  ARC_W_W(c, 2, UINT64_C(31032));
  /* 1f4378: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1f437c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1f4380: movk w2, #0x3993, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(965935104)));
  /* 1f4384: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2048904));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1f4388: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1f438c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f4390: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2048916));
  fn2_1d2d24(c);
  /* 1f4394: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f4398: add x0, x0, #0x6d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1752)));
  /* 1f439c: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1f43a0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2048932));
  fn2_24b720(c);
  /* 1f43a4: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1f43a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f43ac: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1f43b0: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1f43b4: b #0x1f42c4 */
  goto L_1f42c4;
}

void fn2_1f6230(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077912624));
  /* 1f6230: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f6234: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1f6238: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f623c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1f6240: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6244: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* 1f6248: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f624c: tbz w8, #0, #0x1f6294 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f6294;
L_1f6250:;
  /* 1f6250: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f6254: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6258: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f625c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f6260: ldr x8, [x8, #0x8d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2264))));
  /* 1f6264: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f6268: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1f626c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f6270: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f6274: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2056824));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f6278: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f627c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1f6280: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1f6284: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f6288: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1f628c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f6290: ret  */
  return;
L_1f6294:;
  /* 1f6294: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6298: add x8, x8, #0x8e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2272)));
  /* 1f629c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f62a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f62a4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2056872));
  fn2_24b710(c);
  /* 1f62a8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f62ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f62b0: cbz w8, #0x1f6250 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f6250;
  /* 1f62b4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f62b8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f62bc: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1f62c0: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2056900));
  fn2_20293c(c);
  /* 1f62c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f62c8: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1f62cc: add x1, x1, #0x1fd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(509)));
  /* 1f62d0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f62d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f62d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2056924));
  fn2_1b8fd4(c);
  /* 1f62dc: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 1f62e0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f62e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f62e8: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 1f62ec: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2056944));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1f62f0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f62f4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f62f8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2056956));
  fn2_1d2d24(c);
  /* 1f62fc: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6300: add x0, x0, #0x8d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2264)));
  /* 1f6304: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f6308: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2056972));
  fn2_24b720(c);
  /* 1f630c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f6310: b #0x1f6250 */
  goto L_1f6250;
}

void fn2_1f8154(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077920596));
  /* 1f8154: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1f8158: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f815c: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1f8160: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f8164: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f8168: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1f816c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8170: add x8, x8, #0xae0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2784)));
  /* 1f8174: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f8178: tbz w8, #0, #0x1f81cc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f81cc;
L_1f817c:;
  /* 1f817c: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f8180: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f8184: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8188: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 1f818c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f8190: ldr x0, [x10, #0xad8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(2776))));
  /* 1f8194: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* 1f8198: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f819c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1f81a0: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 1f81a4: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f81a8: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1f81ac: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f81b0: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2064820));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f81b4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f81b8: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1f81bc: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f81c0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f81c4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1f81c8: ret  */
  return;
L_1f81cc:;
  /* 1f81cc: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f81d0: add x8, x8, #0xae0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2784)));
  /* 1f81d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f81d8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f81dc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f81e0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1f81e4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2064872));
  fn2_24b710(c);
  /* 1f81e8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f81ec: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f81f0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f81f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f81f8: cbz w8, #0x1f817c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f817c;
  /* 1f81fc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f8200: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f8204: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1f8208: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2064908));
  fn2_20293c(c);
  /* 1f820c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f8210: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1f8214: add x1, x1, #0xe8e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3726)));
  /* 1f8218: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f821c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f8220: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2064932));
  fn2_1b8fd4(c);
  /* 1f8224: mov w2, #0x7e2c */
  ARC_W_W(c, 2, UINT64_C(32300));
  /* 1f8228: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1f822c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1f8230: movk w2, #0x76d4, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1993605120)));
  /* 1f8234: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2064952));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1f8238: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f823c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f8240: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2064964));
  fn2_1d2d24(c);
  /* 1f8244: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8248: add x0, x0, #0xad8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2776)));
  /* 1f824c: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1f8250: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2064980));
  fn2_24b720(c);
  /* 1f8254: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f8258: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f825c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f8260: b #0x1f817c */
  goto L_1f817c;
}

void fn2_1fa2b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077929136));
  /* 1fa2b0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1fa2b4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fa2b8: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1fa2bc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fa2c0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fa2c4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1fa2c8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa2cc: add x8, x8, #0xce0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3296)));
  /* 1fa2d0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fa2d4: tbz w8, #0, #0x1fa328 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fa328;
L_1fa2d8:;
  /* 1fa2d8: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fa2dc: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1fa2e0: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa2e4: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 1fa2e8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fa2ec: ldr x0, [x10, #0xcd8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(3288))));
  /* 1fa2f0: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* 1fa2f4: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fa2f8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1fa2fc: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 1fa300: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1fa304: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1fa308: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fa30c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2073360));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1fa310: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fa314: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1fa318: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fa31c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fa320: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1fa324: ret  */
  return;
L_1fa328:;
  /* 1fa328: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa32c: add x8, x8, #0xce0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3296)));
  /* 1fa330: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fa334: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fa338: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1fa33c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1fa340: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2073412));
  fn2_24b710(c);
  /* 1fa344: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1fa348: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fa34c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fa350: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fa354: cbz w8, #0x1fa2d8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fa2d8;
  /* 1fa358: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fa35c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fa360: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1fa364: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2073448));
  fn2_20293c(c);
  /* 1fa368: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fa36c: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 1fa370: add x1, x1, #0xb23 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2851)));
  /* 1fa374: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fa378: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fa37c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2073472));
  fn2_1b8fd4(c);
  /* 1fa380: mov w2, #0xacae */
  ARC_W_W(c, 2, UINT64_C(44206));
  /* 1fa384: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1fa388: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1fa38c: movk w2, #0x785b, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2019229696)));
  /* 1fa390: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2073492));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1fa394: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fa398: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fa39c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2073504));
  fn2_1d2d24(c);
  /* 1fa3a0: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa3a4: add x0, x0, #0xcd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3288)));
  /* 1fa3a8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1fa3ac: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2073520));
  fn2_24b720(c);
  /* 1fa3b0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1fa3b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fa3b8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fa3bc: b #0x1fa2d8 */
  goto L_1fa2d8;
}

void fn2_1fc390(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077937552));
  /* 1fc390: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1fc394: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fc398: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1fc39c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fc3a0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fc3a4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1fc3a8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc3ac: add x8, x8, #0xee0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3808)));
  /* 1fc3b0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fc3b4: tbz w8, #0, #0x1fc400 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fc400;
L_1fc3b8:;
  /* 1fc3b8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fc3bc: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc3c0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fc3c4: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1fc3c8: ldr x8, [x8, #0xed8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3800))));
  /* 1fc3cc: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fc3d0: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1fc3d4: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1fc3d8: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1fc3dc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fc3e0: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1fc3e4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2081768));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1fc3e8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fc3ec: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1fc3f0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fc3f4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fc3f8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1fc3fc: ret  */
  return;
L_1fc400:;
  /* 1fc400: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc404: add x8, x8, #0xee0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3808)));
  /* 1fc408: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fc40c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fc410: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1fc414: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1fc418: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2081820));
  fn2_24b710(c);
  /* 1fc41c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fc420: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1fc424: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fc428: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fc42c: cbz w8, #0x1fc3b8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fc3b8;
  /* 1fc430: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fc434: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fc438: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1fc43c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2081856));
  fn2_20293c(c);
  /* 1fc440: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fc444: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1fc448: add x1, x1, #0x9b3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2483)));
  /* 1fc44c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fc450: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fc454: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2081880));
  fn2_1b8fd4(c);
  /* 1fc458: mov w2, #0xa7a4 */
  ARC_W_W(c, 2, UINT64_C(42916));
  /* 1fc45c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1fc460: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1fc464: movk w2, #0x1799, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(395902976)));
  /* 1fc468: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2081900));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1fc46c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fc470: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fc474: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2081912));
  fn2_1d2d24(c);
  /* 1fc478: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc47c: add x0, x0, #0xed8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3800)));
  /* 1fc480: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1fc484: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2081928));
  fn2_24b720(c);
  /* 1fc488: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fc48c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fc490: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1fc494: b #0x1fc3b8 */
  goto L_1fc3b8;
}

void fn2_1fe57c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077946236));
  /* 1fe57c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1fe580: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fe584: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fe588: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fe58c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1fe590: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fe594: add x8, x8, #0xe0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(224)));
  /* 1fe598: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fe59c: tbz w8, #0, #0x1fe5ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fe5ec;
L_1fe5a0:;
  /* 1fe5a0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fe5a4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fe5a8: add x11, sp, #8 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(8)));
  /* 1fe5ac: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1fe5b0: ldr x8, [x8, #0xd8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(216))));
  /* 1fe5b4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fe5b8: stp x1, x11, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 1fe5bc: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1fe5c0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fe5c4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1fe5c8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fe5cc: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1fe5d0: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 1fe5d4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2090456));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1fe5d8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fe5dc: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fe5e0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fe5e4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1fe5e8: ret  */
  return;
L_1fe5ec:;
  /* 1fe5ec: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fe5f0: add x8, x8, #0xe0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(224)));
  /* 1fe5f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fe5f8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fe5fc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1fe600: str d0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  /* 1fe604: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2090504));
  fn2_24b710(c);
  /* 1fe608: ldr d0, [sp] */
  arc_du_w(c, 0, arc_ld64((c)->sp));
  /* 1fe60c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fe610: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fe614: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fe618: cbz w8, #0x1fe5a0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fe5a0;
  /* 1fe61c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fe620: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fe624: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1fe628: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2090540));
  fn2_20293c(c);
  /* 1fe62c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1fe630: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 1fe634: add x1, x1, #0xb5d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2909)));
  /* 1fe638: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1fe63c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fe640: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2090564));
  fn2_1b8fd4(c);
  /* 1fe644: mov w2, #0x1c87 */
  ARC_W_W(c, 2, UINT64_C(7303));
  /* 1fe648: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1fe64c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1fe650: movk w2, #0x6af4, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1794375680)));
  /* 1fe654: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2090584));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1fe658: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1fe65c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1fe660: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2090596));
  fn2_1d2d24(c);
  /* 1fe664: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fe668: add x0, x0, #0xd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(216)));
  /* 1fe66c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1fe670: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2090612));
  fn2_24b720(c);
  /* 1fe674: ldr d0, [sp] */
  arc_du_w(c, 0, arc_ld64((c)->sp));
  /* 1fe678: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fe67c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fe680: b #0x1fe5a0 */
  goto L_1fe5a0;
}

void fn2_2006c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077954752));
  /* 2006c0: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 2006c4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2006c8: str x25, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 25));
  /* 2006cc: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 2006d0: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2006d4: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2006d8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 2006dc: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2006e0: add x8, x8, #0x2e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(736)));
  /* 2006e4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2006e8: tbz w8, #0, #0x20073c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20073c;
L_2006ec:;
  /* 2006ec: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2006f0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2006f4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2006f8: ldr x8, [x8, #0x2d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(728))));
  /* 2006fc: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 200700: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 200704: stp x3, x4, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 200708: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 20070c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 200710: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 200714: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 200718: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2098972));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20071c: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 200720: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 200724: ldr x25, [sp, #0x30] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(48))));
  /* 200728: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20072c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 200730: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 200734: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 200738: ret  */
  return;
L_20073c:;
  /* 20073c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 200740: add x8, x8, #0x2e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(736)));
  /* 200744: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 200748: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20074c: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 200750: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 200754: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 200758: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 20075c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2099040));
  fn2_24b710(c);
  /* 200760: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 200764: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 200768: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 20076c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 200770: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 200774: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 200778: cbz w8, #0x2006ec */
  if ((ARC_W_R(c, 8)) == 0) goto L_2006ec;
  /* 20077c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 200780: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 200784: ldr x25, [x8] */
  ARC_X_W(c, 25, arc_ld64(ARC_X_R(c, 8)));
  /* 200788: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2099084));
  fn2_20293c(c);
  /* 20078c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 200790: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 200794: add x1, x1, #0xc9f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3231)));
  /* 200798: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 20079c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2007a0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2099108));
  fn2_1b8fd4(c);
  /* 2007a4: mov w2, #0x5bca */
  ARC_W_W(c, 2, UINT64_C(23498));
  /* 2007a8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 2007ac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 2007b0: movk w2, #0xf54e, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4115529728)));
  /* 2007b4: blr x25 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2099128));
  arc_dispatch(c, ARC_X_R(c, 25));
  /* 2007b8: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 2007bc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 2007c0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2099140));
  fn2_1d2d24(c);
  /* 2007c4: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2007c8: add x0, x0, #0x2d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(728)));
  /* 2007cc: str x24, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* 2007d0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2099156));
  fn2_24b720(c);
  /* 2007d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2007d8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 2007dc: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 2007e0: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 2007e4: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 2007e8: b #0x2006ec */
  goto L_2006ec;
}

void fn2_202774(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077963124));
  /* 202774: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 202778: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 20277c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 202780: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 202784: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 202788: add x8, x8, #0x4e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1248)));
  /* 20278c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 202790: tbz w8, #0, #0x2027d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2027d8;
L_202794:;
  /* 202794: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 202798: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20279c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2027a0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2027a4: ldr x8, [x8, #0x4d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1240))));
  /* 2027a8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2027ac: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2027b0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2027b4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2027b8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107324));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2027bc: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2027c0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 2027c4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 2027c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2027cc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2027d0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2027d4: ret  */
  return;
L_2027d8:;
  /* 2027d8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2027dc: add x8, x8, #0x4e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1248)));
  /* 2027e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2027e4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2027e8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107372));
  fn2_24b710(c);
  /* 2027ec: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2027f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2027f4: cbz w8, #0x202794 */
  if ((ARC_W_R(c, 8)) == 0) goto L_202794;
  /* 2027f8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2027fc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 202800: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 202804: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107400));
  fn2_20293c(c);
  /* 202808: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20280c: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 202810: add x1, x1, #0x670 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1648)));
  /* 202814: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 202818: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20281c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107424));
  fn2_1b8fd4(c);
  /* 202820: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 202824: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 202828: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20282c: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 202830: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107444));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 202834: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 202838: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20283c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107456));
  fn2_1d2d24(c);
  /* 202840: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 202844: add x0, x0, #0x4d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1240)));
  /* 202848: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20284c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107472));
  fn2_24b720(c);
  /* 202850: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202854: b #0x202794 */
  goto L_202794;
}

void fn2_203c18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077968408));
  /* 203c18: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 203c1c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 203c20: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 203c24: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 203c28: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 203c2c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 203c30: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 203c34: add x8, x8, #0x5d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1488)));
  /* 203c38: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 203c3c: tbz w8, #0, #0x203c9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_203c9c;
L_203c40:;
  /* 203c40: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 203c44: ldr x10, [x2] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 2)));
  /* 203c48: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 203c4c: ldr x8, [x8, #0x5c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1480))));
  /* 203c50: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 203c54: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 203c58: add x12, x10, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* 203c5c: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* 203c60: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 203c64: csel x10, xzr, x12, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 12)));
  /* 203c68: ldr x11, [x11] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 11)));
  /* 203c6c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 203c70: stp x1, x10, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 203c74: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 203c78: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 203c7c: blr x11 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2112640));
  arc_dispatch(c, ARC_X_R(c, 11));
  /* 203c80: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 203c84: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 203c88: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 203c8c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 203c90: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 203c94: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 203c98: ret  */
  return;
L_203c9c:;
  /* 203c9c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 203ca0: add x8, x8, #0x5d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1488)));
  /* 203ca4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 203ca8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 203cac: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 203cb0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 203cb4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2112696));
  fn2_24b710(c);
  /* 203cb8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 203cbc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 203cc0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 203cc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 203cc8: cbz w8, #0x203c40 */
  if ((ARC_W_R(c, 8)) == 0) goto L_203c40;
  /* 203ccc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 203cd0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 203cd4: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 203cd8: bl #0x2042d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2112732));
  fn2_2042d8(c);
  /* 203cdc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 203ce0: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 203ce4: add x1, x1, #0xe0a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3594)));
  /* 203ce8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 203cec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 203cf0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2112756));
  fn2_1b8fd4(c);
  /* 203cf4: mov w2, #0xce5c */
  ARC_W_W(c, 2, UINT64_C(52828));
  /* 203cf8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 203cfc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 203d00: movk w2, #0x7531, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1966145536)));
  /* 203d04: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2112776));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 203d08: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 203d0c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 203d10: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2112788));
  fn2_1d2d24(c);
  /* 203d14: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 203d18: add x0, x0, #0x5c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1480)));
  /* 203d1c: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 203d20: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2112804));
  fn2_24b720(c);
  /* 203d24: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 203d28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 203d2c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 203d30: b #0x203c40 */
  goto L_203c40;
}

void fn2_205bf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077976560));
  /* 205bf0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 205bf4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 205bf8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 205bfc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 205c00: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205c04: add x8, x8, #0x7a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1952)));
  /* 205c08: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 205c0c: tbz w8, #0, #0x205c54 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_205c54;
L_205c10:;
  /* 205c10: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 205c14: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205c18: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 205c1c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 205c20: ldr x8, [x8, #0x798] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1944))));
  /* 205c24: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 205c28: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 205c2c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 205c30: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 205c34: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2120760));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 205c38: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 205c3c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 205c40: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 205c44: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 205c48: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 205c4c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 205c50: ret  */
  return;
L_205c54:;
  /* 205c54: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205c58: add x8, x8, #0x7a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1952)));
  /* 205c5c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 205c60: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 205c64: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2120808));
  fn2_24b710(c);
  /* 205c68: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 205c6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 205c70: cbz w8, #0x205c10 */
  if ((ARC_W_R(c, 8)) == 0) goto L_205c10;
  /* 205c74: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 205c78: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 205c7c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 205c80: bl #0x205cd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2120836));
  fn2_205cd4(c);
  /* 205c84: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 205c88: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 205c8c: add x1, x1, #0x4b4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1204)));
  /* 205c90: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 205c94: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 205c98: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2120860));
  fn2_1b8fd4(c);
  /* 205c9c: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 205ca0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 205ca4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 205ca8: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 205cac: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2120880));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 205cb0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 205cb4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 205cb8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2120892));
  fn2_1d2d24(c);
  /* 205cbc: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205cc0: add x0, x0, #0x798 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1944)));
  /* 205cc4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 205cc8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2120908));
  fn2_24b720(c);
  /* 205ccc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 205cd0: b #0x205c10 */
  goto L_205c10;
}

void fn2_2078fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077983996));
  /* 2078fc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 207900: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 207904: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 207908: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20790c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 207910: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207914: add x8, x8, #0x988 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2440)));
  /* 207918: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20791c: tbz w8, #0, #0x207964 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_207964;
L_207920:;
  /* 207920: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 207924: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207928: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 20792c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 207930: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 207934: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 207938: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 20793c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 207940: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 207944: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 207948: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 20794c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2128208));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 207950: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 207954: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 207958: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20795c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 207960: ret  */
  return;
L_207964:;
  /* 207964: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207968: add x8, x8, #0x988 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2440)));
  /* 20796c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 207970: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 207974: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 207978: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2128252));
  fn2_24b710(c);
  /* 20797c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 207980: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 207984: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 207988: cbz w8, #0x207920 */
  if ((ARC_W_R(c, 8)) == 0) goto L_207920;
  /* 20798c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 207990: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 207994: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 207998: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2128284));
  fn2_2086f8(c);
  /* 20799c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2079a0: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 2079a4: add x1, x1, #0xe3a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3642)));
  /* 2079a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2079ac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2079b0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2128308));
  fn2_1b8fd4(c);
  /* 2079b4: mov w2, #0x126e */
  ARC_W_W(c, 2, UINT64_C(4718));
  /* 2079b8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2079bc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2079c0: movk w2, #0xc4fb, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3304783872)));
  /* 2079c4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2128328));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2079c8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2079cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2079d0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2128340));
  fn2_1d2d24(c);
  /* 2079d4: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2079d8: add x0, x0, #0x980 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2432)));
  /* 2079dc: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2079e0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2128356));
  fn2_24b720(c);
  /* 2079e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2079e8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2079ec: b #0x207920 */
  goto L_207920;
}

void fn2_2090e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077990120));
  /* 2090e8: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 2090ec: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2090f0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2090f4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2090f8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2090fc: add x8, x8, #0xac8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2760)));
  /* 209100: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 209104: tbz w8, #0, #0x209140 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_209140;
L_209108:;
  /* 209108: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20910c: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209110: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 209114: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 209118: ldr x0, [x9, #0xac0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2752))));
  /* 20911c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 209120: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 209124: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 209128: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2134316));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 20912c: ldr w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(8))));
  /* 209130: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 209134: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 209138: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 20913c: ret  */
  return;
L_209140:;
  /* 209140: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209144: add x0, x0, #0xac8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2760)));
  /* 209148: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2134348));
  fn2_24b710(c);
  /* 20914c: cbz w0, #0x209108 */
  if ((ARC_W_R(c, 0)) == 0) goto L_209108;
  /* 209150: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 209154: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 209158: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* 20915c: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2134368));
  fn2_20c8c4(c);
  /* 209160: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 209164: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 209168: add x1, x1, #0xd8c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3468)));
  /* 20916c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 209170: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 209174: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2134392));
  fn2_1b8fd4(c);
  /* 209178: mov w2, #0x3e29 */
  ARC_W_W(c, 2, UINT64_C(15913));
  /* 20917c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 209180: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 209184: movk w2, #0x9e9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(166264832)));
  /* 209188: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2134412));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 20918c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 209190: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 209194: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2134424));
  fn2_1d2d24(c);
  /* 209198: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20919c: add x0, x0, #0xac0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2752)));
  /* 2091a0: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 2091a4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2134440));
  fn2_24b720(c);
  /* 2091a8: b #0x209108 */
  goto L_209108;
}

void fn2_20af38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077997880));
  /* 20af38: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 20af3c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20af40: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20af44: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20af48: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 20af4c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20af50: add x8, x8, #0xcc8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3272)));
  /* 20af54: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20af58: tbz w8, #0, #0x20afb0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20afb0;
L_20af5c:;
  /* 20af5c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20af60: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20af64: and x11, x1, #0xff */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) & UINT64_C(255)));
  /* 20af68: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 20af6c: ldr x8, [x9, #0xcc0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(3264))));
  /* 20af70: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20af74: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 20af78: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 20af7c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 20af80: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 20af84: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20af88: stp x11, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 20af8c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2142096));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 20af90: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 20af94: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 20af98: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 20af9c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20afa0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20afa4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20afa8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 20afac: ret  */
  return;
L_20afb0:;
  /* 20afb0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20afb4: add x8, x8, #0xcc8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3272)));
  /* 20afb8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20afbc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20afc0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 20afc4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2142152));
  fn2_24b710(c);
  /* 20afc8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20afcc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20afd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20afd4: cbz w8, #0x20af5c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20af5c;
  /* 20afd8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20afdc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20afe0: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20afe4: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2142184));
  fn2_20c8c4(c);
  /* 20afe8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20afec: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 20aff0: add x1, x1, #0x62b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1579)));
  /* 20aff4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 20aff8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20affc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2142208));
  fn2_1b8fd4(c);
  /* 20b000: mov w2, #0xede0 */
  ARC_W_W(c, 2, UINT64_C(60896));
  /* 20b004: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 20b008: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20b00c: movk w2, #0xb6d9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3067674624)));
  /* 20b010: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2142228));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20b014: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20b018: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 20b01c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2142240));
  fn2_1d2d24(c);
  /* 20b020: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20b024: add x0, x0, #0xcc0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3264)));
  /* 20b028: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 20b02c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2142256));
  fn2_24b720(c);
  /* 20b030: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20b034: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20b038: b #0x20af5c */
  goto L_20af5c;
}

void fn2_20ce7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078005884));
  /* 20ce7c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20ce80: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20ce84: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20ce88: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20ce8c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20ce90: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20ce94: add x8, x8, #0xeb8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3768)));
  /* 20ce98: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20ce9c: tbz w8, #0, #0x20ceec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20ceec;
L_20cea0:;
  /* 20cea0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20cea4: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 20cea8: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20ceac: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 20ceb0: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 20ceb4: ldr x8, [x9, #0xeb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(3760))));
  /* 20ceb8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20cebc: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 20cec0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 20cec4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 20cec8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20cecc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 20ced0: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 20ced4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2150104));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 20ced8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20cedc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20cee0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20cee4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20cee8: ret  */
  return;
L_20ceec:;
  /* 20ceec: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20cef0: add x8, x8, #0xeb8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3768)));
  /* 20cef4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20cef8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20cefc: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 20cf00: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2150148));
  fn2_24b710(c);
  /* 20cf04: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 20cf08: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20cf0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20cf10: cbz w8, #0x20cea0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_20cea0;
  /* 20cf14: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20cf18: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20cf1c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20cf20: bl #0x20df5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2150180));
  fn2_20df5c(c);
  /* 20cf24: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20cf28: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 20cf2c: add x1, x1, #0x276 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(630)));
  /* 20cf30: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20cf34: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20cf38: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2150204));
  fn2_1b8fd4(c);
  /* 20cf3c: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 20cf40: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20cf44: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20cf48: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 20cf4c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2150224));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20cf50: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20cf54: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20cf58: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2150236));
  fn2_1d2d24(c);
  /* 20cf5c: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20cf60: add x0, x0, #0xeb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3760)));
  /* 20cf64: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 20cf68: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2150252));
  fn2_24b720(c);
  /* 20cf6c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 20cf70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20cf74: b #0x20cea0 */
  goto L_20cea0;
}

void fn2_20ec8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078013580));
  /* 20ec8c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20ec90: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20ec94: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20ec98: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20ec9c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20eca0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20eca4: add x8, x8, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(112)));
  /* 20eca8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20ecac: tbz w8, #0, #0x20ecf8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20ecf8;
L_20ecb0:;
  /* 20ecb0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20ecb4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20ecb8: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 20ecbc: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 20ecc0: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 20ecc4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20ecc8: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 20eccc: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 20ecd0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 20ecd4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 20ecd8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20ecdc: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 20ece0: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2157796));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 20ece4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20ece8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20ecec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20ecf0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20ecf4: ret  */
  return;
L_20ecf8:;
  /* 20ecf8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20ecfc: add x8, x8, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(112)));
  /* 20ed00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20ed04: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20ed08: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 20ed0c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2157840));
  fn2_24b710(c);
  /* 20ed10: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20ed14: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20ed18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20ed1c: cbz w8, #0x20ecb0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_20ecb0;
  /* 20ed20: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20ed24: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20ed28: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20ed2c: bl #0x20f054 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2157872));
  fn2_20f054(c);
  /* 20ed30: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20ed34: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 20ed38: add x1, x1, #0x994 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2452)));
  /* 20ed3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20ed40: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20ed44: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2157896));
  fn2_1b8fd4(c);
  /* 20ed48: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 20ed4c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20ed50: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20ed54: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 20ed58: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2157916));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20ed5c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20ed60: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20ed64: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2157928));
  fn2_1d2d24(c);
  /* 20ed68: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20ed6c: add x0, x0, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(104)));
  /* 20ed70: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 20ed74: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2157944));
  fn2_24b720(c);
  /* 20ed78: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20ed7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20ed80: b #0x20ecb0 */
  goto L_20ecb0;
}

void fn2_2106ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078020332));
  /* 2106ec: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2106f0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2106f4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2106f8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2106fc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 210700: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210704: add x9, x9, #0x1c8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(456)));
  /* 210708: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21070c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 210710: tbz w9, #0, #0x210764 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_210764;
L_210714:;
  /* 210714: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 210718: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21071c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 210720: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 210724: ldr x8, [x8, #0x1c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(448))));
  /* 210728: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21072c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 210730: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 210734: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 210738: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21073c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2164544));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 210740: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 210744: cbz x0, #0x21074c */
  if ((ARC_X_R(c, 0)) == 0) goto L_21074c;
  /* 210748: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2164556));
  fn2_1b62dc(c);
L_21074c:;
  /* 21074c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 210750: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 210754: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 210758: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21075c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 210760: ret  */
  return;
L_210764:;
  /* 210764: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210768: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 21076c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 210770: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 210774: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2164600));
  fn2_24b710(c);
  /* 210778: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21077c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 210780: cbz w8, #0x210714 */
  if ((ARC_W_R(c, 8)) == 0) goto L_210714;
  /* 210784: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 210788: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21078c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 210790: bl #0x211364 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2164628));
  fn2_211364(c);
  /* 210794: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 210798: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 21079c: add x1, x1, #0xc8d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3213)));
  /* 2107a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2107a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2107a8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2164652));
  fn2_1b8fd4(c);
  /* 2107ac: mov w2, #0xa619 */
  ARC_W_W(c, 2, UINT64_C(42521));
  /* 2107b0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2107b4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2107b8: movk w2, #0xc025, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3223650304)));
  /* 2107bc: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2164672));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2107c0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2107c4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2107c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2164684));
  fn2_1d2d24(c);
  /* 2107cc: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2107d0: add x0, x0, #0x1c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(448)));
  /* 2107d4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2107d8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2164700));
  fn2_24b720(c);
  /* 2107dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2107e0: b #0x210714 */
  goto L_210714;
}

void fn2_2123e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078027744));
  /* 2123e0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 2123e4: ret  */
  return;
}

void fn2_212cf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078030064));
  /* 212cf0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 212cf4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 212cf8: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 212cfc: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 212d00: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 212d04: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 212d08: add x8, x8, #0x468 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1128)));
  /* 212d0c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 212d10: tbz w8, #0, #0x212d64 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_212d64;
L_212d14:;
  /* 212d14: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 212d18: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 212d1c: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 212d20: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 212d24: strb w8, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 8));
  /* 212d28: ldr x8, [x9, #0x460] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1120))));
  /* 212d2c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 212d30: add x9, sp, #0xc */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(12)));
  /* 212d34: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 212d38: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 212d3c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 212d40: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 212d44: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 212d48: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2174284));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 212d4c: ldur w0, [x29, #-8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 212d50: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 212d54: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 212d58: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 212d5c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 212d60: ret  */
  return;
L_212d64:;
  /* 212d64: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 212d68: add x8, x8, #0x468 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1128)));
  /* 212d6c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 212d70: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 212d74: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 212d78: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2174332));
  fn2_24b710(c);
  /* 212d7c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 212d80: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 212d84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 212d88: cbz w8, #0x212d14 */
  if ((ARC_W_R(c, 8)) == 0) goto L_212d14;
  /* 212d8c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 212d90: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 212d94: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 212d98: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2174364));
  fn2_219a98(c);
  /* 212d9c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 212da0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 212da4: add x1, x1, #0x9a4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2468)));
  /* 212da8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 212dac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 212db0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2174388));
  fn2_1b8fd4(c);
  /* 212db4: mov w2, #0x7fb0 */
  ARC_W_W(c, 2, UINT64_C(32688));
  /* 212db8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 212dbc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 212dc0: movk w2, #0x354f, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(894369792)));
  /* 212dc4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2174408));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 212dc8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 212dcc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 212dd0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2174420));
  fn2_1d2d24(c);
  /* 212dd4: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 212dd8: add x0, x0, #0x460 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1120)));
  /* 212ddc: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 212de0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2174436));
  fn2_24b720(c);
  /* 212de4: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 212de8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 212dec: b #0x212d14 */
  goto L_212d14;
}

void fn2_214d4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078038348));
  /* 214d4c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 214d50: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 214d54: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 214d58: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 214d5c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 214d60: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 214d64: add x8, x8, #0x668 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1640)));
  /* 214d68: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 214d6c: tbz w8, #0, #0x214db8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_214db8;
L_214d70:;
  /* 214d70: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 214d74: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 214d78: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 214d7c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 214d80: ldr x8, [x8, #0x660] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1632))));
  /* 214d84: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 214d88: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 214d8c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 214d90: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 214d94: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 214d98: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 214d9c: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 214da0: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2182564));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 214da4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 214da8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 214dac: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 214db0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 214db4: ret  */
  return;
L_214db8:;
  /* 214db8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 214dbc: add x8, x8, #0x668 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1640)));
  /* 214dc0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 214dc4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 214dc8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 214dcc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2182608));
  fn2_24b710(c);
  /* 214dd0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 214dd4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 214dd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 214ddc: cbz w8, #0x214d70 */
  if ((ARC_W_R(c, 8)) == 0) goto L_214d70;
  /* 214de0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 214de4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 214de8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 214dec: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2182640));
  fn2_219a98(c);
  /* 214df0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 214df4: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 214df8: add x1, x1, #0xd78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3448)));
  /* 214dfc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 214e00: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 214e04: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2182664));
  fn2_1b8fd4(c);
  /* 214e08: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 214e0c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 214e10: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 214e14: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 214e18: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2182684));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 214e1c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 214e20: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 214e24: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2182696));
  fn2_1d2d24(c);
  /* 214e28: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 214e2c: add x0, x0, #0x660 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1632)));
  /* 214e30: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 214e34: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2182712));
  fn2_24b720(c);
  /* 214e38: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 214e3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 214e40: b #0x214d70 */
  goto L_214d70;
}

void fn2_216b00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078045952));
  /* 216b00: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 216b04: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 216b08: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 216b0c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 216b10: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216b14: add x8, x8, #0x868 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2152)));
  /* 216b18: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 216b1c: tbz w8, #0, #0x216b64 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_216b64;
L_216b20:;
  /* 216b20: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 216b24: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216b28: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 216b2c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 216b30: ldr x8, [x8, #0x860] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2144))));
  /* 216b34: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 216b38: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 216b3c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 216b40: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 216b44: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2190152));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 216b48: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 216b4c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 216b50: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 216b54: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 216b58: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 216b5c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 216b60: ret  */
  return;
L_216b64:;
  /* 216b64: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216b68: add x8, x8, #0x868 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2152)));
  /* 216b6c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 216b70: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 216b74: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2190200));
  fn2_24b710(c);
  /* 216b78: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 216b7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 216b80: cbz w8, #0x216b20 */
  if ((ARC_W_R(c, 8)) == 0) goto L_216b20;
  /* 216b84: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 216b88: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 216b8c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 216b90: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2190228));
  fn2_219a98(c);
  /* 216b94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 216b98: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 216b9c: add x1, x1, #0x154 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(340)));
  /* 216ba0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 216ba4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 216ba8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2190252));
  fn2_1b8fd4(c);
  /* 216bac: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 216bb0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 216bb4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 216bb8: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 216bbc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2190272));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 216bc0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 216bc4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 216bc8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2190284));
  fn2_1d2d24(c);
  /* 216bcc: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216bd0: add x0, x0, #0x860 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2144)));
  /* 216bd4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 216bd8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2190300));
  fn2_24b720(c);
  /* 216bdc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 216be0: b #0x216b20 */
  goto L_216b20;
}

void fn2_2188c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078053576));
  /* 2188c8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 2188cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2188d0: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 2188d4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2188d8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2188dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2188e0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2188e4: add x8, x8, #0xa68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2664)));
  /* 2188e8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2188ec: tbz w8, #0, #0x218938 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_218938;
L_2188f0:;
  /* 2188f0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2188f4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2188f8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 2188fc: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 218900: ldr x8, [x8, #0xa60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2656))));
  /* 218904: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 218908: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 21890c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 218910: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 218914: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 218918: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 21891c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2197792));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 218920: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 218924: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 218928: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21892c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 218930: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 218934: ret  */
  return;
L_218938:;
  /* 218938: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21893c: add x8, x8, #0xa68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2664)));
  /* 218940: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 218944: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 218948: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 21894c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 218950: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2197844));
  fn2_24b710(c);
  /* 218954: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 218958: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 21895c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 218960: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 218964: cbz w8, #0x2188f0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2188f0;
  /* 218968: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21896c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 218970: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 218974: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2197880));
  fn2_219a98(c);
  /* 218978: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21897c: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 218980: add x1, x1, #0xa63 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2659)));
  /* 218984: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 218988: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21898c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2197904));
  fn2_1b8fd4(c);
  /* 218990: mov w2, #0x4714 */
  ARC_W_W(c, 2, UINT64_C(18196));
  /* 218994: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 218998: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 21899c: movk w2, #0xe112, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3776053248)));
  /* 2189a0: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2197924));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 2189a4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2189a8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 2189ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2197936));
  fn2_1d2d24(c);
  /* 2189b0: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2189b4: add x0, x0, #0xa60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2656)));
  /* 2189b8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 2189bc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2197952));
  fn2_24b720(c);
  /* 2189c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2189c4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 2189c8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 2189cc: b #0x2188f0 */
  goto L_2188f0;
}

void fn2_219b2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078058284));
  /* 219b2c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 219b30: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 219b34: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 219b38: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 219b3c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 219b40: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 219b44: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 219b48: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 219b4c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 219b50: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202452));
  fn2_1db4a4(c);
  /* 219b54: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 219b58: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 219b5c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 219b60: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 219b64: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 219b68: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 219b6c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 219b70: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202484));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 219b74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 219b78: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202492));
  fn2_1db4a4(c);
  /* 219b7c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 219b80: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202500));
  fn2_1d2c2c(c);
  /* 219b84: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 219b88: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202508));
  fn2_1bc084(c);
  /* 219b8c: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 219b90: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 219b94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 219b98: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 219b9c: bl #0x1bbf58 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202528));
  fn2_1bbf58(c);
  /* 219ba0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 219ba4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202536));
  fn2_1bc620(c);
  /* 219ba8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 219bac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202544));
  fn2_1d2d24(c);
  /* 219bb0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 219bb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 219bb8: bl #0x1dc378 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202556));
  fn2_1dc378(c);
  /* 219bbc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 219bc0: tbz w0, #0, #0x219bd0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_219bd0;
  /* 219bc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 219bc8: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202572));
  fn2_1dc718(c);
  /* 219bcc: b #0x219bd8 */
  goto L_219bd8;
L_219bd0:;
  /* 219bd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 219bd4: bl #0x1db850 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202584));
  fn2_1db850(c);
L_219bd8:;
  /* 219bd8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 219bdc: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2202592));
  fn2_1db788(c);
  /* 219be0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 219be4: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 219be8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 219bec: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 219bf0: ret  */
  return;
}

void fn2_21b2d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078064336));
  /* 21b2d0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21b2d4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21b2d8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21b2dc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21b2e0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21b2e4: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21b2e8: add x9, x9, #0xc70 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3184)));
  /* 21b2ec: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21b2f0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21b2f4: tbz w9, #0, #0x21b354 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21b354;
L_21b2f8:;
  /* 21b2f8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21b2fc: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21b300: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21b304: ldr x20, [x8, #0xc68] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(3176))));
  /* 21b308: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208524));
  fn2_1ccc74(c);
  /* 21b30c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21b310: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21b314: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21b318: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21b31c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21b320: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21b324: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21b328: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208556));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21b32c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21b330: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21b334: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208568));
  fn2_1ccc88(c);
  /* 21b338: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21b33c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208576));
  fn2_1ccd9c(c);
  /* 21b340: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21b344: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21b348: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21b34c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21b350: ret  */
  return;
L_21b354:;
  /* 21b354: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21b358: add x8, x8, #0xc70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3184)));
  /* 21b35c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21b360: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21b364: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208616));
  fn2_24b710(c);
  /* 21b368: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21b36c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21b370: cbz w8, #0x21b2f8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21b2f8;
  /* 21b374: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21b378: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21b37c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21b380: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208644));
  fn2_21f8e0(c);
  /* 21b384: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21b388: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 21b38c: add x1, x1, #0xd04 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3332)));
  /* 21b390: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21b394: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21b398: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208668));
  fn2_1b8fd4(c);
  /* 21b39c: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 21b3a0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21b3a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21b3a8: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 21b3ac: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208688));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21b3b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21b3b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21b3b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208700));
  fn2_1d2d24(c);
  /* 21b3bc: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21b3c0: add x0, x0, #0xc68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3176)));
  /* 21b3c4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21b3c8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2208716));
  fn2_24b720(c);
  /* 21b3cc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21b3d0: b #0x21b2f8 */
  goto L_21b2f8;
}

void fn2_21d474(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078072948));
  /* 21d474: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 21d478: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21d47c: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 21d480: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21d484: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21d488: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21d48c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21d490: add x8, x8, #0xe70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3696)));
  /* 21d494: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21d498: tbz w8, #0, #0x21d4ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21d4ec;
L_21d49c:;
  /* 21d49c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21d4a0: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 21d4a4: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21d4a8: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 21d4ac: strb w8, [x29, #0x1c] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 8));
  /* 21d4b0: ldr x8, [x9, #0xe68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(3688))));
  /* 21d4b4: add x9, x29, #0x1c */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 21d4b8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21d4bc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 21d4c0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 21d4c4: stp x9, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 21d4c8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 21d4cc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21d4d0: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2217172));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 21d4d4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21d4d8: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 21d4dc: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21d4e0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21d4e4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 21d4e8: ret  */
  return;
L_21d4ec:;
  /* 21d4ec: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21d4f0: add x8, x8, #0xe70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3696)));
  /* 21d4f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21d4f8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21d4fc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 21d500: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 21d504: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2217224));
  fn2_24b710(c);
  /* 21d508: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 21d50c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 21d510: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21d514: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21d518: cbz w8, #0x21d49c */
  if ((ARC_W_R(c, 8)) == 0) goto L_21d49c;
  /* 21d51c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21d520: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21d524: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 21d528: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2217260));
  fn2_21f8e0(c);
  /* 21d52c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21d530: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 21d534: add x1, x1, #0xf35 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3893)));
  /* 21d538: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 21d53c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21d540: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2217284));
  fn2_1b8fd4(c);
  /* 21d544: mov w2, #0xf3ef */
  ARC_W_W(c, 2, UINT64_C(62447));
  /* 21d548: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 21d54c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 21d550: movk w2, #0xc691, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3331391488)));
  /* 21d554: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2217304));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 21d558: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21d55c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 21d560: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2217316));
  fn2_1d2d24(c);
  /* 21d564: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21d568: add x0, x0, #0xe68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3688)));
  /* 21d56c: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 21d570: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2217332));
  fn2_24b720(c);
  /* 21d574: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 21d578: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21d57c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 21d580: b #0x21d49c */
  goto L_21d49c;
}

void fn2_21f3d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078080980));
  /* 21f3d4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21f3d8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 21f3dc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21f3e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 21f3e4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 21f3e8: add x8, x8, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(112)));
  /* 21f3ec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21f3f0: tbz w8, #0, #0x21f438 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21f438;
L_21f3f4:;
  /* 21f3f4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21f3f8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 21f3fc: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21f400: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 21f404: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 21f408: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21f40c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21f410: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 21f414: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21f418: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2225180));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 21f41c: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 21f420: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 21f424: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 21f428: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21f42c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21f430: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21f434: ret  */
  return;
L_21f438:;
  /* 21f438: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 21f43c: add x8, x8, #0x70 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(112)));
  /* 21f440: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21f444: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21f448: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2225228));
  fn2_24b710(c);
  /* 21f44c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21f450: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21f454: cbz w8, #0x21f3f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21f3f4;
  /* 21f458: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21f45c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21f460: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 21f464: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2225256));
  fn2_21f8e0(c);
  /* 21f468: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21f46c: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 21f470: add x1, x1, #0x916 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2326)));
  /* 21f474: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21f478: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21f47c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2225280));
  fn2_1b8fd4(c);
  /* 21f480: mov w2, #0x96d4 */
  ARC_W_W(c, 2, UINT64_C(38612));
  /* 21f484: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21f488: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21f48c: movk w2, #0x8591, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2240872448)));
  /* 21f490: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2225300));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 21f494: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21f498: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21f49c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2225312));
  fn2_1d2d24(c);
  /* 21f4a0: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 21f4a4: add x0, x0, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(104)));
  /* 21f4a8: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21f4ac: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2225328));
  fn2_24b720(c);
  /* 21f4b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21f4b4: b #0x21f3f4 */
  goto L_21f3f4;
}

void fn2_220d30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078087472));
  /* 220d30: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 220d34: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 220d38: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 220d3c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 220d40: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 220d44: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220d48: add x8, x8, #0x1f0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(496)));
  /* 220d4c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 220d50: tbz w8, #0, #0x220da4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_220da4;
L_220d54:;
  /* 220d54: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 220d58: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220d5c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 220d60: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 220d64: ldr x8, [x8, #0x1e8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(488))));
  /* 220d68: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 220d6c: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 220d70: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 220d74: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 220d78: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 220d7c: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 220d80: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2231684));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 220d84: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 220d88: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 220d8c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 220d90: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 220d94: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 220d98: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 220d9c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 220da0: ret  */
  return;
L_220da4:;
  /* 220da4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220da8: add x8, x8, #0x1f0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(496)));
  /* 220dac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 220db0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 220db4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 220db8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2231740));
  fn2_24b710(c);
  /* 220dbc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 220dc0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 220dc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 220dc8: cbz w8, #0x220d54 */
  if ((ARC_W_R(c, 8)) == 0) goto L_220d54;
  /* 220dcc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 220dd0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 220dd4: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 220dd8: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2231772));
  fn2_222b84(c);
  /* 220ddc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 220de0: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 220de4: add x1, x1, #0xcc7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3271)));
  /* 220de8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 220dec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 220df0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2231796));
  fn2_1b8fd4(c);
  /* 220df4: mov w2, #0xecb5 */
  ARC_W_W(c, 2, UINT64_C(60597));
  /* 220df8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 220dfc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 220e00: movk w2, #0x9c26, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2619736064)));
  /* 220e04: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2231816));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 220e08: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 220e0c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 220e10: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2231828));
  fn2_1d2d24(c);
  /* 220e14: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220e18: add x0, x0, #0x1e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(488)));
  /* 220e1c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 220e20: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2231844));
  fn2_24b720(c);
  /* 220e24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 220e28: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 220e2c: b #0x220d54 */
  goto L_220d54;
}

void fn2_222c18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078095384));
  /* 222c18: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 222c1c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 222c20: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 222c24: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 222c28: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 222c2c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 222c30: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 222c34: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 222c38: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 222c3c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 222c40: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239556));
  fn2_1db4a4(c);
  /* 222c44: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 222c48: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 222c4c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 222c50: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 222c54: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* 222c58: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 222c5c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 222c60: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 222c64: str x9, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 9));
  /* 222c68: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239596));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 222c6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 222c70: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239604));
  fn2_1db4a4(c);
  /* 222c74: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 222c78: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239612));
  fn2_1d2c2c(c);
  /* 222c7c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 222c80: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239620));
  fn2_1bc084(c);
  /* 222c84: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 222c88: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 222c8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 222c90: mov w1, #0x1b */
  ARC_W_W(c, 1, UINT64_C(27));
  /* 222c94: bl #0x1bbf58 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239640));
  fn2_1bbf58(c);
  /* 222c98: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 222c9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239648));
  fn2_1bc620(c);
  /* 222ca0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 222ca4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239656));
  fn2_1d2d24(c);
  /* 222ca8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 222cac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 222cb0: bl #0x1dc378 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239668));
  fn2_1dc378(c);
  /* 222cb4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 222cb8: tbz w0, #0, #0x222cc8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_222cc8;
  /* 222cbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 222cc0: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239684));
  fn2_1dc718(c);
  /* 222cc4: b #0x222cd0 */
  goto L_222cd0;
L_222cc8:;
  /* 222cc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 222ccc: bl #0x1db850 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239696));
  fn2_1db850(c);
L_222cd0:;
  /* 222cd0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 222cd4: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2239704));
  fn2_1db788(c);
  /* 222cd8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 222cdc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 222ce0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 222ce4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 222ce8: ret  */
  return;
}

void fn2_2249e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078103008));
  /* 2249e0: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 2249e4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2249e8: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 2249ec: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2249f0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2249f4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 2249f8: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2249fc: add x9, x9, #0x588 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1416)));
  /* 224a00: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 224a04: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 224a08: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 224a0c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 224a10: tbz w9, #0, #0x224a78 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_224a78;
L_224a14:;
  /* 224a14: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 224a18: ldr x23, [x0, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 224a1c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 224a20: ldr x22, [x8, #0x580] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(1408))));
  /* 224a24: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247208));
  fn2_1bc084(c);
  /* 224a28: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 224a2c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 224a30: add x3, sp, #0x18 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(24)));
  /* 224a34: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 224a38: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 224a3c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 224a40: stp x21, x20, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 224a44: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 224a48: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247244));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 224a4c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 224a50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 224a54: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247256));
  fn2_1bc0b8(c);
  /* 224a58: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 224a5c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247264));
  fn2_1bc620(c);
  /* 224a60: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 224a64: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 224a68: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 224a6c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 224a70: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 224a74: ret  */
  return;
L_224a78:;
  /* 224a78: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 224a7c: add x8, x8, #0x588 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1416)));
  /* 224a80: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 224a84: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 224a88: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247308));
  fn2_24b710(c);
  /* 224a8c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 224a90: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 224a94: cbz w8, #0x224a14 */
  if ((ARC_W_R(c, 8)) == 0) goto L_224a14;
  /* 224a98: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 224a9c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 224aa0: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 224aa4: bl #0x225860 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247336));
  fn2_225860(c);
  /* 224aa8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 224aac: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 224ab0: add x1, x1, #0xd79 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3449)));
  /* 224ab4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 224ab8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 224abc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247360));
  fn2_1b8fd4(c);
  /* 224ac0: mov w2, #0x5d93 */
  ARC_W_W(c, 2, UINT64_C(23955));
  /* 224ac4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 224ac8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 224acc: movk w2, #0x9120, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2434793472)));
  /* 224ad0: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247380));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 224ad4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 224ad8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 224adc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247392));
  fn2_1d2d24(c);
  /* 224ae0: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 224ae4: add x0, x0, #0x580 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1408)));
  /* 224ae8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 224aec: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2247408));
  fn2_24b720(c);
  /* 224af0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 224af4: b #0x224a14 */
  goto L_224a14;
}

void fn2_2269e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078111204));
  /* 2269e4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2269e8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2269ec: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2269f0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2269f4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2269f8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2269fc: add x8, x8, #0x748 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1864)));
  /* 226a00: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 226a04: tbz w8, #0, #0x226a4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_226a4c;
L_226a08:;
  /* 226a08: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 226a0c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 226a10: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 226a14: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 226a18: ldr x8, [x8, #0x740] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1856))));
  /* 226a1c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 226a20: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 226a24: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 226a28: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 226a2c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 226a30: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 226a34: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2255416));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 226a38: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 226a3c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 226a40: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 226a44: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 226a48: ret  */
  return;
L_226a4c:;
  /* 226a4c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 226a50: add x8, x8, #0x748 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1864)));
  /* 226a54: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 226a58: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 226a5c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 226a60: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2255460));
  fn2_24b710(c);
  /* 226a64: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 226a68: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 226a6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 226a70: cbz w8, #0x226a08 */
  if ((ARC_W_R(c, 8)) == 0) goto L_226a08;
  /* 226a74: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 226a78: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 226a7c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 226a80: bl #0x227e2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2255492));
  fn2_227e2c(c);
  /* 226a84: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 226a88: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 226a8c: add x1, x1, #0xa4c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2636)));
  /* 226a90: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 226a94: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 226a98: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2255516));
  fn2_1b8fd4(c);
  /* 226a9c: mov w2, #0x3184 */
  ARC_W_W(c, 2, UINT64_C(12676));
  /* 226aa0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 226aa4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 226aa8: movk w2, #0x4fd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(83689472)));
  /* 226aac: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2255536));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 226ab0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 226ab4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 226ab8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2255548));
  fn2_1d2d24(c);
  /* 226abc: nop  */
  /* nop: no architectural effect here */
  /* 226ac0: adr x0, #0x263740 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2504512)));
  /* 226ac4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 226ac8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2255564));
  fn2_24b720(c);
  /* 226acc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 226ad0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 226ad4: b #0x226a08 */
  goto L_226a08;
}

void fn2_2283fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078117884));
  /* 2283fc: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 228400: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 228404: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 228408: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22840c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 228410: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 228414: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 228418: add x9, x9, #0x8d0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2256)));
  /* 22841c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 228420: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 228424: tbz w9, #0, #0x228484 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_228484;
L_228428:;
  /* 228428: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22842c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 228430: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 228434: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 228438: ldr x8, [x8, #0x8c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2248))));
  /* 22843c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 228440: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 228444: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 228448: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 22844c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 228450: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 228454: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 228458: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2262108));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 22845c: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 228460: cbz x0, #0x228468 */
  if ((ARC_X_R(c, 0)) == 0) goto L_228468;
  /* 228464: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2262120));
  fn2_1b62dc(c);
L_228468:;
  /* 228468: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 22846c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 228470: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 228474: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 228478: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22847c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 228480: ret  */
  return;
L_228484:;
  /* 228484: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 228488: add x8, x8, #0x8d0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2256)));
  /* 22848c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 228490: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 228494: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 228498: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2262172));
  fn2_24b710(c);
  /* 22849c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 2284a0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2284a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2284a8: cbz w8, #0x228428 */
  if ((ARC_W_R(c, 8)) == 0) goto L_228428;
  /* 2284ac: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2284b0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2284b4: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 2284b8: bl #0x229110 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2262204));
  fn2_229110(c);
  /* 2284bc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2284c0: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 2284c4: add x1, x1, #0xc6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(198)));
  /* 2284c8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2284cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2284d0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2262228));
  fn2_1b8fd4(c);
  /* 2284d4: mov w2, #0xb7f8 */
  ARC_W_W(c, 2, UINT64_C(47096));
  /* 2284d8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2284dc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 2284e0: movk w2, #0x683d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1748828160)));
  /* 2284e4: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2262248));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 2284e8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2284ec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2284f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2262260));
  fn2_1d2d24(c);
  /* 2284f4: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2284f8: add x0, x0, #0x8c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2248)));
  /* 2284fc: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 228500: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2262276));
  fn2_24b720(c);
  /* 228504: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 228508: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 22850c: b #0x228428 */
  goto L_228428;
}

void fn2_229594(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078122388));
  /* 229594: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 229598: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 22959c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2295a0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2295a4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2295a8: add x8, x8, #0x9e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2528)));
  /* 2295ac: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2295b0: tbz w8, #0, #0x2295f8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2295f8;
L_2295b4:;
  /* 2295b4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2295b8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2295bc: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2295c0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2295c4: ldr x8, [x8, #0x9d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2520))));
  /* 2295c8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2295cc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2295d0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2295d4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2295d8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2266588));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2295dc: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2295e0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 2295e4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 2295e8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2295ec: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2295f0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2295f4: ret  */
  return;
L_2295f8:;
  /* 2295f8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2295fc: add x8, x8, #0x9e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2528)));
  /* 229600: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 229604: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 229608: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2266636));
  fn2_24b710(c);
  /* 22960c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 229610: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 229614: cbz w8, #0x2295b4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2295b4;
  /* 229618: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22961c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 229620: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 229624: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2266664));
  fn2_22c080(c);
  /* 229628: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22962c: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 229630: add x1, x1, #0xe9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(233)));
  /* 229634: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 229638: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22963c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2266688));
  fn2_1b8fd4(c);
  /* 229640: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 229644: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 229648: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22964c: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 229650: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2266708));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 229654: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 229658: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22965c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2266720));
  fn2_1d2d24(c);
  /* 229660: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 229664: add x0, x0, #0x9d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2520)));
  /* 229668: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22966c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2266736));
  fn2_24b720(c);
  /* 229670: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 229674: b #0x2295b4 */
  goto L_2295b4;
}

void fn2_22b4a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078130340));
  /* 22b4a4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 22b4a8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22b4ac: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22b4b0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22b4b4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22b4b8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22b4bc: add x8, x8, #0xbe0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3040)));
  /* 22b4c0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22b4c4: tbz w8, #0, #0x22b518 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22b518;
L_22b4c8:;
  /* 22b4c8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22b4cc: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22b4d0: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 22b4d4: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 22b4d8: ldr x8, [x8, #0xbd8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3032))));
  /* 22b4dc: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22b4e0: stp x1, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 22b4e4: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 22b4e8: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 22b4ec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22b4f0: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 22b4f4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2274552));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 22b4f8: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 22b4fc: cbz x0, #0x22b504 */
  if ((ARC_X_R(c, 0)) == 0) goto L_22b504;
  /* 22b500: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2274564));
  fn2_1b62dc(c);
L_22b504:;
  /* 22b504: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22b508: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22b50c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22b510: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 22b514: ret  */
  return;
L_22b518:;
  /* 22b518: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22b51c: add x8, x8, #0xbe0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3040)));
  /* 22b520: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22b524: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22b528: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 22b52c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2274608));
  fn2_24b710(c);
  /* 22b530: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22b534: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22b538: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22b53c: cbz w8, #0x22b4c8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22b4c8;
  /* 22b540: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22b544: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22b548: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 22b54c: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2274640));
  fn2_22c080(c);
  /* 22b550: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22b554: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 22b558: add x1, x1, #0x114 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(276)));
  /* 22b55c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22b560: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22b564: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2274664));
  fn2_1b8fd4(c);
  /* 22b568: mov w2, #0x360f */
  ARC_W_W(c, 2, UINT64_C(13839));
  /* 22b56c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22b570: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22b574: movk w2, #0xf2a7, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4071030784)));
  /* 22b578: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2274684));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 22b57c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22b580: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22b584: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2274696));
  fn2_1d2d24(c);
  /* 22b588: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22b58c: add x0, x0, #0xbd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3032)));
  /* 22b590: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 22b594: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2274712));
  fn2_24b720(c);
  /* 22b598: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22b59c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22b5a0: b #0x22b4c8 */
  goto L_22b4c8;
}

void fn2_22cfd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078137300));
  /* 22cfd4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 22cfd8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22cfdc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22cfe0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22cfe4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22cfe8: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22cfec: add x9, x9, #0xd50 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3408)));
  /* 22cff0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 22cff4: tbz w9, #0, #0x22d020 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22d020;
L_22cff8:;
  /* 22cff8: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22cffc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22d000: b #0x24b6b0 */
  fn2_24b6b0(c); return;
  /* 22d004: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 22d008: bl #0x2029d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281484));
  fn2_2029d0(c);
  /* 22d00c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22d010: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22d014: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22d018: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 22d01c: ret  */
  return;
L_22d020:;
  /* 22d020: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d024: add x9, x9, #0xd50 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3408)));
  /* 22d028: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22d02c: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 22d030: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 22d034: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281528));
  fn2_24b710(c);
  /* 22d038: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 22d03c: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* 22d040: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22d044: cbz w9, #0x22cff8 */
  if ((ARC_W_R(c, 9)) == 0) goto L_22cff8;
  /* 22d048: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22d04c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22d050: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 22d054: bl #0x22d668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281560));
  fn2_22d668(c);
  /* 22d058: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22d05c: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 22d060: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 22d064: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22d068: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22d06c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281584));
  fn2_1b8fd4(c);
  /* 22d070: mov w2, #0xd799 */
  ARC_W_W(c, 2, UINT64_C(55193));
  /* 22d074: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22d078: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22d07c: movk w2, #0xadc8, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2915565568)));
  /* 22d080: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281604));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 22d084: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22d088: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22d08c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281616));
  fn2_1d2d24(c);
  /* 22d090: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d094: add x0, x0, #0xd48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3400)));
  /* 22d098: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 22d09c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2281632));
  fn2_24b720(c);
  /* 22d0a0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 22d0a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22d0a8: b #0x22cff8 */
  goto L_22cff8;
}

void fn2_22ea08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078144008));
  /* 22ea08: ret  */
  return;
}

void fn2_230840(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078151744));
  /* 230840: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 230844: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 230848: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 23084c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 230850: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 230854: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 230858: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23085c: add x8, x8, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 230860: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 230864: tbz w8, #0, #0x2308d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2308d4;
L_230868:;
  /* 230868: ldr x10, [x1] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 1)));
  /* 23086c: sxtw x8, w2 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 230870: sxtw x9, w3 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 230874: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 230878: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 23087c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 230880: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 230884: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* 230888: add x10, x10, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* 23088c: stp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 230890: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 230894: csel x9, xzr, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* 230898: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 23089c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2308a0: ldr x0, [x8, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 2308a4: stp x9, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 2308a8: ldr x9, [x11] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 11)));
  /* 2308ac: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 2308b0: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
  /* 2308b4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2295992));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2308b8: ldur w0, [x29, #-8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 2308bc: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2308c0: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2308c4: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 2308c8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2308cc: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 2308d0: ret  */
  return;
L_2308d4:;
  /* 2308d4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2308d8: add x8, x8, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 2308dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2308e0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2308e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 2308e8: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 2308ec: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 2308f0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2296052));
  fn2_24b710(c);
  /* 2308f4: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 2308f8: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 2308fc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 230900: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 230904: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 230908: cbz w8, #0x230868 */
  if ((ARC_W_R(c, 8)) == 0) goto L_230868;
  /* 23090c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 230910: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 230914: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 230918: bl #0x230da0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2296092));
  fn2_230da0(c);
  /* 23091c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 230920: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 230924: add x1, x1, #0x735 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1845)));
  /* 230928: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 23092c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 230930: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2296116));
  fn2_1b8fd4(c);
  /* 230934: mov w2, #0xe336 */
  ARC_W_W(c, 2, UINT64_C(58166));
  /* 230938: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 23093c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 230940: movk w2, #0xf31f, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4078895104)));
  /* 230944: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2296136));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 230948: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 23094c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 230950: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2296148));
  fn2_1d2d24(c);
  /* 230954: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 230958: add x0, x0, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(96)));
  /* 23095c: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 230960: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2296164));
  fn2_24b720(c);
  /* 230964: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 230968: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 23096c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 230970: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 230974: b #0x230868 */
  goto L_230868;
}

void fn2_23230c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078158604));
  /* 23230c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 232310: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 232314: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 232318: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23231c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 232320: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232324: add x9, x9, #0x228 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(552)));
  /* 232328: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 23232c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 232330: tbz w9, #0, #0x232390 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_232390;
L_232334:;
  /* 232334: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232338: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23233c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 232340: ldr x20, [x8, #0x220] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(544))));
  /* 232344: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302792));
  fn2_1ccc74(c);
  /* 232348: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23234c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 232350: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 232354: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 232358: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 23235c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 232360: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 232364: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302824));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 232368: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 23236c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 232370: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302836));
  fn2_1ccc88(c);
  /* 232374: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 232378: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302844));
  fn2_1ccd9c(c);
  /* 23237c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 232380: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 232384: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 232388: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 23238c: ret  */
  return;
L_232390:;
  /* 232390: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232394: add x8, x8, #0x228 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(552)));
  /* 232398: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23239c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2323a0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302884));
  fn2_24b710(c);
  /* 2323a4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2323a8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2323ac: cbz w8, #0x232334 */
  if ((ARC_W_R(c, 8)) == 0) goto L_232334;
  /* 2323b0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2323b4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2323b8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2323bc: bl #0x233714 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302912));
  fn2_233714(c);
  /* 2323c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2323c4: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 2323c8: add x1, x1, #0xcde */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3294)));
  /* 2323cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2323d0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2323d4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302936));
  fn2_1b8fd4(c);
  /* 2323d8: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 2323dc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2323e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2323e4: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 2323e8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302956));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2323ec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2323f0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2323f4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302968));
  fn2_1d2d24(c);
  /* 2323f8: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2323fc: add x0, x0, #0x220 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(544)));
  /* 232400: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 232404: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2302984));
  fn2_24b720(c);
  /* 232408: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 23240c: b #0x232334 */
  goto L_232334;
}

void fn2_233d20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078165280));
  /* 233d20: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 233d24: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 233d28: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 233d2c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 233d30: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 233d34: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 233d38: add x8, x8, #0x438 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1080)));
  /* 233d3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 233d40: tbz w8, #0, #0x233d8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_233d8c;
L_233d44:;
  /* 233d44: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 233d48: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 233d4c: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 233d50: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 233d54: ldr x8, [x8, #0x430] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1072))));
  /* 233d58: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 233d5c: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 233d60: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 233d64: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 233d68: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 233d6c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 233d70: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 233d74: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2309496));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 233d78: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 233d7c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 233d80: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 233d84: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 233d88: ret  */
  return;
L_233d8c:;
  /* 233d8c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 233d90: add x8, x8, #0x438 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1080)));
  /* 233d94: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 233d98: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 233d9c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 233da0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2309540));
  fn2_24b710(c);
  /* 233da4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 233da8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 233dac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 233db0: cbz w8, #0x233d44 */
  if ((ARC_W_R(c, 8)) == 0) goto L_233d44;
  /* 233db4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 233db8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 233dbc: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 233dc0: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2309572));
  fn2_23b340(c);
  /* 233dc4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 233dc8: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 233dcc: add x1, x1, #0x187 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(391)));
  /* 233dd0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 233dd4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 233dd8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2309596));
  fn2_1b8fd4(c);
  /* 233ddc: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 233de0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 233de4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 233de8: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 233dec: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2309616));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 233df0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 233df4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 233df8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2309628));
  fn2_1d2d24(c);
  /* 233dfc: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 233e00: add x0, x0, #0x430 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1072)));
  /* 233e04: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 233e08: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2309644));
  fn2_24b720(c);
  /* 233e0c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 233e10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 233e14: b #0x233d44 */
  goto L_233d44;
}

void fn2_235a68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078172776));
  /* 235a68: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 235a6c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 235a70: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 235a74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 235a78: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235a7c: add x8, x8, #0x638 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1592)));
  /* 235a80: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 235a84: tbz w8, #0, #0x235acc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_235acc;
L_235a88:;
  /* 235a88: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 235a8c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235a90: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 235a94: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 235a98: ldr x8, [x8, #0x630] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1584))));
  /* 235a9c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 235aa0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 235aa4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 235aa8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 235aac: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2316976));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 235ab0: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 235ab4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 235ab8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 235abc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 235ac0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 235ac4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 235ac8: ret  */
  return;
L_235acc:;
  /* 235acc: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235ad0: add x8, x8, #0x638 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1592)));
  /* 235ad4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 235ad8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 235adc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2317024));
  fn2_24b710(c);
  /* 235ae0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 235ae4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 235ae8: cbz w8, #0x235a88 */
  if ((ARC_W_R(c, 8)) == 0) goto L_235a88;
  /* 235aec: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 235af0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 235af4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 235af8: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2317052));
  fn2_23b340(c);
  /* 235afc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 235b00: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 235b04: add x1, x1, #0x36c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(876)));
  /* 235b08: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 235b0c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 235b10: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2317076));
  fn2_1b8fd4(c);
  /* 235b14: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 235b18: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 235b1c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 235b20: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 235b24: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2317096));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 235b28: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 235b2c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 235b30: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2317108));
  fn2_1d2d24(c);
  /* 235b34: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235b38: add x0, x0, #0x630 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1584)));
  /* 235b3c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 235b40: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2317124));
  fn2_24b720(c);
  /* 235b44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 235b48: b #0x235a88 */
  goto L_235a88;
}

void fn2_237814(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078180372));
  /* 237814: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 237818: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 23781c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 237820: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 237824: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237828: add x8, x8, #0x838 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2104)));
  /* 23782c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 237830: tbz w8, #0, #0x23786c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23786c;
L_237834:;
  /* 237834: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 237838: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23783c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 237840: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 237844: ldr x8, [x8, #0x830] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2096))));
  /* 237848: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23784c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 237850: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 237854: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 237858: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2324572));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23785c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 237860: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 237864: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 237868: ret  */
  return;
L_23786c:;
  /* 23786c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237870: add x8, x8, #0x838 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2104)));
  /* 237874: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 237878: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23787c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2324608));
  fn2_24b710(c);
  /* 237880: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 237884: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 237888: cbz w8, #0x237834 */
  if ((ARC_W_R(c, 8)) == 0) goto L_237834;
  /* 23788c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 237890: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 237894: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 237898: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2324636));
  fn2_23b340(c);
  /* 23789c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2378a0: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 2378a4: add x1, x1, #0xfd1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4049)));
  /* 2378a8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2378ac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2378b0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2324660));
  fn2_1b8fd4(c);
  /* 2378b4: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 2378b8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2378bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2378c0: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 2378c4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2324680));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2378c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2378cc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2378d0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2324692));
  fn2_1d2d24(c);
  /* 2378d4: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2378d8: add x0, x0, #0x830 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2096)));
  /* 2378dc: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2378e0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2324708));
  fn2_24b720(c);
  /* 2378e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2378e8: b #0x237834 */
  goto L_237834;
}

void fn2_2398f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078188788));
  /* 2398f4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2398f8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2398fc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 239900: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 239904: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239908: add x8, x8, #0xa38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2616)));
  /* 23990c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 239910: tbz w8, #0, #0x239954 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_239954;
L_239914:;
  /* 239914: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 239918: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23991c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 239920: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 239924: ldr x8, [x8, #0xa30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2608))));
  /* 239928: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23992c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 239930: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 239934: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 239938: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2332988));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23993c: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 239940: fcvt s0, d0 */
  arc_s_w(c, 0, (float)(ARC_D_R(c, 0)));
  /* 239944: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 239948: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23994c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 239950: ret  */
  return;
L_239954:;
  /* 239954: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239958: add x8, x8, #0xa38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2616)));
  /* 23995c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 239960: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 239964: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2333032));
  fn2_24b710(c);
  /* 239968: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23996c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 239970: cbz w8, #0x239914 */
  if ((ARC_W_R(c, 8)) == 0) goto L_239914;
  /* 239974: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 239978: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23997c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 239980: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2333060));
  fn2_23b340(c);
  /* 239984: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 239988: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 23998c: add x1, x1, #0x71b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1819)));
  /* 239990: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 239994: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 239998: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2333084));
  fn2_1b8fd4(c);
  /* 23999c: mov w2, #0xe66e */
  ARC_W_W(c, 2, UINT64_C(58990));
  /* 2399a0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2399a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2399a8: movk w2, #0x67c0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1740636160)));
  /* 2399ac: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2333104));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2399b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2399b4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2399b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2333116));
  fn2_1d2d24(c);
  /* 2399bc: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2399c0: add x0, x0, #0xa30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2608)));
  /* 2399c4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2399c8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2333132));
  fn2_24b720(c);
  /* 2399cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2399d0: b #0x239914 */
  goto L_239914;
}

void fn2_23b3d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078195668));
  /* 23b3d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23b3d8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 23b3dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23b3e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23b3e4: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 23b3e8: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 23b3ec: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 23b3f0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 23b3f4: cbz x0, #0x23b424 */
  if ((ARC_X_R(c, 0)) == 0) goto L_23b424;
L_23b3f8:;
  /* 23b3f8: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 23b3fc: cbz x1, #0x23b414 */
  if ((ARC_X_R(c, 1)) == 0) goto L_23b414;
  /* 23b400: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2339844));
  fn2_aeb74(c);
  /* 23b404: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 23b408: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23b40c: cbnz w8, #0x23b3f8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_23b3f8;
  /* 23b410: b #0x23b41c */
  goto L_23b41c;
L_23b414:;
  /* 23b414: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23b418: cbnz w8, #0x23b434 */
  if ((ARC_W_R(c, 8)) != 0) goto L_23b434;
L_23b41c:;
  /* 23b41c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 23b420: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2339876));
  fn2_1b5ce8(c);
L_23b424:;
  /* 23b424: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23b428: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23b42c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23b430: b #0x24b730 */
  fn2_24b730(c); return;
L_23b434:;
  /* 23b434: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 23b438: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 23b43c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 23b440: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 23b444: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 23b448: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 23b44c: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 23b450: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 23b454: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 23b458: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2339932));
  fn2_1b54b0(c);
  /* 23b45c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23b460: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23b464: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23b468: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_23c378(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078199672));
  /* 23c378: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 23c37c: ret  */
  return;
}

void fn2_23dc28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078205992));
  /* 23dc28: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 23dc2c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23dc30: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* 23dc34: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 23dc38: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23dc3c: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23dc40: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 23dc44: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23dc48: add x8, x8, #0xec8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3784)));
  /* 23dc4c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23dc50: tbz w8, #0, #0x23dcb8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23dcb8;
L_23dc54:;
  /* 23dc54: and w8, w4, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 4) & UINT64_C(1)));
  /* 23dc58: stp x1, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 23dc5c: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 23dc60: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 23dc64: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23dc68: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23dc6c: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 23dc70: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23dc74: add x10, x29, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23dc78: ldr x0, [x9, #0xec0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3776))));
  /* 23dc7c: stp x3, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 23dc80: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 23dc84: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 23dc88: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 23dc8c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23dc90: str d0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), (c)->q[0].u64[0]);
  /* 23dc94: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 23dc98: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2350236));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 23dc9c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23dca0: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* 23dca4: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23dca8: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 23dcac: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23dcb0: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 23dcb4: ret  */
  return;
L_23dcb8:;
  /* 23dcb8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23dcbc: add x8, x8, #0xec8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3784)));
  /* 23dcc0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23dcc4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23dcc8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 23dccc: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* 23dcd0: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 23dcd4: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 23dcd8: str s0, [sp] */
  arc_st32((c)->sp, (c)->q[0].u32[0]);
  /* 23dcdc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2350304));
  fn2_24b710(c);
  /* 23dce0: ldr s0, [sp] */
  arc_su_w(c, 0, arc_ld32((c)->sp));
  /* 23dce4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 23dce8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 23dcec: mov w4, w21 */
  ARC_W_W(c, 4, ARC_W_R(c, 21));
  /* 23dcf0: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 23dcf4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23dcf8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23dcfc: cbz w8, #0x23dc54 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23dc54;
  /* 23dd00: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23dd04: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23dd08: ldr x25, [x8] */
  ARC_X_W(c, 25, arc_ld64(ARC_X_R(c, 8)));
  /* 23dd0c: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2350352));
  fn2_242738(c);
  /* 23dd10: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 23dd14: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 23dd18: add x1, x1, #0x738 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1848)));
  /* 23dd1c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 23dd20: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23dd24: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2350376));
  fn2_1b8fd4(c);
  /* 23dd28: mov w2, #0x43f3 */
  ARC_W_W(c, 2, UINT64_C(17395));
  /* 23dd2c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 23dd30: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 23dd34: movk w2, #0x5d1f, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1562312704)));
  /* 23dd38: blr x25 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2350396));
  arc_dispatch(c, ARC_X_R(c, 25));
  /* 23dd3c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 23dd40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 23dd44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2350408));
  fn2_1d2d24(c);
  /* 23dd48: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23dd4c: add x0, x0, #0xec0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3776)));
  /* 23dd50: str x24, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* 23dd54: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2350424));
  fn2_24b720(c);
  /* 23dd58: ldr s0, [sp] */
  arc_su_w(c, 0, arc_ld32((c)->sp));
  /* 23dd5c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 23dd60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23dd64: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 23dd68: mov w4, w21 */
  ARC_W_W(c, 4, ARC_W_R(c, 21));
  /* 23dd6c: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 23dd70: b #0x23dc54 */
  goto L_23dc54;
}

void fn2_2405a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078216608));
  /* 2405a0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 2405a4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2405a8: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2405ac: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2405b0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 2405b4: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2405b8: add x9, x9, #0xc8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(200)));
  /* 2405bc: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 2405c0: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 2405c4: tbz w9, #0, #0x24062c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_24062c;
L_2405c8:;
  /* 2405c8: stur xzr, [sp, #0x14] */
  arc_st64(((c)->sp + INT64_C(20)), ARC_X_R(c, 31));
  /* 2405cc: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2405d0: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2405d4: stur xzr, [sp, #0xc] */
  arc_st64(((c)->sp + INT64_C(12)), ARC_X_R(c, 31));
  /* 2405d8: mov w9, #0x3f800000 */
  ARC_W_W(c, 9, UINT64_C(1065353216));
  /* 2405dc: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 2405e0: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 2405e4: ldr x8, [x8, #0xc0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(192))));
  /* 2405e8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2405ec: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2405f0: str w9, [sp, #8] */
  arc_st32(((c)->sp + INT64_C(8)), ARC_W_R(c, 9));
  /* 2405f4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 2405f8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2405fc: str wzr, [sp, #0x1c] */
  arc_st32(((c)->sp + INT64_C(28)), ARC_W_R(c, 31));
  /* 240600: str w9, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 9));
  /* 240604: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2360840));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 240608: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 24060c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 240610: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 240614: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 240618: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 24061c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 240620: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 240624: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 240628: ret  */
  return;
L_24062c:;
  /* 24062c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240630: add x8, x8, #0xc8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(200)));
  /* 240634: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 240638: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 24063c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2360896));
  fn2_24b710(c);
  /* 240640: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 240644: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 240648: cbz w8, #0x2405c8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2405c8;
  /* 24064c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 240650: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 240654: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 240658: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2360924));
  fn2_242738(c);
  /* 24065c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 240660: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 240664: add x1, x1, #0x25a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(602)));
  /* 240668: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24066c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 240670: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2360948));
  fn2_1b8fd4(c);
  /* 240674: mov w2, #0xa5f7 */
  ARC_W_W(c, 2, UINT64_C(42487));
  /* 240678: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 24067c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 240680: movk w2, #0xe35c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3814457344)));
  /* 240684: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2360968));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 240688: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 24068c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 240690: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2360980));
  fn2_1d2d24(c);
  /* 240694: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240698: add x0, x0, #0xc0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(192)));
  /* 24069c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2406a0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2360996));
  fn2_24b720(c);
  /* 2406a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2406a8: b #0x2405c8 */
  goto L_2405c8;
}

void fn2_242490(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078224528));
  /* 242490: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 242494: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 242498: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 24249c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2424a0: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2424a4: add x8, x8, #0x2c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(712)));
  /* 2424a8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2424ac: tbz w8, #0, #0x2424ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2424ec;
L_2424b0:;
  /* 2424b0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2424b4: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2424b8: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2424bc: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2424c0: ldr x8, [x8, #0x2c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(704))));
  /* 2424c4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2424c8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2424cc: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2424d0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2424d4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2368728));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2424d8: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2424dc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2424e0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2424e4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2424e8: ret  */
  return;
L_2424ec:;
  /* 2424ec: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2424f0: add x8, x8, #0x2c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(712)));
  /* 2424f4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2424f8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2424fc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2368768));
  fn2_24b710(c);
  /* 242500: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 242504: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 242508: cbz w8, #0x2424b0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2424b0;
  /* 24250c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 242510: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 242514: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 242518: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2368796));
  fn2_242738(c);
  /* 24251c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 242520: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 242524: add x1, x1, #0xb6d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2925)));
  /* 242528: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 24252c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 242530: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2368820));
  fn2_1b8fd4(c);
  /* 242534: mov w2, #0xedd */
  ARC_W_W(c, 2, UINT64_C(3805));
  /* 242538: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 24253c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 242540: movk w2, #0xd57e, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3581804544)));
  /* 242544: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2368840));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 242548: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 24254c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 242550: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2368852));
  fn2_1d2d24(c);
  /* 242554: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 242558: add x0, x0, #0x2c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(704)));
  /* 24255c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 242560: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2368868));
  fn2_24b720(c);
  /* 242564: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 242568: b #0x2424b0 */
  goto L_2424b0;
}

void fn2_242f00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078227200));
  /* 242f00: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 242f04: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 242f08: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 242f0c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 242f10: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 242f14: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 242f18: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 242f1c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 242f20: cbz x0, #0x242f50 */
  if ((ARC_X_R(c, 0)) == 0) goto L_242f50;
L_242f24:;
  /* 242f24: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 242f28: cbz x1, #0x242f40 */
  if ((ARC_X_R(c, 1)) == 0) goto L_242f40;
  /* 242f2c: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2371376));
  fn2_aeb74(c);
  /* 242f30: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 242f34: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 242f38: cbnz w8, #0x242f24 */
  if ((ARC_W_R(c, 8)) != 0) goto L_242f24;
  /* 242f3c: b #0x242f48 */
  goto L_242f48;
L_242f40:;
  /* 242f40: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 242f44: cbnz w8, #0x242f60 */
  if ((ARC_W_R(c, 8)) != 0) goto L_242f60;
L_242f48:;
  /* 242f48: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 242f4c: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2371408));
  fn2_1b5ce8(c);
L_242f50:;
  /* 242f50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 242f54: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 242f58: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 242f5c: b #0x24b730 */
  fn2_24b730(c); return;
L_242f60:;
  /* 242f60: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 242f64: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 242f68: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 242f6c: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 242f70: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 242f74: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 242f78: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 242f7c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 242f80: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 242f84: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2371464));
  fn2_1b54b0(c);
  /* 242f88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 242f8c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 242f90: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 242f94: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_24465c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078233180));
  /* 24465c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 244660: ret  */
  return;
}

void fn2_244e34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078235188));
  /* 244e34: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 244e38: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 244e3c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 244e40: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 244e44: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 244e48: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 244e4c: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 244e50: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 244e54: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2379352));
  fn2_1b5d1c(c);
  /* 244e58: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 244e5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 244e60: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2379364));
  fn2_1afdf8(c);
  /* 244e64: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 244e68: add x8, x8, #0xab8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2744)));
  /* 244e6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 244e70: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 244e74: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 244e78: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 244e7c: ret  */
  return;
}

void fn2_246388(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078240648));
  /* 246388: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 24638c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 246390: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 246394: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 246398: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24639c: add x8, x8, #0x5f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1528)));
  /* 2463a0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2463a4: tbz w8, #0, #0x2463e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2463e0;
L_2463a8:;
  /* 2463a8: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2463ac: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 2463b0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2463b4: ldr x8, [x8, #0x5f0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1520))));
  /* 2463b8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 2463bc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 2463c0: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 2463c4: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 2463c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2384844));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 2463cc: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2463d0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2463d4: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 2463d8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2463dc: ret  */
  return;
L_2463e0:;
  /* 2463e0: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2463e4: add x0, x0, #0x5f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1528)));
  /* 2463e8: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 2463ec: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2384880));
  fn2_24b710(c);
  /* 2463f0: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 2463f4: cbz w0, #0x2463a8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_2463a8;
  /* 2463f8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2463fc: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 246400: add x1, x1, #0xb89 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2953)));
  /* 246404: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 246408: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 24640c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 246410: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 246414: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2384920));
  fn2_1b8fd4(c);
  /* 246418: mov w1, #0x90b3 */
  ARC_W_W(c, 1, UINT64_C(37043));
  /* 24641c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 246420: movk w1, #0x7f8e, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2140012544)));
  /* 246424: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2384936));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 246428: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 24642c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 246430: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2384948));
  fn2_1d2d24(c);
  /* 246434: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246438: add x0, x0, #0x5f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1520)));
  /* 24643c: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 246440: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2384964));
  fn2_24b720(c);
  /* 246444: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 246448: b #0x2463a8 */
  goto L_2463a8;
}

void fn2_247ddc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078247388));
  /* 247ddc: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* 247de0: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 247de4: str x19, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), ARC_X_R(c, 19));
  /* 247de8: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* 247dec: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 247df0: add x8, x8, #0x7f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2040)));
  /* 247df4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 247df8: tbz w8, #0, #0x247e6c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_247e6c;
L_247dfc:;
  /* 247dfc: sub x8, x29, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 247e00: sub x9, x29, #0x50 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 247e04: add x10, sp, #0x40 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(64)));
  /* 247e08: stp x8, x9, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 247e0c: sub x8, x29, #0x58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 247e10: add x9, sp, #0x60 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(96)));
  /* 247e14: stp x8, x9, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 247e18: add x8, sp, #0x58 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(88)));
  /* 247e1c: add x9, sp, #0x50 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(80)));
  /* 247e20: stp x8, x9, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 247e24: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 247e28: add x9, sp, #0x48 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(72)));
  /* 247e2c: ldr x8, [x8, #0x7f0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2032))));
  /* 247e30: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 247e34: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 247e38: mov w2, #8 */
  ARC_W_W(c, 2, UINT64_C(8));
  /* 247e3c: stp d1, d0, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64((_pa + 8), (c)->q[0].u64[0]);
  }
  /* 247e40: stur d2, [x29, #-0x58] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-88)), (c)->q[2].u64[0]);
  /* 247e44: stp d4, d3, [sp, #0x58] */
  { const uint64_t _pa = ((c)->sp + INT64_C(88));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64((_pa + 8), (c)->q[3].u64[0]);
  }
  /* 247e48: stp d6, d5, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64((_pa + 8), (c)->q[5].u64[0]);
  }
  /* 247e4c: str d7, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), (c)->q[7].u64[0]);
  /* 247e50: stp x9, x10, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 247e54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2391640));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 247e58: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 247e5c: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 247e60: ldr x19, [sp, #0xd0] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(208))));
  /* 247e64: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* 247e68: ret  */
  return;
L_247e6c:;
  /* 247e6c: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 247e70: add x0, x0, #0x7f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2040)));
  /* 247e74: stp d6, d7, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64((_pa + 8), (c)->q[7].u64[0]);
  }
  /* 247e78: stp d4, d5, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64((_pa + 8), (c)->q[5].u64[0]);
  }
  /* 247e7c: stp d2, d3, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64((_pa + 8), (c)->q[3].u64[0]);
  }
  /* 247e80: stp d0, d1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64((_pa + 8), (c)->q[1].u64[0]);
  }
  /* 247e84: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2391688));
  fn2_24b710(c);
  /* 247e88: ldp d0, d1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* 247e8c: ldp d2, d3, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 3, arc_ld64((_pa + 8)));
  }
  /* 247e90: ldp d4, d5, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 4, arc_ld64(_pa));
    arc_du_w(c, 5, arc_ld64((_pa + 8)));
  }
  /* 247e94: ldp d6, d7, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 6, arc_ld64(_pa));
    arc_du_w(c, 7, arc_ld64((_pa + 8)));
  }
  /* 247e98: cbz w0, #0x247dfc */
  if ((ARC_W_R(c, 0)) == 0) goto L_247dfc;
  /* 247e9c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 247ea0: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 247ea4: add x1, x1, #0x912 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2322)));
  /* 247ea8: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 247eac: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 247eb0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 247eb4: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 247eb8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2391740));
  fn2_1b8fd4(c);
  /* 247ebc: mov w1, #0x41cc */
  ARC_W_W(c, 1, UINT64_C(16844));
  /* 247ec0: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 247ec4: movk w1, #0x1722, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(388104192)));
  /* 247ec8: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2391756));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 247ecc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 247ed0: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 247ed4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2391768));
  fn2_1d2d24(c);
  /* 247ed8: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 247edc: add x0, x0, #0x7f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2032)));
  /* 247ee0: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 247ee4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2391784));
  fn2_24b720(c);
  /* 247ee8: ldp d0, d1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* 247eec: ldp d2, d3, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 2, arc_ld64(_pa));
    arc_du_w(c, 3, arc_ld64((_pa + 8)));
  }
  /* 247ef0: ldp d4, d5, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 4, arc_ld64(_pa));
    arc_du_w(c, 5, arc_ld64((_pa + 8)));
  }
  /* 247ef4: ldp d6, d7, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 6, arc_ld64(_pa));
    arc_du_w(c, 7, arc_ld64((_pa + 8)));
  }
  /* 247ef8: b #0x247dfc */
  goto L_247dfc;
}

void fn2_2498f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078254324));
  /* 2498f4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 2498f8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2498fc: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* 249900: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 249904: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249908: add x8, x8, #0x9f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2552)));
  /* 24990c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 249910: tbz w8, #0, #0x249950 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_249950;
L_249914:;
  /* 249914: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249918: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* 24991c: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 249920: ldr x8, [x8, #0x9f0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2544))));
  /* 249924: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 249928: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 24992c: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 249930: stp d1, d0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64((_pa + 8), (c)->q[0].u64[0]);
  }
  /* 249934: stp x9, x10, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 249938: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2398524));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 24993c: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 249940: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 249944: ldr x19, [sp, #0x40] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(64))));
  /* 249948: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 24994c: ret  */
  return;
L_249950:;
  /* 249950: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249954: add x0, x0, #0x9f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2552)));
  /* 249958: stp d0, d1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64((_pa + 8), (c)->q[1].u64[0]);
  }
  /* 24995c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2398560));
  fn2_24b710(c);
  /* 249960: ldp d0, d1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* 249964: cbz w0, #0x249914 */
  if ((ARC_W_R(c, 0)) == 0) goto L_249914;
  /* 249968: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24996c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 249970: add x1, x1, #0xec4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3780)));
  /* 249974: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 249978: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 24997c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 249980: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 249984: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2398600));
  fn2_1b8fd4(c);
  /* 249988: mov w1, #0x54ca */
  ARC_W_W(c, 1, UINT64_C(21706));
  /* 24998c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 249990: movk w1, #0x580, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(92274688)));
  /* 249994: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2398616));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 249998: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 24999c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 2499a0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2398628));
  fn2_1d2d24(c);
  /* 2499a4: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2499a8: add x0, x0, #0x9f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2544)));
  /* 2499ac: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 2499b0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2398644));
  fn2_24b720(c);
  /* 2499b4: ldp d0, d1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* 2499b8: b #0x249914 */
  goto L_249914;
}

void fn2_24b284(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078260868));
  /* 24b284: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 24b288: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 24b28c: str x30, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 30));
  /* 24b290: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* 24b294: bl #0x24b950 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2405016));
  fn2_24b950(c);
  /* 24b298: tbnz w0, #8, #0x24b2b4 */
  if (((ARC_W_R(c, 0)) >> 8 & 1) != 0) goto L_24b2b4;
  /* 24b29c: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24b2a0: ldr x30, [sp, #0x60] */
  ARC_X_W(c, 30, arc_ld64(((c)->sp + INT64_C(96))));
  /* 24b2a4: strb wzr, [x9, #0xbe0] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(3040)), ARC_W_R(c, 31));
  /* 24b2a8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 24b2ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 24b2b0: ret  */
  return;
L_24b2b4:;
  /* 24b2b4: adrp x0, #0x1e000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(122880)));
  /* 24b2b8: add x0, x0, #0xb5c */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2908)));
  /* 24b2bc: add x1, sp, #4 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(4)));
  /* 24b2c0: bl #0x24b960 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2405060));
  fn2_24b960(c);
  /* 24b2c4: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 24b2c8: b.le #0x24b300 */
  if (ARC_COND(c, 13)) goto L_24b300;
  /* 24b2cc: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 24b2d0: add x1, x1, #0xc0f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3087)));
  /* 24b2d4: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* 24b2d8: mov w2, #0xa */
  ARC_W_W(c, 2, UINT64_C(10));
  /* 24b2dc: bl #0x24b970 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2405088));
  fn2_24b970(c);
  /* 24b2e0: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 24b2e4: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 24b2e8: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24b2ec: ldr x30, [sp, #0x60] */
  ARC_X_W(c, 30, arc_ld64(((c)->sp + INT64_C(96))));
  /* 24b2f0: strb w8, [x9, #0xbe0] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(3040)), ARC_W_R(c, 8));
  /* 24b2f4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 24b2f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 24b2fc: ret  */
  return;
L_24b300:;
  /* 24b300: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 24b304: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24b308: ldr x30, [sp, #0x60] */
  ARC_X_W(c, 30, arc_ld64(((c)->sp + INT64_C(96))));
  /* 24b30c: strb w8, [x9, #0xbe0] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(3040)), ARC_W_R(c, 8));
  /* 24b310: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 24b314: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 24b318: ret  */
  return;
}

void fn2_24b880(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078262400));
  /* 24b880: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b884: ldr x17, [x16, #0xb88] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2952))));
  /* 24b888: add x16, x16, #0xb88 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2952)));
  /* 24b88c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

