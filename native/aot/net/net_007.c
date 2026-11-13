#include "lifted.h"
#include "df_lse.h"

void fn2_9a12c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076486956));
  /* 9a12c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9a130: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 9a134: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9a138: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* 9a13c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9a140: ldr x9, [x8, #0xd70] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(3440))));
  /* 9a144: cmp x9, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 9a148: adrp x9, #0x24f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 9a14c: add x9, x9, #0x998 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2456)));
  /* 9a150: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 9a154: b.ne #0x9a15c */
  if (ARC_COND(c, 1)) goto L_9a15c;
  /* 9a158: str xzr, [x8, #0xd70] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3440)), ARC_X_R(c, 31));
L_9a15c:;
  /* 9a15c: add x0, x19, #0x71 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(113)));
  /* 9a160: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631140));
  fn2_1ccd9c(c);
  /* 9a164: add x0, x19, #0x69 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(105)));
  /* 9a168: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631148));
  fn2_1d97fc(c);
  /* 9a16c: add x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* 9a170: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631156));
  fn2_1db788(c);
  /* 9a174: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* 9a178: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631164));
  fn2_1db788(c);
  /* 9a17c: add x0, x19, #0x44 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(68)));
  /* 9a180: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631172));
  fn2_1d97fc(c);
  /* 9a184: add x0, x19, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(56)));
  /* 9a188: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631180));
  fn2_1ccd9c(c);
  /* 9a18c: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 9a190: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631188));
  fn2_1d97fc(c);
  /* 9a194: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* 9a198: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631196));
  fn2_1ccd9c(c);
  /* 9a19c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 9a1a0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631204));
  fn2_1ccd9c(c);
  /* 9a1a4: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 9a1a8: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 9a1ac: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 9a1b0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 9a1b4: cbz x0, #0x9a1dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_9a1dc;
L_9a1b8:;
  /* 9a1b8: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 9a1bc: cbz x1, #0x9a1e8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_9a1e8;
  /* 9a1c0: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631236));
  fn2_aeb74(c);
  /* 9a1c4: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 9a1c8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 9a1cc: cbnz w8, #0x9a1b8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_9a1b8;
  /* 9a1d0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 9a1d4: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(631256));
  fn2_1b5ce8(c);
  /* 9a1d8: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
L_9a1dc:;
  /* 9a1dc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9a1e0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9a1e4: ret  */
  return;
L_9a1e8:;
  /* 9a1e8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 9a1ec: cbnz w8, #0x9a200 */
  if ((ARC_W_R(c, 8)) != 0) goto L_9a200;
  /* 9a1f0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 9a1f4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9a1f8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9a1fc: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_9a200:;
  /* 9a200: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 9a204: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 9a208: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 9a20c: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 9a210: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 9a214: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 9a218: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 9a21c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 9a220: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 9a224: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9a228: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9a22c: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_9d628(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076500520));
  /* 9d628: sub sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(208)));
  /* 9d62c: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d630: str x25, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), ARC_X_R(c, 25));
  /* 9d634: stp x24, x23, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 9d638: stp x22, x21, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9d63c: stp x20, x19, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9d640: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 9d644: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 9d648: mov x23, x3 */
  ARC_X_W(c, 23, ARC_X_R(c, 3));
  /* 9d64c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 9d650: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 9d654: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 9d658: bl #0x9a5a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644700));
  fn2_9a5a0(c);
  /* 9d65c: bl #0x9be64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644704));
  fn2_9be64(c);
  /* 9d660: tbz w0, #0, #0x9d7e8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9d7e8;
  /* 9d664: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d668: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644716));
  fn2_1d9740(c);
  /* 9d66c: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d670: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 9d674: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644728));
  fn2_1bc25c(c);
  /* 9d678: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 9d67c: add x1, x1, #0x134 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(308)));
  /* 9d680: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9d684: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644744));
  fn2_1b7d24(c);
  /* 9d688: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9d68c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9d690: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644756));
  fn2_1bc2f8(c);
  /* 9d694: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9d698: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644764));
  fn2_1ccd9c(c);
  /* 9d69c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d6a0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9d6a4: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644776));
  fn2_1bbfa0(c);
  /* 9d6a8: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d6ac: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644784));
  fn2_1bcf04(c);
  /* 9d6b0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9d6b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644792));
  fn2_1bc620(c);
  /* 9d6b8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d6bc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644800));
  fn2_1bc620(c);
  /* 9d6c0: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 9d6c4: bl #0xc9588 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644808));
  fn2_c9588(c);
  /* 9d6c8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d6cc: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 9d6d0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644820));
  fn2_1bc2f8(c);
  /* 9d6d4: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 9d6d8: add x1, x1, #0xf36 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3894)));
  /* 9d6dc: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9d6e0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644836));
  fn2_1b7d24(c);
  /* 9d6e4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9d6e8: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9d6ec: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644848));
  fn2_1bc2f8(c);
  /* 9d6f0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9d6f4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644856));
  fn2_1ccd9c(c);
  /* 9d6f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d6fc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9d700: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644868));
  fn2_1bbfa0(c);
  /* 9d704: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d708: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644876));
  fn2_1bcf04(c);
  /* 9d70c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9d710: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644884));
  fn2_1bc620(c);
  /* 9d714: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d718: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644892));
  fn2_1bc620(c);
  /* 9d71c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 9d720: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644900));
  fn2_1ccd9c(c);
  /* 9d724: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 9d728: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 9d72c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9d730: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644916));
  fn2_1b7d24(c);
  /* 9d734: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d738: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9d73c: sub x20, x29, #0x28 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d740: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644932));
  fn2_1bc2f8(c);
  /* 9d744: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9d748: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644940));
  fn2_1ccd9c(c);
  /* 9d74c: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 9d750: add x1, x1, #0x764 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1892)));
  /* 9d754: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9d758: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644956));
  fn2_1b7d24(c);
  /* 9d75c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9d760: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 9d764: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644968));
  fn2_1bc2f8(c);
  /* 9d768: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9d76c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644976));
  fn2_1ccd9c(c);
  /* 9d770: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d774: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9d778: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644988));
  fn2_1bbfa0(c);
  /* 9d77c: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d780: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(644996));
  fn2_1bcf04(c);
  /* 9d784: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 9d788: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645004));
  fn2_1bc620(c);
  /* 9d78c: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d790: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645012));
  fn2_1bc620(c);
  /* 9d794: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d798: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d79c: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645024));
  fn2_1bc530(c);
  /* 9d7a0: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 9d7a4: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* 9d7a8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645036));
  fn2_1bc084(c);
  /* 9d7ac: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 9d7b0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 9d7b4: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* 9d7b8: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 9d7bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9d7c0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 9d7c4: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* 9d7c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645068));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d7cc: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d7d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645076));
  fn2_1bc620(c);
  /* 9d7d4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 9d7d8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645084));
  fn2_1bc620(c);
  /* 9d7dc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d7e0: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645092));
  fn2_1d97fc(c);
  /* 9d7e4: b #0x9d8f8 */
  goto L_9d8f8;
L_9d7e8:;
  /* 9d7e8: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 9d7ec: add x1, x1, #0x20c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(524)));
  /* 9d7f0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d7f4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645112));
  fn2_1b7d24(c);
  /* 9d7f8: mov x24, sp */
  ARC_X_W(c, 24, (c)->sp);
  /* 9d7fc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9d800: str x22, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 22));
  /* 9d804: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 9d808: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645132));
  fn2_1d9754(c);
  /* 9d80c: add x0, x24, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 9d810: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 9d814: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 9d818: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645148));
  fn2_1d788c(c);
  /* 9d81c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 9d820: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645156));
  fn2_220748(c);
  /* 9d824: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 9d828: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 9d82c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9d830: mov w0, #0x38 */
  ARC_W_W(c, 0, UINT64_C(56));
  /* 9d834: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 9d838: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645180));
  fn2_1b5d1c(c);
  /* 9d83c: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 9d840: sub x25, x29, #0x28 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 9d844: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 9d848: add x0, x25, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(8)));
  /* 9d84c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 9d850: stur x8, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 8));
  /* 9d854: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645208));
  fn2_1d9754(c);
  /* 9d858: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9d85c: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* 9d860: add x1, x24, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 9d864: stur x8, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 8));
  /* 9d868: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645228));
  fn2_1d788c(c);
  /* 9d86c: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 9d870: add x8, x8, #0xca8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3240)));
  /* 9d874: add x0, x23, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 9d878: stp x8, x19, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9d87c: add x1, x25, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(8)));
  /* 9d880: ldur x8, [x29, #-0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 9d884: str x8, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 8));
  /* 9d888: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645260));
  fn2_1d9754(c);
  /* 9d88c: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 9d890: add x0, x23, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(40)));
  /* 9d894: add x1, x25, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* 9d898: str x8, [x23, #0x20] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(32)), ARC_X_R(c, 8));
  /* 9d89c: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645280));
  fn2_1d788c(c);
  /* 9d8a0: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9d8a4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 9d8a8: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645292));
  fn2_1b75a4(c);
  /* 9d8ac: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* 9d8b0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645300));
  fn2_1d79fc(c);
  /* 9d8b4: add x0, x25, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(8)));
  /* 9d8b8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645308));
  fn2_1d97fc(c);
  /* 9d8bc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d8c0: add x5, sp, #0x28 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(40)));
  /* 9d8c4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 9d8c8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 9d8cc: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 9d8d0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 9d8d4: bl #0x9c5d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645336));
  fn2_9c5d4(c);
  /* 9d8d8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 9d8dc: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645344));
  fn2_1d79fc(c);
  /* 9d8e0: add x0, x24, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 9d8e4: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645352));
  fn2_1d79fc(c);
  /* 9d8e8: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 9d8ec: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645360));
  fn2_1d97fc(c);
  /* 9d8f0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 9d8f4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(645368));
  fn2_1ccd9c(c);
L_9d8f8:;
  /* 9d8f8: ldp x20, x19, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9d8fc: ldr x25, [sp, #0x90] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(144))));
  /* 9d900: ldp x22, x21, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9d904: ldp x24, x23, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 9d908: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d90c: add sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(208)));
  /* 9d910: ret  */
  return;
}

void fn2_a0464(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076512356));
  /* a0464: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* a0468: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a046c: str x23, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 23));
  /* a0470: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a0474: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a0478: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* a047c: sub x23, x29, #0x40 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a0480: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a0484: stur x0, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), ARC_X_R(c, 0));
  /* a0488: add x0, x23, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* a048c: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656528));
  fn2_1d788c(c);
  /* a0490: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a0494: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656536));
  fn2_220748(c);
  /* a0498: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* a049c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* a04a0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a04a4: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* a04a8: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* a04ac: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656560));
  fn2_1b5d1c(c);
  /* a04b0: ldur x8, [x29, #-0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* a04b4: sub x22, x29, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a04b8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a04bc: add x0, x22, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* a04c0: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* a04c4: stur x8, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 8));
  /* a04c8: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656588));
  fn2_1d788c(c);
  /* a04cc: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* a04d0: add x8, x8, #0x3b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(944)));
  /* a04d4: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* a04d8: stp x8, x20, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* a04dc: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* a04e0: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* a04e4: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* a04e8: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656620));
  fn2_1d788c(c);
  /* a04ec: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a04f0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a04f4: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656632));
  fn2_1b75a4(c);
  /* a04f8: add x0, x22, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* a04fc: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656640));
  fn2_1d79fc(c);
  /* a0500: add x0, x23, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* a0504: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656648));
  fn2_1d79fc(c);
  /* a0508: add x0, x19, #0x69 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(105)));
  /* a050c: bl #0x1d983c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656656));
  fn2_1d983c(c);
  /* a0510: tbz w0, #0, #0xa0634 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a0634;
  /* a0514: bl #0xb8ac0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656664));
  fn2_b8ac0(c);
  /* a0518: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a051c: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* a0520: add x1, x1, #0x5a0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1440)));
  /* a0524: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a0528: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656684));
  fn2_1b7d24(c);
  /* a052c: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* a0530: add x1, x1, #0x5ef */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1519)));
  /* a0534: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a0538: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656700));
  fn2_1b7d24(c);
  /* a053c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a0540: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656708));
  fn2_1bc084(c);
  /* a0544: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* a0548: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656716));
  fn2_1ddc90(c);
  /* a054c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a0550: bl #0x1e457c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656724));
  fn2_1e457c(c);
  /* a0554: add x23, sp, #8 */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(8)));
  /* a0558: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a055c: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* a0560: add x0, x23, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* a0564: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656744));
  fn2_1d788c(c);
  /* a0568: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a056c: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656752));
  fn2_220748(c);
  /* a0570: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* a0574: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* a0578: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a057c: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* a0580: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* a0584: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656776));
  fn2_1b5d1c(c);
  /* a0588: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* a058c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a0590: add x0, x22, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* a0594: add x1, x23, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* a0598: stur x8, [x29, #-0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-24)), ARC_X_R(c, 8));
  /* a059c: bl #0x1d78f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656800));
  fn2_1d78f8(c);
  /* a05a0: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* a05a4: add x8, x8, #0x4a0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1184)));
  /* a05a8: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* a05ac: stp x8, x19, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a05b0: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* a05b4: ldur x8, [x29, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-24))));
  /* a05b8: str x8, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), ARC_X_R(c, 8));
  /* a05bc: bl #0x1d78f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656832));
  fn2_1d78f8(c);
  /* a05c0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a05c4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a05c8: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656844));
  fn2_1b75a4(c);
  /* a05cc: add x0, x22, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* a05d0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656852));
  fn2_1d79fc(c);
  /* a05d4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a05d8: add x2, sp, #0x50 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(80)));
  /* a05dc: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a05e0: add x5, sp, #0x40 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(64)));
  /* a05e4: add x6, sp, #0x30 */
  ARC_X_W(c, 6, ((c)->sp + UINT64_C(48)));
  /* a05e8: add x7, sp, #0x20 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(32)));
  /* a05ec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a05f0: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* a05f4: bl #0xba0f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656888));
  fn2_ba0f0(c);
  /* a05f8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* a05fc: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656896));
  fn2_1d79fc(c);
  /* a0600: add x0, x23, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* a0604: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656904));
  fn2_1d79fc(c);
  /* a0608: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a060c: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656912));
  fn2_1e46f4(c);
  /* a0610: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* a0614: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656920));
  fn2_1dde08(c);
  /* a0618: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a061c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656928));
  fn2_1bc620(c);
  /* a0620: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* a0624: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656936));
  fn2_1ccd9c(c);
  /* a0628: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* a062c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656944));
  fn2_1ccd9c(c);
  /* a0630: b #0xa0664 */
  goto L_a0664;
L_a0634:;
  /* a0634: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* a0638: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656956));
  fn2_1bc084(c);
  /* a063c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a0640: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a0644: add x2, sp, #0x58 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(88)));
  /* a0648: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* a064c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a0650: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* a0654: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* a0658: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656988));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a065c: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* a0660: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(656996));
  fn2_1bc620(c);
L_a0664:;
  /* a0664: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* a0668: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(657004));
  fn2_1d79fc(c);
  /* a066c: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a0670: ldr x23, [sp, #0xc0] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(192))));
  /* a0674: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a0678: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a067c: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* a0680: ret  */
  return;
}

void fn2_a7930(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076542256));
  /* a7930: adrp x0, #0xa7000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(684032)));
  /* a7934: add x0, x0, #0x988 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2440)));
  /* a7938: ret  */
  return;
}

void fn2_a8afc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076546812));
  /* a8afc: adrp x0, #0xa8000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(688128)));
  /* a8b00: add x0, x0, #0xb54 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2900)));
  /* a8b04: ret  */
  return;
}

void fn2_a9a8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076550796));
  /* a9a8c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a9a90: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a9a94: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a9a98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a9a9c: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* a9aa0: add x8, x8, #0xd98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3480)));
  /* a9aa4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a9aa8: add x0, x0, #0x29 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(41)));
  /* a9aac: str x8, [x20], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a9ab0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(694964));
  fn2_1d79fc(c);
  /* a9ab4: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* a9ab8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(694972));
  fn2_1d97fc(c);
  /* a9abc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9ac0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(694980));
  fn2_1ccd9c(c);
  /* a9ac4: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* a9ac8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(694988));
  fn2_1ccd9c(c);
  /* a9acc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a9ad0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a9ad4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a9ad8: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_aa2f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076552944));
  /* aa2f0: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* aa2f4: add x8, x8, #0xf00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3840)));
  /* aa2f8: str x8, [x0], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* aa2fc: b #0x1d79fc */
  fn2_1d79fc(c); return;
}

void fn2_aa8cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076554444));
  /* aa8cc: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* aa8d0: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa8d4: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* aa8d8: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa8dc: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* aa8e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* aa8e4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa8e8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* aa8ec: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* aa8f0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* aa8f4: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* aa8f8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698620));
  fn2_1bc084(c);
  /* aa8fc: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa900: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa904: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698632));
  fn2_1bcf04(c);
  /* aa908: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa90c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698640));
  fn2_1bc620(c);
  /* aa910: ldr x20, [x19, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* aa914: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* aa918: b.lt #0xaa92c */
  if (ARC_COND(c, 11)) goto L_aa92c;
  /* aa91c: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* aa920: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa924: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698664));
  fn2_1bc0b8(c);
  /* aa928: b #0xaa934 */
  goto L_aa934;
L_aa92c:;
  /* aa92c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa930: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698676));
  fn2_1bc084(c);
L_aa934:;
  /* aa934: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* aa938: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa93c: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698688));
  fn2_1bccb8(c);
  /* aa940: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa944: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698696));
  fn2_1bc620(c);
  /* aa948: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* aa94c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698704));
  fn2_1d9740(c);
  /* aa950: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* aa954: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* aa958: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aa95c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698720));
  fn2_1b7d24(c);
  /* aa960: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa964: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aa968: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698732));
  fn2_1bc2f8(c);
  /* aa96c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aa970: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698740));
  fn2_1ccd9c(c);
  /* aa974: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* aa978: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa97c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698752));
  fn2_1bbfa0(c);
  /* aa980: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698756));
  fn2_1bc668(c);
  /* aa984: cmp x0, #0xc8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(200));
  /* aa988: b.ne #0xaabc8 */
  if (ARC_COND(c, 1)) goto L_aabc8;
  /* aa98c: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* aa990: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* aa994: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aa998: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698780));
  fn2_1b7d24(c);
  /* aa99c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aa9a0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* aa9a4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698792));
  fn2_1bc2f8(c);
  /* aa9a8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aa9ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698800));
  fn2_1ccd9c(c);
  /* aa9b0: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* aa9b4: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aa9b8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698812));
  fn2_1bbfa0(c);
  /* aa9bc: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698816));
  fn2_1bcc90(c);
  /* aa9c0: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* aa9c4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aa9c8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698828));
  fn2_1bc620(c);
  /* aa9cc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa9d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698836));
  fn2_1bc620(c);
  /* aa9d4: cmp w21, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(27));
  /* aa9d8: b.ne #0xaabd0 */
  if (ARC_COND(c, 1)) goto L_aabd0;
  /* aa9dc: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* aa9e0: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* aa9e4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aa9e8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698860));
  fn2_1b7d24(c);
  /* aa9ec: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aa9f0: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aa9f4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698872));
  fn2_1bc2f8(c);
  /* aa9f8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aa9fc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698880));
  fn2_1ccd9c(c);
  /* aaa00: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* aaa04: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaa08: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698892));
  fn2_1bbfa0(c);
  /* aaa0c: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* aaa10: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698900));
  fn2_1bccb8(c);
  /* aaa14: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* aaa18: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aaa1c: bl #0x1da27c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698912));
  fn2_1da27c(c);
  /* aaa20: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aaa24: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698920));
  fn2_1d97fc(c);
  /* aaa28: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaa2c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698928));
  fn2_1bc620(c);
  /* aaa30: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* aaa34: add x1, x1, #0x3d8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(984)));
  /* aaa38: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaa3c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698944));
  fn2_1b7d24(c);
  /* aaa40: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aaa44: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaa48: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698956));
  fn2_1bc2f8(c);
  /* aaa4c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaa50: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698964));
  fn2_1ccd9c(c);
  /* aaa54: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aaa58: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698972));
  fn2_1bc084(c);
  /* aaa5c: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaa60: add x0, x20, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* aaa64: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aaa68: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* aaa6c: sub x21, x29, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaa70: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(698996));
  fn2_1d9c5c(c);
  /* aaa74: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaa78: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aaa7c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* aaa80: bl #0x9aca8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699012));
  fn2_9aca8(c);
  /* aaa84: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaa88: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699020));
  fn2_1bc620(c);
  /* aaa8c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aaa90: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699028));
  fn2_1bc620(c);
  /* aaa94: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aaa98: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699036));
  fn2_1bc620(c);
  /* aaa9c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aaaa0: bl #0x9af00 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699044));
  fn2_9af00(c);
  /* aaaa4: bl #0xb8ac0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699048));
  fn2_b8ac0(c);
  /* aaaa8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aaaac: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* aaab0: add x1, x1, #0xb5e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2910)));
  /* aaab4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aaab8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* aaabc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699072));
  fn2_1b8fd4(c);
  /* aaac0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaac4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* aaac8: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699084));
  fn2_1bc44c(c);
  /* aaacc: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aaad0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aaad4: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* aaad8: str x21, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 21));
  /* aaadc: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699104));
  fn2_221204(c);
  /* aaae0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaae4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699112));
  fn2_1bc620(c);
  /* aaae8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aaaec: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699120));
  fn2_1d2d24(c);
  /* aaaf0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaaf4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* aaaf8: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699132));
  fn2_1bc25c(c);
  /* aaafc: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* aab00: add x1, x1, #0x134 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(308)));
  /* aab04: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aab08: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699148));
  fn2_1b7d24(c);
  /* aab0c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aab10: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* aab14: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699160));
  fn2_1bc2f8(c);
  /* aab18: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aab1c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699168));
  fn2_1ccd9c(c);
  /* aab20: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* aab24: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aab28: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699180));
  fn2_1bbfa0(c);
  /* aab2c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aab30: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699188));
  fn2_1bcf04(c);
  /* aab34: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aab38: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699196));
  fn2_1bc620(c);
  /* aab3c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aab40: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699204));
  fn2_1bc620(c);
  /* aab44: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* aab48: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* aab4c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aab50: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699220));
  fn2_1b7d24(c);
  /* aab54: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aab58: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aab5c: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aab60: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699236));
  fn2_1bc2f8(c);
  /* aab64: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aab68: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699244));
  fn2_1ccd9c(c);
  /* aab6c: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* aab70: add x1, x1, #0xf36 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3894)));
  /* aab74: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aab78: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699260));
  fn2_1b7d24(c);
  /* aab7c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aab80: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* aab84: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699272));
  fn2_1bc2f8(c);
  /* aab88: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aab8c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699280));
  fn2_1ccd9c(c);
  /* aab90: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* aab94: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aab98: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699292));
  fn2_1bbfa0(c);
  /* aab9c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaba0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699300));
  fn2_1bcf04(c);
  /* aaba4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aaba8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699308));
  fn2_1bc620(c);
  /* aabac: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aabb0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699316));
  fn2_1bc620(c);
  /* aabb4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aabb8: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* aabbc: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699328));
  fn2_1bc530(c);
  /* aabc0: str x20, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 20));
  /* aabc4: b #0xaad64 */
  goto L_aad64;
L_aabc8:;
  /* aabc8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aabcc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699344));
  fn2_1bc620(c);
L_aabd0:;
  /* aabd0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aabd4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* aabd8: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699356));
  fn2_1bc25c(c);
  /* aabdc: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* aabe0: add x1, x1, #0x134 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(308)));
  /* aabe4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aabe8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699372));
  fn2_1b7d24(c);
  /* aabec: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aabf0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* aabf4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699384));
  fn2_1bc2f8(c);
  /* aabf8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aabfc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699392));
  fn2_1ccd9c(c);
  /* aac00: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* aac04: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aac08: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699404));
  fn2_1bbfa0(c);
  /* aac0c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aac10: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699412));
  fn2_1bcf04(c);
  /* aac14: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aac18: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699420));
  fn2_1bc620(c);
  /* aac1c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aac20: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699428));
  fn2_1bc620(c);
  /* aac24: adrp x20, #0x26000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(155648)));
  /* aac28: add x20, x20, #0xf36 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3894)));
  /* aac2c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aac30: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* aac34: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699448));
  fn2_1b7d24(c);
  /* aac38: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aac3c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aac40: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699460));
  fn2_1bc2f8(c);
  /* aac44: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aac48: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699468));
  fn2_1ccd9c(c);
  /* aac4c: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* aac50: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aac54: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699480));
  fn2_1bbfa0(c);
  /* aac58: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* aac5c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699488));
  fn2_1bc84c(c);
  /* aac60: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aac64: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* aac68: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699500));
  fn2_1bc2f8(c);
  /* aac6c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* aac70: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* aac74: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699512));
  fn2_1b7d24(c);
  /* aac78: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aac7c: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* aac80: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699524));
  fn2_1bc2f8(c);
  /* aac84: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* aac88: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699532));
  fn2_1ccd9c(c);
  /* aac8c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* aac90: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* aac94: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699544));
  fn2_1bbfa0(c);
  /* aac98: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aac9c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699552));
  fn2_1bcf04(c);
  /* aaca0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aaca4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699560));
  fn2_1bc620(c);
  /* aaca8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aacac: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699568));
  fn2_1bc620(c);
  /* aacb0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* aacb4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699576));
  fn2_1ccd9c(c);
  /* aacb8: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aacbc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699584));
  fn2_1bc620(c);
  /* aacc0: adrp x20, #0x1b000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(110592)));
  /* aacc4: add x20, x20, #0xf26 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3878)));
  /* aacc8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aaccc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* aacd0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699604));
  fn2_1b7d24(c);
  /* aacd4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aacd8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aacdc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699616));
  fn2_1bc2f8(c);
  /* aace0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aace4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699624));
  fn2_1ccd9c(c);
  /* aace8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* aacec: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* aacf0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699636));
  fn2_1bbfa0(c);
  /* aacf4: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699640));
  fn2_1bc668(c);
  /* aacf8: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* aacfc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aad00: sub x21, x29, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aad04: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699656));
  fn2_1bc290(c);
  /* aad08: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* aad0c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* aad10: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699668));
  fn2_1b7d24(c);
  /* aad14: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aad18: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* aad1c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699680));
  fn2_1bc2f8(c);
  /* aad20: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* aad24: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699688));
  fn2_1ccd9c(c);
  /* aad28: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* aad2c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* aad30: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699700));
  fn2_1bbfa0(c);
  /* aad34: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aad38: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699708));
  fn2_1bcf04(c);
  /* aad3c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* aad40: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699716));
  fn2_1bc620(c);
  /* aad44: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aad48: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699724));
  fn2_1bc620(c);
  /* aad4c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aad50: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699732));
  fn2_1bc620(c);
  /* aad54: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aad58: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* aad5c: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699744));
  fn2_1bc530(c);
  /* aad60: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
L_aad64:;
  /* aad64: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* aad68: add x20, sp, #0x28 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(40)));
  /* aad6c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699760));
  fn2_1bc084(c);
  /* aad70: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* aad74: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* aad78: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* aad7c: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* aad80: add x2, sp, #0x28 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(40)));
  /* aad84: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* aad88: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* aad8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699792));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* aad90: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* aad94: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699800));
  fn2_1bc620(c);
  /* aad98: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aad9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699808));
  fn2_1bc620(c);
  /* aada0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* aada4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699816));
  fn2_1d97fc(c);
  /* aada8: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* aadac: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(699824));
  fn2_1d97fc(c);
  /* aadb0: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aadb4: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aadb8: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aadbc: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* aadc0: ret  */
  return;
}

void fn2_abc0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076559372));
  /* abc0c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* abc10: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* abc14: ret  */
  return;
}

void fn2_ac790(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076562320));
  /* ac790: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* ac794: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* ac798: ret  */
  return;
}

void fn2_ad2a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076565152));
  /* ad2a0: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* ad2a4: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* ad2a8: ret  */
  return;
}

void fn2_ade2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076568108));
  /* ade2c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ade30: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ade34: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ade38: add x8, x8, #0xce8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3304)));
  /* ade3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ade40: tbnz w8, #0, #0xade70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ade70;
  /* ade44: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ade48: add x0, x0, #0xce8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3304)));
  /* ade4c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(712272));
  fn2_24b710(c);
  /* ade50: cbz w0, #0xade70 */
  if ((ARC_W_R(c, 0)) == 0) goto L_ade70;
  /* ade54: nop  */
  /* nop: no architectural effect here */
  /* ade58: adr x0, #0xaff04 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(720644)));
  /* ade5c: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(712288));
  fn2_1aff64(c);
  /* ade60: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ade64: add x0, x0, #0xce8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3304)));
  /* ade68: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ade6c: b #0x24b720 */
  fn2_24b720(c); return;
L_ade70:;
  /* ade70: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ade74: ret  */
  return;
}

void fn2_ae964(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076570980));
  /* ae964: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* ae968: strb w8, [x0, #0x43] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(67)), ARC_W_R(c, 8));
  /* ae96c: ret  */
  return;
}

void fn2_aeffc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076572668));
  /* aeffc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* af000: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* af004: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* af008: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* af00c: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* af010: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* af014: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* af018: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* af01c: cbz x0, #0xaf04c */
  if ((ARC_X_R(c, 0)) == 0) goto L_af04c;
L_af020:;
  /* af020: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* af024: cbz x1, #0xaf03c */
  if ((ARC_X_R(c, 1)) == 0) goto L_af03c;
  /* af028: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716844));
  fn2_aeb74(c);
  /* af02c: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af030: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* af034: cbnz w8, #0xaf020 */
  if ((ARC_W_R(c, 8)) != 0) goto L_af020;
  /* af038: b #0xaf044 */
  goto L_af044;
L_af03c:;
  /* af03c: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* af040: cbnz w8, #0xaf05c */
  if ((ARC_W_R(c, 8)) != 0) goto L_af05c;
L_af044:;
  /* af044: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* af048: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716876));
  fn2_1b5ce8(c);
L_af04c:;
  /* af04c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* af050: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* af054: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* af058: b #0x24b730 */
  fn2_24b730(c); return;
L_af05c:;
  /* af05c: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* af060: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* af064: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* af068: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* af06c: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* af070: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* af074: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* af078: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* af07c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* af080: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(716932));
  fn2_1b54b0(c);
  /* af084: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* af088: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* af08c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* af090: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_afefc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076576508));
  /* afefc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* aff00: ret  */
  return;
}

void fn2_b0954(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076579156));
  /* b0954: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0958: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b095c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0960: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* b0964: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* b0968: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* b096c: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* b0970: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(723316));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0974: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b0978: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b097c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0980: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0984: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_b16a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076582560));
  /* b16a0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b16a4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b16a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b16ac: ldp x9, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b16b0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* b16b4: add x0, x1, x8, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* b16b8: tbz w8, #0, #0xb16c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b16c4;
  /* b16bc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b16c0: ldr x9, [x8, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
L_b16c4:;
  /* b16c4: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b16c8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(726732));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* b16cc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b16d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b16d4: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(726744));
  fn2_1d06b8(c);
  /* b16d8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b16dc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(726752));
  fn2_1ccd9c(c);
  /* b16e0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b16e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b16e8: ret  */
  return;
}

void fn2_b2764(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076586852));
  /* b2764: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2768: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b276c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2770: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b2774: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731000));
  fn2_1b6040(c);
  /* b2778: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b277c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b2780: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2784: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b3a74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076591732));
  /* b3a74: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* b3a78: ret  */
  return;
}

void fn2_b4f38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076597048));
  /* b4f38: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b4f3c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b4f40: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b4f44: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b4f48: ldp x20, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b4f4c: add x19, x1, x8, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* b4f50: tbz w8, #0, #0xb4f5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b4f5c;
  /* b4f54: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b4f58: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_b4f5c:;
  /* b4f5c: ldr x1, [x2] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 2)));
  /* b4f60: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b4f64: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(741224));
  fn2_1bc0b8(c);
  /* b4f68: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b4f6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b4f70: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(741236));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* b4f74: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b4f78: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(741244));
  fn2_1bc620(c);
  /* b4f7c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b4f80: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b4f84: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b4f88: ret  */
  return;
}

void fn2_b616c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076601708));
  /* b616c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6170: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b6174: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6178: ldp x9, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b617c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* b6180: add x0, x1, x8, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* b6184: tbz w8, #0, #0xb6190 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b6190;
  /* b6188: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b618c: ldr x9, [x8, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
L_b6190:;
  /* b6190: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b6194: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(745880));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* b6198: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b619c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b61a0: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(745892));
  fn2_1dc718(c);
  /* b61a4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b61a8: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(745900));
  fn2_1db788(c);
  /* b61ac: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b61b0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b61b4: ret  */
  return;
}

void fn2_b7168(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076605800));
  /* b7168: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* b716c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7170: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7174: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* b7178: ldp x20, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b717c: add x19, x1, x8, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* b7180: tbz w8, #0, #0xb718c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b718c;
  /* b7184: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* b7188: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_b718c:;
  /* b718c: ldr x1, [x2] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 2)));
  /* b7190: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b7194: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749976));
  fn2_1d9754(c);
  /* b7198: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b719c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b71a0: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749988));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* b71a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b71a8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(749996));
  fn2_1d97fc(c);
  /* b71ac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b71b0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b71b4: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* b71b8: ret  */
  return;
}

void fn2_b82ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076610284));
  /* b82ec: adrp x0, #0x2c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(180224)));
  /* b82f0: add x0, x0, #0xde6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3558)));
  /* b82f4: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* b82f8: b #0x1b7d74 */
  fn2_1b7d74(c); return;
}

void fn2_bcbd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076628952));
  /* bcbd8: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* bcbdc: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* bcbe0: ret  */
  return;
}

void fn2_bd368(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076630888));
  /* bd368: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* bd36c: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* bd370: ret  */
  return;
}

void fn2_bdc34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076633140));
  /* bdc34: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* bdc38: cbz x0, #0xbdc6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bdc6c;
  /* bdc3c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bdc40: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bdc44: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* bdc48: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* bdc4c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* bdc50: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(777300));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* bdc54: cbz x0, #0xbdc64 */
  if ((ARC_X_R(c, 0)) == 0) goto L_bdc64;
  /* bdc58: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(777308));
  fn2_1b62dc(c);
  /* bdc5c: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* bdc60: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
L_bdc64:;
  /* bdc64: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdc68: ret  */
  return;
L_bdc6c:;
  /* bdc6c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bdc70: ret  */
  return;
}

void fn2_becb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076637364));
  /* becb4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* becb8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* becbc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* becc0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* becc4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* becc8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* beccc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* becd0: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* becd4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* becd8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781532));
  fn2_1bc084(c);
  /* becdc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* bece0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* bece4: mov w0, #0x68 */
  ARC_W_W(c, 0, UINT64_C(104));
  /* bece8: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* becec: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781552));
  fn2_1b5d1c(c);
  /* becf0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* becf4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* becf8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* becfc: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* bed00: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* bed04: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* bed08: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* bed0c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781584));
  fn2_1d2c2c(c);
  /* bed10: add x0, x21, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(20)));
  /* bed14: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781592));
  fn2_1d2c2c(c);
  /* bed18: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* bed1c: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* bed20: add x8, x8, #0xd48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3400)));
  /* bed24: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bed28: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* bed2c: stur xzr, [x21, #0x1c] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(28)), ARC_X_R(c, 31));
  /* bed30: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* bed34: stp xzr, x22, [x21, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* bed38: mov w22, #2 */
  ARC_W_W(c, 22, UINT64_C(2));
  /* bed3c: stur q0, [x21, #0x28] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* bed40: stur q0, [x21, #0x38] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* bed44: stur q0, [x21, #0x48] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* bed48: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781644));
  fn2_1b5e68(c);
  /* bed4c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bed50: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* bed54: str w22, [x21, #0x1c] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(28)), ARC_W_R(c, 22));
  /* bed58: bl #0x1b5d94 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781660));
  fn2_1b5d94(c);
  /* bed5c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bed60: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* bed64: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781672));
  fn2_1b5d9c(c);
  /* bed68: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* bed6c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* bed70: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781684));
  fn2_1d2c40(c);
  /* bed74: add x0, x21, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(20)));
  /* bed78: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* bed7c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781696));
  fn2_1d5dc0(c);
  /* bed80: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* bed84: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781704));
  fn2_1d2d24(c);
  /* bed88: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* bed8c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* bed90: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* bed94: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* bed98: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* bed9c: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781728));
  fn2_1b0eac(c);
  /* beda0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* beda4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* beda8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(781740));
  fn2_1bc620(c);
  /* bedac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bedb0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bedb4: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* bedb8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bedbc: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* bedc0: ret  */
  return;
}

void fn2_bf85c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076640348));
  /* bf85c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf860: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* bf864: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bf868: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bf86c: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* bf870: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* bf874: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* bf878: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* bf87c: cbz x0, #0xbf8ac */
  if ((ARC_X_R(c, 0)) == 0) goto L_bf8ac;
L_bf880:;
  /* bf880: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* bf884: cbz x1, #0xbf89c */
  if ((ARC_X_R(c, 1)) == 0) goto L_bf89c;
  /* bf888: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(784524));
  fn2_aeb74(c);
  /* bf88c: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* bf890: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* bf894: cbnz w8, #0xbf880 */
  if ((ARC_W_R(c, 8)) != 0) goto L_bf880;
  /* bf898: b #0xbf8a4 */
  goto L_bf8a4;
L_bf89c:;
  /* bf89c: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* bf8a0: cbnz w8, #0xbf8bc */
  if ((ARC_W_R(c, 8)) != 0) goto L_bf8bc;
L_bf8a4:;
  /* bf8a4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* bf8a8: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(784556));
  fn2_1b5ce8(c);
L_bf8ac:;
  /* bf8ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bf8b0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bf8b4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf8b8: b #0x24b730 */
  fn2_24b730(c); return;
L_bf8bc:;
  /* bf8bc: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* bf8c0: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* bf8c4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* bf8c8: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* bf8cc: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* bf8d0: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* bf8d4: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* bf8d8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* bf8dc: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* bf8e0: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(784612));
  fn2_1b54b0(c);
  /* bf8e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* bf8e8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* bf8ec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bf8f0: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_c02b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076643000));
  /* c02b8: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* c02bc: ret  */
  return;
}

void fn2_c0dcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076645836));
  /* c0dcc: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* c0dd0: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c0dd4: stp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c0dd8: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c0ddc: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c0de0: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c0de4: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* c0de8: ldp x9, x8, [x5] */
  { const uint64_t _pa = ARC_X_R(c, 5);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* c0dec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* c0df0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c0df4: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* c0df8: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* c0dfc: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* c0e00: mov w24, w2 */
  ARC_W_W(c, 24, ARC_W_R(c, 2));
  /* c0e04: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* c0e08: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* c0e0c: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* c0e10: mov x25, sp */
  ARC_X_W(c, 25, (c)->sp);
  /* c0e14: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* c0e18: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* c0e1c: mul x26, x8, x9 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* c0e20: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790052));
  fn2_1bc084(c);
  /* c0e24: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* c0e28: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790060));
  fn2_1bc084(c);
  /* c0e2c: add x0, x25, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(48)));
  /* c0e30: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790068));
  fn2_1bc084(c);
  /* c0e34: cmp w24, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(0));
  /* c0e38: b.le #0xc0eb0 */
  if (ARC_COND(c, 13)) goto L_c0eb0;
  /* c0e3c: ldr x1, [x23] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 23)));
  /* c0e40: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0e44: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790088));
  fn2_1bc09c(c);
  /* c0e48: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c0e4c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0e50: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790100));
  fn2_1bcf04(c);
  /* c0e54: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0e58: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790108));
  fn2_1bc620(c);
  /* c0e5c: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* c0e60: b.eq #0xc0ecc */
  if (ARC_COND(c, 0)) goto L_c0ecc;
  /* c0e64: ldr x1, [x23, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* c0e68: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0e6c: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790128));
  fn2_1bc09c(c);
  /* c0e70: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* c0e74: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0e78: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790140));
  fn2_1bcf04(c);
  /* c0e7c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0e80: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790148));
  fn2_1bc620(c);
  /* c0e84: cmp w24, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(2));
  /* c0e88: b.ls #0xc0ee8 */
  if (ARC_COND(c, 9)) goto L_c0ee8;
  /* c0e8c: ldr x1, [x23, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* c0e90: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0e94: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790168));
  fn2_1bc09c(c);
  /* c0e98: add x0, x25, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(48)));
  /* c0e9c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0ea0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790180));
  fn2_1bcf04(c);
  /* c0ea4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0ea8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790188));
  fn2_1bc620(c);
  /* c0eac: b #0xc0f04 */
  goto L_c0f04;
L_c0eb0:;
  /* c0eb0: sub w8, w26, #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) - UINT64_C(3)));
  /* c0eb4: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* c0eb8: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* c0ebc: nop  */
  /* nop: no architectural effect here */
  /* c0ec0: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* c0ec4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c0ec8: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790220));
  fn2_1bce10(c);
L_c0ecc:;
  /* c0ecc: sub w8, w26, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) - UINT64_C(2)));
  /* c0ed0: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* c0ed4: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* c0ed8: nop  */
  /* nop: no architectural effect here */
  /* c0edc: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* c0ee0: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* c0ee4: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790248));
  fn2_1bce10(c);
L_c0ee8:;
  /* c0ee8: sub w8, w26, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 26) - UINT64_C(1)));
  /* c0eec: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* c0ef0: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* c0ef4: nop  */
  /* nop: no architectural effect here */
  /* c0ef8: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* c0efc: add x0, x25, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(48)));
  /* c0f00: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790276));
  fn2_1bce10(c);
L_c0f04:;
  /* c0f04: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* c0f08: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c0f0c: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* c0f10: mov x21, sp */
  ARC_X_W(c, 21, (c)->sp);
  /* c0f14: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790296));
  fn2_1bc84c(c);
  /* c0f18: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* c0f1c: add x0, x25, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(24)));
  /* c0f20: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790308));
  fn2_1bc84c(c);
  /* c0f24: add x0, x25, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(48)));
  /* c0f28: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790316));
  fn2_1bc668(c);
  /* c0f2c: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* c0f30: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* c0f34: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* c0f38: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790332));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* c0f3c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* c0f40: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0f44: and w1, w8, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c0f48: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790348));
  fn2_1bc25c(c);
  /* c0f4c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0f50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c0f54: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790360));
  fn2_1bcf04(c);
  /* c0f58: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c0f5c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790368));
  fn2_1bc620(c);
  /* c0f60: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* c0f64: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790376));
  fn2_1ccd9c(c);
  /* c0f68: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* c0f6c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790384));
  fn2_1ccd9c(c);
  /* c0f70: add x0, x21, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(48)));
  /* c0f74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790392));
  fn2_1bc620(c);
  /* c0f78: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* c0f7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790400));
  fn2_1bc620(c);
  /* c0f80: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c0f84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(790408));
  fn2_1bc620(c);
  /* c0f88: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c0f8c: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c0f90: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c0f94: ldp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c0f98: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c0f9c: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* c0fa0: ret  */
  return;
}

void fn2_c269c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076652188));
  /* c269c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c26a0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* c26a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c26a8: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* c26ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c26b0: ldr x9, [x8, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* c26b4: cmp x9, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* c26b8: adrp x9, #0x251000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2428928)));
  /* c26bc: add x9, x9, #0xe68 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3688)));
  /* c26c0: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* c26c4: b.ne #0xc26cc */
  if (ARC_COND(c, 1)) goto L_c26cc;
  /* c26c8: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
L_c26cc:;
  /* c26cc: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* c26d0: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(796372));
  fn2_1db788(c);
  /* c26d4: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* c26d8: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* c26dc: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* c26e0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* c26e4: cbz x0, #0xc270c */
  if ((ARC_X_R(c, 0)) == 0) goto L_c270c;
L_c26e8:;
  /* c26e8: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* c26ec: cbz x1, #0xc2718 */
  if ((ARC_X_R(c, 1)) == 0) goto L_c2718;
  /* c26f0: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(796404));
  fn2_aeb74(c);
  /* c26f4: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* c26f8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* c26fc: cbnz w8, #0xc26e8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_c26e8;
  /* c2700: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* c2704: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(796424));
  fn2_1b5ce8(c);
  /* c2708: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
L_c270c:;
  /* c270c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c2710: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c2714: ret  */
  return;
L_c2718:;
  /* c2718: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* c271c: cbnz w8, #0xc2730 */
  if ((ARC_W_R(c, 8)) != 0) goto L_c2730;
  /* c2720: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* c2724: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c2728: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c272c: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_c2730:;
  /* c2730: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* c2734: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* c2738: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* c273c: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* c2740: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* c2744: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* c2748: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* c274c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* c2750: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* c2754: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c2758: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c275c: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_c6034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076666932));
  /* c6034: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c6038: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* c603c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c6040: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* c6044: add x8, x8, #0xf20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3872)));
  /* c6048: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c604c: str x8, [x0], #0x20 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* c6050: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(811092));
  fn2_1d79fc(c);
  /* c6054: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c6058: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* c605c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c6060: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_c7334(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076671796));
  /* c7334: add x1, x0, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* c7338: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* c733c: b #0x1db4b8 */
  fn2_1db4b8(c); return;
}

void fn2_c82e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076675808));
  /* c82e0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c82e4: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c82e8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c82ec: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c82f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c82f4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* c82f8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* c82fc: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* c8300: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* c8304: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* c8308: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* c830c: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* c8310: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(819988));
  fn2_1bc084(c);
  /* c8314: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* c8318: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* c831c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* c8320: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* c8324: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* c8328: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* c832c: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* c8330: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c8334: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c8338: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c833c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c8340: b #0xc83ac */
  fn2_c83ac(c); return;
}

void fn2_c9730(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076681008));
  /* c9730: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* c9734: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c9738: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c973c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* c9740: bl #0x1a4108 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825156));
  fn2_1a4108(c);
  /* c9744: tbz w0, #0, #0xc9768 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_c9768;
  /* c9748: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* c974c: ldr x8, [x8, #0xfa0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4000))));
  /* c9750: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* c9754: cbz x0, #0xc979c */
  if ((ARC_X_R(c, 0)) == 0) goto L_c979c;
  /* c9758: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c975c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c9760: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* c9764: b #0x1a4c08 */
  fn2_1a4c08(c); return;
L_c9768:;
  /* c9768: bl #0xc96a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825196));
  fn2_c96a4(c);
  /* c976c: cbz x0, #0xc979c */
  if ((ARC_X_R(c, 0)) == 0) goto L_c979c;
  /* c9770: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c9774: bl #0x21a330 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825208));
  fn2_21a330(c);
  /* c9778: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* c977c: bl #0x21cd58 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825216));
  fn2_21cd58(c);
  /* c9780: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* c9784: add x1, x1, #0xbf0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3056)));
  /* c9788: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* c978c: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825232));
  fn2_1b865c(c);
  /* c9790: tbz w0, #0, #0xc97b0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_c97b0;
  /* c9794: mov w19, #1 */
  ARC_W_W(c, 19, UINT64_C(1));
  /* c9798: b #0xc9810 */
  goto L_c9810;
L_c979c:;
  /* c979c: and w0, wzr, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 31) & UINT64_C(1)));
  /* c97a0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c97a4: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c97a8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* c97ac: ret  */
  return;
L_c97b0:;
  /* c97b0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* c97b4: add x1, x1, #0x3bd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(957)));
  /* c97b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c97bc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* c97c0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825284));
  fn2_1b8fd4(c);
  /* c97c4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c97c8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* c97cc: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c97d0: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825300));
  fn2_1bc44c(c);
  /* c97d4: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* c97d8: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* c97dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c97e0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* c97e4: stur x20, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 20));
  /* c97e8: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825324));
  fn2_221308(c);
  /* c97ec: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* c97f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825332));
  fn2_1bc620(c);
  /* c97f4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* c97f8: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825340));
  fn2_1bc630(c);
  /* c97fc: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* c9800: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* c9804: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825352));
  fn2_1bc620(c);
  /* c9808: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c980c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825360));
  fn2_1d2d24(c);
L_c9810:;
  /* c9810: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* c9814: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(825368));
  fn2_1ccd9c(c);
  /* c9818: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* c981c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c9820: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c9824: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* c9828: ret  */
  return;
}

void fn2_cc6dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076693212));
  /* cc6dc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* cc6e0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* cc6e4: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* cc6e8: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_cd6bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076697276));
  /* cd6bc: lsr x8, x0, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* cd6c0: eor w0, w8, w0 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) ^ ARC_W_R(c, 0)));
  /* cd6c4: ret  */
  return;
}

void fn2_cdea0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076699296));
  /* cdea0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cdea4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* cdea8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* cdeac: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* cdeb0: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* cdeb4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* cdeb8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* cdebc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(843456));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* cdec0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* cdec4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* cdec8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* cdecc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cded0: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_cf08c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076703884));
  /* cf08c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* cf090: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cf094: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* cf098: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cf09c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* cf0a0: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* cf0a4: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* cf0a8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* cf0ac: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* cf0b0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848052));
  fn2_1d2c2c(c);
  /* cf0b4: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* cf0b8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848060));
  fn2_1d2c2c(c);
  /* cf0bc: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* cf0c0: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* cf0c4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848072));
  fn2_1ccc74(c);
  /* cf0c8: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* cf0cc: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* cf0d0: cbz w20, #0xcf16c */
  if ((ARC_W_R(c, 20)) == 0) goto L_cf16c;
  /* cf0d4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* cf0d8: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* cf0dc: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* cf0e0: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* cf0e4: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* cf0e8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848108));
  fn2_1d2c2c(c);
  /* cf0ec: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* cf0f0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848116));
  fn2_1d2c2c(c);
  /* cf0f4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* cf0f8: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* cf0fc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848128));
  fn2_1ccc74(c);
  /* cf100: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* cf104: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* cf108: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* cf10c: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* cf110: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* cf114: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848152));
  fn2_1d2b98(c);
  /* cf118: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* cf11c: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* cf120: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848164));
  fn2_1d2b98(c);
  /* cf124: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* cf128: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* cf12c: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* cf130: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* cf134: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848184));
  fn2_1d0708(c);
  /* cf138: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* cf13c: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* cf140: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* cf144: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848200));
  fn2_1ccd9c(c);
  /* cf148: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* cf14c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848208));
  fn2_1d2d24(c);
  /* cf150: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* cf154: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848216));
  fn2_1d2d24(c);
  /* cf158: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cf15c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* cf160: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cf164: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* cf168: ret  */
  return;
L_cf16c:;
  /* cf16c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* cf170: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* cf174: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* cf178: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* cf17c: bl #0xb4020 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(848256));
  fn2_b4020(c);
  /* cf180: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cf184: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* cf188: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cf18c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* cf190: ret  */
  return;
}

void fn2_d0764(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076709732));
  /* d0764: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d0768: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* d076c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d0770: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d0774: cbz x1, #0xd0790 */
  if ((ARC_X_R(c, 1)) == 0) goto L_d0790;
  /* d0778: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d077c: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(853888));
  fn2_220748(c);
  /* d0780: str x0, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 0));
  /* d0784: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d0788: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d078c: ret  */
  return;
L_d0790:;
  /* d0790: str xzr, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 31));
  /* d0794: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* d0798: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d079c: ret  */
  return;
}

void fn2_d50e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076728544));
  /* d50e0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* d50e4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d50e8: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* d50ec: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* d50f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d50f4: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* d50f8: add x1, x1, #0x70d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1805)));
  /* d50fc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d5100: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d5104: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872712));
  fn2_1b8fd4(c);
  /* d5108: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* d510c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d5110: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d5114: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872728));
  fn2_21fe38(c);
  /* d5118: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d511c: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872736));
  fn2_1bcc90(c);
  /* d5120: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* d5124: b.eq #0xd5158 */
  if (ARC_COND(c, 0)) goto L_d5158;
  /* d5128: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* d512c: b.eq #0xd5144 */
  if (ARC_COND(c, 0)) goto L_d5144;
  /* d5130: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* d5134: b.ne #0xd516c */
  if (ARC_COND(c, 1)) goto L_d516c;
  /* d5138: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d513c: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872768));
  fn2_1bc630(c);
  /* d5140: b #0xd5174 */
  goto L_d5174;
L_d5144:;
  /* d5144: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d5148: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872780));
  fn2_1bc668(c);
  /* d514c: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* d5150: cset w19, ne */
  ARC_W_W(c, 19, (ARC_COND(c, 1) ? 1 : 0));
  /* d5154: b #0xd5178 */
  goto L_d5178;
L_d5158:;
  /* d5158: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d515c: bl #0x1bc7e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872800));
  fn2_1bc7e8(c);
  /* d5160: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* d5164: cset w19, ne */
  ARC_W_W(c, 19, (ARC_COND(c, 1) ? 1 : 0));
  /* d5168: b #0xd5178 */
  goto L_d5178;
L_d516c:;
  /* d516c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d5170: bl #0x1bda04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872820));
  fn2_1bda04(c);
L_d5174:;
  /* d5174: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
L_d5178:;
  /* d5178: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d517c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872832));
  fn2_1bc620(c);
  /* d5180: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* d5184: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(872840));
  fn2_1d2d24(c);
  /* d5188: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* d518c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d5190: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* d5194: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* d5198: ret  */
  return;
}

void fn2_dae08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076752392));
  /* dae08: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dae0c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* dae10: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dae14: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* dae18: add x8, x8, #0x828 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2088)));
  /* dae1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dae20: str x8, [x0], #0x88 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(136));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* dae24: bl #0xdb254 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896552));
  fn2_db254(c);
  /* dae28: add x0, x19, #0x78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(120)));
  /* dae2c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896560));
  fn2_1d97fc(c);
  /* dae30: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* dae34: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896568));
  fn2_1d97fc(c);
  /* dae38: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* dae3c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896576));
  fn2_1d97fc(c);
  /* dae40: add x0, x19, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(64)));
  /* dae44: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896584));
  fn2_1d97fc(c);
  /* dae48: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* dae4c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896592));
  fn2_1d97fc(c);
  /* dae50: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* dae54: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896600));
  fn2_1d97fc(c);
  /* dae58: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* dae5c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896608));
  fn2_1d97fc(c);
  /* dae60: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* dae64: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* dae68: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* dae6c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* dae70: cbz x0, #0xdae98 */
  if ((ARC_X_R(c, 0)) == 0) goto L_dae98;
L_dae74:;
  /* dae74: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* dae78: cbz x1, #0xdaea4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_daea4;
  /* dae7c: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896640));
  fn2_aeb74(c);
  /* dae80: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* dae84: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* dae88: cbnz w8, #0xdae74 */
  if ((ARC_W_R(c, 8)) != 0) goto L_dae74;
  /* dae8c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* dae90: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(896660));
  fn2_1b5ce8(c);
  /* dae94: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
L_dae98:;
  /* dae98: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* dae9c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* daea0: ret  */
  return;
L_daea4:;
  /* daea4: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* daea8: cbnz w8, #0xdaebc */
  if ((ARC_W_R(c, 8)) != 0) goto L_daebc;
  /* daeac: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* daeb0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* daeb4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* daeb8: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_daebc:;
  /* daebc: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* daec0: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* daec4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* daec8: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* daecc: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* daed0: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* daed4: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* daed8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* daedc: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* daee0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* daee4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* daee8: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_dc7e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076759016));
  /* dc7e8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* dc7ec: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc7f0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dc7f4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* dc7f8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* dc7fc: cbz w1, #0xdc8b8 */
  if ((ARC_W_R(c, 1)) == 0) goto L_dc8b8;
  /* dc800: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* dc804: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* dc808: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* dc80c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* dc810: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* dc814: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903192));
  fn2_1b8fd4(c);
  /* dc818: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* dc81c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* dc820: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903204));
  fn2_1b7d24(c);
  /* dc824: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* dc828: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* dc82c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* dc830: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903220));
  fn2_1b8fd4(c);
  /* dc834: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* dc838: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* dc83c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903232));
  fn2_1d2c2c(c);
  /* dc840: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* dc844: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903240));
  fn2_1d2c2c(c);
  /* dc848: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* dc84c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* dc850: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903252));
  fn2_1ccc74(c);
  /* dc854: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* dc858: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* dc85c: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* dc860: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* dc864: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* dc868: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* dc86c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903280));
  fn2_1d5dc0(c);
  /* dc870: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* dc874: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* dc878: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* dc87c: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903296));
  fn2_1d06b8(c);
  /* dc880: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* dc884: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* dc888: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* dc88c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903312));
  fn2_1d5dc0(c);
  /* dc890: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* dc894: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903320));
  fn2_1d2d24(c);
  /* dc898: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* dc89c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903328));
  fn2_1ccd9c(c);
  /* dc8a0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* dc8a4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903336));
  fn2_1d2d24(c);
  /* dc8a8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dc8ac: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc8b0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* dc8b4: ret  */
  return;
L_dc8b8:;
  /* dc8b8: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* dc8bc: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* dc8c0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903364));
  fn2_1d2c2c(c);
  /* dc8c4: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* dc8c8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903372));
  fn2_1d2c2c(c);
  /* dc8cc: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* dc8d0: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* dc8d4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903384));
  fn2_1ccc74(c);
  /* dc8d8: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* dc8dc: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* dc8e0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* dc8e4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* dc8e8: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* dc8ec: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* dc8f0: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(903412));
  fn2_b4168(c);
  /* dc8f4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dc8f8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc8fc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* dc900: ret  */
  return;
}

void fn2_ddb2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076763948));
  /* ddb2c: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* ddb30: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ddb34: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* ddb38: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ddb3c: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ddb40: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ddb44: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ddb48: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* ddb4c: ldp x28, x27, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ddb50: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ddb54: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ddb58: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* ddb5c: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* ddb60: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* ddb64: mov w26, w4 */
  ARC_W_W(c, 26, ARC_W_R(c, 4));
  /* ddb68: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* ddb6c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* ddb70: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ddb74: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908152));
  fn2_1bc084(c);
  /* ddb78: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* ddb7c: b.lt #0xddc20 */
  if (ARC_COND(c, 11)) goto L_ddc20;
  /* ddb80: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* ddb84: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ddb88: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908172));
  fn2_1bc09c(c);
  /* ddb8c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ddb90: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ddb94: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908184));
  fn2_1bcf04(c);
  /* ddb98: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ddb9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908192));
  fn2_1bc620(c);
  /* ddba0: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* ddba4: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* ddba8: tbz w22, #0, #0xddbb4 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_ddbb4;
L_ddbac:;
  /* ddbac: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* ddbb0: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_ddbb4:;
  /* ddbb4: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* ddbb8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ddbbc: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908224));
  fn2_1bccb8(c);
  /* ddbc0: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* ddbc4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ddbc8: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908236));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* ddbcc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* ddbd0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ddbd4: and w1, w8, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* ddbd8: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908252));
  fn2_1bc25c(c);
  /* ddbdc: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ddbe0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ddbe4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908264));
  fn2_1bcf04(c);
  /* ddbe8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ddbec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908272));
  fn2_1bc620(c);
  /* ddbf0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* ddbf4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908280));
  fn2_1d97fc(c);
  /* ddbf8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ddbfc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908288));
  fn2_1bc620(c);
  /* ddc00: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ddc04: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ddc08: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ddc0c: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ddc10: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ddc14: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ddc18: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* ddc1c: ret  */
  return;
L_ddc20:;
  /* ddc20: sub x8, x27, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) - ARC_X_R(c, 28)));
  /* ddc24: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* ddc28: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* ddc2c: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* ddc30: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* ddc34: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ddc38: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* ddc3c: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* ddc40: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* ddc44: nop  */
  /* nop: no architectural effect here */
  /* ddc48: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* ddc4c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(908368));
  fn2_1bce10(c);
  /* ddc50: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* ddc54: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* ddc58: tbnz w22, #0, #0xddbac */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_ddbac;
  /* ddc5c: b #0xddbb4 */
  goto L_ddbb4;
}

void fn2_defa0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076769184));
  /* defa0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* defa4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* defa8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* defac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* defb0: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(913332));
  fn2_1b6040(c);
  /* defb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* defb8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* defbc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* defc0: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_e2bac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076784556));
  /* e2bac: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e2bb0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2bb4: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* e2bb8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e2bbc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2bc0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e2bc4: ldp x22, x23, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e2bc8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e2bcc: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* e2bd0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e2bd4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e2bd8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(928732));
  fn2_1bc084(c);
  /* e2bdc: add x0, x21, x23, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> 1))));
  /* e2be0: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* e2be4: tbz w23, #0, #0xe2bf0 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_e2bf0;
  /* e2be8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e2bec: ldr x22, [x8, x22] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 22))));
L_e2bf0:;
  /* e2bf0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(928756));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* e2bf4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e2bf8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(928764));
  fn2_1bc620(c);
  /* e2bfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e2c00: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(928772));
  fn2_1bc084(c);
  /* e2c04: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2c08: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* e2c0c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2c10: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2c14: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e2c18: ret  */
  return;
}

void fn2_e4084(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076789892));
  /* e4084: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e4088: str d8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), (c)->q[8].u64[0]);
  /* e408c: stp x29, x30, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e4090: str x21, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 21));
  /* e4094: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e4098: add x29, sp, #0x38 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(56)));
  /* e409c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e40a0: ldr x0, [x0, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* e40a4: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* e40a8: bl #0x223204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934060));
  fn2_223204(c);
  /* e40ac: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* e40b0: b.lt #0xe4178 */
  if (ARC_COND(c, 11)) goto L_e4178;
  /* e40b4: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* e40b8: add x20, x20, #0xc5d */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3165)));
  /* e40bc: b #0xe40d8 */
  goto L_e40d8;
L_e40c0:;
  /* e40c0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e40c4: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934088));
  fn2_1dde08(c);
  /* e40c8: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e40cc: bl #0x223204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934096));
  fn2_223204(c);
  /* e40d0: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* e40d4: b.le #0xe4178 */
  if (ARC_COND(c, 13)) goto L_e4178;
L_e40d8:;
  /* e40d8: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e40dc: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e40e0: bl #0x222f2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934116));
  fn2_222f2c(c);
  /* e40e4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* e40e8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e40ec: bl #0x1de3b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934128));
  fn2_1de3b0(c);
  /* e40f0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e40f4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* e40f8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934140));
  fn2_1b7d24(c);
  /* e40fc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4100: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e4104: bl #0x1cf764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934152));
  fn2_1cf764(c);
  /* e4108: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* e410c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e4110: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934164));
  fn2_1ccd9c(c);
  /* e4114: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4118: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934172));
  fn2_1ccd9c(c);
  /* e411c: tbnz w21, #0, #0xe40c0 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_e40c0;
  /* e4120: ldr x21, [x19, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e4124: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* e4128: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e412c: bl #0x223b08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934192));
  fn2_223b08(c);
  /* e4130: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e4134: bl #0x223c0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934200));
  fn2_223c0c(c);
  /* e4138: mov w2, w0 */
  ARC_W_W(c, 2, ARC_W_R(c, 0));
  /* e413c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* e4140: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e4144: bl #0x223dc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934216));
  fn2_223dc4(c);
  /* e4148: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e414c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934224));
  fn2_1ccd9c(c);
  /* e4150: ldr x21, [x19, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e4154: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* e4158: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e415c: bl #0xe48ac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934240));
  fn2_e48ac(c);
  /* e4160: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* e4164: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e4168: bl #0x223030 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934252));
  fn2_223030(c);
  /* e416c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4170: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934260));
  fn2_1dde08(c);
  /* e4174: b #0xe40c0 */
  goto L_e40c0;
L_e4178:;
  /* e4178: ldrb w8, [x19, #0x61] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(97))));
  /* e417c: tbz w8, #0, #0xe4198 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e4198;
L_e4180:;
  /* e4180: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4184: ldr x21, [sp, #0x48] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(72))));
  /* e4188: ldp x29, x30, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e418c: ldr d8, [sp, #0x30] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* e4190: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e4194: ret  */
  return;
L_e4198:;
  /* e4198: adrp x21, #0x257000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2453504)));
  /* e419c: ldr x21, [x21, #0xfa8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(4008))));
  /* e41a0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* e41a4: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* e41a8: tbnz w8, #0, #0xe4180 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e4180;
  /* e41ac: ldr d0, [x19, #0x30] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* e41b0: fsub d0, d0, d8 */
  arc_d_w(c, 0, (double)(arc_fsub64(ARC_D_R(c, 0), ARC_D_R(c, 8))));
  /* e41b4: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* e41b8: str d0, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), (c)->q[0].u64[0]);
  /* e41bc: b.hi #0xe4180 */
  if (ARC_COND(c, 8)) goto L_e4180;
  /* e41c0: mov x8, #0x3ff0000000000000 */
  ARC_X_W(c, 8, UINT64_C(4607182418800017408));
  /* e41c4: ldr x20, [x19, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e41c8: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* e41cc: add x1, x1, #0x2d5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(725)));
  /* e41d0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e41d4: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* e41d8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934364));
  fn2_1b7d24(c);
  /* e41dc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* e41e0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e41e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e41e8: ldr w2, [x8, #0x20] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* e41ec: bl #0x223dc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934384));
  fn2_223dc4(c);
  /* e41f0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e41f4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934392));
  fn2_1ccd9c(c);
  /* e41f8: ldr x20, [x19, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* e41fc: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4200: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4204: bl #0xe48ac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934408));
  fn2_e48ac(c);
  /* e4208: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e420c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e4210: bl #0x223030 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934420));
  fn2_223030(c);
  /* e4214: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4218: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(934428));
  fn2_1dde08(c);
  /* e421c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4220: ldr x21, [sp, #0x48] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(72))));
  /* e4224: ldp x29, x30, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4228: ldr d8, [sp, #0x30] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* e422c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e4230: ret  */
  return;
}

void fn2_e6c34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076801076));
  /* e6c34: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6c38: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e6c3c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e6c40: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e6c44: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* e6c48: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* e6c4c: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* e6c50: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* e6c54: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(945240));
  fn2_1b5d1c(c);
  /* e6c58: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* e6c5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e6c60: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(945252));
  fn2_1afdf8(c);
  /* e6c64: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* e6c68: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e6c6c: ldr x8, [x8, #0x80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(128))));
  /* e6c70: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e6c74: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* e6c78: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e6c7c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6c80: ret  */
  return;
}

void fn2_e7c10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076805136));
  /* e7c10: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* e7c14: ldp x1, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* e7c18: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* e7c1c: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* e7c20: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e7c24: mov x2, x9 */
  ARC_X_W(c, 2, ARC_X_R(c, 9));
  /* e7c28: b #0xe7e54 */
  fn2_e7e54(c); return;
}

void fn2_eac18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076817432));
  /* eac18: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* eac1c: strb w8, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 8));
  /* eac20: ret  */
  return;
}

void fn2_ec5d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076824020));
  /* ec5d4: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* ec5d8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec5dc: str x21, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 21));
  /* ec5e0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec5e4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* ec5e8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* ec5ec: bl #0xec4b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968176));
  fn2_ec4b8(c);
  /* ec5f0: cbz x0, #0xec66c */
  if ((ARC_X_R(c, 0)) == 0) goto L_ec66c;
  /* ec5f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ec5f8: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* ec5fc: add x1, x1, #0xd8f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3471)));
  /* ec600: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ec604: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ec608: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968204));
  fn2_1b8fd4(c);
  /* ec60c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ec610: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ec614: sub x21, x29, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ec618: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968220));
  fn2_1bc44c(c);
  /* ec61c: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* ec620: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ec624: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ec628: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* ec62c: str x21, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 21));
  /* ec630: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968244));
  fn2_221308(c);
  /* ec634: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* ec638: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968252));
  fn2_1bc620(c);
  /* ec63c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ec640: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* ec644: bl #0x1bccc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968264));
  fn2_1bccc4(c);
  /* ec648: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* ec64c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968272));
  fn2_1bc620(c);
  /* ec650: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ec654: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(968280));
  fn2_1d2d24(c);
  /* ec658: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec65c: ldr x21, [sp, #0x50] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(80))));
  /* ec660: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec664: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* ec668: ret  */
  return;
L_ec66c:;
  /* ec66c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ec670: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec674: ldr x21, [sp, #0x50] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(80))));
  /* ec678: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec67c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* ec680: b #0x1db4a4 */
  fn2_1db4a4(c); return;
}

void fn2_f3a3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076853820));
  /* f3a3c: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* f3a40: str w8, [x0, #0x1c] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(28)), ARC_W_R(c, 8));
  /* f3a44: ret  */
  return;
}

void fn2_f4068(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076855400));
  /* f4068: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f406c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4070: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f4074: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f4078: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f407c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f4080: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* f4084: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* f4088: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f408c: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* f4090: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* f4094: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999576));
  fn2_1b5d1c(c);
  /* f4098: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* f409c: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* f40a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f40a4: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f40a8: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* f40ac: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* f40b0: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* f40b4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999608));
  fn2_1d2c2c(c);
  /* f40b8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f40bc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999616));
  fn2_1d2c2c(c);
  /* f40c0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* f40c4: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* f40c8: add x8, x8, #0x288 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(648)));
  /* f40cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f40d0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f40d4: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* f40d8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* f40dc: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f40e0: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* f40e4: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* f40e8: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* f40ec: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* f40f0: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999668));
  fn2_1b5e68(c);
  /* f40f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f40f8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f40fc: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* f4100: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999684));
  fn2_1b5d9c(c);
  /* f4104: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f4108: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* f410c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* f4110: tbz w8, #0, #0xf4150 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f4150;
L_f4114:;
  /* f4114: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f4118: add x1, x1, #0x140 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(320)));
  /* f411c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f4120: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999716));
  fn2_1d2c40(c);
  /* f4124: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f4128: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* f412c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999728));
  fn2_1d5dc0(c);
  /* f4130: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f4134: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999736));
  fn2_1d2d24(c);
  /* f4138: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f413c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f4140: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f4144: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4148: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f414c: ret  */
  return;
L_f4150:;
  /* f4150: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f4154: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f4158: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999772));
  fn2_24b710(c);
  /* f415c: cbz w0, #0xf4114 */
  if ((ARC_W_R(c, 0)) == 0) goto L_f4114;
  /* f4160: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f4164: add x20, x20, #0x140 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(320)));
  /* f4168: nop  */
  /* nop: no architectural effect here */
  /* f416c: adr x1, #0x365bc */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222652)));
  /* f4170: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f4174: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999800));
  fn2_1b907c(c);
  /* f4178: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* f417c: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* f4180: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* f4184: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* f4188: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f418c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999824));
  fn2_24b6f0(c);
  /* f4190: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f4194: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f4198: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(999836));
  fn2_24b720(c);
  /* f419c: b #0xf4114 */
  goto L_f4114;
}

void fn2_f51a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076859808));
  /* f51a0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f51a4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f51a8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f51ac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f51b0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f51b4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* f51b8: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* f51bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f51c0: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* f51c4: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* f51c8: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1003980));
  fn2_1b5d1c(c);
  /* f51cc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* f51d0: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* f51d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f51d8: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f51dc: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* f51e0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* f51e4: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* f51e8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004012));
  fn2_1d2c2c(c);
  /* f51ec: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f51f0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004020));
  fn2_1d2c2c(c);
  /* f51f4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* f51f8: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* f51fc: add x8, x8, #0xe08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3592)));
  /* f5200: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5204: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* f5208: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* f520c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* f5210: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5214: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* f5218: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* f521c: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* f5220: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* f5224: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004072));
  fn2_1b5e68(c);
  /* f5228: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f522c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f5230: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* f5234: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004088));
  fn2_1b5d9c(c);
  /* f5238: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f523c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f5240: bl #0x1b5d8c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004100));
  fn2_1b5d8c(c);
  /* f5244: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5248: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* f524c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* f5250: tbz w8, #0, #0xf528c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f528c;
L_f5254:;
  /* f5254: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5258: add x1, x1, #0x140 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(320)));
  /* f525c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f5260: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004132));
  fn2_1d2c40(c);
  /* f5264: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f5268: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f526c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004144));
  fn2_1d5dc0(c);
  /* f5270: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f5274: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004152));
  fn2_1d2d24(c);
  /* f5278: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f527c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f5280: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f5284: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5288: ret  */
  return;
L_f528c:;
  /* f528c: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5290: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f5294: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004184));
  fn2_24b710(c);
  /* f5298: cbz w0, #0xf5254 */
  if ((ARC_W_R(c, 0)) == 0) goto L_f5254;
  /* f529c: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f52a0: add x20, x20, #0x140 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(320)));
  /* f52a4: nop  */
  /* nop: no architectural effect here */
  /* f52a8: adr x1, #0x365bc */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222652)));
  /* f52ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f52b0: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004212));
  fn2_1b907c(c);
  /* f52b4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* f52b8: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* f52bc: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* f52c0: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* f52c4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f52c8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004236));
  fn2_24b6f0(c);
  /* f52cc: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f52d0: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f52d4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1004248));
  fn2_24b720(c);
  /* f52d8: b #0xf5254 */
  goto L_f5254;
}

void fn2_f6c10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076866576));
  /* f6c10: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* f6c14: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6c18: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f6c1c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f6c20: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6c24: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* f6c28: add x1, x1, #0x966 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2406)));
  /* f6c2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f6c30: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f6c34: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1010744));
  fn2_1b8fd4(c);
  /* f6c38: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* f6c3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6c40: bl #0x1afcfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1010756));
  fn2_1afcfc(c);
  /* f6c44: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f6c48: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1010764));
  fn2_1d2d24(c);
  /* f6c4c: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* f6c50: add x8, x8, #0x528 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1320)));
  /* f6c54: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* f6c58: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* f6c5c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* f6c60: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f6c64: mov w0, #0x238 */
  ARC_W_W(c, 0, UINT64_C(568));
  /* f6c68: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* f6c6c: str xzr, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 31));
  /* f6c70: str x19, [x8, #0x160] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(352)), ARC_X_R(c, 19));
  /* f6c74: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1010808));
  fn2_1b5d1c(c);
  /* f6c78: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f6c7c: bl #0xf6670 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1010816));
  fn2_f6670(c);
  /* f6c80: str x20, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 20));
  /* f6c84: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6c88: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6c8c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* f6c90: ret  */
  return;
}

void fn2_fd32c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076892972));
  /* fd32c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd330: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fd334: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fd338: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd33c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd340: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* fd344: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* fd348: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* fd34c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* fd350: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* fd354: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* fd358: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* fd35c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1037152));
  fn2_1bc084(c);
  /* fd360: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* fd364: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* fd368: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fd36c: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* fd370: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* fd374: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* fd378: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* fd37c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd380: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fd384: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fd388: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd38c: b #0xfd42c */
  fn2_fd42c(c); return;
}

void fn2_129074(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077072500));
  /* 129074: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 129078: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12907c: stp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 129080: stp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 129084: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 129088: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12908c: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* 129090: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 129094: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 129098: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 12909c: mov w1, w3 */
  ARC_W_W(c, 1, ARC_W_R(c, 3));
  /* 1290a0: mov w19, w6 */
  ARC_W_W(c, 19, ARC_W_R(c, 6));
  /* 1290a4: mov w20, w5 */
  ARC_W_W(c, 20, ARC_W_R(c, 5));
  /* 1290a8: mov w21, w4 */
  ARC_W_W(c, 21, ARC_W_R(c, 4));
  /* 1290ac: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 1290b0: add x26, sp, #0x28 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(40)));
  /* 1290b4: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216696));
  fn2_1bc25c(c);
  /* 1290b8: add x25, x26, #0x18 */
  ARC_X_W(c, 25, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 1290bc: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 1290c0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1290c4: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216712));
  fn2_1bc25c(c);
  /* 1290c8: add x21, x26, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 26) + UINT64_C(48)));
  /* 1290cc: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 1290d0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1290d4: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216728));
  fn2_1bc25c(c);
  /* 1290d8: add x20, x26, #0x48 */
  ARC_X_W(c, 20, (ARC_X_R(c, 26) + UINT64_C(72)));
  /* 1290dc: mov w1, w19 */
  ARC_W_W(c, 1, ARC_W_R(c, 19));
  /* 1290e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1290e4: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216744));
  fn2_1bc25c(c);
  /* 1290e8: add x0, x26, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(96)));
  /* 1290ec: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216752));
  fn2_1bc084(c);
  /* 1290f0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1290f4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1290f8: stp x26, x25, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1290fc: stp x21, x20, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 129100: bl #0x1306dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216772));
  fn2_1306dc(c);
  /* 129104: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 129108: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 12910c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 129110: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 129114: mov w4, #4 */
  ARC_W_W(c, 4, UINT64_C(4));
  /* 129118: bl #0x1b0eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216796));
  fn2_1b0eac(c);
  /* 12911c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 129120: add x0, x26, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(96)));
  /* 129124: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216808));
  fn2_1bc620(c);
  /* 129128: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12912c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216816));
  fn2_1bc620(c);
  /* 129130: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 129134: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216824));
  fn2_1bc620(c);
  /* 129138: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 12913c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216832));
  fn2_1bc620(c);
  /* 129140: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 129144: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1216840));
  fn2_1bc620(c);
  /* 129148: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12914c: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 129150: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 129154: ldp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 129158: ldp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 12915c: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 129160: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 129164: ret  */
  return;
}

void fn2_129964(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074788));
  /* 129964: ldrb w0, [x0, #0x88] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(136))));
  /* 129968: ret  */
  return;
}

void fn2_129aa4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075108));
  /* 129aa4: add x1, x0, #0xf8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(248)));
  /* 129aa8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129aac: b #0x1db4b8 */
  fn2_1db4b8(c); return;
}

void fn2_129be4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075428));
  /* 129be4: add x1, x0, #0x178 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(376)));
  /* 129be8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129bec: b #0x1d9754 */
  fn2_1d9754(c); return;
}

void fn2_129d24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075748));
  /* 129d24: ldrb w0, [x0, #0x1d5] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(469))));
  /* 129d28: ret  */
  return;
}

void fn2_129e64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076068));
  /* 129e64: add x1, x0, #0x250 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(592)));
  /* 129e68: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129e6c: b #0x1d9754 */
  fn2_1d9754(c); return;
}

void fn2_129fa4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076388));
  /* 129fa4: add x1, x0, #0x2e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(744)));
  /* 129fa8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129fac: b #0x1ccc88 */
  fn2_1ccc88(c); return;
}

void fn2_12a0e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076708));
  /* 12a0e4: ldr x0, [x0, #0x368] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(872))));
  /* 12a0e8: ret  */
  return;
}

void fn2_12a224(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077077028));
  /* 12a224: ldr x0, [x0, #0x3e8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1000))));
  /* 12a228: ret  */
  return;
}

void fn2_12a4dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077077724));
  /* 12a4dc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12a4e0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12a4e4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12a4e8: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12a4ec: add x8, x8, #0x1e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(488)));
  /* 12a4f0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12a4f4: tbz w8, #0, #0x12a514 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12a514;
L_12a4f8:;
  /* 12a4f8: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12a4fc: add x0, x0, #0x1e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(480)));
  /* 12a500: adrp x1, #0x253000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2437120)));
  /* 12a504: add x1, x1, #0xb98 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2968)));
  /* 12a508: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12a50c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12a510: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_12a514:;
  /* 12a514: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12a518: add x0, x0, #0x1e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(488)));
  /* 12a51c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1221920));
  fn2_24b710(c);
  /* 12a520: cbz w0, #0x12a4f8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12a4f8;
  /* 12a524: adrp x19, #0x25d000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12a528: add x19, x19, #0x1e0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(480)));
  /* 12a52c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12a530: add x1, x1, #0xd3e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3390)));
  /* 12a534: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12a538: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12a53c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1221952));
  fn2_1b8fd4(c);
  /* 12a540: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12a544: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 12a548: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 12a54c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 12a550: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 12a554: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1221976));
  fn2_24b6f0(c);
  /* 12a558: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12a55c: add x0, x0, #0x1e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(488)));
  /* 12a560: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1221988));
  fn2_24b720(c);
  /* 12a564: b #0x12a4f8 */
  goto L_12a4f8;
}

void fn2_12b0c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077080776));
  /* 12b0c8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 12b0cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12b0d0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12b0d4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12b0d8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12b0dc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 12b0e0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12b0e4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 12b0e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12b0ec: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 12b0f0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12b0f4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1224952));
  fn2_1b5d1c(c);
  /* 12b0f8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 12b0fc: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 12b100: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12b104: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 12b108: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 12b10c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12b110: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12b114: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1224984));
  fn2_1d2c2c(c);
  /* 12b118: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12b11c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1224992));
  fn2_1d2c2c(c);
  /* 12b120: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12b124: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* 12b128: add x8, x8, #0x1e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(480)));
  /* 12b12c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12b130: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12b134: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 12b138: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12b13c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12b140: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 12b144: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 12b148: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 12b14c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 12b150: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225044));
  fn2_1b5e68(c);
  /* 12b154: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 12b158: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b15c: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 12b160: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12b164: tbz w8, #0, #0x12b1a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12b1a4;
L_12b168:;
  /* 12b168: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b16c: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 12b170: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12b174: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225080));
  fn2_1d2c40(c);
  /* 12b178: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12b17c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 12b180: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225092));
  fn2_1d5dc0(c);
  /* 12b184: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12b188: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225100));
  fn2_1d2d24(c);
  /* 12b18c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12b190: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12b194: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12b198: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12b19c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 12b1a0: ret  */
  return;
L_12b1a4:;
  /* 12b1a4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b1a8: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12b1ac: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225136));
  fn2_24b710(c);
  /* 12b1b0: cbz w0, #0x12b168 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12b168;
  /* 12b1b4: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b1b8: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 12b1bc: nop  */
  /* nop: no architectural effect here */
  /* 12b1c0: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 12b1c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12b1c8: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225164));
  fn2_1b907c(c);
  /* 12b1cc: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12b1d0: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 12b1d4: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 12b1d8: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 12b1dc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12b1e0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225188));
  fn2_24b6f0(c);
  /* 12b1e4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12b1e8: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12b1ec: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1225200));
  fn2_24b720(c);
  /* 12b1f0: b #0x12b168 */
  goto L_12b168;
}

void fn2_12c760(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077086560));
  /* 12c760: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c764: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12c768: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c76c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12c770: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1230708));
  fn2_1b6040(c);
  /* 12c774: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12c778: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12c77c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c780: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_12dc48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077091912));
  /* 12dc48: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 12dc4c: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12dc50: lsl w0, w8, #2 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* 12dc54: ret  */
  return;
}

void fn2_12ef30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077096752));
  /* 12ef30: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 12ef34: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12ef38: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12ef3c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12ef40: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12ef44: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 12ef48: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12ef4c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 12ef50: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12ef54: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 12ef58: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12ef5c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1240928));
  fn2_1b5d1c(c);
  /* 12ef60: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 12ef64: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* 12ef68: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12ef6c: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 12ef70: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* 12ef74: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12ef78: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12ef7c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1240960));
  fn2_1d2c2c(c);
  /* 12ef80: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12ef84: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1240968));
  fn2_1d2c2c(c);
  /* 12ef88: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12ef8c: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* 12ef90: add x8, x8, #0x288 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(648)));
  /* 12ef94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ef98: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12ef9c: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 12efa0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12efa4: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12efa8: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 12efac: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 12efb0: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 12efb4: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 12efb8: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241020));
  fn2_1b5e68(c);
  /* 12efbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12efc0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 12efc4: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* 12efc8: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241036));
  fn2_1b5d9c(c);
  /* 12efcc: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12efd0: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 12efd4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12efd8: tbz w8, #0, #0x12f018 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12f018;
L_12efdc:;
  /* 12efdc: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12efe0: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 12efe4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12efe8: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241068));
  fn2_1d2c40(c);
  /* 12efec: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12eff0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 12eff4: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241080));
  fn2_1d5dc0(c);
  /* 12eff8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12effc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241088));
  fn2_1d2d24(c);
  /* 12f000: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12f004: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12f008: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12f00c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12f010: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 12f014: ret  */
  return;
L_12f018:;
  /* 12f018: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12f01c: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12f020: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241124));
  fn2_24b710(c);
  /* 12f024: cbz w0, #0x12efdc */
  if ((ARC_W_R(c, 0)) == 0) goto L_12efdc;
  /* 12f028: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12f02c: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 12f030: nop  */
  /* nop: no architectural effect here */
  /* 12f034: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 12f038: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12f03c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241152));
  fn2_1b907c(c);
  /* 12f040: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12f044: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 12f048: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 12f04c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 12f050: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12f054: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241176));
  fn2_24b6f0(c);
  /* 12f058: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12f05c: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12f060: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1241188));
  fn2_24b720(c);
  /* 12f064: b #0x12efdc */
  goto L_12efdc;
}

void fn2_1302e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077101792));
  /* 1302e0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1302e4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1302e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1302ec: mov x5, x4 */
  ARC_X_W(c, 5, ARC_X_R(c, 4));
  /* 1302f0: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* 1302f4: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* 1302f8: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* 1302fc: ldp x1, x2, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 130300: add x6, x0, #0x48 */
  ARC_X_W(c, 6, (ARC_X_R(c, 0) + UINT64_C(72)));
  /* 130304: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 130308: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13030c: bl #0x13036c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1245968));
  fn2_13036c(c);
  /* 130310: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 130314: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 130318: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13031c: b #0x1bc084 */
  fn2_1bc084(c); return;
}

void fn2_131bb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077108152));
  /* 131bb8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 131bbc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 131bc0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 131bc4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 131bc8: ldp x21, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 131bcc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 131bd0: add x19, x1, x8, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 131bd4: tbz w8, #0, #0x131be0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_131be0;
  /* 131bd8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 131bdc: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_131be0:;
  /* 131be0: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 131be4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 131be8: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1252332));
  fn2_1d9754(c);
  /* 131bec: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 131bf0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 131bf4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 131bf8: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 131bfc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1252352));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 131c00: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 131c04: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1252360));
  fn2_1d97fc(c);
  /* 131c08: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 131c0c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 131c10: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 131c14: ret  */
  return;
}

void fn2_1331f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077113848));
  /* 1331f8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1331fc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 133200: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 133204: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 133208: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 13320c: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 133210: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 133214: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 133218: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 13321c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258016));
  fn2_1d2c2c(c);
  /* 133220: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 133224: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258024));
  fn2_1d2c2c(c);
  /* 133228: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 13322c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 133230: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258036));
  fn2_1ccc74(c);
  /* 133234: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* 133238: cmp w20, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(2));
  /* 13323c: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* 133240: b.hi #0x13328c */
  if (ARC_COND(c, 8)) goto L_13328c;
  /* 133244: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 133248: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 13324c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 133250: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 133254: bl #0xb1d4c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258072));
  fn2_b1d4c(c);
  /* 133258: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13325c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 133260: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 133264: bl #0xb1d4c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258088));
  fn2_b1d4c(c);
  /* 133268: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13326c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 133270: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 133274: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258104));
  fn2_b4168(c);
  /* 133278: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13327c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 133280: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 133284: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 133288: ret  */
  return;
L_13328c:;
  /* 13328c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 133290: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 133294: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 133298: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13329c: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 1332a0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258148));
  fn2_1d2c2c(c);
  /* 1332a4: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 1332a8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258156));
  fn2_1d2c2c(c);
  /* 1332ac: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1332b0: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* 1332b4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258168));
  fn2_1ccc74(c);
  /* 1332b8: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* 1332bc: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1332c0: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 1332c4: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* 1332c8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1332cc: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258192));
  fn2_1d2b98(c);
  /* 1332d0: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1332d4: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 1332d8: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258204));
  fn2_1d2b98(c);
  /* 1332dc: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* 1332e0: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1332e4: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1332e8: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1332ec: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258224));
  fn2_1d0708(c);
  /* 1332f0: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 1332f4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1332f8: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 1332fc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258240));
  fn2_1ccd9c(c);
  /* 133300: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 133304: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258248));
  fn2_1d2d24(c);
  /* 133308: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 13330c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1258256));
  fn2_1d2d24(c);
  /* 133310: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 133314: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 133318: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13331c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 133320: ret  */
  return;
}

void fn2_134aac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077120172));
  /* 134aac: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* 134ab0: b.hi #0x134ad8 */
  if (ARC_COND(c, 8)) goto L_134ad8;
  /* 134ab4: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 134ab8: mov w9, #0x1c */
  ARC_W_W(c, 9, UINT64_C(28));
  /* 134abc: cset w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? 1 : 0));
  /* 134ac0: lsl w8, w8, #2 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* 134ac4: csel w8, w9, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 134ac8: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* 134acc: mov w9, #0x19 */
  ARC_W_W(c, 9, UINT64_C(25));
  /* 134ad0: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 134ad4: ret  */
  return;
L_134ad8:;
  /* 134ad8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 134adc: ret  */
  return;
}

void fn2_135c50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077124688));
  /* 135c50: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 135c54: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135c58: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 135c5c: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 135c60: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 135c64: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 135c68: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 135c6c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 135c70: ldp x9, x8, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 135c74: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 135c78: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135c7c: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* 135c80: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 135c84: mov x19, x5 */
  ARC_X_W(c, 19, ARC_X_R(c, 5));
  /* 135c88: mov w26, w4 */
  ARC_W_W(c, 26, ARC_W_R(c, 4));
  /* 135c8c: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* 135c90: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 135c94: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 135c98: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 135c9c: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 135ca0: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 135ca4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 135ca8: add x27, sp, #8 */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(8)));
  /* 135cac: mul x28, x8, x9 */
  ARC_X_W(c, 28, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 135cb0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268916));
  fn2_1bc084(c);
  /* 135cb4: add x0, x27, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(24)));
  /* 135cb8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268924));
  fn2_1bc084(c);
  /* 135cbc: cmp w26, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(0));
  /* 135cc0: b.le #0x135d1c */
  if (ARC_COND(c, 13)) goto L_135d1c;
  /* 135cc4: ldr x1, [x25] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 25)));
  /* 135cc8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135ccc: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268944));
  fn2_1bc09c(c);
  /* 135cd0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135cd4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135cd8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268956));
  fn2_1bcf04(c);
  /* 135cdc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135ce0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268964));
  fn2_1bc620(c);
  /* 135ce4: cmp w26, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 26), UINT64_C(1));
  /* 135ce8: b.eq #0x135d38 */
  if (ARC_COND(c, 0)) goto L_135d38;
  /* 135cec: ldr x1, [x25, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 25) + INT64_C(8))));
  /* 135cf0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135cf4: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268984));
  fn2_1bc09c(c);
  /* 135cf8: add x0, x27, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(24)));
  /* 135cfc: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135d00: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1268996));
  fn2_1bcf04(c);
  /* 135d04: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135d08: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269004));
  fn2_1bc620(c);
  /* 135d0c: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* 135d10: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 135d14: tbnz w22, #0, #0x135d60 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) != 0) goto L_135d60;
  /* 135d18: b #0x135d68 */
  goto L_135d68;
L_135d1c:;
  /* 135d1c: sub w8, w28, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 28) - UINT64_C(2)));
  /* 135d20: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 135d24: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* 135d28: nop  */
  /* nop: no architectural effect here */
  /* 135d2c: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 135d30: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135d34: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269048));
  fn2_1bce10(c);
L_135d38:;
  /* 135d38: sub w8, w28, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 28) - UINT64_C(1)));
  /* 135d3c: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 135d40: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* 135d44: nop  */
  /* nop: no architectural effect here */
  /* 135d48: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 135d4c: add x0, x27, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(24)));
  /* 135d50: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269076));
  fn2_1bce10(c);
  /* 135d54: add x23, x23, x22, asr #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> 1))));
  /* 135d58: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 135d5c: tbz w22, #0, #0x135d68 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_135d68;
L_135d60:;
  /* 135d60: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 135d64: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_135d68:;
  /* 135d68: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135d6c: add x22, sp, #8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(8)));
  /* 135d70: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269108));
  fn2_1bcbbc(c);
  /* 135d74: bl #0xdbc60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269112));
  fn2_dbc60(c);
  /* 135d78: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 135d7c: add x0, x27, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(24)));
  /* 135d80: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269124));
  fn2_1bc668(c);
  /* 135d84: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* 135d88: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 135d8c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 135d90: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269140));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 135d94: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 135d98: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135d9c: and w1, w8, #1 */
  ARC_W_W(c, 1, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* 135da0: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269156));
  fn2_1bc25c(c);
  /* 135da4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135da8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 135dac: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269168));
  fn2_1bcf04(c);
  /* 135db0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 135db4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269176));
  fn2_1bc620(c);
  /* 135db8: add x0, x22, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 135dbc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269184));
  fn2_1bc620(c);
  /* 135dc0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 135dc4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1269192));
  fn2_1bc620(c);
  /* 135dc8: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 135dcc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 135dd0: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 135dd4: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 135dd8: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 135ddc: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135de0: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 135de4: ret  */
  return;
}

void fn2_136fdc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077129692));
  /* 136fdc: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 136fe0: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136fe4: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 136fe8: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 136fec: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136ff0: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136ff4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 136ff8: ldp x26, x25, [x5] */
  { const uint64_t _pa = ARC_X_R(c, 5);
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 136ffc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 137000: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 137004: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* 137008: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 13700c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 137010: mov w24, w2 */
  ARC_W_W(c, 24, ARC_W_R(c, 2));
  /* 137014: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 137018: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273884));
  fn2_1bc084(c);
  /* 13701c: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* 137020: b.lt #0x137048 */
  if (ARC_COND(c, 11)) goto L_137048;
  /* 137024: ldr x1, [x23] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 23)));
  /* 137028: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13702c: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273904));
  fn2_1bc09c(c);
  /* 137030: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 137034: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 137038: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273916));
  fn2_1bcf04(c);
  /* 13703c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 137040: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273924));
  fn2_1bc620(c);
  /* 137044: b #0x137078 */
  goto L_137078;
L_137048:;
  /* 137048: sub x8, x25, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) - ARC_X_R(c, 26)));
  /* 13704c: mov w9, #0xaaab */
  ARC_W_W(c, 9, UINT64_C(43691));
  /* 137050: mov w10, #-1 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551615));
  /* 137054: lsr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63)));
  /* 137058: movk w9, #0xaaaa, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2863267840)));
  /* 13705c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 137060: madd w8, w8, w9, w10 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 10)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* 137064: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 137068: ldr x10, [x22] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 22)));
  /* 13706c: nop  */
  /* nop: no architectural effect here */
  /* 137070: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 137074: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273976));
  fn2_1bce10(c);
L_137078:;
  /* 137078: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13707c: str wzr, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 31));
  /* 137080: bl #0x1bc7e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273988));
  fn2_1bc7e8(c);
  /* 137084: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 137088: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1273996));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 13708c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 137090: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 137094: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274008));
  fn2_1bc2f8(c);
  /* 137098: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13709c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1370a0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274020));
  fn2_1bcf04(c);
  /* 1370a4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1370a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274028));
  fn2_1bc620(c);
  /* 1370ac: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1370b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274036));
  fn2_1ccd9c(c);
  /* 1370b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1370b8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274044));
  fn2_1bc620(c);
  /* 1370bc: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1370c0: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1370c4: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1370c8: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1370cc: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1370d0: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 1370d4: ret  */
  return;
}

void fn2_1383c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077134784));
  /* 1383c0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1383c4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1383c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1383cc: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1383d0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 1383d4: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* 1383d8: tbz w9, #0, #0x1383e4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1383e4;
  /* 1383dc: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 1383e0: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_1383e4:;
  /* 1383e4: ldr x9, [x2] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 2)));
  /* 1383e8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1383ec: ldr d0, [x9] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 9)));
  /* 1383f0: str d0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), (c)->q[0].u64[0]);
  /* 1383f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1278968));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1383f8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* 1383fc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 138400: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138404: ret  */
  return;
}

void fn2_139a4c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077140556));
  /* 139a4c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 139a50: ret  */
  return;
}

void fn2_13addc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077145564));
  /* 13addc: mov w8, #0x1d */
  ARC_W_W(c, 8, UINT64_C(29));
  /* 13ade0: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 13ade4: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 13ade8: csel w8, w8, wzr, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 13adec: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 13adf0: csel w8, w9, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 13adf4: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 13adf8: mov w9, #0x19 */
  ARC_W_W(c, 9, UINT64_C(25));
  /* 13adfc: csel w8, w9, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 13ae00: csel w0, wzr, w8, hi */
  ARC_W_W(c, 0, (ARC_COND(c, 8) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* 13ae04: ret  */
  return;
}

void fn2_13c2b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077150896));
  /* 13c2b0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13c2b4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 13c2b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13c2bc: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13c2c0: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 13c2c4: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* 13c2c8: tbz w9, #0, #0x13c2d4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13c2d4;
  /* 13c2cc: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* 13c2d0: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_13c2d4:;
  /* 13c2d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1295064));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13c2d8: cbz x0, #0x13c2f0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13c2f0;
  /* 13c2dc: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 13c2e0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 13c2e4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13c2e8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13c2ec: ret  */
  return;
L_13c2f0:;
  /* 13c2f0: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 13c2f4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13c2f8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13c2fc: ret  */
  return;
}

void fn2_13d7f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077156344));
  /* 13d7f8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 13d7fc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13d800: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 13d804: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 13d808: ldp x9, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 13d80c: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 13d810: add x0, x1, x8, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 13d814: tbz w8, #0, #0x13d820 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13d820;
  /* 13d818: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13d81c: ldr x9, [x8, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
L_13d820:;
  /* 13d820: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 13d824: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1300520));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 13d828: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13d82c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13d830: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1300532));
  fn2_1bce10(c);
  /* 13d834: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13d838: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1300540));
  fn2_1bc620(c);
  /* 13d83c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13d840: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13d844: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 13d848: ret  */
  return;
}

void fn2_14439c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077183900));
  /* 14439c: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 1443a0: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1443a4: str x21, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 21));
  /* 1443a8: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1443ac: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 1443b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1443b4: add x0, x0, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(106)));
  /* 1443b8: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328060));
  fn2_1dc718(c);
  /* 1443bc: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 1443c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1443c4: bl #0x2187d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328072));
  fn2_2187d0(c);
  /* 1443c8: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1443cc: bl #0x2108e4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328080));
  fn2_2108e4(c);
  /* 1443d0: sxtw x1, w0 */
  ARC_X_W(c, 1, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 1443d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1443d8: bl #0x141764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328092));
  fn2_141764(c);
  /* 1443dc: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1443e0: str x0, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 0));
  /* 1443e4: cbz x8, #0x14440c */
  if ((ARC_X_R(c, 8)) == 0) goto L_14440c;
  /* 1443e8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1443ec: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328112));
  fn2_225abc(c);
  /* 1443f0: tbz w0, #0, #0x14440c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_14440c;
  /* 1443f4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1443f8: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1443fc: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 144400: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 144404: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 144408: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328140));
  arc_dispatch(c, ARC_X_R(c, 9));
L_14440c:;
  /* 14440c: ldr x20, [x19, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 144410: cbz x20, #0x1445b8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1445b8;
  /* 144414: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 144418: add x1, x1, #0x733 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1843)));
  /* 14441c: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 144420: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 144424: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328168));
  fn2_1b8fd4(c);
  /* 144428: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 14442c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 144430: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 144434: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328184));
  fn2_21fe38(c);
  /* 144438: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14443c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 144440: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328196));
  fn2_1bccb8(c);
  /* 144444: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 144448: bl #0x1d983c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328204));
  fn2_1d983c(c);
  /* 14444c: tbnz w0, #0, #0x144460 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_144460;
  /* 144450: ldrb w8, [x19, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(104))));
  /* 144454: cbnz w8, #0x144460 */
  if ((ARC_W_R(c, 8)) != 0) goto L_144460;
  /* 144458: ldrb w8, [x19, #0x1f8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(504))));
  /* 14445c: tbz w8, #0, #0x144540 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_144540;
L_144460:;
  /* 144460: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 144464: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328232));
  fn2_1d97fc(c);
  /* 144468: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
L_14446c:;
  /* 14446c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328240));
  fn2_1bc620(c);
  /* 144470: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 144474: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328248));
  fn2_1d2d24(c);
L_144478:;
  /* 144478: adrp x0, #0x27000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(159744)));
  /* 14447c: add x0, x0, #0xbbc */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3004)));
  /* 144480: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 144484: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 144488: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328268));
  fn2_1b7d74(c);
  /* 14448c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 144490: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 144494: bl #0xae0d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328280));
  fn2_ae0d8(c);
  /* 144498: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 14449c: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328288));
  fn2_1db794(c);
  /* 1444a0: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1444a4: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1444a8: add x20, sp, #0x30 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(48)));
  /* 1444ac: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328304));
  fn2_1bc290(c);
  /* 1444b0: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1444b4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328312));
  fn2_1bc084(c);
  /* 1444b8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1444bc: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328320));
  fn2_1db4a4(c);
  /* 1444c0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1444c4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1444c8: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328332));
  fn2_1db9f0(c);
  /* 1444cc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1444d0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1444d4: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328344));
  fn2_1bbf48(c);
  /* 1444d8: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 1444dc: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328352));
  fn2_1bce10(c);
  /* 1444e0: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 1444e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1444e8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1444ec: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328368));
  fn2_1d0298(c);
  /* 1444f0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1444f4: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328376));
  fn2_1db788(c);
  /* 1444f8: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1444fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328384));
  fn2_1bc620(c);
  /* 144500: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 144504: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328392));
  fn2_1bc620(c);
  /* 144508: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 14450c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 144510: bl #0x14c268 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328404));
  fn2_14c268(c);
  /* 144514: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 144518: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328412));
  fn2_1ccd9c(c);
  /* 14451c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 144520: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328420));
  fn2_1ccd9c(c);
  /* 144524: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 144528: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328428));
  fn2_1ccd9c(c);
  /* 14452c: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 144530: ldr x21, [sp, #0x70] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(112))));
  /* 144534: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 144538: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 14453c: ret  */
  return;
L_144540:;
  /* 144540: ldr x20, [x19, #0x78] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))));
  /* 144544: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 144548: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328460));
  fn2_1d97fc(c);
  /* 14454c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 144550: add x21, sp, #0x30 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(48)));
  /* 144554: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328472));
  fn2_1bc620(c);
  /* 144558: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 14455c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328480));
  fn2_1d2d24(c);
  /* 144560: tbnz x20, #0x3f, #0x144478 */
  if (((ARC_X_R(c, 20)) >> 63 & 1) != 0) goto L_144478;
  /* 144564: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 144568: ldr x20, [x19, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 14456c: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 144570: add x1, x1, #0x2c9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(713)));
  /* 144574: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 144578: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14457c: strb w8, [x19, #0x1f8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(504)), ARC_W_R(c, 8));
  /* 144580: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328516));
  fn2_1b8fd4(c);
  /* 144584: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 144588: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 14458c: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328528));
  fn2_1bc44c(c);
  /* 144590: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 144594: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 144598: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 14459c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 1445a0: str x21, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 21));
  /* 1445a4: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328552));
  fn2_221308(c);
  /* 1445a8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 1445ac: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328560));
  fn2_1bc620(c);
  /* 1445b0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1445b4: b #0x14446c */
  goto L_14446c;
L_1445b8:;
  /* 1445b8: adrp x0, #0x2a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(172032)));
  /* 1445bc: add x0, x0, #0xa21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2593)));
  /* 1445c0: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 1445c4: add x1, x1, #0x1fd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(509)));
  /* 1445c8: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1445cc: add x3, x3, #0x28a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(650)));
  /* 1445d0: mov w2, #0x307 */
  ARC_W_W(c, 2, UINT64_C(775));
  /* 1445d4: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1445d8: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1445dc: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1328608));
  fn2_1b54b0(c);
  /* 1445e0: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1445e4: ldr x21, [sp, #0x70] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(112))));
  /* 1445e8: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1445ec: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 1445f0: ret  */
  return;
}

void fn2_149798(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077205400));
  /* 149798: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 14979c: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1497a0: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 1497a4: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1497a8: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1497ac: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 1497b0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1497b4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1497b8: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 1497bc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1497c0: add x23, sp, #0x18 */
  ARC_X_W(c, 23, ((c)->sp + UINT64_C(24)));
  /* 1497c4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349576));
  fn2_1bc290(c);
  /* 1497c8: add x22, x23, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 1497cc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1497d0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1497d4: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349592));
  fn2_1bc44c(c);
  /* 1497d8: add x20, x23, #0x30 */
  ARC_X_W(c, 20, (ARC_X_R(c, 23) + UINT64_C(48)));
  /* 1497dc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1497e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1497e4: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349608));
  fn2_1bc530(c);
  /* 1497e8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1497ec: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1497f0: mov w2, #3 */
  ARC_W_W(c, 2, UINT64_C(3));
  /* 1497f4: stp x23, x22, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 1497f8: str x20, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 20));
  /* 1497fc: bl #0x219208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349632));
  fn2_219208(c);
  /* 149800: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 149804: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 149808: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349644));
  fn2_1bc620(c);
  /* 14980c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 149810: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349652));
  fn2_1bc620(c);
  /* 149814: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 149818: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1349660));
  fn2_1bc620(c);
  /* 14981c: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* 149820: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 149824: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* 149828: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 14982c: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 149830: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 149834: ret  */
  return;
}

void fn2_14b510(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077212944));
  /* 14b510: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14b514: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 14b518: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 14b51c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 14b520: add x8, x8, #0x278 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(632)));
  /* 14b524: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 14b528: tbz w8, #0, #0x14b548 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_14b548;
L_14b52c:;
  /* 14b52c: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 14b530: add x0, x0, #0x270 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(624)));
  /* 14b534: adrp x1, #0x255000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 14b538: add x1, x1, #0x130 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(304)));
  /* 14b53c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 14b540: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14b544: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_14b548:;
  /* 14b548: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 14b54c: add x0, x0, #0x278 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(632)));
  /* 14b550: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1357140));
  fn2_24b710(c);
  /* 14b554: cbz w0, #0x14b52c */
  if ((ARC_W_R(c, 0)) == 0) goto L_14b52c;
  /* 14b558: adrp x19, #0x25d000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 14b55c: add x19, x19, #0x270 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(624)));
  /* 14b560: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 14b564: add x1, x1, #0x2f9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(761)));
  /* 14b568: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14b56c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14b570: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1357172));
  fn2_1b8fd4(c);
  /* 14b574: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 14b578: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 14b57c: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 14b580: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 14b584: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 14b588: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1357196));
  fn2_24b6f0(c);
  /* 14b58c: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 14b590: add x0, x0, #0x278 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(632)));
  /* 14b594: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1357208));
  fn2_24b720(c);
  /* 14b598: b #0x14b52c */
  goto L_14b52c;
}

void fn2_1515a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077237668));
  /* 1515a4: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 1515a8: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1515ac: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1515b0: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1515b4: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 1515b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1515bc: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1515c0: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 1515c4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1515c8: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381836));
  fn2_1bccb8(c);
  /* 1515cc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1515d0: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* 1515d4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1515d8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381852));
  fn2_1b7d24(c);
  /* 1515dc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1515e0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1515e4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381864));
  fn2_1bc2f8(c);
  /* 1515e8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1515ec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381872));
  fn2_1ccd9c(c);
  /* 1515f0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1515f4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1515f8: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381884));
  fn2_1bc290(c);
  /* 1515fc: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 151600: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 151604: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 151608: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* 15160c: sub x22, x29, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 151610: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381908));
  fn2_1d9c5c(c);
  /* 151614: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 151618: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381916));
  fn2_1bc668(c);
  /* 15161c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 151620: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 151624: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381928));
  fn2_1bc620(c);
  /* 151628: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 15162c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381936));
  fn2_1bc620(c);
  /* 151630: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 151634: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381944));
  fn2_1bc620(c);
  /* 151638: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 15163c: add x1, x1, #0xeda */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3802)));
  /* 151640: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 151644: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381960));
  fn2_1b7d24(c);
  /* 151648: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 15164c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 151650: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381972));
  fn2_1ccc88(c);
  /* 151654: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 151658: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 15165c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 151660: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 151664: bl #0x149508 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1381992));
  fn2_149508(c);
  /* 151668: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 15166c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 151670: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382004));
  fn2_1bc2f8(c);
  /* 151674: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 151678: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 15167c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382016));
  fn2_1bc0b8(c);
  /* 151680: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 151684: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 151688: str x22, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 22));
  /* 15168c: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382032));
  fn2_24a164(c);
  /* 151690: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 151694: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382040));
  fn2_1bc620(c);
  /* 151698: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 15169c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382048));
  fn2_1bc620(c);
  /* 1516a0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1516a4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382056));
  fn2_1ccd9c(c);
  /* 1516a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1516ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382064));
  fn2_1ccd9c(c);
  /* 1516b0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1516b4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382072));
  fn2_1ccd9c(c);
  /* 1516b8: cmp x21, #0x194 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(404));
  /* 1516bc: b.ne #0x1516d0 */
  if (ARC_COND(c, 1)) goto L_1516d0;
  /* 1516c0: fmov d0, #-1.00000000 */
  arc_d_w(c, 0, (double)(-1.0));
  /* 1516c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1516c8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1516cc: bl #0x14fd70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382096));
  fn2_14fd70(c);
L_1516d0:;
  /* 1516d0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1516d4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1382104));
  fn2_1d97fc(c);
  /* 1516d8: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1516dc: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1516e0: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1516e4: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 1516e8: ret  */
  return;
}

void fn2_157338(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077261624));
  /* 157338: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 15733c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 157340: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 157344: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 157348: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 15734c: cbz x0, #0x1573d8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1573d8;
  /* 157350: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* 157354: add x8, x8, #0xd80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3456)));
  /* 157358: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 15735c: tbz w8, #0, #0x1573ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1573ec;
L_157360:;
  /* 157360: adrp x1, #0x25c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2473984)));
  /* 157364: add x1, x1, #0xd78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3448)));
  /* 157368: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 15736c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1405808));
  fn2_1d2c40(c);
  /* 157370: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 157374: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 157378: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 15737c: ldr x8, [x8, #0xfc0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4032))));
  /* 157380: ldr x9, [x9, #0xfc8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4040))));
  /* 157384: ldr x19, [x19, #0x10] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 157388: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* 15738c: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* 157390: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1405844));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 157394: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 157398: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 15739c: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1405856));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 1573a0: cbz x0, #0x1573cc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1573cc;
  /* 1573a4: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1405864));
  fn2_1b62dc(c);
  /* 1573a8: cbz x0, #0x1573cc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1573cc;
  /* 1573ac: nop  */
  /* nop: no architectural effect here */
  /* 1573b0: adr x1, #0x250590 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2426256)));
  /* 1573b4: nop  */
  /* nop: no architectural effect here */
  /* 1573b8: adr x2, #0x250650 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2426448)));
  /* 1573bc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1573c0: bl #0x24b740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1405892));
  fn2_24b740(c);
  /* 1573c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1573c8: b #0x1573d0 */
  goto L_1573d0;
L_1573cc:;
  /* 1573cc: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_1573d0:;
  /* 1573d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1573d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1405912));
  fn2_1d2d24(c);
L_1573d8:;
  /* 1573d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1573dc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1573e0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1573e4: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1573e8: ret  */
  return;
L_1573ec:;
  /* 1573ec: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* 1573f0: add x0, x0, #0xd80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3456)));
  /* 1573f4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1405944));
  fn2_24b710(c);
  /* 1573f8: cbz w0, #0x157360 */
  if ((ARC_W_R(c, 0)) == 0) goto L_157360;
  /* 1573fc: adrp x20, #0x25c000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2473984)));
  /* 157400: add x20, x20, #0xd78 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3448)));
  /* 157404: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 157408: add x1, x1, #0x600 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1536)));
  /* 15740c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 157410: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1405972));
  fn2_1b907c(c);
  /* 157414: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 157418: nop  */
  /* nop: no architectural effect here */
  /* 15741c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 157420: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 157424: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 157428: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1405996));
  fn2_24b6f0(c);
  /* 15742c: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* 157430: add x0, x0, #0xd80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3456)));
  /* 157434: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1406008));
  fn2_24b720(c);
  /* 157438: b #0x157360 */
  goto L_157360;
}

void fn2_15f900(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077295872));
  /* 15f900: tbz w1, #0, #0x15f910 */
  if (((ARC_W_R(c, 1)) >> 0 & 1) == 0) goto L_15f910;
  /* 15f904: ldrb w8, [x0, #0x128] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(296))));
  /* 15f908: cbnz w8, #0x15f910 */
  if ((ARC_W_R(c, 8)) != 0) goto L_15f910;
  /* 15f90c: str xzr, [x0, #0x130] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(304)), ARC_X_R(c, 31));
L_15f910:;
  /* 15f910: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 15f914: strb w8, [x0, #0x128] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(296)), ARC_W_R(c, 8));
  /* 15f918: ret  */
  return;
}

void fn2_167c38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077329464));
  /* 167c38: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* 167c3c: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 167c40: str x28, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), ARC_X_R(c, 28));
  /* 167c44: stp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 167c48: stp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 167c4c: stp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 167c50: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 167c54: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* 167c58: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 167c5c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 167c60: mov x20, x6 */
  ARC_X_W(c, 20, ARC_X_R(c, 6));
  /* 167c64: mov x21, x5 */
  ARC_X_W(c, 21, ARC_X_R(c, 5));
  /* 167c68: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 167c6c: mov x23, x3 */
  ARC_X_W(c, 23, ARC_X_R(c, 3));
  /* 167c70: mov x24, x2 */
  ARC_X_W(c, 24, ARC_X_R(c, 2));
  /* 167c74: add x26, sp, #0x30 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(48)));
  /* 167c78: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473660));
  fn2_1bc290(c);
  /* 167c7c: add x19, x26, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 167c80: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 167c84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 167c88: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473676));
  fn2_1bc44c(c);
  /* 167c8c: ldrb w1, [x23] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 23)));
  /* 167c90: add x23, x26, #0x30 */
  ARC_X_W(c, 23, (ARC_X_R(c, 26) + UINT64_C(48)));
  /* 167c94: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 167c98: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473692));
  fn2_1bc25c(c);
  /* 167c9c: ldr x1, [x22] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 22)));
  /* 167ca0: add x22, x26, #0x48 */
  ARC_X_W(c, 22, (ARC_X_R(c, 26) + UINT64_C(72)));
  /* 167ca4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 167ca8: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473708));
  fn2_1bc290(c);
  /* 167cac: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* 167cb0: add x21, x26, #0x60 */
  ARC_X_W(c, 21, (ARC_X_R(c, 26) + UINT64_C(96)));
  /* 167cb4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 167cb8: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473724));
  fn2_1bc290(c);
  /* 167cbc: add x24, x26, #0x78 */
  ARC_X_W(c, 24, (ARC_X_R(c, 26) + UINT64_C(120)));
  /* 167cc0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 167cc4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 167cc8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473740));
  fn2_1bc2f8(c);
  /* 167ccc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 167cd0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 167cd4: mov w2, #6 */
  ARC_W_W(c, 2, UINT64_C(6));
  /* 167cd8: stp x26, x19, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 167cdc: stp x23, x22, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 167ce0: stp x21, x24, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 24));
  }
  /* 167ce4: bl #0x219208 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473768));
  fn2_219208(c);
  /* 167ce8: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 167cec: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 167cf0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473780));
  fn2_1bc620(c);
  /* 167cf4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 167cf8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473788));
  fn2_1bc620(c);
  /* 167cfc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 167d00: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473796));
  fn2_1bc620(c);
  /* 167d04: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 167d08: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473804));
  fn2_1bc620(c);
  /* 167d0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 167d10: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473812));
  fn2_1bc620(c);
  /* 167d14: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 167d18: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1473820));
  fn2_1bc620(c);
  /* 167d1c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 167d20: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 167d24: ldr x28, [sp, #0xd0] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(208))));
  /* 167d28: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 167d2c: ldp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 167d30: ldp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 167d34: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 167d38: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* 167d3c: ret  */
  return;
}

void fn2_16ee78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077358712));
  /* 16ee78: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 16ee7c: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 16ee80: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 16ee84: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 16ee88: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 16ee8c: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* 16ee90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 16ee94: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16ee98: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 16ee9c: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 16eea0: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 16eea4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 16eea8: add x24, sp, #8 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(8)));
  /* 16eeac: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502896));
  fn2_1bc2f8(c);
  /* 16eeb0: add x0, x24, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 16eeb4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 16eeb8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502908));
  fn2_1bc2f8(c);
  /* 16eebc: add x0, x24, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 16eec0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 16eec4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502920));
  fn2_1bc2f8(c);
  /* 16eec8: add x0, x24, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 16eecc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 16eed0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502932));
  fn2_1bc2f8(c);
  /* 16eed4: add x0, x24, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(96)));
  /* 16eed8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502940));
  fn2_1bc084(c);
  /* 16eedc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16eee0: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502948));
  fn2_1db4a4(c);
  /* 16eee4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16eee8: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* 16eeec: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502960));
  fn2_1db9f0(c);
  /* 16eef0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16eef4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 16eef8: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502972));
  fn2_1bbf48(c);
  /* 16eefc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 16ef00: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502980));
  fn2_1bce10(c);
  /* 16ef04: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16ef08: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 16ef0c: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1502992));
  fn2_1bbf48(c);
  /* 16ef10: add x1, x24, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 16ef14: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503000));
  fn2_1bce10(c);
  /* 16ef18: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16ef1c: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 16ef20: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503012));
  fn2_1bbf48(c);
  /* 16ef24: add x1, x24, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 16ef28: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503020));
  fn2_1bce10(c);
  /* 16ef2c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16ef30: mov w1, #3 */
  ARC_W_W(c, 1, UINT64_C(3));
  /* 16ef34: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503032));
  fn2_1bbf48(c);
  /* 16ef38: add x1, x24, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 16ef3c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503040));
  fn2_1bce10(c);
  /* 16ef40: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 16ef44: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 16ef48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 16ef4c: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503056));
  fn2_1d0298(c);
  /* 16ef50: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 16ef54: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503064));
  fn2_1db788(c);
  /* 16ef58: add x0, x24, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(96)));
  /* 16ef5c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503072));
  fn2_1bc620(c);
  /* 16ef60: add x0, x24, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 16ef64: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503080));
  fn2_1bc620(c);
  /* 16ef68: add x0, x24, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 16ef6c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503088));
  fn2_1bc620(c);
  /* 16ef70: add x0, x24, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 16ef74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503096));
  fn2_1bc620(c);
  /* 16ef78: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 16ef7c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1503104));
  fn2_1bc620(c);
  /* 16ef80: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 16ef84: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 16ef88: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 16ef8c: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16ef90: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 16ef94: ret  */
  return;
}

void fn2_170964(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077365604));
  /* 170964: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 170968: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 17096c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 170970: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 170974: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 170978: add x1, x1, #0x966 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2406)));
  /* 17097c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 170980: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 170984: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509768));
  fn2_1b8fd4(c);
  /* 170988: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 17098c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 170990: bl #0x1afcfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509780));
  fn2_1afcfc(c);
  /* 170994: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 170998: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509788));
  fn2_1d2d24(c);
  /* 17099c: adrp x8, #0x255000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 1709a0: add x8, x8, #0x270 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(624)));
  /* 1709a4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1709a8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1709ac: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509808));
  fn2_1db4a4(c);
  /* 1709b0: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 1709b4: stp xzr, xzr, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1709b8: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1509820));
  fn2_1d9740(c);
  /* 1709bc: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1709c0: strb wzr, [x19, #0x38] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(56)), ARC_W_R(c, 31));
  /* 1709c4: str x19, [x8, #0x2b8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(696)), ARC_X_R(c, 19));
  /* 1709c8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1709cc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1709d0: ret  */
  return;
}

void fn2_175704(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077385476));
  /* 175704: add x0, x0, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(48)));
  /* 175708: b #0x1da22c */
  fn2_1da22c(c); return;
}

void fn2_1762ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077388524));
  /* 1762ec: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1762f0: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1762f4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1762f8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1762fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 176300: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 176304: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 176308: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 17630c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 176310: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 176314: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 176318: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 17631c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1532704));
  fn2_1bc084(c);
  /* 176320: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 176324: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 176328: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 17632c: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 176330: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* 176334: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 176338: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* 17633c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 176340: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 176344: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 176348: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17634c: b #0x1763fc */
  fn2_1763fc(c); return;
}

void fn2_177b9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077394844));
  /* 177b9c: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 177ba0: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* 177ba4: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 177ba8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 177bac: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 177bb0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 177bb4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 177bb8: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 177bbc: b.ne #0x1783b8 */
  if (ARC_COND(c, 1)) goto L_1783b8;
  /* 177bc0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 177bc4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 177bc8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 177bcc: bl #0x17909c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539024));
  fn2_17909c(c);
  /* 177bd0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 177bd4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 177bd8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 177bdc: bl #0x17c408 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539040));
  fn2_17c408(c);
  /* 177be0: nop  */
  /* nop: no architectural effect here */
  /* 177be4: adr x22, #0x25d148 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2478408)));
  /* 177be8: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 177bec: tbz w8, #0, #0x178648 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178648;
L_177bf0:;
  /* 177bf0: adrp x24, #0x257000 */
  ARC_X_W(c, 24, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 177bf4: ldr x24, [x24, #0xfd8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(4056))));
  /* 177bf8: cbz x24, #0x177c00 */
  if ((ARC_X_R(c, 24)) == 0) goto L_177c00;
  /* 177bfc: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539072));
  fn2_24b760(c);
L_177c00:;
  /* 177c00: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 177c04: ldr x0, [x0, #0xfe0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(4064))));
  /* 177c08: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539084));
  fn2_24b770(c);
  /* 177c0c: adrp x25, #0x257000 */
  ARC_X_W(c, 25, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 177c10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 177c14: nop  */
  /* nop: no architectural effect here */
  /* 177c18: adr x8, #0x25d140 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478400)));
  /* 177c1c: ldr x25, [x25, #0xfe8] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(4072))));
  /* 177c20: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 177c24: cbz x25, #0x177c2c */
  if ((ARC_X_R(c, 25)) == 0) goto L_177c2c;
  /* 177c28: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539116));
  fn2_24b780(c);
L_177c2c:;
  /* 177c2c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 177c30: ldr x0, [x0, #0xff0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(4080))));
  /* 177c34: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539128));
  fn2_24b770(c);
  /* 177c38: nop  */
  /* nop: no architectural effect here */
  /* 177c3c: adr x8, #0x2555d0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2446800)));
  /* 177c40: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 177c44: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 177c48: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 177c4c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 177c50: mov w0, #0x60 */
  ARC_W_W(c, 0, UINT64_C(96));
  /* 177c54: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 177c58: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539164));
  fn2_1b5d1c(c);
  /* 177c5c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 177c60: bl #0xeba2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539172));
  fn2_eba2c(c);
  /* 177c64: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 177c68: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539180));
  fn2_1afe0c(c);
  /* 177c6c: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539184));
  fn2_205d68(c);
  /* 177c70: ldarb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 177c74: tbz w8, #0, #0x178698 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178698;
L_177c78:;
  /* 177c78: nop  */
  /* nop: no architectural effect here */
  /* 177c7c: adr x1, #0x25d140 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478400)));
  /* 177c80: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 177c84: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539208));
  fn2_2077e8(c);
  /* 177c88: nop  */
  /* nop: no architectural effect here */
  /* 177c8c: adr x23, #0x25d300 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478848)));
  /* 177c90: adrp x22, #0x25d000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 177c94: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 177c98: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 177c9c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 177ca0: b.eq #0x1783d4 */
  if (ARC_COND(c, 0)) goto L_1783d4;
L_177ca4:;
  /* 177ca4: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 177ca8: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 177cac: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 177cb0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 177cb4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 177cb8: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 177cbc: bl #0x17cb6c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539264));
  fn2_17cb6c(c);
  /* 177cc0: nop  */
  /* nop: no architectural effect here */
  /* 177cc4: adr x26, #0x25d2b0 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 177cc8: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177ccc: tbz w8, #0, #0x1786fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1786fc;
L_177cd0:;
  /* 177cd0: cbz x24, #0x177cd8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_177cd8;
  /* 177cd4: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539288));
  fn2_24b760(c);
L_177cd8:;
  /* 177cd8: nop  */
  /* nop: no architectural effect here */
  /* 177cdc: adr x8, #0x25d2a8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478760)));
  /* 177ce0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 177ce4: cbz x25, #0x177cec */
  if ((ARC_X_R(c, 25)) == 0) goto L_177cec;
  /* 177ce8: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539308));
  fn2_24b780(c);
L_177cec:;
  /* 177cec: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 177cf0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 177cf4: nop  */
  /* nop: no architectural effect here */
  /* 177cf8: adr x8, #0x2555e8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2446824)));
  /* 177cfc: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* 177d00: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 177d04: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 177d08: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539340));
  fn2_1b5d1c(c);
  /* 177d0c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 177d10: bl #0x16f8ac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539348));
  fn2_16f8ac(c);
  /* 177d14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 177d18: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539356));
  fn2_1afe0c(c);
  /* 177d1c: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539360));
  fn2_205d68(c);
  /* 177d20: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177d24: tbz w8, #0, #0x17874c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_17874c;
L_177d28:;
  /* 177d28: nop  */
  /* nop: no architectural effect here */
  /* 177d2c: adr x1, #0x25d2a8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478760)));
  /* 177d30: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 177d34: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539384));
  fn2_2077e8(c);
  /* 177d38: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 177d3c: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 177d40: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 177d44: b.eq #0x178408 */
  if (ARC_COND(c, 0)) goto L_178408;
L_177d48:;
  /* 177d48: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 177d4c: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 177d50: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 177d54: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 177d58: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 177d5c: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 177d60: bl #0x17d2d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539428));
  fn2_17d2d0(c);
  /* 177d64: nop  */
  /* nop: no architectural effect here */
  /* 177d68: adr x26, #0x25d098 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478232)));
  /* 177d6c: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177d70: tbz w8, #0, #0x1787b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1787b4;
L_177d74:;
  /* 177d74: cbz x24, #0x177d7c */
  if ((ARC_X_R(c, 24)) == 0) goto L_177d7c;
  /* 177d78: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539452));
  fn2_24b760(c);
L_177d7c:;
  /* 177d7c: nop  */
  /* nop: no architectural effect here */
  /* 177d80: adr x8, #0x25d090 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478224)));
  /* 177d84: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 177d88: cbz x25, #0x177d90 */
  if ((ARC_X_R(c, 25)) == 0) goto L_177d90;
  /* 177d8c: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539472));
  fn2_24b780(c);
L_177d90:;
  /* 177d90: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 177d94: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 177d98: nop  */
  /* nop: no architectural effect here */
  /* 177d9c: adr x8, #0x255600 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2446848)));
  /* 177da0: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 177da4: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 177da8: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 177dac: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539504));
  fn2_1b5d1c(c);
  /* 177db0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 177db4: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 177db8: add x1, x1, #0x966 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2406)));
  /* 177dbc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 177dc0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 177dc4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539528));
  fn2_1b8fd4(c);
  /* 177dc8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 177dcc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 177dd0: bl #0x1afcfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539540));
  fn2_1afcfc(c);
  /* 177dd4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 177dd8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539548));
  fn2_1d2d24(c);
  /* 177ddc: adrp x8, #0x255000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 177de0: add x8, x8, #0x628 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1576)));
  /* 177de4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 177de8: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 177dec: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539568));
  fn2_1afe0c(c);
  /* 177df0: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539572));
  fn2_205d68(c);
  /* 177df4: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177df8: tbz w8, #0, #0x178804 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178804;
L_177dfc:;
  /* 177dfc: nop  */
  /* nop: no architectural effect here */
  /* 177e00: adr x1, #0x25d090 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478224)));
  /* 177e04: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 177e08: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539596));
  fn2_2077e8(c);
  /* 177e0c: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 177e10: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 177e14: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 177e18: b.eq #0x17843c */
  if (ARC_COND(c, 0)) goto L_17843c;
L_177e1c:;
  /* 177e1c: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 177e20: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 177e24: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 177e28: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 177e2c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 177e30: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 177e34: bl #0x17db0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539640));
  fn2_17db0c(c);
  /* 177e38: nop  */
  /* nop: no architectural effect here */
  /* 177e3c: adr x26, #0x25d120 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478368)));
  /* 177e40: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177e44: tbz w8, #0, #0x178868 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178868;
L_177e48:;
  /* 177e48: cbz x24, #0x177e50 */
  if ((ARC_X_R(c, 24)) == 0) goto L_177e50;
  /* 177e4c: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539664));
  fn2_24b760(c);
L_177e50:;
  /* 177e50: nop  */
  /* nop: no architectural effect here */
  /* 177e54: adr x8, #0x25d118 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478360)));
  /* 177e58: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 177e5c: cbz x25, #0x177e64 */
  if ((ARC_X_R(c, 25)) == 0) goto L_177e64;
  /* 177e60: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539684));
  fn2_24b780(c);
L_177e64:;
  /* 177e64: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 177e68: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 177e6c: nop  */
  /* nop: no architectural effect here */
  /* 177e70: adr x8, #0x255658 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2446936)));
  /* 177e74: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* 177e78: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 177e7c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 177e80: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539716));
  fn2_1b5d1c(c);
  /* 177e84: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 177e88: bl #0xe8a90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539724));
  fn2_e8a90(c);
  /* 177e8c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 177e90: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539732));
  fn2_1afe0c(c);
  /* 177e94: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539736));
  fn2_205d68(c);
  /* 177e98: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177e9c: tbz w8, #0, #0x1788b8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1788b8;
L_177ea0:;
  /* 177ea0: nop  */
  /* nop: no architectural effect here */
  /* 177ea4: adr x1, #0x25d118 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478360)));
  /* 177ea8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 177eac: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539760));
  fn2_2077e8(c);
  /* 177eb0: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 177eb4: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 177eb8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 177ebc: b.eq #0x178470 */
  if (ARC_COND(c, 0)) goto L_178470;
L_177ec0:;
  /* 177ec0: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 177ec4: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 177ec8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 177ecc: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 177ed0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 177ed4: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 177ed8: bl #0x17e270 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539804));
  fn2_17e270(c);
  /* 177edc: nop  */
  /* nop: no architectural effect here */
  /* 177ee0: adr x26, #0x25d170 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478448)));
  /* 177ee4: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177ee8: tbz w8, #0, #0x178924 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178924;
L_177eec:;
  /* 177eec: cbz x24, #0x177ef4 */
  if ((ARC_X_R(c, 24)) == 0) goto L_177ef4;
  /* 177ef0: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539828));
  fn2_24b760(c);
L_177ef4:;
  /* 177ef4: nop  */
  /* nop: no architectural effect here */
  /* 177ef8: adr x8, #0x25d168 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478440)));
  /* 177efc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 177f00: cbz x25, #0x177f08 */
  if ((ARC_X_R(c, 25)) == 0) goto L_177f08;
  /* 177f04: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539848));
  fn2_24b780(c);
L_177f08:;
  /* 177f08: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 177f0c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 177f10: nop  */
  /* nop: no architectural effect here */
  /* 177f14: adr x8, #0x255670 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2446960)));
  /* 177f18: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* 177f1c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 177f20: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 177f24: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539880));
  fn2_1b5d1c(c);
  /* 177f28: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 177f2c: bl #0xf6c10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539888));
  fn2_f6c10(c);
  /* 177f30: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 177f34: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539896));
  fn2_1afe0c(c);
  /* 177f38: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539900));
  fn2_205d68(c);
  /* 177f3c: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177f40: tbz w8, #0, #0x178974 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178974;
L_177f44:;
  /* 177f44: nop  */
  /* nop: no architectural effect here */
  /* 177f48: adr x1, #0x25d168 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478440)));
  /* 177f4c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 177f50: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539924));
  fn2_2077e8(c);
  /* 177f54: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 177f58: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 177f5c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 177f60: b.eq #0x1784a4 */
  if (ARC_COND(c, 0)) goto L_1784a4;
L_177f64:;
  /* 177f64: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 177f68: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 177f6c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 177f70: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 177f74: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 177f78: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 177f7c: bl #0x17e9d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539968));
  fn2_17e9d4(c);
  /* 177f80: nop  */
  /* nop: no architectural effect here */
  /* 177f84: adr x26, #0x25d320 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 177f88: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177f8c: tbz w8, #0, #0x1789e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1789e0;
L_177f90:;
  /* 177f90: cbz x24, #0x177f98 */
  if ((ARC_X_R(c, 24)) == 0) goto L_177f98;
  /* 177f94: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1539992));
  fn2_24b760(c);
L_177f98:;
  /* 177f98: nop  */
  /* nop: no architectural effect here */
  /* 177f9c: adr x8, #0x25d317 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478871)));
  /* 177fa0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 177fa4: cbz x25, #0x177fac */
  if ((ARC_X_R(c, 25)) == 0) goto L_177fac;
  /* 177fa8: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540012));
  fn2_24b780(c);
L_177fac:;
  /* 177fac: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 177fb0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 177fb4: nop  */
  /* nop: no architectural effect here */
  /* 177fb8: adr x8, #0x255688 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2446984)));
  /* 177fbc: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 177fc0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 177fc4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 177fc8: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540044));
  fn2_1b5d1c(c);
  /* 177fcc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 177fd0: bl #0x1a3e94 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540052));
  fn2_1a3e94(c);
  /* 177fd4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 177fd8: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540060));
  fn2_1afe0c(c);
  /* 177fdc: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540064));
  fn2_205d68(c);
  /* 177fe0: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 177fe4: tbz w8, #0, #0x178a30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178a30;
L_177fe8:;
  /* 177fe8: nop  */
  /* nop: no architectural effect here */
  /* 177fec: adr x1, #0x25d317 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478871)));
  /* 177ff0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 177ff4: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540088));
  fn2_2077e8(c);
  /* 177ff8: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 177ffc: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 178000: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 178004: b.eq #0x1784d8 */
  if (ARC_COND(c, 0)) goto L_1784d8;
L_178008:;
  /* 178008: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 17800c: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 178010: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 178014: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 178018: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 17801c: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 178020: bl #0x17f138 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540132));
  fn2_17f138(c);
  /* 178024: nop  */
  /* nop: no architectural effect here */
  /* 178028: adr x26, #0x25d058 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478168)));
  /* 17802c: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 178030: tbz w8, #0, #0x178a9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178a9c;
L_178034:;
  /* 178034: cbz x24, #0x17803c */
  if ((ARC_X_R(c, 24)) == 0) goto L_17803c;
  /* 178038: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540156));
  fn2_24b760(c);
L_17803c:;
  /* 17803c: nop  */
  /* nop: no architectural effect here */
  /* 178040: adr x8, #0x25d050 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478160)));
  /* 178044: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 178048: cbz x25, #0x178050 */
  if ((ARC_X_R(c, 25)) == 0) goto L_178050;
  /* 17804c: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540176));
  fn2_24b780(c);
L_178050:;
  /* 178050: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 178054: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 178058: nop  */
  /* nop: no architectural effect here */
  /* 17805c: adr x8, #0x2556a0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2447008)));
  /* 178060: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 178064: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 178068: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 17806c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540208));
  fn2_1b5d1c(c);
  /* 178070: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 178074: bl #0xc93b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540216));
  fn2_c93b4(c);
  /* 178078: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 17807c: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540224));
  fn2_1afe0c(c);
  /* 178080: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540228));
  fn2_205d68(c);
  /* 178084: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 178088: tbz w8, #0, #0x178aec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178aec;
L_17808c:;
  /* 17808c: nop  */
  /* nop: no architectural effect here */
  /* 178090: adr x1, #0x25d050 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478160)));
  /* 178094: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 178098: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540252));
  fn2_2077e8(c);
  /* 17809c: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 1780a0: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 1780a4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1780a8: b.eq #0x17850c */
  if (ARC_COND(c, 0)) goto L_17850c;
L_1780ac:;
  /* 1780ac: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 1780b0: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 1780b4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1780b8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1780bc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1780c0: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 1780c4: bl #0x17f89c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540296));
  fn2_17f89c(c);
  /* 1780c8: nop  */
  /* nop: no architectural effect here */
  /* 1780cc: adr x26, #0x25cdb0 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2477488)));
  /* 1780d0: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 1780d4: tbz w8, #0, #0x178b58 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178b58;
L_1780d8:;
  /* 1780d8: cbz x24, #0x1780e0 */
  if ((ARC_X_R(c, 24)) == 0) goto L_1780e0;
  /* 1780dc: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540320));
  fn2_24b760(c);
L_1780e0:;
  /* 1780e0: nop  */
  /* nop: no architectural effect here */
  /* 1780e4: adr x8, #0x25cda8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2477480)));
  /* 1780e8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1780ec: cbz x25, #0x1780f4 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1780f4;
  /* 1780f0: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540340));
  fn2_24b780(c);
L_1780f4:;
  /* 1780f4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1780f8: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1780fc: nop  */
  /* nop: no architectural effect here */
  /* 178100: adr x8, #0x2556b8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2447032)));
  /* 178104: mov w0, #0x80 */
  ARC_W_W(c, 0, UINT64_C(128));
  /* 178108: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 17810c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 178110: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540372));
  fn2_1b5d1c(c);
  /* 178114: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 178118: bl #0x9a070 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540380));
  fn2_9a070(c);
  /* 17811c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178120: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540388));
  fn2_1afe0c(c);
  /* 178124: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540392));
  fn2_205d68(c);
  /* 178128: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 17812c: tbz w8, #0, #0x178ba8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178ba8;
L_178130:;
  /* 178130: nop  */
  /* nop: no architectural effect here */
  /* 178134: adr x1, #0x25cda8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2477480)));
  /* 178138: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 17813c: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540416));
  fn2_2077e8(c);
  /* 178140: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 178144: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 178148: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 17814c: b.eq #0x178540 */
  if (ARC_COND(c, 0)) goto L_178540;
L_178150:;
  /* 178150: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 178154: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 178158: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17815c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 178160: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178164: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 178168: bl #0x180000 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540460));
  fn2_180000(c);
  /* 17816c: nop  */
  /* nop: no architectural effect here */
  /* 178170: adr x26, #0x25d020 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478112)));
  /* 178174: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 178178: tbz w8, #0, #0x178c14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178c14;
L_17817c:;
  /* 17817c: cbz x24, #0x178184 */
  if ((ARC_X_R(c, 24)) == 0) goto L_178184;
  /* 178180: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540484));
  fn2_24b760(c);
L_178184:;
  /* 178184: nop  */
  /* nop: no architectural effect here */
  /* 178188: adr x8, #0x25d018 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478104)));
  /* 17818c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 178190: cbz x25, #0x178198 */
  if ((ARC_X_R(c, 25)) == 0) goto L_178198;
  /* 178194: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540504));
  fn2_24b780(c);
L_178198:;
  /* 178198: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 17819c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1781a0: nop  */
  /* nop: no architectural effect here */
  /* 1781a4: adr x8, #0x2556d0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2447056)));
  /* 1781a8: mov w0, #0x38 */
  ARC_W_W(c, 0, UINT64_C(56));
  /* 1781ac: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1781b0: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1781b4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540536));
  fn2_1b5d1c(c);
  /* 1781b8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1781bc: bl #0xc262c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540544));
  fn2_c262c(c);
  /* 1781c0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1781c4: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540552));
  fn2_1afe0c(c);
  /* 1781c8: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540556));
  fn2_205d68(c);
  /* 1781cc: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 1781d0: tbz w8, #0, #0x178c64 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178c64;
L_1781d4:;
  /* 1781d4: nop  */
  /* nop: no architectural effect here */
  /* 1781d8: adr x1, #0x25d018 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478104)));
  /* 1781dc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1781e0: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540580));
  fn2_2077e8(c);
  /* 1781e4: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 1781e8: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 1781ec: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 1781f0: b.eq #0x178574 */
  if (ARC_COND(c, 0)) goto L_178574;
L_1781f4:;
  /* 1781f4: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 1781f8: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 1781fc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 178200: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 178204: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178208: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 17820c: bl #0x180764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540624));
  fn2_180764(c);
  /* 178210: nop  */
  /* nop: no architectural effect here */
  /* 178214: adr x26, #0x25d2c8 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478792)));
  /* 178218: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 17821c: tbz w8, #0, #0x178cd0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178cd0;
L_178220:;
  /* 178220: cbz x24, #0x178228 */
  if ((ARC_X_R(c, 24)) == 0) goto L_178228;
  /* 178224: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540648));
  fn2_24b760(c);
L_178228:;
  /* 178228: nop  */
  /* nop: no architectural effect here */
  /* 17822c: adr x8, #0x25d2c0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478784)));
  /* 178230: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 178234: cbz x25, #0x17823c */
  if ((ARC_X_R(c, 25)) == 0) goto L_17823c;
  /* 178238: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540668));
  fn2_24b780(c);
L_17823c:;
  /* 17823c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 178240: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 178244: nop  */
  /* nop: no architectural effect here */
  /* 178248: adr x8, #0x2556e8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2447080)));
  /* 17824c: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* 178250: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 178254: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 178258: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540700));
  fn2_1b5d1c(c);
  /* 17825c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 178260: bl #0x170964 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540708));
  fn2_170964(c);
  /* 178264: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178268: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540716));
  fn2_1afe0c(c);
  /* 17826c: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540720));
  fn2_205d68(c);
  /* 178270: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 178274: tbz w8, #0, #0x178d20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178d20;
L_178278:;
  /* 178278: nop  */
  /* nop: no architectural effect here */
  /* 17827c: adr x1, #0x25d2c0 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478784)));
  /* 178280: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 178284: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540744));
  fn2_2077e8(c);
  /* 178288: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 17828c: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 178290: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 178294: b.eq #0x1785a8 */
  if (ARC_COND(c, 0)) goto L_1785a8;
L_178298:;
  /* 178298: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 17829c: str x21, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 21));
  /* 1782a0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1782a4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1782a8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1782ac: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 1782b0: bl #0x180ec8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540788));
  fn2_180ec8(c);
  /* 1782b4: nop  */
  /* nop: no architectural effect here */
  /* 1782b8: adr x26, #0x25d338 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478904)));
  /* 1782bc: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 1782c0: tbz w8, #0, #0x178d8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178d8c;
L_1782c4:;
  /* 1782c4: cbz x24, #0x1782cc */
  if ((ARC_X_R(c, 24)) == 0) goto L_1782cc;
  /* 1782c8: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540812));
  fn2_24b760(c);
L_1782cc:;
  /* 1782cc: nop  */
  /* nop: no architectural effect here */
  /* 1782d0: adr x8, #0x25d32d */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478893)));
  /* 1782d4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1782d8: cbz x25, #0x1782e0 */
  if ((ARC_X_R(c, 25)) == 0) goto L_1782e0;
  /* 1782dc: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540832));
  fn2_24b780(c);
L_1782e0:;
  /* 1782e0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1782e4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1782e8: nop  */
  /* nop: no architectural effect here */
  /* 1782ec: adr x8, #0x255700 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2447104)));
  /* 1782f0: mov w0, #0x28 */
  ARC_W_W(c, 0, UINT64_C(40));
  /* 1782f4: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1782f8: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1782fc: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540864));
  fn2_1b5d1c(c);
  /* 178300: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 178304: bl #0x1865f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540872));
  fn2_1865f8(c);
  /* 178308: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 17830c: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540880));
  fn2_1afe0c(c);
  /* 178310: bl #0x205d68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540884));
  fn2_205d68(c);
  /* 178314: ldarb w8, [x26] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 26)));
  /* 178318: tbz w8, #0, #0x178ddc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_178ddc;
L_17831c:;
  /* 17831c: nop  */
  /* nop: no architectural effect here */
  /* 178320: adr x1, #0x25d32d */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478893)));
  /* 178324: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 178328: bl #0x2077e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540908));
  fn2_2077e8(c);
  /* 17832c: ldp w8, w9, [x23] */
  { const uint64_t _pa = ARC_X_R(c, 23);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* 178330: ldr x0, [x23, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* 178334: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 178338: b.eq #0x1785dc */
  if (ARC_COND(c, 0)) goto L_1785dc;
L_17833c:;
  /* 17833c: add w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 178340: str x19, [x0, w8, uxtw #3] */
  arc_st64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3)), ARC_X_R(c, 19));
  /* 178344: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 178348: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 17834c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178350: str w9, [x22, #0x300] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(768)), ARC_W_R(c, 9));
  /* 178354: bl #0x18162c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540952));
  fn2_18162c(c);
  /* 178358: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17835c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 178360: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178364: bl #0x181e84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540968));
  fn2_181e84(c);
  /* 178368: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17836c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 178370: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178374: bl #0x1836ac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1540984));
  fn2_1836ac(c);
  /* 178378: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17837c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 178380: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178384: bl #0x183e18 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541000));
  fn2_183e18(c);
  /* 178388: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17838c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 178390: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178394: bl #0x184738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541016));
  fn2_184738(c);
  /* 178398: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17839c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1783a0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1783a4: bl #0x184ff0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541032));
  fn2_184ff0(c);
  /* 1783a8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1783ac: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1783b0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1783b4: bl #0x185754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541048));
  fn2_185754(c);
L_1783b8:;
  /* 1783b8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1783bc: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1783c0: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1783c4: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1783c8: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1783cc: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1783d0: ret  */
  return;
L_1783d4:;
  /* 1783d4: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 1783d8: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1783dc: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 1783e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1783e4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1783e8: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1783ec: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 1783f0: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 1783f4: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541112));
  fn2_1b5bd8(c);
  /* 1783f8: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 1783fc: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 178400: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 178404: b #0x177ca4 */
  goto L_177ca4;
L_178408:;
  /* 178408: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 17840c: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 178410: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 178414: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178418: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 17841c: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 178420: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 178424: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 178428: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541164));
  fn2_1b5bd8(c);
  /* 17842c: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 178430: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 178434: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 178438: b #0x177d48 */
  goto L_177d48;
L_17843c:;
  /* 17843c: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 178440: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 178444: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 178448: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 17844c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 178450: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 178454: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 178458: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 17845c: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541216));
  fn2_1b5bd8(c);
  /* 178460: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 178464: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 178468: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 17846c: b #0x177e1c */
  goto L_177e1c;
L_178470:;
  /* 178470: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 178474: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 178478: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 17847c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178480: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 178484: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 178488: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 17848c: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 178490: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541268));
  fn2_1b5bd8(c);
  /* 178494: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 178498: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 17849c: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 1784a0: b #0x177ec0 */
  goto L_177ec0;
L_1784a4:;
  /* 1784a4: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 1784a8: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1784ac: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 1784b0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1784b4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1784b8: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1784bc: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 1784c0: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 1784c4: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541320));
  fn2_1b5bd8(c);
  /* 1784c8: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 1784cc: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 1784d0: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 1784d4: b #0x177f64 */
  goto L_177f64;
L_1784d8:;
  /* 1784d8: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 1784dc: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1784e0: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 1784e4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1784e8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1784ec: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1784f0: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 1784f4: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 1784f8: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541372));
  fn2_1b5bd8(c);
  /* 1784fc: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 178500: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 178504: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 178508: b #0x178008 */
  goto L_178008;
L_17850c:;
  /* 17850c: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 178510: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 178514: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 178518: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 17851c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 178520: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 178524: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 178528: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 17852c: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541424));
  fn2_1b5bd8(c);
  /* 178530: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 178534: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 178538: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 17853c: b #0x1780ac */
  goto L_1780ac;
L_178540:;
  /* 178540: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 178544: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 178548: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 17854c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178550: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 178554: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 178558: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 17855c: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 178560: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541476));
  fn2_1b5bd8(c);
  /* 178564: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 178568: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 17856c: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 178570: b #0x178150 */
  goto L_178150;
L_178574:;
  /* 178574: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 178578: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 17857c: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 178580: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 178584: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 178588: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 17858c: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 178590: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 178594: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541528));
  fn2_1b5bd8(c);
  /* 178598: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 17859c: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 1785a0: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 1785a4: b #0x1781f4 */
  goto L_1781f4;
L_1785a8:;
  /* 1785a8: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 1785ac: adrp x26, #0x25d000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1785b0: add x26, x26, #0x304 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) + UINT64_C(772)));
  /* 1785b4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1785b8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1785bc: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1785c0: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 1785c4: str w8, [x26] */
  arc_st32(ARC_X_R(c, 26), ARC_W_R(c, 8));
  /* 1785c8: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541580));
  fn2_1b5bd8(c);
  /* 1785cc: stur x0, [x26, #4] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(4)), ARC_X_R(c, 0));
  /* 1785d0: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 1785d4: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 1785d8: b #0x178298 */
  goto L_178298;
L_1785dc:;
  /* 1785dc: lsl w8, w8, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 1785e0: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1785e4: add x20, x20, #0x304 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(772)));
  /* 1785e8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1785ec: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1785f0: csinc w8, w8, wzr, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
  /* 1785f4: ubfiz x1, x8, #3, #0x20 */
  ARC_X_W(c, 1, ((uint64_t)((((uint64_t)(ARC_X_R(c, 8))) & UINT64_C(4294967295))) << 3));
  /* 1785f8: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 1785fc: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541632));
  fn2_1b5bd8(c);
  /* 178600: stur x0, [x20, #4] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4)), ARC_X_R(c, 0));
  /* 178604: cbz x0, #0x178610 */
  if ((ARC_X_R(c, 0)) == 0) goto L_178610;
  /* 178608: ldr w8, [x22, #0x300] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(768))));
  /* 17860c: b #0x17833c */
  goto L_17833c;
L_178610:;
  /* 178610: adrp x0, #0x28000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(163840)));
  /* 178614: add x0, x0, #0x795 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1941)));
  /* 178618: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 17861c: add x1, x1, #0x74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(116)));
  /* 178620: adrp x3, #0x2b000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(176128)));
  /* 178624: add x3, x3, #0x606 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(1542)));
  /* 178628: adrp x4, #0x20000 */
  ARC_X_W(c, 4, (arc_image_bases[2] + UINT64_C(131072)));
  /* 17862c: add x4, x4, #0x16c */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(364)));
  /* 178630: mov w2, #0x42 */
  ARC_W_W(c, 2, UINT64_C(66));
  /* 178634: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 178638: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 17863c: bl #0x1b5598 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541696));
  fn2_1b5598(c);
  /* 178640: bl #0x1b5b50 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541700));
  fn2_1b5b50(c);
  /* 178644: brk #1 */
  arc_trap(c, "brk");
L_178648:;
  /* 178648: nop  */
  /* nop: no architectural effect here */
  /* 17864c: adr x0, #0x25d148 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478408)));
  /* 178650: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541716));
  fn2_24b710(c);
  /* 178654: cbz w0, #0x177bf0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_177bf0;
  /* 178658: nop  */
  /* nop: no architectural effect here */
  /* 17865c: adr x19, #0x25d140 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478400)));
  /* 178660: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178664: add x1, x1, #0x5bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1468)));
  /* 178668: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 17866c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541744));
  fn2_1b907c(c);
  /* 178670: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178674: nop  */
  /* nop: no architectural effect here */
  /* 178678: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 17867c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178680: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 178684: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541768));
  fn2_24b6f0(c);
  /* 178688: nop  */
  /* nop: no architectural effect here */
  /* 17868c: adr x0, #0x25d148 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478408)));
  /* 178690: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541780));
  fn2_24b720(c);
  /* 178694: b #0x177bf0 */
  goto L_177bf0;
L_178698:;
  /* 178698: nop  */
  /* nop: no architectural effect here */
  /* 17869c: adr x8, #0x25d148 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478408)));
  /* 1786a0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1786a4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1786a8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541804));
  fn2_24b710(c);
  /* 1786ac: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1786b0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1786b4: cbz w8, #0x177c78 */
  if ((ARC_W_R(c, 8)) == 0) goto L_177c78;
  /* 1786b8: nop  */
  /* nop: no architectural effect here */
  /* 1786bc: adr x22, #0x25d140 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2478400)));
  /* 1786c0: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1786c4: add x1, x1, #0x5bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1468)));
  /* 1786c8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1786cc: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541840));
  fn2_1b907c(c);
  /* 1786d0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1786d4: nop  */
  /* nop: no architectural effect here */
  /* 1786d8: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1786dc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1786e0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1786e4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541864));
  fn2_24b6f0(c);
  /* 1786e8: nop  */
  /* nop: no architectural effect here */
  /* 1786ec: adr x0, #0x25d148 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478408)));
  /* 1786f0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541876));
  fn2_24b720(c);
  /* 1786f4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1786f8: b #0x177c78 */
  goto L_177c78;
L_1786fc:;
  /* 1786fc: nop  */
  /* nop: no architectural effect here */
  /* 178700: adr x0, #0x25d2b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 178704: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541896));
  fn2_24b710(c);
  /* 178708: cbz w0, #0x177cd0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_177cd0;
  /* 17870c: nop  */
  /* nop: no architectural effect here */
  /* 178710: adr x21, #0x25d2a8 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478760)));
  /* 178714: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178718: add x1, x1, #0x5e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1508)));
  /* 17871c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178720: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541924));
  fn2_1b907c(c);
  /* 178724: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178728: nop  */
  /* nop: no architectural effect here */
  /* 17872c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178730: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178734: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 178738: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541948));
  fn2_24b6f0(c);
  /* 17873c: nop  */
  /* nop: no architectural effect here */
  /* 178740: adr x0, #0x25d2b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 178744: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541960));
  fn2_24b720(c);
  /* 178748: b #0x177cd0 */
  goto L_177cd0;
L_17874c:;
  /* 17874c: nop  */
  /* nop: no architectural effect here */
  /* 178750: adr x8, #0x25d2b0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 178754: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 178758: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 17875c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1541984));
  fn2_24b710(c);
  /* 178760: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 178764: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178768: cbz w8, #0x177d28 */
  if ((ARC_W_R(c, 8)) == 0) goto L_177d28;
  /* 17876c: nop  */
  /* nop: no architectural effect here */
  /* 178770: adr x22, #0x25d2a8 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2478760)));
  /* 178774: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178778: add x1, x1, #0x5e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1508)));
  /* 17877c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 178780: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542020));
  fn2_1b907c(c);
  /* 178784: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178788: nop  */
  /* nop: no architectural effect here */
  /* 17878c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178790: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178794: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 178798: adrp x22, #0x25d000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 17879c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542048));
  fn2_24b6f0(c);
  /* 1787a0: nop  */
  /* nop: no architectural effect here */
  /* 1787a4: adr x0, #0x25d2b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 1787a8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542060));
  fn2_24b720(c);
  /* 1787ac: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 1787b0: b #0x177d28 */
  goto L_177d28;
L_1787b4:;
  /* 1787b4: nop  */
  /* nop: no architectural effect here */
  /* 1787b8: adr x0, #0x25d098 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478232)));
  /* 1787bc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542080));
  fn2_24b710(c);
  /* 1787c0: cbz w0, #0x177d74 */
  if ((ARC_W_R(c, 0)) == 0) goto L_177d74;
  /* 1787c4: nop  */
  /* nop: no architectural effect here */
  /* 1787c8: adr x21, #0x25d090 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478224)));
  /* 1787cc: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1787d0: add x1, x1, #0x59c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1436)));
  /* 1787d4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1787d8: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542108));
  fn2_1b907c(c);
  /* 1787dc: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1787e0: nop  */
  /* nop: no architectural effect here */
  /* 1787e4: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1787e8: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1787ec: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1787f0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542132));
  fn2_24b6f0(c);
  /* 1787f4: nop  */
  /* nop: no architectural effect here */
  /* 1787f8: adr x0, #0x25d098 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478232)));
  /* 1787fc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542144));
  fn2_24b720(c);
  /* 178800: b #0x177d74 */
  goto L_177d74;
L_178804:;
  /* 178804: nop  */
  /* nop: no architectural effect here */
  /* 178808: adr x8, #0x25d098 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478232)));
  /* 17880c: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 178810: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 178814: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542168));
  fn2_24b710(c);
  /* 178818: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 17881c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178820: cbz w8, #0x177dfc */
  if ((ARC_W_R(c, 8)) == 0) goto L_177dfc;
  /* 178824: nop  */
  /* nop: no architectural effect here */
  /* 178828: adr x27, #0x25d090 */
  ARC_X_W(c, 27, (arc_image_bases[2] + UINT64_C(2478224)));
  /* 17882c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178830: add x1, x1, #0x59c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1436)));
  /* 178834: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* 178838: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542204));
  fn2_1b907c(c);
  /* 17883c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178840: nop  */
  /* nop: no architectural effect here */
  /* 178844: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178848: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 17884c: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 178850: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542228));
  fn2_24b6f0(c);
  /* 178854: nop  */
  /* nop: no architectural effect here */
  /* 178858: adr x0, #0x25d098 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478232)));
  /* 17885c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542240));
  fn2_24b720(c);
  /* 178860: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178864: b #0x177dfc */
  goto L_177dfc;
L_178868:;
  /* 178868: nop  */
  /* nop: no architectural effect here */
  /* 17886c: adr x0, #0x25d120 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478368)));
  /* 178870: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542260));
  fn2_24b710(c);
  /* 178874: cbz w0, #0x177e48 */
  if ((ARC_W_R(c, 0)) == 0) goto L_177e48;
  /* 178878: nop  */
  /* nop: no architectural effect here */
  /* 17887c: adr x21, #0x25d118 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478360)));
  /* 178880: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178884: add x1, x1, #0x3c0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(960)));
  /* 178888: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 17888c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542288));
  fn2_1b907c(c);
  /* 178890: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178894: nop  */
  /* nop: no architectural effect here */
  /* 178898: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 17889c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1788a0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1788a4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542312));
  fn2_24b6f0(c);
  /* 1788a8: nop  */
  /* nop: no architectural effect here */
  /* 1788ac: adr x0, #0x25d120 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478368)));
  /* 1788b0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542324));
  fn2_24b720(c);
  /* 1788b4: b #0x177e48 */
  goto L_177e48;
L_1788b8:;
  /* 1788b8: nop  */
  /* nop: no architectural effect here */
  /* 1788bc: adr x8, #0x25d120 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478368)));
  /* 1788c0: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 1788c4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1788c8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542348));
  fn2_24b710(c);
  /* 1788cc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1788d0: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 1788d4: cbz w8, #0x177ea0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_177ea0;
  /* 1788d8: mov x27, x23 */
  ARC_X_W(c, 27, ARC_X_R(c, 23));
  /* 1788dc: nop  */
  /* nop: no architectural effect here */
  /* 1788e0: adr x23, #0x25d118 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478360)));
  /* 1788e4: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1788e8: add x1, x1, #0x3c0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(960)));
  /* 1788ec: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1788f0: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542388));
  fn2_1b907c(c);
  /* 1788f4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1788f8: nop  */
  /* nop: no architectural effect here */
  /* 1788fc: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178900: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178904: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 178908: mov x23, x27 */
  ARC_X_W(c, 23, ARC_X_R(c, 27));
  /* 17890c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542416));
  fn2_24b6f0(c);
  /* 178910: nop  */
  /* nop: no architectural effect here */
  /* 178914: adr x0, #0x25d120 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478368)));
  /* 178918: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542428));
  fn2_24b720(c);
  /* 17891c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178920: b #0x177ea0 */
  goto L_177ea0;
L_178924:;
  /* 178924: nop  */
  /* nop: no architectural effect here */
  /* 178928: adr x0, #0x25d170 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478448)));
  /* 17892c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542448));
  fn2_24b710(c);
  /* 178930: cbz w0, #0x177eec */
  if ((ARC_W_R(c, 0)) == 0) goto L_177eec;
  /* 178934: nop  */
  /* nop: no architectural effect here */
  /* 178938: adr x21, #0x25d168 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478440)));
  /* 17893c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178940: add x1, x1, #0x4c8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1224)));
  /* 178944: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178948: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542476));
  fn2_1b907c(c);
  /* 17894c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178950: nop  */
  /* nop: no architectural effect here */
  /* 178954: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178958: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 17895c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 178960: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542500));
  fn2_24b6f0(c);
  /* 178964: nop  */
  /* nop: no architectural effect here */
  /* 178968: adr x0, #0x25d170 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478448)));
  /* 17896c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542512));
  fn2_24b720(c);
  /* 178970: b #0x177eec */
  goto L_177eec;
L_178974:;
  /* 178974: nop  */
  /* nop: no architectural effect here */
  /* 178978: adr x8, #0x25d170 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478448)));
  /* 17897c: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 178980: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 178984: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542536));
  fn2_24b710(c);
  /* 178988: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 17898c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178990: cbz w8, #0x177f44 */
  if ((ARC_W_R(c, 8)) == 0) goto L_177f44;
  /* 178994: mov x27, x23 */
  ARC_X_W(c, 27, ARC_X_R(c, 23));
  /* 178998: nop  */
  /* nop: no architectural effect here */
  /* 17899c: adr x23, #0x25d168 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478440)));
  /* 1789a0: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1789a4: add x1, x1, #0x4c8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1224)));
  /* 1789a8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1789ac: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542576));
  fn2_1b907c(c);
  /* 1789b0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1789b4: nop  */
  /* nop: no architectural effect here */
  /* 1789b8: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1789bc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1789c0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1789c4: mov x23, x27 */
  ARC_X_W(c, 23, ARC_X_R(c, 27));
  /* 1789c8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542604));
  fn2_24b6f0(c);
  /* 1789cc: nop  */
  /* nop: no architectural effect here */
  /* 1789d0: adr x0, #0x25d170 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478448)));
  /* 1789d4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542616));
  fn2_24b720(c);
  /* 1789d8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 1789dc: b #0x177f44 */
  goto L_177f44;
L_1789e0:;
  /* 1789e0: nop  */
  /* nop: no architectural effect here */
  /* 1789e4: adr x0, #0x25d320 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 1789e8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542636));
  fn2_24b710(c);
  /* 1789ec: cbz w0, #0x177f90 */
  if ((ARC_W_R(c, 0)) == 0) goto L_177f90;
  /* 1789f0: nop  */
  /* nop: no architectural effect here */
  /* 1789f4: adr x21, #0x25d317 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478871)));
  /* 1789f8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1789fc: add x1, x1, #0x448 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1096)));
  /* 178a00: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178a04: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542664));
  fn2_1b907c(c);
  /* 178a08: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178a0c: nop  */
  /* nop: no architectural effect here */
  /* 178a10: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178a14: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178a18: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 178a1c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542688));
  fn2_24b6f0(c);
  /* 178a20: nop  */
  /* nop: no architectural effect here */
  /* 178a24: adr x0, #0x25d320 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 178a28: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542700));
  fn2_24b720(c);
  /* 178a2c: b #0x177f90 */
  goto L_177f90;
L_178a30:;
  /* 178a30: nop  */
  /* nop: no architectural effect here */
  /* 178a34: adr x8, #0x25d320 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 178a38: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 178a3c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 178a40: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542724));
  fn2_24b710(c);
  /* 178a44: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 178a48: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178a4c: cbz w8, #0x177fe8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_177fe8;
  /* 178a50: mov x27, x23 */
  ARC_X_W(c, 27, ARC_X_R(c, 23));
  /* 178a54: nop  */
  /* nop: no architectural effect here */
  /* 178a58: adr x23, #0x25d317 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478871)));
  /* 178a5c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178a60: add x1, x1, #0x448 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1096)));
  /* 178a64: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 178a68: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542764));
  fn2_1b907c(c);
  /* 178a6c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178a70: nop  */
  /* nop: no architectural effect here */
  /* 178a74: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178a78: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178a7c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 178a80: mov x23, x27 */
  ARC_X_W(c, 23, ARC_X_R(c, 27));
  /* 178a84: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542792));
  fn2_24b6f0(c);
  /* 178a88: nop  */
  /* nop: no architectural effect here */
  /* 178a8c: adr x0, #0x25d320 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478880)));
  /* 178a90: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542804));
  fn2_24b720(c);
  /* 178a94: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178a98: b #0x177fe8 */
  goto L_177fe8;
L_178a9c:;
  /* 178a9c: nop  */
  /* nop: no architectural effect here */
  /* 178aa0: adr x0, #0x25d058 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478168)));
  /* 178aa4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542824));
  fn2_24b710(c);
  /* 178aa8: cbz w0, #0x178034 */
  if ((ARC_W_R(c, 0)) == 0) goto L_178034;
  /* 178aac: nop  */
  /* nop: no architectural effect here */
  /* 178ab0: adr x21, #0x25d050 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478160)));
  /* 178ab4: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178ab8: add x1, x1, #0x56c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1388)));
  /* 178abc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178ac0: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542852));
  fn2_1b907c(c);
  /* 178ac4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178ac8: nop  */
  /* nop: no architectural effect here */
  /* 178acc: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178ad0: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178ad4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 178ad8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542876));
  fn2_24b6f0(c);
  /* 178adc: nop  */
  /* nop: no architectural effect here */
  /* 178ae0: adr x0, #0x25d058 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478168)));
  /* 178ae4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542888));
  fn2_24b720(c);
  /* 178ae8: b #0x178034 */
  goto L_178034;
L_178aec:;
  /* 178aec: nop  */
  /* nop: no architectural effect here */
  /* 178af0: adr x8, #0x25d058 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478168)));
  /* 178af4: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 178af8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 178afc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542912));
  fn2_24b710(c);
  /* 178b00: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 178b04: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178b08: cbz w8, #0x17808c */
  if ((ARC_W_R(c, 8)) == 0) goto L_17808c;
  /* 178b0c: mov x27, x23 */
  ARC_X_W(c, 27, ARC_X_R(c, 23));
  /* 178b10: nop  */
  /* nop: no architectural effect here */
  /* 178b14: adr x23, #0x25d050 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478160)));
  /* 178b18: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178b1c: add x1, x1, #0x56c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1388)));
  /* 178b20: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 178b24: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542952));
  fn2_1b907c(c);
  /* 178b28: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178b2c: nop  */
  /* nop: no architectural effect here */
  /* 178b30: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178b34: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178b38: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 178b3c: mov x23, x27 */
  ARC_X_W(c, 23, ARC_X_R(c, 27));
  /* 178b40: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542980));
  fn2_24b6f0(c);
  /* 178b44: nop  */
  /* nop: no architectural effect here */
  /* 178b48: adr x0, #0x25d058 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478168)));
  /* 178b4c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1542992));
  fn2_24b720(c);
  /* 178b50: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178b54: b #0x17808c */
  goto L_17808c;
L_178b58:;
  /* 178b58: nop  */
  /* nop: no architectural effect here */
  /* 178b5c: adr x0, #0x25cdb0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477488)));
  /* 178b60: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543012));
  fn2_24b710(c);
  /* 178b64: cbz w0, #0x1780d8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1780d8;
  /* 178b68: nop  */
  /* nop: no architectural effect here */
  /* 178b6c: adr x21, #0x25cda8 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2477480)));
  /* 178b70: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178b74: add x1, x1, #0x51c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1308)));
  /* 178b78: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178b7c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543040));
  fn2_1b907c(c);
  /* 178b80: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178b84: nop  */
  /* nop: no architectural effect here */
  /* 178b88: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178b8c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178b90: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 178b94: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543064));
  fn2_24b6f0(c);
  /* 178b98: nop  */
  /* nop: no architectural effect here */
  /* 178b9c: adr x0, #0x25cdb0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477488)));
  /* 178ba0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543076));
  fn2_24b720(c);
  /* 178ba4: b #0x1780d8 */
  goto L_1780d8;
L_178ba8:;
  /* 178ba8: nop  */
  /* nop: no architectural effect here */
  /* 178bac: adr x8, #0x25cdb0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2477488)));
  /* 178bb0: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 178bb4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 178bb8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543100));
  fn2_24b710(c);
  /* 178bbc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 178bc0: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178bc4: cbz w8, #0x178130 */
  if ((ARC_W_R(c, 8)) == 0) goto L_178130;
  /* 178bc8: mov x27, x23 */
  ARC_X_W(c, 27, ARC_X_R(c, 23));
  /* 178bcc: nop  */
  /* nop: no architectural effect here */
  /* 178bd0: adr x23, #0x25cda8 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2477480)));
  /* 178bd4: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178bd8: add x1, x1, #0x51c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1308)));
  /* 178bdc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 178be0: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543140));
  fn2_1b907c(c);
  /* 178be4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178be8: nop  */
  /* nop: no architectural effect here */
  /* 178bec: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178bf0: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178bf4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 178bf8: mov x23, x27 */
  ARC_X_W(c, 23, ARC_X_R(c, 27));
  /* 178bfc: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543168));
  fn2_24b6f0(c);
  /* 178c00: nop  */
  /* nop: no architectural effect here */
  /* 178c04: adr x0, #0x25cdb0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477488)));
  /* 178c08: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543180));
  fn2_24b720(c);
  /* 178c0c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178c10: b #0x178130 */
  goto L_178130;
L_178c14:;
  /* 178c14: nop  */
  /* nop: no architectural effect here */
  /* 178c18: adr x0, #0x25d020 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478112)));
  /* 178c1c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543200));
  fn2_24b710(c);
  /* 178c20: cbz w0, #0x17817c */
  if ((ARC_W_R(c, 0)) == 0) goto L_17817c;
  /* 178c24: nop  */
  /* nop: no architectural effect here */
  /* 178c28: adr x21, #0x25d018 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478104)));
  /* 178c2c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178c30: add x1, x1, #0x628 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1576)));
  /* 178c34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178c38: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543228));
  fn2_1b907c(c);
  /* 178c3c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178c40: nop  */
  /* nop: no architectural effect here */
  /* 178c44: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178c48: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178c4c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 178c50: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543252));
  fn2_24b6f0(c);
  /* 178c54: nop  */
  /* nop: no architectural effect here */
  /* 178c58: adr x0, #0x25d020 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478112)));
  /* 178c5c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543264));
  fn2_24b720(c);
  /* 178c60: b #0x17817c */
  goto L_17817c;
L_178c64:;
  /* 178c64: nop  */
  /* nop: no architectural effect here */
  /* 178c68: adr x8, #0x25d020 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478112)));
  /* 178c6c: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 178c70: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 178c74: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543288));
  fn2_24b710(c);
  /* 178c78: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 178c7c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178c80: cbz w8, #0x1781d4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1781d4;
  /* 178c84: mov x27, x23 */
  ARC_X_W(c, 27, ARC_X_R(c, 23));
  /* 178c88: nop  */
  /* nop: no architectural effect here */
  /* 178c8c: adr x23, #0x25d018 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478104)));
  /* 178c90: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178c94: add x1, x1, #0x628 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1576)));
  /* 178c98: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 178c9c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543328));
  fn2_1b907c(c);
  /* 178ca0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178ca4: nop  */
  /* nop: no architectural effect here */
  /* 178ca8: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178cac: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178cb0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 178cb4: mov x23, x27 */
  ARC_X_W(c, 23, ARC_X_R(c, 27));
  /* 178cb8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543356));
  fn2_24b6f0(c);
  /* 178cbc: nop  */
  /* nop: no architectural effect here */
  /* 178cc0: adr x0, #0x25d020 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478112)));
  /* 178cc4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543368));
  fn2_24b720(c);
  /* 178cc8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178ccc: b #0x1781d4 */
  goto L_1781d4;
L_178cd0:;
  /* 178cd0: nop  */
  /* nop: no architectural effect here */
  /* 178cd4: adr x0, #0x25d2c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478792)));
  /* 178cd8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543388));
  fn2_24b710(c);
  /* 178cdc: cbz w0, #0x178220 */
  if ((ARC_W_R(c, 0)) == 0) goto L_178220;
  /* 178ce0: nop  */
  /* nop: no architectural effect here */
  /* 178ce4: adr x21, #0x25d2c0 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478784)));
  /* 178ce8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178cec: add x1, x1, #0x3a4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(932)));
  /* 178cf0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178cf4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543416));
  fn2_1b907c(c);
  /* 178cf8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178cfc: nop  */
  /* nop: no architectural effect here */
  /* 178d00: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178d04: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178d08: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 178d0c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543440));
  fn2_24b6f0(c);
  /* 178d10: nop  */
  /* nop: no architectural effect here */
  /* 178d14: adr x0, #0x25d2c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478792)));
  /* 178d18: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543452));
  fn2_24b720(c);
  /* 178d1c: b #0x178220 */
  goto L_178220;
L_178d20:;
  /* 178d20: nop  */
  /* nop: no architectural effect here */
  /* 178d24: adr x8, #0x25d2c8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478792)));
  /* 178d28: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 178d2c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 178d30: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543476));
  fn2_24b710(c);
  /* 178d34: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 178d38: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178d3c: cbz w8, #0x178278 */
  if ((ARC_W_R(c, 8)) == 0) goto L_178278;
  /* 178d40: mov x27, x23 */
  ARC_X_W(c, 27, ARC_X_R(c, 23));
  /* 178d44: nop  */
  /* nop: no architectural effect here */
  /* 178d48: adr x23, #0x25d2c0 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478784)));
  /* 178d4c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178d50: add x1, x1, #0x3a4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(932)));
  /* 178d54: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 178d58: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543516));
  fn2_1b907c(c);
  /* 178d5c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178d60: nop  */
  /* nop: no architectural effect here */
  /* 178d64: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178d68: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178d6c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 178d70: mov x23, x27 */
  ARC_X_W(c, 23, ARC_X_R(c, 27));
  /* 178d74: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543544));
  fn2_24b6f0(c);
  /* 178d78: nop  */
  /* nop: no architectural effect here */
  /* 178d7c: adr x0, #0x25d2c8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478792)));
  /* 178d80: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543556));
  fn2_24b720(c);
  /* 178d84: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 178d88: b #0x178278 */
  goto L_178278;
L_178d8c:;
  /* 178d8c: nop  */
  /* nop: no architectural effect here */
  /* 178d90: adr x0, #0x25d338 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478904)));
  /* 178d94: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543576));
  fn2_24b710(c);
  /* 178d98: cbz w0, #0x1782c4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1782c4;
  /* 178d9c: nop  */
  /* nop: no architectural effect here */
  /* 178da0: adr x21, #0x25d32d */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478893)));
  /* 178da4: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178da8: add x1, x1, #0x4a8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1192)));
  /* 178dac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178db0: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543604));
  fn2_1b907c(c);
  /* 178db4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178db8: nop  */
  /* nop: no architectural effect here */
  /* 178dbc: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178dc0: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178dc4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 178dc8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543628));
  fn2_24b6f0(c);
  /* 178dcc: nop  */
  /* nop: no architectural effect here */
  /* 178dd0: adr x0, #0x25d338 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478904)));
  /* 178dd4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543640));
  fn2_24b720(c);
  /* 178dd8: b #0x1782c4 */
  goto L_1782c4;
L_178ddc:;
  /* 178ddc: nop  */
  /* nop: no architectural effect here */
  /* 178de0: adr x8, #0x25d338 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478904)));
  /* 178de4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 178de8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 178dec: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543664));
  fn2_24b710(c);
  /* 178df0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 178df4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178df8: cbz w8, #0x17831c */
  if ((ARC_W_R(c, 8)) == 0) goto L_17831c;
  /* 178dfc: nop  */
  /* nop: no architectural effect here */
  /* 178e00: adr x20, #0x25d32d */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478893)));
  /* 178e04: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 178e08: add x1, x1, #0x4a8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1192)));
  /* 178e0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 178e10: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543700));
  fn2_1b907c(c);
  /* 178e14: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 178e18: nop  */
  /* nop: no architectural effect here */
  /* 178e1c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 178e20: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 178e24: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 178e28: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543724));
  fn2_24b6f0(c);
  /* 178e2c: nop  */
  /* nop: no architectural effect here */
  /* 178e30: adr x0, #0x25d338 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478904)));
  /* 178e34: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1543736));
  fn2_24b720(c);
  /* 178e38: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 178e3c: b #0x17831c */
  goto L_17831c;
}

void fn2_17afd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077408208));
  /* 17afd0: cmp x1, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 0));
  /* 17afd4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 17afd8: strb w8, [x1, #0x18] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(24)), ARC_W_R(c, 8));
  /* 17afdc: b.eq #0x17b0c8 */
  if (ARC_COND(c, 0)) goto L_17b0c8;
  /* 17afe0: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 17afe4: b #0x17b004 */
  goto L_17b004;
L_17afe8:;
  /* 17afe8: cmp x8, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0));
  /* 17afec: strb w10, [x9, #0x18] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(24)), ARC_W_R(c, 10));
  /* 17aff0: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 17aff4: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* 17aff8: strb w9, [x8, #0x18] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(24)), ARC_W_R(c, 9));
  /* 17affc: strb w10, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 10));
  /* 17b000: b.eq #0x17b0c8 */
  if (ARC_COND(c, 0)) goto L_17b0c8;
L_17b004:;
  /* 17b004: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 17b008: ldrb w8, [x9, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(24))));
  /* 17b00c: tbnz w8, #0, #0x17b0c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_17b0c8;
  /* 17b010: ldr x8, [x9, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 17b014: ldr x11, [x8] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 8)));
  /* 17b018: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 17b01c: b.eq #0x17b030 */
  if (ARC_COND(c, 0)) goto L_17b030;
  /* 17b020: cbz x11, #0x17b0cc */
  if ((ARC_X_R(c, 11)) == 0) goto L_17b0cc;
  /* 17b024: ldrb w12, [x11, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(24));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(24));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* 17b028: cbz w12, #0x17afe8 */
  if ((ARC_W_R(c, 12)) == 0) goto L_17afe8;
  /* 17b02c: b #0x17b0cc */
  goto L_17b0cc;
L_17b030:;
  /* 17b030: ldr x11, [x8, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 17b034: cbz x11, #0x17b040 */
  if ((ARC_X_R(c, 11)) == 0) goto L_17b040;
  /* 17b038: ldrb w12, [x11, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(24));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(24));
    ARC_W_W(c, 12, arc_ld8(_a));
  }
  /* 17b03c: cbz w12, #0x17afe8 */
  if ((ARC_W_R(c, 12)) == 0) goto L_17afe8;
L_17b040:;
  /* 17b040: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* 17b044: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 17b048: b.eq #0x17b158 */
  if (ARC_COND(c, 0)) goto L_17b158;
  /* 17b04c: ldr x10, [x9, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 17b050: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* 17b054: ldr x12, [x10] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 10)));
  /* 17b058: str x12, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 12));
  /* 17b05c: cbz x12, #0x17b06c */
  if ((ARC_X_R(c, 12)) == 0) goto L_17b06c;
  /* 17b060: str x9, [x12, #0x10] */
  arc_st64((ARC_X_R(c, 12) + INT64_C(16)), ARC_X_R(c, 9));
  /* 17b064: ldr x8, [x9, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 17b068: ldr x11, [x8] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 8)));
L_17b06c:;
  /* 17b06c: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 17b070: str x8, [x10, #0x10] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(16)), ARC_X_R(c, 8));
  /* 17b074: cset w11, ne */
  ARC_W_W(c, 11, (ARC_COND(c, 1) ? 1 : 0));
  /* 17b078: str x10, [x8, w11, uxtw #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 3)), ARC_X_R(c, 10));
  /* 17b07c: str x10, [x9, #0x10] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(16)), ARC_X_R(c, 10));
  /* 17b080: ldr x8, [x10, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(16))));
  /* 17b084: str x9, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 17b088: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* 17b08c: ldr x11, [x9, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 17b090: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* 17b094: strb w12, [x10, #0x18] */
  arc_st8((ARC_X_R(c, 10) + INT64_C(24)), ARC_W_R(c, 12));
  /* 17b098: strb wzr, [x8, #0x18] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(24)), ARC_W_R(c, 31));
  /* 17b09c: str x11, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* 17b0a0: cbz x11, #0x17b0a8 */
  if ((ARC_X_R(c, 11)) == 0) goto L_17b0a8;
L_17b0a4:;
  /* 17b0a4: str x8, [x11, #0x10] */
  arc_st64((ARC_X_R(c, 11) + INT64_C(16)), ARC_X_R(c, 8));
L_17b0a8:;
  /* 17b0a8: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 17b0ac: ldr x11, [x10] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 10)));
  /* 17b0b0: str x10, [x9, #0x10] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(16)), ARC_X_R(c, 10));
  /* 17b0b4: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* 17b0b8: cset w11, ne */
  ARC_W_W(c, 11, (ARC_COND(c, 1) ? 1 : 0));
  /* 17b0bc: str x9, [x10, w11, uxtw #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 3)), ARC_X_R(c, 9));
  /* 17b0c0: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* 17b0c4: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
L_17b0c8:;
  /* 17b0c8: ret  */
  return;
L_17b0cc:;
  /* 17b0cc: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* 17b0d0: cmp x10, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 1));
  /* 17b0d4: b.eq #0x17b0e0 */
  if (ARC_COND(c, 0)) goto L_17b0e0;
  /* 17b0d8: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 17b0dc: b #0x17b114 */
  goto L_17b114;
L_17b0e0:;
  /* 17b0e0: ldr x10, [x1, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* 17b0e4: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 17b0e8: cbz x10, #0x17b0f4 */
  if ((ARC_X_R(c, 10)) == 0) goto L_17b0f4;
  /* 17b0ec: str x9, [x10, #0x10] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(16)), ARC_X_R(c, 9));
  /* 17b0f0: ldr x8, [x9, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
L_17b0f4:;
  /* 17b0f4: ldr x10, [x8] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 8)));
  /* 17b0f8: str x8, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 8));
  /* 17b0fc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 17b100: cset w10, ne */
  ARC_W_W(c, 10, (ARC_COND(c, 1) ? 1 : 0));
  /* 17b104: str x1, [x8, w10, uxtw #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 3)), ARC_X_R(c, 1));
  /* 17b108: str x1, [x9, #0x10] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(16)), ARC_X_R(c, 1));
  /* 17b10c: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 17b110: str x9, [x1, #8] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(8)), ARC_X_R(c, 9));
L_17b114:;
  /* 17b114: ldr x9, [x8, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 17b118: mov w10, #1 */
  ARC_W_W(c, 10, UINT64_C(1));
  /* 17b11c: strb w10, [x1, #0x18] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(24)), ARC_W_R(c, 10));
  /* 17b120: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* 17b124: strb wzr, [x8, #0x18] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(24)), ARC_W_R(c, 31));
  /* 17b128: str x10, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), ARC_X_R(c, 10));
  /* 17b12c: cbz x10, #0x17b134 */
  if ((ARC_X_R(c, 10)) == 0) goto L_17b134;
  /* 17b130: str x8, [x10, #0x10] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(16)), ARC_X_R(c, 8));
L_17b134:;
  /* 17b134: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 17b138: ldr x11, [x10] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 10)));
  /* 17b13c: str x10, [x9, #0x10] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(16)), ARC_X_R(c, 10));
  /* 17b140: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* 17b144: cset w11, ne */
  ARC_W_W(c, 11, (ARC_COND(c, 1) ? 1 : 0));
  /* 17b148: str x9, [x10, w11, uxtw #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 3)), ARC_X_R(c, 9));
  /* 17b14c: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 17b150: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 17b154: ret  */
  return;
L_17b158:;
  /* 17b158: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* 17b15c: ldr x11, [x9, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* 17b160: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* 17b164: strb w12, [x9, #0x18] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(24)), ARC_W_R(c, 12));
  /* 17b168: strb wzr, [x8, #0x18] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(24)), ARC_W_R(c, 31));
  /* 17b16c: str x11, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* 17b170: cbnz x11, #0x17b0a4 */
  if ((ARC_X_R(c, 11)) != 0) goto L_17b0a4;
  /* 17b174: b #0x17b0a8 */
  goto L_17b0a8;
}

void fn2_17cb6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077415276));
  /* 17cb6c: sub sp, sp, #0x1d0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(464)));
  /* 17cb70: stp x29, x30, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17cb74: str x28, [sp, #0x180] */
  arc_st64(((c)->sp + INT64_C(384)), ARC_X_R(c, 28));
  /* 17cb78: stp x26, x25, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 17cb7c: stp x24, x23, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 17cb80: stp x22, x21, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 17cb84: stp x20, x19, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 17cb88: add x29, sp, #0x170 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(368)));
  /* 17cb8c: nop  */
  /* nop: no architectural effect here */
  /* 17cb90: adr x23, #0x25d2b0 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 17cb94: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* 17cb98: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 17cb9c: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 17cba0: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 17cba4: add x19, sp, #0xa8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(168)));
  /* 17cba8: tbz w8, #0, #0x17ce64 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_17ce64;
L_17cbac:;
  /* 17cbac: nop  */
  /* nop: no architectural effect here */
  /* 17cbb0: adr x1, #0x25d2a8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478760)));
  /* 17cbb4: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17cbb8: str x1, [sp, #0xa8] */
  arc_st64(((c)->sp + INT64_C(168)), ARC_X_R(c, 1));
  /* 17cbbc: adrp x2, #0x39000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(233472)));
  /* 17cbc0: add x2, x2, #0x317 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(791)));
  /* 17cbc4: ldr x0, [x0, #0x618] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1560))));
  /* 17cbc8: add x3, sp, #0xa8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(168)));
  /* 17cbcc: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* 17cbd0: add x24, sp, #0xa8 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(168)));
  /* 17cbd4: bl #0x179990 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559512));
  fn2_179990(c);
  /* 17cbd8: nop  */
  /* nop: no architectural effect here */
  /* 17cbdc: adr x8, #0x2555e8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2446824)));
  /* 17cbe0: str x8, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 8));
  /* 17cbe4: add x0, sp, #0xa8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(168)));
  /* 17cbe8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559532));
  fn2_1d2c2c(c);
  /* 17cbec: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 17cbf0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559540));
  fn2_1d2c2c(c);
  /* 17cbf4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 17cbf8: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* 17cbfc: mov w9, #0x3f800000 */
  ARC_W_W(c, 9, UINT64_C(1065353216));
  /* 17cc00: str w8, [sp, #0xb8] */
  arc_st32(((c)->sp + INT64_C(184)), ARC_W_R(c, 8));
  /* 17cc04: add x8, x24, #0x48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* 17cc08: str x8, [sp, #0xe8] */
  arc_st64(((c)->sp + INT64_C(232)), ARC_X_R(c, 8));
  /* 17cc0c: add x8, x24, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(136)));
  /* 17cc10: stp x8, xzr, [sp, #0x128] */
  { const uint64_t _pa = ((c)->sp + INT64_C(296));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 17cc14: add x8, x24, #0xa0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + UINT64_C(160)));
  /* 17cc18: stp xzr, xzr, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 17cc1c: str w9, [sp, #0xe0] */
  arc_st32(((c)->sp + INT64_C(224)), ARC_W_R(c, 9));
  /* 17cc20: stur q0, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* 17cc24: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 17cc28: stur q0, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* 17cc2c: stur q0, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* 17cc30: str w9, [sp, #0x120] */
  arc_st32(((c)->sp + INT64_C(288)), ARC_W_R(c, 9));
  /* 17cc34: stp xzr, xzr, [sp, #0x148] */
  { const uint64_t _pa = ((c)->sp + INT64_C(328));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 17cc38: stp xzr, x8, [sp, #0x138] */
  { const uint64_t _pa = ((c)->sp + INT64_C(312));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 17cc3c: str xzr, [sp, #0x158] */
  arc_st64(((c)->sp + INT64_C(344)), ARC_X_R(c, 31));
  /* 17cc40: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 17cc44: tbz w8, #0, #0x17ceb8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_17ceb8;
L_17cc48:;
  /* 17cc48: nop  */
  /* nop: no architectural effect here */
  /* 17cc4c: adr x19, #0x25d2a8 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478760)));
  /* 17cc50: add x0, sp, #0xa8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(168)));
  /* 17cc54: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 17cc58: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559644));
  fn2_1d5dc0(c);
  /* 17cc5c: nop  */
  /* nop: no architectural effect here */
  /* 17cc60: adr x8, #0x25cdc0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2477504)));
  /* 17cc64: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 17cc68: tbz w8, #0, #0x17cf08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_17cf08;
L_17cc6c:;
  /* 17cc6c: nop  */
  /* nop: no architectural effect here */
  /* 17cc70: adr x1, #0x25cdb8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2477496)));
  /* 17cc74: add x0, x24, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 17cc78: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559676));
  fn2_1d5dc0(c);
  /* 17cc7c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17cc80: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17cc84: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 17cc88: ldr x8, [x8, #0x620] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1568))));
  /* 17cc8c: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 17cc90: str w8, [sp, #0xb8] */
  arc_st32(((c)->sp + INT64_C(184)), ARC_W_R(c, 8));
  /* 17cc94: ldr x0, [x0, #0x628] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1576))));
  /* 17cc98: bl #0x179eac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559708));
  fn2_179eac(c);
  /* 17cc9c: cbz x0, #0x17cca8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_17cca8;
  /* 17cca0: add x8, x0, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 17cca4: str x8, [sp, #0x158] */
  arc_st64(((c)->sp + INT64_C(344)), ARC_X_R(c, 8));
L_17cca8:;
  /* 17cca8: add x8, sp, #0xa8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(168)));
  /* 17ccac: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17ccb0: adrp x2, #0x39000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(233472)));
  /* 17ccb4: add x2, x2, #0x317 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(791)));
  /* 17ccb8: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* 17ccbc: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 17ccc0: ldr x0, [x0, #0x628] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1576))));
  /* 17ccc4: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 17ccc8: sub x4, x29, #8 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 17cccc: and w22, w22, #1 */
  ARC_W_W(c, 22, (ARC_W_R(c, 22) & UINT64_C(1)));
  /* 17ccd0: and w21, w21, #1 */
  ARC_W_W(c, 21, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* 17ccd4: and w25, w20, #1 */
  ARC_W_W(c, 25, (ARC_W_R(c, 20) & UINT64_C(1)));
  /* 17ccd8: bl #0x179fe4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559772));
  fn2_179fe4(c);
  /* 17ccdc: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 17cce0: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 17cce4: bl #0x1794e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559784));
  fn2_1794e8(c);
  /* 17cce8: adrp x26, #0x258000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17ccec: ldr x26, [x26, #0x630] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(1584))));
  /* 17ccf0: ldp x20, x8, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 17ccf4: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 17ccf8: b.hs #0x17cd10 */
  if (ARC_COND(c, 2)) goto L_17cd10;
  /* 17ccfc: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 17cd00: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 17cd04: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559816));
  fn2_1d2c40(c);
  /* 17cd08: add x0, x20, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 17cd0c: b #0x17cd20 */
  goto L_17cd20;
L_17cd10:;
  /* 17cd10: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17cd14: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 17cd18: ldr x0, [x0, #0x630] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1584))));
  /* 17cd1c: bl #0x17b8cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1559840));
  fn2_17b8cc(c);
L_17cd20:;
  /* 17cd20: nop  */
  /* nop: no architectural effect here */
  /* 17cd24: adr x8, #0x17cfb8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1560504)));
  /* 17cd28: nop  */
  /* nop: no architectural effect here */
  /* 17cd2c: adr x9, #0x17cfc8 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1560520)));
  /* 17cd30: stp xzr, x8, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 17cd34: nop  */
  /* nop: no architectural effect here */
  /* 17cd38: adr x8, #0x17cfc0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1560512)));
  /* 17cd3c: str x0, [x26, #8] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(8)), ARC_X_R(c, 0));
  /* 17cd40: stp x8, x9, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 17cd44: nop  */
  /* nop: no architectural effect here */
  /* 17cd48: adr x8, #0x17d034 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1560628)));
  /* 17cd4c: nop  */
  /* nop: no architectural effect here */
  /* 17cd50: adr x9, #0x17d08c */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1560716)));
  /* 17cd54: strb w25, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 25));
  /* 17cd58: stp x8, x9, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 17cd5c: nop  */
  /* nop: no architectural effect here */
  /* 17cd60: adr x8, #0x17d094 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1560724)));
  /* 17cd64: nop  */
  /* nop: no architectural effect here */
  /* 17cd68: adr x9, #0x17d09c */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1560732)));
  /* 17cd6c: strb wzr, [sp, #9] */
  arc_st8(((c)->sp + INT64_C(9)), ARC_W_R(c, 31));
  /* 17cd70: stp x8, x9, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 17cd74: nop  */
  /* nop: no architectural effect here */
  /* 17cd78: adr x8, #0x17d128 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1560872)));
  /* 17cd7c: nop  */
  /* nop: no architectural effect here */
  /* 17cd80: adr x9, #0x17d12c */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1560876)));
  /* 17cd84: strb w21, [sp, #0xa] */
  arc_st8(((c)->sp + INT64_C(10)), ARC_W_R(c, 21));
  /* 17cd88: stp x8, x9, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 17cd8c: nop  */
  /* nop: no architectural effect here */
  /* 17cd90: adr x8, #0x17d17c */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1560956)));
  /* 17cd94: nop  */
  /* nop: no architectural effect here */
  /* 17cd98: adr x9, #0x17d278 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1561208)));
  /* 17cd9c: strb w22, [sp, #0xb] */
  arc_st8(((c)->sp + INT64_C(11)), ARC_W_R(c, 22));
  /* 17cda0: stp xzr, xzr, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 17cda4: stp x8, x9, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 17cda8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17cdac: nop  */
  /* nop: no architectural effect here */
  /* 17cdb0: adr x9, #0x17d2b4 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(1561268)));
  /* 17cdb4: ldr x8, [x8, #0x638] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1592))));
  /* 17cdb8: stp xzr, xzr, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 17cdbc: stp x9, x8, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 17cdc0: ldarb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 17cdc4: tbz w8, #0, #0x17cf68 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_17cf68;
L_17cdc8:;
  /* 17cdc8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17cdcc: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17cdd0: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 17cdd4: ldr x8, [x8, #0x640] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1600))));
  /* 17cdd8: ldr x9, [x9, #0x648] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(1608))));
  /* 17cddc: add x2, x24, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* 17cde0: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 17cde4: str x19, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 19));
  /* 17cde8: add x19, sp, #0xa8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(168)));
  /* 17cdec: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 17cdf0: ldr x0, [x9] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 9)));
  /* 17cdf4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 17cdf8: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 17cdfc: ldrb w8, [x20, #0x312] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(786))));
  /* 17ce00: tbnz w8, #0, #0x17ce10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_17ce10;
  /* 17ce04: bl #0x16fa14 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560072));
  fn2_16fa14(c);
  /* 17ce08: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 17ce0c: strb w8, [x20, #0x312] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(786)), ARC_W_R(c, 8));
L_17ce10:;
  /* 17ce10: stur x19, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 19));
  /* 17ce14: adrp x0, #0x258000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 17ce18: adrp x2, #0x39000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(233472)));
  /* 17ce1c: add x2, x2, #0x317 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(791)));
  /* 17ce20: ldr x0, [x0, #0x628] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(1576))));
  /* 17ce24: add x1, sp, #0xa8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(168)));
  /* 17ce28: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 17ce2c: sub x4, x29, #9 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(9)));
  /* 17ce30: bl #0x179fe4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560116));
  fn2_179fe4(c);
  /* 17ce34: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 17ce38: bl #0x1b2b24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560124));
  fn2_1b2b24(c);
  /* 17ce3c: add x0, sp, #0xa8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(168)));
  /* 17ce40: bl #0x1798d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560132));
  fn2_1798d4(c);
  /* 17ce44: ldp x20, x19, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17ce48: ldr x28, [sp, #0x180] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(384))));
  /* 17ce4c: ldp x22, x21, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 17ce50: ldp x24, x23, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 17ce54: ldp x26, x25, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 17ce58: ldp x29, x30, [sp, #0x170] */
  { const uint64_t _pa = ((c)->sp + INT64_C(368));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17ce5c: add sp, sp, #0x1d0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(464)));
  /* 17ce60: ret  */
  return;
L_17ce64:;
  /* 17ce64: nop  */
  /* nop: no architectural effect here */
  /* 17ce68: adr x0, #0x25d2b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 17ce6c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560176));
  fn2_24b710(c);
  /* 17ce70: cbz w0, #0x17cbac */
  if ((ARC_W_R(c, 0)) == 0) goto L_17cbac;
  /* 17ce74: nop  */
  /* nop: no architectural effect here */
  /* 17ce78: adr x19, #0x25d2a8 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478760)));
  /* 17ce7c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 17ce80: add x1, x1, #0x5e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1508)));
  /* 17ce84: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 17ce88: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560204));
  fn2_1b907c(c);
  /* 17ce8c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 17ce90: nop  */
  /* nop: no architectural effect here */
  /* 17ce94: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 17ce98: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 17ce9c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 17cea0: add x19, sp, #0xa8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(168)));
  /* 17cea4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560232));
  fn2_24b6f0(c);
  /* 17cea8: nop  */
  /* nop: no architectural effect here */
  /* 17ceac: adr x0, #0x25d2b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 17ceb0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560244));
  fn2_24b720(c);
  /* 17ceb4: b #0x17cbac */
  goto L_17cbac;
L_17ceb8:;
  /* 17ceb8: nop  */
  /* nop: no architectural effect here */
  /* 17cebc: adr x0, #0x25d2b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 17cec0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560260));
  fn2_24b710(c);
  /* 17cec4: cbz w0, #0x17cc48 */
  if ((ARC_W_R(c, 0)) == 0) goto L_17cc48;
  /* 17cec8: nop  */
  /* nop: no architectural effect here */
  /* 17cecc: adr x19, #0x25d2a8 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478760)));
  /* 17ced0: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 17ced4: add x1, x1, #0x5e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1508)));
  /* 17ced8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 17cedc: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560288));
  fn2_1b907c(c);
  /* 17cee0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 17cee4: nop  */
  /* nop: no architectural effect here */
  /* 17cee8: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 17ceec: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 17cef0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 17cef4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560312));
  fn2_24b6f0(c);
  /* 17cef8: nop  */
  /* nop: no architectural effect here */
  /* 17cefc: adr x0, #0x25d2b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 17cf00: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560324));
  fn2_24b720(c);
  /* 17cf04: b #0x17cc48 */
  goto L_17cc48;
L_17cf08:;
  /* 17cf08: nop  */
  /* nop: no architectural effect here */
  /* 17cf0c: adr x0, #0x25cdc0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477504)));
  /* 17cf10: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560340));
  fn2_24b710(c);
  /* 17cf14: cbz w0, #0x17cc6c */
  if ((ARC_W_R(c, 0)) == 0) goto L_17cc6c;
  /* 17cf18: mov x25, x23 */
  ARC_X_W(c, 25, ARC_X_R(c, 23));
  /* 17cf1c: nop  */
  /* nop: no architectural effect here */
  /* 17cf20: adr x23, #0x25cdb8 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(2477496)));
  /* 17cf24: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 17cf28: add x1, x1, #0x966 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2406)));
  /* 17cf2c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 17cf30: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 17cf34: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560376));
  fn2_1b8fd4(c);
  /* 17cf38: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 17cf3c: nop  */
  /* nop: no architectural effect here */
  /* 17cf40: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 17cf44: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 17cf48: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 17cf4c: add x24, sp, #0xa8 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(168)));
  /* 17cf50: mov x23, x25 */
  ARC_X_W(c, 23, ARC_X_R(c, 25));
  /* 17cf54: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560408));
  fn2_24b6f0(c);
  /* 17cf58: nop  */
  /* nop: no architectural effect here */
  /* 17cf5c: adr x0, #0x25cdc0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477504)));
  /* 17cf60: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560420));
  fn2_24b720(c);
  /* 17cf64: b #0x17cc6c */
  goto L_17cc6c;
L_17cf68:;
  /* 17cf68: nop  */
  /* nop: no architectural effect here */
  /* 17cf6c: adr x0, #0x25d2b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 17cf70: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560436));
  fn2_24b710(c);
  /* 17cf74: cbz w0, #0x17cdc8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_17cdc8;
  /* 17cf78: nop  */
  /* nop: no architectural effect here */
  /* 17cf7c: adr x20, #0x25d2a8 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478760)));
  /* 17cf80: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 17cf84: add x1, x1, #0x5e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1508)));
  /* 17cf88: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 17cf8c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560464));
  fn2_1b907c(c);
  /* 17cf90: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 17cf94: nop  */
  /* nop: no architectural effect here */
  /* 17cf98: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 17cf9c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 17cfa0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 17cfa4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560488));
  fn2_24b6f0(c);
  /* 17cfa8: nop  */
  /* nop: no architectural effect here */
  /* 17cfac: adr x0, #0x25d2b0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478768)));
  /* 17cfb0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1560500));
  fn2_24b720(c);
  /* 17cfb4: b #0x17cdc8 */
  goto L_17cdc8;
}

void fn2_17da6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077419116));
  /* 17da6c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 17da70: ret  */
  return;
}

void fn2_17e9c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077423048));
  /* 17e9c8: ret  */
  return;
}

void fn2_17f890(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077426832));
  /* 17f890: ret  */
  return;
}

void fn2_180758(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077430616));
  /* 180758: ret  */
  return;
}

void fn2_181620(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077434400));
  /* 181620: ret  */
  return;
}

void fn2_182678(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077438584));
  /* 182678: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 18267c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 182680: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 182684: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 182688: nop  */
  /* nop: no architectural effect here */
  /* 18268c: adr x19, #0x25d350 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182690: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182694: tbz w8, #0, #0x182c34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182c34;
L_182698:;
  /* 182698: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 18269c: add x1, x1, #0x476 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1142)));
  /* 1826a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1826a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1826a8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582764));
  fn2_1b8fd4(c);
  /* 1826ac: mov w3, #0x1789 */
  ARC_W_W(c, 3, UINT64_C(6025));
  /* 1826b0: nop  */
  /* nop: no architectural effect here */
  /* 1826b4: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 1826b8: nop  */
  /* nop: no architectural effect here */
  /* 1826bc: adr x2, #0x18335c */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586012)));
  /* 1826c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1826c4: movk w3, #0xb8c4, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3099852800)));
  /* 1826c8: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582796));
  fn2_1b2344(c);
  /* 1826cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1826d0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582804));
  fn2_1d2d24(c);
  /* 1826d4: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 1826d8: tbz w8, #0, #0x182c8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182c8c;
L_1826dc:;
  /* 1826dc: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1826e0: add x1, x1, #0xb6e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2926)));
  /* 1826e4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1826e8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1826ec: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582832));
  fn2_1b8fd4(c);
  /* 1826f0: mov w3, #0x1789 */
  ARC_W_W(c, 3, UINT64_C(6025));
  /* 1826f4: nop  */
  /* nop: no architectural effect here */
  /* 1826f8: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 1826fc: nop  */
  /* nop: no architectural effect here */
  /* 182700: adr x2, #0x18339c */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586076)));
  /* 182704: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182708: movk w3, #0xb8c4, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3099852800)));
  /* 18270c: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582864));
  fn2_1b2344(c);
  /* 182710: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182714: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582872));
  fn2_1d2d24(c);
  /* 182718: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 18271c: tbz w8, #0, #0x182cdc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182cdc;
L_182720:;
  /* 182720: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 182724: add x1, x1, #0x3ba */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(954)));
  /* 182728: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18272c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182730: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582900));
  fn2_1b8fd4(c);
  /* 182734: mov w3, #0x525a */
  ARC_W_W(c, 3, UINT64_C(21082));
  /* 182738: nop  */
  /* nop: no architectural effect here */
  /* 18273c: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182740: nop  */
  /* nop: no architectural effect here */
  /* 182744: adr x2, #0x1833dc */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586140)));
  /* 182748: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 18274c: movk w3, #0xe8c5, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 182750: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582932));
  fn2_1b2344(c);
  /* 182754: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182758: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582940));
  fn2_1d2d24(c);
  /* 18275c: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182760: tbz w8, #0, #0x182d34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182d34;
L_182764:;
  /* 182764: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 182768: add x1, x1, #0xc40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3136)));
  /* 18276c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182770: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182774: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1582968));
  fn2_1b8fd4(c);
  /* 182778: mov w3, #0x525a */
  ARC_W_W(c, 3, UINT64_C(21082));
  /* 18277c: nop  */
  /* nop: no architectural effect here */
  /* 182780: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182784: nop  */
  /* nop: no architectural effect here */
  /* 182788: adr x2, #0x18340c */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586188)));
  /* 18278c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182790: movk w3, #0xe8c5, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 182794: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583000));
  fn2_1b2344(c);
  /* 182798: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18279c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583008));
  fn2_1d2d24(c);
  /* 1827a0: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 1827a4: tbz w8, #0, #0x182d8c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182d8c;
L_1827a8:;
  /* 1827a8: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1827ac: add x1, x1, #0x67f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1663)));
  /* 1827b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1827b4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1827b8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583036));
  fn2_1b8fd4(c);
  /* 1827bc: mov w3, #0x525a */
  ARC_W_W(c, 3, UINT64_C(21082));
  /* 1827c0: nop  */
  /* nop: no architectural effect here */
  /* 1827c4: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 1827c8: nop  */
  /* nop: no architectural effect here */
  /* 1827cc: adr x2, #0x18343c */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586236)));
  /* 1827d0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1827d4: movk w3, #0xe8c5, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 1827d8: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583068));
  fn2_1b2344(c);
  /* 1827dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1827e0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583076));
  fn2_1d2d24(c);
  /* 1827e4: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 1827e8: tbz w8, #0, #0x182de4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182de4;
L_1827ec:;
  /* 1827ec: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 1827f0: add x1, x1, #0xde4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3556)));
  /* 1827f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1827f8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1827fc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583104));
  fn2_1b8fd4(c);
  /* 182800: mov w3, #0xdece */
  ARC_W_W(c, 3, UINT64_C(57038));
  /* 182804: nop  */
  /* nop: no architectural effect here */
  /* 182808: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 18280c: nop  */
  /* nop: no architectural effect here */
  /* 182810: adr x2, #0x18346c */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586284)));
  /* 182814: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182818: movk w3, #0xc8db, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3369795584)));
  /* 18281c: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583136));
  fn2_1b2344(c);
  /* 182820: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182824: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583144));
  fn2_1d2d24(c);
  /* 182828: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 18282c: tbz w8, #0, #0x182e3c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182e3c;
L_182830:;
  /* 182830: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 182834: add x1, x1, #0xb7a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2938)));
  /* 182838: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18283c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182840: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583172));
  fn2_1b8fd4(c);
  /* 182844: mov w3, #0x1009 */
  ARC_W_W(c, 3, UINT64_C(4105));
  /* 182848: nop  */
  /* nop: no architectural effect here */
  /* 18284c: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182850: nop  */
  /* nop: no architectural effect here */
  /* 182854: adr x2, #0x18349c */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586332)));
  /* 182858: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 18285c: movk w3, #0x4cad, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 182860: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583204));
  fn2_1b2344(c);
  /* 182864: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182868: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583212));
  fn2_1d2d24(c);
  /* 18286c: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182870: tbz w8, #0, #0x182e94 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182e94;
L_182874:;
  /* 182874: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 182878: add x1, x1, #0x35 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(53)));
  /* 18287c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182880: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182884: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583240));
  fn2_1b8fd4(c);
  /* 182888: mov w3, #0x525a */
  ARC_W_W(c, 3, UINT64_C(21082));
  /* 18288c: nop  */
  /* nop: no architectural effect here */
  /* 182890: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182894: nop  */
  /* nop: no architectural effect here */
  /* 182898: adr x2, #0x1834b0 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586352)));
  /* 18289c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1828a0: movk w3, #0xe8c5, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 1828a4: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583272));
  fn2_1b2344(c);
  /* 1828a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1828ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583280));
  fn2_1d2d24(c);
  /* 1828b0: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 1828b4: tbz w8, #0, #0x182eec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182eec;
L_1828b8:;
  /* 1828b8: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1828bc: add x1, x1, #0xa03 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2563)));
  /* 1828c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1828c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1828c8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583308));
  fn2_1b8fd4(c);
  /* 1828cc: mov w3, #0x1f29 */
  ARC_W_W(c, 3, UINT64_C(7977));
  /* 1828d0: nop  */
  /* nop: no architectural effect here */
  /* 1828d4: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 1828d8: nop  */
  /* nop: no architectural effect here */
  /* 1828dc: adr x2, #0x1834e0 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586400)));
  /* 1828e0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1828e4: movk w3, #0x38a6, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(950403072)));
  /* 1828e8: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583340));
  fn2_1b2344(c);
  /* 1828ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1828f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583348));
  fn2_1d2d24(c);
  /* 1828f4: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 1828f8: tbz w8, #0, #0x182f44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182f44;
L_1828fc:;
  /* 1828fc: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 182900: add x1, x1, #0x469 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1129)));
  /* 182904: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182908: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 18290c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583376));
  fn2_1b8fd4(c);
  /* 182910: mov w3, #0xdece */
  ARC_W_W(c, 3, UINT64_C(57038));
  /* 182914: nop  */
  /* nop: no architectural effect here */
  /* 182918: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 18291c: nop  */
  /* nop: no architectural effect here */
  /* 182920: adr x2, #0x1834f4 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586420)));
  /* 182924: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182928: movk w3, #0xc8db, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3369795584)));
  /* 18292c: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583408));
  fn2_1b2344(c);
  /* 182930: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182934: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583416));
  fn2_1d2d24(c);
  /* 182938: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 18293c: tbz w8, #0, #0x182f9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182f9c;
L_182940:;
  /* 182940: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 182944: add x1, x1, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(24)));
  /* 182948: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18294c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182950: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583444));
  fn2_1b8fd4(c);
  /* 182954: mov w3, #0x1009 */
  ARC_W_W(c, 3, UINT64_C(4105));
  /* 182958: nop  */
  /* nop: no architectural effect here */
  /* 18295c: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182960: nop  */
  /* nop: no architectural effect here */
  /* 182964: adr x2, #0x183524 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586468)));
  /* 182968: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 18296c: movk w3, #0x4cad, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 182970: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583476));
  fn2_1b2344(c);
  /* 182974: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182978: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583484));
  fn2_1d2d24(c);
  /* 18297c: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182980: tbz w8, #0, #0x182ff4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_182ff4;
L_182984:;
  /* 182984: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 182988: add x1, x1, #0x3d6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(982)));
  /* 18298c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182990: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182994: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583512));
  fn2_1b8fd4(c);
  /* 182998: mov w3, #0x525a */
  ARC_W_W(c, 3, UINT64_C(21082));
  /* 18299c: nop  */
  /* nop: no architectural effect here */
  /* 1829a0: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 1829a4: nop  */
  /* nop: no architectural effect here */
  /* 1829a8: adr x2, #0x183538 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586488)));
  /* 1829ac: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1829b0: movk w3, #0xe8c5, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 1829b4: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583544));
  fn2_1b2344(c);
  /* 1829b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1829bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583552));
  fn2_1d2d24(c);
  /* 1829c0: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 1829c4: tbz w8, #0, #0x18304c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_18304c;
L_1829c8:;
  /* 1829c8: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1829cc: add x1, x1, #0x7b8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1976)));
  /* 1829d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1829d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1829d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583580));
  fn2_1b8fd4(c);
  /* 1829dc: mov w3, #0xa5e1 */
  ARC_W_W(c, 3, UINT64_C(42465));
  /* 1829e0: nop  */
  /* nop: no architectural effect here */
  /* 1829e4: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 1829e8: nop  */
  /* nop: no architectural effect here */
  /* 1829ec: adr x2, #0x183568 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586536)));
  /* 1829f0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1829f4: movk w3, #0x232, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 1829f8: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583612));
  fn2_1b2344(c);
  /* 1829fc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182a00: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583620));
  fn2_1d2d24(c);
  /* 182a04: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182a08: tbz w8, #0, #0x1830a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1830a4;
L_182a0c:;
  /* 182a0c: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 182a10: add x1, x1, #0xd15 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3349)));
  /* 182a14: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182a18: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182a1c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583648));
  fn2_1b8fd4(c);
  /* 182a20: mov w3, #0x6d64 */
  ARC_W_W(c, 3, UINT64_C(28004));
  /* 182a24: nop  */
  /* nop: no architectural effect here */
  /* 182a28: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182a2c: nop  */
  /* nop: no architectural effect here */
  /* 182a30: adr x2, #0x183598 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586584)));
  /* 182a34: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182a38: movk w3, #0xbfdd, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 182a3c: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583680));
  fn2_1b2344(c);
  /* 182a40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182a44: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583688));
  fn2_1d2d24(c);
  /* 182a48: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182a4c: tbz w8, #0, #0x1830fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1830fc;
L_182a50:;
  /* 182a50: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 182a54: add x1, x1, #0xd68 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3432)));
  /* 182a58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182a5c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182a60: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583716));
  fn2_1b8fd4(c);
  /* 182a64: mov w3, #0x6d64 */
  ARC_W_W(c, 3, UINT64_C(28004));
  /* 182a68: nop  */
  /* nop: no architectural effect here */
  /* 182a6c: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182a70: nop  */
  /* nop: no architectural effect here */
  /* 182a74: adr x2, #0x1835a4 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586596)));
  /* 182a78: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182a7c: movk w3, #0xbfdd, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 182a80: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583748));
  fn2_1b2344(c);
  /* 182a84: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182a88: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583756));
  fn2_1d2d24(c);
  /* 182a8c: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182a90: tbz w8, #0, #0x183154 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_183154;
L_182a94:;
  /* 182a94: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 182a98: add x1, x1, #0x693 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1683)));
  /* 182a9c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182aa0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182aa4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583784));
  fn2_1b8fd4(c);
  /* 182aa8: mov w3, #0xcf4b */
  ARC_W_W(c, 3, UINT64_C(53067));
  /* 182aac: nop  */
  /* nop: no architectural effect here */
  /* 182ab0: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182ab4: nop  */
  /* nop: no architectural effect here */
  /* 182ab8: adr x2, #0x1835b0 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586608)));
  /* 182abc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182ac0: movk w3, #0x11ef, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(300875776)));
  /* 182ac4: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583816));
  fn2_1b2344(c);
  /* 182ac8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182acc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583824));
  fn2_1d2d24(c);
  /* 182ad0: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182ad4: tbz w8, #0, #0x1831ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1831ac;
L_182ad8:;
  /* 182ad8: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 182adc: add x1, x1, #0x778 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1912)));
  /* 182ae0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182ae4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182ae8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583852));
  fn2_1b8fd4(c);
  /* 182aec: mov w3, #0x525a */
  ARC_W_W(c, 3, UINT64_C(21082));
  /* 182af0: nop  */
  /* nop: no architectural effect here */
  /* 182af4: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182af8: nop  */
  /* nop: no architectural effect here */
  /* 182afc: adr x2, #0x1835d0 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586640)));
  /* 182b00: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182b04: movk w3, #0xe8c5, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 182b08: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583884));
  fn2_1b2344(c);
  /* 182b0c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182b10: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583892));
  fn2_1d2d24(c);
  /* 182b14: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182b18: tbz w8, #0, #0x183204 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_183204;
L_182b1c:;
  /* 182b1c: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 182b20: add x1, x1, #0xad8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2776)));
  /* 182b24: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182b28: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182b2c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583920));
  fn2_1b8fd4(c);
  /* 182b30: mov w3, #0x76c2 */
  ARC_W_W(c, 3, UINT64_C(30402));
  /* 182b34: nop  */
  /* nop: no architectural effect here */
  /* 182b38: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182b3c: nop  */
  /* nop: no architectural effect here */
  /* 182b40: adr x2, #0x183600 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586688)));
  /* 182b44: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182b48: movk w3, #0x9a29, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 182b4c: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583952));
  fn2_1b2344(c);
  /* 182b50: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182b54: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583960));
  fn2_1d2d24(c);
  /* 182b58: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182b5c: tbz w8, #0, #0x18325c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_18325c;
L_182b60:;
  /* 182b60: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 182b64: add x1, x1, #0x47c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1148)));
  /* 182b68: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182b6c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182b70: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1583988));
  fn2_1b8fd4(c);
  /* 182b74: mov w3, #0xa5e1 */
  ARC_W_W(c, 3, UINT64_C(42465));
  /* 182b78: nop  */
  /* nop: no architectural effect here */
  /* 182b7c: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182b80: nop  */
  /* nop: no architectural effect here */
  /* 182b84: adr x2, #0x18361c */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586716)));
  /* 182b88: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182b8c: movk w3, #0x232, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 182b90: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584020));
  fn2_1b2344(c);
  /* 182b94: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182b98: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584028));
  fn2_1d2d24(c);
  /* 182b9c: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182ba0: tbz w8, #0, #0x1832b4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1832b4;
L_182ba4:;
  /* 182ba4: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 182ba8: add x1, x1, #0xdf5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3573)));
  /* 182bac: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182bb0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182bb4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584056));
  fn2_1b8fd4(c);
  /* 182bb8: mov w3, #0xa5e1 */
  ARC_W_W(c, 3, UINT64_C(42465));
  /* 182bbc: nop  */
  /* nop: no architectural effect here */
  /* 182bc0: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182bc4: nop  */
  /* nop: no architectural effect here */
  /* 182bc8: adr x2, #0x18364c */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586764)));
  /* 182bcc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182bd0: movk w3, #0x232, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 182bd4: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584088));
  fn2_1b2344(c);
  /* 182bd8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182bdc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584096));
  fn2_1d2d24(c);
  /* 182be0: ldarb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 182be4: tbz w8, #0, #0x18330c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_18330c;
L_182be8:;
  /* 182be8: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 182bec: add x1, x1, #0x9c8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2504)));
  /* 182bf0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182bf4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 182bf8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584124));
  fn2_1b8fd4(c);
  /* 182bfc: mov w3, #0x54c3 */
  ARC_W_W(c, 3, UINT64_C(21699));
  /* 182c00: nop  */
  /* nop: no architectural effect here */
  /* 182c04: adr x0, #0x25d341 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182c08: nop  */
  /* nop: no architectural effect here */
  /* 182c0c: adr x2, #0x18367c */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(1586812)));
  /* 182c10: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 182c14: movk w3, #0x7ffe, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(2147352576)));
  /* 182c18: bl #0x1b2344 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584156));
  fn2_1b2344(c);
  /* 182c1c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 182c20: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584164));
  fn2_1d2d24(c);
  /* 182c24: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 182c28: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 182c2c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 182c30: ret  */
  return;
L_182c34:;
  /* 182c34: nop  */
  /* nop: no architectural effect here */
  /* 182c38: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182c3c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584192));
  fn2_24b710(c);
  /* 182c40: cbz w0, #0x182698 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182698;
  /* 182c44: nop  */
  /* nop: no architectural effect here */
  /* 182c48: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182c4c: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182c50: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182c54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182c58: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584220));
  fn2_1b907c(c);
  /* 182c5c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182c60: nop  */
  /* nop: no architectural effect here */
  /* 182c64: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182c68: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182c6c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182c70: nop  */
  /* nop: no architectural effect here */
  /* 182c74: adr x19, #0x25d350 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182c78: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584252));
  fn2_24b6f0(c);
  /* 182c7c: nop  */
  /* nop: no architectural effect here */
  /* 182c80: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182c84: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584264));
  fn2_24b720(c);
  /* 182c88: b #0x182698 */
  goto L_182698;
L_182c8c:;
  /* 182c8c: nop  */
  /* nop: no architectural effect here */
  /* 182c90: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182c94: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584280));
  fn2_24b710(c);
  /* 182c98: cbz w0, #0x1826dc */
  if ((ARC_W_R(c, 0)) == 0) goto L_1826dc;
  /* 182c9c: nop  */
  /* nop: no architectural effect here */
  /* 182ca0: adr x20, #0x25d341 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182ca4: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182ca8: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182cac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 182cb0: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584308));
  fn2_1b907c(c);
  /* 182cb4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182cb8: nop  */
  /* nop: no architectural effect here */
  /* 182cbc: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182cc0: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182cc4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 182cc8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584332));
  fn2_24b6f0(c);
  /* 182ccc: nop  */
  /* nop: no architectural effect here */
  /* 182cd0: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182cd4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584344));
  fn2_24b720(c);
  /* 182cd8: b #0x1826dc */
  goto L_1826dc;
L_182cdc:;
  /* 182cdc: nop  */
  /* nop: no architectural effect here */
  /* 182ce0: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182ce4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584360));
  fn2_24b710(c);
  /* 182ce8: cbz w0, #0x182720 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182720;
  /* 182cec: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 182cf0: nop  */
  /* nop: no architectural effect here */
  /* 182cf4: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182cf8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182cfc: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182d00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182d04: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584392));
  fn2_1b907c(c);
  /* 182d08: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182d0c: nop  */
  /* nop: no architectural effect here */
  /* 182d10: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182d14: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182d18: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182d1c: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 182d20: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584420));
  fn2_24b6f0(c);
  /* 182d24: nop  */
  /* nop: no architectural effect here */
  /* 182d28: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182d2c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584432));
  fn2_24b720(c);
  /* 182d30: b #0x182720 */
  goto L_182720;
L_182d34:;
  /* 182d34: nop  */
  /* nop: no architectural effect here */
  /* 182d38: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182d3c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584448));
  fn2_24b710(c);
  /* 182d40: cbz w0, #0x182764 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182764;
  /* 182d44: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 182d48: nop  */
  /* nop: no architectural effect here */
  /* 182d4c: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182d50: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182d54: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182d58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182d5c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584480));
  fn2_1b907c(c);
  /* 182d60: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182d64: nop  */
  /* nop: no architectural effect here */
  /* 182d68: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182d6c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182d70: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182d74: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 182d78: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584508));
  fn2_24b6f0(c);
  /* 182d7c: nop  */
  /* nop: no architectural effect here */
  /* 182d80: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182d84: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584520));
  fn2_24b720(c);
  /* 182d88: b #0x182764 */
  goto L_182764;
L_182d8c:;
  /* 182d8c: nop  */
  /* nop: no architectural effect here */
  /* 182d90: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182d94: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584536));
  fn2_24b710(c);
  /* 182d98: cbz w0, #0x1827a8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1827a8;
  /* 182d9c: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 182da0: nop  */
  /* nop: no architectural effect here */
  /* 182da4: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182da8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182dac: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182db0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182db4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584568));
  fn2_1b907c(c);
  /* 182db8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182dbc: nop  */
  /* nop: no architectural effect here */
  /* 182dc0: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182dc4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182dc8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182dcc: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 182dd0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584596));
  fn2_24b6f0(c);
  /* 182dd4: nop  */
  /* nop: no architectural effect here */
  /* 182dd8: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182ddc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584608));
  fn2_24b720(c);
  /* 182de0: b #0x1827a8 */
  goto L_1827a8;
L_182de4:;
  /* 182de4: nop  */
  /* nop: no architectural effect here */
  /* 182de8: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182dec: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584624));
  fn2_24b710(c);
  /* 182df0: cbz w0, #0x1827ec */
  if ((ARC_W_R(c, 0)) == 0) goto L_1827ec;
  /* 182df4: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 182df8: nop  */
  /* nop: no architectural effect here */
  /* 182dfc: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182e00: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182e04: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182e08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182e0c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584656));
  fn2_1b907c(c);
  /* 182e10: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182e14: nop  */
  /* nop: no architectural effect here */
  /* 182e18: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182e1c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182e20: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182e24: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 182e28: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584684));
  fn2_24b6f0(c);
  /* 182e2c: nop  */
  /* nop: no architectural effect here */
  /* 182e30: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182e34: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584696));
  fn2_24b720(c);
  /* 182e38: b #0x1827ec */
  goto L_1827ec;
L_182e3c:;
  /* 182e3c: nop  */
  /* nop: no architectural effect here */
  /* 182e40: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182e44: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584712));
  fn2_24b710(c);
  /* 182e48: cbz w0, #0x182830 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182830;
  /* 182e4c: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 182e50: nop  */
  /* nop: no architectural effect here */
  /* 182e54: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182e58: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182e5c: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182e60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182e64: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584744));
  fn2_1b907c(c);
  /* 182e68: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182e6c: nop  */
  /* nop: no architectural effect here */
  /* 182e70: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182e74: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182e78: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182e7c: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 182e80: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584772));
  fn2_24b6f0(c);
  /* 182e84: nop  */
  /* nop: no architectural effect here */
  /* 182e88: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182e8c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584784));
  fn2_24b720(c);
  /* 182e90: b #0x182830 */
  goto L_182830;
L_182e94:;
  /* 182e94: nop  */
  /* nop: no architectural effect here */
  /* 182e98: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182e9c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584800));
  fn2_24b710(c);
  /* 182ea0: cbz w0, #0x182874 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182874;
  /* 182ea4: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 182ea8: nop  */
  /* nop: no architectural effect here */
  /* 182eac: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182eb0: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182eb4: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182eb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182ebc: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584832));
  fn2_1b907c(c);
  /* 182ec0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182ec4: nop  */
  /* nop: no architectural effect here */
  /* 182ec8: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182ecc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182ed0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182ed4: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 182ed8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584860));
  fn2_24b6f0(c);
  /* 182edc: nop  */
  /* nop: no architectural effect here */
  /* 182ee0: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182ee4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584872));
  fn2_24b720(c);
  /* 182ee8: b #0x182874 */
  goto L_182874;
L_182eec:;
  /* 182eec: nop  */
  /* nop: no architectural effect here */
  /* 182ef0: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182ef4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584888));
  fn2_24b710(c);
  /* 182ef8: cbz w0, #0x1828b8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1828b8;
  /* 182efc: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 182f00: nop  */
  /* nop: no architectural effect here */
  /* 182f04: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182f08: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182f0c: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182f10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182f14: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584920));
  fn2_1b907c(c);
  /* 182f18: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182f1c: nop  */
  /* nop: no architectural effect here */
  /* 182f20: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182f24: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182f28: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182f2c: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 182f30: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584948));
  fn2_24b6f0(c);
  /* 182f34: nop  */
  /* nop: no architectural effect here */
  /* 182f38: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182f3c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584960));
  fn2_24b720(c);
  /* 182f40: b #0x1828b8 */
  goto L_1828b8;
L_182f44:;
  /* 182f44: nop  */
  /* nop: no architectural effect here */
  /* 182f48: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182f4c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1584976));
  fn2_24b710(c);
  /* 182f50: cbz w0, #0x1828fc */
  if ((ARC_W_R(c, 0)) == 0) goto L_1828fc;
  /* 182f54: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 182f58: nop  */
  /* nop: no architectural effect here */
  /* 182f5c: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182f60: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182f64: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182f68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182f6c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585008));
  fn2_1b907c(c);
  /* 182f70: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182f74: nop  */
  /* nop: no architectural effect here */
  /* 182f78: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182f7c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182f80: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182f84: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 182f88: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585036));
  fn2_24b6f0(c);
  /* 182f8c: nop  */
  /* nop: no architectural effect here */
  /* 182f90: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182f94: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585048));
  fn2_24b720(c);
  /* 182f98: b #0x1828fc */
  goto L_1828fc;
L_182f9c:;
  /* 182f9c: nop  */
  /* nop: no architectural effect here */
  /* 182fa0: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182fa4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585064));
  fn2_24b710(c);
  /* 182fa8: cbz w0, #0x182940 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182940;
  /* 182fac: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 182fb0: nop  */
  /* nop: no architectural effect here */
  /* 182fb4: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 182fb8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 182fbc: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 182fc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 182fc4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585096));
  fn2_1b907c(c);
  /* 182fc8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 182fcc: nop  */
  /* nop: no architectural effect here */
  /* 182fd0: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 182fd4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 182fd8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 182fdc: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 182fe0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585124));
  fn2_24b6f0(c);
  /* 182fe4: nop  */
  /* nop: no architectural effect here */
  /* 182fe8: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182fec: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585136));
  fn2_24b720(c);
  /* 182ff0: b #0x182940 */
  goto L_182940;
L_182ff4:;
  /* 182ff4: nop  */
  /* nop: no architectural effect here */
  /* 182ff8: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 182ffc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585152));
  fn2_24b710(c);
  /* 183000: cbz w0, #0x182984 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182984;
  /* 183004: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 183008: nop  */
  /* nop: no architectural effect here */
  /* 18300c: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 183010: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 183014: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 183018: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18301c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585184));
  fn2_1b907c(c);
  /* 183020: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 183024: nop  */
  /* nop: no architectural effect here */
  /* 183028: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 18302c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 183030: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 183034: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 183038: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585212));
  fn2_24b6f0(c);
  /* 18303c: nop  */
  /* nop: no architectural effect here */
  /* 183040: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 183044: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585224));
  fn2_24b720(c);
  /* 183048: b #0x182984 */
  goto L_182984;
L_18304c:;
  /* 18304c: nop  */
  /* nop: no architectural effect here */
  /* 183050: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 183054: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585240));
  fn2_24b710(c);
  /* 183058: cbz w0, #0x1829c8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1829c8;
  /* 18305c: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 183060: nop  */
  /* nop: no architectural effect here */
  /* 183064: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 183068: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 18306c: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 183070: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 183074: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585272));
  fn2_1b907c(c);
  /* 183078: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 18307c: nop  */
  /* nop: no architectural effect here */
  /* 183080: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 183084: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 183088: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 18308c: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 183090: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585300));
  fn2_24b6f0(c);
  /* 183094: nop  */
  /* nop: no architectural effect here */
  /* 183098: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 18309c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585312));
  fn2_24b720(c);
  /* 1830a0: b #0x1829c8 */
  goto L_1829c8;
L_1830a4:;
  /* 1830a4: nop  */
  /* nop: no architectural effect here */
  /* 1830a8: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 1830ac: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585328));
  fn2_24b710(c);
  /* 1830b0: cbz w0, #0x182a0c */
  if ((ARC_W_R(c, 0)) == 0) goto L_182a0c;
  /* 1830b4: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 1830b8: nop  */
  /* nop: no architectural effect here */
  /* 1830bc: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 1830c0: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1830c4: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 1830c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1830cc: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585360));
  fn2_1b907c(c);
  /* 1830d0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1830d4: nop  */
  /* nop: no architectural effect here */
  /* 1830d8: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1830dc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1830e0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1830e4: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 1830e8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585388));
  fn2_24b6f0(c);
  /* 1830ec: nop  */
  /* nop: no architectural effect here */
  /* 1830f0: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 1830f4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585400));
  fn2_24b720(c);
  /* 1830f8: b #0x182a0c */
  goto L_182a0c;
L_1830fc:;
  /* 1830fc: nop  */
  /* nop: no architectural effect here */
  /* 183100: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 183104: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585416));
  fn2_24b710(c);
  /* 183108: cbz w0, #0x182a50 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182a50;
  /* 18310c: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 183110: nop  */
  /* nop: no architectural effect here */
  /* 183114: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 183118: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 18311c: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 183120: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 183124: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585448));
  fn2_1b907c(c);
  /* 183128: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 18312c: nop  */
  /* nop: no architectural effect here */
  /* 183130: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 183134: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 183138: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 18313c: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 183140: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585476));
  fn2_24b6f0(c);
  /* 183144: nop  */
  /* nop: no architectural effect here */
  /* 183148: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 18314c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585488));
  fn2_24b720(c);
  /* 183150: b #0x182a50 */
  goto L_182a50;
L_183154:;
  /* 183154: nop  */
  /* nop: no architectural effect here */
  /* 183158: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 18315c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585504));
  fn2_24b710(c);
  /* 183160: cbz w0, #0x182a94 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182a94;
  /* 183164: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 183168: nop  */
  /* nop: no architectural effect here */
  /* 18316c: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 183170: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 183174: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 183178: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18317c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585536));
  fn2_1b907c(c);
  /* 183180: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 183184: nop  */
  /* nop: no architectural effect here */
  /* 183188: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 18318c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 183190: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 183194: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 183198: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585564));
  fn2_24b6f0(c);
  /* 18319c: nop  */
  /* nop: no architectural effect here */
  /* 1831a0: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 1831a4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585576));
  fn2_24b720(c);
  /* 1831a8: b #0x182a94 */
  goto L_182a94;
L_1831ac:;
  /* 1831ac: nop  */
  /* nop: no architectural effect here */
  /* 1831b0: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 1831b4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585592));
  fn2_24b710(c);
  /* 1831b8: cbz w0, #0x182ad8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182ad8;
  /* 1831bc: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 1831c0: nop  */
  /* nop: no architectural effect here */
  /* 1831c4: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 1831c8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1831cc: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 1831d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1831d4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585624));
  fn2_1b907c(c);
  /* 1831d8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1831dc: nop  */
  /* nop: no architectural effect here */
  /* 1831e0: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1831e4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1831e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1831ec: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 1831f0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585652));
  fn2_24b6f0(c);
  /* 1831f4: nop  */
  /* nop: no architectural effect here */
  /* 1831f8: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 1831fc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585664));
  fn2_24b720(c);
  /* 183200: b #0x182ad8 */
  goto L_182ad8;
L_183204:;
  /* 183204: nop  */
  /* nop: no architectural effect here */
  /* 183208: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 18320c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585680));
  fn2_24b710(c);
  /* 183210: cbz w0, #0x182b1c */
  if ((ARC_W_R(c, 0)) == 0) goto L_182b1c;
  /* 183214: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 183218: nop  */
  /* nop: no architectural effect here */
  /* 18321c: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 183220: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 183224: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 183228: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 18322c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585712));
  fn2_1b907c(c);
  /* 183230: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 183234: nop  */
  /* nop: no architectural effect here */
  /* 183238: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 18323c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 183240: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 183244: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 183248: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585740));
  fn2_24b6f0(c);
  /* 18324c: nop  */
  /* nop: no architectural effect here */
  /* 183250: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 183254: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585752));
  fn2_24b720(c);
  /* 183258: b #0x182b1c */
  goto L_182b1c;
L_18325c:;
  /* 18325c: nop  */
  /* nop: no architectural effect here */
  /* 183260: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 183264: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585768));
  fn2_24b710(c);
  /* 183268: cbz w0, #0x182b60 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182b60;
  /* 18326c: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 183270: nop  */
  /* nop: no architectural effect here */
  /* 183274: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 183278: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 18327c: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 183280: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 183284: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585800));
  fn2_1b907c(c);
  /* 183288: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 18328c: nop  */
  /* nop: no architectural effect here */
  /* 183290: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 183294: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 183298: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 18329c: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 1832a0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585828));
  fn2_24b6f0(c);
  /* 1832a4: nop  */
  /* nop: no architectural effect here */
  /* 1832a8: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 1832ac: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585840));
  fn2_24b720(c);
  /* 1832b0: b #0x182b60 */
  goto L_182b60;
L_1832b4:;
  /* 1832b4: nop  */
  /* nop: no architectural effect here */
  /* 1832b8: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 1832bc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585856));
  fn2_24b710(c);
  /* 1832c0: cbz w0, #0x182ba4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182ba4;
  /* 1832c4: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* 1832c8: nop  */
  /* nop: no architectural effect here */
  /* 1832cc: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 1832d0: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1832d4: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 1832d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1832dc: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585888));
  fn2_1b907c(c);
  /* 1832e0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1832e4: nop  */
  /* nop: no architectural effect here */
  /* 1832e8: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1832ec: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1832f0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1832f4: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 1832f8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585916));
  fn2_24b6f0(c);
  /* 1832fc: nop  */
  /* nop: no architectural effect here */
  /* 183300: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 183304: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585928));
  fn2_24b720(c);
  /* 183308: b #0x182ba4 */
  goto L_182ba4;
L_18330c:;
  /* 18330c: nop  */
  /* nop: no architectural effect here */
  /* 183310: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 183314: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585944));
  fn2_24b710(c);
  /* 183318: cbz w0, #0x182be8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_182be8;
  /* 18331c: nop  */
  /* nop: no architectural effect here */
  /* 183320: adr x19, #0x25d341 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478913)));
  /* 183324: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 183328: add x1, x1, #0x4e8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1256)));
  /* 18332c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 183330: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585972));
  fn2_1b907c(c);
  /* 183334: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 183338: nop  */
  /* nop: no architectural effect here */
  /* 18333c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 183340: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 183344: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 183348: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1585996));
  fn2_24b6f0(c);
  /* 18334c: nop  */
  /* nop: no architectural effect here */
  /* 183350: adr x0, #0x25d350 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478928)));
  /* 183354: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1586008));
  fn2_24b720(c);
  /* 183358: b #0x182be8 */
  goto L_182be8;
}

void fn2_183cc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077444292));
  /* 183cc4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 183cc8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 183ccc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 183cd0: nop  */
  /* nop: no architectural effect here */
  /* 183cd4: adr x8, #0x25d0d8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478296)));
  /* 183cd8: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* 183cdc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 183ce0: tbz w8, #0, #0x183d70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_183d70;
L_183ce4:;
  /* 183ce4: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 183ce8: ldr x8, [x8, #0xfd8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4056))));
  /* 183cec: cbz x8, #0x183cf4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_183cf4;
  /* 183cf0: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588468));
  fn2_24b760(c);
L_183cf4:;
  /* 183cf4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 183cf8: ldr x0, [x0, #0xfe0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(4064))));
  /* 183cfc: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588480));
  fn2_24b770(c);
  /* 183d00: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 183d04: nop  */
  /* nop: no architectural effect here */
  /* 183d08: adr x9, #0x25d0d0 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2478288)));
  /* 183d0c: ldr x8, [x8, #0xfe8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4072))));
  /* 183d10: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 183d14: cbz x8, #0x183d1c */
  if ((ARC_X_R(c, 8)) == 0) goto L_183d1c;
  /* 183d18: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588508));
  fn2_24b780(c);
L_183d1c:;
  /* 183d1c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 183d20: ldr x0, [x0, #0xff0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(4080))));
  /* 183d24: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588520));
  fn2_24b770(c);
  /* 183d28: nop  */
  /* nop: no architectural effect here */
  /* 183d2c: adr x8, #0x255730 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2447152)));
  /* 183d30: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 183d34: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 183d38: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 183d3c: mov w0, #0x68 */
  ARC_W_W(c, 0, UINT64_C(104));
  /* 183d40: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 183d44: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588552));
  fn2_1b5d1c(c);
  /* 183d48: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 183d4c: bl #0xe374c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588560));
  fn2_e374c(c);
  /* 183d50: tst w19, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 19) & UINT64_C(255)));
  /* 183d54: b.eq #0x183d60 */
  if (ARC_COND(c, 0)) goto L_183d60;
  /* 183d58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 183d5c: bl #0x1afcc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588576));
  fn2_1afcc0(c);
L_183d60:;
  /* 183d60: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 183d64: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 183d68: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 183d6c: ret  */
  return;
L_183d70:;
  /* 183d70: nop  */
  /* nop: no architectural effect here */
  /* 183d74: adr x0, #0x25d0d8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478296)));
  /* 183d78: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588604));
  fn2_24b710(c);
  /* 183d7c: cbz w0, #0x183ce4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_183ce4;
  /* 183d80: nop  */
  /* nop: no architectural effect here */
  /* 183d84: adr x20, #0x25d0d0 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478288)));
  /* 183d88: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 183d8c: add x1, x1, #0x414 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1044)));
  /* 183d90: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 183d94: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588632));
  fn2_1b907c(c);
  /* 183d98: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 183d9c: nop  */
  /* nop: no architectural effect here */
  /* 183da0: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 183da4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 183da8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 183dac: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588656));
  fn2_24b6f0(c);
  /* 183db0: nop  */
  /* nop: no architectural effect here */
  /* 183db4: adr x0, #0x25d0d8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478296)));
  /* 183db8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1588668));
  fn2_24b720(c);
  /* 183dbc: b #0x183ce4 */
  goto L_183ce4;
}

void fn2_184c6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077448300));
  /* 184c6c: cbz x0, #0x184cf4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_184cf4;
  /* 184c70: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 184c74: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 184c78: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 184c7c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 184c80: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 184c84: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 184c88: add x20, sp, #0xc */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(12)));
  /* 184c8c: bl #0x17b9fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592464));
  fn2_17b9fc(c);
  /* 184c90: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 184c94: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 184c98: add x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 184c9c: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 184ca0: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592484));
  fn2_1d5dc0(c);
  /* 184ca4: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 184ca8: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 184cac: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 184cb0: str w8, [x19, #0x18] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(24)), ARC_W_R(c, 8));
  /* 184cb4: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592504));
  fn2_1d06b8(c);
  /* 184cb8: ldr w8, [sp, #0x2c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(44))));
  /* 184cbc: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 184cc0: add x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 184cc4: str w8, [x19, #0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(40)), ARC_W_R(c, 8));
  /* 184cc8: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592524));
  fn2_1d5dc0(c);
  /* 184ccc: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 184cd0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592532));
  fn2_1ccd9c(c);
  /* 184cd4: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 184cd8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592540));
  fn2_1d2d24(c);
  /* 184cdc: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 184ce0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1592548));
  fn2_1d2d24(c);
  /* 184ce4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 184ce8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 184cec: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 184cf0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
L_184cf4:;
  /* 184cf4: ret  */
  return;
}

void fn2_185c78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077452408));
  /* 185c78: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 185c7c: ret  */
  return;
}

void fn2_186660(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077454944));
  /* 186660: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 186664: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 186668: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 18666c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 186670: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 186674: ldr x9, [x8, #0x3c0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(960))));
  /* 186678: cmp x9, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 0));
  /* 18667c: adrp x9, #0x255000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 186680: add x9, x9, #0x8c0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2240)));
  /* 186684: str x9, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 9));
  /* 186688: b.ne #0x186690 */
  if (ARC_COND(c, 1)) goto L_186690;
  /* 18668c: str xzr, [x8, #0x3c0] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(960)), ARC_X_R(c, 31));
L_186690:;
  /* 186690: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* 186694: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1599128));
  fn2_1d97fc(c);
  /* 186698: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 18669c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1599136));
  fn2_1d97fc(c);
  /* 1866a0: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1866a4: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 1866a8: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 1866ac: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1866b0: cbz x0, #0x1866d8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1866d8;
L_1866b4:;
  /* 1866b4: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 1866b8: cbz x1, #0x1866e4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_1866e4;
  /* 1866bc: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1599168));
  fn2_aeb74(c);
  /* 1866c0: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1866c4: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1866c8: cbnz w8, #0x1866b4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_1866b4;
  /* 1866cc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1866d0: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1599188));
  fn2_1b5ce8(c);
  /* 1866d4: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
L_1866d8:;
  /* 1866d8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1866dc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1866e0: ret  */
  return;
L_1866e4:;
  /* 1866e4: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1866e8: cbnz w8, #0x1866fc */
  if ((ARC_W_R(c, 8)) != 0) goto L_1866fc;
  /* 1866ec: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1866f0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1866f4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1866f8: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_1866fc:;
  /* 1866fc: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 186700: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 186704: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 186708: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 18670c: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 186710: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 186714: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 186718: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 18671c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 186720: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 186724: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 186728: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_18bdd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077477336));
  /* 18bdd8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 18bddc: ret  */
  return;
}

void fn2_18c8a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077480104));
  /* 18c8a8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18c8ac: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 18c8b0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 18c8b4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18c8b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 18c8bc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 18c8c0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 18c8c4: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 18c8c8: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 18c8cc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 18c8d0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 18c8d4: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 18c8d8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1624284));
  fn2_1bc084(c);
  /* 18c8dc: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 18c8e0: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 18c8e4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 18c8e8: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 18c8ec: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* 18c8f0: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 18c8f4: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* 18c8f8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18c8fc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 18c900: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 18c904: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18c908: b #0x18c94c */
  fn2_18c94c(c); return;
}

void fn2_18e15c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077486428));
  /* 18e15c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 18e160: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18e164: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18e168: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 18e16c: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 18e170: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 18e174: b.hi #0x18e1e8 */
  if (ARC_COND(c, 8)) goto L_18e1e8;
  /* 18e178: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 18e17c: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 18e180: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 18e184: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630600));
  fn2_1d2c2c(c);
  /* 18e188: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 18e18c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630608));
  fn2_1d2c2c(c);
  /* 18e190: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 18e194: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 18e198: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630620));
  fn2_1ccc74(c);
  /* 18e19c: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 18e1a0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18e1a4: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 18e1a8: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 18e1ac: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 18e1b0: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* 18e1b4: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630648));
  fn2_b2de4(c);
  /* 18e1b8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18e1bc: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 18e1c0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 18e1c4: bl #0xb4168 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630664));
  fn2_b4168(c);
  /* 18e1c8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18e1cc: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 18e1d0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 18e1d4: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630680));
  fn2_b2de4(c);
  /* 18e1d8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18e1dc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18e1e0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 18e1e4: ret  */
  return;
L_18e1e8:;
  /* 18e1e8: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* 18e1ec: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* 18e1f0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18e1f4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 18e1f8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 18e1fc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630720));
  fn2_1b8fd4(c);
  /* 18e200: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 18e204: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 18e208: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630732));
  fn2_1b7d24(c);
  /* 18e20c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18e210: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 18e214: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 18e218: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630748));
  fn2_1b8fd4(c);
  /* 18e21c: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 18e220: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 18e224: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630760));
  fn2_1d2c2c(c);
  /* 18e228: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 18e22c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630768));
  fn2_1d2c2c(c);
  /* 18e230: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 18e234: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 18e238: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630780));
  fn2_1ccc74(c);
  /* 18e23c: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* 18e240: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 18e244: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 18e248: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18e24c: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 18e250: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 18e254: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630808));
  fn2_1d5dc0(c);
  /* 18e258: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 18e25c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 18e260: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 18e264: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630824));
  fn2_1d06b8(c);
  /* 18e268: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 18e26c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 18e270: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 18e274: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630840));
  fn2_1d5dc0(c);
  /* 18e278: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18e27c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630848));
  fn2_1d2d24(c);
  /* 18e280: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 18e284: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630856));
  fn2_1ccd9c(c);
  /* 18e288: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18e28c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1630864));
  fn2_1d2d24(c);
  /* 18e290: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18e294: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18e298: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 18e29c: ret  */
  return;
}

void fn2_19161c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077499932));
  /* 19161c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 191620: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 191624: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 191628: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19162c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 191630: adrp x8, #0x255000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 191634: add x8, x8, #0xe00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3584)));
  /* 191638: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 19163c: str x8, [x0], #0x79 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(121));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 191640: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644100));
  fn2_1ccd9c(c);
  /* 191644: add x0, x19, #0x68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(104)));
  /* 191648: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644108));
  fn2_1db788(c);
  /* 19164c: add x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* 191650: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644116));
  fn2_1ccd9c(c);
  /* 191654: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* 191658: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644124));
  fn2_1ccd9c(c);
  /* 19165c: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* 191660: cbz x8, #0x1916cc */
  if ((ARC_X_R(c, 8)) == 0) goto L_1916cc;
  /* 191664: sub x1, x8, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 191668: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 19166c: bl #0x24b680 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644144));
  fn2_24b680(c);
  /* 191670: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 191674: b.ne #0x1916c8 */
  if (ARC_COND(c, 1)) goto L_1916c8;
  /* 191678: ldr x20, [x19, #0x50] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* 19167c: str xzr, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 31));
  /* 191680: ldur x21, [x20, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* 191684: cbz x21, #0x1916e0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1916e0;
  /* 191688: adrp x22, #0x257000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 19168c: mov x23, x20 */
  ARC_X_W(c, 23, ARC_X_R(c, 20));
  /* 191690: ldr x22, [x22, #0xfb0] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 22) + INT64_C(4016))));
  /* 191694: b #0x1916a4 */
  goto L_1916a4;
L_191698:;
  /* 191698: subs x21, x21, #1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 21), UINT64_C(1)));
  /* 19169c: str xzr, [x23], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 31));
  }
  /* 1916a0: b.eq #0x1916e0 */
  if (ARC_COND(c, 0)) goto L_1916e0;
L_1916a4:;
  /* 1916a4: ldr x0, [x23] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 23)));
  /* 1916a8: cbz x0, #0x191698 */
  if ((ARC_X_R(c, 0)) == 0) goto L_191698;
  /* 1916ac: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644208));
  fn2_225abc(c);
  /* 1916b0: tbz w0, #0, #0x191698 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_191698;
  /* 1916b4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 1916b8: ldr x9, [x22] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 22)));
  /* 1916bc: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1916c0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644228));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1916c4: b #0x191698 */
  goto L_191698;
L_1916c8:;
  /* 1916c8: str xzr, [x19, #0x50] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(80)), ARC_X_R(c, 31));
L_1916cc:;
  /* 1916cc: add x0, x19, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(56)));
  /* 1916d0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644244));
  fn2_1ccd9c(c);
  /* 1916d4: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1916d8: cbnz x0, #0x1916fc */
  if ((ARC_X_R(c, 0)) != 0) goto L_1916fc;
  /* 1916dc: b #0x19171c */
  goto L_19171c;
L_1916e0:;
  /* 1916e0: sub x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(16)));
  /* 1916e4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1916e8: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644268));
  fn2_1b5ce8(c);
  /* 1916ec: add x0, x19, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(56)));
  /* 1916f0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644276));
  fn2_1ccd9c(c);
  /* 1916f4: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1916f8: cbz x0, #0x19171c */
  if ((ARC_X_R(c, 0)) == 0) goto L_19171c;
L_1916fc:;
  /* 1916fc: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644288));
  fn2_225abc(c);
  /* 191700: tbz w0, #0, #0x19171c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_19171c;
  /* 191704: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 191708: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 19170c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 191710: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 191714: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 191718: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644316));
  arc_dispatch(c, ARC_X_R(c, 9));
L_19171c:;
  /* 19171c: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 191720: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 191724: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 191728: str xzr, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 31));
  /* 19172c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 191730: cbz x0, #0x191758 */
  if ((ARC_X_R(c, 0)) == 0) goto L_191758;
L_191734:;
  /* 191734: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 191738: cbz x1, #0x19176c */
  if ((ARC_X_R(c, 1)) == 0) goto L_19176c;
  /* 19173c: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644352));
  fn2_aeb74(c);
  /* 191740: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 191744: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 191748: cbnz w8, #0x191734 */
  if ((ARC_W_R(c, 8)) != 0) goto L_191734;
  /* 19174c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 191750: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1644372));
  fn2_1b5ce8(c);
  /* 191754: str xzr, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 31));
L_191758:;
  /* 191758: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19175c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 191760: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 191764: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 191768: ret  */
  return;
L_19176c:;
  /* 19176c: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 191770: cbnz w8, #0x19178c */
  if ((ARC_W_R(c, 8)) != 0) goto L_19178c;
  /* 191774: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 191778: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19177c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 191780: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 191784: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 191788: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_19178c:;
  /* 19178c: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 191790: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 191794: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 191798: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 19179c: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1917a0: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 1917a4: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 1917a8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1917ac: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1917b0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1917b4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1917b8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1917bc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1917c0: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_193be0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077509600));
  /* 193be0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 193be4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 193be8: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 193bec: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 193bf0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 193bf4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 193bf8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 193bfc: strb w8, [x0, #0x19] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(25)), ARC_W_R(c, 8));
  /* 193c00: add x0, x0, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(200)));
  /* 193c04: bl #0x19db04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653768));
  fn2_19db04(c);
  /* 193c08: ldr x21, [x19, #0xd8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(216))));
  /* 193c0c: ldr x20, [x19, #0xc8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(200))));
  /* 193c10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193c14: cmp x21, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(1));
  /* 193c18: b.ne #0x193c38 */
  if (ARC_COND(c, 1)) goto L_193c38;
  /* 193c1c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653792));
  fn2_1db4a4(c);
  /* 193c20: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 193c24: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 193c28: bl #0x230520 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653804));
  fn2_230520(c);
  /* 193c2c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193c30: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653812));
  fn2_1db788(c);
  /* 193c34: b #0x193c94 */
  goto L_193c94;
L_193c38:;
  /* 193c38: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653820));
  fn2_1db4a4(c);
  /* 193c3c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 193c40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 193c44: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 193c48: bl #0x230618 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653836));
  fn2_230618(c);
  /* 193c4c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193c50: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653844));
  fn2_1db788(c);
  /* 193c54: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 193c58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 193c5c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 193c60: bl #0x193cf0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653860));
  fn2_193cf0(c);
  /* 193c64: ldr x20, [sp, #8] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(8))));
  /* 193c68: cbz x20, #0x193c94 */
  if ((ARC_X_R(c, 20)) == 0) goto L_193c94;
  /* 193c6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 193c70: bl #0x231128 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653876));
  fn2_231128(c);
  /* 193c74: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 193c78: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653884));
  fn2_225abc(c);
  /* 193c7c: tbz w0, #0, #0x193c94 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_193c94;
  /* 193c80: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 193c84: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 193c88: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 193c8c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 193c90: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653908));
  arc_dispatch(c, ARC_X_R(c, 8));
L_193c94:;
  /* 193c94: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 193c98: add x1, x1, #0x63f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1599)));
  /* 193c9c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 193ca0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 193ca4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653928));
  fn2_1b8fd4(c);
  /* 193ca8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193cac: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 193cb0: add x20, sp, #8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(8)));
  /* 193cb4: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653944));
  fn2_1bc44c(c);
  /* 193cb8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 193cbc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 193cc0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 193cc4: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 193cc8: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653964));
  fn2_221204(c);
  /* 193ccc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 193cd0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653972));
  fn2_1bc620(c);
  /* 193cd4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 193cd8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1653980));
  fn2_1d2d24(c);
  /* 193cdc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 193ce0: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 193ce4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 193ce8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 193cec: ret  */
  return;
}

void fn2_19db04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077550340));
  /* 19db04: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 19db08: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 19db0c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19db10: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 19db14: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 19db18: bl #0x1afcb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694492));
  fn2_1afcb8(c);
  /* 19db1c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 19db20: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 19db24: ldr x8, [x8, #0xfd8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4056))));
  /* 19db28: cbz x8, #0x19db30 */
  if ((ARC_X_R(c, 8)) == 0) goto L_19db30;
  /* 19db2c: bl #0x24b760 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694512));
  fn2_24b760(c);
L_19db30:;
  /* 19db30: nop  */
  /* nop: no architectural effect here */
  /* 19db34: adr x0, #0x25cc10 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477072)));
  /* 19db38: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694524));
  fn2_24b770(c);
  /* 19db3c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 19db40: ldr x8, [x8, #0xfe8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4072))));
  /* 19db44: str x20, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* 19db48: cbz x8, #0x19db50 */
  if ((ARC_X_R(c, 8)) == 0) goto L_19db50;
  /* 19db4c: bl #0x24b780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694544));
  fn2_24b780(c);
L_19db50:;
  /* 19db50: nop  */
  /* nop: no architectural effect here */
  /* 19db54: adr x0, #0x25cc30 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477104)));
  /* 19db58: bl #0x24b770 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694556));
  fn2_24b770(c);
  /* 19db5c: nop  */
  /* nop: no architectural effect here */
  /* 19db60: adr x8, #0x255800 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2447360)));
  /* 19db64: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 19db68: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 19db6c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 19db70: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 19db74: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 19db78: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694588));
  fn2_1b5d1c(c);
  /* 19db7c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 19db80: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 19db84: add x1, x1, #0x760 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1888)));
  /* 19db88: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19db8c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 19db90: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694612));
  fn2_1b8fd4(c);
  /* 19db94: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 19db98: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 19db9c: bl #0x1afcfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694624));
  fn2_1afcfc(c);
  /* 19dba0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 19dba4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694632));
  fn2_1d2d24(c);
  /* 19dba8: adrp x8, #0x255000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 19dbac: add x8, x8, #0x828 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2088)));
  /* 19dbb0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 19dbb4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 19dbb8: bl #0x1afe0c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694652));
  fn2_1afe0c(c);
  /* 19dbbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 19dbc0: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694660));
  fn2_2258f4(c);
  /* 19dbc4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 19dbc8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 19dbcc: tbz w8, #0, #0x19dbe4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_19dbe4;
  /* 19dbd0: cmp x20, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 19dbd4: b.eq #0x19dc1c */
  if (ARC_COND(c, 0)) goto L_19dc1c;
  /* 19dbd8: cbnz x0, #0x19dbec */
  if ((ARC_X_R(c, 0)) != 0) goto L_19dbec;
  /* 19dbdc: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 19dbe0: b #0x19dc14 */
  goto L_19dc14;
L_19dbe4:;
  /* 19dbe4: cbz x0, #0x19dc3c */
  if ((ARC_X_R(c, 0)) == 0) goto L_19dc3c;
  /* 19dbe8: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
L_19dbec:;
  /* 19dbec: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694704));
  fn2_225abc(c);
  /* 19dbf0: tbz w0, #0, #0x19dc0c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_19dc0c;
  /* 19dbf4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 19dbf8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 19dbfc: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 19dc00: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 19dc04: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 19dc08: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694732));
  arc_dispatch(c, ARC_X_R(c, 9));
L_19dc0c:;
  /* 19dc0c: str x20, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 19dc10: cbz x20, #0x19dc3c */
  if ((ARC_X_R(c, 20)) == 0) goto L_19dc3c;
L_19dc14:;
  /* 19dc14: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 19dc18: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694748));
  fn2_2259d8(c);
L_19dc1c:;
  /* 19dc1c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 19dc20: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694756));
  fn2_225abc(c);
  /* 19dc24: tbz w0, #0, #0x19dc3c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_19dc3c;
  /* 19dc28: nop  */
  /* nop: no architectural effect here */
  /* 19dc2c: adr x8, #0x25d7d0 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2480080)));
  /* 19dc30: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 19dc34: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 19dc38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1694780));
  arc_dispatch(c, ARC_X_R(c, 8));
L_19dc3c:;
  /* 19dc3c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19dc40: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19dc44: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 19dc48: ret  */
  return;
}

void fn2_19ec68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077554792));
  /* 19ec68: ldr x0, [x0, #0xf0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(240))));
  /* 19ec6c: ret  */
  return;
}

void fn2_19fbc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077558720));
  /* 19fbc0: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 19fbc4: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* 19fbc8: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 19fbcc: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 19fbd0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 19fbd4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19fbd8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 19fbdc: tbnz x1, #0x3f, #0x19fec4 */
  if (((ARC_X_R(c, 1)) >> 63 & 1) != 0) goto L_19fec4;
  /* 19fbe0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 19fbe4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 19fbe8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 19fbec: cbz x8, #0x19fc00 */
  if ((ARC_X_R(c, 8)) == 0) goto L_19fc00;
  /* 19fbf0: ldur x24, [x8, #-8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 19fbf4: cmp x24, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 20));
  /* 19fbf8: b.ne #0x19fc0c */
  if (ARC_COND(c, 1)) goto L_19fc0c;
  /* 19fbfc: b #0x19fdc0 */
  goto L_19fdc0;
L_19fc00:;
  /* 19fc00: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* 19fc04: cmp xzr, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 31), ARC_X_R(c, 20));
  /* 19fc08: b.eq #0x19fdc0 */
  if (ARC_COND(c, 0)) goto L_19fdc0;
L_19fc0c:;
  /* 19fc0c: cbz x20, #0x19fc54 */
  if ((ARC_X_R(c, 20)) == 0) goto L_19fc54;
  /* 19fc10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 19fc14: bl #0x19ff34 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1702936));
  fn2_19ff34(c);
  /* 19fc18: add x8, x24, x24, lsl #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 24)) << 1)));
  /* 19fc1c: lsl x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 19fc20: cbz x8, #0x19fcbc */
  if ((ARC_X_R(c, 8)) == 0) goto L_19fcbc;
  /* 19fc24: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 19fc28: orr x8, x8, x8, lsr #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* 19fc2c: orr x8, x8, x8, lsr #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 2)));
  /* 19fc30: orr x8, x8, x8, lsr #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 4)));
  /* 19fc34: orr x8, x8, x8, lsr #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 8)));
  /* 19fc38: orr x8, x8, x8, lsr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 16)));
  /* 19fc3c: orr x8, x8, x8, lsr #32 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 32)));
  /* 19fc40: add x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 19fc44: add x8, x20, x20, lsl #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 20)) << 1)));
  /* 19fc48: lsl x23, x8, #3 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 19fc4c: cbnz x23, #0x19fccc */
  if ((ARC_X_R(c, 23)) != 0) goto L_19fccc;
  /* 19fc50: b #0x19fd14 */
  goto L_19fd14;
L_19fc54:;
  /* 19fc54: cbz x8, #0x19fdc0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_19fdc0;
  /* 19fc58: sub x1, x8, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 19fc5c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 19fc60: bl #0x24b680 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703012));
  fn2_24b680(c);
  /* 19fc64: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 19fc68: b.ne #0x19fda8 */
  if (ARC_COND(c, 1)) goto L_19fda8;
  /* 19fc6c: ldr x20, [x19] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 19)));
  /* 19fc70: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 19fc74: ldur x21, [x20, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* 19fc78: cbz x21, #0x19fdb4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_19fdb4;
  /* 19fc7c: adrp x19, #0x257000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 19fc80: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 19fc84: ldr x19, [x19, #0xfb0] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(4016))));
  /* 19fc88: b #0x19fc98 */
  goto L_19fc98;
L_19fc8c:;
  /* 19fc8c: subs x21, x21, #1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 21), UINT64_C(1)));
  /* 19fc90: str xzr, [x22], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 31));
  }
  /* 19fc94: b.eq #0x19fdb4 */
  if (ARC_COND(c, 0)) goto L_19fdb4;
L_19fc98:;
  /* 19fc98: ldr x0, [x22] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 22)));
  /* 19fc9c: cbz x0, #0x19fc8c */
  if ((ARC_X_R(c, 0)) == 0) goto L_19fc8c;
  /* 19fca0: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703076));
  fn2_225abc(c);
  /* 19fca4: tbz w0, #0, #0x19fc8c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_19fc8c;
  /* 19fca8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 19fcac: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 19fcb0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 19fcb4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703096));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 19fcb8: b #0x19fc8c */
  goto L_19fc8c;
L_19fcbc:;
  /* 19fcbc: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* 19fcc0: add x8, x20, x20, lsl #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 20)) << 1)));
  /* 19fcc4: lsl x23, x8, #3 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 19fcc8: cbz x23, #0x19fd14 */
  if ((ARC_X_R(c, 23)) == 0) goto L_19fd14;
L_19fccc:;
  /* 19fccc: sub x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 19fcd0: orr x8, x8, x8, lsr #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* 19fcd4: orr x8, x8, x8, lsr #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 2)));
  /* 19fcd8: orr x8, x8, x8, lsr #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 4)));
  /* 19fcdc: orr x8, x8, x8, lsr #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 8)));
  /* 19fce0: orr x8, x8, x8, lsr #16 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 16)));
  /* 19fce4: orr x21, x8, x8, lsr #32 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) | ((uint64_t)(ARC_X_R(c, 8)) >> 32)));
  /* 19fce8: adds x25, x21, #1 */
  ARC_X_W(c, 25, arc_add64(c, ARC_X_R(c, 21), UINT64_C(1), 0));
  /* 19fcec: b.hs #0x19fd14 */
  if (ARC_COND(c, 2)) goto L_19fd14;
  /* 19fcf0: cmp x24, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 20));
  /* 19fcf4: b.ge #0x19fd44 */
  if (ARC_COND(c, 10)) goto L_19fd44;
  /* 19fcf8: cmp x25, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 22));
  /* 19fcfc: b.ne #0x19fde0 */
  if (ARC_COND(c, 1)) goto L_19fde0;
  /* 19fd00: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 19fd04: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* 19fd08: subs x8, x20, x10 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 10)));
  /* 19fd0c: b.gt #0x19fe84 */
  if (ARC_COND(c, 12)) goto L_19fe84;
  /* 19fd10: b #0x19feac */
  goto L_19feac;
L_19fd14:;
  /* 19fd14: adrp x0, #0x1a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(106496)));
  /* 19fd18: add x0, x0, #0x91b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2331)));
  /* 19fd1c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 19fd20: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 19fd24: adrp x3, #0x22000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(139264)));
  /* 19fd28: add x3, x3, #0xf5e */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3934)));
  /* 19fd2c: mov w2, #0x170 */
  ARC_W_W(c, 2, UINT64_C(368));
L_19fd30:;
  /* 19fd30: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 19fd34: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 19fd38: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703228));
  fn2_1b54b0(c);
  /* 19fd3c: mov w0, #6 */
  ARC_W_W(c, 0, UINT64_C(6));
  /* 19fd40: b #0x19fdc4 */
  goto L_19fdc4;
L_19fd44:;
  /* 19fd44: b.ls #0x19fdc0 */
  if (ARC_COND(c, 9)) goto L_19fdc0;
  /* 19fd48: ldr x24, [x19] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 19)));
  /* 19fd4c: ldur x8, [x24, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(-8))));
  /* 19fd50: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 19fd54: b.ls #0x19fe1c */
  if (ARC_COND(c, 9)) goto L_19fe1c;
  /* 19fd58: adrp x26, #0x257000 */
  ARC_X_W(c, 26, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 19fd5c: mov x27, x20 */
  ARC_X_W(c, 27, ARC_X_R(c, 20));
  /* 19fd60: ldr x26, [x26, #0xfb0] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 26) + INT64_C(4016))));
  /* 19fd64: b #0x19fd84 */
  goto L_19fd84;
L_19fd68:;
  /* 19fd68: str xzr, [x24, x23] */
  arc_st64((ARC_X_R(c, 24) + ARC_X_R(c, 23)), ARC_X_R(c, 31));
  /* 19fd6c: ldr x24, [x19] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 19)));
  /* 19fd70: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 19fd74: add x23, x23, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(24)));
  /* 19fd78: ldur x8, [x24, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(-8))));
  /* 19fd7c: cmp x27, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* 19fd80: b.hs #0x19fe1c */
  if (ARC_COND(c, 2)) goto L_19fe1c;
L_19fd84:;
  /* 19fd84: ldr x0, [x24, x23] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 24) + ARC_X_R(c, 23))));
  /* 19fd88: cbz x0, #0x19fd68 */
  if ((ARC_X_R(c, 0)) == 0) goto L_19fd68;
  /* 19fd8c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703312));
  fn2_225abc(c);
  /* 19fd90: tbz w0, #0, #0x19fd68 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_19fd68;
  /* 19fd94: ldr x8, [x24, x23] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + ARC_X_R(c, 23))));
  /* 19fd98: ldr x9, [x26] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 26)));
  /* 19fd9c: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 19fda0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703332));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 19fda4: b #0x19fd68 */
  goto L_19fd68;
L_19fda8:;
  /* 19fda8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 19fdac: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 19fdb0: b #0x19fdc4 */
  goto L_19fdc4;
L_19fdb4:;
  /* 19fdb4: sub x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(16)));
  /* 19fdb8: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 19fdbc: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703360));
  fn2_1b5ce8(c);
L_19fdc0:;
  /* 19fdc0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_19fdc4:;
  /* 19fdc4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19fdc8: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* 19fdcc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 19fdd0: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 19fdd4: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 19fdd8: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19fddc: ret  */
  return;
L_19fde0:;
  /* 19fde0: cbz x24, #0x19fe54 */
  if ((ARC_X_R(c, 24)) == 0) goto L_19fe54;
  /* 19fde4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 19fde8: add x1, x21, #0x11 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(17)));
  /* 19fdec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 19fdf0: sub x0, x8, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 19fdf4: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703416));
  fn2_1b5bd8(c);
  /* 19fdf8: cbz x0, #0x19fef4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_19fef4;
  /* 19fdfc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 19fe00: add x9, x0, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 19fe04: stlr x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 19fe08: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 19fe0c: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* 19fe10: subs x8, x20, x10 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 10)));
  /* 19fe14: b.gt #0x19fe84 */
  if (ARC_COND(c, 12)) goto L_19fe84;
  /* 19fe18: b #0x19feac */
  goto L_19feac;
L_19fe1c:;
  /* 19fe1c: cmp x25, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 22));
  /* 19fe20: b.eq #0x19fe48 */
  if (ARC_COND(c, 0)) goto L_19fe48;
  /* 19fe24: sub x0, x24, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) - UINT64_C(16)));
  /* 19fe28: add x1, x21, #0x11 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(17)));
  /* 19fe2c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 19fe30: bl #0x1b5bd8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703476));
  fn2_1b5bd8(c);
  /* 19fe34: cbz x0, #0x19fef4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_19fef4;
  /* 19fe38: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 19fe3c: add x24, x0, #0x10 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 19fe40: stlr x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 19fe44: str x24, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 24));
L_19fe48:;
  /* 19fe48: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 19fe4c: stur x20, [x24, #-8] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(-8)), ARC_X_R(c, 20));
  /* 19fe50: b #0x19fdc4 */
  goto L_19fdc4;
L_19fe54:;
  /* 19fe54: add x0, x21, #0x11 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(17)));
  /* 19fe58: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 19fe5c: bl #0x1b5b60 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703520));
  fn2_1b5b60(c);
  /* 19fe60: cbz x0, #0x19ff14 */
  if ((ARC_X_R(c, 0)) == 0) goto L_19ff14;
  /* 19fe64: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 19fe68: add x9, x0, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 19fe6c: stlr x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 19fe70: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* 19fe74: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 19fe78: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* 19fe7c: subs x8, x20, x10 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 10)));
  /* 19fe80: b.le #0x19feac */
  if (ARC_COND(c, 13)) goto L_19feac;
L_19fe84:;
  /* 19fe84: add x9, x10, x10, lsl #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 10)) << 1)));
  /* 19fe88: lsl x9, x9, #3 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(3)) & 63)));
L_19fe8c:;
  /* 19fe8c: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* 19fe90: subs x8, x8, #1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1)));
  /* 19fe94: add x10, x10, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ARC_X_R(c, 9)));
  /* 19fe98: add x9, x9, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* 19fe9c: stp xzr, xzr, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 19fea0: str xzr, [x10, #0x10] */
  arc_st64((ARC_X_R(c, 10) + INT64_C(16)), ARC_X_R(c, 31));
  /* 19fea4: b.ne #0x19fe8c */
  if (ARC_COND(c, 1)) goto L_19fe8c;
  /* 19fea8: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
L_19feac:;
  /* 19feac: sub x8, x9, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* 19feb0: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* 19feb4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 19feb8: csel x8, xzr, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* 19febc: str x20, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 19fec0: b #0x19fdc4 */
  goto L_19fdc4;
L_19fec4:;
  /* 19fec4: adrp x0, #0x1a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(106496)));
  /* 19fec8: add x0, x0, #0x91b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2331)));
  /* 19fecc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 19fed0: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 19fed4: adrp x3, #0x25000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(151552)));
  /* 19fed8: add x3, x3, #0xcb8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3256)));
  /* 19fedc: mov w2, #0x15d */
  ARC_W_W(c, 2, UINT64_C(349));
  /* 19fee0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 19fee4: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 19fee8: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1703660));
  fn2_1b54b0(c);
  /* 19feec: mov w0, #0x1f */
  ARC_W_W(c, 0, UINT64_C(31));
  /* 19fef0: b #0x19fdc4 */
  goto L_19fdc4;
L_19fef4:;
  /* 19fef4: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 19fef8: add x0, x0, #0xebd */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3773)));
  /* 19fefc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 19ff00: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 19ff04: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 19ff08: add x3, x3, #0xca8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3240)));
  /* 19ff0c: mov w2, #0x1af */
  ARC_W_W(c, 2, UINT64_C(431));
  /* 19ff10: b #0x19fd30 */
  goto L_19fd30;
L_19ff14:;
  /* 19ff14: adrp x0, #0x1a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(106496)));
  /* 19ff18: add x0, x0, #0x91b */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2331)));
  /* 19ff1c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 19ff20: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 19ff24: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 19ff28: add x3, x3, #0xca8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3240)));
  /* 19ff2c: mov w2, #0x177 */
  ARC_W_W(c, 2, UINT64_C(375));
  /* 19ff30: b #0x19fd30 */
  goto L_19fd30;
}

void fn2_1a0c10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077562896));
  /* 1a0c10: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a0c14: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1a0c18: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a0c1c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a0c20: ldp x21, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1a0c24: add x19, x1, x8, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 1a0c28: tbz w8, #0, #0x1a0c34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a0c34;
  /* 1a0c2c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1a0c30: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_1a0c34:;
  /* 1a0c34: ldp x8, x1, [x2] */
  { const uint64_t _pa = ARC_X_R(c, 2);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1a0c38: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a0c3c: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1a0c40: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1a0c44: cset w20, ne */
  ARC_W_W(c, 20, (ARC_COND(c, 1) ? 1 : 0));
  /* 1a0c48: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1707084));
  fn2_1ccc88(c);
  /* 1a0c4c: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a0c50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a0c54: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 1a0c58: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1707100));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1a0c5c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a0c60: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1707108));
  fn2_1ccd9c(c);
  /* 1a0c64: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a0c68: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a0c6c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a0c70: ret  */
  return;
}

void fn2_1a2174(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077568372));
  /* 1a2174: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a2178: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1a217c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a2180: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a2184: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1a2188: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a218c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a2190: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1a2194: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 1a2198: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1a219c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712544));
  fn2_1b5d1c(c);
  /* 1a21a0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1a21a4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 1a21a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a21ac: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1a21b0: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1a21b4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1a21b8: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1a21bc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712576));
  fn2_1d2c2c(c);
  /* 1a21c0: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a21c4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712584));
  fn2_1d2c2c(c);
  /* 1a21c8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1a21cc: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 1a21d0: add x8, x8, #0x350 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(848)));
  /* 1a21d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a21d8: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 1a21dc: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 1a21e0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1a21e4: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a21e8: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 1a21ec: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 1a21f0: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 1a21f4: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 1a21f8: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 1a21fc: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712640));
  fn2_1b5e68(c);
  /* 1a2200: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 1a2204: nop  */
  /* nop: no architectural effect here */
  /* 1a2208: adr x8, #0x25d368 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a220c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1a2210: tbz w8, #0, #0x1a224c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a224c;
L_1a2214:;
  /* 1a2214: nop  */
  /* nop: no architectural effect here */
  /* 1a2218: adr x1, #0x25d35a */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a221c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a2220: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712676));
  fn2_1d2c40(c);
  /* 1a2224: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a2228: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a222c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712688));
  fn2_1d5dc0(c);
  /* 1a2230: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a2234: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712696));
  fn2_1d2d24(c);
  /* 1a2238: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a223c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a2240: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a2244: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a2248: ret  */
  return;
L_1a224c:;
  /* 1a224c: nop  */
  /* nop: no architectural effect here */
  /* 1a2250: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a2254: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712728));
  fn2_24b710(c);
  /* 1a2258: cbz w0, #0x1a2214 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1a2214;
  /* 1a225c: nop  */
  /* nop: no architectural effect here */
  /* 1a2260: adr x20, #0x25d35a */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a2264: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1a2268: add x1, x1, #0x53c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1340)));
  /* 1a226c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1a2270: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712756));
  fn2_1b907c(c);
  /* 1a2274: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a2278: nop  */
  /* nop: no architectural effect here */
  /* 1a227c: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1a2280: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1a2284: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1a2288: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712780));
  fn2_24b6f0(c);
  /* 1a228c: nop  */
  /* nop: no architectural effect here */
  /* 1a2290: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a2294: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1712792));
  fn2_24b720(c);
  /* 1a2298: b #0x1a2214 */
  goto L_1a2214;
}

void fn2_1a37d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077574104));
  /* 1a37d8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1a37dc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a37e0: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 1a37e4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a37e8: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1a37ec: ldr w8, [x1] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 1)));
  /* 1a37f0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1a37f4: cmp w8, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 0));
  /* 1a37f8: b.ne #0x1a3864 */
  if (ARC_COND(c, 1)) goto L_1a3864;
  /* 1a37fc: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* 1a3800: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1a3804: add x21, sp, #0xc */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(12)));
  /* 1a3808: bl #0x1a3880 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718284));
  fn2_1a3880(c);
  /* 1a380c: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 1a3810: add x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 1a3814: add x1, x21, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 1a3818: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 1a381c: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718304));
  fn2_1d2b98(c);
  /* 1a3820: add x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 1a3824: add x1, x21, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 1a3828: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718316));
  fn2_1d2b98(c);
  /* 1a382c: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 1a3830: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1a3834: add x1, x21, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 1a3838: str w8, [x20, #0x14] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1a383c: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718336));
  fn2_1d0708(c);
  /* 1a3840: ldr w8, [sp, #0x2c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(44))));
  /* 1a3844: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 1a3848: str w8, [x20, #0x20] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 8));
  /* 1a384c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718352));
  fn2_1ccd9c(c);
  /* 1a3850: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 1a3854: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718360));
  fn2_1d2d24(c);
  /* 1a3858: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 1a385c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1718368));
  fn2_1d2d24(c);
  /* 1a3860: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
L_1a3864:;
  /* 1a3864: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 1a3868: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1a386c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a3870: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1a3874: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a3878: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1a387c: ret  */
  return;
}

void fn2_1a6c28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077587496));
  /* 1a6c28: adrp x0, #0x1a6000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(1728512)));
  /* 1a6c2c: add x0, x0, #0xc80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3200)));
  /* 1a6c30: ret  */
  return;
}

void fn2_1a8a98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077595288));
  /* 1a8a98: ret  */
  return;
}

void fn2_1aa6ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077602540));
  /* 1aa6ec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1aa6f0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1aa6f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1aa6f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1aa6fc: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1746688));
  fn2_1b6040(c);
  /* 1aa700: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1aa704: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1aa708: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aa70c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_1aeba8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077620136));
  /* 1aeba8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1aebac: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1aebb0: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 1aebb4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1aebb8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1aebbc: cmp w1, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4));
  /* 1aebc0: b.ge #0x1aed34 */
  if (ARC_COND(c, 10)) goto L_1aed34;
  /* 1aebc4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1aebc8: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 1aebcc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1aebd0: ldr x8, [x8, #0x620] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1568))));
  /* 1aebd4: str w1, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* 1aebd8: cbz x0, #0x1aebec */
  if ((ARC_X_R(c, 0)) == 0) goto L_1aebec;
  /* 1aebdc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aebe0: cbz x8, #0x1aebec */
  if ((ARC_X_R(c, 8)) == 0) goto L_1aebec;
  /* 1aebe4: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 1aebe8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764332));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1aebec:;
  /* 1aebec: nop  */
  /* nop: no architectural effect here */
  /* 1aebf0: adr x21, #0x25d92c */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2480428)));
  /* 1aebf4: ldr w8, [x21, w20, uxtw #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 21) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 20)))) << 2))));
  /* 1aebf8: cbz w8, #0x1aec0c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1aec0c;
  /* 1aebfc: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 1aec00: str w8, [x21, w20, uxtw #2] */
  arc_st32((ARC_X_R(c, 21) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 20)))) << 2)), ARC_W_R(c, 8));
  /* 1aec04: cbnz x19, #0x1aec24 */
  if ((ARC_X_R(c, 19)) != 0) goto L_1aec24;
  /* 1aec08: b #0x1aec68 */
  goto L_1aec68;
L_1aec0c:;
  /* 1aec0c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 1aec10: bl #0x1b2b28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764372));
  fn2_1b2b28(c);
  /* 1aec14: ldr w8, [x21, w20, uxtw #2] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 21) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 20)))) << 2))));
  /* 1aec18: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* 1aec1c: str w8, [x21, w20, uxtw #2] */
  arc_st32((ARC_X_R(c, 21) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 20)))) << 2)), ARC_W_R(c, 8));
  /* 1aec20: cbz x19, #0x1aec68 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1aec68;
L_1aec24:;
  /* 1aec24: cbnz w20, #0x1aec68 */
  if ((ARC_W_R(c, 20)) != 0) goto L_1aec68;
  /* 1aec28: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1aec2c: ldr x8, [x1, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 1) + INT64_C(24));
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1aec30: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 1aec34: orr x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) | ARC_X_R(c, 8)));
  /* 1aec38: cbnz x8, #0x1aec44 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1aec44;
  /* 1aec3c: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 1aec40: cbz x8, #0x1aed20 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1aed20;
L_1aec44:;
  /* 1aec44: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1aec48: adrp x9, #0x25d000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1aec4c: ldr x0, [x8, #0x3d8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(984))));
  /* 1aec50: ldr x2, [x9, #0x920] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 9) + INT64_C(2336))));
  /* 1aec54: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1aec58: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1aec5c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aec60: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1aec64: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
L_1aec68:;
  /* 1aec68: cmp w20, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(3));
  /* 1aec6c: b.ne #0x1aed20 */
  if (ARC_COND(c, 1)) goto L_1aed20;
  /* 1aec70: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1aec74: adrp x9, #0x25d000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1aec78: adrp x1, #0x258000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1aec7c: ldr x8, [x8, #0x8f8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2296))));
  /* 1aec80: ldr x0, [x9, #0x3d8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(984))));
  /* 1aec84: ldr x1, [x1, #0xa28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2600))));
  /* 1aec88: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764492));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1aec8c: adrp x19, #0x25d000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1aec90: add x19, x19, #0x950 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(2384)));
  /* 1aec94: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 1aec98: cbz x8, #0x1aed20 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1aed20;
  /* 1aec9c: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1aeca0: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1aeca4: b.lt #0x1aed20 */
  if (ARC_COND(c, 11)) goto L_1aed20;
  /* 1aeca8: ldr w8, [x19, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1aecac: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 1aecb0: b.lt #0x1aed20 */
  if (ARC_COND(c, 11)) goto L_1aed20;
  /* 1aecb4: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1aecb8: cbz x8, #0x1aed20 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1aed20;
  /* 1aecbc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1aecc0: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764548));
  fn2_1ddc90(c);
  /* 1aecc4: ldrsw x1, [x19, #8] */
  ARC_X_W(c, 1, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 19) + INT64_C(8)))));
  /* 1aecc8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1aeccc: bl #0x1de070 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764560));
  fn2_1de070(c);
  /* 1aecd0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1aecd4: bl #0x1bbc9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764568));
  fn2_1bbc9c(c);
  /* 1aecd8: ldr x1, [x19, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1aecdc: ldrsw x2, [x19, #8] */
  ARC_X_W(c, 2, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 19) + INT64_C(8)))));
  /* 1aece0: bl #0x24b7a0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764580));
  fn2_24b7a0(c);
  /* 1aece4: ldrsw x1, [x19] */
  ARC_X_W(c, 1, ((int64_t)(int32_t)arc_ld32(ARC_X_R(c, 19))));
  /* 1aece8: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 1aecec: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1aecf0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 1aecf4: bl #0x1de60c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764600));
  fn2_1de60c(c);
  /* 1aecf8: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1aecfc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1aed00: ldr x20, [x8, #0x908] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(2312))));
  /* 1aed04: bl #0x1bbc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764616));
  fn2_1bbc88(c);
  /* 1aed08: ldrsw x1, [x19] */
  ARC_X_W(c, 1, ((int64_t)(int32_t)arc_ld32(ARC_X_R(c, 19))));
  /* 1aed0c: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764624));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 1aed10: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1aed14: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764632));
  fn2_1dde08(c);
  /* 1aed18: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1aed1c: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1764640));
  fn2_1dde08(c);
L_1aed20:;
  /* 1aed20: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1aed24: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1aed28: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aed2c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1aed30: ret  */
  return;
L_1aed34:;
  /* 1aed34: adrp x0, #0x2b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1aed38: add x0, x0, #0xc03 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3075)));
  /* 1aed3c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1aed40: add x1, x1, #0xc80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3200)));
  /* 1aed44: adrp x3, #0x2f000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1aed48: add x3, x3, #0xc4e */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3150)));
  /* 1aed4c: mov w2, #0x208 */
  ARC_W_W(c, 2, UINT64_C(520));
  /* 1aed50: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1aed54: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1aed58: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1aed5c: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1aed60: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1aed64: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1aed68: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_1aff5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077625180));
  /* 1aff5c: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1aff60: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_1b3278(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077638264));
  /* 1b3278: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1b327c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b3280: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 1b3284: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b3288: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b328c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1b3290: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1b3294: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b3298: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 1b329c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1b32a0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1b32a4: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* 1b32a8: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782444));
  fn2_1db4a4(c);
  /* 1b32ac: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1b32b0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1b32b4: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782456));
  fn2_1d2c40(c);
  /* 1b32b8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1b32bc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1b32c0: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782468));
  fn2_1d2c40(c);
  /* 1b32c4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b32c8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1b32cc: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782480));
  fn2_1d2c40(c);
  /* 1b32d0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1b32d4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1b32d8: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782492));
  fn2_1d2c40(c);
  /* 1b32dc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b32e0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1b32e4: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1b32e8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1b32ec: mov x4, sp */
  ARC_X_W(c, 4, (c)->sp);
  /* 1b32f0: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* 1b32f4: bl #0x1b3cfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782520));
  fn2_1b3cfc(c);
  /* 1b32f8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1b32fc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782528));
  fn2_1d2d24(c);
  /* 1b3300: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1b3304: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782536));
  fn2_1d2d24(c);
  /* 1b3308: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1b330c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782544));
  fn2_1d2d24(c);
  /* 1b3310: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1b3314: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782552));
  fn2_1d2d24(c);
  /* 1b3318: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b331c: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1782560));
  fn2_1db788(c);
  /* 1b3320: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b3324: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1b3328: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b332c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b3330: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1b3334: ret  */
  return;
}

void fn2_1b5598(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077647256));
  /* 1b5598: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b559c: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b55a0: tst w6, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 6) & UINT64_C(1)));
  /* 1b55a4: ldr x10, [x10, #0x6a0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(1696))));
  /* 1b55a8: ldr x11, [x11, #0x690] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(1680))));
  /* 1b55ac: mov w8, w2 */
  ARC_W_W(c, 8, ARC_W_R(c, 2));
  /* 1b55b0: mov x9, x1 */
  ARC_X_W(c, 9, ARC_X_R(c, 1));
  /* 1b55b4: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* 1b55b8: and w5, w5, #1 */
  ARC_W_W(c, 5, (ARC_W_R(c, 5) & UINT64_C(1)));
  /* 1b55bc: csel x10, x10, x11, ne */
  ARC_X_W(c, 10, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* 1b55c0: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* 1b55c4: mov x1, x4 */
  ARC_X_W(c, 1, ARC_X_R(c, 4));
  /* 1b55c8: ldr x6, [x10] */
  ARC_X_W(c, 6, arc_ld64(ARC_X_R(c, 10)));
  /* 1b55cc: mov x3, x9 */
  ARC_X_W(c, 3, ARC_X_R(c, 9));
  /* 1b55d0: mov w4, w8 */
  ARC_W_W(c, 4, ARC_W_R(c, 8));
  /* 1b55d4: br x6 */
  arc_dispatch(c, ARC_X_R(c, 6)); return;
}

void fn2_1b6c24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077653028));
  /* 1b6c24: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b6c28: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b6c2c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b6c30: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b6c34: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1797176));
  fn2_1d2c2c(c);
  /* 1b6c38: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1b6c3c: str wzr, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 31));
  /* 1b6c40: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1797188));
  fn2_1d2c2c(c);
  /* 1b6c44: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1b6c48: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1797196));
  fn2_1d2c2c(c);
  /* 1b6c4c: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* 1b6c50: str wzr, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 31));
  /* 1b6c54: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1797208));
  fn2_1ccc74(c);
  /* 1b6c58: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* 1b6c5c: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1b6c60: str wzr, [x19, #0x30] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(48)), ARC_W_R(c, 31));
  /* 1b6c64: ldr d0, [x8, #0x708] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1800))));
  /* 1b6c68: stp xzr, xzr, [x19, #0x78] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(120));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1b6c6c: str xzr, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 31));
  /* 1b6c70: str d0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  /* 1b6c74: stur q1, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[1].u64[1]);
  /* 1b6c78: stur q1, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[1].u64[1]);
  /* 1b6c7c: stur q1, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)) + 8, (c)->q[1].u64[1]);
  /* 1b6c80: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b6c84: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b6c88: ret  */
  return;
}

void fn2_1b7bb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077657008));
  /* 1b7bb0: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 1b7bb4: cbz x0, #0x1b7bcc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b7bcc;
  /* 1b7bb8: ldur x4, [x0, #-8] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 0) + INT64_C(-8))));
  /* 1b7bbc: cbz x4, #0x1b7bcc */
  if ((ARC_X_R(c, 4)) == 0) goto L_1b7bcc;
  /* 1b7bc0: cmp x4, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 4), UINT64_C(0));
  /* 1b7bc4: b.le #0x1b7bd8 */
  if (ARC_COND(c, 13)) goto L_1b7bd8;
  /* 1b7bc8: ret  */
  return;
L_1b7bcc:;
  /* 1b7bcc: adrp x0, #0x39000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(233472)));
  /* 1b7bd0: add x0, x0, #0xb78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2936)));
  /* 1b7bd4: ret  */
  return;
L_1b7bd8:;
  /* 1b7bd8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1b7bdc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b7be0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1b7be4: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1b7be8: adrp x0, #0x20000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1b7bec: add x0, x0, #0xf9e */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3998)));
  /* 1b7bf0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1b7bf4: add x1, x1, #0x446 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1094)));
  /* 1b7bf8: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1b7bfc: adrp x5, #0x25000 */
  ARC_X_W(c, 5, (arc_image_bases[2] + UINT64_C(151552)));
  /* 1b7c00: add x5, x5, #0x33c */
  ARC_X_W(c, 5, (ARC_X_R(c, 5) + UINT64_C(828)));
  /* 1b7c04: adrp x6, #0x20000 */
  ARC_X_W(c, 6, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1b7c08: add x6, x6, #0xcfc */
  ARC_X_W(c, 6, (ARC_X_R(c, 6) + UINT64_C(3324)));
  /* 1b7c0c: adrp x7, #0x1e000 */
  ARC_X_W(c, 7, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1b7c10: add x7, x7, #0xb6f */
  ARC_X_W(c, 7, (ARC_X_R(c, 7) + UINT64_C(2927)));
  /* 1b7c14: mov w2, #0xe1 */
  ARC_W_W(c, 2, UINT64_C(225));
  /* 1b7c18: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 1b7c1c: strb wzr, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 31));
  /* 1b7c20: bl #0x1b5870 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1801252));
  fn2_1b5870(c);
  /* 1b7c24: bl #0x1b5b50 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1801256));
  fn2_1b5b50(c);
  /* 1b7c28: brk #1 */
  arc_trap(c, "brk");
}

void fn2_1b87ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077660140));
  /* 1b87ec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b87f0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b87f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b87f8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b87fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b8800: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8804: ldr x8, [x8, #0x820] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2080))));
  /* 1b8808: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1b880c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b8810: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1804308));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b8814: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8818: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b881c: bl #0x1cf764 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1804320));
  fn2_1cf764(c);
  /* 1b8820: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* 1b8824: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b8828: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1804332));
  fn2_1ccd9c(c);
  /* 1b882c: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* 1b8830: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b8834: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b8838: ret  */
  return;
}

void fn2_1b907c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077662332));
  /* 1b907c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b9080: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b9084: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b9088: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b908c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b9090: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b9094: ldr x8, [x8, #0x818] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2072))));
  /* 1b9098: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1b909c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b90a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1806500));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b90a4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b90a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b90ac: bl #0x1d2c70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1806512));
  fn2_1d2c70(c);
  /* 1b90b0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b90b4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1806520));
  fn2_1ccd9c(c);
  /* 1b90b8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b90bc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b90c0: ret  */
  return;
}

void fn2_1ba014(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077666324));
  /* 1ba014: stp x1, x0, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 1ba018: ret  */
  return;
}

void fn2_1bae28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077669928));
  /* 1bae28: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1bae2c: cbz x8, #0x1bae38 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1bae38;
  /* 1bae30: ldur x0, [x8, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1bae34: ret  */
  return;
L_1bae38:;
  /* 1bae38: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1bae3c: ret  */
  return;
}

void fn2_1bbce4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077673700));
  /* 1bbce4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bbce8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1bbcec: ldr x8, [x8, #0x8b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2232))));
  /* 1bbcf0: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbcf4: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bbf24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077674276));
  /* 1bbf24: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bbf28: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1bbf2c: ldr x8, [x8, #0x938] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2360))));
  /* 1bbf30: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbf34: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc424(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077675556));
  /* 1bc424: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc428: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bc42c: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1bc430: ldr x2, [x8, #0xaf8] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(2808))));
  /* 1bc434: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc818(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077676568));
  /* 1bc818: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1bc81c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bc820: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1bc824: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc828: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bc82c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1bc830: ldr x8, [x8, #0xbb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2992))));
  /* 1bc834: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1820728));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bc838: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1bc83c: fcvt s0, d0 */
  arc_s_w(c, 0, (float)(ARC_D_R(c, 0)));
  /* 1bc840: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bc844: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1bc848: ret  */
  return;
}

void fn2_1bcd00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077677824));
  /* 1bcd00: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bcd04: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1bcd08: b #0x1e32fc */
  fn2_1e32fc(c); return;
}

void fn2_1bd9b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077681080));
  /* 1bd9b8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bd9bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bd9c0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bd9c4: ldr x8, [x8, #0x738] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1848))));
  /* 1bd9c8: sxtw x1, w1 */
  ARC_X_W(c, 1, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 1bd9cc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bd9d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1825236));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bd9d4: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bd9d8: ret  */
  return;
}

void fn2_1bea44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077685316));
  /* 1bea44: fmov s6, #1.00000000 */
  arc_s_w(c, 6, (float)(1.0));
  /* 1bea48: tst w0, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 0) & UINT64_C(1)));
  /* 1bea4c: mov w9, #0x3f800000 */
  ARC_W_W(c, 9, UINT64_C(1065353216));
  /* 1bea50: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1bea54: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 1bea58: stur xzr, [x8, #0xc] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(12)), ARC_X_R(c, 31));
  /* 1bea5c: fcsel s6, s6, s1, ne */
  arc_s_w(c, 6, (float)((ARC_COND(c, 1) ? ARC_S_R(c, 6) : ARC_S_R(c, 1))));
  /* 1bea60: stur xzr, [x8, #4] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(4)), ARC_X_R(c, 31));
  /* 1bea64: str w9, [x8, #0x14] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(20)), ARC_W_R(c, 9));
  /* 1bea68: stp xzr, xzr, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bea6c: fmul s0, s6, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 0))));
  /* 1bea70: fmov s6, #0.50000000 */
  arc_s_w(c, 6, (float)(0.5));
  /* 1bea74: str w9, [x8, #0x28] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(40)), ARC_W_R(c, 9));
  /* 1bea78: stur xzr, [x8, #0x34] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(52)), ARC_X_R(c, 31));
  /* 1bea7c: stur xzr, [x8, #0x2c] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(44)), ARC_X_R(c, 31));
  /* 1bea80: str w9, [x8, #0x3c] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(60)), ARC_W_R(c, 9));
  /* 1bea84: fdiv s1, s0, s1 */
  arc_s_w(c, 1, (float)(arc_fdiv32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1bea88: fmul s7, s0, s6 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 6))));
  /* 1bea8c: fsub s0, s2, s7 */
  arc_s_w(c, 0, (float)(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 7))));
  /* 1bea90: fmul s6, s1, s6 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 6))));
  /* 1bea94: fadd s1, s2, s7 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 2), ARC_S_R(c, 7))));
  /* 1bea98: fsub s2, s3, s6 */
  arc_s_w(c, 2, (float)(arc_fsub32(ARC_S_R(c, 3), ARC_S_R(c, 6))));
  /* 1bea9c: fadd s3, s3, s6 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 6))));
  /* 1beaa0: b #0x1be938 */
  fn2_1be938(c); return;
}

void fn2_1c1264(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077695588));
  /* 1c1264: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c1268: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1c126c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1c1270: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1c1274: cbz x8, #0x1c12b0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1c12b0;
  /* 1c1278: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1c127c: sub x1, x8, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1c1280: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1c1284: bl #0x24b680 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1839752));
  fn2_24b680(c);
  /* 1c1288: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 1c128c: b.ne #0x1c12ac */
  if (ARC_COND(c, 1)) goto L_1c12ac;
  /* 1c1290: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1c1294: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1c1298: sub x0, x8, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) - UINT64_C(16)));
  /* 1c129c: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 1c12a0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c12a4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c12a8: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
L_1c12ac:;
  /* 1c12ac: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
L_1c12b0:;
  /* 1c12b0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1c12b4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c12b8: ret  */
  return;
}

void fn2_1c2fc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077703108));
  /* 1c2fc4: ldp s4, s2, [x0, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(4));
    arc_su_w(c, 4, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* 1c2fc8: ldr s1, [x0, #0xc] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1c2fcc: ldp s3, s0, [x0, #0x14] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(20));
    arc_su_w(c, 3, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* 1c2fd0: str s1, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), (c)->q[1].u32[0]);
  /* 1c2fd4: stp s0, s4, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[4].u32[0]);
  }
  /* 1c2fd8: ldr s0, [x0, #0x1c] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(28))));
  /* 1c2fdc: str s3, [x0, #0x1c] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(28)), (c)->q[3].u32[0]);
  /* 1c2fe0: stp s0, s2, [x0, #0x14] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(20));
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* 1c2fe4: ret  */
  return;
}

void fn2_1c59e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077713892));
  /* 1c59e4: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 1c59e8: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c59ec: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1c59f0: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 1c59f4: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* 1c59f8: ldr s1, [x0, #0xc] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1c59fc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1c5a00: ldr s2, [x0, #0x18] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1c5a04: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1c5a08: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1c5a0c: add x0, sp, #0x34 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(52)));
  /* 1c5a10: stp s0, s1, [sp, #0x34] */
  { const uint64_t _pa = ((c)->sp + INT64_C(52));
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[1].u32[0]);
  }
  /* 1c5a14: str s2, [sp, #0x3c] */
  arc_st32(((c)->sp + INT64_C(60)), (c)->q[2].u32[0]);
  /* 1c5a18: bl #0x1c9630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858076));
  fn2_1c9630(c);
  /* 1c5a1c: adrp x0, #0x24000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(147456)));
  /* 1c5a20: add x0, x0, #0x389 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(905)));
  /* 1c5a24: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1c5a28: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1c5a2c: bl #0x1b8e18 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858096));
  fn2_1b8e18(c);
  /* 1c5a30: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1c5a34: add x1, x1, #0xeb */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(235)));
  /* 1c5a38: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1c5a3c: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1c5a40: bl #0x1b7f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858116));
  fn2_1b7f54(c);
  /* 1c5a44: ldr s0, [x20, #4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 20) + INT64_C(4))));
  /* 1c5a48: ldr s1, [x20, #0x10] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1c5a4c: add x8, sp, #0x2c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(44)));
  /* 1c5a50: ldr s2, [x20, #0x1c] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 20) + INT64_C(28))));
  /* 1c5a54: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1c5a58: stp s0, s1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[1].u32[0]);
  }
  /* 1c5a5c: str s2, [sp, #0x28] */
  arc_st32(((c)->sp + INT64_C(40)), (c)->q[2].u32[0]);
  /* 1c5a60: bl #0x1c9630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858148));
  fn2_1c9630(c);
  /* 1c5a64: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1c5a68: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1c5a6c: add x1, sp, #0x2c */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(44)));
  /* 1c5a70: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858164));
  fn2_1cf868(c);
  /* 1c5a74: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1c5a78: add x1, x1, #0xa7f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2687)));
  /* 1c5a7c: sub x8, x29, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1c5a80: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1c5a84: bl #0x1b7f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858184));
  fn2_1b7f54(c);
  /* 1c5a88: ldr s0, [x20, #8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 1c5a8c: ldr s1, [x20, #0x14] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 20) + INT64_C(20))));
  /* 1c5a90: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 1c5a94: ldr s2, [x20, #0x20] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 20) + INT64_C(32))));
  /* 1c5a98: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* 1c5a9c: stp s0, s1, [sp, #0xc] */
  { const uint64_t _pa = ((c)->sp + INT64_C(12));
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[1].u32[0]);
  }
  /* 1c5aa0: str s2, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), (c)->q[2].u32[0]);
  /* 1c5aa4: bl #0x1c9630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858216));
  fn2_1c9630(c);
  /* 1c5aa8: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1c5aac: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1c5ab0: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1c5ab4: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858232));
  fn2_1cf868(c);
  /* 1c5ab8: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 1c5abc: add x1, x1, #0x570 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1392)));
  /* 1c5ac0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1c5ac4: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 1c5ac8: bl #0x1b7f54 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858252));
  fn2_1b7f54(c);
  /* 1c5acc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1c5ad0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858260));
  fn2_1ccd9c(c);
  /* 1c5ad4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1c5ad8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858268));
  fn2_1ccd9c(c);
  /* 1c5adc: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 1c5ae0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858276));
  fn2_1ccd9c(c);
  /* 1c5ae4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1c5ae8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858284));
  fn2_1ccd9c(c);
  /* 1c5aec: add x0, sp, #0x2c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(44)));
  /* 1c5af0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858292));
  fn2_1ccd9c(c);
  /* 1c5af4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1c5af8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858300));
  fn2_1ccd9c(c);
  /* 1c5afc: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 1c5b00: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858308));
  fn2_1ccd9c(c);
  /* 1c5b04: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1c5b08: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1858316));
  fn2_1ccd9c(c);
  /* 1c5b0c: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c5b10: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c5b14: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 1c5b18: ret  */
  return;
}

void fn2_1c8a3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077726268));
  /* 1c8a3c: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 1c8a40: stp d9, d8, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* 1c8a44: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c8a48: str x19, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 19));
  /* 1c8a4c: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 1c8a50: fmov s1, #0.50000000 */
  arc_s_w(c, 1, (float)(0.5));
  /* 1c8a54: ldp s2, s0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* 1c8a58: ldr s3, [x0, #8] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c8a5c: sub x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(28)));
  /* 1c8a60: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1c8a64: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1c8a68: fmul s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c8a6c: fmul s8, s2, s1 */
  arc_s_w(c, 8, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 1))));
  /* 1c8a70: fmul s9, s3, s1 */
  arc_s_w(c, 9, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 1))));
  /* 1c8a74: bl #0x24b8f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870456));
  fn2_24b8f0(c);
  /* 1c8a78: ldur s0, [x29, #-0x20] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 1c8a7c: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 1c8a80: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1c8a84: str q0, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(48)) + 8, (c)->q[0].u64[1]);
  /* 1c8a88: ldur s0, [x29, #-0x1c] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-28))));
  /* 1c8a8c: str q0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 1c8a90: fmov s0, s8 */
  arc_su_w(c, 0, (uint32_t)(ARC_SU_R(c, 8)));
  /* 1c8a94: bl #0x24b8f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870488));
  fn2_24b8f0(c);
  /* 1c8a98: ldr s0, [x29, #0x18] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1c8a9c: sub x0, x29, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(20)));
  /* 1c8aa0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1c8aa4: str q0, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 1c8aa8: ldr s0, [x29, #0x1c] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(28))));
  /* 1c8aac: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 1c8ab0: fmov s0, s9 */
  arc_su_w(c, 0, (uint32_t)(ARC_SU_R(c, 9)));
  /* 1c8ab4: bl #0x24b8f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1870520));
  fn2_24b8f0(c);
  /* 1c8ab8: ldp q4, q3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1c8abc: ldp q5, q2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1c8ac0: mov v0.16b, v3.16b */
  (c)->q[0] = (c)->q[3];
  /* 1c8ac4: fneg s1, s2 */
  arc_s_w(c, 1, (float)((-(ARC_S_R(c, 2)))));
  /* 1c8ac8: mov v0.s[1], v2.s[0] */
  (c)->q[0].u32[1] = ((c)->q[2].u32[0]);
  /* 1c8acc: fmul s2, s2, s5 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 5))));
  /* 1c8ad0: mov v0.s[2], v5.s[0] */
  (c)->q[0].u32[2] = ((c)->q[5].u32[0]);
  /* 1c8ad4: mov v5.s[1], v4.s[0] */
  (c)->q[5].u32[1] = ((c)->q[4].u32[0]);
  /* 1c8ad8: mov v5.s[2], v1.s[0] */
  (c)->q[5].u32[2] = ((c)->q[1].u32[0]);
  /* 1c8adc: mov v0.s[3], v3.s[0] */
  (c)->q[0].u32[3] = ((c)->q[3].u32[0]);
  /* 1c8ae0: mov v5.s[3], v4.s[0] */
  (c)->q[5].u32[3] = ((c)->q[4].u32[0]);
  /* 1c8ae4: fmul v0.4s, v0.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[5].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[5].f32[1]);
    _t.f32[2] = arc_fmul32((c)->q[0].f32[2], (c)->q[5].f32[2]);
    _t.f32[3] = arc_fmul32((c)->q[0].f32[3], (c)->q[5].f32[3]);
    (c)->q[0] = _t; }
  /* 1c8ae8: mov v1.16b, v0.16b */
  (c)->q[1] = (c)->q[0];
  /* 1c8aec: mov v1.s[2], v2.s[0] */
  (c)->q[1].u32[2] = ((c)->q[2].u32[0]);
  /* 1c8af0: ldur s2, [x29, #-0x14] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
  /* 1c8af4: fmul v1.4s, v1.4s, v2.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[1].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[1].f32[1], (c)->q[2].f32[0]);
    _t.f32[2] = arc_fmul32((c)->q[1].f32[2], (c)->q[2].f32[0]);
    _t.f32[3] = arc_fmul32((c)->q[1].f32[3], (c)->q[2].f32[0]);
    (c)->q[1] = _t; }
  /* 1c8af8: ldur s2, [x29, #-0x18] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 1c8afc: fmul v0.4s, v0.4s, v2.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[2].f32[0]);
    _t.f32[2] = arc_fmul32((c)->q[0].f32[2], (c)->q[2].f32[0]);
    _t.f32[3] = arc_fmul32((c)->q[0].f32[3], (c)->q[2].f32[0]);
    (c)->q[0] = _t; }
  /* 1c8b00: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 1c8b04: fadd v2.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[0].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[0].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[0].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[0].f32[3], (c)->q[1].f32[3]);
    (c)->q[2] = _t; }
  /* 1c8b08: fsub v0.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[0].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[0].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fsub32((c)->q[0].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fsub32((c)->q[0].f32[3], (c)->q[1].f32[3]);
    (c)->q[0] = _t; }
  /* 1c8b0c: mov v2.s[1], v0.s[1] */
  (c)->q[2].u32[1] = ((c)->q[0].u32[1]);
  /* 1c8b10: str q2, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[2].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[2].u64[1]);
  /* 1c8b14: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c8b18: ldr x19, [sp, #0x70] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(112))));
  /* 1c8b1c: ldp d9, d8, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* 1c8b20: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 1c8b24: ret  */
  return;
}

void fn2_1c9af8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077730552));
  /* 1c9af8: ldp d0, d3, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_du_w(c, 0, arc_ld64(_pa));
    arc_du_w(c, 3, arc_ld64((_pa + 8)));
  }
  /* 1c9afc: ldp d1, d2, [x1] */
  { const uint64_t _pa = ARC_X_R(c, 1);
    arc_du_w(c, 1, arc_ld64(_pa));
    arc_du_w(c, 2, arc_ld64((_pa + 8)));
  }
  /* 1c9b00: fsub v0.2s, v1.2s, v0.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[1].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[1].f32[1], (c)->q[0].f32[1]);
    (c)->q[0] = _t; }
  /* 1c9b04: fsub v1.2s, v2.2s, v3.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[2].f32[0], (c)->q[3].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[2].f32[1], (c)->q[3].f32[1]);
    (c)->q[1] = _t; }
  /* 1c9b08: fmul v0.2s, v0.2s, v0.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[0].f32[1]);
    (c)->q[0] = _t; }
  /* 1c9b0c: fmul v1.2s, v1.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[1].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[1].f32[1], (c)->q[1].f32[1]);
    (c)->q[1] = _t; }
  /* 1c9b10: dup v2.2s, v0.s[1] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[1]);
    _t.u32[1] = ((c)->q[0].u32[1]);
    (c)->q[2] = _t; }
  /* 1c9b14: fadd v0.2s, v0.2s, v2.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[0].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[0].f32[1], (c)->q[2].f32[1]);
    (c)->q[0] = _t; }
  /* 1c9b18: fadd v0.2s, v0.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[0].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[0].f32[1], (c)->q[1].f32[1]);
    (c)->q[0] = _t; }
  /* 1c9b1c: dup v1.2s, v1.s[1] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].u32[1]);
    _t.u32[1] = ((c)->q[1].u32[1]);
    (c)->q[1] = _t; }
  /* 1c9b20: fadd v0.2s, v0.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[0].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[0].f32[1], (c)->q[1].f32[1]);
    (c)->q[0] = _t; }
  /* 1c9b24: ret  */
  return;
}

void fn2_1cce18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077743640));
  /* 1cce18: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1cce1c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cce20: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cce24: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cce28: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1cce2c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1cce30: ldr x8, [x8, #0xe78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3704))));
  /* 1cce34: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1cce38: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1cce3c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1887808));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cce40: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1cce44: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cce48: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1cce4c: ret  */
  return;
}

void fn2_1cd860(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077746272));
  /* 1cd860: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1cd864: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cd868: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1cd86c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cd870: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1cd874: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1cd878: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cd87c: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cd880: ldr x22, [x8, #0x138] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(312))));
  /* 1cd884: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cd888: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1cd88c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1cd890: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cd894: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cd898: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1cd89c: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1cd8a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1890468));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cd8a4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1cd8a8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1cd8ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cd8b0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1cd8b4: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1cd8b8: stp x8, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cd8bc: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1890496));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1cd8c0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cd8c4: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1cd8c8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cd8cc: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1cd8d0: ret  */
  return;
}

void fn2_1ce4a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077749412));
  /* 1ce4a4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1ce4a8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ce4ac: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ce4b0: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1ce4b4: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1ce4b8: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ce4bc: ldr x8, [x8, #0x78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(120))));
  /* 1ce4c0: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1ce4c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1893576));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ce4c8: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1ce4cc: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1ce4d0: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1ce4d4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ce4d8: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1ce4dc: ret  */
  return;
}

void fn2_1cee34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077751860));
  /* 1cee34: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1cee38: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cee3c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1cee40: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cee44: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1cee48: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1cee4c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cee50: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cee54: ldr x22, [x8, #0x338] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(824))));
  /* 1cee58: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cee5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1cee60: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1cee64: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cee68: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cee6c: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1cee70: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1cee74: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1896056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cee78: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1cee7c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1cee80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cee84: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1cee88: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1cee8c: stp x8, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cee90: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1896084));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1cee94: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cee98: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1cee9c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ceea0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1ceea4: ret  */
  return;
}

void fn2_1cf8c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077754568));
  /* 1cf8c8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cf8cc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1cf8d0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cf8d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1cf8d8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1cf8dc: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cf8e0: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cf8e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1cf8e8: ldr x0, [x8, #0x448] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1096))));
  /* 1cf8ec: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cf8f0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1cf8f4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cf8f8: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1cf8fc: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1cf900: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cf904: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1898760));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cf908: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cf90c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1cf910: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1cf914: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1cf918: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cf91c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1cf920: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cf924: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d0478(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077757560));
  /* 1d0478: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d047c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d0480: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d0484: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d0488: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d048c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1d0490: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1d0494: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d0498: ldr x0, [x8, #0x570] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1392))));
  /* 1d049c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d04a0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d04a4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d04a8: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1d04ac: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d04b0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1d04b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1901752));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d04b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d04bc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d04c0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d04c4: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d04c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d04cc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d04d0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d04d4: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d3130(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077769008));
  /* 1d3130: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d3134: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d3138: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1d313c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3140: stp x2, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1d3144: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1d3148: ldr x8, [x8, #0x488] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1160))));
  /* 1d314c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1d3150: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1d3154: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1d3158: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 1d315c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1913184));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d3160: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1d3164: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d3168: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d316c: ret  */
  return;
}

void fn2_1d3bc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077771716));
  /* 1d3bc4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1d3bc8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d3bcc: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1d3bd0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d3bd4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d3bd8: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d3bdc: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3be0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d3be4: ldr x21, [x8, #0x588] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(1416))));
  /* 1d3be8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d3bec: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1d3bf0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1915892));
  fn2_1ccc74(c);
  /* 1d3bf4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1d3bf8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1d3bfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d3c00: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d3c04: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d3c08: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1d3c0c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1915920));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1d3c10: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d3c14: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1d3c18: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d3c1c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1d3c20: ret  */
  return;
}

void fn2_1d45cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077774284));
  /* 1d45cc: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d45d0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d45d4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d45d8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d45dc: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d45e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d45e4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d45e8: ldr x0, [x9, #0x688] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1672))));
  /* 1d45ec: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d45f0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d45f4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1918456));
  fn2_1ccc74(c);
  /* 1d45f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d45fc: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d4600: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d4604: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d4608: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d460c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d4610: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d4614: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d4618: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d4ee8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077776616));
  /* 1d4ee8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d4eec: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d4ef0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d4ef4: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d4ef8: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d4efc: ldr x8, [x8, #0x788] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1928))));
  /* 1d4f00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1920772));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d4f04: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d4f08: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d4f0c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d4f10: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d4f14: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d4f18: ret  */
  return;
}

void fn2_1d57c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077778888));
  /* 1d57c8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d57cc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d57d0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d57d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d57d8: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d57dc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d57e0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d57e4: ldr x0, [x9, #0x890] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2192))));
  /* 1d57e8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d57ec: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d57f0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d57f4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1923064));
  fn2_1ccc74(c);
  /* 1d57f8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d57fc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d5800: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d5804: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d5808: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d580c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d5810: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d5814: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d6624(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077782564));
  /* 1d6624: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d6628: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d662c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d6630: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d6634: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1d6638: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d663c: ldr x8, [x8, #0x990] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2448))));
  /* 1d6640: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d6644: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1926728));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d6648: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d664c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d6650: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d6654: ret  */
  return;
}

void fn2_1d7024(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077785124));
  /* 1d7024: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d7028: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1d702c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d7030: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d7034: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 1d7038: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1d703c: ldr x8, [x8, #0xa18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2584))));
  /* 1d7040: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d7044: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1929288));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d7048: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d704c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d7050: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d7054: ret  */
  return;
}

void fn2_1d7fd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077789144));
  /* 1d7fd8: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1d7fdc: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* 1d7fe0: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1d7fe4: strb w9, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 9));
  /* 1d7fe8: ldrb w8, [x1, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(1))));
  /* 1d7fec: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 1d7ff0: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 1d7ff4: strb w9, [x1, #1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(1)), ARC_W_R(c, 9));
  /* 1d7ff8: ldrb w8, [x1, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(2))));
  /* 1d7ffc: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1d8000: strb w8, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* 1d8004: strb w9, [x1, #2] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 9));
  /* 1d8008: ldrb w8, [x1, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(3))));
  /* 1d800c: ldrb w9, [x0, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 1d8010: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* 1d8014: strb w9, [x1, #3] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1d8018: ldrb w8, [x1, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1d801c: ldrb w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1d8020: strb w8, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* 1d8024: strb w9, [x1, #4] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1d8028: ldrb w8, [x1, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(5))));
  /* 1d802c: ldrb w9, [x0, #5] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(5))));
  /* 1d8030: strb w8, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* 1d8034: strb w9, [x1, #5] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(5)), ARC_W_R(c, 9));
  /* 1d8038: ldrb w8, [x1, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(6))));
  /* 1d803c: ldrb w9, [x0, #6] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(6))));
  /* 1d8040: strb w8, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* 1d8044: strb w9, [x1, #6] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 9));
  /* 1d8048: ldrb w8, [x1, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(7))));
  /* 1d804c: ldrb w9, [x0, #7] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(7))));
  /* 1d8050: strb w8, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* 1d8054: strb w9, [x1, #7] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(7)), ARC_W_R(c, 9));
  /* 1d8058: ldrb w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1d805c: ldrb w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1d8060: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1d8064: strb w9, [x1, #8] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1d8068: ldrb w8, [x1, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(9))));
  /* 1d806c: ldrb w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(9))));
  /* 1d8070: strb w8, [x0, #9] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* 1d8074: strb w9, [x1, #9] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(9)), ARC_W_R(c, 9));
  /* 1d8078: ldrb w8, [x1, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(10))));
  /* 1d807c: ldrb w9, [x0, #0xa] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* 1d8080: strb w8, [x0, #0xa] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(10)), ARC_W_R(c, 8));
  /* 1d8084: strb w9, [x1, #0xa] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(10)), ARC_W_R(c, 9));
  /* 1d8088: ldrb w8, [x1, #0xb] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(11))));
  /* 1d808c: ldrb w9, [x0, #0xb] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(11))));
  /* 1d8090: strb w8, [x0, #0xb] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(11)), ARC_W_R(c, 8));
  /* 1d8094: strb w9, [x1, #0xb] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(11)), ARC_W_R(c, 9));
  /* 1d8098: ldrb w8, [x1, #0xc] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1d809c: ldrb w9, [x0, #0xc] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1d80a0: strb w8, [x0, #0xc] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* 1d80a4: strb w9, [x1, #0xc] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(12)), ARC_W_R(c, 9));
  /* 1d80a8: ldrb w8, [x1, #0xd] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(13))));
  /* 1d80ac: ldrb w9, [x0, #0xd] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(13))));
  /* 1d80b0: strb w8, [x0, #0xd] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(13)), ARC_W_R(c, 8));
  /* 1d80b4: strb w9, [x1, #0xd] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(13)), ARC_W_R(c, 9));
  /* 1d80b8: ldrb w8, [x1, #0xe] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(14))));
  /* 1d80bc: ldrb w9, [x0, #0xe] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(14))));
  /* 1d80c0: strb w8, [x0, #0xe] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(14)), ARC_W_R(c, 8));
  /* 1d80c4: strb w9, [x1, #0xe] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(14)), ARC_W_R(c, 9));
  /* 1d80c8: ldrb w8, [x1, #0xf] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(15))));
  /* 1d80cc: ldrb w9, [x0, #0xf] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(15))));
  /* 1d80d0: strb w8, [x0, #0xf] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(15)), ARC_W_R(c, 8));
  /* 1d80d4: strb w9, [x1, #0xf] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(15)), ARC_W_R(c, 9));
  /* 1d80d8: ret  */
  return;
}

void fn2_1d97fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077795324));
  /* 1d97fc: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d9800: ldr x1, [x8, #0xc60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(3168))));
  /* 1d9804: br x1 */
  arc_dispatch(c, ARC_X_R(c, 1)); return;
}

void fn2_1da088(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077797512));
  /* 1da088: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1da08c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1da090: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1da094: ldr x4, [x8, #0xd60] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))));
  /* 1da098: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1da09c: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1db850(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077803600));
  /* 1db850: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1db854: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1db858: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1db85c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1db860: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1db864: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1db868: ldr x8, [x8, #0xe70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3696))));
  /* 1db86c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1db870: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1db874: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1947768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1db878: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1db87c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1db880: ret  */
  return;
}

void fn2_1dc054(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077805652));
  /* 1dc054: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1dc058: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dc05c: str x21, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 21));
  /* 1dc060: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1dc064: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 1dc068: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1dc06c: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dc070: add x8, x8, #0xde0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3552)));
  /* 1dc074: ldr x21, [x8, #0x190] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(400))));
  /* 1dc078: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1dc07c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1dc080: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 1dc084: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1dc088: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1dc08c: stp x3, x2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1dc090: strb w4, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 4));
  /* 1dc094: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1dc098: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1949852));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dc09c: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1dc0a0: add x9, sp, #0x18 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(24)));
  /* 1dc0a4: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 1dc0a8: stp x8, x9, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1dc0ac: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1dc0b0: add x9, sp, #0xc */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(12)));
  /* 1dc0b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1dc0b8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1dc0bc: mov w3, #4 */
  ARC_W_W(c, 3, UINT64_C(4));
  /* 1dc0c0: stp x8, x9, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1dc0c4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1949896));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1dc0c8: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1dc0cc: ldr x21, [sp, #0x50] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1dc0d0: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dc0d4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1dc0d8: ret  */
  return;
}

void fn2_1ddcd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077812948));
  /* 1ddcd4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1ddcd8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ddcdc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ddce0: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ddce4: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1ddce8: ldr x8, [x8, #0x70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(112))));
  /* 1ddcec: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1ddcf0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ddcf4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1957112));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ddcf8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ddcfc: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1ddd00: ret  */
  return;
}

void fn2_1de59c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077815196));
  /* 1de59c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1de5a0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1de5a4: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1de5a8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1de5ac: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1de5b0: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1de5b4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1de5b8: add x8, x8, #0x60 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(96)));
  /* 1de5bc: ldr x21, [x8, #0x108] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(264))));
  /* 1de5c0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1de5c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1de5c8: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1de5cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1de5d0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1de5d4: stp xzr, xzr, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1de5d8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1959388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1de5dc: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1de5e0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1de5e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1de5e8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1de5ec: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1de5f0: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1de5f4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1959416));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1de5f8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1de5fc: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1de600: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1de604: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1de608: ret  */
  return;
}

void fn2_1deed0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077817552));
  /* 1deed0: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1deed4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1deed8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1deedc: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1deee0: stp x2, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1deee4: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1deee8: ldr x8, [x8, #0x268] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(616))));
  /* 1deeec: mov x10, sp */
  ARC_X_W(c, 10, (c)->sp);
  /* 1deef0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1deef4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1deef8: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1deefc: stp x9, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1def00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1961732));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1def04: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1def08: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1def0c: ret  */
  return;
}

void fn2_1dff70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077821808));
  /* 1dff70: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1dff74: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dff78: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1dff7c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1dff80: stp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1dff84: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1dff88: ldr x8, [x8, #0x360] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(864))));
  /* 1dff8c: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 1dff90: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1dff94: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1dff98: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1dff9c: stp x9, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1dffa0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1965988));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dffa4: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1dffa8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dffac: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1dffb0: ret  */
  return;
}

void fn2_1e1014(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077826068));
  /* 1e1014: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e1018: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e101c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1e1020: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e1024: stp x2, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1e1028: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1e102c: ldr x8, [x8, #0x458] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1112))));
  /* 1e1030: mov x10, sp */
  ARC_X_W(c, 10, (c)->sp);
  /* 1e1034: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1e1038: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e103c: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e1040: stp x9, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1e1044: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1970248));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e1048: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e104c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e1050: ret  */
  return;
}

void fn2_1e208c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077830284));
  /* 1e208c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e2090: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e2094: ldr x2, [x8, #0x558] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(1368))));
  /* 1e2098: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1e2884(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077832324));
  /* 1e2884: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e2888: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e288c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e2890: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e2894: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e2898: ldr x8, [x8, #0x670] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1648))));
  /* 1e289c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1976480));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e28a0: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e28a4: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e28a8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e28ac: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e28b0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e28b4: ret  */
  return;
}

void fn2_1e393c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077836604));
  /* 1e393c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1e3940: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e3944: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1e3948: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e394c: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e3950: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1e3954: ldr x8, [x8, #0x748] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1864))));
  /* 1e3958: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 1e395c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1e3960: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1e3964: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e3968: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 1e396c: stp x9, x10, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 1e3970: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1980788));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e3974: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1e3978: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e397c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1e3980: ret  */
  return;
}

void fn2_1e49c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077840832));
  /* 1e49c0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e49c4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e49c8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e49cc: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e49d0: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e49d4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e49d8: ldr x8, [x8, #0x840] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2112))));
  /* 1e49dc: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e49e0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e49e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1985000));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e49e8: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e49ec: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e49f0: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e49f4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e49f8: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e49fc: ret  */
  return;
}

void fn2_1e5a80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077845120));
  /* 1e5a80: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e5a84: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e5a88: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e5a8c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e5a90: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e5a94: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e5a98: ldr x8, [x8, #0x938] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2360))));
  /* 1e5a9c: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e5aa0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e5aa4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1989288));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e5aa8: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e5aac: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e5ab0: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e5ab4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e5ab8: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e5abc: ret  */
  return;
}

void fn2_1e6aa8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077849256));
  /* 1e6aa8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e6aac: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e6ab0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e6ab4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e6ab8: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e6abc: ldr x8, [x8, #0xa38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2616))));
  /* 1e6ac0: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e6ac4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e6ac8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1993420));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e6acc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e6ad0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e6ad4: ret  */
  return;
}

void fn2_1e72c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077851336));
  /* 1e72c8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e72cc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1e72d0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e72d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1e72d8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1e72dc: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e72e0: add x8, x8, #0xa28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2600)));
  /* 1e72e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1e72e8: ldr x0, [x8, #0x128] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(296))));
  /* 1e72ec: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e72f0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1e72f4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e72f8: stp xzr, xzr, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e72fc: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1e7300: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1e7304: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1995528));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e7308: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e730c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1e7310: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1e7314: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1e7318: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e731c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1e7320: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e7324: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1e8370(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077855600));
  /* 1e8370: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e8374: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e8378: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e837c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e8380: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e8384: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e8388: ldr x8, [x8, #0xc28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3112))));
  /* 1e838c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1e8390: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e8394: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1999768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e8398: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1e839c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e83a0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e83a4: ret  */
  return;
}

void fn2_1e9390(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077859728));
  /* 1e9390: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1e9394: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e9398: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 1e939c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e93a0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1e93a4: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1e93a8: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e93ac: add x8, x8, #0xc90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3216)));
  /* 1e93b0: ldr x21, [x8, #0x90] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(144))));
  /* 1e93b4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1e93b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1e93bc: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 1e93c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e93c4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e93c8: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 1e93cc: stp xzr, xzr, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e93d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2003924));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e93d4: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1e93d8: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1e93dc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1e93e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1e93e4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1e93e8: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e93ec: stp x8, x9, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1e93f0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2003956));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1e93f4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e93f8: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1e93fc: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e9400: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1e9404: ret  */
  return;
}

void fn2_1ea7c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077864896));
  /* 1ea7c0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1ea7c4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ea7c8: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1ea7cc: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ea7d0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ea7d4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1ea7d8: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea7dc: add x9, x9, #0xe88 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3720)));
  /* 1ea7e0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1ea7e4: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1ea7e8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1ea7ec: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1ea7f0: tbz w9, #0, #0x1ea858 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1ea858;
L_1ea7f4:;
  /* 1ea7f4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea7f8: ldr x23, [x0, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ea7fc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ea800: ldr x22, [x8, #0xe80] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(3712))));
  /* 1ea804: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009096));
  fn2_1d2c2c(c);
  /* 1ea808: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ea80c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1ea810: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ea814: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 1ea818: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ea81c: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 1ea820: stp x21, x20, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 1ea824: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1ea828: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009132));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ea82c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ea830: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ea834: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009144));
  fn2_1d2c40(c);
  /* 1ea838: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1ea83c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009152));
  fn2_1d2d24(c);
  /* 1ea840: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ea844: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ea848: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1ea84c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ea850: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1ea854: ret  */
  return;
L_1ea858:;
  /* 1ea858: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea85c: add x8, x8, #0xe88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3720)));
  /* 1ea860: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1ea864: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ea868: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009196));
  fn2_24b710(c);
  /* 1ea86c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ea870: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1ea874: cbz w8, #0x1ea7f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ea7f4;
  /* 1ea878: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ea87c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ea880: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1ea884: bl #0x1ebc08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009224));
  fn2_1ebc08(c);
  /* 1ea888: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ea88c: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 1ea890: add x1, x1, #0xe8c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3724)));
  /* 1ea894: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ea898: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ea89c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009248));
  fn2_1b8fd4(c);
  /* 1ea8a0: mov w2, #0x5702 */
  ARC_W_W(c, 2, UINT64_C(22274));
  /* 1ea8a4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ea8a8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ea8ac: movk w2, #0xe0c2, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3770810368)));
  /* 1ea8b0: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009268));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1ea8b4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ea8b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ea8bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009280));
  fn2_1d2d24(c);
  /* 1ea8c0: adrp x0, #0x25f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ea8c4: add x0, x0, #0xe80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3712)));
  /* 1ea8c8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1ea8cc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2009296));
  fn2_24b720(c);
  /* 1ea8d0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1ea8d4: b #0x1ea7f4 */
  goto L_1ea7f4;
}

void fn2_1ecd04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077874436));
  /* 1ecd04: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1ecd08: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ecd0c: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1ecd10: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ecd14: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ecd18: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ecd1c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ecd20: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 1ecd24: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ecd28: tbz w8, #0, #0x1ecd74 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ecd74;
L_1ecd2c:;
  /* 1ecd2c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ecd30: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ecd34: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1ecd38: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1ecd3c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1ecd40: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ecd44: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1ecd48: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1ecd4c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1ecd50: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ecd54: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1ecd58: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018652));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1ecd5c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ecd60: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1ecd64: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ecd68: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ecd6c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1ecd70: ret  */
  return;
L_1ecd74:;
  /* 1ecd74: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ecd78: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 1ecd7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ecd80: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ecd84: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1ecd88: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1ecd8c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018704));
  fn2_24b710(c);
  /* 1ecd90: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ecd94: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ecd98: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ecd9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ecda0: cbz w8, #0x1ecd2c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ecd2c;
  /* 1ecda4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ecda8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ecdac: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1ecdb0: bl #0x1ed700 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018740));
  fn2_1ed700(c);
  /* 1ecdb4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ecdb8: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1ecdbc: add x1, x1, #0x7d2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2002)));
  /* 1ecdc0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ecdc4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ecdc8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018764));
  fn2_1b8fd4(c);
  /* 1ecdcc: mov w2, #0x9a40 */
  ARC_W_W(c, 2, UINT64_C(39488));
  /* 1ecdd0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1ecdd4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ecdd8: movk w2, #0xbde9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3186163712)));
  /* 1ecddc: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018784));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1ecde0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ecde4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ecde8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018796));
  fn2_1d2d24(c);
  /* 1ecdec: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ecdf0: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 1ecdf4: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1ecdf8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2018812));
  fn2_24b720(c);
  /* 1ecdfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ece00: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ece04: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ece08: b #0x1ecd2c */
  goto L_1ecd2c;
}

void fn2_1ee9b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077881776));
  /* 1ee9b0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ee9b4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1ee9b8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ee9bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1ee9c0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ee9c4: add x8, x8, #0x1b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(440)));
  /* 1ee9c8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ee9cc: tbz w8, #0, #0x1eea14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1eea14;
L_1ee9d0:;
  /* 1ee9d0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ee9d4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ee9d8: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ee9dc: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1ee9e0: ldr x8, [x8, #0x1b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(432))));
  /* 1ee9e4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ee9e8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1ee9ec: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1ee9f0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ee9f4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2025976));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1ee9f8: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1ee9fc: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1eea00: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1eea04: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1eea08: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1eea0c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1eea10: ret  */
  return;
L_1eea14:;
  /* 1eea14: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1eea18: add x8, x8, #0x1b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(440)));
  /* 1eea1c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1eea20: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1eea24: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026024));
  fn2_24b710(c);
  /* 1eea28: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1eea2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1eea30: cbz w8, #0x1ee9d0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ee9d0;
  /* 1eea34: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1eea38: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1eea3c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1eea40: bl #0x1f0cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026052));
  fn2_1f0cc4(c);
  /* 1eea44: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1eea48: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 1eea4c: add x1, x1, #0x41f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1055)));
  /* 1eea50: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1eea54: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1eea58: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026076));
  fn2_1b8fd4(c);
  /* 1eea5c: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 1eea60: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1eea64: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1eea68: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 1eea6c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026096));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1eea70: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1eea74: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1eea78: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026108));
  fn2_1d2d24(c);
  /* 1eea7c: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1eea80: add x0, x0, #0x1b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(432)));
  /* 1eea84: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1eea88: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2026124));
  fn2_24b720(c);
  /* 1eea8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1eea90: b #0x1ee9d0 */
  goto L_1ee9d0;
}

void fn2_1f08c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077889736));
  /* 1f08c8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f08cc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1f08d0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f08d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1f08d8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f08dc: add x8, x8, #0x3b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(952)));
  /* 1f08e0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f08e4: tbz w8, #0, #0x1f092c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f092c;
L_1f08e8:;
  /* 1f08e8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f08ec: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f08f0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f08f4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f08f8: ldr x8, [x8, #0x3b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(944))));
  /* 1f08fc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f0900: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1f0904: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f0908: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f090c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2033936));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f0910: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f0914: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1f0918: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1f091c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f0920: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1f0924: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f0928: ret  */
  return;
L_1f092c:;
  /* 1f092c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f0930: add x8, x8, #0x3b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(952)));
  /* 1f0934: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f0938: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f093c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2033984));
  fn2_24b710(c);
  /* 1f0940: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f0944: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f0948: cbz w8, #0x1f08e8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f08e8;
  /* 1f094c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f0950: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f0954: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1f0958: bl #0x1f0cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034012));
  fn2_1f0cc4(c);
  /* 1f095c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f0960: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 1f0964: add x1, x1, #0xf19 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3865)));
  /* 1f0968: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f096c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f0970: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034036));
  fn2_1b8fd4(c);
  /* 1f0974: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 1f0978: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f097c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f0980: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 1f0984: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034056));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1f0988: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f098c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f0990: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034068));
  fn2_1d2d24(c);
  /* 1f0994: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f0998: add x0, x0, #0x3b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(944)));
  /* 1f099c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f09a0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2034084));
  fn2_24b720(c);
  /* 1f09a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f09a8: b #0x1f08e8 */
  goto L_1f08e8;
}

void fn2_1f2d24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077899044));
  /* 1f2d24: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1f2d28: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f2d2c: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 1f2d30: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f2d34: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f2d38: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f2d3c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2d40: add x8, x8, #0x5b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1456)));
  /* 1f2d44: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f2d48: tbz w8, #0, #0x1f2da8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f2da8;
L_1f2d4c:;
  /* 1f2d4c: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f2d50: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f2d54: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2d58: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 1f2d5c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f2d60: ldr x0, [x10, #0x5a8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(1448))));
  /* 1f2d64: stp x9, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1f2d68: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1f2d6c: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f2d70: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 1f2d74: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1f2d78: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1f2d7c: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* 1f2d80: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043268));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f2d84: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1f2d88: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1f2d8c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1f2d90: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f2d94: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1f2d98: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f2d9c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f2da0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1f2da4: ret  */
  return;
L_1f2da8:;
  /* 1f2da8: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2dac: add x8, x8, #0x5b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1456)));
  /* 1f2db0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f2db4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f2db8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f2dbc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1f2dc0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043332));
  fn2_24b710(c);
  /* 1f2dc4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f2dc8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f2dcc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f2dd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f2dd4: cbz w8, #0x1f2d4c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f2d4c;
  /* 1f2dd8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f2ddc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f2de0: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1f2de4: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043368));
  fn2_20293c(c);
  /* 1f2de8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f2dec: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1f2df0: add x1, x1, #0xe26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3622)));
  /* 1f2df4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f2df8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f2dfc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043392));
  fn2_1b8fd4(c);
  /* 1f2e00: mov w2, #0xc232 */
  ARC_W_W(c, 2, UINT64_C(49714));
  /* 1f2e04: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1f2e08: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1f2e0c: movk w2, #0xd14c, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3511418880)));
  /* 1f2e10: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043412));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1f2e14: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1f2e18: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1f2e1c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043424));
  fn2_1d2d24(c);
  /* 1f2e20: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f2e24: add x0, x0, #0x5a8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1448)));
  /* 1f2e28: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1f2e2c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2043440));
  fn2_24b720(c);
  /* 1f2e30: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1f2e34: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f2e38: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f2e3c: b #0x1f2d4c */
  goto L_1f2d4c;
}

void fn2_1f501c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077907996));
  /* 1f501c: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 1f5020: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f5024: stp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1f5028: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1f502c: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f5030: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f5034: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 1f5038: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f503c: add x8, x8, #0x7b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1968)));
  /* 1f5040: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f5044: tbz w8, #0, #0x1f50d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f50d4;
L_1f5048:;
  /* 1f5048: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 1f504c: fcvt d1, s1 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 1)));
  /* 1f5050: sxtw x8, w3 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 1f5054: sxtw x10, w4 */
  ARC_X_W(c, 10, ((int64_t)(int32_t)(ARC_W_R(c, 4))));
  /* 1f5058: and w9, w5, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 5) & UINT64_C(1)));
  /* 1f505c: add x11, sp, #0x18 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(24)));
  /* 1f5060: stp x8, x1, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1f5064: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 1f5068: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f506c: str x10, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 10));
  /* 1f5070: add x10, sp, #0x28 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(40)));
  /* 1f5074: strb w9, [sp, #0x14] */
  arc_st8(((c)->sp + INT64_C(20)), ARC_W_R(c, 9));
  /* 1f5078: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f507c: stp d1, d0, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64((_pa + 8), (c)->q[0].u64[0]);
  }
  /* 1f5080: stp x2, x8, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1f5084: ldr x8, [x9, #0x7a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1960))));
  /* 1f5088: add x9, sp, #0x20 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(32)));
  /* 1f508c: str x10, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 10));
  /* 1f5090: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f5094: add x2, sp, #0x38 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(56)));
  /* 1f5098: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f509c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f50a0: stp x9, x11, [sp, #0x58] */
  { const uint64_t _pa = ((c)->sp + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 1f50a4: add x9, sp, #0x14 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(20)));
  /* 1f50a8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f50ac: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f50b0: str x9, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), ARC_X_R(c, 9));
  /* 1f50b4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052280));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f50b8: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f50bc: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f50c0: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1f50c4: ldp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1f50c8: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f50cc: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 1f50d0: ret  */
  return;
L_1f50d4:;
  /* 1f50d4: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f50d8: add x8, x8, #0x7b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1968)));
  /* 1f50dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f50e0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f50e4: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1f50e8: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1f50ec: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 1f50f0: mov w23, w5 */
  ARC_W_W(c, 23, ARC_W_R(c, 5));
  /* 1f50f4: stp s0, s1, [sp, #0xc] */
  { const uint64_t _pa = ((c)->sp + INT64_C(12));
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[1].u32[0]);
  }
  /* 1f50f8: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 1f50fc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052352));
  fn2_24b710(c);
  /* 1f5100: ldp s0, s1, [sp, #0xc] */
  { const uint64_t _pa = ((c)->sp + INT64_C(12));
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 1f5104: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1f5108: mov w5, w23 */
  ARC_W_W(c, 5, ARC_W_R(c, 23));
  /* 1f510c: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 1f5110: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1f5114: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1f5118: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f511c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f5120: cbz w8, #0x1f5048 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f5048;
  /* 1f5124: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f5128: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f512c: ldr x26, [x8] */
  ARC_X_W(c, 26, arc_ld64(ARC_X_R(c, 8)));
  /* 1f5130: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052404));
  fn2_20293c(c);
  /* 1f5134: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 1f5138: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1f513c: add x1, x1, #0x80d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2061)));
  /* 1f5140: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1f5144: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f5148: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052428));
  fn2_1b8fd4(c);
  /* 1f514c: mov w2, #0xd5a2 */
  ARC_W_W(c, 2, UINT64_C(54690));
  /* 1f5150: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 1f5154: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1f5158: movk w2, #0x35e1, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(903938048)));
  /* 1f515c: blr x26 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052448));
  arc_dispatch(c, ARC_X_R(c, 26));
  /* 1f5160: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 1f5164: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1f5168: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052460));
  fn2_1d2d24(c);
  /* 1f516c: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f5170: add x0, x0, #0x7a8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1960)));
  /* 1f5174: str x25, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 25));
  }
  /* 1f5178: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2052476));
  fn2_24b720(c);
  /* 1f517c: ldp s0, s1, [sp, #0xc] */
  { const uint64_t _pa = ((c)->sp + INT64_C(12));
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 1f5180: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 1f5184: mov w5, w23 */
  ARC_W_W(c, 5, ARC_W_R(c, 23));
  /* 1f5188: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 1f518c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1f5190: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1f5194: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f5198: b #0x1f5048 */
  goto L_1f5048;
}

void fn2_1f6e48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077915720));
  /* 1f6e48: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1f6e4c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f6e50: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f6e54: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f6e58: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f6e5c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6e60: add x8, x8, #0x9b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2480)));
  /* 1f6e64: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f6e68: tbz w8, #0, #0x1f6ebc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f6ebc;
L_1f6e6c:;
  /* 1f6e6c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f6e70: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6e74: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 1f6e78: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f6e7c: ldr x8, [x8, #0x9a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2472))));
  /* 1f6e80: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f6e84: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1f6e88: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f6e8c: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f6e90: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f6e94: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f6e98: stp x11, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f6e9c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2059936));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f6ea0: ldur d0, [x29, #-8] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1f6ea4: fcvt s0, d0 */
  arc_s_w(c, 0, (float)(ARC_D_R(c, 0)));
  /* 1f6ea8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f6eac: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f6eb0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f6eb4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1f6eb8: ret  */
  return;
L_1f6ebc:;
  /* 1f6ebc: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6ec0: add x8, x8, #0x9b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2480)));
  /* 1f6ec4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f6ec8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f6ecc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f6ed0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2059988));
  fn2_24b710(c);
  /* 1f6ed4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f6ed8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f6edc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f6ee0: cbz w8, #0x1f6e6c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f6e6c;
  /* 1f6ee4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f6ee8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f6eec: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1f6ef0: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060020));
  fn2_20293c(c);
  /* 1f6ef4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f6ef8: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1f6efc: add x1, x1, #0xb83 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2947)));
  /* 1f6f00: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f6f04: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f6f08: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060044));
  fn2_1b8fd4(c);
  /* 1f6f0c: mov w2, #0xd91d */
  ARC_W_W(c, 2, UINT64_C(55581));
  /* 1f6f10: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f6f14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f6f18: movk w2, #0x362f, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(909049856)));
  /* 1f6f1c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060064));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1f6f20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f6f24: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f6f28: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060076));
  fn2_1d2d24(c);
  /* 1f6f2c: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f6f30: add x0, x0, #0x9a8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2472)));
  /* 1f6f34: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1f6f38: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2060092));
  fn2_24b720(c);
  /* 1f6f3c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f6f40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f6f44: b #0x1f6e6c */
  goto L_1f6e6c;
}

void fn2_1f8edc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077924060));
  /* 1f8edc: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1f8ee0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f8ee4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f8ee8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f8eec: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f8ef0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8ef4: add x8, x8, #0xbb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2992)));
  /* 1f8ef8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f8efc: tbz w8, #0, #0x1f8f4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f8f4c;
L_1f8f00:;
  /* 1f8f00: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f8f04: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8f08: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 1f8f0c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f8f10: ldr x8, [x8, #0xba8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2984))));
  /* 1f8f14: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f8f18: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1f8f1c: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f8f20: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f8f24: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f8f28: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f8f2c: stp x11, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f8f30: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068276));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f8f34: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1f8f38: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f8f3c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f8f40: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f8f44: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1f8f48: ret  */
  return;
L_1f8f4c:;
  /* 1f8f4c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8f50: add x8, x8, #0xbb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2992)));
  /* 1f8f54: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f8f58: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f8f5c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f8f60: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068324));
  fn2_24b710(c);
  /* 1f8f64: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f8f68: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f8f6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f8f70: cbz w8, #0x1f8f00 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f8f00;
  /* 1f8f74: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f8f78: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f8f7c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1f8f80: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068356));
  fn2_20293c(c);
  /* 1f8f84: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f8f88: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 1f8f8c: add x1, x1, #0x988 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2440)));
  /* 1f8f90: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f8f94: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f8f98: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068380));
  fn2_1b8fd4(c);
  /* 1f8f9c: mov w2, #0xe3b7 */
  ARC_W_W(c, 2, UINT64_C(58295));
  /* 1f8fa0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f8fa4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f8fa8: movk w2, #0x5ede, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1591607296)));
  /* 1f8fac: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068400));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1f8fb0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f8fb4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f8fb8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068412));
  fn2_1d2d24(c);
  /* 1f8fbc: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f8fc0: add x0, x0, #0xba8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2984)));
  /* 1f8fc4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1f8fc8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2068428));
  fn2_24b720(c);
  /* 1f8fcc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f8fd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f8fd4: b #0x1f8f00 */
  goto L_1f8f00;
}

void fn2_1faf54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077932372));
  /* 1faf54: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 1faf58: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1faf5c: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* 1faf60: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1faf64: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1faf68: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1faf6c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1faf70: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1faf74: add x9, x9, #0xdb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3504)));
  /* 1faf78: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1faf7c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1faf80: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1faf84: tbz w9, #0, #0x1fb000 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1fb000;
L_1faf88:;
  /* 1faf88: sxtw x9, w3 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 1faf8c: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1faf90: mov w8, w2 */
  ARC_W_W(c, 8, ARC_W_R(c, 2));
  /* 1faf94: ldr x21, [x10, #0xda8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 10) + INT64_C(3496))));
  /* 1faf98: ldr x22, [x0, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1faf9c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fafa0: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1fafa4: bl #0x1d6d14 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076584));
  fn2_1d6d14(c);
  /* 1fafa8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fafac: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1fafb0: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 1fafb4: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 1fafb8: stp x20, x9, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1fafbc: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1fafc0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fafc4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1fafc8: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 1fafcc: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1fafd0: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 1fafd4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076632));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1fafd8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fafdc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fafe0: bl #0x1d6d28 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076644));
  fn2_1d6d28(c);
  /* 1fafe4: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fafe8: ldr x25, [sp, #0x40] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1fafec: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1faff0: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1faff4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1faff8: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 1faffc: ret  */
  return;
L_1fb000:;
  /* 1fb000: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb004: add x8, x8, #0xdb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3504)));
  /* 1fb008: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fb00c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fb010: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 1fb014: mov w23, w2 */
  ARC_W_W(c, 23, ARC_W_R(c, 2));
  /* 1fb018: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076700));
  fn2_24b710(c);
  /* 1fb01c: mov w2, w23 */
  ARC_W_W(c, 2, ARC_W_R(c, 23));
  /* 1fb020: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 1fb024: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fb028: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1fb02c: cbz w8, #0x1faf88 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1faf88;
  /* 1fb030: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fb034: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fb038: ldr x25, [x8] */
  ARC_X_W(c, 25, arc_ld64(ARC_X_R(c, 8)));
  /* 1fb03c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076736));
  fn2_20293c(c);
  /* 1fb040: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1fb044: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 1fb048: add x1, x1, #0xef8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3832)));
  /* 1fb04c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1fb050: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fb054: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076760));
  fn2_1b8fd4(c);
  /* 1fb058: mov w2, #0xdb9a */
  ARC_W_W(c, 2, UINT64_C(56218));
  /* 1fb05c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1fb060: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1fb064: movk w2, #0x7439, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1949892608)));
  /* 1fb068: blr x25 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076780));
  arc_dispatch(c, ARC_X_R(c, 25));
  /* 1fb06c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 1fb070: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1fb074: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076792));
  fn2_1d2d24(c);
  /* 1fb078: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb07c: add x0, x0, #0xda8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3496)));
  /* 1fb080: str x24, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* 1fb084: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2076808));
  fn2_24b720(c);
  /* 1fb088: mov w2, w23 */
  ARC_W_W(c, 2, ARC_W_R(c, 23));
  /* 1fb08c: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 1fb090: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1fb094: b #0x1faf88 */
  goto L_1faf88;
}

void fn2_1fd104(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077940996));
  /* 1fd104: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1fd108: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fd10c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1fd110: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fd114: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fd118: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1fd11c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fd120: add x8, x8, #0xfb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4016)));
  /* 1fd124: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fd128: tbz w8, #0, #0x1fd17c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fd17c;
L_1fd12c:;
  /* 1fd12c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fd130: mov w8, w2 */
  ARC_W_W(c, 8, ARC_W_R(c, 2));
  /* 1fd134: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fd138: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1fd13c: stp x8, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1fd140: ldr x8, [x9, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(4008))));
  /* 1fd144: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1fd148: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fd14c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1fd150: stp x9, x3, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 3));
  }
  /* 1fd154: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 1fd158: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fd15c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fd160: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085220));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1fd164: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fd168: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fd16c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1fd170: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fd174: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1fd178: ret  */
  return;
L_1fd17c:;
  /* 1fd17c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fd180: add x8, x8, #0xfb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4016)));
  /* 1fd184: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fd188: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fd18c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1fd190: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1fd194: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* 1fd198: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085276));
  fn2_24b710(c);
  /* 1fd19c: mov w2, w22 */
  ARC_W_W(c, 2, ARC_W_R(c, 22));
  /* 1fd1a0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fd1a4: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1fd1a8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fd1ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fd1b0: cbz w8, #0x1fd12c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fd12c;
  /* 1fd1b4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fd1b8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fd1bc: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1fd1c0: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085316));
  fn2_20293c(c);
  /* 1fd1c4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1fd1c8: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 1fd1cc: add x1, x1, #0x5e7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1511)));
  /* 1fd1d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1fd1d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fd1d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085340));
  fn2_1b8fd4(c);
  /* 1fd1dc: mov w2, #0x9b1b */
  ARC_W_W(c, 2, UINT64_C(39707));
  /* 1fd1e0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1fd1e4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1fd1e8: movk w2, #0xacc6, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2898657280)));
  /* 1fd1ec: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085360));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1fd1f0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1fd1f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1fd1f8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085372));
  fn2_1d2d24(c);
  /* 1fd1fc: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fd200: add x0, x0, #0xfa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4008)));
  /* 1fd204: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1fd208: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2085388));
  fn2_24b720(c);
  /* 1fd20c: mov w2, w22 */
  ARC_W_W(c, 2, ARC_W_R(c, 22));
  /* 1fd210: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fd214: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1fd218: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1fd21c: b #0x1fd12c */
  goto L_1fd12c;
}

void fn2_1ff3c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077949896));
  /* 1ff3c8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1ff3cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ff3d0: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1ff3d4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ff3d8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ff3dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ff3e0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ff3e4: add x8, x8, #0x1b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(432)));
  /* 1ff3e8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ff3ec: tbz w8, #0, #0x1ff438 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ff438;
L_1ff3f0:;
  /* 1ff3f0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ff3f4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ff3f8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1ff3fc: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1ff400: ldr x8, [x8, #0x1a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(424))));
  /* 1ff404: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ff408: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1ff40c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1ff410: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1ff414: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ff418: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1ff41c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094112));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1ff420: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ff424: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1ff428: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ff42c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ff430: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1ff434: ret  */
  return;
L_1ff438:;
  /* 1ff438: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ff43c: add x8, x8, #0x1b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(432)));
  /* 1ff440: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ff444: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ff448: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1ff44c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1ff450: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094164));
  fn2_24b710(c);
  /* 1ff454: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ff458: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ff45c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ff460: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ff464: cbz w8, #0x1ff3f0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ff3f0;
  /* 1ff468: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ff46c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ff470: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1ff474: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094200));
  fn2_20293c(c);
  /* 1ff478: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ff47c: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 1ff480: add x1, x1, #0x8b4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2228)));
  /* 1ff484: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ff488: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ff48c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094224));
  fn2_1b8fd4(c);
  /* 1ff490: mov w2, #0x9a24 */
  ARC_W_W(c, 2, UINT64_C(39460));
  /* 1ff494: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1ff498: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ff49c: movk w2, #0xa27d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2726100992)));
  /* 1ff4a0: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094244));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1ff4a4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ff4a8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ff4ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094256));
  fn2_1d2d24(c);
  /* 1ff4b0: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ff4b4: add x0, x0, #0x1a8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(424)));
  /* 1ff4b8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1ff4bc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2094272));
  fn2_24b720(c);
  /* 1ff4c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ff4c4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ff4c8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ff4cc: b #0x1ff3f0 */
  goto L_1ff3f0;
}

void fn2_2014a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077958308));
  /* 2014a4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2014a8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2014ac: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2014b0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2014b4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2014b8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2014bc: add x8, x8, #0x3b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(944)));
  /* 2014c0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2014c4: tbz w8, #0, #0x201518 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_201518;
L_2014c8:;
  /* 2014c8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2014cc: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2014d0: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 2014d4: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 2014d8: ldr x8, [x8, #0x3a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(936))));
  /* 2014dc: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2014e0: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 2014e4: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 2014e8: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 2014ec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2014f0: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 2014f4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102520));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 2014f8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 2014fc: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 201500: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 201504: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 201508: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20150c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 201510: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 201514: ret  */
  return;
L_201518:;
  /* 201518: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20151c: add x8, x8, #0x3b0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(944)));
  /* 201520: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 201524: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 201528: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 20152c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102576));
  fn2_24b710(c);
  /* 201530: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 201534: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 201538: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20153c: cbz w8, #0x2014c8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2014c8;
  /* 201540: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 201544: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 201548: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20154c: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102608));
  fn2_20293c(c);
  /* 201550: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 201554: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 201558: add x1, x1, #0x951 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2385)));
  /* 20155c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 201560: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 201564: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102632));
  fn2_1b8fd4(c);
  /* 201568: mov w2, #0xe44e */
  ARC_W_W(c, 2, UINT64_C(58446));
  /* 20156c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 201570: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 201574: movk w2, #0x909, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(151584768)));
  /* 201578: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102652));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20157c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 201580: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 201584: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102664));
  fn2_1d2d24(c);
  /* 201588: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20158c: add x0, x0, #0x3a8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(936)));
  /* 201590: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 201594: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2102680));
  fn2_24b720(c);
  /* 201598: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20159c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2015a0: b #0x2014c8 */
  goto L_2014c8;
}

void fn2_202d98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077964696));
  /* 202d98: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 202d9c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 202da0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 202da4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 202da8: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 202dac: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 202db0: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 202db4: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 202db8: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108860));
  fn2_1b5d1c(c);
  /* 202dbc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 202dc0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 202dc4: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2108872));
  fn2_1afdf8(c);
  /* 202dc8: adrp x8, #0x256000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2449408)));
  /* 202dcc: add x8, x8, #0x9e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2528)));
  /* 202dd0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 202dd4: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 202dd8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 202ddc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 202de0: ret  */
  return;
}

void fn2_2049c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077971908));
  /* 2049c4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2049c8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2049cc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2049d0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2049d4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2049d8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2049dc: add x8, x8, #0x680 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1664)));
  /* 2049e0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2049e4: tbz w8, #0, #0x204a2c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_204a2c;
L_2049e8:;
  /* 2049e8: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2049ec: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2049f0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 2049f4: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 2049f8: ldr x8, [x8, #0x678] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1656))));
  /* 2049fc: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 204a00: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 204a04: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 204a08: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 204a0c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 204a10: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 204a14: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116120));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 204a18: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 204a1c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 204a20: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 204a24: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 204a28: ret  */
  return;
L_204a2c:;
  /* 204a2c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 204a30: add x8, x8, #0x680 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1664)));
  /* 204a34: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 204a38: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 204a3c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 204a40: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116164));
  fn2_24b710(c);
  /* 204a44: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 204a48: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 204a4c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 204a50: cbz w8, #0x2049e8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2049e8;
  /* 204a54: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 204a58: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 204a5c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 204a60: bl #0x204cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116196));
  fn2_204cc4(c);
  /* 204a64: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 204a68: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 204a6c: add x1, x1, #0x966 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2406)));
  /* 204a70: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 204a74: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 204a78: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116220));
  fn2_1b8fd4(c);
  /* 204a7c: mov w2, #0x3184 */
  ARC_W_W(c, 2, UINT64_C(12676));
  /* 204a80: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 204a84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 204a88: movk w2, #0x4fd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(83689472)));
  /* 204a8c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116240));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 204a90: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 204a94: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 204a98: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116252));
  fn2_1d2d24(c);
  /* 204a9c: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 204aa0: add x0, x0, #0x678 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1656)));
  /* 204aa4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 204aa8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2116268));
  fn2_24b720(c);
  /* 204aac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 204ab0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 204ab4: b #0x2049e8 */
  goto L_2049e8;
}

void fn2_20670c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077979404));
  /* 20670c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 206710: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 206714: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 206718: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 20671c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206720: add x8, x8, #0x858 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2136)));
  /* 206724: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 206728: tbz w8, #0, #0x206768 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_206768;
L_20672c:;
  /* 20672c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 206730: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206734: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 206738: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 20673c: ldr x8, [x8, #0x850] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2128))));
  /* 206740: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 206744: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 206748: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 20674c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 206750: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123604));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 206754: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 206758: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20675c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 206760: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 206764: ret  */
  return;
L_206768:;
  /* 206768: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20676c: add x8, x8, #0x858 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2136)));
  /* 206770: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 206774: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 206778: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123644));
  fn2_24b710(c);
  /* 20677c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 206780: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 206784: cbz w8, #0x20672c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20672c;
  /* 206788: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20678c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 206790: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 206794: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123672));
  fn2_2086f8(c);
  /* 206798: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20679c: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 2067a0: add x1, x1, #0xc68 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3176)));
  /* 2067a4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2067a8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2067ac: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123696));
  fn2_1b8fd4(c);
  /* 2067b0: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 2067b4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2067b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2067bc: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 2067c0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123716));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2067c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2067c8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2067cc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123728));
  fn2_1d2d24(c);
  /* 2067d0: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2067d4: add x0, x0, #0x850 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2128)));
  /* 2067d8: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2067dc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2123744));
  fn2_24b720(c);
  /* 2067e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2067e4: b #0x20672c */
  goto L_20672c;
}

void fn2_20857c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077987196));
  /* 20857c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 208580: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 208584: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 208588: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 20858c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 208590: add x8, x8, #0xa58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2648)));
  /* 208594: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 208598: tbz w8, #0, #0x2085e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2085e0;
L_20859c:;
  /* 20859c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2085a0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2085a4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2085a8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2085ac: ldr x8, [x8, #0xa50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))));
  /* 2085b0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2085b4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2085b8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2085bc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2085c0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2131396));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2085c4: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2085c8: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 2085cc: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 2085d0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2085d4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2085d8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2085dc: ret  */
  return;
L_2085e0:;
  /* 2085e0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2085e4: add x8, x8, #0xa58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2648)));
  /* 2085e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2085ec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2085f0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2131444));
  fn2_24b710(c);
  /* 2085f4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2085f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2085fc: cbz w8, #0x20859c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20859c;
  /* 208600: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 208604: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 208608: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20860c: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2131472));
  fn2_2086f8(c);
  /* 208610: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 208614: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 208618: add x1, x1, #0x999 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2457)));
  /* 20861c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 208620: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 208624: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2131496));
  fn2_1b8fd4(c);
  /* 208628: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 20862c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 208630: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 208634: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 208638: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2131516));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20863c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 208640: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 208644: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2131528));
  fn2_1d2d24(c);
  /* 208648: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20864c: add x0, x0, #0xa50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2640)));
  /* 208650: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 208654: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2131544));
  fn2_24b720(c);
  /* 208658: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20865c: b #0x20859c */
  goto L_20859c;
}

void fn2_209d38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077993272));
  /* 209d38: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 209d3c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 209d40: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 209d44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 209d48: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209d4c: add x8, x8, #0xb98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2968)));
  /* 209d50: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 209d54: tbz w8, #0, #0x209d9c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_209d9c;
L_209d58:;
  /* 209d58: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 209d5c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209d60: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 209d64: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 209d68: ldr x8, [x8, #0xb90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2960))));
  /* 209d6c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 209d70: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 209d74: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 209d78: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 209d7c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137472));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 209d80: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 209d84: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 209d88: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 209d8c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 209d90: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 209d94: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 209d98: ret  */
  return;
L_209d9c:;
  /* 209d9c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209da0: add x8, x8, #0xb98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2968)));
  /* 209da4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 209da8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 209dac: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137520));
  fn2_24b710(c);
  /* 209db0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 209db4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 209db8: cbz w8, #0x209d58 */
  if ((ARC_W_R(c, 8)) == 0) goto L_209d58;
  /* 209dbc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 209dc0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 209dc4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 209dc8: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137548));
  fn2_20c8c4(c);
  /* 209dcc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 209dd0: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 209dd4: add x1, x1, #0x26a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(618)));
  /* 209dd8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 209ddc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 209de0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137572));
  fn2_1b8fd4(c);
  /* 209de4: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 209de8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 209dec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 209df0: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 209df4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137592));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 209df8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 209dfc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 209e00: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137604));
  fn2_1d2d24(c);
  /* 209e04: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 209e08: add x0, x0, #0xb90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2960)));
  /* 209e0c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 209e10: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2137620));
  fn2_24b720(c);
  /* 209e14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 209e18: b #0x209d58 */
  goto L_209d58;
}

void fn2_20bc88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078001288));
  /* 20bc88: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20bc8c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20bc90: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20bc94: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20bc98: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20bc9c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20bca0: add x8, x8, #0xd98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3480)));
  /* 20bca4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20bca8: tbz w8, #0, #0x20bcfc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20bcfc;
L_20bcac:;
  /* 20bcac: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20bcb0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20bcb4: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 20bcb8: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 20bcbc: ldr x8, [x8, #0xd90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3472))));
  /* 20bcc0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20bcc4: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 20bcc8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 20bccc: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 20bcd0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20bcd4: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 20bcd8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145500));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 20bcdc: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 20bce0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 20bce4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 20bce8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20bcec: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20bcf0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20bcf4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20bcf8: ret  */
  return;
L_20bcfc:;
  /* 20bcfc: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20bd00: add x8, x8, #0xd98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3480)));
  /* 20bd04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20bd08: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20bd0c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 20bd10: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145556));
  fn2_24b710(c);
  /* 20bd14: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20bd18: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20bd1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20bd20: cbz w8, #0x20bcac */
  if ((ARC_W_R(c, 8)) == 0) goto L_20bcac;
  /* 20bd24: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20bd28: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20bd2c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20bd30: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145588));
  fn2_20c8c4(c);
  /* 20bd34: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20bd38: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 20bd3c: add x1, x1, #0x4a8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1192)));
  /* 20bd40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20bd44: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20bd48: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145612));
  fn2_1b8fd4(c);
  /* 20bd4c: mov w2, #0x4628 */
  ARC_W_W(c, 2, UINT64_C(17960));
  /* 20bd50: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 20bd54: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20bd58: movk w2, #0x8a85, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2323972096)));
  /* 20bd5c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145632));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20bd60: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20bd64: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 20bd68: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145644));
  fn2_1d2d24(c);
  /* 20bd6c: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20bd70: add x0, x0, #0xd90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3472)));
  /* 20bd74: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 20bd78: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2145660));
  fn2_24b720(c);
  /* 20bd7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20bd80: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20bd84: b #0x20bcac */
  goto L_20bcac;
}

void fn2_20da8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078008972));
  /* 20da8c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20da90: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 20da94: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20da98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 20da9c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20daa0: add x8, x8, #0xf88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3976)));
  /* 20daa4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20daa8: tbz w8, #0, #0x20dae8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20dae8;
L_20daac:;
  /* 20daac: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20dab0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20dab4: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20dab8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 20dabc: ldr x8, [x8, #0xf80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3968))));
  /* 20dac0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20dac4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 20dac8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 20dacc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20dad0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153172));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20dad4: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 20dad8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20dadc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 20dae0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20dae4: ret  */
  return;
L_20dae8:;
  /* 20dae8: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20daec: add x8, x8, #0xf88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3976)));
  /* 20daf0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20daf4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20daf8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153212));
  fn2_24b710(c);
  /* 20dafc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20db00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20db04: cbz w8, #0x20daac */
  if ((ARC_W_R(c, 8)) == 0) goto L_20daac;
  /* 20db08: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20db0c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20db10: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20db14: bl #0x20df5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153240));
  fn2_20df5c(c);
  /* 20db18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20db1c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 20db20: add x1, x1, #0xc8f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3215)));
  /* 20db24: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20db28: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20db2c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153264));
  fn2_1b8fd4(c);
  /* 20db30: mov w2, #0xaf32 */
  ARC_W_W(c, 2, UINT64_C(44850));
  /* 20db34: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20db38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20db3c: movk w2, #0xb69, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(191430656)));
  /* 20db40: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153284));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20db44: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20db48: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20db4c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153296));
  fn2_1d2d24(c);
  /* 20db50: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20db54: add x0, x0, #0xf80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3968)));
  /* 20db58: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20db5c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2153312));
  fn2_24b720(c);
  /* 20db60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20db64: b #0x20daac */
  goto L_20daac;
}

void fn2_20f90c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078016780));
  /* 20f90c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 20f910: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20f914: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* 20f918: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20f91c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20f920: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 20f924: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f928: add x9, x9, #0x130 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(304)));
  /* 20f92c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20f930: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 20f934: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 20f938: tbz w9, #0, #0x20f9a8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_20f9a8;
L_20f93c:;
  /* 20f93c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f940: and w9, w1, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 20f944: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 20f948: ldr x21, [x8, #0x128] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(296))));
  /* 20f94c: strb w9, [x29, #0x1c] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(28)), ARC_W_R(c, 9));
  /* 20f950: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2160980));
  fn2_1bc084(c);
  /* 20f954: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20f958: add x9, x29, #0x1c */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* 20f95c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 20f960: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 20f964: add x3, sp, #0x18 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(24)));
  /* 20f968: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20f96c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 20f970: stp x20, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 20f974: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 20f978: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161020));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 20f97c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 20f980: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20f984: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161032));
  fn2_1bc0b8(c);
  /* 20f988: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 20f98c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161040));
  fn2_1bc620(c);
  /* 20f990: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20f994: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* 20f998: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20f99c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20f9a0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 20f9a4: ret  */
  return;
L_20f9a8:;
  /* 20f9a8: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20f9ac: add x0, x0, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(304)));
  /* 20f9b0: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 20f9b4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161080));
  fn2_24b710(c);
  /* 20f9b8: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 20f9bc: cbz w0, #0x20f93c */
  if ((ARC_W_R(c, 0)) == 0) goto L_20f93c;
  /* 20f9c0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20f9c4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20f9c8: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 20f9cc: bl #0x20fb34 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161104));
  fn2_20fb34(c);
  /* 20f9d0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 20f9d4: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 20f9d8: add x1, x1, #0xcb4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3252)));
  /* 20f9dc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 20f9e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20f9e4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161128));
  fn2_1b8fd4(c);
  /* 20f9e8: mov w2, #0x1bbc */
  ARC_W_W(c, 2, UINT64_C(7100));
  /* 20f9ec: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 20f9f0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 20f9f4: movk w2, #0xb0a3, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2963472384)));
  /* 20f9f8: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161148));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 20f9fc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 20fa00: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 20fa04: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161160));
  fn2_1d2d24(c);
  /* 20fa08: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20fa0c: add x0, x0, #0x128 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(296)));
  /* 20fa10: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 20fa14: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161176));
  fn2_24b720(c);
  /* 20fa18: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* 20fa1c: b #0x20f93c */
  goto L_20f93c;
}

void fn2_211364(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078023524));
  /* 211364: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 211368: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 21136c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 211370: nop  */
  /* nop: no architectural effect here */
  /* 211374: adr x8, #0x25d1d8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478552)));
  /* 211378: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21137c: tbz w8, #0, #0x211394 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_211394;
L_211380:;
  /* 211380: nop  */
  /* nop: no architectural effect here */
  /* 211384: adr x0, #0x25d1d0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478544)));
  /* 211388: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21138c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 211390: ret  */
  return;
L_211394:;
  /* 211394: nop  */
  /* nop: no architectural effect here */
  /* 211398: adr x0, #0x25d1d8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478552)));
  /* 21139c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2167712));
  fn2_24b710(c);
  /* 2113a0: cbz w0, #0x211380 */
  if ((ARC_W_R(c, 0)) == 0) goto L_211380;
  /* 2113a4: nop  */
  /* nop: no architectural effect here */
  /* 2113a8: adr x19, #0x25d1d0 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2478544)));
  /* 2113ac: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 2113b0: add x1, x1, #0x3f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(63)));
  /* 2113b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2113b8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2113bc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2167744));
  fn2_1b8fd4(c);
  /* 2113c0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 2113c4: nop  */
  /* nop: no architectural effect here */
  /* 2113c8: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 2113cc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 2113d0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 2113d4: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2167768));
  fn2_24b6f0(c);
  /* 2113d8: nop  */
  /* nop: no architectural effect here */
  /* 2113dc: adr x0, #0x25d1d8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478552)));
  /* 2113e0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2167780));
  fn2_24b720(c);
  /* 2113e4: nop  */
  /* nop: no architectural effect here */
  /* 2113e8: adr x0, #0x25d1d0 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478544)));
  /* 2113ec: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2113f0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2113f4: ret  */
  return;
}

void fn2_21243c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078027836));
  /* 21243c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 212440: ret  */
  return;
}

void fn2_213a84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078033540));
  /* 213a84: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 213a88: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 213a8c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 213a90: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 213a94: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213a98: add x8, x8, #0x538 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1336)));
  /* 213a9c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 213aa0: tbz w8, #0, #0x213ae8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_213ae8;
L_213aa4:;
  /* 213aa4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 213aa8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213aac: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 213ab0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 213ab4: ldr x8, [x8, #0x530] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1328))));
  /* 213ab8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 213abc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 213ac0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 213ac4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 213ac8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2177740));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 213acc: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 213ad0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 213ad4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 213ad8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 213adc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 213ae0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 213ae4: ret  */
  return;
L_213ae8:;
  /* 213ae8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213aec: add x8, x8, #0x538 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1336)));
  /* 213af0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 213af4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 213af8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2177788));
  fn2_24b710(c);
  /* 213afc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 213b00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 213b04: cbz w8, #0x213aa4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_213aa4;
  /* 213b08: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 213b0c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 213b10: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 213b14: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2177816));
  fn2_219a98(c);
  /* 213b18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 213b1c: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 213b20: add x1, x1, #0x1c3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(451)));
  /* 213b24: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 213b28: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 213b2c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2177840));
  fn2_1b8fd4(c);
  /* 213b30: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 213b34: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 213b38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 213b3c: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 213b40: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2177860));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 213b44: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 213b48: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 213b4c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2177872));
  fn2_1d2d24(c);
  /* 213b50: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 213b54: add x0, x0, #0x530 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1328)));
  /* 213b58: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 213b5c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2177888));
  fn2_24b720(c);
  /* 213b60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 213b64: b #0x213aa4 */
  goto L_213aa4;
}

void fn2_215984(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078041476));
  /* 215984: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 215988: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 21598c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 215990: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 215994: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215998: add x8, x8, #0x738 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1848)));
  /* 21599c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2159a0: tbz w8, #0, #0x2159e8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2159e8;
L_2159a4:;
  /* 2159a4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2159a8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2159ac: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2159b0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 2159b4: ldr x8, [x8, #0x730] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1840))));
  /* 2159b8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2159bc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2159c0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 2159c4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2159c8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2185676));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 2159cc: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2159d0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 2159d4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 2159d8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2159dc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 2159e0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2159e4: ret  */
  return;
L_2159e8:;
  /* 2159e8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2159ec: add x8, x8, #0x738 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1848)));
  /* 2159f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2159f4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2159f8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2185724));
  fn2_24b710(c);
  /* 2159fc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 215a00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 215a04: cbz w8, #0x2159a4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2159a4;
  /* 215a08: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 215a0c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 215a10: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 215a14: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2185752));
  fn2_219a98(c);
  /* 215a18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 215a1c: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 215a20: add x1, x1, #0xa0f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2575)));
  /* 215a24: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 215a28: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 215a2c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2185776));
  fn2_1b8fd4(c);
  /* 215a30: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 215a34: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 215a38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 215a3c: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 215a40: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2185796));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 215a44: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 215a48: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 215a4c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2185808));
  fn2_1d2d24(c);
  /* 215a50: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 215a54: add x0, x0, #0x730 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1840)));
  /* 215a58: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 215a5c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2185824));
  fn2_24b720(c);
  /* 215a60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 215a64: b #0x2159a4 */
  goto L_2159a4;
}

void fn2_2176d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078048976));
  /* 2176d0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2176d4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2176d8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2176dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2176e0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2176e4: add x8, x8, #0x938 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2360)));
  /* 2176e8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2176ec: tbz w8, #0, #0x217728 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_217728;
L_2176f0:;
  /* 2176f0: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2176f4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2176f8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 2176fc: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 217700: ldr x8, [x8, #0x930] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2352))));
  /* 217704: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 217708: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 21770c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 217710: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 217714: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193176));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 217718: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21771c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 217720: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 217724: ret  */
  return;
L_217728:;
  /* 217728: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21772c: add x8, x8, #0x938 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2360)));
  /* 217730: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 217734: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 217738: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193212));
  fn2_24b710(c);
  /* 21773c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 217740: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 217744: cbz w8, #0x2176f0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2176f0;
  /* 217748: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21774c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 217750: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 217754: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193240));
  fn2_219a98(c);
  /* 217758: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21775c: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 217760: add x1, x1, #0xef7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3831)));
  /* 217764: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217768: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21776c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193264));
  fn2_1b8fd4(c);
  /* 217770: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 217774: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217778: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21777c: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 217780: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193284));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 217784: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 217788: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21778c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193296));
  fn2_1d2d24(c);
  /* 217790: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217794: add x0, x0, #0x930 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2352)));
  /* 217798: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21779c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2193312));
  fn2_24b720(c);
  /* 2177a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2177a4: b #0x2176f0 */
  goto L_2176f0;
}

void fn2_2195dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078056924));
  /* 2195dc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2195e0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2195e4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2195e8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2195ec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2195f0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2195f4: add x8, x8, #0xb38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2872)));
  /* 2195f8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2195fc: tbz w8, #0, #0x219648 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_219648;
L_219600:;
  /* 219600: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 219604: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 219608: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 21960c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 219610: ldr x8, [x8, #0xb30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2864))));
  /* 219614: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 219618: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 21961c: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 219620: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 219624: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 219628: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21962c: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 219630: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201140));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 219634: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 219638: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21963c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 219640: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 219644: ret  */
  return;
L_219648:;
  /* 219648: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21964c: add x8, x8, #0xb38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2872)));
  /* 219650: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 219654: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 219658: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 21965c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201184));
  fn2_24b710(c);
  /* 219660: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 219664: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 219668: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21966c: cbz w8, #0x219600 */
  if ((ARC_W_R(c, 8)) == 0) goto L_219600;
  /* 219670: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 219674: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 219678: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21967c: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201216));
  fn2_219a98(c);
  /* 219680: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 219684: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 219688: add x1, x1, #0xf49 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3913)));
  /* 21968c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 219690: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 219694: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201240));
  fn2_1b8fd4(c);
  /* 219698: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 21969c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2196a0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2196a4: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 2196a8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201260));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2196ac: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2196b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2196b4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201272));
  fn2_1d2d24(c);
  /* 2196b8: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2196bc: add x0, x0, #0xb30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2864)));
  /* 2196c0: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2196c4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2201288));
  fn2_24b720(c);
  /* 2196c8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2196cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2196d0: b #0x219600 */
  goto L_219600;
}

void fn2_21a290(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078060176));
  /* 21a290: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 21a294: ret  */
  return;
}

void fn2_21c15c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078068060));
  /* 21c15c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21c160: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21c164: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21c168: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21c16c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21c170: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c174: add x8, x8, #0xd40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3392)));
  /* 21c178: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21c17c: tbz w8, #0, #0x21c1c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21c1c8;
L_21c180:;
  /* 21c180: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21c184: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c188: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 21c18c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 21c190: ldr x8, [x8, #0xd38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3384))));
  /* 21c194: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21c198: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 21c19c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21c1a0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 21c1a4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21c1a8: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 21c1ac: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212272));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 21c1b0: ldr w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(8))));
  /* 21c1b4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21c1b8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21c1bc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21c1c0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21c1c4: ret  */
  return;
L_21c1c8:;
  /* 21c1c8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c1cc: add x8, x8, #0xd40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3392)));
  /* 21c1d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21c1d4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21c1d8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 21c1dc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212320));
  fn2_24b710(c);
  /* 21c1e0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21c1e4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21c1e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21c1ec: cbz w8, #0x21c180 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21c180;
  /* 21c1f0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21c1f4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21c1f8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21c1fc: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212352));
  fn2_21f8e0(c);
  /* 21c200: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21c204: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 21c208: add x1, x1, #0x4c1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1217)));
  /* 21c20c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21c210: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21c214: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212376));
  fn2_1b8fd4(c);
  /* 21c218: mov w2, #0xaaaf */
  ARC_W_W(c, 2, UINT64_C(43695));
  /* 21c21c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21c220: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21c224: movk w2, #0x4068, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1080557568)));
  /* 21c228: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212396));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21c22c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21c230: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21c234: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212408));
  fn2_1d2d24(c);
  /* 21c238: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c23c: add x0, x0, #0xd38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3384)));
  /* 21c240: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 21c244: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2212424));
  fn2_24b720(c);
  /* 21c248: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21c24c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21c250: b #0x21c180 */
  goto L_21c180;
}

void fn2_21e0cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078076108));
  /* 21e0cc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21e0d0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21e0d4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21e0d8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21e0dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21e0e0: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e0e4: add x9, x9, #0xf40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3904)));
  /* 21e0e8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21e0ec: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21e0f0: tbz w9, #0, #0x21e150 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21e150;
L_21e0f4:;
  /* 21e0f4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e0f8: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21e0fc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e100: ldr x20, [x8, #0xf38] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(3896))));
  /* 21e104: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220296));
  fn2_1d9740(c);
  /* 21e108: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21e10c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21e110: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21e114: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21e118: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21e11c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21e120: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21e124: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220328));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21e128: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21e12c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21e130: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220340));
  fn2_1d9754(c);
  /* 21e134: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e138: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220348));
  fn2_1d97fc(c);
  /* 21e13c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21e140: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21e144: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21e148: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21e14c: ret  */
  return;
L_21e150:;
  /* 21e150: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e154: add x8, x8, #0xf40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3904)));
  /* 21e158: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21e15c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21e160: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220388));
  fn2_24b710(c);
  /* 21e164: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21e168: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21e16c: cbz w8, #0x21e0f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21e0f4;
  /* 21e170: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21e174: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21e178: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21e17c: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220416));
  fn2_21f8e0(c);
  /* 21e180: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21e184: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 21e188: add x1, x1, #0xa1a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2586)));
  /* 21e18c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e190: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21e194: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220440));
  fn2_1b8fd4(c);
  /* 21e198: mov w2, #0x48e7 */
  ARC_W_W(c, 2, UINT64_C(18663));
  /* 21e19c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21e1a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21e1a4: movk w2, #0xb8e7, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3102146560)));
  /* 21e1a8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220460));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21e1ac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21e1b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e1b4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220472));
  fn2_1d2d24(c);
  /* 21e1b8: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e1bc: add x0, x0, #0xf38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3896)));
  /* 21e1c0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21e1c4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2220488));
  fn2_24b720(c);
  /* 21e1c8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21e1cc: b #0x21e0f4 */
  goto L_21e0f4;
}

void fn2_21fa94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078082708));
  /* 21fa94: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21fa98: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 21fa9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 21faa0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21faa4: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 21faa8: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* 21faac: add x8, x8, #0x5e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1504)));
  /* 21fab0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 21fab4: cbz x0, #0x21fae4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_21fae4;
L_21fab8:;
  /* 21fab8: ldr x1, [x0] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 0)));
  /* 21fabc: cbz x1, #0x21fad4 */
  if ((ARC_X_R(c, 1)) == 0) goto L_21fad4;
  /* 21fac0: bl #0xaeb74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2226884));
  fn2_aeb74(c);
  /* 21fac4: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 21fac8: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21facc: cbnz w8, #0x21fab8 */
  if ((ARC_W_R(c, 8)) != 0) goto L_21fab8;
  /* 21fad0: b #0x21fadc */
  goto L_21fadc;
L_21fad4:;
  /* 21fad4: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21fad8: cbnz w8, #0x21faf4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_21faf4;
L_21fadc:;
  /* 21fadc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 21fae0: bl #0x1b5ce8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2226916));
  fn2_1b5ce8(c);
L_21fae4:;
  /* 21fae4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21fae8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21faec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21faf0: b #0x24b730 */
  fn2_24b730(c); return;
L_21faf4:;
  /* 21faf4: adrp x0, #0x29000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(167936)));
  /* 21faf8: add x0, x0, #0x23f */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(575)));
  /* 21fafc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 21fb00: add x1, x1, #0x30a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(778)));
  /* 21fb04: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 21fb08: add x3, x3, #0xbb4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2996)));
  /* 21fb0c: mov w2, #0x317 */
  ARC_W_W(c, 2, UINT64_C(791));
  /* 21fb10: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 21fb14: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 21fb18: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2226972));
  fn2_1b54b0(c);
  /* 21fb1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21fb20: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21fb24: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21fb28: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_221a00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078090752));
  /* 221a00: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 221a04: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 221a08: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 221a0c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 221a10: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 221a14: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221a18: add x9, x9, #0x2c0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(704)));
  /* 221a1c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 221a20: tbz w9, #0, #0x221a4c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_221a4c;
L_221a24:;
  /* 221a24: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221a28: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 221a2c: ldr x9, [x9, #0x2b8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(696))));
  /* 221a30: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 221a34: bl #0x2029d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2234936));
  fn2_2029d0(c);
  /* 221a38: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 221a3c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 221a40: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 221a44: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 221a48: ret  */
  return;
L_221a4c:;
  /* 221a4c: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221a50: add x9, x9, #0x2c0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(704)));
  /* 221a54: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 221a58: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 221a5c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 221a60: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2234980));
  fn2_24b710(c);
  /* 221a64: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 221a68: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* 221a6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 221a70: cbz w9, #0x221a24 */
  if ((ARC_W_R(c, 9)) == 0) goto L_221a24;
  /* 221a74: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 221a78: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 221a7c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 221a80: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235012));
  fn2_222b84(c);
  /* 221a84: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 221a88: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 221a8c: add x1, x1, #0xa3b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2619)));
  /* 221a90: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 221a94: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 221a98: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235036));
  fn2_1b8fd4(c);
  /* 221a9c: mov w2, #0x1d98 */
  ARC_W_W(c, 2, UINT64_C(7576));
  /* 221aa0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 221aa4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 221aa8: movk w2, #0xee2d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3995926528)));
  /* 221aac: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235056));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 221ab0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 221ab4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 221ab8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235068));
  fn2_1d2d24(c);
  /* 221abc: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 221ac0: add x0, x0, #0x2b8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(696)));
  /* 221ac4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 221ac8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2235084));
  fn2_24b720(c);
  /* 221acc: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 221ad0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 221ad4: b #0x221a24 */
  goto L_221a24;
}

void fn2_22382c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078098476));
  /* 22382c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 223830: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 223834: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 223838: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22383c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223840: add x8, x8, #0x490 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1168)));
  /* 223844: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 223848: tbz w8, #0, #0x223890 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_223890;
L_22384c:;
  /* 22384c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 223850: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223854: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 223858: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22385c: ldr x8, [x8, #0x488] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1160))));
  /* 223860: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 223864: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 223868: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22386c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 223870: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2242676));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 223874: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 223878: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 22387c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 223880: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 223884: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 223888: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22388c: ret  */
  return;
L_223890:;
  /* 223890: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223894: add x8, x8, #0x490 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1168)));
  /* 223898: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22389c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2238a0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2242724));
  fn2_24b710(c);
  /* 2238a4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2238a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2238ac: cbz w8, #0x22384c */
  if ((ARC_W_R(c, 8)) == 0) goto L_22384c;
  /* 2238b0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2238b4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2238b8: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2238bc: bl #0x2241ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2242752));
  fn2_2241ec(c);
  /* 2238c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2238c4: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 2238c8: add x1, x1, #0x57c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1404)));
  /* 2238cc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2238d0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2238d4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2242776));
  fn2_1b8fd4(c);
  /* 2238d8: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 2238dc: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2238e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2238e4: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 2238e8: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2242796));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2238ec: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2238f0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2238f4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2242808));
  fn2_1d2d24(c);
  /* 2238f8: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2238fc: add x0, x0, #0x488 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1160)));
  /* 223900: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 223904: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2242824));
  fn2_24b720(c);
  /* 223908: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22390c: b #0x22384c */
  goto L_22384c;
}

void fn2_225768(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078106472));
  /* 225768: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 22576c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 225770: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 225774: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 225778: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22577c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225780: add x8, x8, #0x658 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1624)));
  /* 225784: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 225788: tbz w8, #0, #0x2257d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2257d4;
L_22578c:;
  /* 22578c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 225790: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225794: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 225798: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 22579c: ldr x8, [x8, #0x650] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1616))));
  /* 2257a0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2257a4: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 2257a8: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 2257ac: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 2257b0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2257b4: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 2257b8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250684));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 2257bc: ldr w0, [sp, #8] */
  ARC_W_W(c, 0, arc_ld32(((c)->sp + INT64_C(8))));
  /* 2257c0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2257c4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2257c8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2257cc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2257d0: ret  */
  return;
L_2257d4:;
  /* 2257d4: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2257d8: add x8, x8, #0x658 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1624)));
  /* 2257dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2257e0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2257e4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 2257e8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250732));
  fn2_24b710(c);
  /* 2257ec: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2257f0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2257f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2257f8: cbz w8, #0x22578c */
  if ((ARC_W_R(c, 8)) == 0) goto L_22578c;
  /* 2257fc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 225800: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 225804: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 225808: bl #0x225860 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250764));
  fn2_225860(c);
  /* 22580c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 225810: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 225814: add x1, x1, #0xcf9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3321)));
  /* 225818: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22581c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 225820: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250788));
  fn2_1b8fd4(c);
  /* 225824: mov w2, #0xfb5b */
  ARC_W_W(c, 2, UINT64_C(64347));
  /* 225828: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22582c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 225830: movk w2, #0x9e4, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(165937152)));
  /* 225834: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250808));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 225838: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22583c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 225840: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250820));
  fn2_1d2d24(c);
  /* 225844: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225848: add x0, x0, #0x650 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1616)));
  /* 22584c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 225850: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2250836));
  fn2_24b720(c);
  /* 225854: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 225858: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22585c: b #0x22578c */
  goto L_22578c;
}

void fn2_227638(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078114360));
  /* 227638: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 22763c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 227640: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 227644: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 227648: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22764c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 227650: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 227654: add x9, x9, #0x818 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2072)));
  /* 227658: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 22765c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 227660: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 227664: tbz w9, #0, #0x2276cc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_2276cc;
L_227668:;
  /* 227668: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22766c: ldr x22, [x0, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 227670: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227674: ldr x21, [x8, #0x810] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(2064))));
  /* 227678: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258556));
  fn2_1ccc74(c);
  /* 22767c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 227680: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 227684: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227688: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 22768c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 227690: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 227694: str x20, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 20));
  /* 227698: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 22769c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258592));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 2276a0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2276a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2276a8: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258604));
  fn2_1ccc88(c);
  /* 2276ac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2276b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258612));
  fn2_1ccd9c(c);
  /* 2276b4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2276b8: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 2276bc: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2276c0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2276c4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 2276c8: ret  */
  return;
L_2276cc:;
  /* 2276cc: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2276d0: add x8, x8, #0x818 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2072)));
  /* 2276d4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2276d8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2276dc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258656));
  fn2_24b710(c);
  /* 2276e0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2276e4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 2276e8: cbz w8, #0x227668 */
  if ((ARC_W_R(c, 8)) == 0) goto L_227668;
  /* 2276ec: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2276f0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2276f4: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 2276f8: bl #0x227e2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258684));
  fn2_227e2c(c);
  /* 2276fc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 227700: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 227704: add x1, x1, #0xd05 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3333)));
  /* 227708: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22770c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 227710: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258708));
  fn2_1b8fd4(c);
  /* 227714: mov w2, #0xcd43 */
  ARC_W_W(c, 2, UINT64_C(52547));
  /* 227718: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22771c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 227720: movk w2, #0xbae7, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3135700992)));
  /* 227724: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258728));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 227728: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22772c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 227730: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258740));
  fn2_1d2d24(c);
  /* 227734: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 227738: add x0, x0, #0x810 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2064)));
  /* 22773c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 227740: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2258756));
  fn2_24b720(c);
  /* 227744: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 227748: b #0x227668 */
  goto L_227668;
}

void fn2_229110(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078121232));
  /* 229110: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 229114: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 229118: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22911c: nop  */
  /* nop: no architectural effect here */
  /* 229120: adr x8, #0x25ce10 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2477584)));
  /* 229124: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 229128: tbz w8, #0, #0x229140 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_229140;
L_22912c:;
  /* 22912c: nop  */
  /* nop: no architectural effect here */
  /* 229130: adr x0, #0x25ce08 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477576)));
  /* 229134: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 229138: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22913c: ret  */
  return;
L_229140:;
  /* 229140: nop  */
  /* nop: no architectural effect here */
  /* 229144: adr x0, #0x25ce10 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477584)));
  /* 229148: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2265420));
  fn2_24b710(c);
  /* 22914c: cbz w0, #0x22912c */
  if ((ARC_W_R(c, 0)) == 0) goto L_22912c;
  /* 229150: nop  */
  /* nop: no architectural effect here */
  /* 229154: adr x19, #0x25ce08 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2477576)));
  /* 229158: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 22915c: add x1, x1, #0xf89 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3977)));
  /* 229160: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 229164: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 229168: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2265452));
  fn2_1b8fd4(c);
  /* 22916c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 229170: nop  */
  /* nop: no architectural effect here */
  /* 229174: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 229178: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 22917c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 229180: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2265476));
  fn2_24b6f0(c);
  /* 229184: nop  */
  /* nop: no architectural effect here */
  /* 229188: adr x0, #0x25ce10 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477584)));
  /* 22918c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2265488));
  fn2_24b720(c);
  /* 229190: nop  */
  /* nop: no architectural effect here */
  /* 229194: adr x0, #0x25ce08 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477576)));
  /* 229198: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22919c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2291a0: ret  */
  return;
}

void fn2_22a1b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078125496));
  /* 22a1b8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22a1bc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 22a1c0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22a1c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22a1c8: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a1cc: add x8, x8, #0xab0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2736)));
  /* 22a1d0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22a1d4: tbz w8, #0, #0x22a220 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22a220;
L_22a1d8:;
  /* 22a1d8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22a1dc: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a1e0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22a1e4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22a1e8: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 22a1ec: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22a1f0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22a1f4: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 22a1f8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22a1fc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22a200: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269700));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 22a204: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 22a208: cbz x0, #0x22a210 */
  if ((ARC_X_R(c, 0)) == 0) goto L_22a210;
  /* 22a20c: bl #0x1b62dc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269712));
  fn2_1b62dc(c);
L_22a210:;
  /* 22a210: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22a214: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22a218: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22a21c: ret  */
  return;
L_22a220:;
  /* 22a220: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a224: add x8, x8, #0xab0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2736)));
  /* 22a228: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22a22c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22a230: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269748));
  fn2_24b710(c);
  /* 22a234: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22a238: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22a23c: cbz w8, #0x22a1d8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22a1d8;
  /* 22a240: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22a244: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22a248: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 22a24c: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269776));
  fn2_22c080(c);
  /* 22a250: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22a254: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 22a258: add x1, x1, #0xd68 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3432)));
  /* 22a25c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22a260: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22a264: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269800));
  fn2_1b8fd4(c);
  /* 22a268: mov w2, #0xcff4 */
  ARC_W_W(c, 2, UINT64_C(53236));
  /* 22a26c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22a270: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22a274: movk w2, #0xbc5d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3160211456)));
  /* 22a278: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269820));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 22a27c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22a280: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22a284: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269832));
  fn2_1d2d24(c);
  /* 22a288: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a28c: add x0, x0, #0xaa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2728)));
  /* 22a290: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22a294: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2269848));
  fn2_24b720(c);
  /* 22a298: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22a29c: b #0x22a1d8 */
  goto L_22a1d8;
}

void fn2_22c080(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078133376));
  /* 22c080: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22c084: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 22c088: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22c08c: nop  */
  /* nop: no architectural effect here */
  /* 22c090: adr x8, #0x25ce90 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2477712)));
  /* 22c094: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22c098: tbz w8, #0, #0x22c0b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22c0b0;
L_22c09c:;
  /* 22c09c: nop  */
  /* nop: no architectural effect here */
  /* 22c0a0: adr x0, #0x25ce88 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477704)));
  /* 22c0a4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22c0a8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22c0ac: ret  */
  return;
L_22c0b0:;
  /* 22c0b0: nop  */
  /* nop: no architectural effect here */
  /* 22c0b4: adr x0, #0x25ce90 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477712)));
  /* 22c0b8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277564));
  fn2_24b710(c);
  /* 22c0bc: cbz w0, #0x22c09c */
  if ((ARC_W_R(c, 0)) == 0) goto L_22c09c;
  /* 22c0c0: nop  */
  /* nop: no architectural effect here */
  /* 22c0c4: adr x19, #0x25ce88 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2477704)));
  /* 22c0c8: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 22c0cc: add x1, x1, #0x63c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1596)));
  /* 22c0d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c0d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22c0d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277596));
  fn2_1b8fd4(c);
  /* 22c0dc: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 22c0e0: nop  */
  /* nop: no architectural effect here */
  /* 22c0e4: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 22c0e8: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 22c0ec: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 22c0f0: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277620));
  fn2_24b6f0(c);
  /* 22c0f4: nop  */
  /* nop: no architectural effect here */
  /* 22c0f8: adr x0, #0x25ce90 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477712)));
  /* 22c0fc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2277632));
  fn2_24b720(c);
  /* 22c100: nop  */
  /* nop: no architectural effect here */
  /* 22c104: adr x0, #0x25ce88 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477704)));
  /* 22c108: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22c10c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22c110: ret  */
  return;
}

void fn2_22dc10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078140432));
  /* 22dc10: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 22dc14: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22dc18: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22dc1c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22dc20: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22dc24: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22dc28: add x9, x9, #0xe10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3600)));
  /* 22dc2c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 22dc30: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 22dc34: tbz w9, #0, #0x22dc94 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22dc94;
L_22dc38:;
  /* 22dc38: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22dc3c: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22dc40: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22dc44: ldr x20, [x8, #0xe08] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(3592))));
  /* 22dc48: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284620));
  fn2_1ccc74(c);
  /* 22dc4c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22dc50: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 22dc54: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22dc58: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 22dc5c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 22dc60: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22dc64: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 22dc68: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284652));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 22dc6c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22dc70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22dc74: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284664));
  fn2_1ccc88(c);
  /* 22dc78: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22dc7c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284672));
  fn2_1ccd9c(c);
  /* 22dc80: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22dc84: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22dc88: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22dc8c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 22dc90: ret  */
  return;
L_22dc94:;
  /* 22dc94: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22dc98: add x8, x8, #0xe10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3600)));
  /* 22dc9c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22dca0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22dca4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284712));
  fn2_24b710(c);
  /* 22dca8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22dcac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22dcb0: cbz w8, #0x22dc38 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22dc38;
  /* 22dcb4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22dcb8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22dcbc: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 22dcc0: bl #0x22dffc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284740));
  fn2_22dffc(c);
  /* 22dcc4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22dcc8: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 22dccc: add x1, x1, #0x51a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1306)));
  /* 22dcd0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22dcd4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22dcd8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284764));
  fn2_1b8fd4(c);
  /* 22dcdc: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 22dce0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22dce4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22dce8: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 22dcec: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284784));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 22dcf0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22dcf4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22dcf8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284796));
  fn2_1d2d24(c);
  /* 22dcfc: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22dd00: add x0, x0, #0xe08 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3592)));
  /* 22dd04: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22dd08: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2284812));
  fn2_24b720(c);
  /* 22dd0c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22dd10: b #0x22dc38 */
  goto L_22dc38;
}

void fn2_22f480(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078146688));
  /* 22f480: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 22f484: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22f488: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 22f48c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22f490: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22f494: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 22f498: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22f49c: add x9, x9, #0xf48 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3912)));
  /* 22f4a0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 22f4a4: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 22f4a8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 22f4ac: tbz w9, #0, #0x22f520 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22f520;
L_22f4b0:;
  /* 22f4b0: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22f4b4: and w9, w2, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 2) & UINT64_C(1)));
  /* 22f4b8: ldr x22, [x0, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22f4bc: ldr x21, [x8, #0xf40] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(3904))));
  /* 22f4c0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22f4c4: strb w9, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 9));
  /* 22f4c8: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2290892));
  fn2_1d9740(c);
  /* 22f4cc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22f4d0: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 22f4d4: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 22f4d8: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 22f4dc: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22f4e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22f4e4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 22f4e8: stp x20, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 22f4ec: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 22f4f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2290932));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 22f4f4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22f4f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22f4fc: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2290944));
  fn2_1d9754(c);
  /* 22f500: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22f504: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2290952));
  fn2_1d97fc(c);
  /* 22f508: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22f50c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22f510: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 22f514: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22f518: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 22f51c: ret  */
  return;
L_22f520:;
  /* 22f520: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22f524: add x8, x8, #0xf48 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3912)));
  /* 22f528: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 22f52c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22f530: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* 22f534: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291000));
  fn2_24b710(c);
  /* 22f538: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 22f53c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22f540: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 22f544: cbz w8, #0x22f4b0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22f4b0;
  /* 22f548: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22f54c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22f550: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 22f554: bl #0x23048c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291032));
  fn2_23048c(c);
  /* 22f558: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 22f55c: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 22f560: add x1, x1, #0x7d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(125)));
  /* 22f564: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22f568: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22f56c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291056));
  fn2_1b8fd4(c);
  /* 22f570: mov w2, #0x86e8 */
  ARC_W_W(c, 2, UINT64_C(34536));
  /* 22f574: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22f578: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 22f57c: movk w2, #0xc1ed, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3253534720)));
  /* 22f580: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291076));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 22f584: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 22f588: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22f58c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291088));
  fn2_1d2d24(c);
  /* 22f590: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22f594: add x0, x0, #0xf40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3904)));
  /* 22f598: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 22f59c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2291104));
  fn2_24b720(c);
  /* 22f5a0: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 22f5a4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 22f5a8: b #0x22f4b0 */
  goto L_22f4b0;
}

void fn2_23153c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078155068));
  /* 23153c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 231540: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 231544: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 231548: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23154c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 231550: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* 231554: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 231558: tbz w8, #0, #0x231598 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_231598;
L_23155c:;
  /* 23155c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 231560: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 231564: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 231568: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 23156c: ldr x8, [x8, #0x140] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(320))));
  /* 231570: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 231574: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 231578: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 23157c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 231580: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299268));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 231584: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 231588: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23158c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 231590: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 231594: ret  */
  return;
L_231598:;
  /* 231598: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23159c: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* 2315a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2315a4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2315a8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299308));
  fn2_24b710(c);
  /* 2315ac: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2315b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2315b4: cbz w8, #0x23155c */
  if ((ARC_W_R(c, 8)) == 0) goto L_23155c;
  /* 2315b8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2315bc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2315c0: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2315c4: bl #0x2319d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299336));
  fn2_2319d0(c);
  /* 2315c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2315cc: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 2315d0: add x1, x1, #0x483 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1155)));
  /* 2315d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2315d8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2315dc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299360));
  fn2_1b8fd4(c);
  /* 2315e0: mov w2, #0x3e29 */
  ARC_W_W(c, 2, UINT64_C(15913));
  /* 2315e4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2315e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2315ec: movk w2, #0x9e9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(166264832)));
  /* 2315f0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299380));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2315f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2315f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2315fc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299392));
  fn2_1d2d24(c);
  /* 231600: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 231604: add x0, x0, #0x140 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(320)));
  /* 231608: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 23160c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2299408));
  fn2_24b720(c);
  /* 231610: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 231614: b #0x23155c */
  goto L_23155c;
}

void fn2_232f78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078161784));
  /* 232f78: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 232f7c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 232f80: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 232f84: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 232f88: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232f8c: add x8, x8, #0x2f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(760)));
  /* 232f90: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 232f94: tbz w8, #0, #0x232fd4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_232fd4;
L_232f98:;
  /* 232f98: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 232f9c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232fa0: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 232fa4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 232fa8: ldr x8, [x8, #0x2f0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(752))));
  /* 232fac: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 232fb0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 232fb4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 232fb8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 232fbc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2305984));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 232fc0: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 232fc4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 232fc8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 232fcc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 232fd0: ret  */
  return;
L_232fd4:;
  /* 232fd4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 232fd8: add x8, x8, #0x2f8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(760)));
  /* 232fdc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 232fe0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 232fe4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306024));
  fn2_24b710(c);
  /* 232fe8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 232fec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 232ff0: cbz w8, #0x232f98 */
  if ((ARC_W_R(c, 8)) == 0) goto L_232f98;
  /* 232ff4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 232ff8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 232ffc: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 233000: bl #0x233714 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306052));
  fn2_233714(c);
  /* 233004: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 233008: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 23300c: add x1, x1, #0x16f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(367)));
  /* 233010: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 233014: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 233018: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306076));
  fn2_1b8fd4(c);
  /* 23301c: mov w2, #0x525a */
  ARC_W_W(c, 2, UINT64_C(21082));
  /* 233020: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 233024: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 233028: movk w2, #0xe8c5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3905224704)));
  /* 23302c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306096));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 233030: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 233034: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 233038: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306108));
  fn2_1d2d24(c);
  /* 23303c: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 233040: add x0, x0, #0x2f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(752)));
  /* 233044: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 233048: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2306124));
  fn2_24b720(c);
  /* 23304c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 233050: b #0x232f98 */
  goto L_232f98;
}

void fn2_2348d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078168276));
  /* 2348d4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2348d8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2348dc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2348e0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2348e4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2348e8: add x8, x8, #0x508 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1288)));
  /* 2348ec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2348f0: tbz w8, #0, #0x234934 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_234934;
L_2348f4:;
  /* 2348f4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2348f8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2348fc: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 234900: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 234904: ldr x8, [x8, #0x500] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1280))));
  /* 234908: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23490c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 234910: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* 234914: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 234918: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23491c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312480));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 234920: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 234924: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 234928: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23492c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 234930: ret  */
  return;
L_234934:;
  /* 234934: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 234938: add x8, x8, #0x508 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1288)));
  /* 23493c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 234940: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 234944: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312520));
  fn2_24b710(c);
  /* 234948: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23494c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 234950: cbz w8, #0x2348f4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_2348f4;
  /* 234954: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 234958: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23495c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 234960: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312548));
  fn2_23b340(c);
  /* 234964: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 234968: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 23496c: add x1, x1, #0x889 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2185)));
  /* 234970: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 234974: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 234978: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312572));
  fn2_1b8fd4(c);
  /* 23497c: mov w2, #0xeaf0 */
  ARC_W_W(c, 2, UINT64_C(60144));
  /* 234980: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 234984: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 234988: movk w2, #0xdbff, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3690921984)));
  /* 23498c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312592));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 234990: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 234994: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 234998: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312604));
  fn2_1d2d24(c);
  /* 23499c: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2349a0: add x0, x0, #0x500 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1280)));
  /* 2349a4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2349a8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2312620));
  fn2_24b720(c);
  /* 2349ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2349b0: b #0x2348f4 */
  goto L_2348f4;
}

void fn2_236640(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078175808));
  /* 236640: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 236644: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 236648: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23664c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 236650: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 236654: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236658: add x8, x8, #0x708 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1800)));
  /* 23665c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 236660: tbz w8, #0, #0x2366ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2366ac;
L_236664:;
  /* 236664: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 236668: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23666c: mov w11, w1 */
  ARC_W_W(c, 11, ARC_W_R(c, 1));
  /* 236670: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 236674: ldr x8, [x9, #0x700] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1792))));
  /* 236678: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23667c: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 236680: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 236684: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 236688: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 23668c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 236690: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 236694: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320024));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 236698: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23669c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2366a0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2366a4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2366a8: ret  */
  return;
L_2366ac:;
  /* 2366ac: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2366b0: add x8, x8, #0x708 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1800)));
  /* 2366b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2366b8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2366bc: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 2366c0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320068));
  fn2_24b710(c);
  /* 2366c4: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 2366c8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2366cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2366d0: cbz w8, #0x236664 */
  if ((ARC_W_R(c, 8)) == 0) goto L_236664;
  /* 2366d4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2366d8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2366dc: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2366e0: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320100));
  fn2_23b340(c);
  /* 2366e4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2366e8: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 2366ec: add x1, x1, #0xba8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2984)));
  /* 2366f0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2366f4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2366f8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320124));
  fn2_1b8fd4(c);
  /* 2366fc: mov w2, #0xfef9 */
  ARC_W_W(c, 2, UINT64_C(65273));
  /* 236700: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 236704: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 236708: movk w2, #0xaf19, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2937651200)));
  /* 23670c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320144));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 236710: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 236714: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 236718: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320156));
  fn2_1d2d24(c);
  /* 23671c: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236720: add x0, x0, #0x700 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1792)));
  /* 236724: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 236728: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2320172));
  fn2_24b720(c);
  /* 23672c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 236730: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 236734: b #0x236664 */
  goto L_236664;
}

void fn2_2384f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078183672));
  /* 2384f8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2384fc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 238500: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 238504: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 238508: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 23850c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238510: add x8, x8, #0x908 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2312)));
  /* 238514: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 238518: tbz w8, #0, #0x238560 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_238560;
L_23851c:;
  /* 23851c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 238520: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238524: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 238528: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 23852c: ldr x8, [x8, #0x900] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2304))));
  /* 238530: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 238534: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 238538: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23853c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 238540: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 238544: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 238548: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2327884));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 23854c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 238550: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 238554: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 238558: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 23855c: ret  */
  return;
L_238560:;
  /* 238560: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238564: add x8, x8, #0x908 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2312)));
  /* 238568: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23856c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 238570: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 238574: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2327928));
  fn2_24b710(c);
  /* 238578: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 23857c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 238580: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 238584: cbz w8, #0x23851c */
  if ((ARC_W_R(c, 8)) == 0) goto L_23851c;
  /* 238588: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23858c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 238590: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 238594: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2327960));
  fn2_23b340(c);
  /* 238598: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23859c: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 2385a0: add x1, x1, #0x375 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(885)));
  /* 2385a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2385a8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2385ac: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2327984));
  fn2_1b8fd4(c);
  /* 2385b0: mov w2, #0x126e */
  ARC_W_W(c, 2, UINT64_C(4718));
  /* 2385b4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2385b8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2385bc: movk w2, #0xc4fb, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3304783872)));
  /* 2385c0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328004));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2385c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2385c8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2385cc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328016));
  fn2_1d2d24(c);
  /* 2385d0: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2385d4: add x0, x0, #0x900 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2304)));
  /* 2385d8: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2385dc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2328032));
  fn2_24b720(c);
  /* 2385e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2385e4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2385e8: b #0x23851c */
  goto L_23851c;
}

void fn2_23a4f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078191864));
  /* 23a4f8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23a4fc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 23a500: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23a504: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23a508: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23a50c: add x8, x8, #0xb08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2824)));
  /* 23a510: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23a514: tbz w8, #0, #0x23a55c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23a55c;
L_23a518:;
  /* 23a518: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23a51c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23a520: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23a524: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 23a528: ldr x8, [x8, #0xb00] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))));
  /* 23a52c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23a530: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 23a534: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 23a538: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23a53c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336064));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23a540: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 23a544: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 23a548: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 23a54c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23a550: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23a554: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23a558: ret  */
  return;
L_23a55c:;
  /* 23a55c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23a560: add x8, x8, #0xb08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2824)));
  /* 23a564: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23a568: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23a56c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336112));
  fn2_24b710(c);
  /* 23a570: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23a574: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23a578: cbz w8, #0x23a518 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23a518;
  /* 23a57c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23a580: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23a584: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 23a588: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336140));
  fn2_23b340(c);
  /* 23a58c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23a590: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 23a594: add x1, x1, #0x51b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1307)));
  /* 23a598: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23a59c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23a5a0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336164));
  fn2_1b8fd4(c);
  /* 23a5a4: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 23a5a8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23a5ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 23a5b0: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 23a5b4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336184));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 23a5b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23a5bc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23a5c0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336196));
  fn2_1d2d24(c);
  /* 23a5c4: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23a5c8: add x0, x0, #0xb00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2816)));
  /* 23a5cc: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 23a5d0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2336212));
  fn2_24b720(c);
  /* 23a5d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23a5d8: b #0x23a518 */
  goto L_23a518;
}

void fn2_23b8a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078196896));
  /* 23b8a0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23b8a4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 23b8a8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23b8ac: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 23b8b0: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 23b8b4: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 23b8b8: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 23b8bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341056));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 23b8c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23b8c4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 23b8c8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23b8cc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23b8d0: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_23caa8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078201512));
  /* 23caa8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23caac: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 23cab0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23cab4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 23cab8: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23cabc: add x8, x8, #0xd98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3480)));
  /* 23cac0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23cac4: tbz w8, #0, #0x23cb00 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23cb00;
L_23cac8:;
  /* 23cac8: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23cacc: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23cad0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 23cad4: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 23cad8: ldr x8, [x8, #0xd90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3472))));
  /* 23cadc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23cae0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23cae4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 23cae8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23caec: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345712));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23caf0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23caf4: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 23caf8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23cafc: ret  */
  return;
L_23cb00:;
  /* 23cb00: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23cb04: add x8, x8, #0xd98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3480)));
  /* 23cb08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23cb0c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23cb10: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345748));
  fn2_24b710(c);
  /* 23cb14: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23cb18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23cb1c: cbz w8, #0x23cac8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23cac8;
  /* 23cb20: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23cb24: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23cb28: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 23cb2c: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345776));
  fn2_242738(c);
  /* 23cb30: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23cb34: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 23cb38: add x1, x1, #0x14e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(334)));
  /* 23cb3c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23cb40: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23cb44: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345800));
  fn2_1b8fd4(c);
  /* 23cb48: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 23cb4c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23cb50: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 23cb54: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 23cb58: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345820));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 23cb5c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23cb60: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23cb64: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345832));
  fn2_1d2d24(c);
  /* 23cb68: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23cb6c: add x0, x0, #0xd90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3472)));
  /* 23cb70: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 23cb74: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2345848));
  fn2_24b720(c);
  /* 23cb78: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23cb7c: b #0x23cac8 */
  goto L_23cac8;
}

void fn2_23ed68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078210408));
  /* 23ed68: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 23ed6c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23ed70: str x25, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 25));
  /* 23ed74: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 23ed78: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23ed7c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23ed80: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 23ed84: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23ed88: add x8, x8, #0xf98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3992)));
  /* 23ed8c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23ed90: tbz w8, #0, #0x23edec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23edec;
L_23ed94:;
  /* 23ed94: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 23ed98: add x9, x8, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 23ed9c: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 23eda0: csel x8, xzr, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* 23eda4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23eda8: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 23edac: stp x8, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 23edb0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23edb4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23edb8: ldr x0, [x8, #0xf90] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3984))));
  /* 23edbc: stp x3, x4, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 23edc0: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* 23edc4: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 23edc8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23edcc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2354640));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 23edd0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23edd4: ldr x25, [sp, #0x30] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(48))));
  /* 23edd8: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23eddc: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 23ede0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23ede4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 23ede8: ret  */
  return;
L_23edec:;
  /* 23edec: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23edf0: add x8, x8, #0xf98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3992)));
  /* 23edf4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23edf8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23edfc: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 23ee00: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 23ee04: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 23ee08: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 23ee0c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2354704));
  fn2_24b710(c);
  /* 23ee10: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 23ee14: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 23ee18: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 23ee1c: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 23ee20: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23ee24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23ee28: cbz w8, #0x23ed94 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23ed94;
  /* 23ee2c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23ee30: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23ee34: ldr x25, [x8] */
  ARC_X_W(c, 25, arc_ld64(ARC_X_R(c, 8)));
  /* 23ee38: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2354748));
  fn2_242738(c);
  /* 23ee3c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 23ee40: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 23ee44: add x1, x1, #0x21e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(542)));
  /* 23ee48: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 23ee4c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23ee50: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2354772));
  fn2_1b8fd4(c);
  /* 23ee54: mov w2, #0x95ea */
  ARC_W_W(c, 2, UINT64_C(38378));
  /* 23ee58: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 23ee5c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 23ee60: movk w2, #0xbf78, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3212312576)));
  /* 23ee64: blr x25 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2354792));
  arc_dispatch(c, ARC_X_R(c, 25));
  /* 23ee68: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 23ee6c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 23ee70: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2354804));
  fn2_1d2d24(c);
  /* 23ee74: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23ee78: add x0, x0, #0xf90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3984)));
  /* 23ee7c: str x24, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* 23ee80: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2354820));
  fn2_24b720(c);
  /* 23ee84: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 23ee88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23ee8c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 23ee90: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 23ee94: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 23ee98: b #0x23ed94 */
  goto L_23ed94;
}

void fn2_241258(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078219864));
  /* 241258: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 24125c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 241260: str x23, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 23));
  /* 241264: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 241268: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 24126c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 241270: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241274: add x9, x9, #0x198 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(408)));
  /* 241278: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 24127c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 241280: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 241284: tbz w9, #0, #0x2412ec */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_2412ec;
L_241288:;
  /* 241288: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24128c: ldr x22, [x0, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 241290: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 241294: ldr x21, [x8, #0x190] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(400))));
  /* 241298: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364060));
  fn2_1bc084(c);
  /* 24129c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2412a0: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2412a4: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 2412a8: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 2412ac: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2412b0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 2412b4: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 2412b8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 2412bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364096));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 2412c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2412c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2412c8: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364108));
  fn2_1bc0b8(c);
  /* 2412cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2412d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364116));
  fn2_1bc620(c);
  /* 2412d4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 2412d8: ldr x23, [sp, #0x30] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(48))));
  /* 2412dc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2412e0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2412e4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 2412e8: ret  */
  return;
L_2412ec:;
  /* 2412ec: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2412f0: add x8, x8, #0x198 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(408)));
  /* 2412f4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2412f8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2412fc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364160));
  fn2_24b710(c);
  /* 241300: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 241304: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 241308: cbz w8, #0x241288 */
  if ((ARC_W_R(c, 8)) == 0) goto L_241288;
  /* 24130c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 241310: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 241314: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 241318: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364188));
  fn2_242738(c);
  /* 24131c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 241320: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 241324: add x1, x1, #0xe73 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3699)));
  /* 241328: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24132c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 241330: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364212));
  fn2_1b8fd4(c);
  /* 241334: mov w2, #0x5985 */
  ARC_W_W(c, 2, UINT64_C(22917));
  /* 241338: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 24133c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 241340: movk w2, #0xa48d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2760704000)));
  /* 241344: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364232));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 241348: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 24134c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 241350: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364244));
  fn2_1d2d24(c);
  /* 241354: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241358: add x0, x0, #0x190 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(400)));
  /* 24135c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 241360: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2364260));
  fn2_24b720(c);
  /* 241364: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 241368: b #0x241288 */
  goto L_241288;
}

void fn2_242970(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078225776));
  /* 242970: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 242974: ret  */
  return;
}

void fn2_2436e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078229224));
  /* 2436e8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 2436ec: ret  */
  return;
}

void fn2_244714(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078233364));
  /* 244714: stp xzr, xzr, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 244718: str xzr, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 31));
  /* 24471c: ret  */
  return;
}

void fn2_2454ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078236908));
  /* 2454ec: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2454f0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 2454f4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2454f8: nop  */
  /* nop: no architectural effect here */
  /* 2454fc: adr x8, #0x25cf78 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2477944)));
  /* 245500: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 245504: tbz w8, #0, #0x24551c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_24551c;
L_245508:;
  /* 245508: nop  */
  /* nop: no architectural effect here */
  /* 24550c: adr x0, #0x25cf70 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477936)));
  /* 245510: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 245514: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 245518: ret  */
  return;
L_24551c:;
  /* 24551c: nop  */
  /* nop: no architectural effect here */
  /* 245520: adr x0, #0x25cf78 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477944)));
  /* 245524: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381096));
  fn2_24b710(c);
  /* 245528: cbz w0, #0x245508 */
  if ((ARC_W_R(c, 0)) == 0) goto L_245508;
  /* 24552c: nop  */
  /* nop: no architectural effect here */
  /* 245530: adr x19, #0x25cf70 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2477936)));
  /* 245534: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 245538: add x1, x1, #0x415 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1045)));
  /* 24553c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 245540: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 245544: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381128));
  fn2_1b8fd4(c);
  /* 245548: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 24554c: nop  */
  /* nop: no architectural effect here */
  /* 245550: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 245554: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 245558: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 24555c: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381152));
  fn2_24b6f0(c);
  /* 245560: nop  */
  /* nop: no architectural effect here */
  /* 245564: adr x0, #0x25cf78 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477944)));
  /* 245568: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2381164));
  fn2_24b720(c);
  /* 24556c: nop  */
  /* nop: no architectural effect here */
  /* 245570: adr x0, #0x25cf70 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2477936)));
  /* 245574: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 245578: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 24557c: ret  */
  return;
}

void fn2_246dd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078243280));
  /* 246dd0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 246dd4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 246dd8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 246ddc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 246de0: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246de4: add x8, x8, #0x6c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1736)));
  /* 246de8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 246dec: tbz w8, #0, #0x246e24 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_246e24;
L_246df0:;
  /* 246df0: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246df4: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 246df8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 246dfc: ldr x8, [x8, #0x6c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1728))));
  /* 246e00: stp x0, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 246e04: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 246e08: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 246e0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387472));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 246e10: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 246e14: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 246e18: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 246e1c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 246e20: ret  */
  return;
L_246e24:;
  /* 246e24: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246e28: add x8, x8, #0x6c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1736)));
  /* 246e2c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 246e30: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 246e34: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387512));
  fn2_24b710(c);
  /* 246e38: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 246e3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 246e40: cbz w8, #0x246df0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_246df0;
  /* 246e44: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 246e48: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 246e4c: add x1, x1, #0x3c5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(965)));
  /* 246e50: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 246e54: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 246e58: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 246e5c: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* 246e60: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387556));
  fn2_1b8fd4(c);
  /* 246e64: mov w1, #0x16d0 */
  ARC_W_W(c, 1, UINT64_C(5840));
  /* 246e68: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 246e6c: movk w1, #0x8096, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2157314048)));
  /* 246e70: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387572));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 246e74: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 246e78: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 246e7c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387584));
  fn2_1d2d24(c);
  /* 246e80: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 246e84: add x0, x0, #0x6c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1728)));
  /* 246e88: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 246e8c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2387600));
  fn2_24b720(c);
  /* 246e90: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 246e94: b #0x246df0 */
  goto L_246df0;
}

void fn2_248964(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078250340));
  /* 248964: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 248968: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 24896c: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 248970: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 248974: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248978: add x8, x8, #0x8c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2248)));
  /* 24897c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 248980: tbz w8, #0, #0x2489bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2489bc;
L_248984:;
  /* 248984: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248988: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 24898c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 248990: ldr x8, [x8, #0x8c0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2240))));
  /* 248994: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 248998: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 24899c: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 2489a0: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 2489a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394536));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 2489a8: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 2489ac: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2489b0: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 2489b4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2489b8: ret  */
  return;
L_2489bc:;
  /* 2489bc: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2489c0: add x0, x0, #0x8c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2248)));
  /* 2489c4: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 2489c8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394572));
  fn2_24b710(c);
  /* 2489cc: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 2489d0: cbz w0, #0x248984 */
  if ((ARC_W_R(c, 0)) == 0) goto L_248984;
  /* 2489d4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2489d8: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 2489dc: add x1, x1, #0x11a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(282)));
  /* 2489e0: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 2489e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2489e8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2489ec: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 2489f0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394612));
  fn2_1b8fd4(c);
  /* 2489f4: mov w1, #0x90b3 */
  ARC_W_W(c, 1, UINT64_C(37043));
  /* 2489f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2489fc: movk w1, #0x7f8e, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2140012544)));
  /* 248a00: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394628));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 248a04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 248a08: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 248a0c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394640));
  fn2_1d2d24(c);
  /* 248a10: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 248a14: add x0, x0, #0x8c0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2240)));
  /* 248a18: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 248a1c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2394656));
  fn2_24b720(c);
  /* 248a20: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 248a24: b #0x248984 */
  goto L_248984;
}

void fn2_24a3bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078257084));
  /* 24a3bc: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 24a3c0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 24a3c4: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 24a3c8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 24a3cc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 24a3d0: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a3d4: add x8, x8, #0xac8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2760)));
  /* 24a3d8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 24a3dc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 24a3e0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 24a3e4: tbz w8, #0, #0x24a424 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_24a424;
L_24a3e8:;
  /* 24a3e8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a3ec: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401264));
  fn2_1bc084(c);
  /* 24a3f0: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a3f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a3f8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 24a3fc: ldr x8, [x8, #0xac0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2752))));
  /* 24a400: mov w2, w19 */
  ARC_W_W(c, 2, ARC_W_R(c, 19));
  /* 24a404: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401288));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 24a408: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a40c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401296));
  fn2_1bc620(c);
  /* 24a410: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 24a414: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 24a418: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 24a41c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 24a420: ret  */
  return;
L_24a424:;
  /* 24a424: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a428: add x0, x0, #0xac8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2760)));
  /* 24a42c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401328));
  fn2_24b710(c);
  /* 24a430: cbz w0, #0x24a3e8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_24a3e8;
  /* 24a434: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24a438: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 24a43c: add x1, x1, #0x5ef */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1519)));
  /* 24a440: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 24a444: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a448: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 24a44c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 24a450: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401364));
  fn2_1b8fd4(c);
  /* 24a454: mov w1, #0x16e */
  ARC_W_W(c, 1, UINT64_C(366));
  /* 24a458: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a45c: movk w1, #0x9de0, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2648702976)));
  /* 24a460: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401380));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 24a464: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 24a468: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 24a46c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401392));
  fn2_1d2d24(c);
  /* 24a470: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24a474: add x0, x0, #0xac0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2752)));
  /* 24a478: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 24a47c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2401408));
  fn2_24b720(c);
  /* 24a480: b #0x24a3e8 */
  goto L_24a3e8;
}

void fn2_24b750(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078262096));
  /* 24b750: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b754: ldr x17, [x16, #0xaf0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2800))));
  /* 24b758: add x16, x16, #0xaf0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2800)));
  /* 24b75c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

void fn2_24b950(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078262608));
  /* 24b950: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b954: ldr x17, [x16, #0xbf0] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3056))));
  /* 24b958: add x16, x16, #0xbf0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3056)));
  /* 24b95c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

