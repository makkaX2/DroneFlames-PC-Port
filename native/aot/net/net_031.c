#include "lifted.h"
#include "df_lse.h"

void fn2_9c5d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076496340));
  /* 9c5d4: sub sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(256)));
  /* 9c5d8: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9c5dc: str x25, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 25));
  /* 9c5e0: stp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 9c5e4: stp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9c5e8: stp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9c5ec: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* 9c5f0: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 9c5f4: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* 9c5f8: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 9c5fc: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 9c600: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* 9c604: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 9c608: bl #0xb8ac0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640524));
  fn2_b8ac0(c);
  /* 9c60c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9c610: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 9c614: add x1, x1, #0x5a0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1440)));
  /* 9c618: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c61c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640544));
  fn2_1b7d24(c);
  /* 9c620: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 9c624: add x1, x1, #0xdfb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3579)));
  /* 9c628: sub x0, x29, #0x31 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(49)));
  /* 9c62c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640560));
  fn2_1b7d24(c);
  /* 9c630: sub x0, x29, #0x49 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(73)));
  /* 9c634: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640568));
  fn2_1bc084(c);
  /* 9c638: add x0, sp, #0x57 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(87)));
  /* 9c63c: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640576));
  fn2_1ddc90(c);
  /* 9c640: add x0, sp, #0x47 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(71)));
  /* 9c644: bl #0x1e457c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640584));
  fn2_1e457c(c);
  /* 9c648: add x0, sp, #0xe */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(14)));
  /* 9c64c: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 9c650: add x24, sp, #0xe */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(14)));
  /* 9c654: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640600));
  fn2_1ccc88(c);
  /* 9c658: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 9c65c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 9c660: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640612));
  fn2_1ccc88(c);
  /* 9c664: add x0, x24, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* 9c668: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 9c66c: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640624));
  fn2_1d9754(c);
  /* 9c670: add x0, x24, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(25)));
  /* 9c674: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9c678: strb w21, [sp, #0x26] */
  arc_st8(((c)->sp + INT64_C(38)), ARC_W_R(c, 21));
  /* 9c67c: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640640));
  fn2_1d788c(c);
  /* 9c680: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 9c684: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640648));
  fn2_220748(c);
  /* 9c688: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 9c68c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 9c690: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 9c694: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* 9c698: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 9c69c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640672));
  fn2_1b5d1c(c);
  /* 9c6a0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 9c6a4: sub x0, x29, #0x29 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(41)));
  /* 9c6a8: add x1, sp, #0xe */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(14)));
  /* 9c6ac: sub x22, x29, #0x29 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(41)));
  /* 9c6b0: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640692));
  fn2_1ccc88(c);
  /* 9c6b4: add x0, x22, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 9c6b8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 9c6bc: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640704));
  fn2_1ccc88(c);
  /* 9c6c0: add x0, x22, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* 9c6c4: add x1, x24, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* 9c6c8: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640716));
  fn2_1d9754(c);
  /* 9c6cc: ldrb w8, [sp, #0x26] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(38))));
  /* 9c6d0: add x0, x22, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(25)));
  /* 9c6d4: add x1, x24, #0x19 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(25)));
  /* 9c6d8: sturb w8, [x29, #-0x11] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-17)), ARC_W_R(c, 8));
  /* 9c6dc: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640736));
  fn2_1d788c(c);
  /* 9c6e0: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 9c6e4: add x8, x8, #0xd98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3480)));
  /* 9c6e8: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 9c6ec: sub x1, x29, #0x29 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(41)));
  /* 9c6f0: stp x8, x20, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 9c6f4: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640760));
  fn2_1ccc88(c);
  /* 9c6f8: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 9c6fc: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 9c700: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640772));
  fn2_1ccc88(c);
  /* 9c704: add x0, x21, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(32)));
  /* 9c708: add x1, x22, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* 9c70c: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640784));
  fn2_1d9754(c);
  /* 9c710: ldurb w8, [x29, #-0x11] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-17))));
  /* 9c714: add x0, x21, #0x29 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(41)));
  /* 9c718: add x1, x22, #0x19 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(25)));
  /* 9c71c: strb w8, [x21, #0x28] */
  arc_st8((ARC_X_R(c, 21) + INT64_C(40)), ARC_W_R(c, 8));
  /* 9c720: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640804));
  fn2_1d788c(c);
  /* 9c724: add x0, sp, #0x37 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(55)));
  /* 9c728: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 9c72c: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640816));
  fn2_1b75a4(c);
  /* 9c730: add x0, x22, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(25)));
  /* 9c734: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640824));
  fn2_1d79fc(c);
  /* 9c738: add x0, x22, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(16)));
  /* 9c73c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640832));
  fn2_1d97fc(c);
  /* 9c740: add x0, x22, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 9c744: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640840));
  fn2_1ccd9c(c);
  /* 9c748: sub x0, x29, #0x29 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(41)));
  /* 9c74c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640848));
  fn2_1ccd9c(c);
  /* 9c750: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c754: sub x2, x29, #0x31 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(49)));
  /* 9c758: sub x3, x29, #0x49 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(73)));
  /* 9c75c: add x5, sp, #0x57 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(87)));
  /* 9c760: add x6, sp, #0x47 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(71)));
  /* 9c764: add x7, sp, #0x37 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(55)));
  /* 9c768: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9c76c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 9c770: bl #0xba0f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640884));
  fn2_ba0f0(c);
  /* 9c774: add x0, sp, #0x37 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(55)));
  /* 9c778: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640892));
  fn2_1d79fc(c);
  /* 9c77c: add x0, x24, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(25)));
  /* 9c780: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640900));
  fn2_1d79fc(c);
  /* 9c784: add x0, x24, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* 9c788: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640908));
  fn2_1d97fc(c);
  /* 9c78c: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 9c790: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640916));
  fn2_1ccd9c(c);
  /* 9c794: add x0, sp, #0xe */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(14)));
  /* 9c798: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640924));
  fn2_1ccd9c(c);
  /* 9c79c: add x0, sp, #0x47 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(71)));
  /* 9c7a0: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640932));
  fn2_1e46f4(c);
  /* 9c7a4: add x0, sp, #0x57 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(87)));
  /* 9c7a8: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640940));
  fn2_1dde08(c);
  /* 9c7ac: sub x0, x29, #0x49 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(73)));
  /* 9c7b0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640948));
  fn2_1bc620(c);
  /* 9c7b4: sub x0, x29, #0x31 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(49)));
  /* 9c7b8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640956));
  fn2_1ccd9c(c);
  /* 9c7bc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9c7c0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(640964));
  fn2_1ccd9c(c);
  /* 9c7c4: ldp x20, x19, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9c7c8: ldr x25, [sp, #0xc0] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(192))));
  /* 9c7cc: ldp x22, x21, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9c7d0: ldp x24, x23, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 9c7d4: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9c7d8: add sp, sp, #0x100 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(256)));
  /* 9c7dc: ret  */
  return;
}

void fn2_9fb24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076509988));
  /* 9fb24: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9fb28: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9fb2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9fb30: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 9fb34: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 9fb38: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 9fb3c: bl #0x1ccef8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654144));
  fn2_1ccef8(c);
  /* 9fb40: cmp x0, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(7));
  /* 9fb44: b.gt #0x9fb64 */
  if (ARC_COND(c, 12)) goto L_9fb64;
  /* 9fb48: adrp x0, #0x26000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(155648)));
  /* 9fb4c: add x0, x0, #0x60b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1547)));
  /* 9fb50: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 9fb54: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 9fb58: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9fb5c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9fb60: b #0x1b7d74 */
  fn2_1b7d74(c); return;
L_9fb64:;
  /* 9fb64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9fb68: bl #0x1ccef8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(654188));
  fn2_1ccef8(c);
  /* 9fb6c: cmp x0, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(129));
  /* 9fb70: b.lt #0x9fb90 */
  if (ARC_COND(c, 11)) goto L_9fb90;
  /* 9fb74: adrp x0, #0x34000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(212992)));
  /* 9fb78: add x0, x0, #0xe9b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3739)));
  /* 9fb7c: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 9fb80: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 9fb84: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9fb88: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9fb8c: b #0x1b7d74 */
  fn2_1b7d74(c); return;
L_9fb90:;
  /* 9fb90: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 9fb94: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 9fb98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9fb9c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9fba0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9fba4: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_a766c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076541548));
  /* a766c: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a7670: cbz x0, #0xa76a4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a76a4;
  /* a7674: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7678: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a767c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a7680: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* a7684: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* a7688: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(685708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a768c: cbz x0, #0xa769c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a769c;
  /* a7690: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(685716));
  fn2_1b62dc(c);
  /* a7694: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* a7698: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_a769c:;
  /* a769c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a76a0: ret  */
  return;
L_a76a4:;
  /* a76a4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a76a8: ret  */
  return;
}

void fn2_a8828(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076546088));
  /* a8828: adrp x0, #0xa8000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(688128)));
  /* a882c: add x0, x0, #0xb78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2936)));
  /* a8830: ret  */
  return;
}

void fn2_a94d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076549332));
  /* a94d4: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* a94d8: cbz x0, #0xa950c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a950c;
  /* a94dc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a94e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a94e4: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a94e8: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* a94ec: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* a94f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(693492));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a94f4: cbz x0, #0xa9504 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a9504;
  /* a94f8: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(693500));
  fn2_1b62dc(c);
  /* a94fc: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* a9500: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_a9504:;
  /* a9504: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a9508: ret  */
  return;
L_a950c:;
  /* a950c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a9510: ret  */
  return;
}

void fn2_aa0c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076552392));
  /* aa0c8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* aa0cc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* aa0d0: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* aa0d4: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_aa838(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076554296));
  /* aa838: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* aa83c: eor w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) ^ ARC_W_R(c, 0)));
  /* aa840: ret  */
  return;
}

void fn2_abb4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076559180));
  /* abb4c: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* abb50: add x8, x8, #0x158 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(344)));
  /* abb54: str x8, [x0], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* abb58: b #0x1d79fc */
  fn2_1d79fc(c); return;
}

void fn2_ac6f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076562168));
  /* ac6f8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ac6fc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* ac700: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* ac704: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_ad1e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076564960));
  /* ad1e0: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* ad1e4: add x8, x8, #0x428 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1064)));
  /* ad1e8: str x8, [x0], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ad1ec: b #0x1d79fc */
  fn2_1d79fc(c); return;
}

void fn2_adc0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076567564));
  /* adc0c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* adc10: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* adc14: ret  */
  return;
}

void fn2_ae918(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076570904));
  /* ae918: add x0, x0, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(56)));
  /* ae91c: b #0x1d06b8 */
  fn2_1d06b8(c); return;
}

void fn2_aeb74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076571508));
  /* aeb74: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aeb78: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aeb7c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aeb80: cbz x1, #0xaec30 */
  if ((ARC_X_R(c, 1)) == 0) goto L_aec30;
  /* aeb84: ldr x8, [x1, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(56))));
  /* aeb88: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* aeb8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* aeb90: cmp x8, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0));
  /* aeb94: b.ne #0xaec50 */
  if (ARC_COND(c, 1)) goto L_aec50;
  /* aeb98: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* aeb9c: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* aeba0: b.eq #0xaec08 */
  if (ARC_COND(c, 0)) goto L_aec08;
  /* aeba4: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aeba8: ldr x8, [x20, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* aebac: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* aebb0: b.eq #0xaec20 */
  if (ARC_COND(c, 0)) goto L_aec20;
L_aebb4:;
  /* aebb4: ldr x9, [x20, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* aebb8: cbz x8, #0xaebc0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_aebc0;
L_aebbc:;
  /* aebbc: str x9, [x8, #0x28] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(40)), ARC_X_R(c, 9));
L_aebc0:;
  /* aebc0: cbz x9, #0xaebc8 */
  if ((ARC_X_R(c, 9)) == 0) goto L_aebc8;
  /* aebc4: str x8, [x9, #0x30] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(48)), ARC_X_R(c, 8));
L_aebc8:;
  /* aebc8: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* aebcc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(715728));
  fn2_1ccd9c(c);
  /* aebd0: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* aebd4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(715736));
  fn2_1d2d24(c);
  /* aebd8: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* aebdc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(715744));
  fn2_1d2d24(c);
  /* aebe0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aebe4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* aebe8: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(715756));
  fn2_1b5ce8(c);
  /* aebec: ldr w8, [x19, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(16))));
  /* aebf0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* aebf4: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* aebf8: str w8, [x19, #0x10] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(16)), ARC_W_R(c, 8));
  /* aebfc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aec00: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aec04: ret  */
  return;
L_aec08:;
  /* aec08: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* aec0c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* aec10: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aec14: ldr x8, [x20, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* aec18: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* aec1c: b.ne #0xaebb4 */
  if (ARC_COND(c, 1)) goto L_aebb4;
L_aec20:;
  /* aec20: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* aec24: ldr x9, [x20, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* aec28: cbnz x8, #0xaebbc */
  if ((ARC_X_R(c, 8)) != 0) goto L_aebbc;
  /* aec2c: b #0xaebc0 */
  goto L_aebc0;
L_aec30:;
  /* aec30: adrp x0, #0x1b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(110592)));
  /* aec34: add x0, x0, #0xf83 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3971)));
  /* aec38: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* aec3c: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* aec40: adrp x3, #0x23000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(143360)));
  /* aec44: add x3, x3, #0xb70 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2928)));
  /* aec48: mov w2, #0xe7 */
  ARC_W_W(c, 2, UINT64_C(231));
  /* aec4c: b #0xaec6c */
  goto L_aec6c;
L_aec50:;
  /* aec50: adrp x0, #0x1b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(110592)));
  /* aec54: add x0, x0, #0xf83 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3971)));
  /* aec58: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* aec5c: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* aec60: adrp x3, #0x30000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(196608)));
  /* aec64: add x3, x3, #0x1fe */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(510)));
  /* aec68: mov w2, #0xe8 */
  ARC_W_W(c, 2, UINT64_C(232));
L_aec6c:;
  /* aec6c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* aec70: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* aec74: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(715896));
  fn2_1b54b0(c);
  /* aec78: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* aec7c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aec80: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aec84: ret  */
  return;
}

void fn2_afccc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076575948));
  /* afccc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* afcd0: ret  */
  return;
}

void fn2_b0634(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076578356));
  /* b0634: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0638: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b063c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0640: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b0644: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* b0648: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* b064c: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* b0650: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b0654: cbz x0, #0xb0684 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b0684;
L_b0658:;
  /* b0658: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* b065c: cbz x1, #0xb0674 */
  if ((ARC_X_R(c, 1)) == 0) goto L_b0674;
  /* b0660: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722532));
  fn2_aeb74(c);
  /* b0664: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0668: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* b066c: cbnz w8, #0xb0658 */
  if ((ARC_W_R(c, 8)) != 0) goto L_b0658;
  /* b0670: b #0xb067c */
  goto L_b067c;
L_b0674:;
  /* b0674: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* b0678: cbnz w8, #0xb0694 */
  if ((ARC_W_R(c, 8)) != 0) goto L_b0694;
L_b067c:;
  /* b067c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b0680: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722564));
  fn2_1b5ce8(c);
L_b0684:;
  /* b0684: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b0688: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b068c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0690: b #0x24b730 */
  fn2_24b730(c); return;
L_b0694:;
  /* b0694: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* b0698: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* b069c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* b06a0: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* b06a4: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* b06a8: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* b06ac: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* b06b0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* b06b4: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* b06b8: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(722620));
  fn2_1b54b0(c);
  /* b06bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b06c0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b06c4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b06c8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b12fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076581628));
  /* b12fc: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* b1300: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b1304: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* b1308: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b130c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b1310: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* b1314: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b1318: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b131c: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* b1320: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* b1324: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* b1328: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(725804));
  fn2_1bc084(c);
  /* b132c: ldp x23, x22, [x22, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(96));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 22, arc_ld64(_pa + 8));
  }
  /* b1330: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b1334: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(725816));
  fn2_1bc084(c);
  /* b1338: add x0, x21, x22, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* b133c: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* b1340: tbz w22, #0, #0xb134c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_b134c;
  /* b1344: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b1348: ldr x23, [x8, x23] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 23))));
L_b134c:;
  /* b134c: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(725840));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* b1350: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* b1354: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* b1358: and w1, w8, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* b135c: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(725856));
  fn2_1bc25c(c);
  /* b1360: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* b1364: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b1368: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(725868));
  fn2_1bcf04(c);
  /* b136c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* b1370: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(725876));
  fn2_1bc620(c);
  /* b1374: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b1378: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(725884));
  fn2_1bc620(c);
  /* b137c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b1380: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* b1384: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b1388: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b138c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* b1390: ret  */
  return;
}

void fn2_b2404(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076585988));
  /* b2404: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2408: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b240c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2410: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b2414: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* b2418: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* b241c: tbz w9, #0, #0xb2428 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_b2428;
  /* b2420: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* b2424: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_b2428:;
  /* b2428: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(730156));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b242c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b2430: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b2434: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2438: ret  */
  return;
}

void fn2_b3534(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076590388));
  /* b3534: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* b3538: ldp x1, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b353c: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* b3540: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* b3544: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b3548: mov x2, x9 */
  ARC_X_W(c, 2, ARC_X_R(c, 9));
  /* b354c: b #0xb3778 */
  fn2_b3778(c); return;
}

void fn2_b4918(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076595480));
  /* b4918: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* b491c: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b4920: stp x28, x27, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* b4924: stp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* b4928: stp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b492c: stp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b4930: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b4934: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* b4938: ldp x9, x8, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b493c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b4940: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* b4944: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* b4948: stp x5, x6, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* b494c: mov w28, w4 */
  ARC_W_W(c, 28, ARC_W_R(c, 4));
  /* b4950: mov x27, x3 */
  ARC_X_W(c, 27, ARC_X_R(c, 3));
  /* b4954: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* b4958: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* b495c: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* b4960: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* b4964: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* b4968: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* b496c: add x21, sp, #0x58 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(88)));
  /* b4970: mul x20, x8, x9 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* b4974: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739704));
  fn2_1bc084(c);
  /* b4978: add x19, x21, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* b497c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b4980: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739716));
  fn2_1bc084(c);
  /* b4984: add x26, x21, #0x30 */
  ARC_X_W(c, 26, (ARC_X_R(c, 21) + UINT64_C(48)));
  /* b4988: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* b498c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739728));
  fn2_1bc084(c);
  /* b4990: add x25, x21, #0x48 */
  ARC_X_W(c, 25, (ARC_X_R(c, 21) + UINT64_C(72)));
  /* b4994: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* b4998: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739740));
  fn2_1bc084(c);
  /* b499c: cmp w28, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(0));
  /* b49a0: b.le #0xb4a4c */
  if (ARC_COND(c, 13)) goto L_b4a4c;
  /* b49a4: ldr x1, [x27] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 27)));
  /* b49a8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b49ac: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739760));
  fn2_1bc09c(c);
  /* b49b0: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* b49b4: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* b49b8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739772));
  fn2_1bcf04(c);
  /* b49bc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b49c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739780));
  fn2_1bc620(c);
  /* b49c4: cmp w28, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(1));
  /* b49c8: str x21, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 21));
  /* b49cc: b.eq #0xb4a6c */
  if (ARC_COND(c, 0)) goto L_b4a6c;
  /* b49d0: ldr x1, [x27, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 27) + INT64_C(8))));
  /* b49d4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b49d8: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739804));
  fn2_1bc09c(c);
  /* b49dc: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* b49e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b49e4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739816));
  fn2_1bcf04(c);
  /* b49e8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b49ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739824));
  fn2_1bc620(c);
  /* b49f0: cmp w28, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(2));
  /* b49f4: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
  /* b49f8: b.ls #0xb4a8c */
  if (ARC_COND(c, 9)) goto L_b4a8c;
  /* b49fc: ldr x1, [x27, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* b4a00: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b4a04: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739848));
  fn2_1bc09c(c);
  /* b4a08: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* b4a0c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* b4a10: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739860));
  fn2_1bcf04(c);
  /* b4a14: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b4a18: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739868));
  fn2_1bc620(c);
  /* b4a1c: cmp w28, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(3));
  /* b4a20: str x26, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 26));
  /* b4a24: b.eq #0xb4aac */
  if (ARC_COND(c, 0)) goto L_b4aac;
  /* b4a28: ldr x1, [x27, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 27) + INT64_C(24))));
  /* b4a2c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b4a30: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739892));
  fn2_1bc09c(c);
  /* b4a34: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* b4a38: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* b4a3c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739904));
  fn2_1bcf04(c);
  /* b4a40: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* b4a44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739912));
  fn2_1bc620(c);
  /* b4a48: b #0xb4ac8 */
  goto L_b4ac8;
L_b4a4c:;
  /* b4a4c: sub w8, w20, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) - UINT64_C(4)));
  /* b4a50: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* b4a54: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* b4a58: nop  */
  /* nop: no architectural effect here */
  /* b4a5c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* b4a60: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* b4a64: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739944));
  fn2_1bce10(c);
  /* b4a68: str x21, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 21));
L_b4a6c:;
  /* b4a6c: sub w8, w20, #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) - UINT64_C(3)));
  /* b4a70: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* b4a74: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* b4a78: nop  */
  /* nop: no architectural effect here */
  /* b4a7c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* b4a80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b4a84: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(739976));
  fn2_1bce10(c);
  /* b4a88: str x19, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 19));
L_b4a8c:;
  /* b4a8c: sub w8, w20, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) - UINT64_C(2)));
  /* b4a90: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* b4a94: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* b4a98: nop  */
  /* nop: no architectural effect here */
  /* b4a9c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* b4aa0: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* b4aa4: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740008));
  fn2_1bce10(c);
  /* b4aa8: str x26, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 26));
L_b4aac:;
  /* b4aac: sub w8, w20, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) - UINT64_C(1)));
  /* b4ab0: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* b4ab4: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* b4ab8: nop  */
  /* nop: no architectural effect here */
  /* b4abc: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* b4ac0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* b4ac4: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740040));
  fn2_1bce10(c);
L_b4ac8:;
  /* b4ac8: ldp x2, x4, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 4, arc_ld64(_pa + 8));
  }
  /* b4acc: add x3, sp, #0x38 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(56)));
  /* b4ad0: ldr x5, [sp, #0x18] */
  ARC_X_W(c, 5, arc_ld64(((c)->sp + INT64_C(24))));
  /* b4ad4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* b4ad8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b4adc: str x25, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 25));
  /* b4ae0: bl #0xb4b28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740068));
  fn2_b4b28(c);
  /* b4ae4: add x19, sp, #0x58 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(88)));
  /* b4ae8: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* b4aec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740080));
  fn2_1bc620(c);
  /* b4af0: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* b4af4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740088));
  fn2_1bc620(c);
  /* b4af8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b4afc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740096));
  fn2_1bc620(c);
  /* b4b00: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* b4b04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(740104));
  fn2_1bc620(c);
  /* b4b08: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4b0c: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b4b10: ldp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b4b14: ldp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* b4b18: ldp x28, x27, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* b4b1c: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4b20: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* b4b24: ret  */
  return;
}

void fn2_b5cdc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076600540));
  /* b5cdc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b5ce0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b5ce4: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* b5ce8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b5cec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* b5cf0: ldp x21, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b5cf4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* b5cf8: add x20, x1, x8, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* b5cfc: tbz w8, #0, #0xb5d08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b5d08;
  /* b5d00: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b5d04: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_b5d08:;
  /* b5d08: ldr x1, [x2] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 2)));
  /* b5d0c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b5d10: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744724));
  fn2_1ccc88(c);
  /* b5d14: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b5d18: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b5d1c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b5d20: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744740));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* b5d24: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b5d28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b5d2c: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744752));
  fn2_1dc718(c);
  /* b5d30: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b5d34: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744760));
  fn2_1db788(c);
  /* b5d38: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b5d3c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(744768));
  fn2_1ccd9c(c);
  /* b5d40: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b5d44: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* b5d48: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b5d4c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b5d50: ret  */
  return;
}

void fn2_b6c44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076604484));
  /* b6c44: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* b6c48: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6c4c: stp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* b6c50: stp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* b6c54: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b6c58: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b6c5c: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6c60: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* b6c64: ldp x9, x8, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b6c68: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b6c6c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* b6c70: mov x25, x7 */
  ARC_X_W(c, 25, ARC_X_R(c, 7));
  /* b6c74: str x6, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 6));
  /* b6c78: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* b6c7c: mov w27, w4 */
  ARC_W_W(c, 27, ARC_W_R(c, 4));
  /* b6c80: mov x26, x3 */
  ARC_X_W(c, 26, ARC_X_R(c, 3));
  /* b6c84: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* b6c88: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* b6c8c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* b6c90: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* b6c94: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* b6c98: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* b6c9c: add x19, sp, #0x30 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(48)));
  /* b6ca0: mul x28, x8, x9 */
  ARC_X_W(c, 28, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* b6ca4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748712));
  fn2_1bc084(c);
  /* b6ca8: add x24, x19, #0x18 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* b6cac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* b6cb0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748724));
  fn2_1bc084(c);
  /* b6cb4: cmp w27, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(0));
  /* b6cb8: b.le #0xb6d0c */
  if (ARC_COND(c, 13)) goto L_b6d0c;
  /* b6cbc: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* b6cc0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b6cc4: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748744));
  fn2_1bc09c(c);
  /* b6cc8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* b6ccc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b6cd0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748756));
  fn2_1bcf04(c);
  /* b6cd4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b6cd8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748764));
  fn2_1bc620(c);
  /* b6cdc: cmp w27, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(1));
  /* b6ce0: str x19, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 19));
  /* b6ce4: b.eq #0xb6d2c */
  if (ARC_COND(c, 0)) goto L_b6d2c;
  /* b6ce8: ldr x1, [x26, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* b6cec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b6cf0: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748788));
  fn2_1bc09c(c);
  /* b6cf4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b6cf8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* b6cfc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748800));
  fn2_1bcf04(c);
  /* b6d00: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b6d04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748808));
  fn2_1bc620(c);
  /* b6d08: b #0xb6d48 */
  goto L_b6d48;
L_b6d0c:;
  /* b6d0c: sub w8, w28, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 28) - UINT64_C(2)));
  /* b6d10: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* b6d14: ldr x10, [x25] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 25)));
  /* b6d18: nop  */
  /* nop: no architectural effect here */
  /* b6d1c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* b6d20: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* b6d24: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748840));
  fn2_1bce10(c);
  /* b6d28: str x19, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 19));
L_b6d2c:;
  /* b6d2c: sub w8, w28, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 28) - UINT64_C(1)));
  /* b6d30: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* b6d34: ldr x10, [x25] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 25)));
  /* b6d38: nop  */
  /* nop: no architectural effect here */
  /* b6d3c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* b6d40: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* b6d44: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748872));
  fn2_1bce10(c);
L_b6d48:;
  /* b6d48: ldr x5, [sp] */
  ARC_X_W(c, 5, arc_ld64((c)->sp));
  /* b6d4c: add x3, sp, #0x20 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(32)));
  /* b6d50: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* b6d54: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b6d58: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b6d5c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* b6d60: str x24, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 24));
  /* b6d64: bl #0xb6d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748904));
  fn2_b6d9c(c);
  /* b6d68: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* b6d6c: add x0, x8, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* b6d70: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748916));
  fn2_1bc620(c);
  /* b6d74: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* b6d78: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(748924));
  fn2_1bc620(c);
  /* b6d7c: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6d80: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b6d84: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b6d88: ldp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* b6d8c: ldp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* b6d90: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6d94: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* b6d98: ret  */
  return;
}

void fn2_b7fb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076609464));
  /* b7fb8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* b7fbc: ret  */
  return;
}

void fn2_bcab0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076628656));
  /* bcab0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bcab4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bcab8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bcabc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bcac0: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* bcac4: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* bcac8: add x8, x8, #0x7a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1960)));
  /* bcacc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* bcad0: cbz x0, #0xbcaf4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bcaf4;
  /* bcad4: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(772824));
  fn2_225abc(c);
  /* bcad8: tbz w0, #0, #0xbcaf4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_bcaf4;
  /* bcadc: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* bcae0: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* bcae4: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* bcae8: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bcaec: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* bcaf0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(772852));
  arc_dispatch(c, ARC_X_R(c, 9));
L_bcaf4:;
  /* bcaf4: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* bcaf8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bcafc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bcb00: ret  */
  return;
}

void fn2_bd27c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076630652));
  /* bd27c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd280: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bd284: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bd288: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bd28c: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* bd290: add x8, x8, #0x910 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2320)));
  /* bd294: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bd298: add x0, x0, #0x59 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(89)));
  /* bd29c: str x8, [x20], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* bd2a0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(774820));
  fn2_1d79fc(c);
  /* bd2a4: add x0, x19, #0x49 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(73)));
  /* bd2a8: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(774828));
  fn2_1e46f4(c);
  /* bd2ac: add x0, x19, #0x39 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(57)));
  /* bd2b0: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(774836));
  fn2_1dde08(c);
  /* bd2b4: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* bd2b8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(774844));
  fn2_1bc620(c);
  /* bd2bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bd2c0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(774852));
  fn2_1ccd9c(c);
  /* bd2c4: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* bd2c8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(774860));
  fn2_1ccd9c(c);
  /* bd2cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bd2d0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bd2d4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd2d8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_bda80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076632704));
  /* bda80: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* bda84: ret  */
  return;
}

void fn2_be3f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076635124));
  /* be3f4: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* be3f8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* be3fc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* be400: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* be404: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* be408: cbz x0, #0xbe494 */
  if ((ARC_X_R(c, 0)) == 0) goto L_be494;
  /* be40c: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* be410: add x8, x8, #0xf68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3944)));
  /* be414: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* be418: tbz w8, #0, #0xbe4a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_be4a8;
L_be41c:;
  /* be41c: adrp x1, #0x25c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2473984)));
  /* be420: add x1, x1, #0xf59 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3929)));
  /* be424: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be428: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779308));
  fn2_1d2c40(c);
  /* be42c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* be430: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* be434: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be438: ldr x8, [x8, #0xfc0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4032))));
  /* be43c: ldr x9, [x9, #0xfc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4040))));
  /* be440: ldr x19, [x19, #0x10] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* be444: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* be448: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* be44c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779344));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* be450: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* be454: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* be458: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779356));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* be45c: cbz x0, #0xbe488 */
  if ((ARC_X_R(c, 0)) == 0) goto L_be488;
  /* be460: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779364));
  fn2_1b62dc(c);
  /* be464: cbz x0, #0xbe488 */
  if ((ARC_X_R(c, 0)) == 0) goto L_be488;
  /* be468: adrp x1, #0x250000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2424832)));
  /* be46c: add x1, x1, #0x590 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1424)));
  /* be470: adrp x2, #0x251000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2428928)));
  /* be474: add x2, x2, #0x3d8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(984)));
  /* be478: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* be47c: bl #0x24b740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779392));
  fn2_24b740(c);
  /* be480: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* be484: b #0xbe48c */
  goto L_be48c;
L_be488:;
  /* be488: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_be48c:;
  /* be48c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* be490: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779412));
  fn2_1d2d24(c);
L_be494:;
  /* be494: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* be498: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* be49c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* be4a0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* be4a4: ret  */
  return;
L_be4a8:;
  /* be4a8: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* be4ac: add x0, x0, #0xf68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3944)));
  /* be4b0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779444));
  fn2_24b710(c);
  /* be4b4: cbz w0, #0xbe41c */
  if ((ARC_W_R(c, 0)) == 0) goto L_be41c;
  /* be4b8: adrp x20, #0x25c000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2473984)));
  /* be4bc: add x20, x20, #0xf59 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3929)));
  /* be4c0: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* be4c4: add x1, x1, #0x55c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1372)));
  /* be4c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* be4cc: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779472));
  fn2_1b907c(c);
  /* be4d0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* be4d4: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* be4d8: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* be4dc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* be4e0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* be4e4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779496));
  fn2_24b6f0(c);
  /* be4e8: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* be4ec: add x0, x0, #0xf68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3944)));
  /* be4f0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(779508));
  fn2_24b720(c);
  /* be4f4: b #0xbe41c */
  goto L_be41c;
}

void fn2_bf628(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076639784));
  /* bf628: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf62c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bf630: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bf634: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* bf638: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* bf63c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* bf640: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* bf644: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* bf648: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(783948));
  fn2_1b5d1c(c);
  /* bf64c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* bf650: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* bf654: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(783960));
  fn2_1afdf8(c);
  /* bf658: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* bf65c: add x8, x8, #0x588 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1416)));
  /* bf660: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bf664: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* bf668: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bf66c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf670: ret  */
  return;
}

void fn2_c001c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076642332));
  /* c001c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c0020: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c0024: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c0028: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* c002c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* c0030: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* c0034: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* c0038: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* c003c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(786496));
  fn2_1b5d1c(c);
  /* c0040: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* c0044: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* c0048: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(786508));
  fn2_1afdf8(c);
  /* c004c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* c0050: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* c0054: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* c0058: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* c005c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* c0060: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c0064: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c0068: ret  */
  return;
}

void fn2_c0b0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076645132));
  /* c0b0c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c0b10: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* c0b14: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c0b18: ldr x8, [x0, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(96))));
  /* c0b1c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* c0b20: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(789284));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* c0b24: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* c0b28: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c0b2c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c0b30: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c0b34: ret  */
  return;
}

void fn2_c2180(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076650880));
  /* c2180: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* c2184: and w0, w8, w1, asr #31 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) & ((uint32_t)((int32_t)(ARC_W_R(c, 1)) >> 31))));
  /* c2188: ret  */
  return;
}

void fn2_c57c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076664768));
  /* c57c0: adrp x0, #0xc5000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(806912)));
  /* c57c4: add x0, x0, #0x818 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2072)));
  /* c57c8: ret  */
  return;
}

void fn2_c7194(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076671380));
  /* c7194: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* c7198: eor w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) ^ ARC_W_R(c, 0)));
  /* c719c: ret  */
  return;
}

void fn2_c7ca0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076674208));
  /* c7ca0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c7ca4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* c7ca8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c7cac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c7cb0: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(818356));
  fn2_1b6040(c);
  /* c7cb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c7cb8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c7cbc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c7cc0: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_c9288(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076679816));
  /* c9288: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* c928c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c9290: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c9294: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c9298: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* c929c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c92a0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* c92a4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* c92a8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* c92ac: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* c92b0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* c92b4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(823992));
  fn2_1b5d1c(c);
  /* c92b8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* c92bc: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* c92c0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c92c4: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* c92c8: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* c92cc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* c92d0: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* c92d4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824024));
  fn2_1d2c2c(c);
  /* c92d8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* c92dc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824032));
  fn2_1d2c2c(c);
  /* c92e0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c92e4: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* c92e8: add x8, x8, #0x2a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(672)));
  /* c92ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c92f0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* c92f4: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* c92f8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* c92fc: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c9300: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* c9304: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* c9308: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* c930c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* c9310: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824084));
  fn2_1b5e68(c);
  /* c9314: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* c9318: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* c931c: add x8, x8, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* c9320: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* c9324: tbz w8, #0, #0xc9364 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c9364;
L_c9328:;
  /* c9328: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* c932c: add x1, x1, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(24)));
  /* c9330: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c9334: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824120));
  fn2_1d2c40(c);
  /* c9338: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* c933c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* c9340: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824132));
  fn2_1d5dc0(c);
  /* c9344: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c9348: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824140));
  fn2_1d2d24(c);
  /* c934c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c9350: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c9354: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c9358: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c935c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* c9360: ret  */
  return;
L_c9364:;
  /* c9364: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* c9368: add x0, x0, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* c936c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824176));
  fn2_24b710(c);
  /* c9370: cbz w0, #0xc9328 */
  if ((ARC_W_R(c, 0)) == 0) goto L_c9328;
  /* c9374: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* c9378: add x20, x20, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* c937c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* c9380: add x1, x1, #0x628 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1576)));
  /* c9384: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* c9388: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824204));
  fn2_1b907c(c);
  /* c938c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* c9390: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* c9394: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* c9398: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* c939c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c93a0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824228));
  fn2_24b6f0(c);
  /* c93a4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* c93a8: add x0, x0, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* c93ac: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(824240));
  fn2_24b720(c);
  /* c93b0: b #0xc9328 */
  goto L_c9328;
}

void fn2_cc444(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076692548));
  /* cc444: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* cc448: cbz x0, #0xcc47c */
  if ((ARC_X_R(c, 0)) == 0) goto L_cc47c;
  /* cc44c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cc450: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* cc454: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* cc458: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* cc45c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* cc460: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(836708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* cc464: cbz x0, #0xcc474 */
  if ((ARC_X_R(c, 0)) == 0) goto L_cc474;
  /* cc468: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(836716));
  fn2_1b62dc(c);
  /* cc46c: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* cc470: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_cc474:;
  /* cc474: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cc478: ret  */
  return;
L_cc47c:;
  /* cc47c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* cc480: ret  */
  return;
}

void fn2_cd174(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076695924));
  /* cd174: adrp x0, #0xcd000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(839680)));
  /* cd178: add x0, x0, #0x1cc */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(460)));
  /* cd17c: ret  */
  return;
}

void fn2_cdc10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076698640));
  /* cdc10: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* cdc14: ret  */
  return;
}

void fn2_cec74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076702836));
  /* cec74: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* cec78: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* cec7c: lsl w0, w8, #2 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* cec80: ret  */
  return;
}

void fn2_cfec8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076707528));
  /* cfec8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* cfecc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cfed0: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* cfed4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cfed8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* cfedc: add x20, x0, x2, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* cfee0: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* cfee4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* cfee8: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* cfeec: tbz w2, #0, #0xcfef8 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_cfef8;
  /* cfef0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* cfef4: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_cfef8:;
  /* cfef8: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* cfefc: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cff00: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851716));
  fn2_1bc84c(c);
  /* cff04: ldr x1, [x21, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* cff08: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* cff0c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851728));
  fn2_1bc0b8(c);
  /* cff10: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* cff14: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* cff18: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851740));
  fn2_1bc84c(c);
  /* cff1c: ldr x0, [x21, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* cff20: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* cff24: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851752));
  fn2_1bc84c(c);
  /* cff28: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cff2c: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* cff30: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* cff34: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* cff38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* cff3c: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851776));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* cff40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cff44: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851784));
  fn2_1ccd9c(c);
  /* cff48: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* cff4c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851792));
  fn2_1ccd9c(c);
  /* cff50: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* cff54: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851800));
  fn2_1bc620(c);
  /* cff58: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cff5c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(851808));
  fn2_1ccd9c(c);
  /* cff60: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cff64: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* cff68: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cff6c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* cff70: ret  */
  return;
}

void fn2_d2e90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076719760));
  /* d2e90: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* d2e94: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d2e98: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* d2e9c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d2ea0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d2ea4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d2ea8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* d2eac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d2eb0: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* d2eb4: add x0, x0, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(40)));
  /* d2eb8: bl #0x1d9adc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(863932));
  fn2_1d9adc(c);
  /* d2ebc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d2ec0: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(863940));
  fn2_1db794(c);
  /* d2ec4: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* d2ec8: b.lt #0xd2fa8 */
  if (ARC_COND(c, 11)) goto L_d2fa8;
  /* d2ecc: adrp x25, #0x257000 */
  ARC_X_W(c, 25, (arc_image_bases[2] + UINT64_C(2453504)));
  /* d2ed0: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* d2ed4: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* d2ed8: ldr x25, [x25, #0xfd0] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(4048))));
  /* d2edc: adrp x22, #0x1e000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(122880)));
  /* d2ee0: add x22, x22, #0xb6f */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(2927)));
  /* d2ee4: b #0xd2f24 */
  goto L_d2f24;
L_d2ee8:;
  /* d2ee8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d2eec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(863984));
  fn2_1ccd9c(c);
L_d2ef0:;
  /* d2ef0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d2ef4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d2ef8: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(863996));
  fn2_1bbf48(c);
  /* d2efc: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* d2f00: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* d2f04: bl #0x1bbf90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864008));
  fn2_1bbf90(c);
  /* d2f08: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864012));
  fn2_d0db4(c);
  /* d2f0c: add x20, x0, x20 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + ARC_X_R(c, 20)));
L_d2f10:;
  /* d2f10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d2f14: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* d2f18: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864028));
  fn2_1db794(c);
  /* d2f1c: cmp x21, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 0));
  /* d2f20: b.ge #0xd2fac */
  if (ARC_COND(c, 10)) goto L_d2fac;
L_d2f24:;
  /* d2f24: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d2f28: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d2f2c: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864048));
  fn2_1bbf48(c);
  /* d2f30: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* d2f34: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* d2f38: bl #0x1d998c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864060));
  fn2_1d998c(c);
  /* d2f3c: tbnz w0, #0, #0xd2f10 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_d2f10;
  /* d2f40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d2f44: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d2f48: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864076));
  fn2_1bbf48(c);
  /* d2f4c: bl #0xd0db4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864080));
  fn2_d0db4(c);
  /* d2f50: ldr x23, [x25] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 25)));
  /* d2f54: cbz x23, #0xd2ef0 */
  if ((ARC_X_R(c, 23)) == 0) goto L_d2ef0;
  /* d2f58: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* d2f5c: add x0, x23, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(32)));
  /* d2f60: bl #0x1db7c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864100));
  fn2_1db7c8(c);
  /* d2f64: tbnz w0, #0, #0xd2ef0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_d2ef0;
  /* d2f68: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d2f6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d2f70: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* d2f74: bl #0xd07a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864120));
  fn2_d07a0(c);
  /* d2f78: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d2f7c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* d2f80: bl #0x1b879c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864132));
  fn2_1b879c(c);
  /* d2f84: tbz w0, #0, #0xd2ee8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_d2ee8;
  /* d2f88: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d2f8c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* d2f90: bl #0xc3c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864148));
  fn2_c3c40(c);
  /* d2f94: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* d2f98: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d2f9c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864160));
  fn2_1ccd9c(c);
  /* d2fa0: tbz w23, #0, #0xd2ef0 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_d2ef0;
  /* d2fa4: b #0xd2f10 */
  goto L_d2f10;
L_d2fa8:;
  /* d2fa8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_d2fac:;
  /* d2fac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d2fb0: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(864180));
  fn2_1db788(c);
  /* d2fb4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d2fb8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d2fbc: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* d2fc0: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d2fc4: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d2fc8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d2fcc: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* d2fd0: ret  */
  return;
}

void fn2_dadc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076752324));
  /* dadc4: add x0, x0, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(48)));
  /* dadc8: b #0x1da22c */
  fn2_1da22c(c); return;
}

void fn2_dc350(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076757840));
  /* dc350: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* dc354: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* dc358: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* dc35c: lsl w8, w8, #2 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* dc360: csel w0, w8, w9, ge */
  ARC_W_W(c, 0, (ARC_COND(c, 10) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* dc364: ret  */
  return;
}

void fn2_dd6ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076762796));
  /* dd6ac: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* dd6b0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dd6b4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dd6b8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dd6bc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* dd6c0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* dd6c4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* dd6c8: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* dd6cc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* dd6d0: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* dd6d4: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* dd6d8: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(906972));
  fn2_1b5d1c(c);
  /* dd6dc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* dd6e0: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* dd6e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dd6e8: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* dd6ec: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* dd6f0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dd6f4: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* dd6f8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907004));
  fn2_1d2c2c(c);
  /* dd6fc: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dd700: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907012));
  fn2_1d2c2c(c);
  /* dd704: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* dd708: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* dd70c: add x8, x8, #0x6a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1704)));
  /* dd710: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dd714: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* dd718: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* dd71c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* dd720: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dd724: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* dd728: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* dd72c: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* dd730: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* dd734: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907064));
  fn2_1b5e68(c);
  /* dd738: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* dd73c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd740: add x8, x8, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(136)));
  /* dd744: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* dd748: tbz w8, #0, #0xdd788 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_dd788;
L_dd74c:;
  /* dd74c: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd750: add x1, x1, #0x80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(128)));
  /* dd754: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* dd758: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907100));
  fn2_1d2c40(c);
  /* dd75c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dd760: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* dd764: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907112));
  fn2_1d5dc0(c);
  /* dd768: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* dd76c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907120));
  fn2_1d2d24(c);
  /* dd770: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dd774: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dd778: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dd77c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dd780: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* dd784: ret  */
  return;
L_dd788:;
  /* dd788: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd78c: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dd790: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907156));
  fn2_24b710(c);
  /* dd794: cbz w0, #0xdd74c */
  if ((ARC_W_R(c, 0)) == 0) goto L_dd74c;
  /* dd798: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd79c: add x20, x20, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* dd7a0: nop  */
  /* nop: no architectural effect here */
  /* dd7a4: adr x1, #0x36644 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222788)));
  /* dd7a8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dd7ac: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907184));
  fn2_1b907c(c);
  /* dd7b0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* dd7b4: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* dd7b8: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* dd7bc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* dd7c0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* dd7c4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907208));
  fn2_24b6f0(c);
  /* dd7c8: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dd7cc: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dd7d0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(907220));
  fn2_24b720(c);
  /* dd7d4: b #0xdd74c */
  goto L_dd74c;
}

void fn2_de9a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076767648));
  /* de9a0: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* de9a4: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* de9a8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* de9ac: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* de9b0: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* de9b4: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* de9b8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* de9bc: cmp w8, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 0));
  /* de9c0: b.ne #0xdeacc */
  if (ARC_COND(c, 1)) goto L_deacc;
  /* de9c4: adrp x21, #0x1e000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(122880)));
  /* de9c8: add x21, x21, #0xb6f */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2927)));
  /* de9cc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* de9d0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* de9d4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* de9d8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* de9dc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911840));
  fn2_1b8fd4(c);
  /* de9e0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* de9e4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* de9e8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911852));
  fn2_1b7d24(c);
  /* de9ec: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de9f0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* de9f4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* de9f8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911868));
  fn2_1b8fd4(c);
  /* de9fc: add x21, sp, #4 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(4)));
  /* dea00: str wzr, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 31));
  /* dea04: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* dea08: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911884));
  fn2_1d2c2c(c);
  /* dea0c: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* dea10: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911892));
  fn2_1d2c2c(c);
  /* dea14: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* dea18: str wzr, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* dea1c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911904));
  fn2_1ccc74(c);
  /* dea20: mov w22, #6 */
  ARC_W_W(c, 22, UINT64_C(6));
  /* dea24: mov w8, #0x1b */
  ARC_W_W(c, 8, UINT64_C(27));
  /* dea28: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* dea2c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* dea30: str w22, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 22));
  /* dea34: str w8, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* dea38: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911932));
  fn2_1d5dc0(c);
  /* dea3c: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* dea40: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* dea44: str wzr, [sp, #0x18] */
  arc_st32(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* dea48: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911948));
  fn2_1d06b8(c);
  /* dea4c: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* dea50: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* dea54: str w22, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 22));
  /* dea58: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911964));
  fn2_1d5dc0(c);
  /* dea5c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* dea60: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911972));
  fn2_1d2d24(c);
  /* dea64: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* dea68: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911980));
  fn2_1ccd9c(c);
  /* dea6c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* dea70: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(911988));
  fn2_1d2d24(c);
  /* dea74: ldr w8, [sp, #4] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(4))));
  /* dea78: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* dea7c: add x1, x21, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* dea80: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* dea84: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912008));
  fn2_1d2b98(c);
  /* dea88: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* dea8c: add x1, x21, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* dea90: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912020));
  fn2_1d2b98(c);
  /* dea94: ldr w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(24))));
  /* dea98: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* dea9c: add x1, x21, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* deaa0: str w8, [x20, #0x14] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(20)), ARC_W_R(c, 8));
  /* deaa4: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912040));
  fn2_1d0708(c);
  /* deaa8: ldr w8, [sp, #0x24] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(36))));
  /* deaac: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* deab0: str w8, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 8));
  /* deab4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912056));
  fn2_1ccd9c(c);
  /* deab8: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* deabc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912064));
  fn2_1d2d24(c);
  /* deac0: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* deac4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(912072));
  fn2_1d2d24(c);
  /* deac8: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
L_deacc:;
  /* deacc: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* dead0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* dead4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dead8: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* deadc: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* deae0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* deae4: ret  */
  return;
}

void fn2_e1f0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076781324));
  /* e1f0c: sub sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(304)));
  /* e1f10: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1f14: stp x28, x27, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* e1f18: stp x26, x25, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e1f1c: stp x24, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e1f20: stp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1f24: stp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1f28: ldp x12, x9, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* e1f2c: mov w8, #0xffff */
  ARC_W_W(c, 8, UINT64_C(65535));
  /* e1f30: mov w28, #0x26 */
  ARC_W_W(c, 28, UINT64_C(38));
  /* e1f34: add x10, x12, #0x10, lsl #12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) + UINT64_C(65536)));
  /* e1f38: add x10, x9, x10, asr #16 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 16))));
  /* e1f3c: ldp x9, x13, [x1, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* e1f40: add x11, x10, x8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* e1f44: sub w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(1)));
  /* e1f48: add x2, x9, x11, asr #16 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 16))));
  /* e1f4c: add x9, x2, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) + ARC_X_R(c, 8)));
  /* e1f50: sub w2, w2, #1 */
  ARC_W_W(c, 2, (ARC_W_R(c, 2) - UINT64_C(1)));
  /* e1f54: add x11, x13, x9, asr #16 */
  ARC_X_W(c, 11, (ARC_X_R(c, 13) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 16))));
  /* e1f58: ldp x9, x14, [x1, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(32));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 14, arc_ld64(_pa + 8));
  }
  /* e1f5c: add x13, x11, x8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + ARC_X_R(c, 8)));
  /* e1f60: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* e1f64: add x3, x9, x13, asr #16 */
  ARC_X_W(c, 3, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> 16))));
  /* e1f68: add x9, x3, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) + ARC_X_R(c, 8)));
  /* e1f6c: sub w3, w3, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 3) - UINT64_C(1)));
  /* e1f70: add x13, x14, x9, asr #16 */
  ARC_X_W(c, 13, (ARC_X_R(c, 14) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 16))));
  /* e1f74: ldp x9, x15, [x1, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(48));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 15, arc_ld64(_pa + 8));
  }
  /* e1f78: add x14, x13, x8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* e1f7c: sub w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - UINT64_C(1)));
  /* e1f80: add x5, x9, x14, asr #16 */
  ARC_X_W(c, 5, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> 16))));
  /* e1f84: add x9, x5, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + ARC_X_R(c, 8)));
  /* e1f88: sub w5, w5, #1 */
  ARC_W_W(c, 5, (ARC_W_R(c, 5) - UINT64_C(1)));
  /* e1f8c: add x14, x15, x9, asr #16 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 16))));
  /* e1f90: ldp x9, x16, [x1, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(64));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e1f94: add x15, x14, x8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ARC_X_R(c, 8)));
  /* e1f98: sub w14, w14, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) - UINT64_C(1)));
  /* e1f9c: add x6, x9, x15, asr #16 */
  ARC_X_W(c, 6, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> 16))));
  /* e1fa0: add x9, x6, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) + ARC_X_R(c, 8)));
  /* e1fa4: sub w6, w6, #1 */
  ARC_W_W(c, 6, (ARC_W_R(c, 6) - UINT64_C(1)));
  /* e1fa8: add x15, x16, x9, asr #16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 16) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 16))));
  /* e1fac: ldp x9, x17, [x1, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(80));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 17, arc_ld64(_pa + 8));
  }
  /* e1fb0: add x16, x15, x8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) + ARC_X_R(c, 8)));
  /* e1fb4: sub w15, w15, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) - UINT64_C(1)));
  /* e1fb8: add x7, x9, x16, asr #16 */
  ARC_X_W(c, 7, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 16)) >> 16))));
  /* e1fbc: add x9, x7, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 7) + ARC_X_R(c, 8)));
  /* e1fc0: sub w7, w7, #1 */
  ARC_W_W(c, 7, (ARC_W_R(c, 7) - UINT64_C(1)));
  /* e1fc4: add x16, x17, x9, asr #16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 17) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 16))));
  /* e1fc8: ldp x9, x4, [x1, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(96));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 4, arc_ld64(_pa + 8));
  }
  /* e1fcc: add x17, x16, x8 */
  ARC_X_W(c, 17, (ARC_X_R(c, 16) + ARC_X_R(c, 8)));
  /* e1fd0: sub w16, w16, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) - UINT64_C(1)));
  /* e1fd4: add x19, x9, x17, asr #16 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 17)) >> 16))));
  /* e1fd8: add x9, x19, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* e1fdc: add x17, x4, x9, asr #16 */
  ARC_X_W(c, 17, (ARC_X_R(c, 4) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 16))));
  /* e1fe0: ldp x9, x1, [x1, #0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(112));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* e1fe4: add x4, x17, x8 */
  ARC_X_W(c, 4, (ARC_X_R(c, 17) + ARC_X_R(c, 8)));
  /* e1fe8: add x20, x9, x4, asr #16 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) + ((uint64_t)((int64_t)(ARC_X_R(c, 4)) >> 16))));
  /* e1fec: add x9, x20, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* e1ff0: add x1, x1, x9, asr #16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 16))));
  /* e1ff4: add x9, x1, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* e1ff8: asr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63))));
  /* e1ffc: mul x9, x9, x28 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 28))));
  /* e2000: add x4, x9, w12, uxth */
  ARC_X_W(c, 4, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 12)))));
  /* e2004: mov w12, #0xffda */
  ARC_W_W(c, 12, UINT64_C(65498));
  /* e2008: add x9, x4, x12 */
  ARC_X_W(c, 9, (ARC_X_R(c, 4) + ARC_X_R(c, 12)));
  /* e200c: asr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63))));
  /* e2010: add x10, x9, w10, uxth */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e2014: add x9, x10, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ARC_X_R(c, 8)));
  /* e2018: sub w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(1)));
  /* e201c: asr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63))));
  /* e2020: add x2, x9, w2, uxth */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 2)))));
  /* e2024: add x9, x2, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) + ARC_X_R(c, 8)));
  /* e2028: asr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63))));
  /* e202c: add x11, x9, w11, uxth */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 11)))));
  /* e2030: add x9, x11, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 8)));
  /* e2034: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2038: add x3, x9, w3, uxth */
  ARC_X_W(c, 3, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 3)))));
  /* e203c: add x9, x3, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) + ARC_X_R(c, 8)));
  /* e2040: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2044: add x13, x9, w13, uxth */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 13)))));
  /* e2048: add x9, x13, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* e204c: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2050: add x5, x9, w5, uxth */
  ARC_X_W(c, 5, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 5)))));
  /* e2054: add x9, x5, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + ARC_X_R(c, 8)));
  /* e2058: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e205c: add x14, x9, w14, uxth */
  ARC_X_W(c, 14, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 14)))));
  /* e2060: add x9, x14, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 14) + ARC_X_R(c, 8)));
  /* e2064: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2068: add x24, x9, w6, uxth */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 6)))));
  /* e206c: add x9, x24, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* e2070: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2074: add x15, x9, w15, uxth */
  ARC_X_W(c, 15, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 15)))));
  /* e2078: add x9, x15, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 15) + ARC_X_R(c, 8)));
  /* e207c: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2080: add x7, x9, w7, uxth */
  ARC_X_W(c, 7, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 7)))));
  /* e2084: add x9, x7, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 7) + ARC_X_R(c, 8)));
  /* e2088: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e208c: add x21, x9, w16, uxth */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 16)))));
  /* e2090: sub w16, w19, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 19) - UINT64_C(1)));
  /* e2094: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* e2098: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e209c: add x19, x9, w16, uxth */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 16)))));
  /* e20a0: sub w16, w17, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 17) - UINT64_C(1)));
  /* e20a4: add x9, x19, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* e20a8: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e20ac: add x22, x9, w16, uxth */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 16)))));
  /* e20b0: sub w16, w20, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 20) - UINT64_C(1)));
  /* e20b4: add x9, x22, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* e20b8: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e20bc: add x20, x9, w16, uxth */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 16)))));
  /* e20c0: sub w16, w1, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 1) - UINT64_C(1)));
  /* e20c4: add x9, x20, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* e20c8: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e20cc: add x23, x9, w16, uxth */
  ARC_X_W(c, 23, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 16)))));
  /* e20d0: sub w16, w4, #0x26 */
  ARC_W_W(c, 16, (ARC_W_R(c, 4) - UINT64_C(38)));
  /* e20d4: add x9, x23, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* e20d8: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e20dc: mul x9, x9, x28 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 28))));
  /* e20e0: add x25, x9, w16, uxth */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 16)))));
  /* e20e4: add x9, x25, x12 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + ARC_X_R(c, 12)));
  /* e20e8: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e20ec: add x29, x9, w10, uxth */
  ARC_X_W(c, 29, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e20f0: sub w10, w2, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 2) - UINT64_C(1)));
  /* e20f4: add x9, x29, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + ARC_X_R(c, 8)));
  /* e20f8: sub x12, x29, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(1)));
  /* e20fc: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2100: add x16, x9, w10, uxth */
  ARC_X_W(c, 16, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e2104: sub w10, w11, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* e2108: add x9, x16, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + ARC_X_R(c, 8)));
  /* e210c: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2110: add x6, x9, w10, uxth */
  ARC_X_W(c, 6, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e2114: sub w10, w3, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 3) - UINT64_C(1)));
  /* e2118: add x9, x6, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) + ARC_X_R(c, 8)));
  /* e211c: sub x6, x6, #1 */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) - UINT64_C(1)));
  /* e2120: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2124: and x29, x6, #0xffff */
  ARC_X_W(c, 29, (ARC_X_R(c, 6) & UINT64_C(65535)));
  /* e2128: add x1, x9, w10, uxth */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e212c: sub w10, w13, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 13) - UINT64_C(1)));
  /* e2130: add x9, x1, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) + ARC_X_R(c, 8)));
  /* e2134: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2138: add x2, x9, w10, uxth */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e213c: sub w10, w5, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 5) - UINT64_C(1)));
  /* e2140: sub x5, x16, #1 */
  ARC_X_W(c, 5, (ARC_X_R(c, 16) - UINT64_C(1)));
  /* e2144: add x9, x2, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) + ARC_X_R(c, 8)));
  /* e2148: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e214c: add x4, x9, w10, uxth */
  ARC_X_W(c, 4, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e2150: sub w10, w14, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 14) - UINT64_C(1)));
  /* e2154: add x9, x4, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 4) + ARC_X_R(c, 8)));
  /* e2158: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e215c: add x3, x9, w10, uxth */
  ARC_X_W(c, 3, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e2160: sub w10, w24, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 24) - UINT64_C(1)));
  /* e2164: add x9, x3, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) + ARC_X_R(c, 8)));
  /* e2168: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e216c: add x26, x9, w10, uxth */
  ARC_X_W(c, 26, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e2170: sub w10, w15, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 15) - UINT64_C(1)));
  /* e2174: add x9, x26, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) + ARC_X_R(c, 8)));
  /* e2178: sub x26, x26, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) - UINT64_C(1)));
  /* e217c: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2180: add x30, x9, w10, uxth */
  ARC_X_W(c, 30, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e2184: sub w10, w7, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 7) - UINT64_C(1)));
  /* e2188: add x9, x30, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 30) + ARC_X_R(c, 8)));
  /* e218c: sub x30, x30, #1 */
  ARC_X_W(c, 30, (ARC_X_R(c, 30) - UINT64_C(1)));
  /* e2190: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e2194: add x7, x9, w10, uxth */
  ARC_X_W(c, 7, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e2198: sub w10, w21, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 21) - UINT64_C(1)));
  /* e219c: add x9, x7, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 7) + ARC_X_R(c, 8)));
  /* e21a0: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e21a4: add x21, x9, w10, uxth */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e21a8: sub w10, w19, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 19) - UINT64_C(1)));
  /* e21ac: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* e21b0: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e21b4: add x17, x9, w10, uxth */
  ARC_X_W(c, 17, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e21b8: sub w10, w22, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 22) - UINT64_C(1)));
  /* e21bc: and x22, x12, #0xffff */
  ARC_X_W(c, 22, (ARC_X_R(c, 12) & UINT64_C(65535)));
  /* e21c0: add x9, x17, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 17) + ARC_X_R(c, 8)));
  /* e21c4: sub x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) - UINT64_C(1)));
  /* e21c8: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e21cc: str x17, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 17));
  /* e21d0: add x14, x9, w10, uxth */
  ARC_X_W(c, 14, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e21d4: sub w10, w20, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 20) - UINT64_C(1)));
  /* e21d8: sub x20, x1, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) - UINT64_C(1)));
  /* e21dc: add x9, x14, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 14) + ARC_X_R(c, 8)));
  /* e21e0: sub x14, x14, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* e21e4: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e21e8: str x14, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 14));
  /* e21ec: add x24, x9, w10, uxth */
  ARC_X_W(c, 24, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e21f0: sub w10, w23, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 23) - UINT64_C(1)));
  /* e21f4: add x9, x24, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* e21f8: lsr x9, x9, #0x10 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(16)) & 63)));
  /* e21fc: add x27, x9, w10, uxth */
  ARC_X_W(c, 27, (ARC_X_R(c, 9) + ((uint64_t)(uint16_t)(ARC_W_R(c, 10)))));
  /* e2200: sub w9, w25, #0x26 */
  ARC_W_W(c, 9, (ARC_W_R(c, 25) - UINT64_C(38)));
  /* e2204: mov x10, #-0xffff */
  ARC_X_W(c, 10, UINT64_C(18446744073709486081));
  /* e2208: sub x25, x2, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* e220c: add x8, x27, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + ARC_X_R(c, 8)));
  /* e2210: lsr x8, x8, #0x10 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(16)) & 63)));
  /* e2214: mul x8, x8, x28 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 28))));
  /* e2218: and x28, x5, #0xffff */
  ARC_X_W(c, 28, (ARC_X_R(c, 5) & UINT64_C(65535)));
  /* e221c: add x13, x8, w9, uxth */
  ARC_X_W(c, 13, (ARC_X_R(c, 8) + ((uint64_t)(uint16_t)(ARC_W_R(c, 9)))));
  /* e2220: sub x8, x13, #0x10, lsl #12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) - UINT64_C(65536)));
  /* e2224: sub x11, x8, #0x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - UINT64_C(19)));
  /* e2228: lsl x8, x11, #0x2f */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(47)) & 63)));
  /* e222c: add x9, x22, x8, asr #63 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 63))));
  /* e2230: and x8, x20, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) & UINT64_C(65535)));
  /* e2234: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* e2238: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* e223c: add x15, x28, x9, asr #16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 28) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 16))));
  /* e2240: eor w9, w9, w12 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) ^ ARC_W_R(c, 12)));
  /* e2244: add x15, x15, x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* e2248: add x16, x29, x15, asr #16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 29) + ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> 16))));
  /* e224c: add x16, x16, x10 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + ARC_X_R(c, 10)));
  /* e2250: add x1, x8, x16, asr #16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 16)) >> 16))));
  /* e2254: and x8, x25, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) & UINT64_C(65535)));
  /* e2258: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
  /* e225c: add x2, x1, x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + ARC_X_R(c, 10)));
  /* e2260: add x1, x8, x2, asr #16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 16))));
  /* e2264: sub x8, x4, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 4) - UINT64_C(1)));
  /* e2268: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* e226c: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e2270: add x1, x1, x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + ARC_X_R(c, 10)));
  /* e2274: str x8, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 8));
  /* e2278: add x4, x8, x1, asr #16 */
  ARC_X_W(c, 4, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 1)) >> 16))));
  /* e227c: sub x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* e2280: sub x3, x7, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 7) - UINT64_C(1)));
  /* e2284: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
  /* e2288: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e228c: add x19, x4, x10 */
  ARC_X_W(c, 19, (ARC_X_R(c, 4) + ARC_X_R(c, 10)));
  /* e2290: stp x8, x3, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* e2294: add x4, x8, x19, asr #16 */
  ARC_X_W(c, 4, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 19)) >> 16))));
  /* e2298: and x8, x26, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) & UINT64_C(65535)));
  /* e229c: str x8, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 8));
  /* e22a0: add x4, x4, x10 */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + ARC_X_R(c, 10)));
  /* e22a4: add x23, x8, x4, asr #16 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 4)) >> 16))));
  /* e22a8: and x8, x30, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 30) & UINT64_C(65535)));
  /* e22ac: str x8, [sp, #0x78] */
  arc_st64(((c)->sp + INT64_C(120)), ARC_X_R(c, 8));
  /* e22b0: add x23, x23, x10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ARC_X_R(c, 10)));
  /* e22b4: add x8, x8, x23, asr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> 16))));
  /* e22b8: add x7, x8, x10 */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* e22bc: and x8, x3, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) & UINT64_C(65535)));
  /* e22c0: sub x3, x21, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* e22c4: str x8, [sp, #0x88] */
  arc_st64(((c)->sp + INT64_C(136)), ARC_X_R(c, 8));
  /* e22c8: add x8, x8, x7, asr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 7)) >> 16))));
  /* e22cc: eor w7, w7, w30 */
  ARC_W_W(c, 7, (ARC_W_R(c, 7) ^ ARC_W_R(c, 30)));
  /* e22d0: str x3, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), ARC_X_R(c, 3));
  /* e22d4: add x21, x8, x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* e22d8: and x8, x3, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) & UINT64_C(65535)));
  /* e22dc: str x8, [sp, #0xa8] */
  arc_st64(((c)->sp + INT64_C(168)), ARC_X_R(c, 8));
  /* e22e0: add x8, x8, x21, asr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 16))));
  /* e22e4: add x3, x8, x10 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* e22e8: and x8, x17, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 17) & UINT64_C(65535)));
  /* e22ec: str x8, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), ARC_X_R(c, 8));
  /* e22f0: add x8, x8, x3, asr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 3)) >> 16))));
  /* e22f4: str x3, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 3));
  /* e22f8: add x17, x8, x10 */
  ARC_X_W(c, 17, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* e22fc: and x8, x14, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 14) & UINT64_C(65535)));
  /* e2300: sub x14, x24, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* e2304: str x8, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 8));
  /* e2308: add x8, x8, x17, asr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 17)) >> 16))));
  /* e230c: str x17, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 17));
  /* e2310: add x17, x8, x10 */
  ARC_X_W(c, 17, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* e2314: and x8, x14, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 14) & UINT64_C(65535)));
  /* e2318: str x14, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 14));
  /* e231c: str x8, [sp, #0xc8] */
  arc_st64(((c)->sp + INT64_C(200)), ARC_X_R(c, 8));
  /* e2320: add x8, x8, x17, asr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 17)) >> 16))));
  /* e2324: sub w14, w27, #1 */
  ARC_W_W(c, 14, (ARC_W_R(c, 27) - UINT64_C(1)));
  /* e2328: and x14, x14, #0xffff */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & UINT64_C(65535)));
  /* e232c: str x17, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 17));
  /* e2330: add x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* e2334: str x14, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 14));
  /* e2338: str x8, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 8));
  /* e233c: add x8, x14, x8, asr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 14) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 16))));
  /* e2340: mov x14, #-0x7fff */
  ARC_X_W(c, 14, UINT64_C(18446744073709518849));
  /* e2344: add x8, x8, x14 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 14)));
  /* e2348: str x8, [sp, #0x98] */
  arc_st64(((c)->sp + INT64_C(152)), ARC_X_R(c, 8));
  /* e234c: ubfx w8, w8, #0x10, #1 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 8)) >> 16) & UINT64_C(1)));
  /* e2350: sub w27, w8, #1 */
  ARC_W_W(c, 27, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* e2354: sub x8, x13, #0x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) - UINT64_C(38)));
  /* e2358: eor w13, w16, w6 */
  ARC_W_W(c, 13, (ARC_W_R(c, 16) ^ ARC_W_R(c, 6)));
  /* e235c: sxtw x24, w27 */
  ARC_X_W(c, 24, ((int64_t)(int32_t)(ARC_W_R(c, 27))));
  /* e2360: and w11, w11, w27 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & ARC_W_R(c, 27)));
  /* e2364: and x11, x11, #0xffff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e2368: bic x8, x8, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & (~ARC_X_R(c, 24))));
  /* e236c: orr x12, x11, x8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) | ARC_X_R(c, 8)));
  /* e2370: mov x8, #-0xffed */
  ARC_X_W(c, 8, UINT64_C(18446744073709486099));
  /* e2374: and w11, w9, w27 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) & ARC_W_R(c, 27)));
  /* e2378: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* e237c: str x12, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 12));
  /* e2380: and x8, x11, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e2384: lsl x11, x9, #0x2f */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(47)) & 63)));
  /* e2388: eor w12, w15, w5 */
  ARC_W_W(c, 12, (ARC_W_R(c, 15) ^ ARC_W_R(c, 5)));
  /* e238c: eor x17, x8, x22 */
  ARC_X_W(c, 17, (ARC_X_R(c, 8) ^ ARC_X_R(c, 22)));
  /* e2390: and w8, w12, w27 */
  ARC_W_W(c, 8, (ARC_W_R(c, 12) & ARC_W_R(c, 27)));
  /* e2394: eor w15, w2, w20 */
  ARC_W_W(c, 15, (ARC_W_R(c, 2) ^ ARC_W_R(c, 20)));
  /* e2398: ldr x12, [sp, #0x18] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(24))));
  /* e239c: add x11, x17, x11, asr #63 */
  ARC_X_W(c, 11, (ARC_X_R(c, 17) + ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 63))));
  /* e23a0: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e23a4: ldr x20, [sp, #0x58] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(88))));
  /* e23a8: eor x3, x8, x28 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) ^ ARC_X_R(c, 28)));
  /* e23ac: and w8, w13, w27 */
  ARC_W_W(c, 8, (ARC_W_R(c, 13) & ARC_W_R(c, 27)));
  /* e23b0: add x14, x11, x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* e23b4: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e23b8: add x11, x3, x14, asr #16 */
  ARC_X_W(c, 11, (ARC_X_R(c, 3) + ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> 16))));
  /* e23bc: eor x16, x8, x29 */
  ARC_X_W(c, 16, (ARC_X_R(c, 8) ^ ARC_X_R(c, 29)));
  /* e23c0: and w8, w15, w27 */
  ARC_W_W(c, 8, (ARC_W_R(c, 15) & ARC_W_R(c, 27)));
  /* e23c4: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e23c8: eor w15, w1, w25 */
  ARC_W_W(c, 15, (ARC_W_R(c, 1) ^ ARC_W_R(c, 25)));
  /* e23cc: add x13, x11, x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* e23d0: eor x5, x8, x12 */
  ARC_X_W(c, 5, (ARC_X_R(c, 8) ^ ARC_X_R(c, 12)));
  /* e23d4: ldr x12, [sp, #0x10] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(16))));
  /* e23d8: add x11, x16, x13, asr #16 */
  ARC_X_W(c, 11, (ARC_X_R(c, 16) + ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> 16))));
  /* e23dc: and w8, w15, w27 */
  ARC_W_W(c, 8, (ARC_W_R(c, 15) & ARC_W_R(c, 27)));
  /* e23e0: eor w1, w19, w12 */
  ARC_W_W(c, 1, (ARC_W_R(c, 19) ^ ARC_W_R(c, 12)));
  /* e23e4: ldr x12, [sp, #0x28] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(40))));
  /* e23e8: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e23ec: add x11, x11, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
  /* e23f0: add x15, x5, x11, asr #16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 5) + ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> 16))));
  /* e23f4: eor x28, x8, x12 */
  ARC_X_W(c, 28, (ARC_X_R(c, 8) ^ ARC_X_R(c, 12)));
  /* e23f8: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e23fc: add x12, x15, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* e2400: and w15, w1, w27 */
  ARC_W_W(c, 15, (ARC_W_R(c, 1) & ARC_W_R(c, 27)));
  /* e2404: eor w2, w4, w8 */
  ARC_W_W(c, 2, (ARC_W_R(c, 4) ^ ARC_W_R(c, 8)));
  /* e2408: ldr x8, [sp, #0x38] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(56))));
  /* e240c: add x1, x28, x12, asr #16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 28) + ((uint64_t)((int64_t)(ARC_X_R(c, 12)) >> 16))));
  /* e2410: and x15, x15, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & UINT64_C(65535)));
  /* e2414: eor w4, w23, w26 */
  ARC_W_W(c, 4, (ARC_W_R(c, 23) ^ ARC_W_R(c, 26)));
  /* e2418: eor x19, x15, x8 */
  ARC_X_W(c, 19, (ARC_X_R(c, 15) ^ ARC_X_R(c, 8)));
  /* e241c: and w15, w2, w27 */
  ARC_W_W(c, 15, (ARC_W_R(c, 2) & ARC_W_R(c, 27)));
  /* e2420: ldr x8, [sp, #0x48] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(72))));
  /* e2424: add x1, x1, x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + ARC_X_R(c, 10)));
  /* e2428: and x15, x15, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & UINT64_C(65535)));
  /* e242c: add x2, x19, x1, asr #16 */
  ARC_X_W(c, 2, (ARC_X_R(c, 19) + ((uint64_t)((int64_t)(ARC_X_R(c, 1)) >> 16))));
  /* e2430: eor x23, x15, x8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 15) ^ ARC_X_R(c, 8)));
  /* e2434: and w15, w4, w27 */
  ARC_W_W(c, 15, (ARC_W_R(c, 4) & ARC_W_R(c, 27)));
  /* e2438: ldr x8, [sp, #0x60] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(96))));
  /* e243c: and x15, x15, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & UINT64_C(65535)));
  /* e2440: ldr x4, [sp, #0x30] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(48))));
  /* e2444: add x2, x2, x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ARC_X_R(c, 10)));
  /* e2448: eor x25, x15, x8 */
  ARC_X_W(c, 25, (ARC_X_R(c, 15) ^ ARC_X_R(c, 8)));
  /* e244c: ldr x8, [sp, #0x50] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(80))));
  /* e2450: add x6, x23, x2, asr #16 */
  ARC_X_W(c, 6, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 16))));
  /* e2454: and w15, w7, w27 */
  ARC_W_W(c, 15, (ARC_W_R(c, 7) & ARC_W_R(c, 27)));
  /* e2458: eor w7, w21, w8 */
  ARC_W_W(c, 7, (ARC_W_R(c, 21) ^ ARC_W_R(c, 8)));
  /* e245c: ldr x8, [sp, #0x78] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(120))));
  /* e2460: add x30, x6, x10 */
  ARC_X_W(c, 30, (ARC_X_R(c, 6) + ARC_X_R(c, 10)));
  /* e2464: and x15, x15, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & UINT64_C(65535)));
  /* e2468: add x6, x25, x30, asr #16 */
  ARC_X_W(c, 6, (ARC_X_R(c, 25) + ((uint64_t)((int64_t)(ARC_X_R(c, 30)) >> 16))));
  /* e246c: eor x21, x15, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 15) ^ ARC_X_R(c, 8)));
  /* e2470: ldr x8, [sp, #0x68] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(104))));
  /* e2474: and w15, w7, w27 */
  ARC_W_W(c, 15, (ARC_W_R(c, 7) & ARC_W_R(c, 27)));
  /* e2478: add x22, x6, x10 */
  ARC_X_W(c, 22, (ARC_X_R(c, 6) + ARC_X_R(c, 10)));
  /* e247c: and x15, x15, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & UINT64_C(65535)));
  /* e2480: eor w7, w4, w8 */
  ARC_W_W(c, 7, (ARC_W_R(c, 4) ^ ARC_W_R(c, 8)));
  /* e2484: ldr x8, [sp, #0x88] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(136))));
  /* e2488: add x6, x21, x22, asr #16 */
  ARC_X_W(c, 6, (ARC_X_R(c, 21) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 16))));
  /* e248c: eor x29, x15, x8 */
  ARC_X_W(c, 29, (ARC_X_R(c, 15) ^ ARC_X_R(c, 8)));
  /* e2490: and w15, w7, w27 */
  ARC_W_W(c, 15, (ARC_W_R(c, 7) & ARC_W_R(c, 27)));
  /* e2494: ldr x8, [sp, #0x80] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(128))));
  /* e2498: ldr x7, [sp, #0x40] */
  ARC_X_W(c, 7, arc_ld64(((c)->sp + INT64_C(64))));
  /* e249c: add x4, x6, x10 */
  ARC_X_W(c, 4, (ARC_X_R(c, 6) + ARC_X_R(c, 10)));
  /* e24a0: and x15, x15, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & UINT64_C(65535)));
  /* e24a4: add x6, x29, x4, asr #16 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) + ((uint64_t)((int64_t)(ARC_X_R(c, 4)) >> 16))));
  /* e24a8: eor w7, w7, w8 */
  ARC_W_W(c, 7, (ARC_W_R(c, 7) ^ ARC_W_R(c, 8)));
  /* e24ac: ldr x8, [sp, #0xa8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(168))));
  /* e24b0: add x6, x6, x10 */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) + ARC_X_R(c, 10)));
  /* e24b4: eor x8, x15, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 15) ^ ARC_X_R(c, 8)));
  /* e24b8: and w15, w7, w27 */
  ARC_W_W(c, 15, (ARC_W_R(c, 7) & ARC_W_R(c, 27)));
  /* e24bc: str x8, [sp, #0xa8] */
  arc_st64(((c)->sp + INT64_C(168)), ARC_X_R(c, 8));
  /* e24c0: add x7, x8, x6, asr #16 */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 6)) >> 16))));
  /* e24c4: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* e24c8: and x15, x15, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & UINT64_C(65535)));
  /* e24cc: eor w20, w20, w8 */
  ARC_W_W(c, 20, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* e24d0: ldr x8, [sp, #0xb0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(176))));
  /* e24d4: add x7, x7, x10 */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) + ARC_X_R(c, 10)));
  /* e24d8: eor x8, x15, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 15) ^ ARC_X_R(c, 8)));
  /* e24dc: and w15, w20, w27 */
  ARC_W_W(c, 15, (ARC_W_R(c, 20) & ARC_W_R(c, 27)));
  /* e24e0: ldr x20, [sp, #0x70] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(112))));
  /* e24e4: str x8, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), ARC_X_R(c, 8));
  /* e24e8: add x26, x8, x7, asr #16 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 7)) >> 16))));
  /* e24ec: ldr x8, [sp, #0xa0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(160))));
  /* e24f0: and x15, x15, #0xffff */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & UINT64_C(65535)));
  /* e24f4: eor w8, w8, w20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) ^ ARC_W_R(c, 20)));
  /* e24f8: ldr x20, [sp, #0xb8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(184))));
  /* e24fc: add x26, x26, x10 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + ARC_X_R(c, 10)));
  /* e2500: and w8, w8, w27 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 27)));
  /* e2504: eor x15, x15, x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) ^ ARC_X_R(c, 20)));
  /* e2508: ldr x20, [sp, #0xc8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(200))));
  /* e250c: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e2510: str x15, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 15));
  /* e2514: add x15, x15, x26, asr #16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + ((uint64_t)((int64_t)(ARC_X_R(c, 26)) >> 16))));
  /* e2518: eor x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) ^ ARC_X_R(c, 20)));
  /* e251c: ldr x20, [sp, #0xc0] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(192))));
  /* e2520: add x27, x15, x10 */
  ARC_X_W(c, 27, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* e2524: ldr x15, [sp, #0x98] */
  ARC_X_W(c, 15, arc_ld64(((c)->sp + INT64_C(152))));
  /* e2528: str x8, [sp, #0xc8] */
  arc_st64(((c)->sp + INT64_C(200)), ARC_X_R(c, 8));
  /* e252c: add x8, x8, x27, asr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)((int64_t)(ARC_X_R(c, 27)) >> 16))));
  /* e2530: bic x20, x20, x24 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) & (~ARC_X_R(c, 24))));
  /* e2534: and x15, x15, x24 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 24)));
  /* e2538: orr x15, x15, x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) | ARC_X_R(c, 20)));
  /* e253c: add x10, x8, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 10)));
  /* e2540: add x8, x15, x10, asr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 15) + ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 16))));
  /* e2544: str x15, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 15));
  /* e2548: mov x15, #-0x7fff */
  ARC_X_W(c, 15, UINT64_C(18446744073709518849));
  /* e254c: add x24, x8, x15 */
  ARC_X_W(c, 24, (ARC_X_R(c, 8) + ARC_X_R(c, 15)));
  /* e2550: ubfx w8, w24, #0x10, #1 */
  ARC_W_W(c, 8, (((uint32_t)(ARC_W_R(c, 24)) >> 16) & UINT64_C(1)));
  /* e2554: sub w15, w8, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* e2558: and w8, w9, w15 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & ARC_W_R(c, 15)));
  /* e255c: sxtw x20, w15 */
  ARC_X_W(c, 20, ((int64_t)(int32_t)(ARC_W_R(c, 15))));
  /* e2560: and w9, w14, w15 */
  ARC_W_W(c, 9, (ARC_W_R(c, 14) & ARC_W_R(c, 15)));
  /* e2564: ldr x14, [sp, #8] */
  ARC_X_W(c, 14, arc_ld64(((c)->sp + INT64_C(8))));
  /* e2568: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e256c: and x9, x9, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e2570: bic x17, x17, x20 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) & (~ARC_X_R(c, 20))));
  /* e2574: and w11, w11, w15 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & ARC_W_R(c, 15)));
  /* e2578: and w12, w12, w15 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & ARC_W_R(c, 15)));
  /* e257c: bic x14, x14, x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 20))));
  /* e2580: orr x8, x8, x14 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 14)));
  /* e2584: orr x14, x9, x17 */
  ARC_X_W(c, 14, (ARC_X_R(c, 9) | ARC_X_R(c, 17)));
  /* e2588: and w9, w13, w15 */
  ARC_W_W(c, 9, (ARC_W_R(c, 13) & ARC_W_R(c, 15)));
  /* e258c: and x9, x9, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e2590: bic x13, x3, x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) & (~ARC_X_R(c, 20))));
  /* e2594: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e2598: orr x13, x9, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) | ARC_X_R(c, 13)));
  /* e259c: and x9, x11, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e25a0: bic x11, x16, x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 16) & (~ARC_X_R(c, 20))));
  /* e25a4: orr x9, x9, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | ARC_X_R(c, 11)));
  /* e25a8: lsr x11, x8, #8 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63)));
  /* e25ac: and x8, x12, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) & UINT64_C(65535)));
  /* e25b0: bic x12, x5, x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 5) & (~ARC_X_R(c, 20))));
  /* e25b4: strb w13, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 13));
  /* e25b8: lsr x13, x13, #8 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(8)) & 63)));
  /* e25bc: orr x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 12)));
  /* e25c0: lsr x12, x14, #8 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(8)) & 63)));
  /* e25c4: strb w11, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 11));
  /* e25c8: and w11, w1, w15 */
  ARC_W_W(c, 11, (ARC_W_R(c, 1) & ARC_W_R(c, 15)));
  /* e25cc: strb w14, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 14));
  /* e25d0: bic x14, x28, x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 28) & (~ARC_X_R(c, 20))));
  /* e25d4: and x11, x11, #0xffff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e25d8: strb w12, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 12));
  /* e25dc: and w12, w2, w15 */
  ARC_W_W(c, 12, (ARC_W_R(c, 2) & ARC_W_R(c, 15)));
  /* e25e0: orr x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) | ARC_X_R(c, 14)));
  /* e25e4: strb w13, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 13));
  /* e25e8: and x12, x12, #0xffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & UINT64_C(65535)));
  /* e25ec: bic x13, x19, x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 19) & (~ARC_X_R(c, 20))));
  /* e25f0: strb w9, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 9));
  /* e25f4: lsr x9, x9, #8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63)));
  /* e25f8: orr x12, x12, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) | ARC_X_R(c, 13)));
  /* e25fc: and w13, w30, w15 */
  ARC_W_W(c, 13, (ARC_W_R(c, 30) & ARC_W_R(c, 15)));
  /* e2600: strb w11, [x0, #0xa] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(10)), ARC_W_R(c, 11));
  /* e2604: lsr x11, x11, #8 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(8)) & 63)));
  /* e2608: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* e260c: lsr x8, x8, #8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63)));
  /* e2610: strb w9, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 9));
  /* e2614: and x9, x13, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 13) & UINT64_C(65535)));
  /* e2618: bic x13, x23, x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 23) & (~ARC_X_R(c, 20))));
  /* e261c: strb w12, [x0, #0xc] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 12));
  /* e2620: lsr x12, x12, #8 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(8)) & 63)));
  /* e2624: orr x9, x9, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | ARC_X_R(c, 13)));
  /* e2628: strb w11, [x0, #0xb] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(11)), ARC_W_R(c, 11));
  /* e262c: and w11, w4, w15 */
  ARC_W_W(c, 11, (ARC_W_R(c, 4) & ARC_W_R(c, 15)));
  /* e2630: bic x13, x25, x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 25) & (~ARC_X_R(c, 20))));
  /* e2634: strb w8, [x0, #9] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* e2638: and w8, w22, w15 */
  ARC_W_W(c, 8, (ARC_W_R(c, 22) & ARC_W_R(c, 15)));
  /* e263c: and x11, x11, #0xffff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e2640: strb w12, [x0, #0xd] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(13)), ARC_W_R(c, 12));
  /* e2644: bic x12, x21, x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 21) & (~ARC_X_R(c, 20))));
  /* e2648: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e264c: strb w9, [x0, #0xe] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(14)), ARC_W_R(c, 9));
  /* e2650: lsr x9, x9, #8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63)));
  /* e2654: orr x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) | ARC_X_R(c, 12)));
  /* e2658: and w12, w6, w15 */
  ARC_W_W(c, 12, (ARC_W_R(c, 6) & ARC_W_R(c, 15)));
  /* e265c: orr x8, x8, x13 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 13)));
  /* e2660: strb w11, [x0, #0x12] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(18)), ARC_W_R(c, 11));
  /* e2664: strb w9, [x0, #0xf] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(15)), ARC_W_R(c, 9));
  /* e2668: and x9, x12, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) & UINT64_C(65535)));
  /* e266c: bic x12, x29, x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) & (~ARC_X_R(c, 20))));
  /* e2670: strb w8, [x0, #0x10] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 8));
  /* e2674: lsr x8, x8, #8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63)));
  /* e2678: orr x9, x9, x12 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | ARC_X_R(c, 12)));
  /* e267c: lsr x11, x11, #8 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(8)) & 63)));
  /* e2680: ldr x12, [sp, #0xa8] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(168))));
  /* e2684: strb w9, [x0, #0x14] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(20)), ARC_W_R(c, 9));
  /* e2688: lsr x9, x9, #8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63)));
  /* e268c: strb w8, [x0, #0x11] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(17)), ARC_W_R(c, 8));
  /* e2690: and w8, w7, w15 */
  ARC_W_W(c, 8, (ARC_W_R(c, 7) & ARC_W_R(c, 15)));
  /* e2694: strb w11, [x0, #0x13] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(19)), ARC_W_R(c, 11));
  /* e2698: and w11, w26, w15 */
  ARC_W_W(c, 11, (ARC_W_R(c, 26) & ARC_W_R(c, 15)));
  /* e269c: and x8, x8, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(65535)));
  /* e26a0: bic x12, x12, x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & (~ARC_X_R(c, 20))));
  /* e26a4: strb w9, [x0, #0x15] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(21)), ARC_W_R(c, 9));
  /* e26a8: and x9, x11, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e26ac: ldr x11, [sp, #0xb0] */
  ARC_X_W(c, 11, arc_ld64(((c)->sp + INT64_C(176))));
  /* e26b0: orr x8, x8, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 12)));
  /* e26b4: strb w8, [x0, #0x16] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(22)), ARC_W_R(c, 8));
  /* e26b8: lsr x8, x8, #8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63)));
  /* e26bc: bic x11, x11, x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & (~ARC_X_R(c, 20))));
  /* e26c0: ldp x22, x21, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e26c4: orr x9, x9, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | ARC_X_R(c, 11)));
  /* e26c8: and w11, w27, w15 */
  ARC_W_W(c, 11, (ARC_W_R(c, 27) & ARC_W_R(c, 15)));
  /* e26cc: strb w8, [x0, #0x17] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(23)), ARC_W_R(c, 8));
  /* e26d0: and x8, x11, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* e26d4: ldp x11, x12, [sp, #0xb8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(184));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* e26d8: strb w9, [x0, #0x18] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(24)), ARC_W_R(c, 9));
  /* e26dc: lsr x9, x9, #8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63)));
  /* e26e0: ldp x26, x25, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e26e4: bic x11, x11, x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & (~ARC_X_R(c, 20))));
  /* e26e8: strb w9, [x0, #0x19] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(25)), ARC_W_R(c, 9));
  /* e26ec: and w9, w10, w15 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) & ARC_W_R(c, 15)));
  /* e26f0: orr x8, x8, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ARC_X_R(c, 11)));
  /* e26f4: ldr x10, [sp, #0xc8] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(200))));
  /* e26f8: and x9, x9, #0xffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e26fc: strb w8, [x0, #0x1a] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(26)), ARC_W_R(c, 8));
  /* e2700: lsr x8, x8, #8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63)));
  /* e2704: and x11, x24, x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 24) & ARC_X_R(c, 20)));
  /* e2708: bic x10, x10, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & (~ARC_X_R(c, 20))));
  /* e270c: bic x12, x12, x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & (~ARC_X_R(c, 20))));
  /* e2710: orr x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) | ARC_X_R(c, 10)));
  /* e2714: strb w8, [x0, #0x1b] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(27)), ARC_W_R(c, 8));
  /* e2718: orr x8, x11, x12 */
  ARC_X_W(c, 8, (ARC_X_R(c, 11) | ARC_X_R(c, 12)));
  /* e271c: strb w9, [x0, #0x1c] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(28)), ARC_W_R(c, 9));
  /* e2720: lsr x9, x9, #8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(8)) & 63)));
  /* e2724: strb w8, [x0, #0x1e] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(30)), ARC_W_R(c, 8));
  /* e2728: lsr x8, x8, #8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(8)) & 63)));
  /* e272c: ldp x20, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2730: strb w9, [x0, #0x1d] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(29)), ARC_W_R(c, 9));
  /* e2734: ldp x24, x23, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e2738: strb w8, [x0, #0x1f] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(31)), ARC_W_R(c, 8));
  /* e273c: ldp x28, x27, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* e2740: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2744: add sp, sp, #0x130 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(304)));
  /* e2748: ret  */
  return;
}

void fn2_e3948(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076788040));
  /* e3948: str d8, [sp, #-0x20]! */
  arc_st64(((c)->sp + INT64_C(-32)), (c)->q[8].u64[0]);
  (c)->sp = (c)->sp + INT64_C(-32);
  /* e394c: stp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3950: str x19, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 19));
  /* e3954: add x29, sp, #8 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(8)));
  /* e3958: cmp w1, #0x11 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(17));
  /* e395c: b.eq #0xe397c */
  if (ARC_COND(c, 0)) goto L_e397c;
  /* e3960: cmp w1, #0xd */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(13));
  /* e3964: b.ne #0xe39c0 */
  if (ARC_COND(c, 1)) goto L_e39c0;
  /* e3968: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* e396c: ldp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e3970: ldr x19, [sp, #0x18] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(24))));
  /* e3974: ldr d8, [sp], #0x20 */
  arc_du_w(c, 8, arc_ld64((c)->sp));
  (c)->sp = (c)->sp + INT64_C(32);
  /* e3978: b #0x215300 */
  fn2_215300(c); return;
L_e397c:;
  /* e397c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e3980: bl #0x215224 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(932228));
  fn2_215224(c);
  /* e3984: ldr d1, [x19, #0x38] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* e3988: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* e398c: ldr x9, [x19, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e3990: fadd d0, d0, d1 */
  arc_d_w(c, 0, (double)(arc_fadd64(ARC_D_R(c, 0), ARC_D_R(c, 1))));
  /* e3994: str d0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  /* e3998: cbz x9, #0xe39c0 */
  if ((ARC_X_R(c, 9)) == 0) goto L_e39c0;
  /* e399c: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* e39a0: bl #0x1d983c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(932260));
  fn2_1d983c(c);
  /* e39a4: tbz w0, #0, #0xe39d0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_e39d0;
  /* e39a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e39ac: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e39b0: ldp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e39b4: ldr x19, [sp, #0x18] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(24))));
  /* e39b8: ldr d8, [sp], #0x20 */
  arc_du_w(c, 8, arc_ld64((c)->sp));
  (c)->sp = (c)->sp + INT64_C(32);
  /* e39bc: b #0xe4234 */
  fn2_e4234(c); return;
L_e39c0:;
  /* e39c0: ldp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e39c4: ldr x19, [sp, #0x18] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(24))));
  /* e39c8: ldr d8, [sp], #0x20 */
  arc_du_w(c, 8, arc_ld64((c)->sp));
  (c)->sp = (c)->sp + INT64_C(32);
  /* e39cc: ret  */
  return;
L_e39d0:;
  /* e39d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e39d4: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e39d8: ldp x29, x30, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e39dc: ldr x19, [sp, #0x18] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(24))));
  /* e39e0: ldr d8, [sp], #0x20 */
  arc_du_w(c, 8, arc_ld64((c)->sp));
  (c)->sp = (c)->sp + INT64_C(32);
  /* e39e4: b #0xe4084 */
  fn2_e4084(c); return;
}

void fn2_e695c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076800348));
  /* e695c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* e6960: ret  */
  return;
}

void fn2_e76a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076803744));
  /* e76a0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e76a4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e76a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e76ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e76b0: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(947892));
  fn2_1b6040(c);
  /* e76b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e76b8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e76bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e76c0: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_e9e70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076813936));
  /* e9e70: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* e9e74: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* e9e78: b #0xe9ec4 */
  fn2_e9ec4(c); return;
}

void fn2_ebbb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076821424));
  /* ebbb0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ebbb4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ebbb8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ebbbc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ebbc0: bl #0xebadc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(965572));
  fn2_ebadc(c);
  /* ebbc4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ebbc8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ebbcc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ebbd0: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_f39d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076853712));
  /* f39d0: mov x8, #0x1111111111111111 */
  ARC_X_W(c, 8, UINT64_C(1229782938247303441));
  /* f39d4: movk x8, #0x3fa1, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4584945895639875584)));
  /* f39d8: fmov d0, x8 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 8)));
  /* f39dc: ret  */
  return;
}

void fn2_f3b2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076854060));
  /* f3b2c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f3b30: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* f3b34: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f3b38: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f3b3c: add x8, x8, #0x158 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(344)));
  /* f3b40: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* f3b44: tbz w8, #0, #0xf3b64 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f3b64;
L_f3b48:;
  /* f3b48: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f3b4c: add x0, x0, #0x150 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(336)));
  /* f3b50: adrp x1, #0x253000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2437120)));
  /* f3b54: add x1, x1, #0x220 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(544)));
  /* f3b58: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3b5c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3b60: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_f3b64:;
  /* f3b64: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f3b68: add x0, x0, #0x158 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(344)));
  /* f3b6c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(998256));
  fn2_24b710(c);
  /* f3b70: cbz w0, #0xf3b48 */
  if ((ARC_W_R(c, 0)) == 0) goto L_f3b48;
  /* f3b74: adrp x19, #0x25d000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f3b78: add x19, x19, #0x150 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(336)));
  /* f3b7c: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* f3b80: add x1, x1, #0xf18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3864)));
  /* f3b84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3b88: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f3b8c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(998288));
  fn2_1b8fd4(c);
  /* f3b90: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* f3b94: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* f3b98: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* f3b9c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* f3ba0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f3ba4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(998312));
  fn2_24b6f0(c);
  /* f3ba8: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f3bac: add x0, x0, #0x158 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(344)));
  /* f3bb0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(998324));
  fn2_24b720(c);
  /* f3bb4: b #0xf3b48 */
  goto L_f3b48;
}

void fn2_f4d60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076858720));
  /* f4d60: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* f4d64: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* f4d68: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* f4d6c: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* f4d70: ret  */
  return;
}

void fn2_f602c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076863532));
  /* f602c: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f6030: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* f6034: tbz w9, #0, #0xf6040 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_f6040;
  /* f6038: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f603c: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_f6040:;
  /* f6040: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* f6044: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6048: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f604c: ldr x9, [x2] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 2)));
  /* f6050: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* f6054: ldr d0, [x9] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 9)));
  /* f6058: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* f605c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1007712));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f6060: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6064: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* f6068: ret  */
  return;
}

void fn2_fce84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076891780));
  /* fce84: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fce88: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fce8c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fce90: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fce94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fce98: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* fce9c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* fcea0: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* fcea4: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* fcea8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* fceac: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* fceb0: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* fceb4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1035960));
  fn2_1bc084(c);
  /* fceb8: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* fcebc: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* fcec0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fcec4: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* fcec8: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* fcecc: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* fced0: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* fced4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fced8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fcedc: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fcee0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fcee4: b #0xfcf84 */
  fn2_fcf84(c); return;
}

void fn2_12888c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077070476));
  /* 12888c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 128890: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 128894: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 128898: add x8, x8, #0x1a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(416)));
  /* 12889c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1288a0: tbnz w8, #0, #0x1288d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1288d0;
  /* 1288a4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1288a8: add x0, x0, #0x1a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(416)));
  /* 1288ac: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214640));
  fn2_24b710(c);
  /* 1288b0: cbz w0, #0x1288d0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1288d0;
  /* 1288b4: nop  */
  /* nop: no architectural effect here */
  /* 1288b8: adr x0, #0x12a688 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1222280)));
  /* 1288bc: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1214656));
  fn2_1aff64(c);
  /* 1288c0: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1288c4: add x0, x0, #0x1a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(416)));
  /* 1288c8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1288cc: b #0x24b720 */
  fn2_24b720(c); return;
L_1288d0:;
  /* 1288d0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1288d4: ret  */
  return;
}

void fn2_129914(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074708));
  /* 129914: ldrb w0, [x0, #0x69] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(105))));
  /* 129918: ret  */
  return;
}

void fn2_129a54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075028));
  /* 129a54: add x1, x0, #0xd8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(216)));
  /* 129a58: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129a5c: b #0x1ccc88 */
  fn2_1ccc88(c); return;
}

void fn2_129b94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075348));
  /* 129b94: ldr d0, [x0, #0x158] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(344))));
  /* 129b98: ret  */
  return;
}

void fn2_129cd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075668));
  /* 129cd4: add x1, x0, #0x1ca */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(458)));
  /* 129cd8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129cdc: b #0x1ccc88 */
  fn2_1ccc88(c); return;
}

void fn2_129e14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075988));
  /* 129e14: add x1, x0, #0x230 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(560)));
  /* 129e18: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129e1c: b #0x1d9754 */
  fn2_1d9754(c); return;
}

void fn2_129f54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076308));
  /* 129f54: ldr x0, [x0, #0x2b8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(696))));
  /* 129f58: ret  */
  return;
}

void fn2_12a094(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076628));
  /* 12a094: add x1, x0, #0x348 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(840)));
  /* 12a098: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12a09c: b #0x1d9754 */
  fn2_1d9754(c); return;
}

void fn2_12a1d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076948));
  /* 12a1d4: ldr x0, [x0, #0x3c8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(968))));
  /* 12a1d8: ret  */
  return;
}

void fn2_12a314(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077077268));
  /* 12a314: ldr x0, [x0, #0x458] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1112))));
  /* 12a318: ret  */
  return;
}

void fn2_12ada8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077079976));
  /* 12ada8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12adac: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12adb0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12adb4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12adb8: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1224124));
  fn2_1b6040(c);
  /* 12adbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12adc0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12adc4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12adc8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_12c1f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077085172));
  /* 12c1f4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 12c1f8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c1fc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12c200: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12c204: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12c208: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 12c20c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12c210: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 12c214: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12c218: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 12c21c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12c220: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229348));
  fn2_1b5d1c(c);
  /* 12c224: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 12c228: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 12c22c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c230: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 12c234: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 12c238: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12c23c: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12c240: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229380));
  fn2_1d2c2c(c);
  /* 12c244: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12c248: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229388));
  fn2_1d2c2c(c);
  /* 12c24c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12c250: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* 12c254: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* 12c258: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c25c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12c260: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 12c264: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12c268: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12c26c: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 12c270: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 12c274: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 12c278: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 12c27c: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229440));
  fn2_1b5e68(c);
  /* 12c280: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c284: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12c288: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 12c28c: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229456));
  fn2_1b5d9c(c);
  /* 12c290: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c294: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12c298: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229468));
  fn2_1b5d8c(c);
  /* 12c29c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c2a0: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 12c2a4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12c2a8: tbz w8, #0, #0x12c2e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12c2e8;
L_12c2ac:;
  /* 12c2ac: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c2b0: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 12c2b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12c2b8: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229500));
  fn2_1d2c40(c);
  /* 12c2bc: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12c2c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 12c2c4: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229512));
  fn2_1d5dc0(c);
  /* 12c2c8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12c2cc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229520));
  fn2_1d2d24(c);
  /* 12c2d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c2d4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12c2d8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12c2dc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c2e0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 12c2e4: ret  */
  return;
L_12c2e8:;
  /* 12c2e8: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c2ec: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12c2f0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229556));
  fn2_24b710(c);
  /* 12c2f4: cbz w0, #0x12c2ac */
  if ((ARC_W_R(c, 0)) == 0) goto L_12c2ac;
  /* 12c2f8: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c2fc: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 12c300: nop  */
  /* nop: no architectural effect here */
  /* 12c304: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 12c308: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12c30c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229584));
  fn2_1b907c(c);
  /* 12c310: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12c314: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 12c318: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 12c31c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 12c320: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12c324: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229608));
  fn2_24b6f0(c);
  /* 12c328: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12c32c: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12c330: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1229620));
  fn2_24b720(c);
  /* 12c334: b #0x12c2ac */
  goto L_12c2ac;
}

void fn2_12d6d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077090512));
  /* 12d6d0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12d6d4: ret  */
  return;
}

void fn2_12e9e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077095400));
  /* 12e9e8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e9ec: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 12e9f0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12e9f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12e9f8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 12e9fc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12ea00: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 12ea04: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12ea08: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 12ea0c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12ea10: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239572));
  fn2_1b5d1c(c);
  /* 12ea14: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 12ea18: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 12ea1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12ea20: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 12ea24: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 12ea28: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12ea2c: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12ea30: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239604));
  fn2_1d2c2c(c);
  /* 12ea34: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12ea38: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239612));
  fn2_1d2c2c(c);
  /* 12ea3c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12ea40: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 12ea44: add x8, x8, #0xd8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(216)));
  /* 12ea48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ea4c: mov w1, #3 */
  ARC_W_W(c, 1, UINT64_C(3));
  /* 12ea50: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 12ea54: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12ea58: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12ea5c: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 12ea60: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 12ea64: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 12ea68: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 12ea6c: mov w20, #3 */
  ARC_W_W(c, 20, UINT64_C(3));
  /* 12ea70: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239668));
  fn2_1b5e68(c);
  /* 12ea74: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 12ea78: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12ea7c: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 12ea80: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12ea84: tbz w8, #0, #0x12eac0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12eac0;
L_12ea88:;
  /* 12ea88: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12ea8c: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 12ea90: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12ea94: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239704));
  fn2_1d2c40(c);
  /* 12ea98: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12ea9c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12eaa0: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239716));
  fn2_1d5dc0(c);
  /* 12eaa4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12eaa8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239724));
  fn2_1d2d24(c);
  /* 12eaac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12eab0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12eab4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12eab8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12eabc: ret  */
  return;
L_12eac0:;
  /* 12eac0: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12eac4: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12eac8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239756));
  fn2_24b710(c);
  /* 12eacc: cbz w0, #0x12ea88 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12ea88;
  /* 12ead0: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12ead4: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 12ead8: nop  */
  /* nop: no architectural effect here */
  /* 12eadc: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 12eae0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12eae4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239784));
  fn2_1b907c(c);
  /* 12eae8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12eaec: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 12eaf0: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 12eaf4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 12eaf8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12eafc: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239808));
  fn2_24b6f0(c);
  /* 12eb00: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12eb04: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12eb08: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1239820));
  fn2_24b720(c);
  /* 12eb0c: b #0x12ea88 */
  goto L_12ea88;
}

void fn2_12fe84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077100676));
  /* 12fe84: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12fe88: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12fe8c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12fe90: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12fe94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12fe98: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 12fe9c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12fea0: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 12fea4: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 12fea8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 12feac: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 12feb0: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 12feb4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1244856));
  fn2_1bc084(c);
  /* 12feb8: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 12febc: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 12fec0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12fec4: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 12fec8: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* 12fecc: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 12fed0: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* 12fed4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12fed8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12fedc: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 12fee0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12fee4: b #0x12ff68 */
  fn2_12ff68(c); return;
}

void fn2_1315cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077106636));
  /* 1315cc: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1315d0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1315d4: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1315d8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1315dc: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1315e0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1315e4: add x20, x0, x2, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* 1315e8: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 1315ec: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1315f0: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 1315f4: tbz w2, #0, #0x131600 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_131600;
  /* 1315f8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1315fc: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_131600:;
  /* 131600: ldr x0, [x21] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 21)));
  /* 131604: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250824));
  fn2_1bc668(c);
  /* 131608: ldr x9, [x21, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 13160c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 131610: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 131614: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 131618: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250844));
  fn2_1bccc4(c);
  /* 13161c: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 131620: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 131624: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250856));
  fn2_1bccb8(c);
  /* 131628: ldr x0, [x21, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 13162c: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250864));
  fn2_1bc630(c);
  /* 131630: ldr x8, [x21, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(32))));
  /* 131634: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* 131638: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13163c: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250880));
  fn2_1bc668(c);
  /* 131640: ldr x9, [x21, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* 131644: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 131648: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 13164c: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 131650: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250900));
  fn2_1bc84c(c);
  /* 131654: ldr x0, [x21, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* 131658: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 13165c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250912));
  fn2_1bc84c(c);
  /* 131660: ldr x0, [x21, #0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(56))));
  /* 131664: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 131668: add x21, sp, #8 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(8)));
  /* 13166c: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250928));
  fn2_1bccc4(c);
  /* 131670: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 131674: sub x3, x29, #0x10 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 131678: and w4, w23, #1 */
  ARC_W_W(c, 4, (ARC_W_R(c, 23) & UINT64_C(1)));
  /* 13167c: add x6, sp, #0x18 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(24)));
  /* 131680: add x7, sp, #0x10 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(16)));
  /* 131684: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 131688: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13168c: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 131690: str x21, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 21));
  /* 131694: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250968));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 131698: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13169c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250976));
  fn2_1db788(c);
  /* 1316a0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1316a4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250984));
  fn2_1ccd9c(c);
  /* 1316a8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1316ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1250992));
  fn2_1ccd9c(c);
  /* 1316b0: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1316b4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251000));
  fn2_1d97fc(c);
  /* 1316b8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1316bc: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1251008));
  fn2_1db788(c);
  /* 1316c0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1316c4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1316c8: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1316cc: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1316d0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1316d4: ret  */
  return;
}

void fn2_132d40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077112640));
  /* 132d40: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 132d44: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 132d48: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 132d4c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 132d50: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 132d54: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 132d58: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 132d5c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 132d60: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 132d64: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256808));
  fn2_1d2c2c(c);
  /* 132d68: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 132d6c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256816));
  fn2_1d2c2c(c);
  /* 132d70: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 132d74: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 132d78: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256828));
  fn2_1ccc74(c);
  /* 132d7c: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* 132d80: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* 132d84: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* 132d88: b.hi #0x132dc4 */
  if (ARC_COND(c, 8)) goto L_132dc4;
  /* 132d8c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 132d90: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 132d94: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 132d98: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 132d9c: bl #0xb1d4c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256864));
  fn2_b1d4c(c);
  /* 132da0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 132da4: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 132da8: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 132dac: bl #0xb4020 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256880));
  fn2_b4020(c);
  /* 132db0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 132db4: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 132db8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132dbc: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 132dc0: ret  */
  return;
L_132dc4:;
  /* 132dc4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 132dc8: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 132dcc: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 132dd0: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 132dd4: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 132dd8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256924));
  fn2_1d2c2c(c);
  /* 132ddc: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 132de0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256932));
  fn2_1d2c2c(c);
  /* 132de4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 132de8: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* 132dec: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256944));
  fn2_1ccc74(c);
  /* 132df0: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* 132df4: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 132df8: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 132dfc: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* 132e00: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 132e04: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256968));
  fn2_1d2b98(c);
  /* 132e08: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 132e0c: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 132e10: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1256980));
  fn2_1d2b98(c);
  /* 132e14: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* 132e18: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 132e1c: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 132e20: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 132e24: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1257000));
  fn2_1d0708(c);
  /* 132e28: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 132e2c: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 132e30: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 132e34: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1257016));
  fn2_1ccd9c(c);
  /* 132e38: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 132e3c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1257024));
  fn2_1d2d24(c);
  /* 132e40: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 132e44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1257032));
  fn2_1d2d24(c);
  /* 132e48: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 132e4c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 132e50: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132e54: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 132e58: ret  */
  return;
}

void fn2_134498(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077118616));
  /* 134498: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 13449c: sub w10, w1, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 1) - UINT64_C(1)));
  /* 1344a0: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1344a4: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* 1344a8: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* 1344ac: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 1344b0: lsl w9, w9, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 1344b4: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* 1344b8: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* 1344bc: csel w0, w10, w8, hi */
  ARC_W_W(c, 0, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* 1344c0: ret  */
  return;
}

void fn2_13577c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077123452));
  /* 13577c: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 135780: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135784: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 135788: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 13578c: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 135790: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135794: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135798: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 13579c: ldp x28, x27, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 1357a0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1357a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1357a8: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* 1357ac: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 1357b0: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 1357b4: mov w26, w4 */
  ARC_W_W(c, 26, ARC_W_R(c, 4));
  /* 1357b8: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* 1357bc: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 1357c0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1357c4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267656));
  fn2_1bc084(c);
  /* 1357c8: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* 1357cc: b.lt #0x13586c */
  if (ARC_COND(c, 11)) goto L_13586c;
  /* 1357d0: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* 1357d4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1357d8: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267676));
  fn2_1bc09c(c);
  /* 1357dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1357e0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1357e4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267688));
  fn2_1bcf04(c);
  /* 1357e8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1357ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267696));
  fn2_1bc620(c);
  /* 1357f0: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* 1357f4: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 1357f8: tbz w22, #0, #0x135804 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_135804;
L_1357fc:;
  /* 1357fc: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 135800: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_135804:;
  /* 135804: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 135808: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13580c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267728));
  fn2_1bc84c(c);
  /* 135810: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 135814: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 135818: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267740));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 13581c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 135820: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135824: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267752));
  fn2_1bc488(c);
  /* 135828: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13582c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135830: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267764));
  fn2_1bcf04(c);
  /* 135834: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135838: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267772));
  fn2_1bc620(c);
  /* 13583c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 135840: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267780));
  fn2_1ccd9c(c);
  /* 135844: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135848: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267788));
  fn2_1bc620(c);
  /* 13584c: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135850: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 135854: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 135858: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13585c: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 135860: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135864: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 135868: ret  */
  return;
L_13586c:;
  /* 13586c: sub x8, x27, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 28)));
  /* 135870: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* 135874: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* 135878: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* 13587c: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* 135880: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135884: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* 135888: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13588c: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* 135890: nop  */
  /* nop: no architectural effect here */
  /* 135894: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 135898: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1267868));
  fn2_1bce10(c);
  /* 13589c: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* 1358a0: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 1358a4: tbnz w22, #0, #0x1357fc */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_1357fc;
  /* 1358a8: b #0x135804 */
  goto L_135804;
}

void fn2_136c40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077128768));
  /* 136c40: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136c44: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 136c48: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 136c4c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 136c50: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1272916));
  fn2_1b6040(c);
  /* 136c54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 136c58: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 136c5c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136c60: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_137f58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077133656));
  /* 137f58: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137f5c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 137f60: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137f64: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 137f68: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 137f6c: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* 137f70: tbz w9, #0, #0x137f7c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_137f7c;
  /* 137f74: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 137f78: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_137f7c:;
  /* 137f7c: ldr x9, [x2] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 2)));
  /* 137f80: ldr d0, [x9] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 9)));
  /* 137f84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1277832));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 137f88: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 137f8c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 137f90: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137f94: ret  */
  return;
}

void fn2_139540(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077139264));
  /* 139540: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 139544: ret  */
  return;
}

void fn2_13a924(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077144356));
  /* 13a924: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 13a928: mov w8, #0x1d */
  ARC_W_W(c, 8, UINT64_C(29));
  /* 13a92c: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* 13a930: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 13a934: lsl w9, w9, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 13a938: csel w8, w8, w9, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* 13a93c: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 13a940: csel w0, w8, wzr, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 13a944: ret  */
  return;
}

void fn2_13bc80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077149312));
  /* 13bc80: sub sp, sp, #0x160 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(352)));
  /* 13bc84: stp x29, x30, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13bc88: stp x28, x27, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 13bc8c: stp x26, x25, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 13bc90: stp x24, x23, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13bc94: stp x22, x21, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13bc98: stp x20, x19, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13bc9c: add x29, sp, #0x100 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(256)));
  /* 13bca0: ldp x9, x8, [x6] */
  { const uint64_t _pa = ARC_X_R(c, 6);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 13bca4: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* 13bca8: stp x0, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13bcac: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 13bcb0: mov w27, w4 */
  ARC_W_W(c, 27, ARC_W_R(c, 4));
  /* 13bcb4: stp x2, x5, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 5));
  }
  /* 13bcb8: mov x26, x3 */
  ARC_X_W(c, 26, ARC_X_R(c, 3));
  /* 13bcbc: add x22, sp, #0x68 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(104)));
  /* 13bcc0: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 13bcc4: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 13bcc8: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 13bccc: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 13bcd0: mul x21, x8, x9 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 13bcd4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293528));
  fn2_1bc084(c);
  /* 13bcd8: add x20, x22, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 13bcdc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13bce0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293540));
  fn2_1bc084(c);
  /* 13bce4: add x19, x22, #0x30 */
  ARC_X_W(c, 19, (ARC_X_R(c, 22) + UINT64_C(48)));
  /* 13bce8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13bcec: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293552));
  fn2_1bc084(c);
  /* 13bcf0: add x28, x22, #0x48 */
  ARC_X_W(c, 28, (ARC_X_R(c, 22) + UINT64_C(72)));
  /* 13bcf4: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 13bcf8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293564));
  fn2_1bc084(c);
  /* 13bcfc: add x25, x22, #0x60 */
  ARC_X_W(c, 25, (ARC_X_R(c, 22) + UINT64_C(96)));
  /* 13bd00: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 13bd04: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293576));
  fn2_1bc084(c);
  /* 13bd08: add x24, x22, #0x78 */
  ARC_X_W(c, 24, (ARC_X_R(c, 22) + UINT64_C(120)));
  /* 13bd0c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13bd10: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293588));
  fn2_1bc084(c);
  /* 13bd14: cmp w27, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(0));
  /* 13bd18: b.le #0x13be1c */
  if (ARC_COND(c, 13)) goto L_13be1c;
  /* 13bd1c: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 13bd20: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bd24: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293608));
  fn2_1bc09c(c);
  /* 13bd28: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 13bd2c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13bd30: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293620));
  fn2_1bcf04(c);
  /* 13bd34: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bd38: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293628));
  fn2_1bc620(c);
  /* 13bd3c: cmp w27, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(1));
  /* 13bd40: str x22, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 22));
  /* 13bd44: b.eq #0x13be3c */
  if (ARC_COND(c, 0)) goto L_13be3c;
  /* 13bd48: ldr x1, [x26, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 13bd4c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bd50: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293652));
  fn2_1bc09c(c);
  /* 13bd54: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13bd58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13bd5c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293664));
  fn2_1bcf04(c);
  /* 13bd60: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bd64: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293672));
  fn2_1bc620(c);
  /* 13bd68: cmp w27, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(2));
  /* 13bd6c: str x20, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 20));
  /* 13bd70: b.ls #0x13be5c */
  if (ARC_COND(c, 9)) goto L_13be5c;
  /* 13bd74: ldr x1, [x26, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 13bd78: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bd7c: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293696));
  fn2_1bc09c(c);
  /* 13bd80: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13bd84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13bd88: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293708));
  fn2_1bcf04(c);
  /* 13bd8c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bd90: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293716));
  fn2_1bc620(c);
  /* 13bd94: cmp w27, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(3));
  /* 13bd98: str x19, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 19));
  /* 13bd9c: b.eq #0x13be7c */
  if (ARC_COND(c, 0)) goto L_13be7c;
  /* 13bda0: ldr x1, [x26, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 13bda4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bda8: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293740));
  fn2_1bc09c(c);
  /* 13bdac: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13bdb0: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 13bdb4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293752));
  fn2_1bcf04(c);
  /* 13bdb8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bdbc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293760));
  fn2_1bc620(c);
  /* 13bdc0: cmp w27, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(4));
  /* 13bdc4: str x28, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 28));
  /* 13bdc8: b.ls #0x13be9c */
  if (ARC_COND(c, 9)) goto L_13be9c;
  /* 13bdcc: ldr x1, [x26, #0x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 13bdd0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bdd4: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293784));
  fn2_1bc09c(c);
  /* 13bdd8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13bddc: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 13bde0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293796));
  fn2_1bcf04(c);
  /* 13bde4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13bde8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293804));
  fn2_1bc620(c);
  /* 13bdec: cmp w27, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(5));
  /* 13bdf0: str x25, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 25));
  /* 13bdf4: b.eq #0x13bebc */
  if (ARC_COND(c, 0)) goto L_13bebc;
  /* 13bdf8: ldr x1, [x26, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 13bdfc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13be00: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293828));
  fn2_1bc09c(c);
  /* 13be04: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13be08: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13be0c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293840));
  fn2_1bcf04(c);
  /* 13be10: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13be14: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293848));
  fn2_1bc620(c);
  /* 13be18: b #0x13bed8 */
  goto L_13bed8;
L_13be1c:;
  /* 13be1c: sub w8, w21, #6 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) - UINT64_C(6)));
  /* 13be20: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13be24: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 13be28: nop  */
  /* nop: no architectural effect here */
  /* 13be2c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 13be30: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 13be34: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293880));
  fn2_1bce10(c);
  /* 13be38: str x22, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 22));
L_13be3c:;
  /* 13be3c: sub w8, w21, #5 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) - UINT64_C(5)));
  /* 13be40: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13be44: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 13be48: nop  */
  /* nop: no architectural effect here */
  /* 13be4c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 13be50: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13be54: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293912));
  fn2_1bce10(c);
  /* 13be58: str x20, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 20));
L_13be5c:;
  /* 13be5c: sub w8, w21, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) - UINT64_C(4)));
  /* 13be60: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13be64: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 13be68: nop  */
  /* nop: no architectural effect here */
  /* 13be6c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 13be70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13be74: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293944));
  fn2_1bce10(c);
  /* 13be78: str x19, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 19));
L_13be7c:;
  /* 13be7c: sub w8, w21, #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) - UINT64_C(3)));
  /* 13be80: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13be84: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 13be88: nop  */
  /* nop: no architectural effect here */
  /* 13be8c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 13be90: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 13be94: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1293976));
  fn2_1bce10(c);
  /* 13be98: str x28, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 28));
L_13be9c:;
  /* 13be9c: sub w8, w21, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) - UINT64_C(2)));
  /* 13bea0: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13bea4: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 13bea8: nop  */
  /* nop: no architectural effect here */
  /* 13beac: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 13beb0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 13beb4: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294008));
  fn2_1bce10(c);
  /* 13beb8: str x25, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 25));
L_13bebc:;
  /* 13bebc: sub w8, w21, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 21) - UINT64_C(1)));
  /* 13bec0: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13bec4: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 13bec8: nop  */
  /* nop: no architectural effect here */
  /* 13becc: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 13bed0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13bed4: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294040));
  fn2_1bce10(c);
L_13bed8:;
  /* 13bed8: ldp x0, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13bedc: add x3, sp, #0x38 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(56)));
  /* 13bee0: ldp x2, x4, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 4, arc_ld64(_pa + 8));
  }
  /* 13bee4: str x24, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 24));
  /* 13bee8: bl #0x13bf40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294060));
  fn2_13bf40(c);
  /* 13beec: add x19, sp, #0x68 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(104)));
  /* 13bef0: add x0, x19, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(120)));
  /* 13bef4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294072));
  fn2_1bc620(c);
  /* 13bef8: add x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* 13befc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294080));
  fn2_1bc620(c);
  /* 13bf00: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* 13bf04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294088));
  fn2_1bc620(c);
  /* 13bf08: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 13bf0c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294096));
  fn2_1bc620(c);
  /* 13bf10: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 13bf14: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294104));
  fn2_1bc620(c);
  /* 13bf18: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 13bf1c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1294112));
  fn2_1bc620(c);
  /* 13bf20: ldp x20, x19, [sp, #0x150] */
  { const uint64_t _pa = ((c)->sp + INT64_C(336));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13bf24: ldp x22, x21, [sp, #0x140] */
  { const uint64_t _pa = ((c)->sp + INT64_C(320));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13bf28: ldp x24, x23, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13bf2c: ldp x26, x25, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13bf30: ldp x28, x27, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 13bf34: ldp x29, x30, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13bf38: add sp, sp, #0x160 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(352)));
  /* 13bf3c: ret  */
  return;
}

void fn2_13d1cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077154764));
  /* 13d1cc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 13d1d0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13d1d4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13d1d8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13d1dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 13d1e0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13d1e4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 13d1e8: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 13d1ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13d1f0: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 13d1f4: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 13d1f8: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1298940));
  fn2_1b5d1c(c);
  /* 13d1fc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 13d200: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 13d204: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13d208: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 13d20c: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 13d210: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13d214: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 13d218: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1298972));
  fn2_1d2c2c(c);
  /* 13d21c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 13d220: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1298980));
  fn2_1d2c2c(c);
  /* 13d224: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13d228: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* 13d22c: add x8, x8, #0x240 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(576)));
  /* 13d230: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d234: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 13d238: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 13d23c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 13d240: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13d244: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 13d248: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 13d24c: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 13d250: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 13d254: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299032));
  fn2_1b5e68(c);
  /* 13d258: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 13d25c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d260: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 13d264: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13d268: tbz w8, #0, #0x13d2a8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d2a8;
L_13d26c:;
  /* 13d26c: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d270: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 13d274: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d278: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299068));
  fn2_1d2c40(c);
  /* 13d27c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 13d280: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13d284: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299080));
  fn2_1d5dc0(c);
  /* 13d288: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d28c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299088));
  fn2_1d2d24(c);
  /* 13d290: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d294: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13d298: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13d29c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13d2a0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 13d2a4: ret  */
  return;
L_13d2a8:;
  /* 13d2a8: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d2ac: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 13d2b0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299124));
  fn2_24b710(c);
  /* 13d2b4: cbz w0, #0x13d26c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13d26c;
  /* 13d2b8: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d2bc: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 13d2c0: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 13d2c4: add x1, x1, #0x3e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1000)));
  /* 13d2c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13d2cc: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299152));
  fn2_1b907c(c);
  /* 13d2d0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 13d2d4: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 13d2d8: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 13d2dc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 13d2e0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13d2e4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299176));
  fn2_24b6f0(c);
  /* 13d2e8: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13d2ec: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 13d2f0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1299188));
  fn2_24b720(c);
  /* 13d2f4: b #0x13d26c */
  goto L_13d26c;
}

void fn2_141d50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077174096));
  /* 141d50: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 141d54: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 141d58: str x21, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 21));
  /* 141d5c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 141d60: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 141d64: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 141d68: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 141d6c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 141d70: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 141d74: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318264));
  fn2_1d9740(c);
  /* 141d78: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 141d7c: adrp x9, #0x26000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(155648)));
  /* 141d80: add x9, x9, #0x6d1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1745)));
  /* 141d84: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141d88: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 141d8c: adrp x8, #0x29000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(167936)));
  /* 141d90: add x8, x8, #0xea0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3744)));
  /* 141d94: csel x1, x8, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 141d98: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318300));
  fn2_1b7d24(c);
  /* 141d9c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141da0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 141da4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318312));
  fn2_1bc2f8(c);
  /* 141da8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141dac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318320));
  fn2_1ccd9c(c);
  /* 141db0: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 141db4: add x1, x1, #0x62e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1582)));
  /* 141db8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141dbc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318336));
  fn2_1b7d24(c);
  /* 141dc0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141dc4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141dc8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318348));
  fn2_1bc2f8(c);
  /* 141dcc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141dd0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318356));
  fn2_1ccd9c(c);
  /* 141dd4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 141dd8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 141ddc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318368));
  fn2_1bbfa0(c);
  /* 141de0: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 141de4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318376));
  fn2_1bcf04(c);
  /* 141de8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141dec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318384));
  fn2_1bc620(c);
  /* 141df0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141df4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318392));
  fn2_1bc620(c);
  /* 141df8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141dfc: add x1, x19, #0xd8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(216)));
  /* 141e00: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318404));
  fn2_1bc2f8(c);
  /* 141e04: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 141e08: add x1, x1, #0x57 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(87)));
  /* 141e0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141e10: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318420));
  fn2_1b7d24(c);
  /* 141e14: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141e18: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141e1c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318432));
  fn2_1bc2f8(c);
  /* 141e20: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141e24: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318440));
  fn2_1ccd9c(c);
  /* 141e28: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 141e2c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 141e30: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318452));
  fn2_1bbfa0(c);
  /* 141e34: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 141e38: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318460));
  fn2_1bcf04(c);
  /* 141e3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141e40: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318468));
  fn2_1bc620(c);
  /* 141e44: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141e48: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318476));
  fn2_1bc620(c);
  /* 141e4c: ldr x1, [x19, #0xe0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(224))));
  /* 141e50: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141e54: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318488));
  fn2_1bc290(c);
  /* 141e58: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 141e5c: add x1, x1, #0xcf9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3321)));
  /* 141e60: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141e64: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318504));
  fn2_1b7d24(c);
  /* 141e68: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141e6c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141e70: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318516));
  fn2_1bc2f8(c);
  /* 141e74: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141e78: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318524));
  fn2_1ccd9c(c);
  /* 141e7c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 141e80: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 141e84: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318536));
  fn2_1bbfa0(c);
  /* 141e88: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 141e8c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318544));
  fn2_1bcf04(c);
  /* 141e90: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141e94: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318552));
  fn2_1bc620(c);
  /* 141e98: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141e9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318560));
  fn2_1bc620(c);
  /* 141ea0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141ea4: add x1, x19, #0x80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(128)));
  /* 141ea8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318572));
  fn2_1bc2f8(c);
  /* 141eac: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 141eb0: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* 141eb4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141eb8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318588));
  fn2_1b7d24(c);
  /* 141ebc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141ec0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141ec4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318600));
  fn2_1bc2f8(c);
  /* 141ec8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141ecc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318608));
  fn2_1ccd9c(c);
  /* 141ed0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 141ed4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 141ed8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318620));
  fn2_1bbfa0(c);
  /* 141edc: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 141ee0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318628));
  fn2_1bcf04(c);
  /* 141ee4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141ee8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318636));
  fn2_1bc620(c);
  /* 141eec: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141ef0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318644));
  fn2_1bc620(c);
  /* 141ef4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141ef8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 141efc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318656));
  fn2_1bc2f8(c);
  /* 141f00: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 141f04: add x1, x1, #0x442 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1090)));
  /* 141f08: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141f0c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318672));
  fn2_1b7d24(c);
  /* 141f10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141f14: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141f18: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318684));
  fn2_1bc2f8(c);
  /* 141f1c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141f20: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318692));
  fn2_1ccd9c(c);
  /* 141f24: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 141f28: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 141f2c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318704));
  fn2_1bbfa0(c);
  /* 141f30: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 141f34: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318712));
  fn2_1bcf04(c);
  /* 141f38: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141f3c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318720));
  fn2_1bc620(c);
  /* 141f40: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141f44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318728));
  fn2_1bc620(c);
  /* 141f48: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141f4c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 141f50: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318740));
  fn2_1bc2f8(c);
  /* 141f54: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 141f58: add x1, x1, #0xa7c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2684)));
  /* 141f5c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141f60: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318756));
  fn2_1b7d24(c);
  /* 141f64: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141f68: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141f6c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318768));
  fn2_1bc2f8(c);
  /* 141f70: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141f74: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318776));
  fn2_1ccd9c(c);
  /* 141f78: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 141f7c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 141f80: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318788));
  fn2_1bbfa0(c);
  /* 141f84: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 141f88: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318796));
  fn2_1bcf04(c);
  /* 141f8c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141f90: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318804));
  fn2_1bc620(c);
  /* 141f94: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141f98: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318812));
  fn2_1bc620(c);
  /* 141f9c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141fa0: add x1, x19, #0x1ca */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(458)));
  /* 141fa4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318824));
  fn2_1bc2f8(c);
  /* 141fa8: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 141fac: add x1, x1, #0x88b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2187)));
  /* 141fb0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141fb4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318840));
  fn2_1b7d24(c);
  /* 141fb8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141fbc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141fc0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318852));
  fn2_1bc2f8(c);
  /* 141fc4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 141fc8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318860));
  fn2_1ccd9c(c);
  /* 141fcc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 141fd0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 141fd4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318872));
  fn2_1bbfa0(c);
  /* 141fd8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 141fdc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318880));
  fn2_1bcf04(c);
  /* 141fe0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 141fe4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318888));
  fn2_1bc620(c);
  /* 141fe8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 141fec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318896));
  fn2_1bc620(c);
  /* 141ff0: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 141ff4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 141ff8: bl #0x1da22c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318908));
  fn2_1da22c(c);
  /* 141ffc: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 142000: add x1, x19, #0xc8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 142004: ldr x8, [x8, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* 142008: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 14200c: bl #0xecb5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318928));
  fn2_ecb5c(c);
  /* 142010: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 142014: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1318936));
  fn2_1d97fc(c);
  /* 142018: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14201c: ldr x21, [sp, #0x50] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(80))));
  /* 142020: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 142024: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 142028: ret  */
  return;
}

void fn2_1490a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077203620));
  /* 1490a4: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 1490a8: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1490ac: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1490b0: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1490b4: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1490b8: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 1490bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1490c0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1490c4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 1490c8: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1490cc: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* 1490d0: add x24, sp, #0x18 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(24)));
  /* 1490d4: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347800));
  fn2_1bc44c(c);
  /* 1490d8: add x23, x24, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 1490dc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1490e0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1490e4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347816));
  fn2_1bc2f8(c);
  /* 1490e8: add x20, x24, #0x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 1490ec: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1490f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1490f4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347832));
  fn2_1bc2f8(c);
  /* 1490f8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1490fc: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* 149100: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 149104: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 149108: stp x24, x23, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 14910c: str x20, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 20));
  /* 149110: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347860));
  fn2_221308(c);
  /* 149114: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 149118: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347868));
  fn2_1bc620(c);
  /* 14911c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 149120: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347876));
  fn2_1bc620(c);
  /* 149124: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 149128: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1347884));
  fn2_1bc620(c);
  /* 14912c: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 149130: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 149134: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 149138: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14913c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 149140: ret  */
  return;
}

void fn2_14b290(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077212304));
  /* 14b290: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14b294: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 14b298: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 14b29c: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 14b2a0: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 14b2a4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 14b2a8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 14b2ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1356464));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 14b2b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14b2b4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 14b2b8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 14b2bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14b2c0: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_14f6d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077229784));
  /* 14f6d8: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* 14f6dc: cbz x8, #0x14f8ec */
  if ((ARC_X_R(c, 8)) == 0) goto L_14f8ec;
  /* 14f6e0: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 14f6e4: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14f6e8: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 14f6ec: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 14f6f0: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 14f6f4: ldrb w8, [x0, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(104))));
  /* 14f6f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 14f6fc: cbz w8, #0x14f8d8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_14f8d8;
  /* 14f700: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 14f704: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 14f708: b.ne #0x14f8d8 */
  if (ARC_COND(c, 1)) goto L_14f8d8;
  /* 14f70c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 14f710: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 14f714: add x0, x19, #0x1ca */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(458)));
  /* 14f718: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1373980));
  fn2_1b865c(c);
  /* 14f71c: tbnz w0, #0, #0x14f8d8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_14f8d8;
  /* 14f720: ldr x20, [x19, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 14f724: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 14f728: add x1, x1, #0xde8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3560)));
  /* 14f72c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 14f730: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14f734: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374008));
  fn2_1b8fd4(c);
  /* 14f738: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f73c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 14f740: sub x21, x29, #0x38 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f744: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374024));
  fn2_1bc44c(c);
  /* 14f748: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 14f74c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 14f750: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 14f754: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 14f758: stur x21, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 21));
  /* 14f75c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374048));
  fn2_221308(c);
  /* 14f760: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f764: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374056));
  fn2_1bc620(c);
  /* 14f768: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 14f76c: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374064));
  fn2_1bc630(c);
  /* 14f770: ldrb w21, [x19, #0x1c8] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 19) + INT64_C(456))));
  /* 14f774: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 14f778: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 14f77c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374080));
  fn2_1bc620(c);
  /* 14f780: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 14f784: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374088));
  fn2_1d2d24(c);
  /* 14f788: tbnz w20, #0, #0x14f8d8 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_14f8d8;
  /* 14f78c: cbnz w21, #0x14f8d8 */
  if ((ARC_W_R(c, 21)) != 0) goto L_14f8d8;
  /* 14f790: mov x8, #-0x4010000000000000 */
  ARC_X_W(c, 8, UINT64_C(13830554455654793216));
  /* 14f794: ldr x21, [x19, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 14f798: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 14f79c: add x1, x1, #0xa7d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2685)));
  /* 14f7a0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 14f7a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14f7a8: str x8, [x19, #0x200] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(512)), ARC_X_R(c, 8));
  /* 14f7ac: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374128));
  fn2_1b8fd4(c);
  /* 14f7b0: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f7b4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 14f7b8: sub x22, x29, #0x38 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f7bc: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374144));
  fn2_1bc44c(c);
  /* 14f7c0: add x20, x22, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 14f7c4: add x1, x19, #0x1ca */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(458)));
  /* 14f7c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 14f7cc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374160));
  fn2_1bc2f8(c);
  /* 14f7d0: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 14f7d4: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 14f7d8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 14f7dc: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 14f7e0: stp x22, x20, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 14f7e4: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374184));
  fn2_221308(c);
  /* 14f7e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 14f7ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374192));
  fn2_1bc620(c);
  /* 14f7f0: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f7f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374200));
  fn2_1bc620(c);
  /* 14f7f8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 14f7fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374208));
  fn2_1bc620(c);
  /* 14f800: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 14f804: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374216));
  fn2_1d2d24(c);
  /* 14f808: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 14f80c: add x1, x1, #0x567 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1383)));
  /* 14f810: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14f814: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374232));
  fn2_1b7d24(c);
  /* 14f818: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14f81c: add x1, x19, #0x1ca */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(458)));
  /* 14f820: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374244));
  fn2_1ccc88(c);
  /* 14f824: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f828: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 14f82c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374256));
  fn2_1bc2f8(c);
  /* 14f830: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 14f834: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374264));
  fn2_1bc084(c);
  /* 14f838: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 14f83c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374272));
  fn2_1db4a4(c);
  /* 14f840: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 14f844: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 14f848: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374284));
  fn2_1db9f0(c);
  /* 14f84c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 14f850: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 14f854: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374296));
  fn2_1bbf48(c);
  /* 14f858: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f85c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374304));
  fn2_1bce10(c);
  /* 14f860: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 14f864: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14f868: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 14f86c: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374320));
  fn2_1d0298(c);
  /* 14f870: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 14f874: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374328));
  fn2_1db788(c);
  /* 14f878: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 14f87c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374336));
  fn2_1bc620(c);
  /* 14f880: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f884: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374344));
  fn2_1bc620(c);
  /* 14f888: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 14f88c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 14f890: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374356));
  fn2_1bc2f8(c);
  /* 14f894: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f898: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 14f89c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374368));
  fn2_1bc0b8(c);
  /* 14f8a0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 14f8a4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 14f8a8: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* 14f8ac: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374384));
  fn2_24a164(c);
  /* 14f8b0: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 14f8b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374392));
  fn2_1bc620(c);
  /* 14f8b8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 14f8bc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374400));
  fn2_1bc620(c);
  /* 14f8c0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 14f8c4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374408));
  fn2_1ccd9c(c);
  /* 14f8c8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14f8cc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374416));
  fn2_1ccd9c(c);
  /* 14f8d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14f8d4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1374424));
  fn2_1ccd9c(c);
L_14f8d8:;
  /* 14f8d8: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14f8dc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 14f8e0: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14f8e4: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 14f8e8: ret  */
  return;
L_14f8ec:;
  /* 14f8ec: adrp x0, #0x1e000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(122880)));
  /* 14f8f0: add x0, x0, #0xc7f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3199)));
  /* 14f8f4: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 14f8f8: add x1, x1, #0xacd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2765)));
  /* 14f8fc: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 14f900: add x3, x3, #0x28a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(650)));
  /* 14f904: mov w2, #0x141 */
  ARC_W_W(c, 2, UINT64_C(321));
  /* 14f908: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 14f90c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 14f910: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_1564e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077257960));
  /* 1564e8: ldrb w8, [x0, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(105))));
  /* 1564ec: tbnz w8, #0, #0x156558 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_156558;
  /* 1564f0: ldr x8, [x0, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(96))));
  /* 1564f4: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 1564f8: b.ne #0x156558 */
  if (ARC_COND(c, 1)) goto L_156558;
  /* 1564fc: ldrb w8, [x0, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(104))));
  /* 156500: cbnz w8, #0x156558 */
  if ((ARC_W_R(c, 8)) != 0) goto L_156558;
  /* 156504: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 156508: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 15650c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 156510: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 156514: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 156518: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 15651c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 156520: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 156524: bl #0x14d1a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402152));
  fn2_14d1a4(c);
  /* 156528: adrp x0, #0x1a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(106496)));
  /* 15652c: add x0, x0, #0xaed */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2797)));
  /* 156530: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 156534: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 156538: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402172));
  fn2_1b7d74(c);
  /* 15653c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 156540: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 156544: bl #0x14c268 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402184));
  fn2_14c268(c);
  /* 156548: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 15654c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1402192));
  fn2_1ccd9c(c);
  /* 156550: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 156554: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
L_156558:;
  /* 156558: ret  */
  return;
}

void fn2_15c448(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077282376));
  /* 15c448: ldr x8, [x0, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(120))));
  /* 15c44c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* 15c450: b.eq #0x15c4f4 */
  if (ARC_COND(c, 0)) goto L_15c4f4;
  /* 15c454: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 15c458: stp x29, x30, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 15c45c: str x28, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), ARC_X_R(c, 28));
  /* 15c460: stp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 15c464: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 15c468: add x29, sp, #0xe0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(224)));
  /* 15c46c: ldr x8, [x0, #0x2f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(760))));
  /* 15c470: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 15c474: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* 15c478: b.ge #0x15c4e0 */
  if (ARC_COND(c, 10)) goto L_15c4e0;
  /* 15c47c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 15c480: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 15c484: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 15c488: add x1, x1, #0x9c2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2498)));
  /* 15c48c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 15c490: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 15c494: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426584));
  fn2_1b8fd4(c);
  /* 15c498: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 15c49c: add x1, x1, #0x8d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(141)));
  /* 15c4a0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15c4a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 15c4a8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426604));
  fn2_1b8fd4(c);
  /* 15c4ac: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c4b0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 15c4b4: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 15c4b8: bl #0x14a1cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426620));
  fn2_14a1cc(c);
  /* 15c4bc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c4c0: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426628));
  fn2_1bc668(c);
  /* 15c4c4: cbz x0, #0x15c4f8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_15c4f8;
L_15c4c8:;
  /* 15c4c8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c4cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426640));
  fn2_1bc620(c);
  /* 15c4d0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15c4d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426648));
  fn2_1d2d24(c);
  /* 15c4d8: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 15c4dc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426656));
  fn2_1d2d24(c);
L_15c4e0:;
  /* 15c4e0: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 15c4e4: ldr x28, [sp, #0xf0] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(240))));
  /* 15c4e8: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 15c4ec: ldp x29, x30, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 15c4f0: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
L_15c4f4:;
  /* 15c4f4: ret  */
  return;
L_15c4f8:;
  /* 15c4f8: ldr x22, [x20, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 15c4fc: cbz x22, #0x15c4c8 */
  if ((ARC_X_R(c, 22)) == 0) goto L_15c4c8;
  /* 15c500: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 15c504: add x1, x1, #0xf36 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3894)));
  /* 15c508: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 15c50c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 15c510: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426708));
  fn2_1b8fd4(c);
  /* 15c514: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 15c518: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 15c51c: bl #0x221708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426720));
  fn2_221708(c);
  /* 15c520: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 15c524: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 15c528: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426732));
  fn2_1d2d24(c);
  /* 15c52c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c530: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426740));
  fn2_1bc620(c);
  /* 15c534: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15c538: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426748));
  fn2_1d2d24(c);
  /* 15c53c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 15c540: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426756));
  fn2_1d2d24(c);
  /* 15c544: tbz w22, #0, #0x15c4e0 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_15c4e0;
  /* 15c548: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 15c54c: tbz x21, #0x3f, #0x15c564 */
  if (((ARC_X_R(c, 21)) >> 63 & 1) == 0) goto L_15c564;
  /* 15c550: add x0, x20, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(106)));
  /* 15c554: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 15c558: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426780));
  fn2_1db794(c);
  /* 15c55c: adds x21, x0, x21 */
  ARC_X_W(c, 21, arc_add64(c, ARC_X_R(c, 0), ARC_X_R(c, 21), 0));
  /* 15c560: b.mi #0x15c6ec */
  if (ARC_COND(c, 4)) goto L_15c6ec;
L_15c564:;
  /* 15c564: add x0, x20, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(106)));
  /* 15c568: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426796));
  fn2_1db794(c);
  /* 15c56c: cmp x21, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 0));
  /* 15c570: b.ge #0x15c6ec */
  if (ARC_COND(c, 10)) goto L_15c6ec;
  /* 15c574: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 15c578: add x0, x20, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(106)));
  /* 15c57c: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426816));
  fn2_1bbf48(c);
  /* 15c580: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 15c584: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426824));
  fn2_1bccb8(c);
  /* 15c588: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 15c58c: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 15c590: add x1, x1, #0xf36 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3894)));
  /* 15c594: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 15c598: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 15c59c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426848));
  fn2_1b8fd4(c);
  /* 15c5a0: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 15c5a4: add x0, x0, #0x5c3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1475)));
  /* 15c5a8: add x8, sp, #0x68 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(104)));
  /* 15c5ac: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 15c5b0: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426868));
  fn2_1b7d74(c);
  /* 15c5b4: add x8, sp, #0x70 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(112)));
  /* 15c5b8: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 15c5bc: bl #0xae0d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426880));
  fn2_ae0d8(c);
  /* 15c5c0: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 15c5c4: add x1, x1, #0x9cf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2511)));
  /* 15c5c8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c5cc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426896));
  fn2_1b7d24(c);
  /* 15c5d0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15c5d4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c5d8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426908));
  fn2_1bc2f8(c);
  /* 15c5dc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c5e0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426916));
  fn2_1ccd9c(c);
  /* 15c5e4: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 15c5e8: add x1, x1, #0x324 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(804)));
  /* 15c5ec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c5f0: sub x21, x29, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c5f4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426936));
  fn2_1b7d24(c);
  /* 15c5f8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 15c5fc: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c600: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426948));
  fn2_1bc2f8(c);
  /* 15c604: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c608: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426956));
  fn2_1ccd9c(c);
  /* 15c60c: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* 15c610: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 15c614: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 15c618: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 15c61c: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426976));
  fn2_1d9c5c(c);
  /* 15c620: add x8, sp, #0x58 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(88)));
  /* 15c624: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 15c628: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1426988));
  fn2_1bc84c(c);
  /* 15c62c: add x8, sp, #0x60 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(96)));
  /* 15c630: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 15c634: bl #0x1cdcdc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427000));
  fn2_1cdcdc(c);
  /* 15c638: sub x8, x29, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 15c63c: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* 15c640: add x1, sp, #0x60 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(96)));
  /* 15c644: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 15c648: bl #0x149508 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427020));
  fn2_149508(c);
  /* 15c64c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c650: sub x1, x29, #0x60 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 15c654: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427032));
  fn2_1bc44c(c);
  /* 15c658: add x19, x21, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 15c65c: sub x1, x29, #0x68 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 15c660: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 15c664: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427048));
  fn2_1bc2f8(c);
  /* 15c668: sub x8, x29, #0x58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 15c66c: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 15c670: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 15c674: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 15c678: stp x21, x19, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 15c67c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427072));
  fn2_221308(c);
  /* 15c680: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 15c684: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427080));
  fn2_1bc620(c);
  /* 15c688: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15c68c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427088));
  fn2_1bc620(c);
  /* 15c690: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 15c694: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427096));
  fn2_1bc620(c);
  /* 15c698: sub x0, x29, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 15c69c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427104));
  fn2_1ccd9c(c);
  /* 15c6a0: add x0, sp, #0x60 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(96)));
  /* 15c6a4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427112));
  fn2_1ccd9c(c);
  /* 15c6a8: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 15c6ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427120));
  fn2_1ccd9c(c);
  /* 15c6b0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 15c6b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427128));
  fn2_1bc620(c);
  /* 15c6b8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 15c6bc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427136));
  fn2_1bc620(c);
  /* 15c6c0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 15c6c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427144));
  fn2_1bc620(c);
  /* 15c6c8: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* 15c6cc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427152));
  fn2_1ccd9c(c);
  /* 15c6d0: add x0, sp, #0x68 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(104)));
  /* 15c6d4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427160));
  fn2_1ccd9c(c);
  /* 15c6d8: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 15c6dc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427168));
  fn2_1d2d24(c);
  /* 15c6e0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 15c6e4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427176));
  fn2_1d97fc(c);
  /* 15c6e8: b #0x15c4e0 */
  goto L_15c4e0;
L_15c6ec:;
  /* 15c6ec: add x0, x20, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(106)));
  /* 15c6f0: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427188));
  fn2_1db794(c);
  /* 15c6f4: mov x4, x0 */
  ARC_X_W(c, 4, ARC_X_R(c, 0));
  /* 15c6f8: adrp x0, #0x25000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(151552)));
  /* 15c6fc: add x0, x0, #0x387 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(903)));
  /* 15c700: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 15c704: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* 15c708: adrp x5, #0x29000 */
  ARC_X_W(c, 5, (arc_image_bases[2] + UINT64_C(167936)));
  /* 15c70c: add x5, x5, #0x1e5 */
  ARC_X_W(c, 5, (ARC_X_R(c, 5) + UINT64_C(485)));
  /* 15c710: adrp x6, #0x23000 */
  ARC_X_W(c, 6, (arc_image_bases[2] + UINT64_C(143360)));
  /* 15c714: add x6, x6, #0x1fd */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) + UINT64_C(509)));
  /* 15c718: adrp x7, #0x1e000 */
  ARC_X_W(c, 7, (arc_image_bases[2] + UINT64_C(122880)));
  /* 15c71c: add x7, x7, #0xb6f */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) + UINT64_C(2927)));
  /* 15c720: mov w2, #0x21b */
  ARC_W_W(c, 2, UINT64_C(539));
  /* 15c724: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 15c728: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 15c72c: strb wzr, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 31));
  /* 15c730: bl #0x1b5870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1427252));
  fn2_1b5870(c);
  /* 15c734: b #0x15c4e0 */
  goto L_15c4e0;
}

void fn2_165240(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077318720));
  /* 165240: ldrb w8, [x0, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(104))));
  /* 165244: cbz w8, #0x165670 */
  if ((ARC_W_R(c, 8)) == 0) goto L_165670;
  /* 165248: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 16524c: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 165250: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 165254: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 165258: ldrb w8, [x0, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(105))));
  /* 16525c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 165260: cbz w8, #0x165664 */
  if ((ARC_W_R(c, 8)) == 0) goto L_165664;
  /* 165264: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 165268: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1462892));
  fn2_1d9754(c);
  /* 16526c: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165270: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 165274: bl #0x2187d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1462904));
  fn2_2187d0(c);
  /* 165278: ldur x0, [x29, #-0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 16527c: bl #0x210aa4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1462912));
  fn2_210aa4(c);
  /* 165280: sxtw x1, w0 */
  ARC_X_W(c, 1, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 165284: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 165288: bl #0x141764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1462924));
  fn2_141764(c);
  /* 16528c: ldur x8, [x29, #-0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 165290: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 165294: cbz x8, #0x1652bc */
  if ((ARC_X_R(c, 8)) == 0) goto L_1652bc;
  /* 165298: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 16529c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1462944));
  fn2_225abc(c);
  /* 1652a0: tbz w0, #0, #0x1652bc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1652bc;
  /* 1652a4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1652a8: ldur x8, [x29, #-0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 1652ac: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 1652b0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1652b4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1652b8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1462972));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1652bc:;
  /* 1652bc: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1652c0: add x1, x1, #0x2a5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(677)));
  /* 1652c4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1652c8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1462988));
  fn2_1b7d24(c);
  /* 1652cc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1652d0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1652d4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463000));
  fn2_1bc2f8(c);
  /* 1652d8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1652dc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463008));
  fn2_1ccd9c(c);
  /* 1652e0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1652e4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1652e8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1652ec: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463024));
  fn2_1b7d24(c);
  /* 1652f0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1652f4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1652f8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463036));
  fn2_1bc2f8(c);
  /* 1652fc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165300: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463044));
  fn2_1ccd9c(c);
  /* 165304: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165308: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16530c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 165310: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 165314: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463064));
  fn2_1d9c5c(c);
  /* 165318: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 16531c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165320: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463076));
  fn2_1bc84c(c);
  /* 165324: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165328: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463084));
  fn2_1bc620(c);
  /* 16532c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 165330: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463092));
  fn2_1bc620(c);
  /* 165334: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 165338: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463100));
  fn2_1bc620(c);
  /* 16533c: tbnz x20, #0x3f, #0x165654 */
  if (((ARC_X_R(c, 20)) >> 63 & 1) != 0) goto L_165654;
  /* 165340: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 165344: add x1, x1, #0x658 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1624)));
  /* 165348: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 16534c: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463120));
  fn2_1b865c(c);
  /* 165350: tbnz w0, #0, #0x16537c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_16537c;
  /* 165354: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 165358: add x1, x1, #0xf9d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3997)));
  /* 16535c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 165360: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463140));
  fn2_1b865c(c);
  /* 165364: tbnz w0, #0, #0x16537c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_16537c;
  /* 165368: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 16536c: add x1, x1, #0x8d2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2258)));
  /* 165370: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 165374: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463160));
  fn2_1b865c(c);
  /* 165378: tbz w0, #0, #0x165654 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_165654;
L_16537c:;
  /* 16537c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165380: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 165384: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463176));
  fn2_1bc290(c);
  /* 165388: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 16538c: add x1, x1, #0x2e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(46)));
  /* 165390: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 165394: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463192));
  fn2_1b7d24(c);
  /* 165398: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 16539c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1653a0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463204));
  fn2_1bc2f8(c);
  /* 1653a4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1653a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463212));
  fn2_1ccd9c(c);
  /* 1653ac: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1653b0: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 1653b4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463224));
  fn2_1bbfa0(c);
  /* 1653b8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1653bc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463232));
  fn2_1bcf04(c);
  /* 1653c0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1653c4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463240));
  fn2_1bc620(c);
  /* 1653c8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1653cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463248));
  fn2_1bc620(c);
  /* 1653d0: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1653d4: add x1, x1, #0x90c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2316)));
  /* 1653d8: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1653dc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463264));
  fn2_1b7d24(c);
  /* 1653e0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1653e4: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 1653e8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463276));
  fn2_1bc2f8(c);
  /* 1653ec: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1653f0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463284));
  fn2_1ccd9c(c);
  /* 1653f4: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1653f8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1653fc: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463296));
  fn2_1d9a68(c);
  /* 165400: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165404: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463304));
  fn2_1bc620(c);
  /* 165408: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 16540c: add x1, x1, #0x2a5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(677)));
  /* 165410: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 165414: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463320));
  fn2_1b7d24(c);
  /* 165418: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 16541c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 165420: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463332));
  fn2_1bc2f8(c);
  /* 165424: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 165428: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463340));
  fn2_1ccd9c(c);
  /* 16542c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 165430: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165434: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463352));
  fn2_1bbfa0(c);
  /* 165438: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 16543c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463360));
  fn2_1bc84c(c);
  /* 165440: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165444: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463368));
  fn2_1bc620(c);
  /* 165448: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 16544c: add x1, x1, #0xf9d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3997)));
  /* 165450: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 165454: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463384));
  fn2_1b865c(c);
  /* 165458: tbnz w0, #0, #0x165470 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_165470;
  /* 16545c: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 165460: add x1, x1, #0x8d2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2258)));
  /* 165464: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 165468: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463404));
  fn2_1b865c(c);
  /* 16546c: tbz w0, #0, #0x16562c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_16562c;
L_165470:;
  /* 165470: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 165474: add x1, x1, #0x49e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1182)));
  /* 165478: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 16547c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463424));
  fn2_1b7d24(c);
  /* 165480: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 165484: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165488: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463436));
  fn2_1bc2f8(c);
  /* 16548c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165490: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463444));
  fn2_1ccd9c(c);
  /* 165494: movi v0.2d, #0xffffffffffffffff */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = UINT64_C(18446744073709551615);
    _t.u64[1] = UINT64_C(18446744073709551615);
    (c)->q[0] = _t; }
  /* 165498: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 16549c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1654a0: str d0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  /* 1654a4: bl #0x1bc320 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463464));
  fn2_1bc320(c);
  /* 1654a8: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1654ac: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1654b0: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 1654b4: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 1654b8: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463484));
  fn2_1d9c5c(c);
  /* 1654bc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1654c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463492));
  fn2_1bc620(c);
  /* 1654c4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1654c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463500));
  fn2_1bc620(c);
  /* 1654cc: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1654d0: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463508));
  fn2_1bcc90(c);
  /* 1654d4: cmp w0, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(6));
  /* 1654d8: b.ne #0x1654ec */
  if (ARC_COND(c, 1)) goto L_1654ec;
  /* 1654dc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1654e0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1654e4: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463528));
  fn2_1bc0b8(c);
  /* 1654e8: b #0x165500 */
  goto L_165500;
L_1654ec:;
  /* 1654ec: movi v0.2d, #0xffffffffffffffff */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = UINT64_C(18446744073709551615);
    _t.u64[1] = UINT64_C(18446744073709551615);
    (c)->q[0] = _t; }
  /* 1654f0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1654f4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1654f8: stur d0, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), (c)->q[0].u64[0]);
  /* 1654fc: bl #0x1bc320 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463552));
  fn2_1bc320(c);
L_165500:;
  /* 165500: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 165504: add x1, x1, #0x49e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1182)));
  /* 165508: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16550c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463568));
  fn2_1b7d24(c);
  /* 165510: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 165514: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 165518: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463580));
  fn2_1bc2f8(c);
  /* 16551c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 165520: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463588));
  fn2_1ccd9c(c);
  /* 165524: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 165528: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 16552c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463600));
  fn2_1bbfa0(c);
  /* 165530: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 165534: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463608));
  fn2_1bcf04(c);
  /* 165538: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 16553c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463616));
  fn2_1bc620(c);
  /* 165540: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 165544: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463624));
  fn2_1bc620(c);
  /* 165548: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 16554c: add x1, x1, #0xd5e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3422)));
  /* 165550: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 165554: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463640));
  fn2_1b7d24(c);
  /* 165558: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 16555c: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 165560: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463652));
  fn2_1bc2f8(c);
  /* 165564: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 165568: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463660));
  fn2_1ccd9c(c);
  /* 16556c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 165570: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 165574: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463672));
  fn2_1bc290(c);
  /* 165578: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* 16557c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 165580: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 165584: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 165588: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463692));
  fn2_1d9c5c(c);
  /* 16558c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 165590: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463700));
  fn2_1bc620(c);
  /* 165594: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 165598: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463708));
  fn2_1bc620(c);
  /* 16559c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1655a0: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463716));
  fn2_1bcc90(c);
  /* 1655a4: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 1655a8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1655ac: b.ne #0x1655cc */
  if (ARC_COND(c, 1)) goto L_1655cc;
  /* 1655b0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1655b4: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463736));
  fn2_1bc668(c);
  /* 1655b8: mov w8, #3 */
  ARC_W_W(c, 8, UINT64_C(3));
  /* 1655bc: cmp x0, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(3));
  /* 1655c0: csel x8, x0, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 0)) : ARC_X_R(c, 8)));
  /* 1655c4: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 1655c8: csel x1, xzr, x8, lt */
  ARC_X_W(c, 1, (ARC_COND(c, 11) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
L_1655cc:;
  /* 1655cc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1655d0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463764));
  fn2_1bc290(c);
  /* 1655d4: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1655d8: add x1, x1, #0xd5e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3422)));
  /* 1655dc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1655e0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463780));
  fn2_1b7d24(c);
  /* 1655e4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1655e8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1655ec: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463792));
  fn2_1bc2f8(c);
  /* 1655f0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1655f4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463800));
  fn2_1ccd9c(c);
  /* 1655f8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1655fc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 165600: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463812));
  fn2_1bbfa0(c);
  /* 165604: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 165608: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463820));
  fn2_1bcf04(c);
  /* 16560c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 165610: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463828));
  fn2_1bc620(c);
  /* 165614: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 165618: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463836));
  fn2_1bc620(c);
  /* 16561c: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 165620: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463844));
  fn2_1bc620(c);
  /* 165624: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165628: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463852));
  fn2_1bc620(c);
L_16562c:;
  /* 16562c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165630: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 165634: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463864));
  fn2_1bc530(c);
  /* 165638: add x0, x19, #0x220 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(544)));
  /* 16563c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165640: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463876));
  fn2_1db920(c);
  /* 165644: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 165648: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463884));
  fn2_1bc620(c);
  /* 16564c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 165650: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463892));
  fn2_1ccd9c(c);
L_165654:;
  /* 165654: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 165658: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463900));
  fn2_1ccd9c(c);
  /* 16565c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 165660: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1463908));
  fn2_1d97fc(c);
L_165664:;
  /* 165664: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 165668: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16566c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
L_165670:;
  /* 165670: ret  */
  return;
}

void fn2_16e1fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077355516));
  /* 16e1fc: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 16e200: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 16e204: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 16e208: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 16e20c: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 16e210: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 16e214: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 16e218: stp x4, x2, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 4));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 16e21c: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 16e220: add x1, x1, #0xe87 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3719)));
  /* 16e224: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 16e228: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e22c: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 16e230: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 16e234: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499704));
  fn2_1b8fd4(c);
  /* 16e238: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 16e23c: add x1, x1, #0xe67 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3687)));
  /* 16e240: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 16e244: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e248: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499724));
  fn2_1b8fd4(c);
  /* 16e24c: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16e250: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 16e254: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 16e258: add x2, x22, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 16e25c: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 16e260: bl #0x16f3c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499748));
  fn2_16f3c8(c);
  /* 16e264: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 16e268: add x1, x1, #0xd66 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3430)));
  /* 16e26c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16e270: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 16e274: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499768));
  fn2_1b8fd4(c);
  /* 16e278: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16e27c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 16e280: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 16e284: bl #0x1d78bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499784));
  fn2_1d78bc(c);
  /* 16e288: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 16e28c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16e290: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 16e294: sub x4, x29, #0x10 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 16e298: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 16e29c: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 16e2a0: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* 16e2a4: bl #0x16f2d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499816));
  fn2_16f2d0(c);
  /* 16e2a8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16e2ac: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 16e2b0: bl #0x14aebc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499828));
  fn2_14aebc(c);
  /* 16e2b4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 16e2b8: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499836));
  fn2_1d79fc(c);
  /* 16e2bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16e2c0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499844));
  fn2_1d79fc(c);
  /* 16e2c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16e2c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499852));
  fn2_1d2d24(c);
  /* 16e2cc: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 16e2d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499860));
  fn2_1bc620(c);
  /* 16e2d4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 16e2d8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499868));
  fn2_1d2d24(c);
  /* 16e2dc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 16e2e0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1499876));
  fn2_1d2d24(c);
  /* 16e2e4: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 16e2e8: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 16e2ec: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16e2f0: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 16e2f4: ret  */
  return;
}

void fn2_1703a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077364136));
  /* 1703a8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1703ac: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1703b0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1703b4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1703b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1703bc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1703c0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1703c4: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 1703c8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1703cc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1703d0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 1703d4: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 1703d8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1508316));
  fn2_1bc084(c);
  /* 1703dc: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 1703e0: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 1703e4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1703e8: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 1703ec: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* 1703f0: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 1703f4: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* 1703f8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1703fc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 170400: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 170404: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 170408: b #0x170598 */
  fn2_170598(c); return;
}

void fn2_1739b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077377972));
  /* 1739b4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1739b8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1739bc: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 1739c0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1739c4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1739c8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1739cc: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522128));
  fn2_1db4a4(c);
  /* 1739d0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1739d4: add x1, x1, #0x7b0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1968)));
  /* 1739d8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1739dc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522144));
  fn2_1b7d24(c);
  /* 1739e0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1739e4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1739e8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522156));
  fn2_1bc2f8(c);
  /* 1739ec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1739f0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522164));
  fn2_1ccd9c(c);
  /* 1739f4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1739f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1739fc: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522176));
  fn2_1db920(c);
  /* 173a00: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 173a04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522184));
  fn2_1bc620(c);
  /* 173a08: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 173a0c: add x1, x1, #0x53 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(83)));
  /* 173a10: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173a14: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522200));
  fn2_1b7d24(c);
  /* 173a18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 173a1c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173a20: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522212));
  fn2_1bc2f8(c);
  /* 173a24: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173a28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522220));
  fn2_1ccd9c(c);
  /* 173a2c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 173a30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 173a34: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522232));
  fn2_1db920(c);
  /* 173a38: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 173a3c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522240));
  fn2_1bc620(c);
  /* 173a40: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 173a44: add x1, x1, #0xabe */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2750)));
  /* 173a48: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173a4c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522256));
  fn2_1b7d24(c);
  /* 173a50: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 173a54: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173a58: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522268));
  fn2_1bc2f8(c);
  /* 173a5c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 173a60: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522276));
  fn2_1ccd9c(c);
  /* 173a64: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 173a68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 173a6c: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522288));
  fn2_1db920(c);
  /* 173a70: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 173a74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1522296));
  fn2_1bc620(c);
  /* 173a78: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 173a7c: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 173a80: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 173a84: ret  */
  return;
}

void fn2_175d18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077387032));
  /* 175d18: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 175d1c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 175d20: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 175d24: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 175d28: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 175d2c: ldp x21, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 175d30: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 175d34: add x20, x1, x8, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 175d38: tbz w8, #0, #0x175d44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_175d44;
  /* 175d3c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 175d40: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_175d44:;
  /* 175d44: ldr x1, [x2] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 2)));
  /* 175d48: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 175d4c: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1531216));
  fn2_1ccc88(c);
  /* 175d50: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 175d54: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 175d58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 175d5c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1531232));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 175d60: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 175d64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 175d68: bl #0x1da22c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1531244));
  fn2_1da22c(c);
  /* 175d6c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 175d70: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1531252));
  fn2_1d97fc(c);
  /* 175d74: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 175d78: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1531260));
  fn2_1ccd9c(c);
  /* 175d7c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 175d80: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 175d84: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 175d88: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 175d8c: ret  */
  return;
}

void fn2_1773d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077392848));
  /* 1773d0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1773d4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1773d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1773dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1773e0: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1536996));
  fn2_1b6040(c);
  /* 1773e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1773e8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1773ec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1773f0: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_179eac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077403820));
  /* 179eac: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 179eb0: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 179eb4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 179eb8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 179ebc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 179ec0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 179ec4: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 179ec8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 179ecc: bl #0x1d4e80 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1547984));
  fn2_1d4e80(c);
  /* 179ed0: ldr x23, [x21, #8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 179ed4: cbz x23, #0x179f00 */
  if ((ARC_X_R(c, 23)) == 0) goto L_179f00;
  /* 179ed8: fmov d0, x23 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 23)));
  /* 179edc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 179ee0: cnt v0.8b, v0.8b */
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
  /* 179ee4: uaddlv h0, v0.8b */
  { uint64_t _r = (uint64_t)((c)->q[0].u8[0]);
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[1]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[2]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[3]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[4]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[5]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[6]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[7]));
    arc_su_w(c, 0, ((uint64_t)_r & UINT64_C(65535))); }
  /* 179ee8: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* 179eec: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 179ef0: b.hi #0x179f08 */
  if (ARC_COND(c, 8)) goto L_179f08;
  /* 179ef4: sub x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 179ef8: and x22, x9, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) & ARC_X_R(c, 20)));
  /* 179efc: b #0x179f1c */
  goto L_179f1c;
L_179f00:;
  /* 179f00: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 179f04: b #0x179fcc */
  goto L_179fcc;
L_179f08:;
  /* 179f08: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* 179f0c: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 179f10: b.lo #0x179f1c */
  if (ARC_COND(c, 3)) goto L_179f1c;
  /* 179f14: udiv x9, x20, x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 23)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 20)) / (uint64_t)(ARC_X_R(c, 23)))));
  /* 179f18: msub x22, x9, x23, x20 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 20)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 23)))));
L_179f1c:;
  /* 179f1c: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* 179f20: ldr x9, [x9, x22, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 179f24: cbz x9, #0x179fb0 */
  if ((ARC_X_R(c, 9)) == 0) goto L_179fb0;
  /* 179f28: ldr x21, [x9] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 9)));
  /* 179f2c: cbz x21, #0x179fcc */
  if ((ARC_X_R(c, 21)) == 0) goto L_179fcc;
  /* 179f30: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 179f34: b.hs #0x179f8c */
  if (ARC_COND(c, 2)) goto L_179f8c;
  /* 179f38: sub x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 179f3c: b #0x179f58 */
  goto L_179f58;
L_179f40:;
  /* 179f40: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 179f44: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 179f48: bl #0x1d5690 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548108));
  fn2_1d5690(c);
  /* 179f4c: tbnz w0, #0, #0x179fcc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_179fcc;
L_179f50:;
  /* 179f50: ldr x21, [x21] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 21)));
  /* 179f54: cbz x21, #0x179fcc */
  if ((ARC_X_R(c, 21)) == 0) goto L_179fcc;
L_179f58:;
  /* 179f58: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 179f5c: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 179f60: b.eq #0x179f40 */
  if (ARC_COND(c, 0)) goto L_179f40;
  /* 179f64: and x8, x8, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & ARC_X_R(c, 23)));
  /* 179f68: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 179f6c: b.eq #0x179f50 */
  if (ARC_COND(c, 0)) goto L_179f50;
  /* 179f70: b #0x179fb0 */
  goto L_179fb0;
L_179f74:;
  /* 179f74: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 179f78: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 179f7c: bl #0x1d5690 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1548160));
  fn2_1d5690(c);
  /* 179f80: tbnz w0, #0, #0x179fcc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_179fcc;
L_179f84:;
  /* 179f84: ldr x21, [x21] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 21)));
  /* 179f88: cbz x21, #0x179fcc */
  if ((ARC_X_R(c, 21)) == 0) goto L_179fcc;
L_179f8c:;
  /* 179f8c: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 179f90: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 179f94: b.eq #0x179f74 */
  if (ARC_COND(c, 0)) goto L_179f74;
  /* 179f98: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 179f9c: b.lo #0x179fa8 */
  if (ARC_COND(c, 3)) goto L_179fa8;
  /* 179fa0: udiv x9, x8, x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 23)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 8)) / (uint64_t)(ARC_X_R(c, 23)))));
  /* 179fa4: msub x8, x9, x23, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 23)))));
L_179fa8:;
  /* 179fa8: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 179fac: b.eq #0x179f84 */
  if (ARC_COND(c, 0)) goto L_179f84;
L_179fb0:;
  /* 179fb0: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 179fb4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 179fb8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 179fbc: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 179fc0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 179fc4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 179fc8: ret  */
  return;
L_179fcc:;
  /* 179fcc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 179fd0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 179fd4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 179fd8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 179fdc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 179fe0: ret  */
  return;
}

void fn2_17c9c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077414852));
  /* 17c9c4: ret  */
  return;
}

void fn2_17d88c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077418636));
  /* 17d88c: ret  */
  return;
}

void fn2_17e798(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077422488));
  /* 17e798: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17e79c: ret  */
  return;
}

void fn2_17f660(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077426272));
  /* 17f660: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17f664: ret  */
  return;
}

void fn2_180528(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077430056));
  /* 180528: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 18052c: ret  */
  return;
}

void fn2_1813f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077433840));
  /* 1813f0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1813f4: ret  */
  return;
}

void fn2_182444(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077438020));
  /* 182444: ret  */
  return;
}

void fn2_183b00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077443840));
  /* 183b00: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 183b04: ret  */
  return;
}

void fn2_184724(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077446948));
  /* 184724: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 184728: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 18472c: ldr d0, [x8] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 184730: ldr x1, [x9, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* 184734: br x1 */
  arc_dispatch(c, ARC_X_R(c, 1)); return;
}

void fn2_185740(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077451072));
  /* 185740: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 185744: ret  */
  return;
}

void fn2_186394(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077454228));
  /* 186394: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 186398: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 18639c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1863a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1863a4: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1863a8: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 1863ac: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 1863b0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1863b4: cbz x0, #0x1863e4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1863e4;
L_1863b8:;
  /* 1863b8: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 1863bc: cbz x1, #0x1863d4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_1863d4;
  /* 1863c0: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1598404));
  fn2_aeb74(c);
  /* 1863c4: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1863c8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1863cc: cbnz w8, #0x1863b8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_1863b8;
  /* 1863d0: b #0x1863dc */
  goto L_1863dc;
L_1863d4:;
  /* 1863d4: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1863d8: cbnz w8, #0x1863f4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_1863f4;
L_1863dc:;
  /* 1863dc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1863e0: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1598436));
  fn2_1b5ce8(c);
L_1863e4:;
  /* 1863e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1863e8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1863ec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1863f0: b #0x24b730 */
  fn2_24b730(c); return;
L_1863f4:;
  /* 1863f4: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1863f8: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 1863fc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 186400: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 186404: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 186408: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 18640c: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 186410: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 186414: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 186418: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1598492));
  fn2_1b54b0(c);
  /* 18641c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 186420: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 186424: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 186428: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_18b9c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077476296));
  /* 18b9c8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 18b9cc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18b9d0: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 18b9d4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18b9d8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 18b9dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 18b9e0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 18b9e4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 18b9e8: mov x21, sp */
  ARC_X_W(c, 21, (c)->sp);
  /* 18b9ec: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620464));
  fn2_1bc290(c);
  /* 18b9f0: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 18b9f4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620472));
  fn2_1bc084(c);
  /* 18b9f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18b9fc: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620480));
  fn2_1db4a4(c);
  /* 18ba00: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18ba04: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 18ba08: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620492));
  fn2_1db9f0(c);
  /* 18ba0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18ba10: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 18ba14: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620504));
  fn2_1bbf48(c);
  /* 18ba18: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 18ba1c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620512));
  fn2_1bce10(c);
  /* 18ba20: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18ba24: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 18ba28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18ba2c: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620528));
  fn2_1d0298(c);
  /* 18ba30: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 18ba34: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620536));
  fn2_1db788(c);
  /* 18ba38: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 18ba3c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620544));
  fn2_1bc620(c);
  /* 18ba40: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 18ba44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1620552));
  fn2_1bc620(c);
  /* 18ba48: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18ba4c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 18ba50: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18ba54: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 18ba58: ret  */
  return;
}

void fn2_18c374(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077478772));
  /* 18c374: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18c378: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 18c37c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 18c380: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18c384: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 18c388: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 18c38c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 18c390: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 18c394: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 18c398: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 18c39c: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* 18c3a0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1622948));
  fn2_1bc084(c);
  /* 18c3a4: ldr x0, [x22, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(96))));
  /* 18c3a8: add x5, x22, #0x48 */
  ARC_X_W(c, 5, (ARC_X_R(c, 22) + UINT64_C(72)));
  /* 18c3ac: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 18c3b0: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 18c3b4: mov x3, x23 */
  ARC_X_W(c, 3, ARC_X_R(c, 23));
  /* 18c3b8: mov x4, x19 */
  ARC_X_W(c, 4, ARC_X_R(c, 19));
  /* 18c3bc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18c3c0: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 18c3c4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18c3c8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18c3cc: b #0x18c45c */
  fn2_18c45c(c); return;
}

void fn2_18db1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077484828));
  /* 18db1c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18db20: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 18db24: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 18db28: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18db2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 18db30: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 18db34: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 18db38: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 18db3c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 18db40: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 18db44: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 18db48: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 18db4c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1629008));
  fn2_1bc084(c);
  /* 18db50: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 18db54: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 18db58: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 18db5c: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 18db60: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* 18db64: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 18db68: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* 18db6c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18db70: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18db74: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 18db78: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18db7c: b #0x18dbc0 */
  fn2_18dbc0(c); return;
}

void fn2_1915d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077499856));
  /* 1915d0: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 1915d4: str x8, [x0, #0x70] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(112)), ARC_X_R(c, 8));
  /* 1915d8: ret  */
  return;
}

void fn2_193018(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077506584));
  /* 193018: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 19301c: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 193020: str x21, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 21));
  /* 193024: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 193028: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 19302c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 193030: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 193034: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 193038: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 19303c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650752));
  fn2_1d9740(c);
  /* 193040: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 193044: add x1, x1, #0xa7c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2684)));
  /* 193048: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19304c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650768));
  fn2_1b7d24(c);
  /* 193050: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 193054: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 193058: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650780));
  fn2_1bc2f8(c);
  /* 19305c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193060: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650788));
  fn2_1ccd9c(c);
  /* 193064: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 193068: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* 19306c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 193070: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650804));
  fn2_1b7d24(c);
  /* 193074: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193078: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19307c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650816));
  fn2_1bc2f8(c);
  /* 193080: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 193084: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650824));
  fn2_1ccd9c(c);
  /* 193088: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 19308c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 193090: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650836));
  fn2_1bbfa0(c);
  /* 193094: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 193098: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650844));
  fn2_1bcf04(c);
  /* 19309c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1930a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650852));
  fn2_1bc620(c);
  /* 1930a4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1930a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650860));
  fn2_1bc620(c);
  /* 1930ac: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1930b0: ldr x8, [x8, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* 1930b4: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 1930b8: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 1930bc: bl #0xec3a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650880));
  fn2_ec3a4(c);
  /* 1930c0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1930c4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1930c8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650892));
  fn2_1bc2f8(c);
  /* 1930cc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1930d0: add x1, x1, #0xb77 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2935)));
  /* 1930d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1930d8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650908));
  fn2_1b7d24(c);
  /* 1930dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1930e0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1930e4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650920));
  fn2_1bc2f8(c);
  /* 1930e8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1930ec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650928));
  fn2_1ccd9c(c);
  /* 1930f0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1930f4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1930f8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650940));
  fn2_1bbfa0(c);
  /* 1930fc: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 193100: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650948));
  fn2_1bcf04(c);
  /* 193104: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193108: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650956));
  fn2_1bc620(c);
  /* 19310c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 193110: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650964));
  fn2_1bc620(c);
  /* 193114: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 193118: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650972));
  fn2_1ccd9c(c);
  /* 19311c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 193120: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 193124: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1650984));
  fn2_1bc25c(c);
  /* 193128: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 19312c: add x1, x1, #0x96b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2411)));
  /* 193130: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 193134: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651000));
  fn2_1b7d24(c);
  /* 193138: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19313c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 193140: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651012));
  fn2_1bc2f8(c);
  /* 193144: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 193148: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651020));
  fn2_1ccd9c(c);
  /* 19314c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 193150: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 193154: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651032));
  fn2_1bbfa0(c);
  /* 193158: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 19315c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651040));
  fn2_1bcf04(c);
  /* 193160: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193164: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651048));
  fn2_1bc620(c);
  /* 193168: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 19316c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651056));
  fn2_1bc620(c);
  /* 193170: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 193174: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 193178: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651068));
  fn2_1bc2f8(c);
  /* 19317c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 193180: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* 193184: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 193188: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651084));
  fn2_1b7d24(c);
  /* 19318c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193190: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 193194: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651096));
  fn2_1bc2f8(c);
  /* 193198: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19319c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651104));
  fn2_1ccd9c(c);
  /* 1931a0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1931a4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1931a8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651116));
  fn2_1bbfa0(c);
  /* 1931ac: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1931b0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651124));
  fn2_1bcf04(c);
  /* 1931b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1931b8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651132));
  fn2_1bc620(c);
  /* 1931bc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1931c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651140));
  fn2_1bc620(c);
  /* 1931c4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1931c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1931cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1931d0: bl #0x1931f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651156));
  fn2_1931f0(c);
  /* 1931d4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1931d8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1651164));
  fn2_1d97fc(c);
  /* 1931dc: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1931e0: ldr x21, [sp, #0x50] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1931e4: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1931e8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1931ec: ret  */
  return;
}

void fn2_198828(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077529128));
  /* 198828: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 19882c: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 198830: str x21, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 21));
  /* 198834: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 198838: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 19883c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 198840: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 198844: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* 198848: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 19884c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673296));
  fn2_1d9740(c);
  /* 198850: adrp x8, #0x25000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(151552)));
  /* 198854: add x8, x8, #0x6ae */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1710)));
  /* 198858: tst w21, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 21) & UINT64_C(1)));
  /* 19885c: adrp x9, #0x2c000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(180224)));
  /* 198860: add x9, x9, #0x479 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1145)));
  /* 198864: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 198868: csel x1, x9, x8, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 19886c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673328));
  fn2_1b7d24(c);
  /* 198870: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198874: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 198878: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673340));
  fn2_1bc2f8(c);
  /* 19887c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 198880: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673348));
  fn2_1ccd9c(c);
  /* 198884: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 198888: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* 19888c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 198890: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673364));
  fn2_1b7d24(c);
  /* 198894: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 198898: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19889c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673376));
  fn2_1bc2f8(c);
  /* 1988a0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1988a4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673384));
  fn2_1ccd9c(c);
  /* 1988a8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1988ac: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1988b0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673396));
  fn2_1bbfa0(c);
  /* 1988b4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1988b8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673404));
  fn2_1bcf04(c);
  /* 1988bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1988c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673412));
  fn2_1bc620(c);
  /* 1988c4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1988c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673420));
  fn2_1bc620(c);
  /* 1988cc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1988d0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1988d4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673432));
  fn2_1bc2f8(c);
  /* 1988d8: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1988dc: add x1, x1, #0x339 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(825)));
  /* 1988e0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1988e4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673448));
  fn2_1b7d24(c);
  /* 1988e8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1988ec: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1988f0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673460));
  fn2_1bc2f8(c);
  /* 1988f4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1988f8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673468));
  fn2_1ccd9c(c);
  /* 1988fc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 198900: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 198904: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673480));
  fn2_1bbfa0(c);
  /* 198908: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 19890c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673488));
  fn2_1bcf04(c);
  /* 198910: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 198914: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673496));
  fn2_1bc620(c);
  /* 198918: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 19891c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673504));
  fn2_1bc620(c);
  /* 198920: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 198924: cbnz x8, #0x198934 */
  if ((ARC_X_R(c, 8)) != 0) goto L_198934;
  /* 198928: ldr d0, [x19, #0x68] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(104))));
  /* 19892c: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* 198930: b.lt #0x198954 */
  if (ARC_COND(c, 11)) goto L_198954;
L_198934:;
  /* 198934: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198938: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 19893c: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673536));
  fn2_1bc530(c);
  /* 198940: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* 198944: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198948: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673548));
  fn2_1db920(c);
  /* 19894c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 198950: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673556));
  fn2_1bc620(c);
L_198954:;
  /* 198954: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 198958: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1673564));
  fn2_1d97fc(c);
  /* 19895c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 198960: ldr x21, [sp, #0x50] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(80))));
  /* 198964: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 198968: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 19896c: ret  */
  return;
}

void fn2_19ec18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077554712));
  /* 19ec18: add x1, x0, #0xd0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(208)));
  /* 19ec1c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 19ec20: b #0x1ccc88 */
  fn2_1ccc88(c); return;
}

void fn2_19fa50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077558352));
  /* 19fa50: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 19fa54: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 19fa58: strb w8, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 8));
  /* 19fa5c: ret  */
  return;
}

void fn2_1a06d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077561556));
  /* 1a06d4: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 1a06d8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a06dc: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1a06e0: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1a06e4: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a06e8: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a06ec: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1a06f0: ldp x26, x25, [x5] */
  { const uint64_t _pa = ARC_X_R(c, 5);
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1a06f4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1a06f8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1a06fc: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* 1a0700: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 1a0704: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1a0708: mov w24, w2 */
  ARC_W_W(c, 24, ARC_W_R(c, 2));
  /* 1a070c: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 1a0710: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705748));
  fn2_1bc084(c);
  /* 1a0714: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* 1a0718: b.lt #0x1a0740 */
  if (ARC_COND(c, 11)) goto L_1a0740;
  /* 1a071c: ldr x1, [x23] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 23)));
  /* 1a0720: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a0724: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705768));
  fn2_1bc09c(c);
  /* 1a0728: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1a072c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1a0730: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705780));
  fn2_1bcf04(c);
  /* 1a0734: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a0738: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705788));
  fn2_1bc620(c);
  /* 1a073c: b #0x1a0770 */
  goto L_1a0770;
L_1a0740:;
  /* 1a0740: sub x8, x25, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) - ARC_X_R(c, 26)));
  /* 1a0744: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* 1a0748: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* 1a074c: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* 1a0750: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* 1a0754: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1a0758: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* 1a075c: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 1a0760: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* 1a0764: nop  */
  /* nop: no architectural effect here */
  /* 1a0768: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 1a076c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705840));
  fn2_1bce10(c);
L_1a0770:;
  /* 1a0770: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 1a0774: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1a0778: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1a077c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1a0780: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 1a0784: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
  /* 1a0788: bl #0x1a07b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705868));
  fn2_1a07b0(c);
  /* 1a078c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1a0790: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1705876));
  fn2_1bc620(c);
  /* 1a0794: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a0798: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a079c: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1a07a0: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1a07a4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a07a8: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 1a07ac: ret  */
  return;
}

void fn2_1a1ce8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077567208));
  /* 1a1ce8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1a1cec: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a1cf0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a1cf4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a1cf8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1a1cfc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1a1d00: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a1d04: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a1d08: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1a1d0c: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 1a1d10: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1a1d14: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711384));
  fn2_1b5d1c(c);
  /* 1a1d18: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1a1d1c: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 1a1d20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a1d24: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1a1d28: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 1a1d2c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1a1d30: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1a1d34: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711416));
  fn2_1d2c2c(c);
  /* 1a1d38: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a1d3c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711424));
  fn2_1d2c2c(c);
  /* 1a1d40: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1a1d44: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 1a1d48: add x8, x8, #0x2f0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(752)));
  /* 1a1d4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a1d50: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1a1d54: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 1a1d58: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1a1d5c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a1d60: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 1a1d64: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 1a1d68: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 1a1d6c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 1a1d70: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711476));
  fn2_1b5e68(c);
  /* 1a1d74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a1d78: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1a1d7c: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 1a1d80: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711492));
  fn2_1b5d9c(c);
  /* 1a1d84: nop  */
  /* nop: no architectural effect here */
  /* 1a1d88: adr x8, #0x25d368 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a1d8c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1a1d90: tbz w8, #0, #0x1a1dd0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a1dd0;
L_1a1d94:;
  /* 1a1d94: nop  */
  /* nop: no architectural effect here */
  /* 1a1d98: adr x1, #0x25d35a */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a1d9c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a1da0: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711524));
  fn2_1d2c40(c);
  /* 1a1da4: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a1da8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1a1dac: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711536));
  fn2_1d5dc0(c);
  /* 1a1db0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a1db4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711544));
  fn2_1d2d24(c);
  /* 1a1db8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a1dbc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a1dc0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a1dc4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a1dc8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1a1dcc: ret  */
  return;
L_1a1dd0:;
  /* 1a1dd0: nop  */
  /* nop: no architectural effect here */
  /* 1a1dd4: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a1dd8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711580));
  fn2_24b710(c);
  /* 1a1ddc: cbz w0, #0x1a1d94 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1a1d94;
  /* 1a1de0: nop  */
  /* nop: no architectural effect here */
  /* 1a1de4: adr x20, #0x25d35a */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a1de8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1a1dec: add x1, x1, #0x53c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1340)));
  /* 1a1df0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1a1df4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711608));
  fn2_1b907c(c);
  /* 1a1df8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a1dfc: nop  */
  /* nop: no architectural effect here */
  /* 1a1e00: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1a1e04: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1a1e08: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1a1e0c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711632));
  fn2_24b6f0(c);
  /* 1a1e10: nop  */
  /* nop: no architectural effect here */
  /* 1a1e14: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a1e18: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1711644));
  fn2_24b720(c);
  /* 1a1e1c: b #0x1a1d94 */
  goto L_1a1d94;
}

void fn2_1a33b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077573048));
  /* 1a33b8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1a33bc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a33c0: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* 1a33c4: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a33c8: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a33cc: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1a33d0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1a33d4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a33d8: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 1a33dc: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 1a33e0: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 1a33e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1a33e8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717228));
  fn2_1bc084(c);
  /* 1a33ec: add x0, x23, x22, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* 1a33f0: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 1a33f4: tbz w22, #0, #0x1a3400 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_1a3400;
  /* 1a33f8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1a33fc: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_1a3400:;
  /* 1a3400: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a3404: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717256));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 1a3408: ldr x1, [x29, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1a340c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1a3410: bl #0x1bc488 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717268));
  fn2_1bc488(c);
  /* 1a3414: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1a3418: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a341c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717280));
  fn2_1bcf04(c);
  /* 1a3420: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1a3424: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717288));
  fn2_1bc620(c);
  /* 1a3428: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1a342c: cbz x0, #0x1a3450 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a3450;
  /* 1a3430: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717300));
  fn2_225abc(c);
  /* 1a3434: tbz w0, #0, #0x1a3450 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a3450;
  /* 1a3438: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a343c: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1a3440: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 1a3444: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1a3448: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1a344c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717328));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1a3450:;
  /* 1a3450: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a3454: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1717336));
  fn2_1bc620(c);
  /* 1a3458: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a345c: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1a3460: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a3464: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a3468: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1a346c: ret  */
  return;
}

void fn2_1a5dc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077583816));
  /* 1a5dc8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a5dcc: stp x28, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1a5dd0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a5dd4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a5dd8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a5ddc: sub sp, sp, #0x260 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(608)));
  /* 1a5de0: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1a5de4: add x1, x1, #0xa62 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2658)));
  /* 1a5de8: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1a5dec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a5df0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1727988));
  fn2_1b8fd4(c);
  /* 1a5df4: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 1a5df8: add x1, x1, #0x32a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(810)));
  /* 1a5dfc: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a5e00: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a5e04: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728008));
  fn2_1b8fd4(c);
  /* 1a5e08: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1a5e0c: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a5e10: sub x20, x29, #0x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1a5e14: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728024));
  fn2_1b0208(c);
  /* 1a5e18: nop  */
  /* nop: no architectural effect here */
  /* 1a5e1c: adr x2, #0x1a4108 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1720584)));
  /* 1a5e20: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1a5e24: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1a5e28: bl #0xbea98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728044));
  fn2_bea98(c);
  /* 1a5e2c: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 1a5e30: cbz x8, #0x1a5e78 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a5e78;
  /* 1a5e34: ldp x8, x19, [x29, #-0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-40));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a5e38: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a5e3c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a5e40: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a5e44: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a5e48: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a5e4c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a5e50: stur xzr, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 31));
  /* 1a5e54: b.eq #0x1a5e78 */
  if (ARC_COND(c, 0)) goto L_1a5e78;
L_1a5e58:;
  /* 1a5e58: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a5e5c: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a5e60: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728100));
  fn2_1d2d24(c);
  /* 1a5e64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a5e68: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728108));
  fn2_24b730(c);
  /* 1a5e6c: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a5e70: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a5e74: b.ne #0x1a5e58 */
  if (ARC_COND(c, 1)) goto L_1a5e58;
L_1a5e78:;
  /* 1a5e78: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1a5e7c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728128));
  fn2_1d2d24(c);
  /* 1a5e80: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 1a5e84: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728136));
  fn2_1d2d24(c);
  /* 1a5e88: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1a5e8c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728144));
  fn2_1d2d24(c);
  /* 1a5e90: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1a5e94: add x1, x1, #0x4b1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1201)));
  /* 1a5e98: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1a5e9c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a5ea0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728164));
  fn2_1b8fd4(c);
  /* 1a5ea4: sub x8, x29, #0x58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 1a5ea8: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1a5eac: sub x20, x29, #0x58 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 1a5eb0: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728180));
  fn2_1b0208(c);
  /* 1a5eb4: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a5eb8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728188));
  fn2_1bc084(c);
  /* 1a5ebc: nop  */
  /* nop: no architectural effect here */
  /* 1a5ec0: adr x0, #0x1a43f8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1721336)));
  /* 1a5ec4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a5ec8: bl #0x1a6f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728204));
  fn2_1a6f54(c);
  /* 1a5ecc: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a5ed0: sub x2, x29, #0x58 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 1a5ed4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a5ed8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a5edc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a5ee0: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728228));
  fn2_1b0eac(c);
  /* 1a5ee4: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a5ee8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728236));
  fn2_1bc620(c);
  /* 1a5eec: ldur x8, [x29, #-0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1a5ef0: cbz x8, #0x1a5f38 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a5f38;
  /* 1a5ef4: ldp x8, x19, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a5ef8: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a5efc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a5f00: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a5f04: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a5f08: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a5f0c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a5f10: stur xzr, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 31));
  /* 1a5f14: b.eq #0x1a5f38 */
  if (ARC_COND(c, 0)) goto L_1a5f38;
L_1a5f18:;
  /* 1a5f18: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a5f1c: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a5f20: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728292));
  fn2_1d2d24(c);
  /* 1a5f24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a5f28: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728300));
  fn2_24b730(c);
  /* 1a5f2c: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a5f30: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a5f34: b.ne #0x1a5f18 */
  if (ARC_COND(c, 1)) goto L_1a5f18;
L_1a5f38:;
  /* 1a5f38: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* 1a5f3c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728320));
  fn2_1d2d24(c);
  /* 1a5f40: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 1a5f44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728328));
  fn2_1d2d24(c);
  /* 1a5f48: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 1a5f4c: add x1, x1, #0xcfa */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3322)));
  /* 1a5f50: sub x0, x29, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(136)));
  /* 1a5f54: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a5f58: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728348));
  fn2_1b8fd4(c);
  /* 1a5f5c: sub x8, x29, #0x80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(128)));
  /* 1a5f60: sub x0, x29, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(136)));
  /* 1a5f64: sub x20, x29, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(128)));
  /* 1a5f68: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728364));
  fn2_1b0208(c);
  /* 1a5f6c: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a5f70: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728372));
  fn2_1bc084(c);
  /* 1a5f74: nop  */
  /* nop: no architectural effect here */
  /* 1a5f78: adr x0, #0x1a4c08 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1723400)));
  /* 1a5f7c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a5f80: bl #0x1a6f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728388));
  fn2_1a6f54(c);
  /* 1a5f84: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a5f88: sub x2, x29, #0x80 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(128)));
  /* 1a5f8c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a5f90: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a5f94: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a5f98: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728412));
  fn2_1b0eac(c);
  /* 1a5f9c: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a5fa0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728420));
  fn2_1bc620(c);
  /* 1a5fa4: ldur x8, [x29, #-0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-104))));
  /* 1a5fa8: cbz x8, #0x1a5ff0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a5ff0;
  /* 1a5fac: ldp x8, x19, [x29, #-0x78] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-120));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a5fb0: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a5fb4: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a5fb8: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a5fbc: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a5fc0: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a5fc4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a5fc8: stur xzr, [x29, #-0x68] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-104)), ARC_X_R(c, 31));
  /* 1a5fcc: b.eq #0x1a5ff0 */
  if (ARC_COND(c, 0)) goto L_1a5ff0;
L_1a5fd0:;
  /* 1a5fd0: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a5fd4: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a5fd8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728476));
  fn2_1d2d24(c);
  /* 1a5fdc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a5fe0: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728484));
  fn2_24b730(c);
  /* 1a5fe4: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a5fe8: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a5fec: b.ne #0x1a5fd0 */
  if (ARC_COND(c, 1)) goto L_1a5fd0;
L_1a5ff0:;
  /* 1a5ff0: sub x0, x29, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(128)));
  /* 1a5ff4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728504));
  fn2_1d2d24(c);
  /* 1a5ff8: sub x0, x29, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(136)));
  /* 1a5ffc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728512));
  fn2_1d2d24(c);
  /* 1a6000: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1a6004: add x1, x1, #0xa59 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2649)));
  /* 1a6008: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1a600c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a6010: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728532));
  fn2_1b8fd4(c);
  /* 1a6014: sub x8, x29, #0xa8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1a6018: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1a601c: sub x20, x29, #0xa8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1a6020: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728548));
  fn2_1b0208(c);
  /* 1a6024: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6028: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728556));
  fn2_1bc084(c);
  /* 1a602c: nop  */
  /* nop: no architectural effect here */
  /* 1a6030: adr x0, #0x1a4c40 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1723456)));
  /* 1a6034: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a6038: bl #0x1a6f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728572));
  fn2_1a6f54(c);
  /* 1a603c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a6040: sub x2, x29, #0xa8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1a6044: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a6048: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a604c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a6050: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728596));
  fn2_1b0eac(c);
  /* 1a6054: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6058: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728604));
  fn2_1bc620(c);
  /* 1a605c: ldur x8, [x29, #-0x90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 1a6060: cbz x8, #0x1a60a8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a60a8;
  /* 1a6064: ldp x8, x19, [x29, #-0xa0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-160));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a6068: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a606c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a6070: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a6074: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a6078: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a607c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a6080: stur xzr, [x29, #-0x90] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)), ARC_X_R(c, 31));
  /* 1a6084: b.eq #0x1a60a8 */
  if (ARC_COND(c, 0)) goto L_1a60a8;
L_1a6088:;
  /* 1a6088: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a608c: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a6090: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728660));
  fn2_1d2d24(c);
  /* 1a6094: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a6098: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728668));
  fn2_24b730(c);
  /* 1a609c: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a60a0: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a60a4: b.ne #0x1a6088 */
  if (ARC_COND(c, 1)) goto L_1a6088;
L_1a60a8:;
  /* 1a60a8: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 1a60ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728688));
  fn2_1d2d24(c);
  /* 1a60b0: sub x0, x29, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1a60b4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728696));
  fn2_1d2d24(c);
  /* 1a60b8: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 1a60bc: add x1, x1, #0x496 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1174)));
  /* 1a60c0: sub x0, x29, #0xd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(216)));
  /* 1a60c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a60c8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728716));
  fn2_1b8fd4(c);
  /* 1a60cc: sub x8, x29, #0xd0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(208)));
  /* 1a60d0: sub x0, x29, #0xd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(216)));
  /* 1a60d4: sub x20, x29, #0xd0 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(208)));
  /* 1a60d8: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728732));
  fn2_1b0208(c);
  /* 1a60dc: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a60e0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728740));
  fn2_1bc084(c);
  /* 1a60e4: nop  */
  /* nop: no architectural effect here */
  /* 1a60e8: adr x0, #0x1a4c58 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1723480)));
  /* 1a60ec: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a60f0: bl #0x1a7084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728756));
  fn2_1a7084(c);
  /* 1a60f4: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a60f8: sub x2, x29, #0xd0 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(208)));
  /* 1a60fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a6100: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a6104: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a6108: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728780));
  fn2_1b0eac(c);
  /* 1a610c: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6110: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728788));
  fn2_1bc620(c);
  /* 1a6114: ldur x8, [x29, #-0xb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-184))));
  /* 1a6118: cbz x8, #0x1a6160 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a6160;
  /* 1a611c: ldp x8, x19, [x29, #-0xc8] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-200));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a6120: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a6124: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a6128: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a612c: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a6130: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a6134: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a6138: stur xzr, [x29, #-0xb8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-184)), ARC_X_R(c, 31));
  /* 1a613c: b.eq #0x1a6160 */
  if (ARC_COND(c, 0)) goto L_1a6160;
L_1a6140:;
  /* 1a6140: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a6144: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a6148: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728844));
  fn2_1d2d24(c);
  /* 1a614c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a6150: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728852));
  fn2_24b730(c);
  /* 1a6154: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a6158: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a615c: b.ne #0x1a6140 */
  if (ARC_COND(c, 1)) goto L_1a6140;
L_1a6160:;
  /* 1a6160: sub x0, x29, #0xd0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(208)));
  /* 1a6164: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728872));
  fn2_1d2d24(c);
  /* 1a6168: sub x0, x29, #0xd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(216)));
  /* 1a616c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728880));
  fn2_1d2d24(c);
  /* 1a6170: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 1a6174: add x1, x1, #0xdab */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3499)));
  /* 1a6178: sub x0, x29, #0x100 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(256)));
  /* 1a617c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a6180: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728900));
  fn2_1b8fd4(c);
  /* 1a6184: sub x8, x29, #0xf8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(248)));
  /* 1a6188: sub x0, x29, #0x100 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(256)));
  /* 1a618c: sub x20, x29, #0xf8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(248)));
  /* 1a6190: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728916));
  fn2_1b0208(c);
  /* 1a6194: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6198: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728924));
  fn2_1bc084(c);
  /* 1a619c: nop  */
  /* nop: no architectural effect here */
  /* 1a61a0: adr x0, #0x1a4ce8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1723624)));
  /* 1a61a4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a61a8: bl #0x1a7084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728940));
  fn2_1a7084(c);
  /* 1a61ac: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a61b0: sub x2, x29, #0xf8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(248)));
  /* 1a61b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a61b8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a61bc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a61c0: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728964));
  fn2_1b0eac(c);
  /* 1a61c4: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a61c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1728972));
  fn2_1bc620(c);
  /* 1a61cc: ldur x8, [x29, #-0xe0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-224))));
  /* 1a61d0: cbz x8, #0x1a6218 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a6218;
  /* 1a61d4: ldp x8, x19, [x29, #-0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-240));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a61d8: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a61dc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a61e0: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a61e4: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a61e8: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a61ec: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a61f0: stur xzr, [x29, #-0xe0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)), ARC_X_R(c, 31));
  /* 1a61f4: b.eq #0x1a6218 */
  if (ARC_COND(c, 0)) goto L_1a6218;
L_1a61f8:;
  /* 1a61f8: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a61fc: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a6200: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729028));
  fn2_1d2d24(c);
  /* 1a6204: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a6208: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729036));
  fn2_24b730(c);
  /* 1a620c: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a6210: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a6214: b.ne #0x1a61f8 */
  if (ARC_COND(c, 1)) goto L_1a61f8;
L_1a6218:;
  /* 1a6218: sub x0, x29, #0xf8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(248)));
  /* 1a621c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729056));
  fn2_1d2d24(c);
  /* 1a6220: sub x0, x29, #0x100 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(256)));
  /* 1a6224: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729064));
  fn2_1d2d24(c);
  /* 1a6228: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1a622c: add x1, x1, #0xf46 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3910)));
  /* 1a6230: add x0, sp, #0x138 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(312)));
  /* 1a6234: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a6238: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729084));
  fn2_1b8fd4(c);
  /* 1a623c: add x8, sp, #0x140 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(320)));
  /* 1a6240: add x0, sp, #0x138 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(312)));
  /* 1a6244: add x20, sp, #0x140 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(320)));
  /* 1a6248: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729100));
  fn2_1b0208(c);
  /* 1a624c: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6250: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729108));
  fn2_1bc084(c);
  /* 1a6254: nop  */
  /* nop: no architectural effect here */
  /* 1a6258: adr x0, #0x1a6cd4 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1731796)));
  /* 1a625c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a6260: bl #0x1a71b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729124));
  fn2_1a71b4(c);
  /* 1a6264: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a6268: add x2, sp, #0x140 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(320)));
  /* 1a626c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a6270: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a6274: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a6278: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729148));
  fn2_1b0eac(c);
  /* 1a627c: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6280: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729156));
  fn2_1bc620(c);
  /* 1a6284: ldr x8, [sp, #0x158] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(344))));
  /* 1a6288: cbz x8, #0x1a62d0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a62d0;
  /* 1a628c: ldp x8, x19, [sp, #0x148] */
  { const uint64_t _pa = ((c)->sp + INT64_C(328));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a6290: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a6294: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a6298: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a629c: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a62a0: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a62a4: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a62a8: str xzr, [sp, #0x158] */
  arc_st64(((c)->sp + INT64_C(344)), ARC_X_R(c, 31));
  /* 1a62ac: b.eq #0x1a62d0 */
  if (ARC_COND(c, 0)) goto L_1a62d0;
L_1a62b0:;
  /* 1a62b0: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a62b4: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a62b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729212));
  fn2_1d2d24(c);
  /* 1a62bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a62c0: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729220));
  fn2_24b730(c);
  /* 1a62c4: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a62c8: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a62cc: b.ne #0x1a62b0 */
  if (ARC_COND(c, 1)) goto L_1a62b0;
L_1a62d0:;
  /* 1a62d0: add x0, sp, #0x140 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(320)));
  /* 1a62d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729240));
  fn2_1d2d24(c);
  /* 1a62d8: add x0, sp, #0x138 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(312)));
  /* 1a62dc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729248));
  fn2_1d2d24(c);
  /* 1a62e0: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1a62e4: add x1, x1, #0x8a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(138)));
  /* 1a62e8: add x0, sp, #0x110 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(272)));
  /* 1a62ec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a62f0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729268));
  fn2_1b8fd4(c);
  /* 1a62f4: add x8, sp, #0x118 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(280)));
  /* 1a62f8: add x0, sp, #0x110 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(272)));
  /* 1a62fc: add x20, sp, #0x118 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(280)));
  /* 1a6300: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729284));
  fn2_1b0208(c);
  /* 1a6304: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6308: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729292));
  fn2_1bc084(c);
  /* 1a630c: nop  */
  /* nop: no architectural effect here */
  /* 1a6310: adr x0, #0x1a6ce0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1731808)));
  /* 1a6314: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a6318: bl #0x1a71b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729308));
  fn2_1a71b4(c);
  /* 1a631c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a6320: add x2, sp, #0x118 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(280)));
  /* 1a6324: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a6328: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a632c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a6330: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729332));
  fn2_1b0eac(c);
  /* 1a6334: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6338: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729340));
  fn2_1bc620(c);
  /* 1a633c: ldr x8, [sp, #0x130] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(304))));
  /* 1a6340: cbz x8, #0x1a6388 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a6388;
  /* 1a6344: ldp x8, x19, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a6348: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a634c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a6350: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a6354: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a6358: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a635c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a6360: str xzr, [sp, #0x130] */
  arc_st64(((c)->sp + INT64_C(304)), ARC_X_R(c, 31));
  /* 1a6364: b.eq #0x1a6388 */
  if (ARC_COND(c, 0)) goto L_1a6388;
L_1a6368:;
  /* 1a6368: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a636c: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a6370: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729396));
  fn2_1d2d24(c);
  /* 1a6374: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a6378: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729404));
  fn2_24b730(c);
  /* 1a637c: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a6380: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a6384: b.ne #0x1a6368 */
  if (ARC_COND(c, 1)) goto L_1a6368;
L_1a6388:;
  /* 1a6388: add x0, sp, #0x118 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(280)));
  /* 1a638c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729424));
  fn2_1d2d24(c);
  /* 1a6390: add x0, sp, #0x110 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(272)));
  /* 1a6394: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729432));
  fn2_1d2d24(c);
  /* 1a6398: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a639c: add x1, x1, #0x44f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1103)));
  /* 1a63a0: add x0, sp, #0xe8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(232)));
  /* 1a63a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a63a8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729452));
  fn2_1b8fd4(c);
  /* 1a63ac: add x8, sp, #0xf0 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(240)));
  /* 1a63b0: add x0, sp, #0xe8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(232)));
  /* 1a63b4: add x20, sp, #0xf0 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(240)));
  /* 1a63b8: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729468));
  fn2_1b0208(c);
  /* 1a63bc: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a63c0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729476));
  fn2_1bc084(c);
  /* 1a63c4: nop  */
  /* nop: no architectural effect here */
  /* 1a63c8: adr x0, #0x1a4d7c */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1723772)));
  /* 1a63cc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a63d0: bl #0x1a72f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729492));
  fn2_1a72f0(c);
  /* 1a63d4: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a63d8: add x2, sp, #0xf0 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(240)));
  /* 1a63dc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a63e0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a63e4: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a63e8: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729516));
  fn2_1b0eac(c);
  /* 1a63ec: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a63f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729524));
  fn2_1bc620(c);
  /* 1a63f4: ldr x8, [sp, #0x108] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(264))));
  /* 1a63f8: cbz x8, #0x1a6440 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a6440;
  /* 1a63fc: ldp x8, x19, [sp, #0xf8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(248));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a6400: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a6404: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a6408: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a640c: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a6410: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a6414: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a6418: str xzr, [sp, #0x108] */
  arc_st64(((c)->sp + INT64_C(264)), ARC_X_R(c, 31));
  /* 1a641c: b.eq #0x1a6440 */
  if (ARC_COND(c, 0)) goto L_1a6440;
L_1a6420:;
  /* 1a6420: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a6424: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a6428: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729580));
  fn2_1d2d24(c);
  /* 1a642c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a6430: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729588));
  fn2_24b730(c);
  /* 1a6434: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a6438: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a643c: b.ne #0x1a6420 */
  if (ARC_COND(c, 1)) goto L_1a6420;
L_1a6440:;
  /* 1a6440: add x0, sp, #0xf0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(240)));
  /* 1a6444: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729608));
  fn2_1d2d24(c);
  /* 1a6448: add x0, sp, #0xe8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(232)));
  /* 1a644c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729616));
  fn2_1d2d24(c);
  /* 1a6450: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 1a6454: add x1, x1, #0xda6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3494)));
  /* 1a6458: add x0, sp, #0xc0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(192)));
  /* 1a645c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a6460: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729636));
  fn2_1b8fd4(c);
  /* 1a6464: add x8, sp, #0xc8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(200)));
  /* 1a6468: add x0, sp, #0xc0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(192)));
  /* 1a646c: add x20, sp, #0xc8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(200)));
  /* 1a6470: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729652));
  fn2_1b0208(c);
  /* 1a6474: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6478: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729660));
  fn2_1bc084(c);
  /* 1a647c: nop  */
  /* nop: no architectural effect here */
  /* 1a6480: adr x0, #0x1a56f0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1726192)));
  /* 1a6484: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a6488: bl #0x1a7420 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729676));
  fn2_1a7420(c);
  /* 1a648c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a6490: add x2, sp, #0xc8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(200)));
  /* 1a6494: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a6498: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a649c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a64a0: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729700));
  fn2_1b0eac(c);
  /* 1a64a4: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a64a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729708));
  fn2_1bc620(c);
  /* 1a64ac: ldr x8, [sp, #0xe0] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(224))));
  /* 1a64b0: cbz x8, #0x1a64f8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a64f8;
  /* 1a64b4: ldp x8, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a64b8: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a64bc: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a64c0: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a64c4: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a64c8: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a64cc: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a64d0: str xzr, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), ARC_X_R(c, 31));
  /* 1a64d4: b.eq #0x1a64f8 */
  if (ARC_COND(c, 0)) goto L_1a64f8;
L_1a64d8:;
  /* 1a64d8: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a64dc: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a64e0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729764));
  fn2_1d2d24(c);
  /* 1a64e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a64e8: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729772));
  fn2_24b730(c);
  /* 1a64ec: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a64f0: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a64f4: b.ne #0x1a64d8 */
  if (ARC_COND(c, 1)) goto L_1a64d8;
L_1a64f8:;
  /* 1a64f8: add x0, sp, #0xc8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(200)));
  /* 1a64fc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729792));
  fn2_1d2d24(c);
  /* 1a6500: add x0, sp, #0xc0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(192)));
  /* 1a6504: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729800));
  fn2_1d2d24(c);
  /* 1a6508: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1a650c: add x1, x1, #0x4b6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1206)));
  /* 1a6510: add x0, sp, #0x98 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(152)));
  /* 1a6514: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a6518: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729820));
  fn2_1b8fd4(c);
  /* 1a651c: add x8, sp, #0xa0 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(160)));
  /* 1a6520: add x0, sp, #0x98 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(152)));
  /* 1a6524: add x20, sp, #0xa0 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(160)));
  /* 1a6528: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729836));
  fn2_1b0208(c);
  /* 1a652c: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6530: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729844));
  fn2_1bc084(c);
  /* 1a6534: nop  */
  /* nop: no architectural effect here */
  /* 1a6538: adr x0, #0x1a4034 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1720372)));
  /* 1a653c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a6540: bl #0x1a7420 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729860));
  fn2_1a7420(c);
  /* 1a6544: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a6548: add x2, sp, #0xa0 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(160)));
  /* 1a654c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a6550: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a6554: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a6558: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729884));
  fn2_1b0eac(c);
  /* 1a655c: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6560: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729892));
  fn2_1bc620(c);
  /* 1a6564: ldr x8, [sp, #0xb8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(184))));
  /* 1a6568: cbz x8, #0x1a65b0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a65b0;
  /* 1a656c: ldp x8, x19, [sp, #0xa8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(168));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a6570: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a6574: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a6578: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a657c: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a6580: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a6584: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a6588: str xzr, [sp, #0xb8] */
  arc_st64(((c)->sp + INT64_C(184)), ARC_X_R(c, 31));
  /* 1a658c: b.eq #0x1a65b0 */
  if (ARC_COND(c, 0)) goto L_1a65b0;
L_1a6590:;
  /* 1a6590: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a6594: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a6598: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729948));
  fn2_1d2d24(c);
  /* 1a659c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a65a0: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729956));
  fn2_24b730(c);
  /* 1a65a4: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a65a8: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a65ac: b.ne #0x1a6590 */
  if (ARC_COND(c, 1)) goto L_1a6590;
L_1a65b0:;
  /* 1a65b0: add x0, sp, #0xa0 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(160)));
  /* 1a65b4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729976));
  fn2_1d2d24(c);
  /* 1a65b8: add x0, sp, #0x98 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(152)));
  /* 1a65bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1729984));
  fn2_1d2d24(c);
  /* 1a65c0: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1a65c4: add x1, x1, #0xc74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3188)));
  /* 1a65c8: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* 1a65cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a65d0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730004));
  fn2_1b8fd4(c);
  /* 1a65d4: add x8, sp, #0x78 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(120)));
  /* 1a65d8: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* 1a65dc: add x20, sp, #0x78 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(120)));
  /* 1a65e0: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730020));
  fn2_1b0208(c);
  /* 1a65e4: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a65e8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730028));
  fn2_1bc084(c);
  /* 1a65ec: nop  */
  /* nop: no architectural effect here */
  /* 1a65f0: adr x0, #0x1a6cec */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1731820)));
  /* 1a65f4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a65f8: bl #0x1a7544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730044));
  fn2_1a7544(c);
  /* 1a65fc: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a6600: add x2, sp, #0x78 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(120)));
  /* 1a6604: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a6608: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a660c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a6610: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730068));
  fn2_1b0eac(c);
  /* 1a6614: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6618: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730076));
  fn2_1bc620(c);
  /* 1a661c: ldr x8, [sp, #0x90] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(144))));
  /* 1a6620: cbz x8, #0x1a6668 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a6668;
  /* 1a6624: ldp x8, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a6628: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 1a662c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a6630: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a6634: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 1a6638: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a663c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a6640: str xzr, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 31));
  /* 1a6644: b.eq #0x1a6668 */
  if (ARC_COND(c, 0)) goto L_1a6668;
L_1a6648:;
  /* 1a6648: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a664c: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a6650: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730132));
  fn2_1d2d24(c);
  /* 1a6654: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a6658: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730140));
  fn2_24b730(c);
  /* 1a665c: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1a6660: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* 1a6664: b.ne #0x1a6648 */
  if (ARC_COND(c, 1)) goto L_1a6648;
L_1a6668:;
  /* 1a6668: add x0, sp, #0x78 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(120)));
  /* 1a666c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730160));
  fn2_1d2d24(c);
  /* 1a6670: add x0, sp, #0x70 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(112)));
  /* 1a6674: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730168));
  fn2_1d2d24(c);
  /* 1a6678: nop  */
  /* nop: no architectural effect here */
  /* 1a667c: adr x21, #0x25d320 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 1a6680: ldarb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 1a6684: tbz w8, #0, #0x1a69c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a69c0;
L_1a6688:;
  /* 1a6688: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 1a668c: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1a6690: add x1, x1, #0xa6b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2667)));
  /* 1a6694: add x0, sp, #0x44 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(68)));
  /* 1a6698: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a669c: movk w20, #0x1000, lsl #16 */
  ARC_W_W(c, 20, ((ARC_W_R(c, 20) & UINT64_C(18446744069414649855)) | UINT64_C(268435456)));
  /* 1a66a0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730212));
  fn2_1b8fd4(c);
  /* 1a66a4: adrp x19, #0x1e000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a66a8: add x19, x19, #0xb6f */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(2927)));
  /* 1a66ac: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 1a66b0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1a66b4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730232));
  fn2_1b7d24(c);
  /* 1a66b8: add x0, sp, #0x34 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(52)));
  /* 1a66bc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1a66c0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a66c4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730248));
  fn2_1b8fd4(c);
  /* 1a66c8: add x19, sp, #0x4c */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(76)));
  /* 1a66cc: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 1a66d0: add x1, sp, #0x44 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(68)));
  /* 1a66d4: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1a66d8: str w8, [sp, #0x4c] */
  arc_st32(((c)->sp + INT64_C(76)), ARC_W_R(c, 8));
  /* 1a66dc: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730272));
  fn2_1d2c40(c);
  /* 1a66e0: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a66e4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730280));
  fn2_1d2c2c(c);
  /* 1a66e8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a66ec: add x1, sp, #0x3c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(60)));
  /* 1a66f0: str wzr, [sp, #0x60] */
  arc_st32(((c)->sp + INT64_C(96)), ARC_W_R(c, 31));
  /* 1a66f4: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730296));
  fn2_1ccc88(c);
  /* 1a66f8: ldr w8, [sp, #0x60] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(96))));
  /* 1a66fc: str w20, [sp, #0x6c] */
  arc_st32(((c)->sp + INT64_C(108)), ARC_W_R(c, 20));
  /* 1a6700: cmp w8, #0x11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(17));
  /* 1a6704: b.ne #0x1a672c */
  if (ARC_COND(c, 1)) goto L_1a672c;
  /* 1a6708: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a670c: add x1, x19, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a6710: bl #0x1d2c70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730324));
  fn2_1d2c70(c);
  /* 1a6714: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a6718: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a671c: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730336));
  fn2_1d2b98(c);
  /* 1a6720: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a6724: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730344));
  fn2_1d2d24(c);
  /* 1a6728: b #0x1a6738 */
  goto L_1a6738;
L_1a672c:;
  /* 1a672c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a6730: add x1, sp, #0x34 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(52)));
  /* 1a6734: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730360));
  fn2_1d5dc0(c);
L_1a6738:;
  /* 1a6738: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a673c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a6740: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a6744: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a6748: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730380));
  fn2_1b8fd4(c);
  /* 1a674c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1a6750: add x1, x1, #0xc74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3188)));
  /* 1a6754: add x0, sp, #0x2c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(44)));
  /* 1a6758: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a675c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730400));
  fn2_1b8fd4(c);
  /* 1a6760: nop  */
  /* nop: no architectural effect here */
  /* 1a6764: adr x0, #0x25d317 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478871)));
  /* 1a6768: add x1, sp, #0x4c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(76)));
  /* 1a676c: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a6770: add x3, sp, #0x2c */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(44)));
  /* 1a6774: mov w4, #-1 */
  ARC_W_W(c, 4, UINT64_C(18446744073709551615));
  /* 1a6778: bl #0x1b05a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730428));
  fn2_1b05a0(c);
  /* 1a677c: add x0, sp, #0x2c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(44)));
  /* 1a6780: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730436));
  fn2_1d2d24(c);
  /* 1a6784: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a6788: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730444));
  fn2_1d2d24(c);
  /* 1a678c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a6790: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730452));
  fn2_1ccd9c(c);
  /* 1a6794: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a6798: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730460));
  fn2_1d2d24(c);
  /* 1a679c: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1a67a0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730468));
  fn2_1d2d24(c);
  /* 1a67a4: add x0, sp, #0x34 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(52)));
  /* 1a67a8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730476));
  fn2_1d2d24(c);
  /* 1a67ac: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 1a67b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730484));
  fn2_1ccd9c(c);
  /* 1a67b4: add x0, sp, #0x44 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(68)));
  /* 1a67b8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730492));
  fn2_1d2d24(c);
  /* 1a67bc: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1a67c0: add x1, x1, #0xbb8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3000)));
  /* 1a67c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a67c8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a67cc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730512));
  fn2_1b8fd4(c);
  /* 1a67d0: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1a67d4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a67d8: add x22, sp, #8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(8)));
  /* 1a67dc: bl #0x1b0208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730528));
  fn2_1b0208(c);
  /* 1a67e0: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a67e4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730536));
  fn2_1bc084(c);
  /* 1a67e8: nop  */
  /* nop: no architectural effect here */
  /* 1a67ec: adr x0, #0x1a6cf4 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1731828)));
  /* 1a67f0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1a67f4: bl #0x1a71b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730552));
  fn2_1a71b4(c);
  /* 1a67f8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1a67fc: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1a6800: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1a6804: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1a6808: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1a680c: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730576));
  fn2_1b0eac(c);
  /* 1a6810: add x0, sp, #0x4c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(76)));
  /* 1a6814: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730584));
  fn2_1bc620(c);
  /* 1a6818: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1a681c: cbz x8, #0x1a6864 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a6864;
  /* 1a6820: ldp x8, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a6824: add x22, x22, #8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* 1a6828: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1a682c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 1a6830: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* 1a6834: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1a6838: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1a683c: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* 1a6840: b.eq #0x1a6864 */
  if (ARC_COND(c, 0)) goto L_1a6864;
L_1a6844:;
  /* 1a6844: ldr x23, [x19, #8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1a6848: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 1a684c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730640));
  fn2_1d2d24(c);
  /* 1a6850: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a6854: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730648));
  fn2_24b730(c);
  /* 1a6858: cmp x23, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 22));
  /* 1a685c: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* 1a6860: b.ne #0x1a6844 */
  if (ARC_COND(c, 1)) goto L_1a6844;
L_1a6864:;
  /* 1a6864: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1a6868: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730668));
  fn2_1d2d24(c);
  /* 1a686c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1a6870: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730676));
  fn2_1d2d24(c);
  /* 1a6874: ldarb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* 1a6878: tbz w8, #0, #0x1a6a10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a6a10;
L_1a687c:;
  /* 1a687c: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1a6880: add x1, x1, #0xa6e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2670)));
  /* 1a6884: add x0, sp, #0x44 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(68)));
  /* 1a6888: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a688c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730704));
  fn2_1b8fd4(c);
  /* 1a6890: adrp x19, #0x1e000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a6894: add x19, x19, #0xb6f */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(2927)));
  /* 1a6898: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 1a689c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1a68a0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730724));
  fn2_1b7d24(c);
  /* 1a68a4: add x0, sp, #0x34 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(52)));
  /* 1a68a8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1a68ac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a68b0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730740));
  fn2_1b8fd4(c);
  /* 1a68b4: add x19, sp, #0x4c */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(76)));
  /* 1a68b8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1a68bc: add x1, sp, #0x44 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(68)));
  /* 1a68c0: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1a68c4: str w8, [sp, #0x4c] */
  arc_st32(((c)->sp + INT64_C(76)), ARC_W_R(c, 8));
  /* 1a68c8: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730764));
  fn2_1d2c40(c);
  /* 1a68cc: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a68d0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730772));
  fn2_1d2c2c(c);
  /* 1a68d4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a68d8: add x1, sp, #0x3c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(60)));
  /* 1a68dc: str wzr, [sp, #0x60] */
  arc_st32(((c)->sp + INT64_C(96)), ARC_W_R(c, 31));
  /* 1a68e0: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730788));
  fn2_1ccc88(c);
  /* 1a68e4: ldr w8, [sp, #0x60] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(96))));
  /* 1a68e8: str w20, [sp, #0x6c] */
  arc_st32(((c)->sp + INT64_C(108)), ARC_W_R(c, 20));
  /* 1a68ec: cmp w8, #0x11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(17));
  /* 1a68f0: b.ne #0x1a6918 */
  if (ARC_COND(c, 1)) goto L_1a6918;
  /* 1a68f4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a68f8: add x1, x19, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a68fc: bl #0x1d2c70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730816));
  fn2_1d2c70(c);
  /* 1a6900: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a6904: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a6908: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730828));
  fn2_1d2b98(c);
  /* 1a690c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a6910: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730836));
  fn2_1d2d24(c);
  /* 1a6914: b #0x1a6924 */
  goto L_1a6924;
L_1a6918:;
  /* 1a6918: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a691c: add x1, sp, #0x34 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(52)));
  /* 1a6920: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730852));
  fn2_1d5dc0(c);
L_1a6924:;
  /* 1a6924: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a6928: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a692c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a6930: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a6934: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730872));
  fn2_1b8fd4(c);
  /* 1a6938: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1a693c: add x1, x1, #0xbb8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3000)));
  /* 1a6940: add x0, sp, #0x2c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(44)));
  /* 1a6944: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1a6948: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730892));
  fn2_1b8fd4(c);
  /* 1a694c: nop  */
  /* nop: no architectural effect here */
  /* 1a6950: adr x0, #0x25d317 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478871)));
  /* 1a6954: add x1, sp, #0x4c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(76)));
  /* 1a6958: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a695c: add x3, sp, #0x2c */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(44)));
  /* 1a6960: mov w4, #-1 */
  ARC_W_W(c, 4, UINT64_C(18446744073709551615));
  /* 1a6964: bl #0x1b05a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730920));
  fn2_1b05a0(c);
  /* 1a6968: add x0, sp, #0x2c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(44)));
  /* 1a696c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730928));
  fn2_1d2d24(c);
  /* 1a6970: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1a6974: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730936));
  fn2_1d2d24(c);
  /* 1a6978: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1a697c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730944));
  fn2_1ccd9c(c);
  /* 1a6980: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1a6984: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730952));
  fn2_1d2d24(c);
  /* 1a6988: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1a698c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730960));
  fn2_1d2d24(c);
  /* 1a6990: add x0, sp, #0x34 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(52)));
  /* 1a6994: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730968));
  fn2_1d2d24(c);
  /* 1a6998: add x0, sp, #0x3c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(60)));
  /* 1a699c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730976));
  fn2_1ccd9c(c);
  /* 1a69a0: add x0, sp, #0x44 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(68)));
  /* 1a69a4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1730984));
  fn2_1d2d24(c);
  /* 1a69a8: add sp, sp, #0x260 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(608)));
  /* 1a69ac: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a69b0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a69b4: ldp x28, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1a69b8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a69bc: ret  */
  return;
L_1a69c0:;
  /* 1a69c0: nop  */
  /* nop: no architectural effect here */
  /* 1a69c4: adr x0, #0x25d320 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 1a69c8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731020));
  fn2_24b710(c);
  /* 1a69cc: cbz w0, #0x1a6688 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1a6688;
  /* 1a69d0: nop  */
  /* nop: no architectural effect here */
  /* 1a69d4: adr x19, #0x25d317 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478871)));
  /* 1a69d8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1a69dc: add x1, x1, #0x448 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1096)));
  /* 1a69e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a69e4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731048));
  fn2_1b907c(c);
  /* 1a69e8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a69ec: nop  */
  /* nop: no architectural effect here */
  /* 1a69f0: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1a69f4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1a69f8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1a69fc: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731072));
  fn2_24b6f0(c);
  /* 1a6a00: nop  */
  /* nop: no architectural effect here */
  /* 1a6a04: adr x0, #0x25d320 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 1a6a08: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731084));
  fn2_24b720(c);
  /* 1a6a0c: b #0x1a6688 */
  goto L_1a6688;
L_1a6a10:;
  /* 1a6a10: nop  */
  /* nop: no architectural effect here */
  /* 1a6a14: adr x0, #0x25d320 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 1a6a18: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731100));
  fn2_24b710(c);
  /* 1a6a1c: cbz w0, #0x1a687c */
  if ((ARC_W_R(c, 0)) == 0) goto L_1a687c;
  /* 1a6a20: nop  */
  /* nop: no architectural effect here */
  /* 1a6a24: adr x19, #0x25d317 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478871)));
  /* 1a6a28: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1a6a2c: add x1, x1, #0x448 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1096)));
  /* 1a6a30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a6a34: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731128));
  fn2_1b907c(c);
  /* 1a6a38: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a6a3c: nop  */
  /* nop: no architectural effect here */
  /* 1a6a40: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1a6a44: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1a6a48: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1a6a4c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731152));
  fn2_24b6f0(c);
  /* 1a6a50: nop  */
  /* nop: no architectural effect here */
  /* 1a6a54: adr x0, #0x25d320 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 1a6a58: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1731164));
  fn2_24b720(c);
  /* 1a6a5c: b #0x1a687c */
  goto L_1a687c;
}

void fn2_1a85ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077594028));
  /* 1a85ac: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a85b0: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a85b4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a85b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a85bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1a85c0: ldr x8, [x20, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(96));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1a85c4: cbz x8, #0x1a8614 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a8614;
  /* 1a85c8: ldr w9, [x8, #0x10] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1a85cc: cbz w9, #0x1a8614 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1a8614;
  /* 1a85d0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 1a85d4: ldr x1, [x8] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 8)));
  /* 1a85d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a85dc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1a85e0: ldr w8, [x1], #4 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(4));
    ARC_W_W(c, 8, arc_ld32(_a));
  }
  /* 1a85e4: str w8, [x0, #0x68] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(104)), ARC_W_R(c, 8));
  /* 1a85e8: add x0, x0, #0x6c */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(108)));
  /* 1a85ec: bl #0x1df24c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738224));
  fn2_1df24c(c);
  /* 1a85f0: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 1a85f4: cbz x8, #0x1a8608 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1a8608;
  /* 1a85f8: ldr x1, [x8] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 8)));
  /* 1a85fc: cbz x1, #0x1a8608 */
  if ((ARC_X_R(c, 1)) == 0) goto L_1a8608;
  /* 1a8600: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1a8604: bl #0x1ac290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738248));
  fn2_1ac290(c);
L_1a8608:;
  /* 1a8608: add x0, x19, #0x6c */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(108)));
  /* 1a860c: bl #0x1ddec4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738256));
  fn2_1ddec4(c);
  /* 1a8610: tbz w0, #0, #0x1a8628 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1a8628;
L_1a8614:;
  /* 1a8614: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 1a8618: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a861c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a8620: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a8624: ret  */
  return;
L_1a8628:;
  /* 1a8628: add x0, x19, #0x6c */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(108)));
  /* 1a862c: bl #0x1bbc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738288));
  fn2_1bbc88(c);
  /* 1a8630: str x0, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 0));
  /* 1a8634: add x0, x19, #0x6c */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(108)));
  /* 1a8638: bl #0x1dde90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1738300));
  fn2_1dde90(c);
  /* 1a863c: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 1a8640: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1a8644: str w8, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 8));
  /* 1a8648: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a864c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a8650: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a8654: ret  */
  return;
}

void fn2_1aa1f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077601268));
  /* 1aa1f4: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1aa1f8: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 1aa1fc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1aa200: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1aa204: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1aa208: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1aa20c: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1aa210: cbz x0, #0x1aa2b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1aa2b8;
  /* 1aa214: ldr w8, [x19, #0x2c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(44))));
  /* 1aa218: cbz w8, #0x1aa294 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1aa294;
  /* 1aa21c: ldr w8, [x19, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(40))));
  /* 1aa220: adrp x9, #0x36000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1aa224: add x9, x9, #0x68c */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1676)));
  /* 1aa228: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 1aa22c: ldr w8, [x9, x8, lsl #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 2))));
  /* 1aa230: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1aa234: csinc w22, w8, wzr, hi */
  ARC_W_W(c, 22, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1aa238: b #0x1aa248 */
  goto L_1aa248;
L_1aa23c:;
  /* 1aa23c: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 1aa240: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* 1aa244: b.eq #0x1aa284 */
  if (ARC_COND(c, 0)) goto L_1aa284;
L_1aa248:;
  /* 1aa248: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1aa24c: ldr w9, [x8, x21, lsl #2] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 2))));
  /* 1aa250: cbz w9, #0x1aa23c */
  if ((ARC_W_R(c, 9)) == 0) goto L_1aa23c;
  /* 1aa254: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aa258: lsl x23, x21, #3 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(3)) & 63)));
  /* 1aa25c: str wzr, [x8, x21, lsl #2] */
  arc_st32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 2)), ARC_W_R(c, 31));
  /* 1aa260: ldr x20, [x9, x23] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 23))));
  /* 1aa264: add x0, x20, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(20)));
  /* 1aa268: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1745516));
  fn2_1ccd9c(c);
  /* 1aa26c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1aa270: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1aa274: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1745528));
  fn2_1b5ce8(c);
  /* 1aa278: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aa27c: str xzr, [x8, x23] */
  arc_st64((ARC_X_R(c, 8) + ARC_X_R(c, 23)), ARC_X_R(c, 31));
  /* 1aa280: b #0x1aa23c */
  goto L_1aa23c;
L_1aa284:;
  /* 1aa284: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aa288: str wzr, [x19, #0x2c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(44)), ARC_W_R(c, 31));
  /* 1aa28c: stp xzr, xzr, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1aa290: cbz x0, #0x1aa2b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1aa2b8;
L_1aa294:;
  /* 1aa294: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1aa298: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1745564));
  fn2_1b5ce8(c);
  /* 1aa29c: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1aa2a0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1aa2a4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1aa2a8: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1aa2ac: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1aa2b0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aa2b4: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_1aa2b8:;
  /* 1aa2b8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1aa2bc: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1aa2c0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1aa2c4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aa2c8: ret  */
  return;
}

void fn2_1ab97c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077607292));
  /* 1ab97c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 1ab980: b.eq #0x1abae4 */
  if (ARC_COND(c, 0)) goto L_1abae4;
  /* 1ab984: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ab988: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 1ab98c: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1ab990: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ab994: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ab998: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1ab99c: ldr w8, [x0, #0x2c] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(44))));
  /* 1ab9a0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1ab9a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ab9a8: adrp x22, #0x36000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1ab9ac: add x22, x22, #0x68c */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1676)));
  /* 1ab9b0: cbz w8, #0x1aba24 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1aba24;
  /* 1ab9b4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1ab9b8: cbz x8, #0x1aba24 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1aba24;
  /* 1ab9bc: ldr w8, [x19, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(40))));
  /* 1ab9c0: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
  /* 1ab9c4: ldr w8, [x22, x8, lsl #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 8)) << 2))));
  /* 1ab9c8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1ab9cc: csinc w24, w8, wzr, hi */
  ARC_W_W(c, 24, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1ab9d0: b #0x1ab9e0 */
  goto L_1ab9e0;
L_1ab9d4:;
  /* 1ab9d4: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* 1ab9d8: cmp x24, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 23));
  /* 1ab9dc: b.eq #0x1aba1c */
  if (ARC_COND(c, 0)) goto L_1aba1c;
L_1ab9e0:;
  /* 1ab9e0: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1ab9e4: ldr w9, [x8, x23, lsl #2] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 2))));
  /* 1ab9e8: cbz w9, #0x1ab9d4 */
  if ((ARC_W_R(c, 9)) == 0) goto L_1ab9d4;
  /* 1ab9ec: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1ab9f0: lsl x25, x23, #3 */
  ARC_X_W(c, 25, ((uint64_t)(ARC_X_R(c, 23)) << ((UINT64_C(3)) & 63)));
  /* 1ab9f4: str wzr, [x8, x23, lsl #2] */
  arc_st32((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 23)) << 2)), ARC_W_R(c, 31));
  /* 1ab9f8: ldr x21, [x9, x25] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 25))));
  /* 1ab9fc: add x0, x21, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(20)));
  /* 1aba00: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1751556));
  fn2_1ccd9c(c);
  /* 1aba04: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1aba08: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1aba0c: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1751568));
  fn2_1b5ce8(c);
  /* 1aba10: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aba14: str xzr, [x8, x25] */
  arc_st64((ARC_X_R(c, 8) + ARC_X_R(c, 25)), ARC_X_R(c, 31));
  /* 1aba18: b #0x1ab9d4 */
  goto L_1ab9d4;
L_1aba1c:;
  /* 1aba1c: str wzr, [x19, #0x2c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(44)), ARC_W_R(c, 31));
  /* 1aba20: stp xzr, xzr, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
L_1aba24:;
  /* 1aba24: ldr w8, [x20, #0x28] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(40))));
  /* 1aba28: ldr w9, [x19, #0x28] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(40))));
  /* 1aba2c: mov w10, wzr */
  ARC_W_W(c, 10, ARC_W_R(c, 31));
  /* 1aba30: ldr w8, [x22, x8, lsl #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 8)) << 2))));
L_1aba34:;
  /* 1aba34: add w1, w9, w10 */
  ARC_W_W(c, 1, (ARC_W_R(c, 9) + ARC_W_R(c, 10)));
  /* 1aba38: ldr w11, [x22, w1, uxtw #2] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 22) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 1)))) << 2))));
  /* 1aba3c: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* 1aba40: b.hs #0x1aba8c */
  if (ARC_COND(c, 2)) goto L_1aba8c;
  /* 1aba44: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* 1aba48: add w11, w9, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 9) + ARC_W_R(c, 10)));
  /* 1aba4c: cmp w11, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(29));
  /* 1aba50: b.ne #0x1aba34 */
  if (ARC_COND(c, 1)) goto L_1aba34;
  /* 1aba54: adrp x0, #0x2e000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1aba58: add x0, x0, #0xefe */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3838)));
  /* 1aba5c: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 1aba60: add x1, x1, #0x166 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(358)));
  /* 1aba64: adrp x3, #0x1e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1aba68: add x3, x3, #0x456 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1110)));
  /* 1aba6c: mov w2, #0x1b7 */
  ARC_W_W(c, 2, UINT64_C(439));
  /* 1aba70: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 1aba74: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1aba78: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 1aba7c: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1751680));
  fn2_1b5598(c);
  /* 1aba80: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1aba84: cbnz x8, #0x1abaa8 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1abaa8;
  /* 1aba88: b #0x1abad0 */
  goto L_1abad0;
L_1aba8c:;
  /* 1aba8c: cbz w10, #0x1abaa0 */
  if ((ARC_W_R(c, 10)) == 0) goto L_1abaa0;
  /* 1aba90: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aba94: cbz x8, #0x1abae8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1abae8;
  /* 1aba98: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1aba9c: bl #0x1abe7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1751712));
  fn2_1abe7c(c);
L_1abaa0:;
  /* 1abaa0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1abaa4: cbz x8, #0x1abad0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1abad0;
L_1abaa8:;
  /* 1abaa8: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 1abaac: cbz x20, #0x1abad0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1abad0;
L_1abab0:;
  /* 1abab0: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1abab4: add x1, x20, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 1abab8: add x2, x20, #0x14 */
  ARC_X_W(c, 2, (ARC_X_R(c, 20) + UINT64_C(20)));
  /* 1ababc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1abac0: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1abac4: bl #0x1abaf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1751752));
  fn2_1abaf8(c);
  /* 1abac8: ldr x20, [x20] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 20)));
  /* 1abacc: cbnz x20, #0x1abab0 */
  if ((ARC_X_R(c, 20)) != 0) goto L_1abab0;
L_1abad0:;
  /* 1abad0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1abad4: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1abad8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1abadc: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1abae0: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
L_1abae4:;
  /* 1abae4: ret  */
  return;
L_1abae8:;
  /* 1abae8: str w1, [x19, #0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(40)), ARC_W_R(c, 1));
  /* 1abaec: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1abaf0: cbnz x8, #0x1abaa8 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1abaa8;
  /* 1abaf4: b #0x1abad0 */
  goto L_1abad0;
}

void fn2_1afc98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077624472));
  /* 1afc98: nop  */
  /* nop: no architectural effect here */
  /* 1afc9c: adr x1, #0x25d970 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2480496)));
  /* 1afca0: nop  */
  /* nop: no architectural effect here */
  /* 1afca4: adr x0, #0x1af450 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1766480)));
  /* 1afca8: nop  */
  /* nop: no architectural effect here */
  /* 1afcac: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1afcb0: str xzr, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 31));
  /* 1afcb4: b #0x24b6f0 */
  fn2_24b6f0(c); return;
}

void fn2_1b2b28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077636392));
  /* 1b2b28: ret  */
  return;
}

void fn2_1b4c64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077644900));
  /* 1b4c64: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b4c68: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 1b4c6c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b4c70: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b4c74: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b4c78: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1b4c7c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 1b4c80: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1b4c84: bl #0x1d4e80 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789064));
  fn2_1d4e80(c);
  /* 1b4c88: ldr x23, [x21, #8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 1b4c8c: cbz x23, #0x1b4cb8 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1b4cb8;
  /* 1b4c90: fmov d0, x23 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 23)));
  /* 1b4c94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1b4c98: cnt v0.8b, v0.8b */
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
  /* 1b4c9c: uaddlv h0, v0.8b */
  { uint64_t _r = (uint64_t)((c)->q[0].u8[0]);
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[1]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[2]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[3]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[4]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[5]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[6]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[7]));
    arc_su_w(c, 0, ((uint64_t)_r & UINT64_C(65535))); }
  /* 1b4ca0: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* 1b4ca4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1b4ca8: b.hi #0x1b4cc0 */
  if (ARC_COND(c, 8)) goto L_1b4cc0;
  /* 1b4cac: sub x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 1b4cb0: and x22, x9, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) & ARC_X_R(c, 20)));
  /* 1b4cb4: b #0x1b4cd4 */
  goto L_1b4cd4;
L_1b4cb8:;
  /* 1b4cb8: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 1b4cbc: b #0x1b4d84 */
  goto L_1b4d84;
L_1b4cc0:;
  /* 1b4cc0: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* 1b4cc4: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 1b4cc8: b.lo #0x1b4cd4 */
  if (ARC_COND(c, 3)) goto L_1b4cd4;
  /* 1b4ccc: udiv x9, x20, x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 23)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 20)) / (uint64_t)(ARC_X_R(c, 23)))));
  /* 1b4cd0: msub x22, x9, x23, x20 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 20)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 23)))));
L_1b4cd4:;
  /* 1b4cd4: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* 1b4cd8: ldr x9, [x9, x22, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 1b4cdc: cbz x9, #0x1b4d68 */
  if ((ARC_X_R(c, 9)) == 0) goto L_1b4d68;
  /* 1b4ce0: ldr x21, [x9] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 9)));
  /* 1b4ce4: cbz x21, #0x1b4d84 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1b4d84;
  /* 1b4ce8: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 1b4cec: b.hs #0x1b4d44 */
  if (ARC_COND(c, 2)) goto L_1b4d44;
  /* 1b4cf0: sub x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 1b4cf4: b #0x1b4d10 */
  goto L_1b4d10;
L_1b4cf8:;
  /* 1b4cf8: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 1b4cfc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b4d00: bl #0x1d5690 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789188));
  fn2_1d5690(c);
  /* 1b4d04: tbnz w0, #0, #0x1b4d84 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1b4d84;
L_1b4d08:;
  /* 1b4d08: ldr x21, [x21] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 21)));
  /* 1b4d0c: cbz x21, #0x1b4d84 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1b4d84;
L_1b4d10:;
  /* 1b4d10: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 1b4d14: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 1b4d18: b.eq #0x1b4cf8 */
  if (ARC_COND(c, 0)) goto L_1b4cf8;
  /* 1b4d1c: and x8, x8, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & ARC_X_R(c, 23)));
  /* 1b4d20: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 1b4d24: b.eq #0x1b4d08 */
  if (ARC_COND(c, 0)) goto L_1b4d08;
  /* 1b4d28: b #0x1b4d68 */
  goto L_1b4d68;
L_1b4d2c:;
  /* 1b4d2c: add x0, x21, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 1b4d30: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b4d34: bl #0x1d5690 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1789240));
  fn2_1d5690(c);
  /* 1b4d38: tbnz w0, #0, #0x1b4d84 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1b4d84;
L_1b4d3c:;
  /* 1b4d3c: ldr x21, [x21] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 21)));
  /* 1b4d40: cbz x21, #0x1b4d84 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1b4d84;
L_1b4d44:;
  /* 1b4d44: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 1b4d48: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 1b4d4c: b.eq #0x1b4d2c */
  if (ARC_COND(c, 0)) goto L_1b4d2c;
  /* 1b4d50: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 1b4d54: b.lo #0x1b4d60 */
  if (ARC_COND(c, 3)) goto L_1b4d60;
  /* 1b4d58: udiv x9, x8, x23 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 23)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 8)) / (uint64_t)(ARC_X_R(c, 23)))));
  /* 1b4d5c: msub x8, x9, x23, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) - ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 23)))));
L_1b4d60:;
  /* 1b4d60: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* 1b4d64: b.eq #0x1b4d3c */
  if (ARC_COND(c, 0)) goto L_1b4d3c;
L_1b4d68:;
  /* 1b4d68: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 1b4d6c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b4d70: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b4d74: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b4d78: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b4d7c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b4d80: ret  */
  return;
L_1b4d84:;
  /* 1b4d84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1b4d88: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b4d8c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b4d90: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b4d94: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b4d98: ret  */
  return;
}

void fn2_1b6034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077649972));
  /* 1b6034: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1b6038: ldr x4, [x8, #0x20] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 1b603c: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1b79ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077656556));
  /* 1b79ec: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1b79f0: ldr x5, [x8, #0x10] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1b79f4: br x5 */
  arc_dispatch(c, ARC_X_R(c, 5)); return;
}

void fn2_1b8578(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077659512));
  /* 1b8578: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b857c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b8580: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b8584: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b8588: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b858c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8590: ldr x8, [x8, #0x820] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2080))));
  /* 1b8594: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1b8598: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b859c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1803680));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b85a0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b85a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b85a8: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1803692));
  fn2_1d0708(c);
  /* 1b85ac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b85b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1803700));
  fn2_1ccd9c(c);
  /* 1b85b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b85b8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b85bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b85c0: ret  */
  return;
}

void fn2_1b8e18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077661720));
  /* 1b8e18: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1b8e1c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b8e20: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b8e24: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1b8e28: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1b8e2c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b8e30: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1b8e34: ldr x8, [x8, #0x808] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2056))));
  /* 1b8e38: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1b8e3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b8e40: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 1b8e44: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b8e48: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1805900));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b8e4c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b8e50: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 1b8e54: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b8e58: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1805916));
  fn2_1cf868(c);
  /* 1b8e5c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b8e60: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1805924));
  fn2_1ccd9c(c);
  /* 1b8e64: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b8e68: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b8e6c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1b8e70: ret  */
  return;
}

void fn2_1b9b14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077665044));
  /* 1b9b14: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b9b18: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b9b1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b9b20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b9b24: bl #0x1bb9b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1809192));
  fn2_1bb9b0(c);
  /* 1b9b28: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 1b9b2c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b9b30: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b9b34: ret  */
  return;
}

void fn2_1baabc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077669052));
  /* 1baabc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1baac0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1baac4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1baac8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1baacc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1baad0: cbz x1, #0x1baaf4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_1baaf4;
  /* 1baad4: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* 1baad8: cbz w8, #0x1baaf4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1baaf4;
  /* 1baadc: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
L_1baae0:;
  /* 1baae0: ldr w8, [x1, x20, lsl #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + ((uint64_t)(ARC_X_R(c, 20)) << 2))));
  /* 1baae4: add x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 1baae8: cbnz w8, #0x1baae0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_1baae0;
  /* 1baaec: cmp x20, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(1));
  /* 1baaf0: b.ne #0x1bab38 */
  if (ARC_COND(c, 1)) goto L_1bab38;
L_1baaf4:;
  /* 1baaf4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1baaf8: cbz x8, #0x1bab74 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1bab74;
  /* 1baafc: ldur x9, [x8, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1bab00: cbz x9, #0x1bab74 */
  if ((ARC_X_R(c, 9)) == 0) goto L_1bab74;
  /* 1bab04: sub x1, x8, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1bab08: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1bab0c: bl #0x24b680 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1813264));
  fn2_24b680(c);
  /* 1bab10: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 1bab14: b.ne #0x1bab70 */
  if (ARC_COND(c, 1)) goto L_1bab70;
  /* 1bab18: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1bab1c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1bab20: sub x0, x8, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1bab24: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 1bab28: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1bab2c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1bab30: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bab34: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_1bab38:;
  /* 1bab38: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1bab3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1bab40: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1bab44: bl #0x1ba4c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1813320));
  fn2_1ba4c8(c);
  /* 1bab48: cbnz w0, #0x1bab84 */
  if ((ARC_W_R(c, 0)) != 0) goto L_1bab84;
  /* 1bab4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1bab50: bl #0x1bba98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1813332));
  fn2_1bba98(c);
  /* 1bab54: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 1bab58: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1bab5c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1bab60: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1bab64: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1bab68: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bab6c: b #0x24b7a0 */
  fn2_24b7a0(c); return;
L_1bab70:;
  /* 1bab70: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
L_1bab74:;
  /* 1bab74: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1bab78: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1bab7c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bab80: ret  */
  return;
L_1bab84:;
  /* 1bab84: adrp x0, #0x1e000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1bab88: add x0, x0, #0x6be */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1726)));
  /* 1bab8c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1bab90: add x1, x1, #0x6c8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1736)));
  /* 1bab94: adrp x3, #0x28000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1bab98: add x3, x3, #0xa1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(161)));
  /* 1bab9c: adrp x4, #0x1a000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1baba0: add x4, x4, #0x4cf */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(1231)));
  /* 1baba4: mov w2, #0x92 */
  ARC_W_W(c, 2, UINT64_C(146));
  /* 1baba8: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1babac: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 1babb0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1babb4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1babb8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1babbc: b #0x1b5598 */
  fn2_1b5598(c); return;
}

void fn2_1bbb80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077673344));
  /* 1bbb80: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1bbb84: cbz x8, #0x1bbbb4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1bbbb4;
  /* 1bbb88: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bbb8c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1bbb90: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1bbb94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bbb98: sub x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1bbb9c: ldar x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbba0: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 1bbba4: b.hs #0x1bbbbc */
  if (ARC_COND(c, 2)) goto L_1bbbbc;
L_1bbba8:;
  /* 1bbba8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1bbbac: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1bbbb0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
L_1bbbb4:;
  /* 1bbbb4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1bbbb8: ret  */
  return;
L_1bbbbc:;
  /* 1bbbbc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1bbbc0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1bbbc4: ldur x22, [x8, #-8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1bbbc8: lsl x19, x22, #2 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(2)) & 63)));
  /* 1bbbcc: cbz x19, #0x1bbbf4 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1bbbf4;
  /* 1bbbd0: sub x8, x19, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) - UINT64_C(1)));
  /* 1bbbd4: orr x8, x8, x8, lsr #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* 1bbbd8: orr x8, x8, x8, lsr #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 2)));
  /* 1bbbdc: orr x8, x8, x8, lsr #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 4)));
  /* 1bbbe0: orr x8, x8, x8, lsr #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 8)));
  /* 1bbbe4: orr x8, x8, x8, lsr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 16)));
  /* 1bbbe8: orr x8, x8, x8, lsr #32 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 32)));
  /* 1bbbec: add x0, x8, #0x11 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(17)));
  /* 1bbbf0: b #0x1bbbf8 */
  goto L_1bbbf8;
L_1bbbf4:;
  /* 1bbbf4: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
L_1bbbf8:;
  /* 1bbbf8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1bbbfc: bl #0x1b5b60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1817600));
  fn2_1b5b60(c);
  /* 1bbc00: cbz x0, #0x1bbc38 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1bbc38;
  /* 1bbc04: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1bbc08: add x21, x0, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 1bbc0c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 1bbc10: stlr x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1bbc14: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 1bbc18: str x22, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 22));
  /* 1bbc1c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1bbc20: bl #0x24b7a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1817636));
  fn2_24b7a0(c);
  /* 1bbc24: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1bbc28: bl #0x1bb870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1817644));
  fn2_1bb870(c);
  /* 1bbc2c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1bbc30: str x21, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* 1bbc34: b #0x1bbba8 */
  goto L_1bbba8;
L_1bbc38:;
  /* 1bbc38: adrp x0, #0x1b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1bbc3c: add x0, x0, #0x4ba */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1210)));
  /* 1bbc40: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1bbc44: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1bbc48: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1bbc4c: add x3, x3, #0xca8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3240)));
  /* 1bbc50: mov w2, #0x140 */
  ARC_W_W(c, 2, UINT64_C(320));
  /* 1bbc54: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1bbc58: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1bbc5c: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1817696));
  fn2_1b54b0(c);
  /* 1bbc60: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* 1bbc64: b #0x1bbba8 */
  goto L_1bbba8;
}

void fn2_1bbe94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077674132));
  /* 1bbe94: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bbe98: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1bbe9c: ldr x8, [x8, #0x918] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2328))));
  /* 1bbea0: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbea4: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc384(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077675396));
  /* 1bc384: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc388: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bc38c: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1bc390: ldr x2, [x8, #0xab8] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(2744))));
  /* 1bc394: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc698(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077676184));
  /* 1bc698: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1bc69c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bc6a0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1bc6a4: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc6a8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bc6ac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1bc6b0: ldr x8, [x8, #0xba8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2984))));
  /* 1bc6b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1820344));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bc6b8: ldr w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(8))));
  /* 1bc6bc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bc6c0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1bc6c4: ret  */
  return;
}

void fn2_1bcca0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077677728));
  /* 1bcca0: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bcca4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1bcca8: b #0x1d7868 */
  fn2_1d7868(c); return;
}

void fn2_1bd728(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077680424));
  /* 1bd728: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1bd72c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bd730: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 1bd734: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1bd738: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1bd73c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bd740: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1bd744: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1bd748: ldr x8, [x8, #0x6b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1712))));
  /* 1bd74c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1bd750: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1bd754: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bd758: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bd75c: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* 1bd760: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1824612));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bd764: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bd768: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1bd76c: add x4, x29, #0x1c */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 1bd770: ldr x8, [x8, #0x6d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1744))));
  /* 1bd774: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 1bd778: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1bd77c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1bd780: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bd784: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1824648));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bd788: cbz x19, #0x1bd79c */
  if ((ARC_X_R(c, 19)) == 0) goto L_1bd79c;
  /* 1bd78c: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* 1bd790: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1bd794: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 1bd798: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1bd79c:;
  /* 1bd79c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bd7a0: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 1bd7a4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1bd7a8: ldr x8, [x8, #0xba0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2976))));
  /* 1bd7ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1824688));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bd7b0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bd7b4: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* 1bd7b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1bd7bc: ldr x9, [x9, #0x6b8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(1720))));
  /* 1bd7c0: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1bd7c4: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* 1bd7c8: cset w19, ne */
  ARC_W_W(c, 19, (ARC_COND(c, 1) ? 1 : 0));
  /* 1bd7cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1824720));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bd7d0: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 1bd7d4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1bd7d8: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1bd7dc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bd7e0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1bd7e4: ret  */
  return;
}

void fn2_1be554(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077684052));
  /* 1be554: fsub s7, s2, s1 */
  arc_s_w(c, 7, (float)(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 1))));
  /* 1be558: fmov v16.2d, #0.50000000 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = 0.5;
    _t.f64[1] = 0.5;
    (c)->q[16] = _t; }
  /* 1be55c: mov w9, #0x3f800000 */
  ARC_W_W(c, 9, UINT64_C(1065353216));
  /* 1be560: fmov d17, #-1.00000000 */
  arc_d_w(c, 17, (double)(-1.0));
  /* 1be564: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 1be568: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 1be56c: stur xzr, [x8, #0xc] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(12)), ARC_X_R(c, 31));
  /* 1be570: stur xzr, [x8, #4] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(4)), ARC_X_R(c, 31));
  /* 1be574: mov v1.s[1], v7.s[0] */
  (c)->q[1].u32[1] = ((c)->q[7].u32[0]);
  /* 1be578: str w9, [x8, #0x14] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(20)), ARC_W_R(c, 9));
  /* 1be57c: stp xzr, xzr, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1be580: str w9, [x8, #0x28] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(40)), ARC_W_R(c, 9));
  /* 1be584: stur xzr, [x8, #0x34] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(52)), ARC_X_R(c, 31));
  /* 1be588: fcvtl v7.2d, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = (double)(c)->q[1].f32[0];
    _t.f64[1] = (double)(c)->q[1].f32[1];
    (c)->q[7] = _t; }
  /* 1be58c: fcvt d1, s3 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 3)));
  /* 1be590: stur xzr, [x8, #0x2c] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(44)), ARC_X_R(c, 31));
  /* 1be594: str w9, [x8, #0x3c] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(60)), ARC_W_R(c, 9));
  /* 1be598: fmul v3.2d, v7.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = arc_fmul64((c)->q[7].f64[0], (c)->q[16].f64[0]);
    _t.f64[1] = arc_fmul64((c)->q[7].f64[1], (c)->q[16].f64[1]);
    (c)->q[3] = _t; }
  /* 1be59c: dup v7.2d, v1.d[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[1].u64[0]);
    _t.u64[1] = ((c)->q[1].u64[0]);
    (c)->q[7] = _t; }
  /* 1be5a0: fcvt d16, s4 */
  arc_d_w(c, 16, (double)(ARC_S_R(c, 4)));
  /* 1be5a4: fdiv v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = arc_fdiv64((c)->q[3].f64[0], (c)->q[7].f64[0]);
    _t.f64[1] = arc_fdiv64((c)->q[3].f64[1], (c)->q[7].f64[1]);
    (c)->q[3] = _t; }
  /* 1be5a8: fadd d16, d16, d17 */
  arc_d_w(c, 16, (double)(arc_fadd64(ARC_D_R(c, 16), ARC_D_R(c, 17))));
  /* 1be5ac: fcvtn v3.2s, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = (float)(c)->q[3].f64[0];
    _t.f32[1] = (float)(c)->q[3].f64[1];
    (c)->q[3] = _t; }
  /* 1be5b0: faddp s7, v3.2s */
  arc_s_w(c, 7, (float)(arc_fadd32((c)->q[3].f32[0], (c)->q[3].f32[1])));
  /* 1be5b4: mov s17, v3.s[1] */
  arc_su_w(c, 17, (c)->q[3].u32[1]);
  /* 1be5b8: fcvt d7, s7 */
  arc_d_w(c, 7, (double)(ARC_S_R(c, 7)));
  /* 1be5bc: fmul d7, d16, d7 */
  arc_d_w(c, 7, (double)(arc_fmul64(ARC_D_R(c, 16), ARC_D_R(c, 7))));
  /* 1be5c0: fmov d16, #0.50000000 */
  arc_d_w(c, 16, (double)(0.5));
  /* 1be5c4: fmul d7, d7, d16 */
  arc_d_w(c, 7, (double)(arc_fmul64(ARC_D_R(c, 7), ARC_D_R(c, 16))));
  /* 1be5c8: fcvt s7, d7 */
  arc_s_w(c, 7, (float)(ARC_D_R(c, 7)));
  /* 1be5cc: fadd s16, s3, s7 */
  arc_s_w(c, 16, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 7))));
  /* 1be5d0: fadd s3, s17, s7 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 17), ARC_S_R(c, 7))));
  /* 1be5d4: b.eq #0x1be5e8 */
  if (ARC_COND(c, 0)) goto L_1be5e8;
  /* 1be5d8: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 1be5dc: b.ne #0x1be62c */
  if (ARC_COND(c, 1)) goto L_1be62c;
  /* 1be5e0: fmov s7, s16 */
  arc_su_w(c, 7, (uint32_t)(ARC_SU_R(c, 16)));
  /* 1be5e4: b #0x1be5f0 */
  goto L_1be5f0;
L_1be5e8:;
  /* 1be5e8: fmov s7, s3 */
  arc_su_w(c, 7, (uint32_t)(ARC_SU_R(c, 3)));
  /* 1be5ec: fmov s3, s16 */
  arc_su_w(c, 3, (uint32_t)(ARC_SU_R(c, 16)));
L_1be5f0:;
  /* 1be5f0: fcvt d2, s2 */
  arc_d_w(c, 2, (double)(ARC_S_R(c, 2)));
  /* 1be5f4: fmov d16, #0.25000000 */
  arc_d_w(c, 16, (double)(0.25));
  /* 1be5f8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1be5fc: fmul d2, d2, d16 */
  arc_d_w(c, 2, (double)(arc_fmul64(ARC_D_R(c, 2), ARC_D_R(c, 16))));
  /* 1be600: fdiv d1, d2, d1 */
  arc_d_w(c, 1, (double)(arc_fdiv64(ARC_D_R(c, 2), ARC_D_R(c, 1))));
  /* 1be604: fcvt s1, d1 */
  arc_s_w(c, 1, (float)(ARC_D_R(c, 1)));
  /* 1be608: fmul s1, s1, s4 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 4))));
  /* 1be60c: fdiv s4, s1, s0 */
  arc_s_w(c, 4, (float)(arc_fdiv32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1be610: fnmul s0, s7, s5 */
  arc_s_w(c, 0, (float)((-arc_fmul32(ARC_S_R(c, 7), ARC_S_R(c, 5)))));
  /* 1be614: fmul s1, s3, s5 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 5))));
  /* 1be618: fnmul s2, s4, s5 */
  arc_s_w(c, 2, (float)((-arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 5)))));
  /* 1be61c: fmul s3, s4, s5 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 5))));
  /* 1be620: fmov s4, s5 */
  arc_su_w(c, 4, (uint32_t)(ARC_SU_R(c, 5)));
  /* 1be624: fmov s5, s6 */
  arc_su_w(c, 5, (uint32_t)(ARC_SU_R(c, 6)));
  /* 1be628: b #0x1be938 */
  fn2_1be938(c); return;
L_1be62c:;
  /* 1be62c: ret  */
  return;
}

void fn2_1c0f00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077694720));
  /* 1c0f00: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1c0f04: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* 1c0f08: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c0f0c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1c0f10: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1c0f14: ldr d0, [x0, #0x20] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c0f18: ldp s2, s4, [x0, #0xc] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(12));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 4, arc_ld32((_pa + 4)));
  }
  /* 1c0f1c: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* 1c0f20: add x20, x0, #0x3c */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(60)));
  /* 1c0f24: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1c0f28: ld1 {v0.s}[1], [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    (c)->q[0].u32[1] = arc_ld32(_pa + 0);
  }
  /* 1c0f2c: ldr s3, [x0, #0x1c] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 0) + INT64_C(28))));
  /* 1c0f30: fsub s1, s2, s1 */
  arc_s_w(c, 1, (float)(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 1))));
  /* 1c0f34: ldur d2, [x0, #0x2c] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 0) + INT64_C(44))));
  /* 1c0f38: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1c0f3c: fsub s3, s3, s4 */
  arc_s_w(c, 3, (float)(arc_fsub32(ARC_S_R(c, 3), ARC_S_R(c, 4))));
  /* 1c0f40: fsub v0.2s, v2.2s, v0.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[2].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[2].f32[1], (c)->q[0].f32[1]);
    (c)->q[0] = _t; }
  /* 1c0f44: stp s1, s3, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st32(_pa, (c)->q[1].u32[0]);
    arc_st32((_pa + 4), (c)->q[3].u32[0]);
  }
  /* 1c0f48: stp d0, d10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* 1c0f4c: bl #0x1c16b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1838928));
  fn2_1c16b0(c);
  /* 1c0f50: ldr s0, [x19, #0x20] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* 1c0f54: fcmp s0, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(0.0));
  /* 1c0f58: b.ne #0x1c0fac */
  if (ARC_COND(c, 1)) goto L_1c0fac;
  /* 1c0f5c: ldr s1, [x19, #0x24] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 19) + INT64_C(36))));
  /* 1c0f60: fcmp s1, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(0.0));
  /* 1c0f64: b.ne #0x1c0fac */
  if (ARC_COND(c, 1)) goto L_1c0fac;
  /* 1c0f68: ldr s0, [sp, #0x10] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(16))));
  /* 1c0f6c: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c0f70: bl #0x24b8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1838964));
  fn2_24b8e0(c);
  /* 1c0f74: mov w8, #0x43340000 */
  ARC_W_W(c, 8, UINT64_C(1127481344));
  /* 1c0f78: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c0f7c: mov w8, #0xfdb */
  ARC_W_W(c, 8, UINT64_C(4059));
  /* 1c0f80: movk w8, #0x4049, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1078525952)));
  /* 1c0f84: fmul s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c0f88: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c0f8c: fdiv s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c0f90: fadd s0, s0, s0 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 0))));
  /* 1c0f94: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c0f98: ldr d10, [sp, #0x20] */
  arc_du_w(c, 10, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1c0f9c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c0fa0: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* 1c0fa4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1c0fa8: ret  */
  return;
L_1c0fac:;
  /* 1c0fac: ldp s2, s4, [x19, #0xc] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(12));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 4, arc_ld32((_pa + 4)));
  }
  /* 1c0fb0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1c0fb4: ld1 {v0.s}[1], [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    (c)->q[0].u32[1] = arc_ld32(_pa + 0);
  }
  /* 1c0fb8: ldr s1, [x19] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 19)));
  /* 1c0fbc: ldr s3, [x19, #0x1c] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 19) + INT64_C(28))));
  /* 1c0fc0: ldur d5, [x19, #0x2c] */
  arc_du_w(c, 5, arc_ld64((ARC_X_R(c, 19) + INT64_C(44))));
  /* 1c0fc4: fadd s1, s2, s1 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 2), ARC_S_R(c, 1))));
  /* 1c0fc8: fadd s2, s3, s4 */
  arc_s_w(c, 2, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 4))));
  /* 1c0fcc: fadd v0.2s, v0.2s, v5.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[0].f32[0], (c)->q[5].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[0].f32[1], (c)->q[5].f32[1]);
    (c)->q[0] = _t; }
  /* 1c0fd0: stp s1, s2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st32(_pa, (c)->q[1].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* 1c0fd4: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 1c0fd8: bl #0x1c16b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839068));
  fn2_1c16b0(c);
  /* 1c0fdc: ldr s0, [sp] */
  arc_su_w(c, 0, arc_ld32((c)->sp));
  /* 1c0fe0: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c0fe4: bl #0x24b8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839080));
  fn2_24b8e0(c);
  /* 1c0fe8: mov w8, #0x43340000 */
  ARC_W_W(c, 8, UINT64_C(1127481344));
  /* 1c0fec: fmov s8, w8 */
  arc_su_w(c, 8, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c0ff0: mov w8, #0xfdb */
  ARC_W_W(c, 8, UINT64_C(4059));
  /* 1c0ff4: movk w8, #0x4049, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(1078525952)));
  /* 1c0ff8: fmov s9, w8 */
  arc_su_w(c, 9, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c0ffc: fmul s0, s0, s8 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 8))));
  /* 1c1000: fdiv s10, s0, s9 */
  arc_s_w(c, 10, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 9))));
  /* 1c1004: ldr s0, [sp, #0x10] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(16))));
  /* 1c1008: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c100c: bl #0x24b8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839120));
  fn2_24b8e0(c);
  /* 1c1010: fmul s0, s0, s8 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 8))));
  /* 1c1014: fdiv s0, s0, s9 */
  arc_s_w(c, 0, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 9))));
  /* 1c1018: fadd s0, s10, s0 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 10), ARC_S_R(c, 0))));
  /* 1c101c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c1020: ldr d10, [sp, #0x20] */
  arc_du_w(c, 10, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1c1024: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c1028: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* 1c102c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1c1030: ret  */
  return;
}

void fn2_1c2500(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077700352));
  /* 1c2500: ldp s3, s0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 3, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* 1c2504: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c2508: ldp s4, s1, [x0, #0xc] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(12));
    arc_su_w(c, 4, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 1c250c: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c2510: ldp s5, s2, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_su_w(c, 5, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* 1c2514: fmul s6, s3, s0 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 0))));
  /* 1c2518: fmul s7, s4, s1 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 1))));
  /* 1c251c: fadd s6, s6, s7 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 6), ARC_S_R(c, 7))));
  /* 1c2520: fmul s7, s5, s2 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 2))));
  /* 1c2524: fadd s6, s6, s7 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 6), ARC_S_R(c, 7))));
  /* 1c2528: fmov s7, w8 */
  arc_su_w(c, 7, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c252c: fabs s6, s6 */
  arc_s_w(c, 6, (float)(fabsf(ARC_S_R(c, 6))));
  /* 1c2530: fcmp s6, s7 */
  arc_fcmp(c, (double)(ARC_S_R(c, 6)), (double)(ARC_S_R(c, 7)));
  /* 1c2534: b.pl #0x1c2590 */
  if (ARC_COND(c, 5)) goto L_1c2590;
  /* 1c2538: ldr s6, [x0, #8] */
  arc_su_w(c, 6, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c253c: ldr s7, [x0, #0x14] */
  arc_su_w(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(20))));
  /* 1c2540: fmul s16, s3, s6 */
  arc_s_w(c, 16, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 6))));
  /* 1c2544: fmul s4, s4, s7 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 7))));
  /* 1c2548: ldr s3, [x0, #0x20] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c254c: fmul s5, s5, s3 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 3))));
  /* 1c2550: fadd s4, s16, s4 */
  arc_s_w(c, 4, (float)(arc_fadd32(ARC_S_R(c, 16), ARC_S_R(c, 4))));
  /* 1c2554: fadd s4, s4, s5 */
  arc_s_w(c, 4, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 5))));
  /* 1c2558: fmov s5, w8 */
  arc_su_w(c, 5, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c255c: fabs s4, s4 */
  arc_s_w(c, 4, (float)(fabsf(ARC_S_R(c, 4))));
  /* 1c2560: fcmp s4, s5 */
  arc_fcmp(c, (double)(ARC_S_R(c, 4)), (double)(ARC_S_R(c, 5)));
  /* 1c2564: b.pl #0x1c2590 */
  if (ARC_COND(c, 5)) goto L_1c2590;
  /* 1c2568: fmul s0, s0, s6 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 6))));
  /* 1c256c: fmul s1, s1, s7 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 7))));
  /* 1c2570: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c2574: fmul s1, s2, s3 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c2578: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c257c: fmov s1, w8 */
  arc_su_w(c, 1, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c2580: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c2584: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c2588: cset w0, mi */
  ARC_W_W(c, 0, (ARC_COND(c, 4) ? 1 : 0));
  /* 1c258c: ret  */
  return;
L_1c2590:;
  /* 1c2590: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c2594: ret  */
  return;
}

void fn2_1c4b28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077710120));
  /* 1c4b28: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1c4b2c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c4b30: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1c4b34: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1c4b38: ldp q0, q1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1c4b3c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1c4b40: ldr w8, [x0, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c4b44: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1c4b48: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1c4b4c: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1c4b50: str w8, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 8));
  /* 1c4b54: bl #0x1c2074 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1854296));
  fn2_1c2074(c);
  /* 1c4b58: ldp q2, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1c4b5c: ldr s1, [sp, #0x20] */
  arc_su_w(c, 1, arc_ld32(((c)->sp + INT64_C(32))));
  /* 1c4b60: mov s3, v0.s[3] */
  arc_su_w(c, 3, (c)->q[0].u32[3]);
  /* 1c4b64: fmul s4, s1, s0 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1c4b68: fmul s6, s1, v2.s[1] */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 1), (c)->q[2].f32[1])));
  /* 1c4b6c: fmul s5, s3, v0.s[1] */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 3), (c)->q[0].f32[1])));
  /* 1c4b70: fmul s3, s3, v2.s[2] */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), (c)->q[2].f32[2])));
  /* 1c4b74: fsub s4, s4, s5 */
  arc_s_w(c, 4, (float)(arc_fsub32(ARC_S_R(c, 4), ARC_S_R(c, 5))));
  /* 1c4b78: mov v5.16b, v0.16b */
  (c)->q[5] = (c)->q[0];
  /* 1c4b7c: fsub s3, s6, s3 */
  arc_s_w(c, 3, (float)(arc_fsub32(ARC_S_R(c, 6), ARC_S_R(c, 3))));
  /* 1c4b80: ext v6.16b, v2.16b, v2.16b, #8 */
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
  /* 1c4b84: mov v5.s[0], v4.s[0] */
  (c)->q[5].u32[0] = ((c)->q[4].u32[0]);
  /* 1c4b88: mov v4.16b, v0.16b */
  (c)->q[4] = (c)->q[0];
  /* 1c4b8c: mov v4.s[1], v3.s[0] */
  (c)->q[4].u32[1] = ((c)->q[3].u32[0]);
  /* 1c4b90: fmul v5.2s, v2.2s, v5.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[2].f32[0], (c)->q[5].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[2].f32[1], (c)->q[5].f32[1]);
    (c)->q[5] = _t; }
  /* 1c4b94: fmul v4.2s, v6.2s, v4.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[6].f32[0], (c)->q[4].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[6].f32[1], (c)->q[4].f32[1]);
    (c)->q[4] = _t; }
  /* 1c4b98: rev64 v3.2s, v5.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[1];
    _t.u32[1] = (c)->q[5].u32[0];
    (c)->q[3] = _t; }
  /* 1c4b9c: fsub v3.2s, v3.2s, v4.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[3].f32[0], (c)->q[4].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[3].f32[1], (c)->q[4].f32[1]);
    (c)->q[3] = _t; }
  /* 1c4ba0: fmul s4, s3, v0.s[2] */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 3), (c)->q[0].f32[2])));
  /* 1c4ba4: mov s3, v3.s[1] */
  arc_su_w(c, 3, (c)->q[3].u32[1]);
  /* 1c4ba8: fadd s3, s4, s3 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 3))));
  /* 1c4bac: fcmp s3, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 3)), (double)(0.0));
  /* 1c4bb0: b.pl #0x1c4bc8 */
  if (ARC_COND(c, 5)) goto L_1c4bc8;
  /* 1c4bb4: fneg v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = -((c)->q[2].f32[0]);
    _t.f32[1] = -((c)->q[2].f32[1]);
    _t.f32[2] = -((c)->q[2].f32[2]);
    _t.f32[3] = -((c)->q[2].f32[3]);
    (c)->q[2] = _t; }
  /* 1c4bb8: fneg v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = -((c)->q[0].f32[0]);
    _t.f32[1] = -((c)->q[0].f32[1]);
    _t.f32[2] = -((c)->q[0].f32[2]);
    _t.f32[3] = -((c)->q[0].f32[3]);
    (c)->q[0] = _t; }
  /* 1c4bbc: fneg s1, s1 */
  arc_s_w(c, 1, (float)((-(ARC_S_R(c, 1)))));
  /* 1c4bc0: stp q2, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 1c4bc4: str s1, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), (c)->q[1].u32[0]);
L_1c4bc8:;
  /* 1c4bc8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1c4bcc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1c4bd0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 1c4bd4: bl #0x1c4be8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1854424));
  fn2_1c4be8(c);
  /* 1c4bd8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c4bdc: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c4be0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1c4be4: ret  */
  return;
}

void fn2_1c6a34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077718068));
  /* 1c6a34: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c6a38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1c6a3c: ldr s0, [x0, #0xc] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1c6a40: bl #0x24b8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1862212));
  fn2_24b8e0(c);
  /* 1c6a44: fadd s0, s0, s0 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 0))));
  /* 1c6a48: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c6a4c: ret  */
  return;
}

void fn2_1c97d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077729744));
  /* 1c97d0: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* 1c97d4: ldr s1, [x1] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 1)));
  /* 1c97d8: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c97dc: b.eq #0x1c9808 */
  if (ARC_COND(c, 0)) goto L_1c9808;
  /* 1c97e0: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c97e4: fabs s2, s0 */
  arc_s_w(c, 2, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c97e8: fabd s0, s0, s1 */
  arc_s_w(c, 0, (float)(fabsf(arc_fsub32(ARC_S_R(c, 0), ARC_S_R(c, 1)))));
  /* 1c97ec: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c97f0: fmov s3, w8 */
  arc_su_w(c, 3, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c97f4: fmul s2, s2, s3 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c97f8: fcmp s2, s3 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 3)));
  /* 1c97fc: fcsel s1, s3, s2, mi */
  arc_s_w(c, 1, (float)((ARC_COND(c, 4) ? ARC_S_R(c, 3) : ARC_S_R(c, 2))));
  /* 1c9800: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c9804: b.pl #0x1c9890 */
  if (ARC_COND(c, 5)) goto L_1c9890;
L_1c9808:;
  /* 1c9808: ldr s0, [x0, #4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1c980c: ldr s1, [x1, #4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1c9810: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c9814: b.eq #0x1c9840 */
  if (ARC_COND(c, 0)) goto L_1c9840;
  /* 1c9818: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c981c: fabs s2, s0 */
  arc_s_w(c, 2, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c9820: fabd s0, s0, s1 */
  arc_s_w(c, 0, (float)(fabsf(arc_fsub32(ARC_S_R(c, 0), ARC_S_R(c, 1)))));
  /* 1c9824: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c9828: fmov s3, w8 */
  arc_su_w(c, 3, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c982c: fmul s2, s2, s3 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c9830: fcmp s2, s3 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 3)));
  /* 1c9834: fcsel s1, s3, s2, mi */
  arc_s_w(c, 1, (float)((ARC_COND(c, 4) ? ARC_S_R(c, 3) : ARC_S_R(c, 2))));
  /* 1c9838: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c983c: b.pl #0x1c9890 */
  if (ARC_COND(c, 5)) goto L_1c9890;
L_1c9840:;
  /* 1c9840: ldr s0, [x0, #8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c9844: ldr s1, [x1, #8] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1c9848: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c984c: b.eq #0x1c9878 */
  if (ARC_COND(c, 0)) goto L_1c9878;
  /* 1c9850: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c9854: fabs s2, s0 */
  arc_s_w(c, 2, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c9858: fabd s0, s0, s1 */
  arc_s_w(c, 0, (float)(fabsf(arc_fsub32(ARC_S_R(c, 0), ARC_S_R(c, 1)))));
  /* 1c985c: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c9860: fmov s3, w8 */
  arc_su_w(c, 3, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c9864: fmul s2, s2, s3 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c9868: fcmp s2, s3 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 3)));
  /* 1c986c: fcsel s1, s3, s2, mi */
  arc_s_w(c, 1, (float)((ARC_COND(c, 4) ? ARC_S_R(c, 3) : ARC_S_R(c, 2))));
  /* 1c9870: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c9874: b.pl #0x1c9890 */
  if (ARC_COND(c, 5)) goto L_1c9890;
L_1c9878:;
  /* 1c9878: ldr s0, [x0, #0xc] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1c987c: ldr s1, [x1, #0xc] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1c9880: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c9884: b.ne #0x1c9898 */
  if (ARC_COND(c, 1)) goto L_1c9898;
  /* 1c9888: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1c988c: ret  */
  return;
L_1c9890:;
  /* 1c9890: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c9894: ret  */
  return;
L_1c9898:;
  /* 1c9898: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c989c: fabs s2, s0 */
  arc_s_w(c, 2, (float)(fabsf(ARC_S_R(c, 0))));
  /* 1c98a0: fabd s0, s0, s1 */
  arc_s_w(c, 0, (float)(fabsf(arc_fsub32(ARC_S_R(c, 0), ARC_S_R(c, 1)))));
  /* 1c98a4: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c98a8: fmov s3, w8 */
  arc_su_w(c, 3, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c98ac: fmul s2, s2, s3 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c98b0: fcmp s2, s3 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 3)));
  /* 1c98b4: fcsel s1, s3, s2, mi */
  arc_s_w(c, 1, (float)((ARC_COND(c, 4) ? ARC_S_R(c, 3) : ARC_S_R(c, 2))));
  /* 1c98b8: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* 1c98bc: cset w0, mi */
  ARC_W_W(c, 0, (ARC_COND(c, 4) ? 1 : 0));
  /* 1c98c0: ret  */
  return;
}

void fn2_1ccc74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077743220));
  /* 1ccc74: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1ccc78: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1ccc7c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ccc80: ldr x2, [x8, #0xe40] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 1ccc84: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1cd4d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077745368));
  /* 1cd4d8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1cd4dc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cd4e0: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1cd4e4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1cd4e8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cd4ec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cd4f0: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* 1cd4f4: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cd4f8: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cd4fc: ldr x23, [x8, #0xf8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + INT64_C(248))));
  /* 1cd500: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cd504: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1cd508: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1cd50c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1cd510: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cd514: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1cd518: str xzr, [x22] */
  arc_st64(ARC_X_R(c, 22), ARC_X_R(c, 31));
  /* 1cd51c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1889568));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cd520: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1cd524: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cd528: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1cd52c: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1cd530: stp x20, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cd534: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1889592));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1cd538: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cd53c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1cd540: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1cd544: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cd548: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1cd54c: ret  */
  return;
}

void fn2_1ce200(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077748736));
  /* 1ce200: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1ce204: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ce208: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ce20c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ce210: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1ce214: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1ce218: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1ce21c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ce220: ldr x0, [x8, #0x1f8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(504))));
  /* 1ce224: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1ce228: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ce22c: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1ce230: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1ce234: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ce238: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1892924));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ce23c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ce240: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ce244: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ce248: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1ce24c: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1ce250: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ce254: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ce258: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1ce25c: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1cec3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077751356));
  /* 1cec3c: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1cec40: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cec44: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cec48: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1cec4c: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1cec50: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cec54: ldr x8, [x8, #0x138] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(312))));
  /* 1cec58: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1cec5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1895520));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cec60: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1cec64: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1cec68: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1cec6c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cec70: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1cec74: ret  */
  return;
}

void fn2_1cf6d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077754068));
  /* 1cf6d4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cf6d8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1cf6dc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cf6e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1cf6e4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1cf6e8: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cf6ec: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cf6f0: ldr x21, [x8, #0x408] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(1032))));
  /* 1cf6f4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cf6f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1cf6fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cf700: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cf704: str d0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), (c)->q[0].u64[0]);
  /* 1cf708: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1cf70c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1898256));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cf710: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1cf714: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1cf718: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1cf71c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1898272));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1cf720: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cf724: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1cf728: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cf72c: ret  */
  return;
}

void fn2_1d0178(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077756792));
  /* 1d0178: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d017c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d0180: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d0184: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d0188: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d018c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1d0190: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1d0194: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d0198: ldr x0, [x8, #0x520] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1312))));
  /* 1d019c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d01a0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d01a4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d01a8: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1d01ac: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d01b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1d01b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1900984));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d01b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d01bc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d01c0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d01c4: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d01c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d01cc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d01d0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d01d4: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d2eb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077768372));
  /* 1d2eb4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1d2eb8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d2ebc: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 1d2ec0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d2ec4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1d2ec8: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d2ecc: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d2ed0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d2ed4: ldr x21, [x8, #0x448] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(1096))));
  /* 1d2ed8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d2edc: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 1d2ee0: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 1d2ee4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1912552));
  fn2_1ccc74(c);
  /* 1d2ee8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1d2eec: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1d2ef0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1d2ef4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d2ef8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d2efc: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1d2f00: stp x8, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1d2f04: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1912584));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1d2f08: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d2f0c: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1d2f10: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d2f14: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1d2f18: ret  */
  return;
}

void fn2_1d38e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077770980));
  /* 1d38e4: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d38e8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d38ec: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d38f0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d38f4: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d38f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d38fc: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d3900: ldr x0, [x9, #0x548] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1352))));
  /* 1d3904: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d3908: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d390c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1915152));
  fn2_1ccc74(c);
  /* 1d3910: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d3914: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d3918: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d391c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d3920: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d3924: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d3928: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d392c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d3930: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d433c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077773628));
  /* 1d433c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d4340: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d4344: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d4348: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d434c: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d4350: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d4354: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d4358: ldr x0, [x9, #0x648] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1608))));
  /* 1d435c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d4360: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d4364: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1917800));
  fn2_1ccc74(c);
  /* 1d4368: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d436c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d4370: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d4374: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d4378: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d437c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d4380: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d4384: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d4388: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d4c94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077776020));
  /* 1d4c94: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d4c98: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d4c9c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d4ca0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d4ca4: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d4ca8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d4cac: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d4cb0: ldr x0, [x9, #0x748] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1864))));
  /* 1d4cb4: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d4cb8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d4cbc: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1920192));
  fn2_1ddc90(c);
  /* 1d4cc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d4cc4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d4cc8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d4ccc: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d4cd0: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d4cd4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d4cd8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d4cdc: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d4ce0: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d55f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077778416));
  /* 1d55f0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d55f4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d55f8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d55fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d5600: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d5604: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d5608: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d560c: ldr x0, [x9, #0x850] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2128))));
  /* 1d5610: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d5614: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d5618: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d561c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1922592));
  fn2_1ccc74(c);
  /* 1d5620: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d5624: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d5628: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d562c: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d5630: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d5634: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d5638: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d563c: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d6450(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077782096));
  /* 1d6450: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d6454: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1d6458: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d645c: ldr x2, [x8, #0x958] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(2392))));
  /* 1d6460: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1d6e80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077784704));
  /* 1d6e80: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d6e84: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d6e88: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d6e8c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d6e90: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d6e94: ldr x8, [x8, #0xa38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2616))));
  /* 1d6e98: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1928860));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d6e9c: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d6ea0: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d6ea4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d6ea8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d6eac: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d6eb0: ret  */
  return;
}

void fn2_1d7da4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077788580));
  /* 1d7da4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1d7da8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d7dac: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1d7db0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d7db4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d7db8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d7dbc: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d7dc0: add x8, x8, #0xa90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2704)));
  /* 1d7dc4: ldr x22, [x8, #0x90] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(144))));
  /* 1d7dc8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d7dcc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d7dd0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d7dd4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1d7dd8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d7ddc: stp xzr, xzr, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1d7de0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1932772));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d7de4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1d7de8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d7dec: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d7df0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d7df4: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* 1d7df8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1932796));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1d7dfc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d7e00: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1d7e04: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d7e08: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1d7e0c: ret  */
  return;
}

void fn2_1d8ab4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077791924));
  /* 1d8ab4: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1d8ab8: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* 1d8abc: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1d8ac0: strb w9, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 9));
  /* 1d8ac4: ldrb w8, [x1, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(1))));
  /* 1d8ac8: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 1d8acc: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 1d8ad0: strb w9, [x1, #1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(1)), ARC_W_R(c, 9));
  /* 1d8ad4: ldrb w8, [x1, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(2))));
  /* 1d8ad8: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1d8adc: strb w8, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* 1d8ae0: strb w9, [x1, #2] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 9));
  /* 1d8ae4: ldrb w8, [x1, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(3))));
  /* 1d8ae8: ldrb w9, [x0, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 1d8aec: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* 1d8af0: strb w9, [x1, #3] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1d8af4: ldrb w8, [x1, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1d8af8: ldrb w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1d8afc: strb w8, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* 1d8b00: strb w9, [x1, #4] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1d8b04: ldrb w8, [x1, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(5))));
  /* 1d8b08: ldrb w9, [x0, #5] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(5))));
  /* 1d8b0c: strb w8, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* 1d8b10: strb w9, [x1, #5] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(5)), ARC_W_R(c, 9));
  /* 1d8b14: ldrb w8, [x1, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(6))));
  /* 1d8b18: ldrb w9, [x0, #6] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(6))));
  /* 1d8b1c: strb w8, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* 1d8b20: strb w9, [x1, #6] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 9));
  /* 1d8b24: ldrb w8, [x1, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(7))));
  /* 1d8b28: ldrb w9, [x0, #7] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(7))));
  /* 1d8b2c: strb w8, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* 1d8b30: strb w9, [x1, #7] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(7)), ARC_W_R(c, 9));
  /* 1d8b34: ldrb w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1d8b38: ldrb w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1d8b3c: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1d8b40: strb w9, [x1, #8] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1d8b44: ldrb w8, [x1, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(9))));
  /* 1d8b48: ldrb w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(9))));
  /* 1d8b4c: strb w8, [x0, #9] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* 1d8b50: strb w9, [x1, #9] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(9)), ARC_W_R(c, 9));
  /* 1d8b54: ldrb w8, [x1, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(10))));
  /* 1d8b58: ldrb w9, [x0, #0xa] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* 1d8b5c: strb w8, [x0, #0xa] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(10)), ARC_W_R(c, 8));
  /* 1d8b60: strb w9, [x1, #0xa] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(10)), ARC_W_R(c, 9));
  /* 1d8b64: ldrb w8, [x1, #0xb] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(11))));
  /* 1d8b68: ldrb w9, [x0, #0xb] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(11))));
  /* 1d8b6c: strb w8, [x0, #0xb] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(11)), ARC_W_R(c, 8));
  /* 1d8b70: strb w9, [x1, #0xb] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(11)), ARC_W_R(c, 9));
  /* 1d8b74: ldrb w8, [x1, #0xc] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1d8b78: ldrb w9, [x0, #0xc] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1d8b7c: strb w8, [x0, #0xc] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* 1d8b80: strb w9, [x1, #0xc] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(12)), ARC_W_R(c, 9));
  /* 1d8b84: ldrb w8, [x1, #0xd] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(13))));
  /* 1d8b88: ldrb w9, [x0, #0xd] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(13))));
  /* 1d8b8c: strb w8, [x0, #0xd] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(13)), ARC_W_R(c, 8));
  /* 1d8b90: strb w9, [x1, #0xd] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(13)), ARC_W_R(c, 9));
  /* 1d8b94: ldrb w8, [x1, #0xe] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(14))));
  /* 1d8b98: ldrb w9, [x0, #0xe] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(14))));
  /* 1d8b9c: strb w8, [x0, #0xe] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(14)), ARC_W_R(c, 8));
  /* 1d8ba0: strb w9, [x1, #0xe] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(14)), ARC_W_R(c, 9));
  /* 1d8ba4: ldrb w8, [x1, #0xf] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(15))));
  /* 1d8ba8: ldrb w9, [x0, #0xf] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(15))));
  /* 1d8bac: strb w8, [x0, #0xf] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(15)), ARC_W_R(c, 8));
  /* 1d8bb0: strb w9, [x1, #0xf] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(15)), ARC_W_R(c, 9));
  /* 1d8bb4: ret  */
  return;
}

void fn2_1d9e60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077796960));
  /* 1d9e60: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d9e64: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d9e68: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d9e6c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d9e70: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1d9e74: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1d9e78: ldr x8, [x8, #0xd20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3360))));
  /* 1d9e7c: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d9e80: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d9e84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1941128));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d9e88: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d9e8c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d9e90: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d9e94: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d9e98: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d9e9c: ret  */
  return;
}

void fn2_1db6a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077803172));
  /* 1db6a4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1db6a8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1db6ac: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1db6b0: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1db6b4: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1db6b8: ldr x8, [x8, #0xe38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3640))));
  /* 1db6bc: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1db6c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1db6c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1947336));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1db6c8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1db6cc: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1db6d0: ret  */
  return;
}

void fn2_1dbe74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077805172));
  /* 1dbe74: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dbe78: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1dbe7c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1dbe80: ldr x4, [x8, #0xf30] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(3888))));
  /* 1dbe84: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1dbe88: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1dc6b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077807288));
  /* 1dc6b8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dc6bc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1dc6c0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1dc6c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1dc6c8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1dc6cc: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dc6d0: add x8, x8, #0xde0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3552)));
  /* 1dc6d4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1dc6d8: ldr x0, [x8, #0x268] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(616))));
  /* 1dc6dc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1dc6e0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1dc6e4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1dc6e8: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1dc6ec: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1dc6f0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1dc6f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1951480));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dc6f8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1dc6fc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1dc700: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1dc704: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1dc708: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1dc70c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1dc710: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dc714: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1de31c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077814556));
  /* 1de31c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1de320: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1de324: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1de328: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1de32c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1de330: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1de334: ldr x8, [x8, #0x128] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(296))));
  /* 1de338: stp x1, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1de33c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1de340: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1de344: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1958728));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1de348: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1de34c: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1de350: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1de354: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1de358: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1de35c: ret  */
  return;
}

void fn2_1decc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077817024));
  /* 1decc0: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1decc4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1decc8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1deccc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1decd0: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1decd4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1decd8: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1decdc: ldr x0, [x9, #0x228] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(552))));
  /* 1dece0: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1dece4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1dece8: bl #0x1e7ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1961196));
  fn2_1e7ce8(c);
  /* 1decec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1decf0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1decf4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1decf8: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1decfc: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1ded00: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ded04: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ded08: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1ded0c: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1dfd90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077821328));
  /* 1dfd90: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1dfd94: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dfd98: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1dfd9c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1dfda0: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1dfda4: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1dfda8: ldr x8, [x8, #0x320] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(800))));
  /* 1dfdac: stp x1, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1dfdb0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1dfdb4: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1dfdb8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1965500));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dfdbc: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1dfdc0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dfdc4: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1dfdc8: ret  */
  return;
}

void fn2_1e067c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077823612));
  /* 1e067c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e0680: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e0684: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e0688: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e068c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e0690: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0694: ldr x8, [x8, #0x7a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1960))));
  /* 1e0698: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e069c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967776));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e06a0: adrp x20, #0x258000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e06a4: nop  */
  /* nop: no architectural effect here */
  /* 1e06a8: adr x19, #0x25f428 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2487336)));
  /* 1e06ac: ldr x20, [x20, #0x7c8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(1992))));
  /* 1e06b0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 1e06b4: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e06b8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1e06bc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e06c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967812));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e06c4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e06c8: str x0, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 0));
  /* 1e06cc: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e06d0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1e06d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967832));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e06d8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e06dc: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1e06e0: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e06e4: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 1e06e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967852));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e06ec: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e06f0: ldr x8, [x8, #0x7d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2000))));
  /* 1e06f4: str x0, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1e06f8: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e06fc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e0700: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967876));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0704: str x0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 0));
  /* 1e0708: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e070c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967888));
  fn2_1d2c2c(c);
  /* 1e0710: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1e0714: add x1, x1, #0xf9e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3998)));
  /* 1e0718: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e071c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0720: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967908));
  fn2_1b8fd4(c);
  /* 1e0724: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0728: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e072c: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967920));
  fn2_1d2b98(c);
  /* 1e0730: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0734: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967928));
  fn2_1d2d24(c);
  /* 1e0738: adrp x20, #0x258000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e073c: mov w2, #0xe440 */
  ARC_W_W(c, 2, UINT64_C(58432));
  /* 1e0740: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0744: ldr x20, [x20, #0x7c0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(1984))));
  /* 1e0748: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e074c: movk w2, #0xf48e, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4102946816)));
  /* 1e0750: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0754: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967960));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0758: str x0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 0));
  /* 1e075c: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 1e0760: add x1, x1, #0xd7d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3453)));
  /* 1e0764: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0768: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e076c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967984));
  fn2_1b8fd4(c);
  /* 1e0770: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0774: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0778: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1967996));
  fn2_1d2b98(c);
  /* 1e077c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0780: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968004));
  fn2_1d2d24(c);
  /* 1e0784: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0788: mov w2, #0x5d68 */
  ARC_W_W(c, 2, UINT64_C(23912));
  /* 1e078c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0790: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0794: movk w2, #0xd8e6, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3638951936)));
  /* 1e0798: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968028));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e079c: str x0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 0));
  /* 1e07a0: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1e07a4: add x1, x1, #0x69f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1695)));
  /* 1e07a8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e07ac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e07b0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968052));
  fn2_1b8fd4(c);
  /* 1e07b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e07b8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e07bc: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968064));
  fn2_1d2b98(c);
  /* 1e07c0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e07c4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968072));
  fn2_1d2d24(c);
  /* 1e07c8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e07cc: mov w2, #0x9528 */
  ARC_W_W(c, 2, UINT64_C(38184));
  /* 1e07d0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e07d4: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e07d8: movk w2, #0xbd22, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3173122048)));
  /* 1e07dc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968096));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e07e0: str x0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 0));
  /* 1e07e4: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 1e07e8: add x1, x1, #0xb51 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2897)));
  /* 1e07ec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e07f0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e07f4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968120));
  fn2_1b8fd4(c);
  /* 1e07f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e07fc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0800: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968132));
  fn2_1d2b98(c);
  /* 1e0804: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0808: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968140));
  fn2_1d2d24(c);
  /* 1e080c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0810: mov w2, #0x98b5 */
  ARC_W_W(c, 2, UINT64_C(39093));
  /* 1e0814: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0818: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e081c: movk w2, #0xe991, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3918594048)));
  /* 1e0820: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968164));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0824: str x0, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 0));
  /* 1e0828: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1e082c: add x1, x1, #0x795 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1941)));
  /* 1e0830: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0834: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0838: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968188));
  fn2_1b8fd4(c);
  /* 1e083c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0840: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0844: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968200));
  fn2_1d2b98(c);
  /* 1e0848: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e084c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968208));
  fn2_1d2d24(c);
  /* 1e0850: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0854: mov w2, #0xf9b8 */
  ARC_W_W(c, 2, UINT64_C(63928));
  /* 1e0858: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e085c: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0860: movk w2, #0x295d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(693960704)));
  /* 1e0864: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968232));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0868: str x0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 0));
  /* 1e086c: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1e0870: add x1, x1, #0xee7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3815)));
  /* 1e0874: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0878: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e087c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968256));
  fn2_1b8fd4(c);
  /* 1e0880: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0884: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0888: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968268));
  fn2_1d2b98(c);
  /* 1e088c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0890: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968276));
  fn2_1d2d24(c);
  /* 1e0894: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0898: mov w2, #0xf9b8 */
  ARC_W_W(c, 2, UINT64_C(63928));
  /* 1e089c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e08a0: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e08a4: movk w2, #0x295d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(693960704)));
  /* 1e08a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968300));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e08ac: str x0, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 0));
  /* 1e08b0: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1e08b4: add x1, x1, #0xc83 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3203)));
  /* 1e08b8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e08bc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e08c0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968324));
  fn2_1b8fd4(c);
  /* 1e08c4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e08c8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e08cc: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968336));
  fn2_1d2b98(c);
  /* 1e08d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e08d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968344));
  fn2_1d2d24(c);
  /* 1e08d8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e08dc: mov w2, #0x9e86 */
  ARC_W_W(c, 2, UINT64_C(40582));
  /* 1e08e0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e08e4: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e08e8: movk w2, #0x7c97, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2090270720)));
  /* 1e08ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968368));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e08f0: str x0, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 0));
  /* 1e08f4: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1e08f8: add x1, x1, #0x51 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(81)));
  /* 1e08fc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0900: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0904: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968392));
  fn2_1b8fd4(c);
  /* 1e0908: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e090c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0910: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968404));
  fn2_1d2b98(c);
  /* 1e0914: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0918: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968412));
  fn2_1d2d24(c);
  /* 1e091c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0920: mov w2, #0x4d4b */
  ARC_W_W(c, 2, UINT64_C(19787));
  /* 1e0924: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0928: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e092c: movk w2, #0xa852, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2823946240)));
  /* 1e0930: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968436));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0934: str x0, [x19, #0x60] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)), ARC_X_R(c, 0));
  /* 1e0938: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1e093c: add x1, x1, #0x4ba */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1210)));
  /* 1e0940: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0944: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0948: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968460));
  fn2_1b8fd4(c);
  /* 1e094c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0950: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0954: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968472));
  fn2_1d2b98(c);
  /* 1e0958: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e095c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968480));
  fn2_1d2d24(c);
  /* 1e0960: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0964: mov w2, #0x8a18 */
  ARC_W_W(c, 2, UINT64_C(35352));
  /* 1e0968: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e096c: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0970: movk w2, #0x58a3, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1487077376)));
  /* 1e0974: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968504));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0978: str x0, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 0));
  /* 1e097c: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 1e0980: add x1, x1, #0x50d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1293)));
  /* 1e0984: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0988: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e098c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968528));
  fn2_1b8fd4(c);
  /* 1e0990: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0994: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0998: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968540));
  fn2_1d2b98(c);
  /* 1e099c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e09a0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968548));
  fn2_1d2d24(c);
  /* 1e09a4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e09a8: mov w2, #0x4d4b */
  ARC_W_W(c, 2, UINT64_C(19787));
  /* 1e09ac: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e09b0: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e09b4: movk w2, #0xa852, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2823946240)));
  /* 1e09b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968572));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e09bc: str x0, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 0));
  /* 1e09c0: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1e09c4: add x1, x1, #0x91b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2331)));
  /* 1e09c8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e09cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e09d0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968596));
  fn2_1b8fd4(c);
  /* 1e09d4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e09d8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e09dc: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968608));
  fn2_1d2b98(c);
  /* 1e09e0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e09e4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968616));
  fn2_1d2d24(c);
  /* 1e09e8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e09ec: mov w2, #0xafa7 */
  ARC_W_W(c, 2, UINT64_C(44967));
  /* 1e09f0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e09f4: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e09f8: movk w2, #0x3298, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(848822272)));
  /* 1e09fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968640));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0a00: str x0, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 0));
  /* 1e0a04: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1e0a08: add x1, x1, #0xc93 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3219)));
  /* 1e0a0c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0a10: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0a14: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968664));
  fn2_1b8fd4(c);
  /* 1e0a18: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0a1c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0a20: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968676));
  fn2_1d2b98(c);
  /* 1e0a24: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0a28: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968684));
  fn2_1d2d24(c);
  /* 1e0a2c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0a30: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 1e0a34: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0a38: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0a3c: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 1e0a40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0a44: str x0, [x19, #0x80] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(128)), ARC_X_R(c, 0));
  /* 1e0a48: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1e0a4c: add x1, x1, #0x147 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(327)));
  /* 1e0a50: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0a54: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0a58: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968732));
  fn2_1b8fd4(c);
  /* 1e0a5c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0a60: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0a64: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968744));
  fn2_1d2b98(c);
  /* 1e0a68: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0a6c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968752));
  fn2_1d2d24(c);
  /* 1e0a70: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0a74: mov w2, #0x61b5 */
  ARC_W_W(c, 2, UINT64_C(25013));
  /* 1e0a78: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0a7c: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0a80: movk w2, #0x3785, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(931463168)));
  /* 1e0a84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968776));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0a88: str x0, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 0));
  /* 1e0a8c: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1e0a90: add x1, x1, #0xec1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3777)));
  /* 1e0a94: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0a98: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0a9c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968800));
  fn2_1b8fd4(c);
  /* 1e0aa0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0aa4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0aa8: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968812));
  fn2_1d2b98(c);
  /* 1e0aac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0ab0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968820));
  fn2_1d2d24(c);
  /* 1e0ab4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0ab8: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 1e0abc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0ac0: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0ac4: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 1e0ac8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968844));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0acc: str x0, [x19, #0x90] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)), ARC_X_R(c, 0));
  /* 1e0ad0: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1e0ad4: add x1, x1, #0xc77 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3191)));
  /* 1e0ad8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0adc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0ae0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968868));
  fn2_1b8fd4(c);
  /* 1e0ae4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0ae8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0aec: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968880));
  fn2_1d2b98(c);
  /* 1e0af0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0af4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968888));
  fn2_1d2d24(c);
  /* 1e0af8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0afc: mov w2, #0x1314 */
  ARC_W_W(c, 2, UINT64_C(4884));
  /* 1e0b00: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0b04: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0b08: movk w2, #0x66e9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1726545920)));
  /* 1e0b0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968912));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0b10: str x0, [x19, #0x98] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(152)), ARC_X_R(c, 0));
  /* 1e0b14: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 1e0b18: add x1, x1, #0x78f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1935)));
  /* 1e0b1c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0b20: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0b24: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968936));
  fn2_1b8fd4(c);
  /* 1e0b28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0b2c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0b30: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968948));
  fn2_1d2b98(c);
  /* 1e0b34: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0b38: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968956));
  fn2_1d2d24(c);
  /* 1e0b3c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0b40: mov w2, #0x6674 */
  ARC_W_W(c, 2, UINT64_C(26228));
  /* 1e0b44: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0b48: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0b4c: movk w2, #0xec2, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(247595008)));
  /* 1e0b50: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1968980));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0b54: str x0, [x19, #0xa0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(160)), ARC_X_R(c, 0));
  /* 1e0b58: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1e0b5c: add x1, x1, #0x142 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(322)));
  /* 1e0b60: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0b64: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0b68: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969004));
  fn2_1b8fd4(c);
  /* 1e0b6c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0b70: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0b74: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969016));
  fn2_1d2b98(c);
  /* 1e0b78: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0b7c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969024));
  fn2_1d2d24(c);
  /* 1e0b80: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0b84: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 1e0b88: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0b8c: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0b90: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 1e0b94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969048));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0b98: str x0, [x19, #0xa8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(168)), ARC_X_R(c, 0));
  /* 1e0b9c: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1e0ba0: add x1, x1, #0x36d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(877)));
  /* 1e0ba4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0ba8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0bac: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969072));
  fn2_1b8fd4(c);
  /* 1e0bb0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0bb4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0bb8: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969084));
  fn2_1d2b98(c);
  /* 1e0bbc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0bc0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969092));
  fn2_1d2d24(c);
  /* 1e0bc4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0bc8: mov w2, #0xcc02 */
  ARC_W_W(c, 2, UINT64_C(52226));
  /* 1e0bcc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0bd0: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0bd4: movk w2, #0xc976, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3379953664)));
  /* 1e0bd8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969116));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0bdc: str x0, [x19, #0xb0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(176)), ARC_X_R(c, 0));
  /* 1e0be0: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1e0be4: add x1, x1, #0xda5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3493)));
  /* 1e0be8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0bec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0bf0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969140));
  fn2_1b8fd4(c);
  /* 1e0bf4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0bf8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0bfc: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969152));
  fn2_1d2b98(c);
  /* 1e0c00: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0c04: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969160));
  fn2_1d2d24(c);
  /* 1e0c08: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0c0c: mov w2, #0x8760 */
  ARC_W_W(c, 2, UINT64_C(34656));
  /* 1e0c10: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0c14: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0c18: movk w2, #0x8da4, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2376335360)));
  /* 1e0c1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969184));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0c20: str x0, [x19, #0xb8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(184)), ARC_X_R(c, 0));
  /* 1e0c24: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1e0c28: add x1, x1, #0xd07 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3335)));
  /* 1e0c2c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0c30: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0c34: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969208));
  fn2_1b8fd4(c);
  /* 1e0c38: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0c3c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0c40: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969220));
  fn2_1d2b98(c);
  /* 1e0c44: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0c48: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969228));
  fn2_1d2d24(c);
  /* 1e0c4c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0c50: mov w2, #0xdce0 */
  ARC_W_W(c, 2, UINT64_C(56544));
  /* 1e0c54: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0c58: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0c5c: movk w2, #0xb1e0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2984247296)));
  /* 1e0c60: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969252));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0c64: str x0, [x19, #0xc0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(192)), ARC_X_R(c, 0));
  /* 1e0c68: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1e0c6c: add x1, x1, #0xab2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2738)));
  /* 1e0c70: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0c74: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0c78: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969276));
  fn2_1b8fd4(c);
  /* 1e0c7c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0c80: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0c84: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969288));
  fn2_1d2b98(c);
  /* 1e0c88: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0c8c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969296));
  fn2_1d2d24(c);
  /* 1e0c90: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0c94: mov w2, #0xdce0 */
  ARC_W_W(c, 2, UINT64_C(56544));
  /* 1e0c98: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0c9c: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0ca0: movk w2, #0xb1e0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2984247296)));
  /* 1e0ca4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969320));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0ca8: str x0, [x19, #0xc8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(200)), ARC_X_R(c, 0));
  /* 1e0cac: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1e0cb0: add x1, x1, #0x3b7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(951)));
  /* 1e0cb4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0cb8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0cbc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969344));
  fn2_1b8fd4(c);
  /* 1e0cc0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0cc4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0cc8: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969356));
  fn2_1d2b98(c);
  /* 1e0ccc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0cd0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969364));
  fn2_1d2d24(c);
  /* 1e0cd4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0cd8: mov w2, #0xe440 */
  ARC_W_W(c, 2, UINT64_C(58432));
  /* 1e0cdc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0ce0: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0ce4: movk w2, #0xf48e, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4102946816)));
  /* 1e0ce8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0cec: str x0, [x19, #0xd0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(208)), ARC_X_R(c, 0));
  /* 1e0cf0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1e0cf4: add x1, x1, #0xf83 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3971)));
  /* 1e0cf8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0cfc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0d00: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969412));
  fn2_1b8fd4(c);
  /* 1e0d04: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0d08: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e0d0c: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969424));
  fn2_1d2b98(c);
  /* 1e0d10: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1e0d14: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969432));
  fn2_1d2d24(c);
  /* 1e0d18: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0d1c: mov w2, #0xf9b8 */
  ARC_W_W(c, 2, UINT64_C(63928));
  /* 1e0d20: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e0d24: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0d28: movk w2, #0x295d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(693960704)));
  /* 1e0d2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969456));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0d30: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e0d34: ldr x8, [x8, #0x7d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2008))));
  /* 1e0d38: str x0, [x19, #0xd8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(216)), ARC_X_R(c, 0));
  /* 1e0d3c: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0d40: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e0d44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969480));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0d48: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e0d4c: ldr x8, [x8, #0x7e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2016))));
  /* 1e0d50: str x0, [x19, #0xe0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(224)), ARC_X_R(c, 0));
  /* 1e0d54: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 1e0d58: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e0d5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969504));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0d60: adrp x20, #0x258000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e0d64: mov w1, #0x1f */
  ARC_W_W(c, 1, UINT64_C(31));
  /* 1e0d68: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0d6c: ldr x20, [x20, #0x7b8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(1976))));
  /* 1e0d70: str x0, [x19, #0xe8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(232)), ARC_X_R(c, 0));
  /* 1e0d74: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1e0d78: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0d7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969536));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0d80: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0d84: str x0, [x19, #0xf0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(240)), ARC_X_R(c, 0));
  /* 1e0d88: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1e0d8c: mov w1, #0x1f */
  ARC_W_W(c, 1, UINT64_C(31));
  /* 1e0d90: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0d94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969560));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0d98: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0d9c: str x0, [x19, #0xf8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(248)), ARC_X_R(c, 0));
  /* 1e0da0: mov w0, #0x17 */
  ARC_W_W(c, 0, UINT64_C(23));
  /* 1e0da4: mov w1, #0x1f */
  ARC_W_W(c, 1, UINT64_C(31));
  /* 1e0da8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1e0dac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969584));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0db0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0db4: str x0, [x19, #0x100] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(256)), ARC_X_R(c, 0));
  /* 1e0db8: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 1e0dbc: mov w1, #0x1f */
  ARC_W_W(c, 1, UINT64_C(31));
  /* 1e0dc0: mov w2, #0x1b */
  ARC_W_W(c, 2, UINT64_C(27));
  /* 1e0dc4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969608));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0dc8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0dcc: str x0, [x19, #0x108] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(264)), ARC_X_R(c, 0));
  /* 1e0dd0: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 1e0dd4: mov w1, #0x1f */
  ARC_W_W(c, 1, UINT64_C(31));
  /* 1e0dd8: mov w2, #0x1c */
  ARC_W_W(c, 2, UINT64_C(28));
  /* 1e0ddc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969632));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0de0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0de4: str x0, [x19, #0x110] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(272)), ARC_X_R(c, 0));
  /* 1e0de8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1e0dec: mov w1, #0x1f */
  ARC_W_W(c, 1, UINT64_C(31));
  /* 1e0df0: mov w2, #0x1f */
  ARC_W_W(c, 2, UINT64_C(31));
  /* 1e0df4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969656));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0df8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0dfc: str x0, [x19, #0x118] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(280)), ARC_X_R(c, 0));
  /* 1e0e00: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1e0e04: mov w1, #0x1f */
  ARC_W_W(c, 1, UINT64_C(31));
  /* 1e0e08: mov w2, #0x1f */
  ARC_W_W(c, 2, UINT64_C(31));
  /* 1e0e0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969680));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0e10: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1e0e14: str x0, [x19, #0x120] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(288)), ARC_X_R(c, 0));
  /* 1e0e18: mov w0, #6 */
  ARC_W_W(c, 0, UINT64_C(6));
  /* 1e0e1c: mov w1, #0x1f */
  ARC_W_W(c, 1, UINT64_C(31));
  /* 1e0e20: mov w2, #0x1f */
  ARC_W_W(c, 2, UINT64_C(31));
  /* 1e0e24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969704));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e0e28: str x0, [x19, #0x128] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(296)), ARC_X_R(c, 0));
  /* 1e0e2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1e0e30: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1969716));
  fn2_1d2d24(c);
  /* 1e0e34: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e0e38: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e0e3c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e0e40: ret  */
  return;
}

void fn2_1e15dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077827548));
  /* 1e15dc: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e15e0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e15e4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e15e8: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e15ec: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e15f0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e15f4: ldr x8, [x8, #0x528] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1320))));
  /* 1e15f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1971708));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e15fc: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e1600: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e1604: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e1608: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e160c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e1610: ret  */
  return;
}

void fn2_1e266c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077831788));
  /* 1e266c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e2670: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e2674: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e2678: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e267c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1e2680: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e2684: add x8, x8, #0x560 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1376)));
  /* 1e2688: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1e268c: ldr x0, [x8, #0xb0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(176))));
  /* 1e2690: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e2694: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e2698: stp xzr, xzr, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e269c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1e26a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e26a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1975976));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e26a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1e26ac: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e26b0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1e26b4: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e26b8: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1e26bc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e26c0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e26c4: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e26c8: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1e373c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077836092));
  /* 1e373c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e3740: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e3744: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e3748: ldr x4, [x8, #0x708] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(1800))));
  /* 1e374c: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e3750: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1e480c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077840396));
  /* 1e480c: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e4810: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e4814: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e4818: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e481c: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e4820: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e4824: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 1e4828: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e482c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e4830: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1984564));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e4834: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e4838: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e483c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e4840: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e4844: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e4848: ret  */
  return;
}

void fn2_1e5814(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077844500));
  /* 1e5814: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e5818: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e581c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e5820: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e5824: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e5828: ldr x8, [x8, #0x900] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2304))));
  /* 1e582c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e5830: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e5834: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1988664));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e5838: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e583c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e5840: ret  */
  return;
}

void fn2_1e602c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077846572));
  /* 1e602c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e6030: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1e6034: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e6038: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1e603c: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1e6040: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e6044: add x8, x8, #0x8f0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2288)));
  /* 1e6048: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1e604c: ldr x0, [x8, #0x128] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(296))));
  /* 1e6050: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e6054: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1e6058: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e605c: stp xzr, xzr, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e6060: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1e6064: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1e6068: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1990764));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e606c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e6070: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1e6074: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1e6078: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1e607c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e6080: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1e6084: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e6088: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1e70e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077850856));
  /* 1e70e8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e70ec: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e70f0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e70f4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e70f8: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e70fc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e7100: ldr x8, [x8, #0xaf0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2800))));
  /* 1e7104: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1e7108: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e710c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1995024));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e7110: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1e7114: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e7118: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e711c: ret  */
  return;
}

void fn2_1e8158(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077855064));
  /* 1e8158: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e815c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e8160: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e8164: ldr x4, [x8, #0xbe8] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(3048))));
  /* 1e8168: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e816c: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1e9204(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077859332));
  /* 1e9204: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e9208: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e920c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e9210: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e9214: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e9218: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e921c: ldr x8, [x8, #0xce0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3296))));
  /* 1e9220: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e9224: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e9228: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2003500));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e922c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e9230: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e9234: ret  */
  return;
}

void fn2_1e9f44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077862724));
  /* 1e9f44: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1e9f48: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e9f4c: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1e9f50: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1e9f54: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e9f58: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e9f5c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e9f60: add x8, x8, #0xe08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3592)));
  /* 1e9f64: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1e9f68: tbz w8, #0, #0x1e9fc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1e9fc0;
L_1e9f6c:;
  /* 1e9f6c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e9f70: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e9f74: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1e9f78: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1e9f7c: ldr x8, [x8, #0xe00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3584))));
  /* 1e9f80: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1e9f84: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1e9f88: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1e9f8c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1e9f90: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1e9f94: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1e9f98: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2006940));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1e9f9c: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1e9fa0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1e9fa4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e9fa8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e9fac: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1e9fb0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1e9fb4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e9fb8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1e9fbc: ret  */
  return;
L_1e9fc0:;
  /* 1e9fc0: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e9fc4: add x8, x8, #0xe08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3592)));
  /* 1e9fc8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1e9fcc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1e9fd0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1e9fd4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1e9fd8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007004));
  fn2_24b710(c);
  /* 1e9fdc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1e9fe0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1e9fe4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1e9fe8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1e9fec: cbz w8, #0x1e9f6c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1e9f6c;
  /* 1e9ff0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1e9ff4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1e9ff8: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1e9ffc: bl #0x1ebc08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007040));
  fn2_1ebc08(c);
  /* 1ea000: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ea004: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 1ea008: add x1, x1, #0x941 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2369)));
  /* 1ea00c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ea010: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ea014: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007064));
  fn2_1b8fd4(c);
  /* 1ea018: mov w2, #0x66ee */
  ARC_W_W(c, 2, UINT64_C(26350));
  /* 1ea01c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1ea020: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ea024: movk w2, #0x1c1f, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(471793664)));
  /* 1ea028: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007084));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1ea02c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ea030: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ea034: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007096));
  fn2_1d2d24(c);
  /* 1ea038: adrp x0, #0x25f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea03c: add x0, x0, #0xe00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3584)));
  /* 1ea040: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1ea044: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2007112));
  fn2_24b720(c);
  /* 1ea048: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ea04c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ea050: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ea054: b #0x1e9f6c */
  goto L_1e9f6c;
}

void fn2_1ec474(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077872244));
  /* 1ec474: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1ec478: ldr x9, [x1, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1ec47c: fmov d0, x10 */
  arc_du_w(c, 0, (uint64_t)(ARC_X_R(c, 10)));
  /* 1ec480: cnt v0.8b, v0.8b */
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
  /* 1ec484: uaddlv h0, v0.8b */
  { uint64_t _r = (uint64_t)((c)->q[0].u8[0]);
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[1]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[2]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[3]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[4]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[5]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[6]));
    _r = (uint64_t)(_r + (uint64_t)((c)->q[0].u8[7]));
    arc_su_w(c, 0, ((uint64_t)_r & UINT64_C(65535))); }
  /* 1ec488: fmov w13, s0 */
  ARC_W_W(c, 13, ARC_SU_R(c, 0));
  /* 1ec48c: cmp x13, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1));
  /* 1ec490: b.hi #0x1ec4a0 */
  if (ARC_COND(c, 8)) goto L_1ec4a0;
  /* 1ec494: sub x11, x10, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 1ec498: and x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) & ARC_X_R(c, 9)));
  /* 1ec49c: b #0x1ec4b0 */
  goto L_1ec4b0;
L_1ec4a0:;
  /* 1ec4a0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 1ec4a4: b.lo #0x1ec4b0 */
  if (ARC_COND(c, 3)) goto L_1ec4b0;
  /* 1ec4a8: udiv x11, x9, x10 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 9)) / (uint64_t)(ARC_X_R(c, 10)))));
  /* 1ec4ac: msub x9, x11, x10, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) - ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 10)))));
L_1ec4b0:;
  /* 1ec4b0: ldr x14, [x0] */
  ARC_X_W(c, 14, arc_ld64(ARC_X_R(c, 0)));
  /* 1ec4b4: ldr x12, [x14, x9, lsl #3] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
L_1ec4b8:;
  /* 1ec4b8: mov x11, x12 */
  ARC_X_W(c, 11, ARC_X_R(c, 12));
  /* 1ec4bc: ldr x12, [x12] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 12)));
  /* 1ec4c0: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* 1ec4c4: b.ne #0x1ec4b8 */
  if (ARC_COND(c, 1)) goto L_1ec4b8;
  /* 1ec4c8: add x12, x0, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 1ec4cc: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* 1ec4d0: b.eq #0x1ec504 */
  if (ARC_COND(c, 0)) goto L_1ec504;
  /* 1ec4d4: ldr x15, [x11, #8] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 11) + INT64_C(8))));
  /* 1ec4d8: cmp x13, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1));
  /* 1ec4dc: b.hi #0x1ec4ec */
  if (ARC_COND(c, 8)) goto L_1ec4ec;
  /* 1ec4e0: sub x16, x10, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 1ec4e4: and x15, x15, x16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 16)));
  /* 1ec4e8: b #0x1ec4fc */
  goto L_1ec4fc;
L_1ec4ec:;
  /* 1ec4ec: cmp x15, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 10));
  /* 1ec4f0: b.lo #0x1ec4fc */
  if (ARC_COND(c, 3)) goto L_1ec4fc;
  /* 1ec4f4: udiv x16, x15, x10 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 10)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 15)) / (uint64_t)(ARC_X_R(c, 10)))));
  /* 1ec4f8: msub x15, x16, x10, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) - ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 10)))));
L_1ec4fc:;
  /* 1ec4fc: cmp x15, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 9));
  /* 1ec500: b.eq #0x1ec540 */
  if (ARC_COND(c, 0)) goto L_1ec540;
L_1ec504:;
  /* 1ec504: ldr x15, [x1] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 1)));
  /* 1ec508: cbz x15, #0x1ec53c */
  if ((ARC_X_R(c, 15)) == 0) goto L_1ec53c;
  /* 1ec50c: ldr x15, [x15, #8] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 15) + INT64_C(8))));
  /* 1ec510: cmp x13, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1));
  /* 1ec514: b.hi #0x1ec524 */
  if (ARC_COND(c, 8)) goto L_1ec524;
  /* 1ec518: sub x16, x10, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 1ec51c: and x15, x15, x16 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 16)));
  /* 1ec520: b #0x1ec534 */
  goto L_1ec534;
L_1ec524:;
  /* 1ec524: cmp x15, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 10));
  /* 1ec528: b.lo #0x1ec534 */
  if (ARC_COND(c, 3)) goto L_1ec534;
  /* 1ec52c: udiv x16, x15, x10 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 10)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 15)) / (uint64_t)(ARC_X_R(c, 10)))));
  /* 1ec530: msub x15, x16, x10, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) - ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 10)))));
L_1ec534:;
  /* 1ec534: cmp x15, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 9));
  /* 1ec538: b.eq #0x1ec540 */
  if (ARC_COND(c, 0)) goto L_1ec540;
L_1ec53c:;
  /* 1ec53c: str xzr, [x14, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 31));
L_1ec540:;
  /* 1ec540: ldr x14, [x1] */
  ARC_X_W(c, 14, arc_ld64(ARC_X_R(c, 1)));
  /* 1ec544: cbz x14, #0x1ec584 */
  if ((ARC_X_R(c, 14)) == 0) goto L_1ec584;
  /* 1ec548: ldr x15, [x14, #8] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 14) + INT64_C(8))));
  /* 1ec54c: cmp x13, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1));
  /* 1ec550: b.hi #0x1ec560 */
  if (ARC_COND(c, 8)) goto L_1ec560;
  /* 1ec554: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 1ec558: and x15, x15, x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) & ARC_X_R(c, 10)));
  /* 1ec55c: b #0x1ec570 */
  goto L_1ec570;
L_1ec560:;
  /* 1ec560: cmp x15, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 10));
  /* 1ec564: b.lo #0x1ec570 */
  if (ARC_COND(c, 3)) goto L_1ec570;
  /* 1ec568: udiv x13, x15, x10 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 10)) == 0 ? 0 : ((uint64_t)(ARC_X_R(c, 15)) / (uint64_t)(ARC_X_R(c, 10)))));
  /* 1ec56c: msub x15, x13, x10, x15 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) - ((uint64_t)(ARC_X_R(c, 13)) * (uint64_t)(ARC_X_R(c, 10)))));
L_1ec570:;
  /* 1ec570: cmp x15, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 9));
  /* 1ec574: b.eq #0x1ec584 */
  if (ARC_COND(c, 0)) goto L_1ec584;
  /* 1ec578: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 1ec57c: str x11, [x9, x15, lsl #3] */
  arc_st64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 15)) << 3)), ARC_X_R(c, 11));
  /* 1ec580: ldr x14, [x1] */
  ARC_X_W(c, 14, arc_ld64(ARC_X_R(c, 1)));
L_1ec584:;
  /* 1ec584: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1ec588: str x14, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 14));
  /* 1ec58c: str xzr, [x1] */
  arc_st64(ARC_X_R(c, 1), ARC_X_R(c, 31));
  /* 1ec590: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1ec594: stp x1, x12, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* 1ec598: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* 1ec59c: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 1ec5a0: strb w9, [x8, #0x10] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(16)), ARC_W_R(c, 9));
  /* 1ec5a4: ret  */
  return;
}

void fn2_1ee424(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077880356));
  /* 1ee424: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ee428: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1ee42c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1ee430: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 1ee434: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 1ee438: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1ee43c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 1ee440: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2024516));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ee444: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ee448: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1ee44c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1ee450: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ee454: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_1f00e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077887716));
  /* 1f00e4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1f00e8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f00ec: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1f00f0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f00f4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1f00f8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f00fc: add x8, x8, #0x338 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(824)));
  /* 1f0100: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f0104: tbz w8, #0, #0x1f014c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f014c;
L_1f0108:;
  /* 1f0108: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f010c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f0110: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1f0114: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f0118: ldr x8, [x8, #0x330] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(816))));
  /* 1f011c: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1f0120: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f0124: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1f0128: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f012c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f0130: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2031924));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f0134: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f0138: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f013c: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1f0140: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f0144: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1f0148: ret  */
  return;
L_1f014c:;
  /* 1f014c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f0150: add x8, x8, #0x338 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(824)));
  /* 1f0154: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f0158: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f015c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2031968));
  fn2_24b710(c);
  /* 1f0160: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f0164: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f0168: cbz w8, #0x1f0108 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f0108;
  /* 1f016c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f0170: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f0174: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1f0178: bl #0x1f0cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2031996));
  fn2_1f0cc4(c);
  /* 1f017c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f0180: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 1f0184: add x1, x1, #0x80b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2059)));
  /* 1f0188: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f018c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f0190: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032020));
  fn2_1b8fd4(c);
  /* 1f0194: mov w2, #0xfb5b */
  ARC_W_W(c, 2, UINT64_C(64347));
  /* 1f0198: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f019c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f01a0: movk w2, #0x9e4, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(165937152)));
  /* 1f01a4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032040));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1f01a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f01ac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f01b0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032052));
  fn2_1d2d24(c);
  /* 1f01b4: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f01b8: add x0, x0, #0x330 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(816)));
  /* 1f01bc: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f01c0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2032068));
  fn2_24b720(c);
  /* 1f01c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f01c8: b #0x1f0108 */
  goto L_1f0108;
}

void fn2_1f23fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077896700));
  /* 1f23fc: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1f2400: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f2404: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 1f2408: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f240c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f2410: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f2414: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2418: add x8, x8, #0x530 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1328)));
  /* 1f241c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f2420: tbz w8, #0, #0x1f2480 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f2480;
L_1f2424:;
  /* 1f2424: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f2428: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f242c: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2430: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 1f2434: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f2438: ldr x0, [x10, #0x528] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(1320))));
  /* 1f243c: stp x9, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1f2440: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1f2444: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f2448: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 1f244c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f2450: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1f2454: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* 1f2458: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2040924));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f245c: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f2460: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1f2464: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1f2468: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f246c: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1f2470: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f2474: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f2478: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1f247c: ret  */
  return;
L_1f2480:;
  /* 1f2480: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2484: add x8, x8, #0x530 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1328)));
  /* 1f2488: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f248c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f2490: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f2494: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1f2498: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2040988));
  fn2_24b710(c);
  /* 1f249c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f24a0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f24a4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f24a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f24ac: cbz w8, #0x1f2424 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f2424;
  /* 1f24b0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f24b4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f24b8: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1f24bc: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041024));
  fn2_20293c(c);
  /* 1f24c0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f24c4: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1f24c8: add x1, x1, #0xb49 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2889)));
  /* 1f24cc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f24d0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f24d4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041048));
  fn2_1b8fd4(c);
  /* 1f24d8: mov w2, #0xc232 */
  ARC_W_W(c, 2, UINT64_C(49714));
  /* 1f24dc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1f24e0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1f24e4: movk w2, #0xd14c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3511418880)));
  /* 1f24e8: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041068));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1f24ec: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f24f0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f24f4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041080));
  fn2_1d2d24(c);
  /* 1f24f8: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f24fc: add x0, x0, #0x528 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1320)));
  /* 1f2500: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1f2504: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2041096));
  fn2_24b720(c);
  /* 1f2508: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f250c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f2510: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f2514: b #0x1f2424 */
  goto L_1f2424;
}

void fn2_1f4868(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077906024));
  /* 1f4868: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1f486c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f4870: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f4874: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f4878: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1f487c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f4880: add x8, x8, #0x730 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1840)));
  /* 1f4884: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f4888: tbz w8, #0, #0x1f48d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f48d4;
L_1f488c:;
  /* 1f488c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f4890: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f4894: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1f4898: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f489c: ldr x8, [x8, #0x728] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1832))));
  /* 1f48a0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f48a4: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1f48a8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1f48ac: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f48b0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f48b4: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1f48b8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050236));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f48bc: ldr w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(8))));
  /* 1f48c0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f48c4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f48c8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f48cc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1f48d0: ret  */
  return;
L_1f48d4:;
  /* 1f48d4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f48d8: add x8, x8, #0x730 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1840)));
  /* 1f48dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f48e0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f48e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f48e8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050284));
  fn2_24b710(c);
  /* 1f48ec: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f48f0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f48f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f48f8: cbz w8, #0x1f488c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f488c;
  /* 1f48fc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f4900: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f4904: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1f4908: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050316));
  fn2_20293c(c);
  /* 1f490c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f4910: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 1f4914: add x1, x1, #0x803 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2051)));
  /* 1f4918: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f491c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f4920: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050340));
  fn2_1b8fd4(c);
  /* 1f4924: mov w2, #0x4289 */
  ARC_W_W(c, 2, UINT64_C(17033));
  /* 1f4928: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1f492c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f4930: movk w2, #0x4ec2, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1321336832)));
  /* 1f4934: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050360));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1f4938: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f493c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1f4940: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050372));
  fn2_1d2d24(c);
  /* 1f4944: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f4948: add x0, x0, #0x728 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1832)));
  /* 1f494c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1f4950: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2050388));
  fn2_24b720(c);
  /* 1f4954: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f4958: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f495c: b #0x1f488c */
  goto L_1f488c;
}

void fn2_1f66cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077913804));
  /* 1f66cc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f66d0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1f66d4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f66d8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1f66dc: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f66e0: add x8, x8, #0x930 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2352)));
  /* 1f66e4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f66e8: tbz w8, #0, #0x1f6728 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f6728;
L_1f66ec:;
  /* 1f66ec: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f66f0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f66f4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f66f8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f66fc: ldr x8, [x8, #0x928] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2344))));
  /* 1f6700: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f6704: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1f6708: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f670c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f6710: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058004));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f6714: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f6718: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f671c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1f6720: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f6724: ret  */
  return;
L_1f6728:;
  /* 1f6728: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f672c: add x8, x8, #0x930 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2352)));
  /* 1f6730: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f6734: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f6738: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058044));
  fn2_24b710(c);
  /* 1f673c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f6740: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f6744: cbz w8, #0x1f66ec */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f66ec;
  /* 1f6748: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f674c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f6750: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1f6754: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058072));
  fn2_20293c(c);
  /* 1f6758: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f675c: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1f6760: add x1, x1, #0xdd3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3539)));
  /* 1f6764: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f6768: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f676c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058096));
  fn2_1b8fd4(c);
  /* 1f6770: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 1f6774: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f6778: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f677c: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 1f6780: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058116));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1f6784: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f6788: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f678c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058128));
  fn2_1d2d24(c);
  /* 1f6790: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6794: add x0, x0, #0x928 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2344)));
  /* 1f6798: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f679c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2058144));
  fn2_24b720(c);
  /* 1f67a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f67a4: b #0x1f66ec */
  goto L_1f66ec;
}

void fn2_1f8670(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077921904));
  /* 1f8670: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1f8674: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f8678: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1f867c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f8680: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f8684: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1f8688: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f868c: add x8, x8, #0xb30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2864)));
  /* 1f8690: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f8694: tbz w8, #0, #0x1f86e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f86e8;
L_1f8698:;
  /* 1f8698: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f869c: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f86a0: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f86a4: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 1f86a8: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f86ac: ldr x0, [x10, #0xb28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(2856))));
  /* 1f86b0: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* 1f86b4: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f86b8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1f86bc: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 1f86c0: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f86c4: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1f86c8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f86cc: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066128));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f86d0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f86d4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1f86d8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f86dc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f86e0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1f86e4: ret  */
  return;
L_1f86e8:;
  /* 1f86e8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f86ec: add x8, x8, #0xb30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2864)));
  /* 1f86f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f86f4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f86f8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f86fc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1f8700: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066180));
  fn2_24b710(c);
  /* 1f8704: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f8708: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f870c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f8710: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f8714: cbz w8, #0x1f8698 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f8698;
  /* 1f8718: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f871c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f8720: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1f8724: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066216));
  fn2_20293c(c);
  /* 1f8728: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f872c: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1f8730: add x1, x1, #0xdb0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3504)));
  /* 1f8734: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f8738: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f873c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066240));
  fn2_1b8fd4(c);
  /* 1f8740: mov w2, #0xacae */
  ARC_W_W(c, 2, UINT64_C(44206));
  /* 1f8744: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1f8748: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1f874c: movk w2, #0x785b, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2019229696)));
  /* 1f8750: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066260));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1f8754: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f8758: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f875c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066272));
  fn2_1d2d24(c);
  /* 1f8760: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8764: add x0, x0, #0xb28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2856)));
  /* 1f8768: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1f876c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2066288));
  fn2_24b720(c);
  /* 1f8770: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f8774: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f8778: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f877c: b #0x1f8698 */
  goto L_1f8698;
}

void fn2_1fa7bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077930428));
  /* 1fa7bc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fa7c0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1fa7c4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fa7c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1fa7cc: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa7d0: add x8, x8, #0xd30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3376)));
  /* 1fa7d4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fa7d8: tbz w8, #0, #0x1fa820 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fa820;
L_1fa7dc:;
  /* 1fa7dc: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fa7e0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa7e4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fa7e8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1fa7ec: ldr x8, [x8, #0xd28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3368))));
  /* 1fa7f0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fa7f4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1fa7f8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1fa7fc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fa800: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074628));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1fa804: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1fa808: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1fa80c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1fa810: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fa814: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1fa818: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fa81c: ret  */
  return;
L_1fa820:;
  /* 1fa820: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa824: add x8, x8, #0xd30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3376)));
  /* 1fa828: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fa82c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fa830: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074676));
  fn2_24b710(c);
  /* 1fa834: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fa838: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fa83c: cbz w8, #0x1fa7dc */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fa7dc;
  /* 1fa840: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fa844: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fa848: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1fa84c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074704));
  fn2_20293c(c);
  /* 1fa850: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1fa854: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 1fa858: add x1, x1, #0x1b0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(432)));
  /* 1fa85c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fa860: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fa864: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074728));
  fn2_1b8fd4(c);
  /* 1fa868: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 1fa86c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fa870: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1fa874: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 1fa878: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074748));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1fa87c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1fa880: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fa884: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074760));
  fn2_1d2d24(c);
  /* 1fa888: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fa88c: add x0, x0, #0xd28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3368)));
  /* 1fa890: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1fa894: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2074776));
  fn2_24b720(c);
  /* 1fa898: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fa89c: b #0x1fa7dc */
  goto L_1fa7dc;
}

void fn2_1fc8b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077938872));
  /* 1fc8b8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1fc8bc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fc8c0: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1fc8c4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fc8c8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fc8cc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1fc8d0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc8d4: add x8, x8, #0xf30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3888)));
  /* 1fc8d8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fc8dc: tbz w8, #0, #0x1fc928 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fc928;
L_1fc8e0:;
  /* 1fc8e0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fc8e4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc8e8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fc8ec: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1fc8f0: ldr x8, [x8, #0xf28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3880))));
  /* 1fc8f4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fc8f8: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1fc8fc: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1fc900: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1fc904: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fc908: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1fc90c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083088));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1fc910: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fc914: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1fc918: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fc91c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fc920: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1fc924: ret  */
  return;
L_1fc928:;
  /* 1fc928: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc92c: add x8, x8, #0xf30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3888)));
  /* 1fc930: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fc934: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fc938: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1fc93c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1fc940: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083140));
  fn2_24b710(c);
  /* 1fc944: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fc948: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1fc94c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fc950: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fc954: cbz w8, #0x1fc8e0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fc8e0;
  /* 1fc958: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fc95c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fc960: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1fc964: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083176));
  fn2_20293c(c);
  /* 1fc968: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fc96c: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 1fc970: add x1, x1, #0xc05 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3077)));
  /* 1fc974: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fc978: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fc97c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083200));
  fn2_1b8fd4(c);
  /* 1fc980: mov w2, #0xa7a4 */
  ARC_W_W(c, 2, UINT64_C(42916));
  /* 1fc984: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1fc988: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1fc98c: movk w2, #0x1799, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(395902976)));
  /* 1fc990: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083220));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1fc994: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fc998: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fc99c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083232));
  fn2_1d2d24(c);
  /* 1fc9a0: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fc9a4: add x0, x0, #0xf28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3880)));
  /* 1fc9a8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1fc9ac: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2083248));
  fn2_24b720(c);
  /* 1fc9b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fc9b4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fc9b8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1fc9bc: b #0x1fc8e0 */
  goto L_1fc8e0;
}

void fn2_1feaf8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077947640));
  /* 1feaf8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1feafc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1feb00: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1feb04: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1feb08: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1feb0c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1feb10: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1feb14: add x8, x8, #0x130 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 1feb18: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1feb1c: tbz w8, #0, #0x1feb74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1feb74;
L_1feb20:;
  /* 1feb20: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1feb24: mov w8, w2 */
  ARC_W_W(c, 8, ARC_W_R(c, 2));
  /* 1feb28: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1feb2c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1feb30: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1feb34: ldr x8, [x9, #0x128] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(296))));
  /* 1feb38: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1feb3c: add x11, x29, #0x18 */
  ARC_X_W(c, 11, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1feb40: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1feb44: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1feb48: stp x1, x11, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 1feb4c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1feb50: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1feb54: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1feb58: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2091868));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1feb5c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1feb60: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1feb64: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1feb68: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1feb6c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1feb70: ret  */
  return;
L_1feb74:;
  /* 1feb74: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1feb78: add x8, x8, #0x130 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(304)));
  /* 1feb7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1feb80: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1feb84: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1feb88: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* 1feb8c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2091920));
  fn2_24b710(c);
  /* 1feb90: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 1feb94: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1feb98: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1feb9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1feba0: cbz w8, #0x1feb20 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1feb20;
  /* 1feba4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1feba8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1febac: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1febb0: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2091956));
  fn2_20293c(c);
  /* 1febb4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1febb8: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1febbc: add x1, x1, #0x8a6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2214)));
  /* 1febc0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1febc4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1febc8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2091980));
  fn2_1b8fd4(c);
  /* 1febcc: mov w2, #0x2c4d */
  ARC_W_W(c, 2, UINT64_C(11341));
  /* 1febd0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1febd4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1febd8: movk w2, #0xde16, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3725983744)));
  /* 1febdc: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092000));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1febe0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1febe4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1febe8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092012));
  fn2_1d2d24(c);
  /* 1febec: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1febf0: add x0, x0, #0x128 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(296)));
  /* 1febf4: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1febf8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2092028));
  fn2_24b720(c);
  /* 1febfc: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 1fec00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fec04: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fec08: b #0x1feb20 */
  goto L_1feb20;
}

void fn2_200cd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077956308));
  /* 200cd4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 200cd8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 200cdc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 200ce0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 200ce4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 200ce8: add x8, x8, #0x330 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(816)));
  /* 200cec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 200cf0: tbz w8, #0, #0x200d30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_200d30;
L_200cf4:;
  /* 200cf4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 200cf8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 200cfc: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 200d00: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 200d04: ldr x8, [x8, #0x328] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(808))));
  /* 200d08: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 200d0c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 200d10: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 200d14: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 200d18: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100508));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 200d1c: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 200d20: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 200d24: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 200d28: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 200d2c: ret  */
  return;
L_200d30:;
  /* 200d30: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 200d34: add x8, x8, #0x330 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(816)));
  /* 200d38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 200d3c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 200d40: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100548));
  fn2_24b710(c);
  /* 200d44: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 200d48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 200d4c: cbz w8, #0x200cf4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_200cf4;
  /* 200d50: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 200d54: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 200d58: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 200d5c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100576));
  fn2_20293c(c);
  /* 200d60: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 200d64: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 200d68: add x1, x1, #0xa07 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2567)));
  /* 200d6c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 200d70: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 200d74: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100600));
  fn2_1b8fd4(c);
  /* 200d78: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 200d7c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 200d80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 200d84: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 200d88: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100620));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 200d8c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 200d90: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 200d94: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100632));
  fn2_1d2d24(c);
  /* 200d98: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 200d9c: add x0, x0, #0x328 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(808)));
  /* 200da0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 200da4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2100648));
  fn2_24b720(c);
  /* 200da8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 200dac: b #0x200cf4 */
  goto L_200cf4;
}

void fn2_2029d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077963728));
  /* 2029d0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 2029d4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2029d8: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 2029dc: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2029e0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 2029e4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2029e8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 2029ec: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 2029f0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 2029f4: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107896));
  fn2_1db4a4(c);
  /* 2029f8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2029fc: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 202a00: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 202a04: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 202a08: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 202a0c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 202a10: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 202a14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107928));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 202a18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202a1c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107936));
  fn2_1db4a4(c);
  /* 202a20: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 202a24: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107944));
  fn2_1d2c2c(c);
  /* 202a28: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 202a2c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107952));
  fn2_1bc084(c);
  /* 202a30: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 202a34: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 202a38: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202a3c: mov w1, #0x1b */
  ARC_W_W(c, 1, UINT64_C(27));
  /* 202a40: bl #0x1bbf58 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107972));
  fn2_1bbf58(c);
  /* 202a44: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 202a48: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107980));
  fn2_1bc620(c);
  /* 202a4c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 202a50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2107988));
  fn2_1d2d24(c);
  /* 202a54: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 202a58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202a5c: bl #0x1dc378 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108000));
  fn2_1dc378(c);
  /* 202a60: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 202a64: tbz w0, #0, #0x202a74 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_202a74;
  /* 202a68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202a6c: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108016));
  fn2_1dc718(c);
  /* 202a70: b #0x202a7c */
  goto L_202a7c;
L_202a74:;
  /* 202a74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 202a78: bl #0x1db850 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108028));
  fn2_1db850(c);
L_202a7c:;
  /* 202a7c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 202a80: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108036));
  fn2_1db788(c);
  /* 202a84: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 202a88: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 202a8c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 202a90: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 202a94: ret  */
  return;
}

void fn2_2040e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077969636));
  /* 2040e4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2040e8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2040ec: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2040f0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2040f4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2040f8: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2040fc: add x9, x9, #0x620 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1568)));
  /* 204100: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 204104: tbz w9, #0, #0x204130 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_204130;
L_204108:;
  /* 204108: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20410c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 204110: ldr x9, [x9, #0x618] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(1560))));
  /* 204114: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 204118: bl #0x20436c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2113820));
  fn2_20436c(c);
  /* 20411c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 204120: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 204124: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 204128: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20412c: ret  */
  return;
L_204130:;
  /* 204130: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 204134: add x9, x9, #0x620 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1568)));
  /* 204138: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20413c: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 204140: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 204144: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2113864));
  fn2_24b710(c);
  /* 204148: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 20414c: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* 204150: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 204154: cbz w9, #0x204108 */
  if ((ARC_W_R(c, 9)) == 0) goto L_204108;
  /* 204158: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20415c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 204160: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 204164: bl #0x2042d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2113896));
  fn2_2042d8(c);
  /* 204168: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20416c: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 204170: add x1, x1, #0x8fe */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2302)));
  /* 204174: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 204178: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20417c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2113920));
  fn2_1b8fd4(c);
  /* 204180: mov w2, #0xd799 */
  ARC_W_W(c, 2, UINT64_C(55193));
  /* 204184: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 204188: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20418c: movk w2, #0xadc8, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2915565568)));
  /* 204190: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2113940));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 204194: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 204198: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20419c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2113952));
  fn2_1d2d24(c);
  /* 2041a0: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2041a4: add x0, x0, #0x618 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1560)));
  /* 2041a8: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2041ac: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2113968));
  fn2_24b720(c);
  /* 2041b0: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 2041b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2041b8: b #0x204108 */
  goto L_204108;
}

void fn2_205fbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077977532));
  /* 205fbc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 205fc0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 205fc4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 205fc8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 205fcc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 205fd0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205fd4: add x8, x8, #0x7d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2008)));
  /* 205fd8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 205fdc: tbz w8, #0, #0x206028 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_206028;
L_205fe0:;
  /* 205fe0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 205fe4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205fe8: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 205fec: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 205ff0: ldr x8, [x8, #0x7d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2000))));
  /* 205ff4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 205ff8: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 205ffc: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 206000: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 206004: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 206008: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20600c: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 206010: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2121748));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 206014: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 206018: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20601c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 206020: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 206024: ret  */
  return;
L_206028:;
  /* 206028: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20602c: add x8, x8, #0x7d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2008)));
  /* 206030: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 206034: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 206038: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 20603c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2121792));
  fn2_24b710(c);
  /* 206040: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 206044: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 206048: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20604c: cbz w8, #0x205fe0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_205fe0;
  /* 206050: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 206054: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 206058: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20605c: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2121824));
  fn2_2086f8(c);
  /* 206060: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 206064: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 206068: add x1, x1, #0xcc7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3271)));
  /* 20606c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 206070: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 206074: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2121848));
  fn2_1b8fd4(c);
  /* 206078: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 20607c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 206080: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 206084: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 206088: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2121868));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20608c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 206090: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 206094: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2121880));
  fn2_1d2d24(c);
  /* 206098: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20609c: add x0, x0, #0x7d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2000)));
  /* 2060a0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2060a4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2121896));
  fn2_24b720(c);
  /* 2060a8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2060ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2060b0: b #0x205fe0 */
  goto L_205fe0;
}

void fn2_207dd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077985232));
  /* 207dd0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 207dd4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 207dd8: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 207ddc: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 207de0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 207de4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207de8: add x8, x8, #0x9d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2520)));
  /* 207dec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 207df0: tbz w8, #0, #0x207e48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_207e48;
L_207df4:;
  /* 207df4: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 207df8: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207dfc: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 207e00: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 207e04: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 207e08: ldr x0, [x9, #0x9d0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2512))));
  /* 207e0c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 207e10: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 207e14: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 207e18: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 207e1c: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 207e20: stp x11, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 207e24: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129448));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 207e28: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 207e2c: cbz x0, #0x207e34 */
  if ((ARC_X_R(c, 0)) == 0) goto L_207e34;
  /* 207e30: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129460));
  fn2_1b62dc(c);
L_207e34:;
  /* 207e34: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 207e38: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 207e3c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 207e40: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 207e44: ret  */
  return;
L_207e48:;
  /* 207e48: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207e4c: add x8, x8, #0x9d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2520)));
  /* 207e50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 207e54: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 207e58: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 207e5c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129504));
  fn2_24b710(c);
  /* 207e60: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 207e64: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 207e68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 207e6c: cbz w8, #0x207df4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_207df4;
  /* 207e70: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 207e74: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 207e78: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 207e7c: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129536));
  fn2_2086f8(c);
  /* 207e80: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 207e84: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 207e88: add x1, x1, #0xfe7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4071)));
  /* 207e8c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 207e90: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 207e94: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129560));
  fn2_1b8fd4(c);
  /* 207e98: mov w2, #0x8ef7 */
  ARC_W_W(c, 2, UINT64_C(36599));
  /* 207e9c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 207ea0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 207ea4: movk w2, #0x8039, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2151219200)));
  /* 207ea8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129580));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 207eac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 207eb0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 207eb4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129592));
  fn2_1d2d24(c);
  /* 207eb8: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 207ebc: add x0, x0, #0x9d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2512)));
  /* 207ec0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 207ec4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2129608));
  fn2_24b720(c);
  /* 207ec8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 207ecc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 207ed0: b #0x207df4 */
  goto L_207df4;
}

void fn2_2095d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077991380));
  /* 2095d4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2095d8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2095dc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2095e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2095e4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2095e8: add x8, x8, #0xb18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2840)));
  /* 2095ec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2095f0: tbz w8, #0, #0x20962c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20962c;
L_2095f4:;
  /* 2095f4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2095f8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2095fc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 209600: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 209604: ldr x8, [x8, #0xb10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2832))));
  /* 209608: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20960c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 209610: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 209614: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 209618: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135580));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20961c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 209620: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 209624: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 209628: ret  */
  return;
L_20962c:;
  /* 20962c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209630: add x8, x8, #0xb18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2840)));
  /* 209634: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 209638: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20963c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135616));
  fn2_24b710(c);
  /* 209640: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 209644: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 209648: cbz w8, #0x2095f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2095f4;
  /* 20964c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 209650: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 209654: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 209658: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135644));
  fn2_20c8c4(c);
  /* 20965c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 209660: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 209664: add x1, x1, #0xe04 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3588)));
  /* 209668: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20966c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 209670: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135668));
  fn2_1b8fd4(c);
  /* 209674: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 209678: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20967c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 209680: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 209684: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135688));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 209688: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20968c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 209690: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135700));
  fn2_1d2d24(c);
  /* 209694: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209698: add x0, x0, #0xb10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2832)));
  /* 20969c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2096a0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2135716));
  fn2_24b720(c);
  /* 2096a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2096a8: b #0x2095f4 */
  goto L_2095f4;
}

void fn2_20b448(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077999176));
  /* 20b448: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 20b44c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20b450: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 20b454: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20b458: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 20b45c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20b460: add x8, x8, #0xd18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3352)));
  /* 20b464: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20b468: tbz w8, #0, #0x20b4c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20b4c0;
L_20b46c:;
  /* 20b46c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20b470: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 20b474: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20b478: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 20b47c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20b480: ldr x0, [x9, #0xd10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3344))));
  /* 20b484: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 20b488: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 20b48c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20b490: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 20b494: stur x10, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 10));
  /* 20b498: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 20b49c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143392));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 20b4a0: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 20b4a4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 20b4a8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 20b4ac: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20b4b0: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 20b4b4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20b4b8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 20b4bc: ret  */
  return;
L_20b4c0:;
  /* 20b4c0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20b4c4: add x8, x8, #0xd18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3352)));
  /* 20b4c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20b4cc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20b4d0: str s0, [sp, #0xc] */
  arc_st32(((c)->sp + INT64_C(12)), (c)->q[0].u32[0]);
  /* 20b4d4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143448));
  fn2_24b710(c);
  /* 20b4d8: ldr s0, [sp, #0xc] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(12))));
  /* 20b4dc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20b4e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20b4e4: cbz w8, #0x20b46c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20b46c;
  /* 20b4e8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20b4ec: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20b4f0: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20b4f4: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143480));
  fn2_20c8c4(c);
  /* 20b4f8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20b4fc: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 20b500: add x1, x1, #0xc7c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3196)));
  /* 20b504: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20b508: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20b50c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143504));
  fn2_1b8fd4(c);
  /* 20b510: mov w2, #0xfaa6 */
  ARC_W_W(c, 2, UINT64_C(64166));
  /* 20b514: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20b518: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20b51c: movk w2, #0x13b5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(330629120)));
  /* 20b520: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143524));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20b524: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20b528: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20b52c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143536));
  fn2_1d2d24(c);
  /* 20b530: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20b534: add x0, x0, #0xd10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3344)));
  /* 20b538: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20b53c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2143552));
  fn2_24b720(c);
  /* 20b540: ldr s0, [sp, #0xc] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(12))));
  /* 20b544: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20b548: b #0x20b46c */
  goto L_20b46c;
}

void fn2_20d334(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078007092));
  /* 20d334: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20d338: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 20d33c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20d340: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 20d344: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20d348: add x8, x8, #0xf08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3848)));
  /* 20d34c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20d350: tbz w8, #0, #0x20d390 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20d390;
L_20d354:;
  /* 20d354: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20d358: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20d35c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20d360: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 20d364: ldr x8, [x8, #0xf00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3840))));
  /* 20d368: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20d36c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 20d370: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 20d374: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20d378: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151292));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20d37c: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 20d380: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20d384: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 20d388: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20d38c: ret  */
  return;
L_20d390:;
  /* 20d390: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20d394: add x8, x8, #0xf08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3848)));
  /* 20d398: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20d39c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20d3a0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151332));
  fn2_24b710(c);
  /* 20d3a4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20d3a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20d3ac: cbz w8, #0x20d354 */
  if ((ARC_W_R(c, 8)) == 0) goto L_20d354;
  /* 20d3b0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20d3b4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20d3b8: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20d3bc: bl #0x20df5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151360));
  fn2_20df5c(c);
  /* 20d3c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20d3c4: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 20d3c8: add x1, x1, #0xdf1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3569)));
  /* 20d3cc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20d3d0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20d3d4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151384));
  fn2_1b8fd4(c);
  /* 20d3d8: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 20d3dc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20d3e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20d3e4: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 20d3e8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151404));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20d3ec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20d3f0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20d3f4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151416));
  fn2_1d2d24(c);
  /* 20d3f8: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20d3fc: add x0, x0, #0xf00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3840)));
  /* 20d400: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20d404: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2151432));
  fn2_24b720(c);
  /* 20d408: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20d40c: b #0x20d354 */
  goto L_20d354;
}

void fn2_20f0e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078014696));
  /* 20f0e8: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 20f0ec: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20f0f0: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* 20f0f4: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 20f0f8: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20f0fc: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20f100: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 20f104: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f108: add x9, x9, #0xb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(176)));
  /* 20f10c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 20f110: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 20f114: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20f118: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 20f11c: tbz w9, #0, #0x20f1a0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_20f1a0;
L_20f120:;
  /* 20f120: and w8, w2, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 2) & UINT64_C(1)));
  /* 20f124: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f128: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20f12c: strb w8, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 8));
  /* 20f130: and w8, w3, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(1)));
  /* 20f134: ldr x22, [x9, #0xa8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 9) + INT64_C(168))));
  /* 20f138: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 20f13c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2158912));
  fn2_1ccc74(c);
  /* 20f140: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20f144: add x9, sp, #0xc */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(12)));
  /* 20f148: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 20f14c: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 20f150: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 20f154: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20f158: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 20f15c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 20f160: stp x21, x20, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 20f164: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 20f168: stp x9, x10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 20f16c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2158960));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 20f170: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20f174: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20f178: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2158972));
  fn2_1ccc88(c);
  /* 20f17c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20f180: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2158980));
  fn2_1ccd9c(c);
  /* 20f184: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20f188: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* 20f18c: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20f190: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 20f194: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20f198: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 20f19c: ret  */
  return;
L_20f1a0:;
  /* 20f1a0: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f1a4: add x0, x0, #0xb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(176)));
  /* 20f1a8: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 20f1ac: mov w23, w2 */
  ARC_W_W(c, 23, ARC_W_R(c, 2));
  /* 20f1b0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159028));
  fn2_24b710(c);
  /* 20f1b4: mov w2, w23 */
  ARC_W_W(c, 2, ARC_W_R(c, 23));
  /* 20f1b8: mov w3, w22 */
  ARC_W_W(c, 3, ARC_W_R(c, 22));
  /* 20f1bc: cbz w0, #0x20f120 */
  if ((ARC_W_R(c, 0)) == 0) goto L_20f120;
  /* 20f1c0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20f1c4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20f1c8: ldr x25, [x8] */
  ARC_X_W(c, 25, arc_ld64(ARC_X_R(c, 8)));
  /* 20f1cc: bl #0x20fb34 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159056));
  fn2_20fb34(c);
  /* 20f1d0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 20f1d4: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 20f1d8: add x1, x1, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(40)));
  /* 20f1dc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 20f1e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20f1e4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159080));
  fn2_1b8fd4(c);
  /* 20f1e8: mov w2, #0xc0ed */
  ARC_W_W(c, 2, UINT64_C(49389));
  /* 20f1ec: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 20f1f0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 20f1f4: movk w2, #0x1b94, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(462684160)));
  /* 20f1f8: blr x25 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159100));
  arc_dispatch(c, ARC_X_R(c, 25));
  /* 20f1fc: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 20f200: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 20f204: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159112));
  fn2_1d2d24(c);
  /* 20f208: nop  */
  /* nop: no architectural effect here */
  /* 20f20c: adr x0, #0x2620a8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498728)));
  /* 20f210: str x24, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* 20f214: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2159128));
  fn2_24b720(c);
  /* 20f218: mov w2, w23 */
  ARC_W_W(c, 2, ARC_W_R(c, 23));
  /* 20f21c: mov w3, w22 */
  ARC_W_W(c, 3, ARC_W_R(c, 22));
  /* 20f220: b #0x20f120 */
  goto L_20f120;
}

void fn2_210b80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078021504));
  /* 210b80: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 210b84: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 210b88: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 210b8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 210b90: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210b94: add x8, x8, #0x218 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(536)));
  /* 210b98: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 210b9c: tbz w8, #0, #0x210bdc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_210bdc;
L_210ba0:;
  /* 210ba0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 210ba4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210ba8: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 210bac: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 210bb0: ldr x8, [x8, #0x210] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(528))));
  /* 210bb4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 210bb8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 210bbc: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 210bc0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 210bc4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2165704));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 210bc8: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 210bcc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 210bd0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 210bd4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 210bd8: ret  */
  return;
L_210bdc:;
  /* 210bdc: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210be0: add x8, x8, #0x218 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(536)));
  /* 210be4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 210be8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 210bec: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2165744));
  fn2_24b710(c);
  /* 210bf0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 210bf4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 210bf8: cbz w8, #0x210ba0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_210ba0;
  /* 210bfc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 210c00: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 210c04: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 210c08: bl #0x211364 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2165772));
  fn2_211364(c);
  /* 210c0c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 210c10: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 210c14: add x1, x1, #0x483 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1155)));
  /* 210c18: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 210c1c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 210c20: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2165796));
  fn2_1b8fd4(c);
  /* 210c24: mov w2, #0x3e29 */
  ARC_W_W(c, 2, UINT64_C(15913));
  /* 210c28: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 210c2c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 210c30: movk w2, #0x9e9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(166264832)));
  /* 210c34: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2165816));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 210c38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 210c3c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 210c40: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2165828));
  fn2_1d2d24(c);
  /* 210c44: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 210c48: add x0, x0, #0x210 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(528)));
  /* 210c4c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 210c50: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2165844));
  fn2_24b720(c);
  /* 210c54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 210c58: b #0x210ba0 */
  goto L_210ba0;
}

void fn2_212408(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078027784));
  /* 212408: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 21240c: ret  */
  return;
}

void fn2_213218(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078031384));
  /* 213218: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21321c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 213220: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 213224: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 213228: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21322c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213230: add x8, x8, #0x4b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1208)));
  /* 213234: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 213238: tbz w8, #0, #0x21328c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21328c;
L_21323c:;
  /* 21323c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 213240: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213244: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 213248: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 21324c: ldr x8, [x8, #0x4b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1200))));
  /* 213250: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 213254: stp x1, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 213258: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21325c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 213260: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 213264: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 213268: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175596));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 21326c: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 213270: cbz x0, #0x213278 */
  if ((ARC_X_R(c, 0)) == 0) goto L_213278;
  /* 213274: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175608));
  fn2_1b62dc(c);
L_213278:;
  /* 213278: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21327c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 213280: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 213284: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 213288: ret  */
  return;
L_21328c:;
  /* 21328c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213290: add x8, x8, #0x4b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1208)));
  /* 213294: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 213298: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21329c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 2132a0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175652));
  fn2_24b710(c);
  /* 2132a4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2132a8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2132ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2132b0: cbz w8, #0x21323c */
  if ((ARC_W_R(c, 8)) == 0) goto L_21323c;
  /* 2132b4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2132b8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2132bc: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2132c0: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175684));
  fn2_219a98(c);
  /* 2132c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2132c8: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 2132cc: add x1, x1, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 2132d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2132d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2132d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175708));
  fn2_1b8fd4(c);
  /* 2132dc: mov w2, #0xad42 */
  ARC_W_W(c, 2, UINT64_C(44354));
  /* 2132e0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2132e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2132e8: movk w2, #0xa2fa, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2734292992)));
  /* 2132ec: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175728));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2132f0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2132f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2132f8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175740));
  fn2_1d2d24(c);
  /* 2132fc: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213300: add x0, x0, #0x4b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1200)));
  /* 213304: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 213308: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2175756));
  fn2_24b720(c);
  /* 21330c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 213310: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 213314: b #0x21323c */
  goto L_21323c;
}

void fn2_215224(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078039588));
  /* 215224: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 215228: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 21522c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 215230: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 215234: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215238: add x8, x8, #0x6b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1720)));
  /* 21523c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 215240: tbz w8, #0, #0x215280 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_215280;
L_215244:;
  /* 215244: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 215248: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21524c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 215250: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 215254: ldr x8, [x8, #0x6b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1712))));
  /* 215258: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21525c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 215260: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 215264: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 215268: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2183788));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 21526c: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 215270: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 215274: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 215278: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21527c: ret  */
  return;
L_215280:;
  /* 215280: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215284: add x8, x8, #0x6b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1720)));
  /* 215288: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21528c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 215290: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2183828));
  fn2_24b710(c);
  /* 215294: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 215298: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21529c: cbz w8, #0x215244 */
  if ((ARC_W_R(c, 8)) == 0) goto L_215244;
  /* 2152a0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2152a4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2152a8: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2152ac: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2183856));
  fn2_219a98(c);
  /* 2152b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2152b4: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 2152b8: add x1, x1, #0xc40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3136)));
  /* 2152bc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2152c0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2152c4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2183880));
  fn2_1b8fd4(c);
  /* 2152c8: mov w2, #0xe66e */
  ARC_W_W(c, 2, UINT64_C(58990));
  /* 2152cc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2152d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2152d4: movk w2, #0x67c0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1740636160)));
  /* 2152d8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2183900));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2152dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2152e0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2152e4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2183912));
  fn2_1d2d24(c);
  /* 2152e8: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2152ec: add x0, x0, #0x6b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1712)));
  /* 2152f0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2152f4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2183928));
  fn2_24b720(c);
  /* 2152f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2152fc: b #0x215244 */
  goto L_215244;
}

void fn2_216fa4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078047140));
  /* 216fa4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 216fa8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 216fac: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 216fb0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 216fb4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 216fb8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216fbc: add x8, x8, #0x8b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2232)));
  /* 216fc0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 216fc4: tbz w8, #0, #0x217010 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_217010;
L_216fc8:;
  /* 216fc8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 216fcc: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216fd0: mov w11, w1 */
  ARC_W_W(c, 11, ARC_W_R(c, 1));
  /* 216fd4: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 216fd8: ldr x8, [x9, #0x8b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2224))));
  /* 216fdc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 216fe0: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 216fe4: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 216fe8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 216fec: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 216ff0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 216ff4: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 216ff8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191356));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 216ffc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 217000: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 217004: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 217008: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21700c: ret  */
  return;
L_217010:;
  /* 217010: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217014: add x8, x8, #0x8b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2232)));
  /* 217018: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21701c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 217020: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 217024: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191400));
  fn2_24b710(c);
  /* 217028: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 21702c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 217030: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 217034: cbz w8, #0x216fc8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_216fc8;
  /* 217038: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21703c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 217040: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 217044: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191432));
  fn2_219a98(c);
  /* 217048: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21704c: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 217050: add x1, x1, #0xdc2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3522)));
  /* 217054: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 217058: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21705c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191456));
  fn2_1b8fd4(c);
  /* 217060: mov w2, #0xd240 */
  ARC_W_W(c, 2, UINT64_C(53824));
  /* 217064: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 217068: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21706c: movk w2, #0xbee0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3202351104)));
  /* 217070: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191476));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 217074: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 217078: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21707c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191488));
  fn2_1d2d24(c);
  /* 217080: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217084: add x0, x0, #0x8b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2224)));
  /* 217088: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 21708c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2191504));
  fn2_24b720(c);
  /* 217090: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 217094: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 217098: b #0x216fc8 */
  goto L_216fc8;
}

void fn2_218dc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078054856));
  /* 218dc8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 218dcc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 218dd0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 218dd4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 218dd8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 218ddc: add x8, x8, #0xab8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2744)));
  /* 218de0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 218de4: tbz w8, #0, #0x218e2c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_218e2c;
L_218de8:;
  /* 218de8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 218dec: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 218df0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 218df4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 218df8: ldr x8, [x8, #0xab0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2736))));
  /* 218dfc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 218e00: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 218e04: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 218e08: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 218e0c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199056));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 218e10: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 218e14: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 218e18: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 218e1c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 218e20: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 218e24: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 218e28: ret  */
  return;
L_218e2c:;
  /* 218e2c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 218e30: add x8, x8, #0xab8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2744)));
  /* 218e34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 218e38: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 218e3c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199104));
  fn2_24b710(c);
  /* 218e40: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 218e44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 218e48: cbz w8, #0x218de8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_218de8;
  /* 218e4c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 218e50: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 218e54: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 218e58: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199132));
  fn2_219a98(c);
  /* 218e5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 218e60: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 218e64: add x1, x1, #0x3f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1008)));
  /* 218e68: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 218e6c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 218e70: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199156));
  fn2_1b8fd4(c);
  /* 218e74: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 218e78: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 218e7c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 218e80: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 218e84: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199176));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 218e88: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 218e8c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 218e90: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199188));
  fn2_1d2d24(c);
  /* 218e94: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 218e98: add x0, x0, #0xab0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2736)));
  /* 218e9c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 218ea0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2199204));
  fn2_24b720(c);
  /* 218ea4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 218ea8: b #0x218de8 */
  goto L_218de8;
}

void fn2_219fd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078059480));
  /* 219fd8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 219fdc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 219fe0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 219fe4: nop  */
  /* nop: no architectural effect here */
  /* 219fe8: adr x8, #0x2623c8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2499528)));
  /* 219fec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 219ff0: tbz w8, #0, #0x21a010 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21a010;
L_219ff4:;
  /* 219ff4: nop  */
  /* nop: no architectural effect here */
  /* 219ff8: adr x0, #0x2623c0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2499520)));
  /* 219ffc: nop  */
  /* nop: no architectural effect here */
  /* 21a000: adr x1, #0x256db0 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2452912)));
  /* 21a004: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21a008: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21a00c: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_21a010:;
  /* 21a010: nop  */
  /* nop: no architectural effect here */
  /* 21a014: adr x0, #0x2623c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2499528)));
  /* 21a018: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2203676));
  fn2_24b710(c);
  /* 21a01c: cbz w0, #0x219ff4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_219ff4;
  /* 21a020: nop  */
  /* nop: no architectural effect here */
  /* 21a024: adr x19, #0x2623c0 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2499520)));
  /* 21a028: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 21a02c: add x1, x1, #0x516 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1302)));
  /* 21a030: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21a034: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21a038: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2203708));
  fn2_1b8fd4(c);
  /* 21a03c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 21a040: nop  */
  /* nop: no architectural effect here */
  /* 21a044: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 21a048: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 21a04c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 21a050: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2203732));
  fn2_24b6f0(c);
  /* 21a054: nop  */
  /* nop: no architectural effect here */
  /* 21a058: adr x0, #0x2623c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2499528)));
  /* 21a05c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2203744));
  fn2_24b720(c);
  /* 21a060: b #0x219ff4 */
  goto L_219ff4;
}

void fn2_21b8c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078065864));
  /* 21b8c8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 21b8cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21b8d0: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 21b8d4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21b8d8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21b8dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21b8e0: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21b8e4: add x9, x9, #0xcc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3264)));
  /* 21b8e8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21b8ec: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21b8f0: tbz w9, #0, #0x21b960 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21b960;
L_21b8f4:;
  /* 21b8f4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21b8f8: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21b8fc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21b900: ldr x20, [x8, #0xcb8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(3256))));
  /* 21b904: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 21b908: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210060));
  fn2_1ccc74(c);
  /* 21b90c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21b910: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 21b914: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 21b918: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21b91c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21b920: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21b924: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21b928: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 21b92c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21b930: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210100));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21b934: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21b938: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21b93c: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210112));
  fn2_1ccc88(c);
  /* 21b940: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21b944: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210120));
  fn2_1ccd9c(c);
  /* 21b948: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21b94c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 21b950: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21b954: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21b958: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 21b95c: ret  */
  return;
L_21b960:;
  /* 21b960: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21b964: add x8, x8, #0xcc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3264)));
  /* 21b968: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21b96c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21b970: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 21b974: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210168));
  fn2_24b710(c);
  /* 21b978: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21b97c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21b980: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21b984: cbz w8, #0x21b8f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21b8f4;
  /* 21b988: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21b98c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21b990: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 21b994: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210200));
  fn2_21f8e0(c);
  /* 21b998: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21b99c: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 21b9a0: add x1, x1, #0x777 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1911)));
  /* 21b9a4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21b9a8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21b9ac: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210224));
  fn2_1b8fd4(c);
  /* 21b9b0: mov w2, #0x134b */
  ARC_W_W(c, 2, UINT64_C(4939));
  /* 21b9b4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21b9b8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 21b9bc: movk w2, #0x2b21, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(723582976)));
  /* 21b9c0: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210244));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 21b9c4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21b9c8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21b9cc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210256));
  fn2_1d2d24(c);
  /* 21b9d0: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21b9d4: add x0, x0, #0xcb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3256)));
  /* 21b9d8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 21b9dc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2210272));
  fn2_24b720(c);
  /* 21b9e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21b9e4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21b9e8: b #0x21b8f4 */
  goto L_21b8f4;
}

void fn2_21d95c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078074204));
  /* 21d95c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21d960: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21d964: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21d968: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21d96c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21d970: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21d974: add x9, x9, #0xec0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3776)));
  /* 21d978: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21d97c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21d980: tbz w9, #0, #0x21d9e0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21d9e0;
L_21d984:;
  /* 21d984: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21d988: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21d98c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21d990: ldr x20, [x8, #0xeb8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(3768))));
  /* 21d994: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218392));
  fn2_1ccc74(c);
  /* 21d998: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21d99c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21d9a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21d9a4: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21d9a8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21d9ac: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21d9b0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21d9b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218424));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21d9b8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21d9bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21d9c0: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218436));
  fn2_1ccc88(c);
  /* 21d9c4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21d9c8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218444));
  fn2_1ccd9c(c);
  /* 21d9cc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21d9d0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21d9d4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21d9d8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21d9dc: ret  */
  return;
L_21d9e0:;
  /* 21d9e0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21d9e4: add x8, x8, #0xec0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3776)));
  /* 21d9e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21d9ec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21d9f0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218484));
  fn2_24b710(c);
  /* 21d9f4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21d9f8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21d9fc: cbz w8, #0x21d984 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21d984;
  /* 21da00: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21da04: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21da08: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21da0c: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218512));
  fn2_21f8e0(c);
  /* 21da10: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21da14: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 21da18: add x1, x1, #0x15 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(21)));
  /* 21da1c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21da20: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21da24: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218536));
  fn2_1b8fd4(c);
  /* 21da28: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 21da2c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21da30: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21da34: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 21da38: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218556));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21da3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21da40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21da44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218568));
  fn2_1d2d24(c);
  /* 21da48: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21da4c: add x0, x0, #0xeb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3768)));
  /* 21da50: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21da54: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2218584));
  fn2_24b720(c);
  /* 21da58: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21da5c: b #0x21d984 */
  goto L_21d984;
}

void fn2_21f894(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078082196));
  /* 21f894: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21f898: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 21f89c: nop  */
  /* nop: no architectural effect here */
  /* 21f8a0: adr x8, #0x262b78 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2501496)));
  /* 21f8a4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21f8a8: tbnz w8, #0, #0x21f8d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_21f8d8;
  /* 21f8ac: nop  */
  /* nop: no architectural effect here */
  /* 21f8b0: adr x0, #0x262b78 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2501496)));
  /* 21f8b4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2226360));
  fn2_24b710(c);
  /* 21f8b8: cbz w0, #0x21f8d8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_21f8d8;
  /* 21f8bc: nop  */
  /* nop: no architectural effect here */
  /* 21f8c0: adr x0, #0x21f974 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2226548)));
  /* 21f8c4: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2226376));
  fn2_1aff64(c);
  /* 21f8c8: nop  */
  /* nop: no architectural effect here */
  /* 21f8cc: adr x0, #0x262b78 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2501496)));
  /* 21f8d0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21f8d4: b #0x24b720 */
  fn2_24b720(c); return;
L_21f8d8:;
  /* 21f8d8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21f8dc: ret  */
  return;
}

void fn2_221204(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078088708));
  /* 221204: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 221208: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22120c: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* 221210: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 221214: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 221218: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 22121c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221220: add x8, x8, #0x240 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(576)));
  /* 221224: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 221228: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22122c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 221230: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 221234: tbz w8, #0, #0x22129c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22129c;
L_221238:;
  /* 221238: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 22123c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2232896));
  fn2_1bc084(c);
  /* 221240: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 221244: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221248: add x4, sp, #0xc */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(12)));
  /* 22124c: ldr x8, [x8, #0x978] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2424))));
  /* 221250: ldr x0, [x9, #0x238] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(568))));
  /* 221254: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 221258: sub x5, x29, #0xc */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 22125c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 221260: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 221264: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 221268: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2232940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 22126c: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 221270: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2232948));
  fn2_1bc668(c);
  /* 221274: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 221278: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 22127c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2232960));
  fn2_1bc620(c);
  /* 221280: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 221284: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 221288: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* 22128c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 221290: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 221294: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 221298: ret  */
  return;
L_22129c:;
  /* 22129c: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2212a0: add x0, x0, #0x240 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(576)));
  /* 2212a4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233000));
  fn2_24b710(c);
  /* 2212a8: cbz w0, #0x221238 */
  if ((ARC_W_R(c, 0)) == 0) goto L_221238;
  /* 2212ac: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2212b0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2212b4: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 2212b8: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233020));
  fn2_222b84(c);
  /* 2212bc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2212c0: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 2212c4: add x1, x1, #0x7c9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1993)));
  /* 2212c8: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 2212cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2212d0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233044));
  fn2_1b8fd4(c);
  /* 2212d4: mov w2, #0x8caa */
  ARC_W_W(c, 2, UINT64_C(36010));
  /* 2212d8: add x1, sp, #0xc */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(12)));
  /* 2212dc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 2212e0: movk w2, #0xf145, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4047831040)));
  /* 2212e4: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233064));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 2212e8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2212ec: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 2212f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233076));
  fn2_1d2d24(c);
  /* 2212f4: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2212f8: add x0, x0, #0x238 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(568)));
  /* 2212fc: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 221300: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2233092));
  fn2_24b720(c);
  /* 221304: b #0x221238 */
  goto L_221238;
}

void fn2_223128(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078096680));
  /* 223128: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22312c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 223130: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 223134: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 223138: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22313c: add x8, x8, #0x420 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1056)));
  /* 223140: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 223144: tbz w8, #0, #0x223184 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_223184;
L_223148:;
  /* 223148: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22314c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223150: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 223154: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 223158: ldr x8, [x8, #0x418] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1048))));
  /* 22315c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 223160: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 223164: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 223168: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22316c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2240880));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 223170: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 223174: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 223178: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22317c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 223180: ret  */
  return;
L_223184:;
  /* 223184: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223188: add x8, x8, #0x420 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1056)));
  /* 22318c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 223190: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 223194: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2240920));
  fn2_24b710(c);
  /* 223198: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22319c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2231a0: cbz w8, #0x223148 */
  if ((ARC_W_R(c, 8)) == 0) goto L_223148;
  /* 2231a4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2231a8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2231ac: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2231b0: bl #0x2234b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2240948));
  fn2_2234b4(c);
  /* 2231b4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2231b8: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 2231bc: add x1, x1, #0xf89 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3977)));
  /* 2231c0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2231c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2231c8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2240972));
  fn2_1b8fd4(c);
  /* 2231cc: mov w2, #0x435b */
  ARC_W_W(c, 2, UINT64_C(17243));
  /* 2231d0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2231d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2231d8: movk w2, #0xbddf, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3185508352)));
  /* 2231dc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2240992));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2231e0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2231e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2231e8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2241004));
  fn2_1d2d24(c);
  /* 2231ec: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2231f0: add x0, x0, #0x418 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1048)));
  /* 2231f4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2231f8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2241020));
  fn2_24b720(c);
  /* 2231fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 223200: b #0x223148 */
  goto L_223148;
}

void fn2_224f1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078104348));
  /* 224f1c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 224f20: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 224f24: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 224f28: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 224f2c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 224f30: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 224f34: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 224f38: add x8, x8, #0x5d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1496)));
  /* 224f3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 224f40: tbz w8, #0, #0x224f98 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_224f98;
L_224f44:;
  /* 224f44: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 224f48: and w8, w2, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 2) & UINT64_C(1)));
  /* 224f4c: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 224f50: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 224f54: strb w8, [x29, #0x1c] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 8));
  /* 224f58: ldr x8, [x9, #0x5d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1488))));
  /* 224f5c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 224f60: add x11, x29, #0x1c */
  ARC_X_W(c, 11, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 224f64: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 224f68: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 224f6c: stp x1, x11, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 224f70: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 224f74: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 224f78: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 224f7c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248576));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 224f80: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 224f84: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 224f88: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 224f8c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 224f90: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 224f94: ret  */
  return;
L_224f98:;
  /* 224f98: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 224f9c: add x8, x8, #0x5d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1496)));
  /* 224fa0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 224fa4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 224fa8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 224fac: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* 224fb0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248628));
  fn2_24b710(c);
  /* 224fb4: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 224fb8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 224fbc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 224fc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 224fc4: cbz w8, #0x224f44 */
  if ((ARC_W_R(c, 8)) == 0) goto L_224f44;
  /* 224fc8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 224fcc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 224fd0: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 224fd4: bl #0x225860 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248664));
  fn2_225860(c);
  /* 224fd8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 224fdc: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 224fe0: add x1, x1, #0x37 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(55)));
  /* 224fe4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 224fe8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 224fec: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248688));
  fn2_1b8fd4(c);
  /* 224ff0: mov w2, #0x6d78 */
  ARC_W_W(c, 2, UINT64_C(28024));
  /* 224ff4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 224ff8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 224ffc: movk w2, #0x9fa3, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2678259712)));
  /* 225000: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248708));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 225004: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 225008: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 22500c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248720));
  fn2_1d2d24(c);
  /* 225010: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225014: add x0, x0, #0x5d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1488)));
  /* 225018: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 22501c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2248736));
  fn2_24b720(c);
  /* 225020: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 225024: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 225028: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22502c: b #0x224f44 */
  goto L_224f44;
}

void fn2_226eb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078112440));
  /* 226eb8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 226ebc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 226ec0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 226ec4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 226ec8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 226ecc: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 226ed0: add x9, x9, #0x798 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1944)));
  /* 226ed4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 226ed8: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 226edc: tbz w9, #0, #0x226f3c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_226f3c;
L_226ee0:;
  /* 226ee0: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 226ee4: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 226ee8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 226eec: ldr x20, [x8, #0x790] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(1936))));
  /* 226ef0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256628));
  fn2_1ccc74(c);
  /* 226ef4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 226ef8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 226efc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 226f00: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 226f04: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 226f08: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 226f0c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 226f10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256660));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 226f14: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 226f18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 226f1c: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256672));
  fn2_1ccc88(c);
  /* 226f20: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 226f24: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256680));
  fn2_1ccd9c(c);
  /* 226f28: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 226f2c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 226f30: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 226f34: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 226f38: ret  */
  return;
L_226f3c:;
  /* 226f3c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 226f40: add x8, x8, #0x798 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1944)));
  /* 226f44: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 226f48: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 226f4c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256720));
  fn2_24b710(c);
  /* 226f50: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 226f54: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 226f58: cbz w8, #0x226ee0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_226ee0;
  /* 226f5c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 226f60: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 226f64: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 226f68: bl #0x227e2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256748));
  fn2_227e2c(c);
  /* 226f6c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 226f70: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 226f74: add x1, x1, #0xa3f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2623)));
  /* 226f78: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 226f7c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 226f80: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256772));
  fn2_1b8fd4(c);
  /* 226f84: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 226f88: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 226f8c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 226f90: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 226f94: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256792));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 226f98: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 226f9c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 226fa0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256804));
  fn2_1d2d24(c);
  /* 226fa4: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 226fa8: add x0, x0, #0x790 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1936)));
  /* 226fac: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 226fb0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2256820));
  fn2_24b720(c);
  /* 226fb4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 226fb8: b #0x226ee0 */
  goto L_226ee0;
}

void fn2_228980(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078119296));
  /* 228980: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 228984: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 228988: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22898c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 228990: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 228994: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 228998: add x8, x8, #0x920 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2336)));
  /* 22899c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2289a0: tbz w8, #0, #0x2289f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2289f0;
L_2289a4:;
  /* 2289a4: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2289a8: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 2289ac: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2289b0: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 2289b4: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 2289b8: ldr x8, [x9, #0x918] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2328))));
  /* 2289bc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2289c0: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 2289c4: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 2289c8: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 2289cc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2289d0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 2289d4: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 2289d8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263516));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 2289dc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2289e0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2289e4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2289e8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2289ec: ret  */
  return;
L_2289f0:;
  /* 2289f0: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2289f4: add x8, x8, #0x920 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2336)));
  /* 2289f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2289fc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 228a00: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 228a04: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263560));
  fn2_24b710(c);
  /* 228a08: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 228a0c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 228a10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 228a14: cbz w8, #0x2289a4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2289a4;
  /* 228a18: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 228a1c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 228a20: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 228a24: bl #0x229110 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263592));
  fn2_229110(c);
  /* 228a28: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 228a2c: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 228a30: add x1, x1, #0x2c7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(711)));
  /* 228a34: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 228a38: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 228a3c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263616));
  fn2_1b8fd4(c);
  /* 228a40: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 228a44: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 228a48: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 228a4c: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 228a50: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263636));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 228a54: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 228a58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 228a5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263648));
  fn2_1d2d24(c);
  /* 228a60: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 228a64: add x0, x0, #0x918 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2328)));
  /* 228a68: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 228a6c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2263664));
  fn2_24b720(c);
  /* 228a70: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 228a74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 228a78: b #0x2289a4 */
  goto L_2289a4;
}

void fn2_229a20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078123552));
  /* 229a20: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 229a24: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 229a28: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 229a2c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 229a30: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 229a34: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 229a38: add x8, x8, #0xa30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2608)));
  /* 229a3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 229a40: tbz w8, #0, #0x229a90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_229a90;
L_229a44:;
  /* 229a44: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 229a48: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 229a4c: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 229a50: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 229a54: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 229a58: ldr x8, [x9, #0xa28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2600))));
  /* 229a5c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 229a60: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 229a64: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 229a68: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 229a6c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 229a70: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 229a74: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 229a78: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2267772));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 229a7c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 229a80: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 229a84: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 229a88: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 229a8c: ret  */
  return;
L_229a90:;
  /* 229a90: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 229a94: add x8, x8, #0xa30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2608)));
  /* 229a98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 229a9c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 229aa0: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 229aa4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2267816));
  fn2_24b710(c);
  /* 229aa8: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 229aac: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 229ab0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 229ab4: cbz w8, #0x229a44 */
  if ((ARC_W_R(c, 8)) == 0) goto L_229a44;
  /* 229ab8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 229abc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 229ac0: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 229ac4: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2267848));
  fn2_22c080(c);
  /* 229ac8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 229acc: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 229ad0: add x1, x1, #0xdf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(223)));
  /* 229ad4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 229ad8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 229adc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2267872));
  fn2_1b8fd4(c);
  /* 229ae0: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 229ae4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 229ae8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 229aec: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 229af0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2267892));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 229af4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 229af8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 229afc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2267904));
  fn2_1d2d24(c);
  /* 229b00: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 229b04: add x0, x0, #0xa28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2600)));
  /* 229b08: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 229b0c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2267920));
  fn2_24b720(c);
  /* 229b10: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 229b14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 229b18: b #0x229a44 */
  goto L_229a44;
}

void fn2_22b978(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078131576));
  /* 22b978: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 22b97c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22b980: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22b984: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22b988: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22b98c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22b990: add x8, x8, #0xc30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3120)));
  /* 22b994: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22b998: tbz w8, #0, #0x22b9f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22b9f0;
L_22b99c:;
  /* 22b99c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22b9a0: ldr x9, [x1] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 1)));
  /* 22b9a4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22b9a8: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 22b9ac: ldr x8, [x8, #0xc28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3112))));
  /* 22b9b0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22b9b4: add x11, x9, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(16)));
  /* 22b9b8: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* 22b9bc: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 22b9c0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 22b9c4: csel x9, xzr, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 11)));
  /* 22b9c8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 22b9cc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22b9d0: str x9, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 9));
  /* 22b9d4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2275800));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 22b9d8: ldr w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(8))));
  /* 22b9dc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22b9e0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22b9e4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22b9e8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 22b9ec: ret  */
  return;
L_22b9f0:;
  /* 22b9f0: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22b9f4: add x8, x8, #0xc30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3120)));
  /* 22b9f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22b9fc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22ba00: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 22ba04: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2275848));
  fn2_24b710(c);
  /* 22ba08: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22ba0c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22ba10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22ba14: cbz w8, #0x22b99c */
  if ((ARC_W_R(c, 8)) == 0) goto L_22b99c;
  /* 22ba18: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22ba1c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22ba20: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 22ba24: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2275880));
  fn2_22c080(c);
  /* 22ba28: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22ba2c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 22ba30: add x1, x1, #0xa61 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2657)));
  /* 22ba34: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22ba38: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22ba3c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2275904));
  fn2_1b8fd4(c);
  /* 22ba40: mov w2, #0x46a */
  ARC_W_W(c, 2, UINT64_C(1130));
  /* 22ba44: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22ba48: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22ba4c: movk w2, #0x666, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(107347968)));
  /* 22ba50: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2275924));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 22ba54: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22ba58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22ba5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2275936));
  fn2_1d2d24(c);
  /* 22ba60: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22ba64: add x0, x0, #0xc28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3112)));
  /* 22ba68: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 22ba6c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2275952));
  fn2_24b720(c);
  /* 22ba70: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22ba74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22ba78: b #0x22b99c */
  goto L_22b99c;
}

void fn2_22d480(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078138496));
  /* 22d480: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22d484: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 22d488: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22d48c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22d490: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d494: add x8, x8, #0xda0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3488)));
  /* 22d498: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22d49c: tbz w8, #0, #0x22d4e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22d4e4;
L_22d4a0:;
  /* 22d4a0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22d4a4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d4a8: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22d4ac: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22d4b0: ldr x8, [x8, #0xd98] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3480))));
  /* 22d4b4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22d4b8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22d4bc: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22d4c0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22d4c4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282696));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 22d4c8: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 22d4cc: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 22d4d0: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 22d4d4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22d4d8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22d4dc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22d4e0: ret  */
  return;
L_22d4e4:;
  /* 22d4e4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d4e8: add x8, x8, #0xda0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3488)));
  /* 22d4ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22d4f0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22d4f4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282744));
  fn2_24b710(c);
  /* 22d4f8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22d4fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22d500: cbz w8, #0x22d4a0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22d4a0;
  /* 22d504: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22d508: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22d50c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 22d510: bl #0x22d668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282772));
  fn2_22d668(c);
  /* 22d514: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22d518: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 22d51c: add x1, x1, #0x4c6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1222)));
  /* 22d520: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22d524: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22d528: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282796));
  fn2_1b8fd4(c);
  /* 22d52c: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 22d530: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22d534: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22d538: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 22d53c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282816));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 22d540: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22d544: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22d548: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282828));
  fn2_1d2d24(c);
  /* 22d54c: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22d550: add x0, x0, #0xd98 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3480)));
  /* 22d554: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22d558: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2282844));
  fn2_24b720(c);
  /* 22d55c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22d560: b #0x22d4a0 */
  goto L_22d4a0;
}

void fn2_22ebbc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078144444));
  /* 22ebbc: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 22ebc0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22ebc4: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 22ebc8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22ebcc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 22ebd0: adrp x21, #0x263000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22ebd4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22ebd8: ldr x8, [x21, #0xed8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(3800))));
  /* 22ebdc: cmp x8, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0));
  /* 22ebe0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 22ebe4: add x8, x8, #0x1d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(472)));
  /* 22ebe8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 22ebec: b.ne #0x22ec6c */
  if (ARC_COND(c, 1)) goto L_22ec6c;
  /* 22ebf0: nop  */
  /* nop: no architectural effect here */
  /* 22ebf4: adr x8, #0x25cea0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2477728)));
  /* 22ebf8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22ebfc: tbz w8, #0, #0x22ed18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22ed18;
L_22ec00:;
  /* 22ec00: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22ec04: ldr x0, [x0, #0xa40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2624))));
  /* 22ec08: bl #0x24b830 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288652));
  fn2_24b830(c);
  /* 22ec0c: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22ec10: nop  */
  /* nop: no architectural effect here */
  /* 22ec14: adr x1, #0x25ce98 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2477720)));
  /* 22ec18: ldr x0, [x0, #0xa48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2632))));
  /* 22ec1c: bl #0x1ebe34 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288672));
  fn2_1ebe34(c);
  /* 22ec20: cbz x0, #0x22ec5c */
  if ((ARC_X_R(c, 0)) == 0) goto L_22ec5c;
  /* 22ec24: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 22ec28: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22ec2c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 22ec30: ldr x0, [x0, #0xa48] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2632))));
  /* 22ec34: bl #0x1ec474 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288696));
  fn2_1ec474(c);
  /* 22ec38: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* 22ec3c: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 22ec40: cbz x20, #0x22ec5c */
  if ((ARC_X_R(c, 20)) == 0) goto L_22ec5c;
  /* 22ec44: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 22ec48: cbz w8, #0x22ec54 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22ec54;
  /* 22ec4c: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 22ec50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288724));
  fn2_1d2d24(c);
L_22ec54:;
  /* 22ec54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22ec58: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288732));
  fn2_24b730(c);
L_22ec5c:;
  /* 22ec5c: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22ec60: ldr x0, [x0, #0xa40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(2624))));
  /* 22ec64: bl #0x24b840 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288744));
  fn2_24b840(c);
  /* 22ec68: str xzr, [x21, #0xed8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(3800)), ARC_X_R(c, 31));
L_22ec6c:;
  /* 22ec6c: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 22ec70: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 22ec74: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 22ec78: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 22ec7c: cbz x0, #0x22eca4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_22eca4;
L_22ec80:;
  /* 22ec80: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 22ec84: cbz x1, #0x22ecb8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_22ecb8;
  /* 22ec88: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288780));
  fn2_aeb74(c);
  /* 22ec8c: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 22ec90: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22ec94: cbnz w8, #0x22ec80 */
  if ((ARC_W_R(c, 8)) != 0) goto L_22ec80;
  /* 22ec98: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 22ec9c: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288800));
  fn2_1b5ce8(c);
  /* 22eca0: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
L_22eca4:;
  /* 22eca4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22eca8: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 22ecac: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22ecb0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 22ecb4: ret  */
  return;
L_22ecb8:;
  /* 22ecb8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22ecbc: cbnz w8, #0x22ecdc */
  if ((ARC_W_R(c, 8)) != 0) goto L_22ecdc;
  /* 22ecc0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 22ecc4: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288840));
  fn2_1b5ce8(c);
  /* 22ecc8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22eccc: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 22ecd0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22ecd4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 22ecd8: ret  */
  return;
L_22ecdc:;
  /* 22ecdc: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 22ece0: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 22ece4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 22ece8: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 22ecec: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 22ecf0: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 22ecf4: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 22ecf8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 22ecfc: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 22ed00: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288900));
  fn2_1b54b0(c);
  /* 22ed04: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22ed08: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 22ed0c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22ed10: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 22ed14: ret  */
  return;
L_22ed18:;
  /* 22ed18: nop  */
  /* nop: no architectural effect here */
  /* 22ed1c: adr x0, #0x25cea0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477728)));
  /* 22ed20: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288932));
  fn2_24b710(c);
  /* 22ed24: cbz w0, #0x22ec00 */
  if ((ARC_W_R(c, 0)) == 0) goto L_22ec00;
  /* 22ed28: nop  */
  /* nop: no architectural effect here */
  /* 22ed2c: adr x20, #0x25ce98 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2477720)));
  /* 22ed30: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 22ed34: add x1, x1, #0xc77 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3191)));
  /* 22ed38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22ed3c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22ed40: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288964));
  fn2_1b8fd4(c);
  /* 22ed44: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 22ed48: nop  */
  /* nop: no architectural effect here */
  /* 22ed4c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 22ed50: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 22ed54: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22ed58: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2288988));
  fn2_24b6f0(c);
  /* 22ed5c: nop  */
  /* nop: no architectural effect here */
  /* 22ed60: adr x0, #0x25cea0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477728)));
  /* 22ed64: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2289000));
  fn2_24b720(c);
  /* 22ed68: b #0x22ec00 */
  goto L_22ec00;
}

void fn2_230da0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078153120));
  /* 230da0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 230da4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 230da8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 230dac: nop  */
  /* nop: no architectural effect here */
  /* 230db0: adr x8, #0x25d3a8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2479016)));
  /* 230db4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 230db8: tbz w8, #0, #0x230dd0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_230dd0;
L_230dbc:;
  /* 230dbc: nop  */
  /* nop: no architectural effect here */
  /* 230dc0: adr x0, #0x25d3a0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2479008)));
  /* 230dc4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 230dc8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 230dcc: ret  */
  return;
L_230dd0:;
  /* 230dd0: nop  */
  /* nop: no architectural effect here */
  /* 230dd4: adr x0, #0x25d3a8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2479016)));
  /* 230dd8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297308));
  fn2_24b710(c);
  /* 230ddc: cbz w0, #0x230dbc */
  if ((ARC_W_R(c, 0)) == 0) goto L_230dbc;
  /* 230de0: nop  */
  /* nop: no architectural effect here */
  /* 230de4: adr x19, #0x25d3a0 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2479008)));
  /* 230de8: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 230dec: add x1, x1, #0x760 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1888)));
  /* 230df0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 230df4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 230df8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297340));
  fn2_1b8fd4(c);
  /* 230dfc: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 230e00: nop  */
  /* nop: no architectural effect here */
  /* 230e04: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 230e08: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 230e0c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 230e10: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297364));
  fn2_24b6f0(c);
  /* 230e14: nop  */
  /* nop: no architectural effect here */
  /* 230e18: adr x0, #0x25d3a8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2479016)));
  /* 230e1c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2297376));
  fn2_24b720(c);
  /* 230e20: nop  */
  /* nop: no architectural effect here */
  /* 230e24: adr x0, #0x25d3a0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2479008)));
  /* 230e28: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 230e2c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 230e30: ret  */
  return;
}

void fn2_2327f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078159856));
  /* 2327f0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2327f4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2327f8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2327fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 232800: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232804: add x8, x8, #0x278 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(632)));
  /* 232808: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23280c: tbz w8, #0, #0x23284c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23284c;
L_232810:;
  /* 232810: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 232814: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232818: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23281c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 232820: ldr x8, [x8, #0x270] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(624))));
  /* 232824: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 232828: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 23282c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 232830: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 232834: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304056));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 232838: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 23283c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 232840: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 232844: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 232848: ret  */
  return;
L_23284c:;
  /* 23284c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232850: add x8, x8, #0x278 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(632)));
  /* 232854: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 232858: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23285c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304096));
  fn2_24b710(c);
  /* 232860: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 232864: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 232868: cbz w8, #0x232810 */
  if ((ARC_W_R(c, 8)) == 0) goto L_232810;
  /* 23286c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 232870: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 232874: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 232878: bl #0x233714 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304124));
  fn2_233714(c);
  /* 23287c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 232880: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 232884: add x1, x1, #0x46c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1132)));
  /* 232888: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23288c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 232890: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304148));
  fn2_1b8fd4(c);
  /* 232894: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 232898: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23289c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2328a0: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 2328a4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304168));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2328a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2328ac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2328b0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304180));
  fn2_1d2d24(c);
  /* 2328b4: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2328b8: add x0, x0, #0x270 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(624)));
  /* 2328bc: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2328c0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2304196));
  fn2_24b720(c);
  /* 2328c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2328c8: b #0x232810 */
  goto L_232810;
}

void fn2_2341a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078166432));
  /* 2341a0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2341a4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2341a8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2341ac: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2341b0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2341b4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2341b8: add x8, x8, #0x488 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1160)));
  /* 2341bc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2341c0: tbz w8, #0, #0x234208 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_234208;
L_2341c4:;
  /* 2341c4: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2341c8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2341cc: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 2341d0: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 2341d4: ldr x8, [x8, #0x480] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1152))));
  /* 2341d8: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2341dc: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 2341e0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 2341e4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 2341e8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2341ec: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 2341f0: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310644));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 2341f4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2341f8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2341fc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 234200: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 234204: ret  */
  return;
L_234208:;
  /* 234208: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23420c: add x8, x8, #0x488 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1160)));
  /* 234210: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 234214: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 234218: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 23421c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310688));
  fn2_24b710(c);
  /* 234220: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 234224: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 234228: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23422c: cbz w8, #0x2341c4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2341c4;
  /* 234230: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 234234: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 234238: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 23423c: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310720));
  fn2_23b340(c);
  /* 234240: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 234244: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 234248: add x1, x1, #0xfc8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4040)));
  /* 23424c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 234250: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 234254: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310744));
  fn2_1b8fd4(c);
  /* 234258: mov w2, #0x6c97 */
  ARC_W_W(c, 2, UINT64_C(27799));
  /* 23425c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 234260: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 234264: movk w2, #0x4366, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1130758144)));
  /* 234268: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310764));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 23426c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 234270: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 234274: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310776));
  fn2_1d2d24(c);
  /* 234278: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23427c: add x0, x0, #0x480 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1152)));
  /* 234280: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 234284: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2310792));
  fn2_24b720(c);
  /* 234288: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23428c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 234290: b #0x2341c4 */
  goto L_2341c4;
}

void fn2_235ed8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078173912));
  /* 235ed8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 235edc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 235ee0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 235ee4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 235ee8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 235eec: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235ef0: add x8, x8, #0x688 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1672)));
  /* 235ef4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 235ef8: tbz w8, #0, #0x235f48 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_235f48;
L_235efc:;
  /* 235efc: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 235f00: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 235f04: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235f08: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 235f0c: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 235f10: ldr x8, [x9, #0x680] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1664))));
  /* 235f14: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 235f18: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 235f1c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 235f20: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 235f24: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 235f28: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 235f2c: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 235f30: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318132));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 235f34: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 235f38: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 235f3c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 235f40: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 235f44: ret  */
  return;
L_235f48:;
  /* 235f48: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235f4c: add x8, x8, #0x688 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1672)));
  /* 235f50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 235f54: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 235f58: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 235f5c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318176));
  fn2_24b710(c);
  /* 235f60: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 235f64: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 235f68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 235f6c: cbz w8, #0x235efc */
  if ((ARC_W_R(c, 8)) == 0) goto L_235efc;
  /* 235f70: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 235f74: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 235f78: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 235f7c: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318208));
  fn2_23b340(c);
  /* 235f80: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 235f84: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 235f88: add x1, x1, #0xd78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3448)));
  /* 235f8c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 235f90: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 235f94: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318232));
  fn2_1b8fd4(c);
  /* 235f98: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 235f9c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 235fa0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 235fa4: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 235fa8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318252));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 235fac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 235fb0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 235fb4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318264));
  fn2_1d2d24(c);
  /* 235fb8: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235fbc: add x0, x0, #0x680 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1664)));
  /* 235fc0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 235fc4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2318280));
  fn2_24b720(c);
  /* 235fc8: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 235fcc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 235fd0: b #0x235efc */
  goto L_235efc;
}

void fn2_237d0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078181644));
  /* 237d0c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 237d10: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 237d14: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 237d18: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 237d1c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 237d20: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 237d24: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237d28: add x8, x8, #0x888 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2184)));
  /* 237d2c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 237d30: tbz w8, #0, #0x237d84 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_237d84;
L_237d34:;
  /* 237d34: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 237d38: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 237d3c: adrp x10, #0x264000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237d40: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 237d44: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 237d48: ldr x0, [x10, #0x880] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(2176))));
  /* 237d4c: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* 237d50: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 237d54: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 237d58: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 237d5c: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 237d60: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 237d64: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 237d68: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2325868));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 237d6c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 237d70: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 237d74: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 237d78: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 237d7c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 237d80: ret  */
  return;
L_237d84:;
  /* 237d84: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237d88: add x8, x8, #0x888 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2184)));
  /* 237d8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 237d90: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 237d94: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 237d98: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 237d9c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2325920));
  fn2_24b710(c);
  /* 237da0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 237da4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 237da8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 237dac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 237db0: cbz w8, #0x237d34 */
  if ((ARC_W_R(c, 8)) == 0) goto L_237d34;
  /* 237db4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 237db8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 237dbc: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 237dc0: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2325956));
  fn2_23b340(c);
  /* 237dc4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 237dc8: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 237dcc: add x1, x1, #0xcfe */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3326)));
  /* 237dd0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 237dd4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 237dd8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2325980));
  fn2_1b8fd4(c);
  /* 237ddc: mov w2, #0xb1a3 */
  ARC_W_W(c, 2, UINT64_C(45475));
  /* 237de0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 237de4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 237de8: movk w2, #0x8ffc, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2415656960)));
  /* 237dec: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326000));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 237df0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 237df4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 237df8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326012));
  fn2_1d2d24(c);
  /* 237dfc: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 237e00: add x0, x0, #0x880 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2176)));
  /* 237e04: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 237e08: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2326028));
  fn2_24b720(c);
  /* 237e0c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 237e10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 237e14: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 237e18: b #0x237d34 */
  goto L_237d34;
}

void fn2_239d78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078189944));
  /* 239d78: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 239d7c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 239d80: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 239d84: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 239d88: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 239d8c: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239d90: add x9, x9, #0xa88 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2696)));
  /* 239d94: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 239d98: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 239d9c: tbz w9, #0, #0x239dfc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_239dfc;
L_239da0:;
  /* 239da0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239da4: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 239da8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 239dac: ldr x20, [x8, #0xa80] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(2688))));
  /* 239db0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334132));
  fn2_1ccc74(c);
  /* 239db4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 239db8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 239dbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 239dc0: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 239dc4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 239dc8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 239dcc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 239dd0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334164));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 239dd4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 239dd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 239ddc: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334176));
  fn2_1ccc88(c);
  /* 239de0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 239de4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334184));
  fn2_1ccd9c(c);
  /* 239de8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 239dec: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 239df0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 239df4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 239df8: ret  */
  return;
L_239dfc:;
  /* 239dfc: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239e00: add x8, x8, #0xa88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2696)));
  /* 239e04: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 239e08: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 239e0c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334224));
  fn2_24b710(c);
  /* 239e10: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 239e14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 239e18: cbz w8, #0x239da0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_239da0;
  /* 239e1c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 239e20: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 239e24: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 239e28: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334252));
  fn2_23b340(c);
  /* 239e2c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 239e30: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 239e34: add x1, x1, #0xbcf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3023)));
  /* 239e38: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 239e3c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 239e40: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334276));
  fn2_1b8fd4(c);
  /* 239e44: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 239e48: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 239e4c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 239e50: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 239e54: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334296));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 239e58: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 239e5c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 239e60: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334308));
  fn2_1d2d24(c);
  /* 239e64: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 239e68: add x0, x0, #0xa80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2688)));
  /* 239e6c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 239e70: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2334324));
  fn2_24b720(c);
  /* 239e74: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 239e78: b #0x239da0 */
  goto L_239da0;
}

void fn2_23b580(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078196096));
  /* 23b580: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23b584: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 23b588: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23b58c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23b590: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 23b594: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 23b598: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 23b59c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 23b5a0: cbz x0, #0x23b5d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_23b5d0;
L_23b5a4:;
  /* 23b5a4: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 23b5a8: cbz x1, #0x23b5c0 */
  if ((ARC_X_R(c, 1)) == 0) goto L_23b5c0;
  /* 23b5ac: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2340272));
  fn2_aeb74(c);
  /* 23b5b0: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 23b5b4: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23b5b8: cbnz w8, #0x23b5a4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_23b5a4;
  /* 23b5bc: b #0x23b5c8 */
  goto L_23b5c8;
L_23b5c0:;
  /* 23b5c0: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23b5c4: cbnz w8, #0x23b5e0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_23b5e0;
L_23b5c8:;
  /* 23b5c8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 23b5cc: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2340304));
  fn2_1b5ce8(c);
L_23b5d0:;
  /* 23b5d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23b5d4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23b5d8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23b5dc: b #0x24b730 */
  fn2_24b730(c); return;
L_23b5e0:;
  /* 23b5e0: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 23b5e4: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 23b5e8: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 23b5ec: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 23b5f0: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 23b5f4: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 23b5f8: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 23b5fc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 23b600: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 23b604: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2340360));
  fn2_1b54b0(c);
  /* 23b608: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23b60c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23b610: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23b614: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_23c584(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078200196));
  /* 23c584: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23c588: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23c58c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23c590: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 23c594: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 23c598: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 23c59c: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 23c5a0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 23c5a4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2344360));
  fn2_1b5d1c(c);
  /* 23c5a8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 23c5ac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23c5b0: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2344372));
  fn2_1afdf8(c);
  /* 23c5b4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23c5b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 23c5bc: ldr x8, [x8, #0xa60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2656))));
  /* 23c5c0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 23c5c4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 23c5c8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23c5cc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23c5d0: ret  */
  return;
}

void fn2_23e2dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078207708));
  /* 23e2dc: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 23e2e0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23e2e4: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 23e2e8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23e2ec: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23e2f0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 23e2f4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23e2f8: add x8, x8, #0xf18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3864)));
  /* 23e2fc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23e300: tbz w8, #0, #0x23e360 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23e360;
L_23e304:;
  /* 23e304: stp x1, x2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 23e308: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23e30c: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 23e310: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23e314: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 23e318: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23e31c: and w8, w3, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) & UINT64_C(1)));
  /* 23e320: ldr x0, [x9, #0xf10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3856))));
  /* 23e324: add x11, sp, #4 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(4)));
  /* 23e328: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 23e32c: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 23e330: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 23e334: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 23e338: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23e33c: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 23e340: stp x8, x11, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 23e344: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2351944));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23e348: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23e34c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23e350: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 23e354: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23e358: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 23e35c: ret  */
  return;
L_23e360:;
  /* 23e360: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23e364: add x8, x8, #0xf18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3864)));
  /* 23e368: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23e36c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23e370: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 23e374: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 23e378: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 23e37c: str s0, [sp] */
  arc_st32((c)->sp, (c)->q[0].u32[0]);
  /* 23e380: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352004));
  fn2_24b710(c);
  /* 23e384: ldr s0, [sp] */
  arc_su_w(c, 0, arc_ld32((c)->sp));
  /* 23e388: mov w3, w22 */
  ARC_W_W(c, 3, ARC_W_R(c, 22));
  /* 23e38c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 23e390: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 23e394: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23e398: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23e39c: cbz w8, #0x23e304 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23e304;
  /* 23e3a0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23e3a4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23e3a8: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 23e3ac: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352048));
  fn2_242738(c);
  /* 23e3b0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 23e3b4: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 23e3b8: add x1, x1, #0x692 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1682)));
  /* 23e3bc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 23e3c0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23e3c4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352072));
  fn2_1b8fd4(c);
  /* 23e3c8: mov w2, #0x2ecc */
  ARC_W_W(c, 2, UINT64_C(11980));
  /* 23e3cc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 23e3d0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 23e3d4: movk w2, #0xe257, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3797352448)));
  /* 23e3d8: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352092));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 23e3dc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 23e3e0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 23e3e4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352104));
  fn2_1d2d24(c);
  /* 23e3e8: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23e3ec: add x0, x0, #0xf10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3856)));
  /* 23e3f0: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 23e3f4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2352120));
  fn2_24b720(c);
  /* 23e3f8: ldr s0, [sp] */
  arc_su_w(c, 0, arc_ld32((c)->sp));
  /* 23e3fc: mov w3, w22 */
  ARC_W_W(c, 3, ARC_W_R(c, 22));
  /* 23e400: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23e404: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 23e408: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 23e40c: b #0x23e304 */
  goto L_23e304;
}

void fn2_240abc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078217916));
  /* 240abc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 240ac0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 240ac4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 240ac8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 240acc: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240ad0: add x8, x8, #0x118 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(280)));
  /* 240ad4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 240ad8: tbz w8, #0, #0x240b1c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_240b1c;
L_240adc:;
  /* 240adc: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 240ae0: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240ae4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 240ae8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 240aec: ldr x8, [x8, #0x110] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(272))));
  /* 240af0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 240af4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 240af8: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 240afc: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 240b00: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 240b04: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362120));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 240b08: ldp s0, s1, [x29, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(24));
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 240b0c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 240b10: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 240b14: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 240b18: ret  */
  return;
L_240b1c:;
  /* 240b1c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240b20: add x8, x8, #0x118 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(280)));
  /* 240b24: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 240b28: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 240b2c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362160));
  fn2_24b710(c);
  /* 240b30: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 240b34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 240b38: cbz w8, #0x240adc */
  if ((ARC_W_R(c, 8)) == 0) goto L_240adc;
  /* 240b3c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 240b40: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 240b44: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 240b48: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362188));
  fn2_242738(c);
  /* 240b4c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 240b50: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 240b54: add x1, x1, #0x24c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(588)));
  /* 240b58: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 240b5c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 240b60: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362212));
  fn2_1b8fd4(c);
  /* 240b64: mov w2, #0xc647 */
  ARC_W_W(c, 2, UINT64_C(50759));
  /* 240b68: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 240b6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 240b70: movk w2, #0xc72c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3341549568)));
  /* 240b74: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362232));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 240b78: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 240b7c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 240b80: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362244));
  fn2_1d2d24(c);
  /* 240b84: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 240b88: add x0, x0, #0x110 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(272)));
  /* 240b8c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 240b90: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2362260));
  fn2_24b720(c);
  /* 240b94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 240b98: b #0x240adc */
  goto L_240adc;
}

void fn2_242654(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078224980));
  /* 242654: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 242658: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 24265c: nop  */
  /* nop: no architectural effect here */
  /* 242660: adr x8, #0x264cb8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510008)));
  /* 242664: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 242668: tbnz w8, #0, #0x242698 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_242698;
  /* 24266c: nop  */
  /* nop: no architectural effect here */
  /* 242670: adr x0, #0x264cb8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510008)));
  /* 242674: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2369144));
  fn2_24b710(c);
  /* 242678: cbz w0, #0x242698 */
  if ((ARC_W_R(c, 0)) == 0) goto L_242698;
  /* 24267c: nop  */
  /* nop: no architectural effect here */
  /* 242680: adr x0, #0x242cd4 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2370772)));
  /* 242684: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2369160));
  fn2_1aff64(c);
  /* 242688: nop  */
  /* nop: no architectural effect here */
  /* 24268c: adr x0, #0x264cb8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510008)));
  /* 242690: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 242694: b #0x24b720 */
  fn2_24b720(c); return;
L_242698:;
  /* 242698: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 24269c: ret  */
  return;
}

void fn2_2430ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078227628));
  /* 2430ac: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2430b0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 2430b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2430b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2430bc: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 2430c0: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 2430c4: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 2430c8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 2430cc: cbz x0, #0x2430fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_2430fc;
L_2430d0:;
  /* 2430d0: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 2430d4: cbz x1, #0x2430ec */
  if ((ARC_X_R(c, 1)) == 0) goto L_2430ec;
  /* 2430d8: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2371804));
  fn2_aeb74(c);
  /* 2430dc: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 2430e0: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2430e4: cbnz w8, #0x2430d0 */
  if ((ARC_W_R(c, 8)) != 0) goto L_2430d0;
  /* 2430e8: b #0x2430f4 */
  goto L_2430f4;
L_2430ec:;
  /* 2430ec: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2430f0: cbnz w8, #0x24310c */
  if ((ARC_W_R(c, 8)) != 0) goto L_24310c;
L_2430f4:;
  /* 2430f4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 2430f8: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2371836));
  fn2_1b5ce8(c);
L_2430fc:;
  /* 2430fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 243100: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 243104: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 243108: b #0x24b730 */
  fn2_24b730(c); return;
L_24310c:;
  /* 24310c: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 243110: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 243114: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 243118: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 24311c: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 243120: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 243124: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 243128: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 24312c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 243130: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2371892));
  fn2_1b54b0(c);
  /* 243134: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 243138: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 24313c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 243140: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_2446dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078233308));
  /* 2446dc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2446e0: b #0x1d9740 */
  fn2_1d9740(c); return;
}

void fn2_244fe0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078235616));
  /* 244fe0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 244fe4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 244fe8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 244fec: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 244ff0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 244ff4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 244ff8: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 244ffc: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 245000: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2379780));
  fn2_1b5d1c(c);
  /* 245004: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 245008: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 24500c: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2379792));
  fn2_1afdf8(c);
  /* 245010: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 245014: add x8, x8, #0xb30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2864)));
  /* 245018: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 24501c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 245020: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 245024: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 245028: ret  */
  return;
}

void fn2_246770(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078241648));
  /* 246770: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 246774: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 246778: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 24677c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 246780: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 246784: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246788: add x9, x9, #0x648 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1608)));
  /* 24678c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 246790: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 246794: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 246798: tbz w9, #0, #0x2467e8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_2467e8;
L_24679c:;
  /* 24679c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2467a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2467a4: ldr x21, [x8, #0x640] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(1600))));
  /* 2467a8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2385836));
  fn2_1bc084(c);
  /* 2467ac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2467b0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2467b4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 2467b8: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 2467bc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2385856));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2467c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2467c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2467c8: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2385868));
  fn2_1bc0b8(c);
  /* 2467cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2467d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2385876));
  fn2_1bc620(c);
  /* 2467d4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2467d8: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 2467dc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2467e0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 2467e4: ret  */
  return;
L_2467e8:;
  /* 2467e8: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2467ec: add x0, x0, #0x648 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1608)));
  /* 2467f0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2385908));
  fn2_24b710(c);
  /* 2467f4: cbz w0, #0x24679c */
  if ((ARC_W_R(c, 0)) == 0) goto L_24679c;
  /* 2467f8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2467fc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 246800: add x1, x1, #0xb1f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2847)));
  /* 246804: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 246808: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24680c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 246810: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 246814: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2385944));
  fn2_1b8fd4(c);
  /* 246818: mov w1, #0xe204 */
  ARC_W_W(c, 1, UINT64_C(57860));
  /* 24681c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 246820: movk w1, #0x48, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(4718592)));
  /* 246824: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2385960));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 246828: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 24682c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 246830: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2385972));
  fn2_1d2d24(c);
  /* 246834: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246838: add x0, x0, #0x640 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1600)));
  /* 24683c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 246840: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2385988));
  fn2_24b720(c);
  /* 246844: b #0x24679c */
  goto L_24679c;
}

void fn2_24829c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078248604));
  /* 24829c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 2482a0: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2482a4: str x19, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 19));
  /* 2482a8: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 2482ac: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2482b0: add x8, x8, #0x848 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2120)));
  /* 2482b4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2482b8: tbz w8, #0, #0x248304 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_248304;
L_2482bc:;
  /* 2482bc: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 2482c0: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2482c4: add x10, sp, #0x28 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(40)));
  /* 2482c8: stp x8, x10, [x29, #-0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-24));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 2482cc: ldr x8, [x9, #0x840] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(2112))));
  /* 2482d0: add x9, sp, #0x20 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(32)));
  /* 2482d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2482d8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 2482dc: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 2482e0: stur d0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  /* 2482e4: stp d2, d1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64((_pa + 8), (c)->q[1].u64[0]);
  }
  /* 2482e8: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 2482ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2392816));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 2482f0: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2482f4: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2482f8: ldr x19, [sp, #0x60] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(96))));
  /* 2482fc: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 248300: ret  */
  return;
L_248304:;
  /* 248304: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248308: add x0, x0, #0x848 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2120)));
  /* 24830c: stp d1, d2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64((_pa + 8), (c)->q[2].u64[0]);
  }
  /* 248310: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 248314: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2392856));
  fn2_24b710(c);
  /* 248318: ldp d0, d1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* 24831c: ldr d2, [sp, #0x18] */
  arc_du_w(c, 2, arc_ld64(((c)->sp + INT64_C(24))));
  /* 248320: cbz w0, #0x2482bc */
  if ((ARC_W_R(c, 0)) == 0) goto L_2482bc;
  /* 248324: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 248328: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 24832c: add x1, x1, #0x107 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(263)));
  /* 248330: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 248334: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 248338: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 24833c: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 248340: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2392900));
  fn2_1b8fd4(c);
  /* 248344: mov w1, #0x538 */
  ARC_W_W(c, 1, UINT64_C(1336));
  /* 248348: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 24834c: movk w1, #0x3b8a, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(998899712)));
  /* 248350: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2392916));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 248354: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 248358: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 24835c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2392928));
  fn2_1d2d24(c);
  /* 248360: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248364: add x0, x0, #0x840 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2112)));
  /* 248368: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 24836c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2392944));
  fn2_24b720(c);
  /* 248370: ldp d0, d1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 1, arc_ld64((_pa + 8)));
  }
  /* 248374: ldr d2, [sp, #0x18] */
  arc_du_w(c, 2, arc_ld64(((c)->sp + INT64_C(24))));
  /* 248378: b #0x2482bc */
  goto L_2482bc;
}

void fn2_249d10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078255376));
  /* 249d10: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 249d14: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 249d18: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 249d1c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 249d20: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249d24: add x8, x8, #0xa48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2632)));
  /* 249d28: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 249d2c: tbz w8, #0, #0x249d60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_249d60;
L_249d30:;
  /* 249d30: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249d34: str x0, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 0));
  /* 249d38: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 249d3c: ldr x8, [x8, #0xa40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2624))));
  /* 249d40: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 249d44: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 249d48: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399564));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 249d4c: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 249d50: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 249d54: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 249d58: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 249d5c: ret  */
  return;
L_249d60:;
  /* 249d60: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249d64: add x8, x8, #0xa48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2632)));
  /* 249d68: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 249d6c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 249d70: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399604));
  fn2_24b710(c);
  /* 249d74: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 249d78: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 249d7c: cbz w8, #0x249d30 */
  if ((ARC_W_R(c, 8)) == 0) goto L_249d30;
  /* 249d80: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 249d84: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 249d88: add x1, x1, #0x29b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(667)));
  /* 249d8c: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 249d90: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 249d94: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 249d98: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* 249d9c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399648));
  fn2_1b8fd4(c);
  /* 249da0: mov w1, #0xd042 */
  ARC_W_W(c, 1, UINT64_C(53314));
  /* 249da4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 249da8: movk w1, #0x1374, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(326369280)));
  /* 249dac: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399664));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 249db0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 249db4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 249db8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399676));
  fn2_1d2d24(c);
  /* 249dbc: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 249dc0: add x0, x0, #0xa40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2624)));
  /* 249dc4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 249dc8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2399692));
  fn2_24b720(c);
  /* 249dcc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 249dd0: b #0x249d30 */
  goto L_249d30;
}

void fn2_24b6c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078261952));
  /* 24b6c0: stp x16, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 16));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 24b6c4: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b6c8: ldr x17, [x16, #0xab0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2736))));
  /* 24b6cc: add x16, x16, #0xab0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2736)));
  /* 24b6d0: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 24b6d4: nop  */
  /* nop: no architectural effect here */
  /* 24b6d8: nop  */
  /* nop: no architectural effect here */
  /* 24b6dc: nop  */
  /* nop: no architectural effect here */
}

void fn2_24b8d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078262480));
  /* 24b8d0: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b8d4: ldr x17, [x16, #0xbb0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2992))));
  /* 24b8d8: add x16, x16, #0xbb0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2992)));
  /* 24b8dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

