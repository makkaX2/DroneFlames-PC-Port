#include "lifted.h"
#include "df_lse.h"

void fn2_9b2e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076491496));
  /* 9b2e8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 9b2ec: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9b2f0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9b2f4: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 9b2f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9b2fc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9b300: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 9b304: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9b308: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635660));
  fn2_1bc25c(c);
  /* 9b30c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 9b310: add x1, x1, #0x82d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2093)));
  /* 9b314: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9b318: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635676));
  fn2_1b7d24(c);
  /* 9b31c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9b320: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 9b324: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635688));
  fn2_1bc2f8(c);
  /* 9b328: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9b32c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635696));
  fn2_1ccd9c(c);
  /* 9b330: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 9b334: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9b338: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635708));
  fn2_1bbfa0(c);
  /* 9b33c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9b340: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635716));
  fn2_1bcf04(c);
  /* 9b344: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9b348: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635724));
  fn2_1bc620(c);
  /* 9b34c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9b350: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635732));
  fn2_1bc620(c);
  /* 9b354: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9b358: bl #0x9af00 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635740));
  fn2_9af00(c);
  /* 9b35c: bl #0xb8ac0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635744));
  fn2_b8ac0(c);
  /* 9b360: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9b364: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 9b368: add x1, x1, #0xb5e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2910)));
  /* 9b36c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9b370: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 9b374: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635768));
  fn2_1b8fd4(c);
  /* 9b378: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9b37c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 9b380: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635780));
  fn2_1bc44c(c);
  /* 9b384: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9b388: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9b38c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 9b390: str x20, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 20));
  /* 9b394: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635800));
  fn2_221204(c);
  /* 9b398: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 9b39c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635808));
  fn2_1bc620(c);
  /* 9b3a0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 9b3a4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(635816));
  fn2_1d2d24(c);
  /* 9b3a8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9b3ac: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9b3b0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 9b3b4: ret  */
  return;
}

void fn2_9e468(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076504168));
  /* 9e468: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 9e46c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9e470: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 9e474: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9e478: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 9e47c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 9e480: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 9e484: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 9e488: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* 9e48c: bl #0xaec88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648336));
  fn2_aec88(c);
  /* 9e490: ldur x21, [x29, #-8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9e494: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 9e498: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648348));
  fn2_2258f4(c);
  /* 9e49c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 9e4a0: ldr x0, [x21, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 9e4a4: tbz w8, #0, #0x9e4c4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_9e4c4;
  /* 9e4a8: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* 9e4ac: b.eq #0x9e500 */
  if (ARC_COND(c, 0)) goto L_9e500;
  /* 9e4b0: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
  /* 9e4b4: cbnz x0, #0x9e4cc */
  if ((ARC_X_R(c, 0)) != 0) goto L_9e4cc;
  /* 9e4b8: str x21, [x21, #0x18] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)), ARC_X_R(c, 21));
  /* 9e4bc: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
  /* 9e4c0: b #0x9e4f4 */
  goto L_9e4f4;
L_9e4c4:;
  /* 9e4c4: cbz x0, #0x9e520 */
  if ((ARC_X_R(c, 0)) == 0) goto L_9e520;
  /* 9e4c8: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_9e4cc:;
  /* 9e4cc: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648400));
  fn2_225abc(c);
  /* 9e4d0: tbz w0, #0, #0x9e4ec */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9e4ec;
  /* 9e4d4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 9e4d8: ldr x8, [x21, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 9e4dc: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 9e4e0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9e4e4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 9e4e8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648428));
  arc_dispatch(c, ARC_X_R(c, 9));
L_9e4ec:;
  /* 9e4ec: str x22, [x21, #0x18] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(24)), ARC_X_R(c, 22));
  /* 9e4f0: cbz x22, #0x9e520 */
  if ((ARC_X_R(c, 22)) == 0) goto L_9e520;
L_9e4f4:;
  /* 9e4f4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 9e4f8: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648444));
  fn2_2259d8(c);
  /* 9e4fc: mov x21, x22 */
  ARC_X_W(c, 21, ARC_X_R(c, 22));
L_9e500:;
  /* 9e500: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 9e504: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648456));
  fn2_225abc(c);
  /* 9e508: tbz w0, #0, #0x9e520 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9e520;
  /* 9e50c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 9e510: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 9e514: ldr x0, [x21, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 9e518: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 9e51c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648480));
  arc_dispatch(c, ARC_X_R(c, 8));
L_9e520:;
  /* 9e520: ldur x1, [x29, #-8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9e524: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9e528: bl #0x9c4d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648492));
  fn2_9c4d8(c);
  /* 9e52c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9e530: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9e534: bl #0x9e5ac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648504));
  fn2_9e5ac(c);
  /* 9e538: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9e53c: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648512));
  fn2_1d79fc(c);
  /* 9e540: ldur x20, [x29, #-8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9e544: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 9e548: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* 9e54c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9e550: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 9e554: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648536));
  fn2_1b8fd4(c);
  /* 9e558: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 9e55c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9e560: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 9e564: bl #0x1d85d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648552));
  fn2_1d85d0(c);
  /* 9e568: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 9e56c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648560));
  fn2_1d2d24(c);
  /* 9e570: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9e574: cbz x0, #0x9e598 */
  if ((ARC_X_R(c, 0)) == 0) goto L_9e598;
  /* 9e578: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648572));
  fn2_225abc(c);
  /* 9e57c: tbz w0, #0, #0x9e598 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_9e598;
  /* 9e580: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 9e584: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 9e588: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 9e58c: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 9e590: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 9e594: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(648600));
  arc_dispatch(c, ARC_X_R(c, 9));
L_9e598:;
  /* 9e598: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9e59c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 9e5a0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9e5a4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 9e5a8: ret  */
  return;
}

void fn2_a70fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076540156));
  /* a70fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a7100: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a7104: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7108: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a710c: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* a7110: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* a7114: add x8, x8, #0x9d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2520)));
  /* a7118: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a711c: cbz x0, #0xa7140 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a7140;
  /* a7120: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(684324));
  fn2_225abc(c);
  /* a7124: tbz w0, #0, #0xa7140 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a7140;
  /* a7128: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a712c: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a7130: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* a7134: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* a7138: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* a713c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(684352));
  arc_dispatch(c, ARC_X_R(c, 9));
L_a7140:;
  /* a7140: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a7144: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a7148: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a714c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_a7f0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076543756));
  /* a7f0c: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* a7f10: add x8, x8, #0xb40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2880)));
  /* a7f14: str x8, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a7f18: b #0x1d79fc */
  fn2_1d79fc(c); return;
}

void fn2_a8b8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076546956));
  /* a8b8c: sub sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(208)));
  /* a8b90: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a8b94: stp x22, x21, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a8b98: stp x20, x19, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8b9c: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* a8ba0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a8ba4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8ba8: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* a8bac: mov w22, w2 */
  ARC_W_W(c, 22, ARC_W_R(c, 2));
  /* a8bb0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a8bb4: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* a8bb8: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691132));
  fn2_1bc084(c);
  /* a8bbc: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8bc0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a8bc4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691144));
  fn2_1bcf04(c);
  /* a8bc8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8bcc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691152));
  fn2_1bc620(c);
  /* a8bd0: ldr x21, [x19, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* a8bd4: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* a8bd8: b.lt #0xa8bec */
  if (ARC_COND(c, 11)) goto L_a8bec;
  /* a8bdc: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* a8be0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8be4: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691176));
  fn2_1bc0b8(c);
  /* a8be8: b #0xa8bf4 */
  goto L_a8bf4;
L_a8bec:;
  /* a8bec: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8bf0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691188));
  fn2_1bc084(c);
L_a8bf4:;
  /* a8bf4: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a8bf8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8bfc: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691200));
  fn2_1bccb8(c);
  /* a8c00: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8c04: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691208));
  fn2_1bc620(c);
  /* a8c08: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* a8c0c: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* a8c10: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8c14: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691224));
  fn2_1b7d24(c);
  /* a8c18: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8c1c: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8c20: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691236));
  fn2_1bc2f8(c);
  /* a8c24: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8c28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691244));
  fn2_1ccd9c(c);
  /* a8c2c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a8c30: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8c34: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691256));
  fn2_1bbfa0(c);
  /* a8c38: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691260));
  fn2_1bc668(c);
  /* a8c3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a8c40: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8c44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691272));
  fn2_1bc620(c);
  /* a8c48: cbz x20, #0xa8c64 */
  if ((ARC_X_R(c, 20)) == 0) goto L_a8c64;
  /* a8c4c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a8c50: ldr x8, [x8, #0xf98] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3992))));
  /* a8c54: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* a8c58: cbz x0, #0xa8c64 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8c64;
  /* a8c5c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a8c60: bl #0xcaa70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691300));
  fn2_caa70(c);
L_a8c64:;
  /* a8c64: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a8c68: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a8c6c: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* a8c70: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8c74: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* a8c78: b.ne #0xa8dbc */
  if (ARC_COND(c, 1)) goto L_a8dbc;
  /* a8c7c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691328));
  fn2_1b7d24(c);
  /* a8c80: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8c84: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8c88: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691340));
  fn2_1bc2f8(c);
  /* a8c8c: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8c90: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691348));
  fn2_1ccd9c(c);
  /* a8c94: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a8c98: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8c9c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691360));
  fn2_1bbfa0(c);
  /* a8ca0: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* a8ca4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a8ca8: bl #0x9da88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691372));
  fn2_9da88(c);
  /* a8cac: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8cb0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691380));
  fn2_1bc620(c);
  /* a8cb4: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a8cb8: add x1, x1, #0x137 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(311)));
  /* a8cbc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8cc0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691396));
  fn2_1b7d24(c);
  /* a8cc4: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8cc8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8ccc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691408));
  fn2_1bc2f8(c);
  /* a8cd0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8cd4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691416));
  fn2_1ccd9c(c);
  /* a8cd8: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8cdc: add x1, x21, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(56)));
  /* a8ce0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691428));
  fn2_1bc2f8(c);
  /* a8ce4: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8ce8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* a8cec: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8cf0: add x2, sp, #0x48 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(72)));
  /* a8cf4: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691448));
  fn2_1d9c5c(c);
  /* a8cf8: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* a8cfc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8d00: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691460));
  fn2_1bc84c(c);
  /* a8d04: add x0, x21, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(56)));
  /* a8d08: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a8d0c: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691472));
  fn2_1d0708(c);
  /* a8d10: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a8d14: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691480));
  fn2_1ccd9c(c);
  /* a8d18: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8d1c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691488));
  fn2_1bc620(c);
  /* a8d20: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8d24: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691496));
  fn2_1bc620(c);
  /* a8d28: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8d2c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691504));
  fn2_1bc620(c);
  /* a8d30: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8d34: add x1, x19, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* a8d38: strb wzr, [x21, #0x40] */
  arc_st8((ARC_X_R(c, 21) + INT64_C(64)), ARC_W_R(c, 31));
  /* a8d3c: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691520));
  fn2_1d788c(c);
  /* a8d40: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a8d44: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691528));
  fn2_220748(c);
  /* a8d48: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* a8d4c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* a8d50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a8d54: mov w0, #0x20 */
  ARC_W_W(c, 0, UINT64_C(32));
  /* a8d58: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* a8d5c: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691552));
  fn2_1b5d1c(c);
  /* a8d60: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a8d64: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8d68: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* a8d6c: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691568));
  fn2_1d788c(c);
  /* a8d70: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* a8d74: add x8, x8, #0xd20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3360)));
  /* a8d78: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* a8d7c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8d80: stp x8, x19, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a8d84: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691592));
  fn2_1d788c(c);
  /* a8d88: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8d8c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a8d90: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691604));
  fn2_1b75a4(c);
  /* a8d94: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8d98: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691612));
  fn2_1d79fc(c);
  /* a8d9c: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8da0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a8da4: bl #0x9e5ac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691624));
  fn2_9e5ac(c);
  /* a8da8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8dac: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691632));
  fn2_1d79fc(c);
  /* a8db0: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8db4: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691640));
  fn2_1d79fc(c);
  /* a8db8: b #0xa9184 */
  goto L_a9184;
L_a8dbc:;
  /* a8dbc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691648));
  fn2_1b7d24(c);
  /* a8dc0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8dc4: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8dc8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691660));
  fn2_1bc2f8(c);
  /* a8dcc: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8dd0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691668));
  fn2_1ccd9c(c);
  /* a8dd4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a8dd8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8ddc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691680));
  fn2_1bbfa0(c);
  /* a8de0: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691684));
  fn2_1bcc90(c);
  /* a8de4: cmp w0, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(27));
  /* a8de8: b.ne #0xa8ec4 */
  if (ARC_COND(c, 1)) goto L_a8ec4;
  /* a8dec: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a8df0: add x1, x1, #0x1db */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(475)));
  /* a8df4: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8df8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691708));
  fn2_1b7d24(c);
  /* a8dfc: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8e00: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8e04: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691720));
  fn2_1bc2f8(c);
  /* a8e08: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8e0c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691728));
  fn2_1ccd9c(c);
  /* a8e10: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a8e14: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* a8e18: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691740));
  fn2_1bbfa0(c);
  /* a8e1c: sub x8, x29, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a8e20: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691748));
  fn2_1bccb8(c);
  /* a8e24: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* a8e28: add x1, x1, #0xc7c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3196)));
  /* a8e2c: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8e30: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691764));
  fn2_1b7d24(c);
  /* a8e34: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a8e38: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8e3c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691776));
  fn2_1bc2f8(c);
  /* a8e40: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8e44: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691784));
  fn2_1ccd9c(c);
  /* a8e48: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* a8e4c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* a8e50: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8e54: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691800));
  fn2_1b7d24(c);
  /* a8e58: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* a8e5c: sub x1, x29, #0x38 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8e60: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691812));
  fn2_1bc2f8(c);
  /* a8e64: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8e68: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691820));
  fn2_1ccd9c(c);
  /* a8e6c: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8e70: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a8e74: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a8e78: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* a8e7c: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691840));
  fn2_1d9c5c(c);
  /* a8e80: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* a8e84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691848));
  fn2_1bc620(c);
  /* a8e88: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a8e8c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691856));
  fn2_1bc620(c);
  /* a8e90: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a8e94: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691864));
  fn2_1d97fc(c);
  /* a8e98: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8e9c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691872));
  fn2_1bc620(c);
  /* a8ea0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8ea4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691880));
  fn2_1bc620(c);
  /* a8ea8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8eac: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691888));
  fn2_1bcc90(c);
  /* a8eb0: cmp w0, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(4));
  /* a8eb4: b.eq #0xa8f00 */
  if (ARC_COND(c, 0)) goto L_a8f00;
L_a8eb8:;
  /* a8eb8: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a8ebc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691904));
  fn2_1ccc74(c);
  /* a8ec0: b #0xa8f0c */
  goto L_a8f0c;
L_a8ec4:;
  /* a8ec4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* a8ec8: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* a8ecc: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8ed0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691924));
  fn2_1b7d24(c);
  /* a8ed4: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8ed8: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* a8edc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691936));
  fn2_1bc2f8(c);
  /* a8ee0: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8ee4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691944));
  fn2_1ccd9c(c);
  /* a8ee8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8eec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691952));
  fn2_1bc620(c);
  /* a8ef0: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8ef4: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691960));
  fn2_1bcc90(c);
  /* a8ef8: cmp w0, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(4));
  /* a8efc: b.ne #0xa8eb8 */
  if (ARC_COND(c, 1)) goto L_a8eb8;
L_a8f00:;
  /* a8f00: sub x8, x29, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a8f04: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a8f08: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691980));
  fn2_1bc84c(c);
L_a8f0c:;
  /* a8f0c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* a8f10: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(691988));
  fn2_1ccc74(c);
  /* a8f14: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* a8f18: add x1, x1, #0x975 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2421)));
  /* a8f1c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a8f20: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692004));
  fn2_1b865c(c);
  /* a8f24: tbz w0, #0, #0xa8f34 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a8f34;
  /* a8f28: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* a8f2c: add x1, x1, #0x3a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(58)));
  /* a8f30: b #0xa8f70 */
  goto L_a8f70;
L_a8f34:;
  /* a8f34: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* a8f38: add x1, x1, #0x799 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1945)));
  /* a8f3c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a8f40: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692036));
  fn2_1b865c(c);
  /* a8f44: tbz w0, #0, #0xa8f54 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a8f54;
  /* a8f48: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a8f4c: add x1, x1, #0x137 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(311)));
  /* a8f50: b #0xa8f70 */
  goto L_a8f70;
L_a8f54:;
  /* a8f54: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* a8f58: add x1, x1, #0x425 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1061)));
  /* a8f5c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a8f60: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692068));
  fn2_1b865c(c);
  /* a8f64: tbz w0, #0, #0xa8f78 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_a8f78;
  /* a8f68: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* a8f6c: add x1, x1, #0xb9a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2970)));
L_a8f70:;
  /* a8f70: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* a8f74: bl #0x1b852c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692088));
  fn2_1b852c(c);
L_a8f78:;
  /* a8f78: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a8f7c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692096));
  fn2_1d9740(c);
  /* a8f80: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8f84: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* a8f88: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692108));
  fn2_1bc25c(c);
  /* a8f8c: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* a8f90: add x1, x1, #0x134 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(308)));
  /* a8f94: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a8f98: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692124));
  fn2_1b7d24(c);
  /* a8f9c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8fa0: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a8fa4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692136));
  fn2_1bc2f8(c);
  /* a8fa8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a8fac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692144));
  fn2_1ccd9c(c);
  /* a8fb0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a8fb4: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* a8fb8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692156));
  fn2_1bbfa0(c);
  /* a8fbc: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8fc0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692164));
  fn2_1bcf04(c);
  /* a8fc4: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8fc8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692172));
  fn2_1bc620(c);
  /* a8fcc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8fd0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692180));
  fn2_1bc620(c);
  /* a8fd4: adrp x21, #0x26000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(155648)));
  /* a8fd8: add x21, x21, #0xf36 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(3894)));
  /* a8fdc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8fe0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a8fe4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692200));
  fn2_1b7d24(c);
  /* a8fe8: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a8fec: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8ff0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692212));
  fn2_1bc2f8(c);
  /* a8ff4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a8ff8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692220));
  fn2_1ccd9c(c);
  /* a8ffc: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a9000: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* a9004: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692232));
  fn2_1bbfa0(c);
  /* a9008: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* a900c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692240));
  fn2_1bc84c(c);
  /* a9010: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9014: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* a9018: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692252));
  fn2_1bc2f8(c);
  /* a901c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* a9020: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a9024: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692264));
  fn2_1b7d24(c);
  /* a9028: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a902c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* a9030: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692276));
  fn2_1bc2f8(c);
  /* a9034: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* a9038: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692284));
  fn2_1ccd9c(c);
  /* a903c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9040: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a9044: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692296));
  fn2_1bbfa0(c);
  /* a9048: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a904c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692304));
  fn2_1bcf04(c);
  /* a9050: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a9054: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692312));
  fn2_1bc620(c);
  /* a9058: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a905c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692320));
  fn2_1bc620(c);
  /* a9060: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* a9064: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692328));
  fn2_1ccd9c(c);
  /* a9068: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a906c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692336));
  fn2_1bc620(c);
  /* a9070: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9074: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* a9078: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692348));
  fn2_1bc2f8(c);
  /* a907c: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* a9080: add x1, x1, #0x764 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1892)));
  /* a9084: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a9088: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692364));
  fn2_1b7d24(c);
  /* a908c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a9090: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a9094: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692376));
  fn2_1bc2f8(c);
  /* a9098: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a909c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692384));
  fn2_1ccd9c(c);
  /* a90a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a90a4: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* a90a8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692396));
  fn2_1bbfa0(c);
  /* a90ac: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a90b0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692404));
  fn2_1bcf04(c);
  /* a90b4: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a90b8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692412));
  fn2_1bc620(c);
  /* a90bc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a90c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692420));
  fn2_1bc620(c);
  /* a90c4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a90c8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* a90cc: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a90d0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692436));
  fn2_1bc290(c);
  /* a90d4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* a90d8: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* a90dc: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a90e0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692452));
  fn2_1b7d24(c);
  /* a90e4: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a90e8: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a90ec: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692464));
  fn2_1bc2f8(c);
  /* a90f0: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* a90f4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692472));
  fn2_1ccd9c(c);
  /* a90f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a90fc: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* a9100: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692484));
  fn2_1bbfa0(c);
  /* a9104: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9108: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692492));
  fn2_1bcf04(c);
  /* a910c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a9110: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692500));
  fn2_1bc620(c);
  /* a9114: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9118: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692508));
  fn2_1bc620(c);
  /* a911c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9120: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* a9124: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692520));
  fn2_1bc530(c);
  /* a9128: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a912c: str x20, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 20));
  /* a9130: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692532));
  fn2_1bc084(c);
  /* a9134: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* a9138: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* a913c: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* a9140: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* a9144: add x2, sp, #0x48 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(72)));
  /* a9148: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* a914c: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* a9150: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692564));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a9154: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* a9158: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692572));
  fn2_1bc620(c);
  /* a915c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* a9160: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692580));
  fn2_1bc620(c);
  /* a9164: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* a9168: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692588));
  fn2_1d97fc(c);
  /* a916c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* a9170: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692596));
  fn2_1ccd9c(c);
  /* a9174: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* a9178: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692604));
  fn2_1ccd9c(c);
  /* a917c: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* a9180: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692612));
  fn2_1bc620(c);
L_a9184:;
  /* a9184: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* a9188: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(692620));
  fn2_1d97fc(c);
  /* a918c: ldp x20, x19, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a9190: ldp x22, x21, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a9194: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a9198: add sp, sp, #0xd0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(208)));
  /* a919c: ret  */
  return;
}

void fn2_a9e54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076551764));
  /* a9e54: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a9e58: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a9e5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a9e60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a9e64: adrp x8, #0x24f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2420736)));
  /* a9e68: add x8, x8, #0xe10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3600)));
  /* a9e6c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a9e70: add x0, x0, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(48)));
  /* a9e74: str x8, [x20], #0x18 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* a9e78: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695932));
  fn2_1d79fc(c);
  /* a9e7c: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* a9e80: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695940));
  fn2_1dde08(c);
  /* a9e84: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a9e88: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(695948));
  fn2_1ccd9c(c);
  /* a9e8c: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* a9e90: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a9e94: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a9e98: b #0x1ccd9c */
  fn2_1ccd9c(c); return;
}

void fn2_aa3b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076553136));
  /* aa3b0: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* aa3b4: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* aa3b8: ret  */
  return;
}

void fn2_aae78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076555896));
  /* aae78: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* aae7c: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* aae80: ret  */
  return;
}

void fn2_abd88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076559752));
  /* abd88: adrp x0, #0xac000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(704512)));
  /* abd8c: add x0, x0, #0x79c */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1948)));
  /* abd90: ret  */
  return;
}

void fn2_acb84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076563332));
  /* acb84: adrp x0, #0xac000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(704512)));
  /* acb88: add x0, x0, #0xbdc */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3036)));
  /* acb8c: ret  */
  return;
}

void fn2_ad638(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076566072));
  /* ad638: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* ad63c: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* ad640: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* ad644: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_ae08c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076568716));
  /* ae08c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ae090: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ae094: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ae098: add x8, x8, #0xd68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3432)));
  /* ae09c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ae0a0: tbnz w8, #0, #0xae0d0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ae0d0;
  /* ae0a4: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ae0a8: add x0, x0, #0xd68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3432)));
  /* ae0ac: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(712880));
  fn2_24b710(c);
  /* ae0b0: cbz w0, #0xae0d0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_ae0d0;
  /* ae0b4: nop  */
  /* nop: no architectural effect here */
  /* ae0b8: adr x0, #0xb0bd8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(723928)));
  /* ae0bc: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(712896));
  fn2_1aff64(c);
  /* ae0c0: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* ae0c4: add x0, x0, #0xd68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3432)));
  /* ae0c8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ae0cc: b #0x24b720 */
  fn2_24b720(c); return;
L_ae0d0:;
  /* ae0d0: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ae0d4: ret  */
  return;
}

void fn2_ae9b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076571064));
  /* ae9b8: add x0, x0, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(96)));
  /* ae9bc: b #0x1dc718 */
  fn2_1dc718(c); return;
}

void fn2_af870(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076574832));
  /* af870: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* af874: ret  */
  return;
}

void fn2_b018c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076577164));
  /* b018c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0190: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b0194: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0198: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* b019c: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* b01a0: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* b01a4: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* b01a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(721324));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b01ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b01b0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* b01b4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b01b8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b01bc: b #0x1b5ce8 */
  fn2_1b5ce8(c); return;
}

void fn2_b0bd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076579800));
  /* b0bd8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0bdc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b0be0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0be4: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b0be8: add x8, x8, #0xea0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3744)));
  /* b0bec: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b0bf0: tbz w8, #0, #0xb0c10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b0c10;
L_b0bf4:;
  /* b0bf4: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b0bf8: add x0, x0, #0xe98 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3736)));
  /* b0bfc: adrp x1, #0x250000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2424832)));
  /* b0c00: add x1, x1, #0x9d8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2520)));
  /* b0c04: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b0c08: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b0c0c: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_b0c10:;
  /* b0c10: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b0c14: add x0, x0, #0xea0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3744)));
  /* b0c18: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(723996));
  fn2_24b710(c);
  /* b0c1c: cbz w0, #0xb0bf4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b0bf4;
  /* b0c20: adrp x19, #0x25c000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b0c24: add x19, x19, #0xe98 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) + UINT64_C(3736)));
  /* b0c28: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* b0c2c: add x1, x1, #0xc77 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3191)));
  /* b0c30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b0c34: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* b0c38: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(724028));
  fn2_1b8fd4(c);
  /* b0c3c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* b0c40: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* b0c44: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* b0c48: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* b0c4c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0c50: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(724052));
  fn2_24b6f0(c);
  /* b0c54: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b0c58: add x0, x0, #0xea0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3744)));
  /* b0c5c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(724064));
  fn2_24b720(c);
  /* b0c60: b #0xb0bf4 */
  goto L_b0bf4;
}

void fn2_b19fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076583420));
  /* b19fc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b1a00: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b1a04: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b1a08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b1a0c: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(727568));
  fn2_1b6040(c);
  /* b1a10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b1a14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b1a18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b1a1c: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b2aac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076587692));
  /* b2aac: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b2ab0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b2ab4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b2ab8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b2abc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b2ac0: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* b2ac4: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* b2ac8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b2acc: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* b2ad0: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* b2ad4: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731864));
  fn2_1b5d1c(c);
  /* b2ad8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* b2adc: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* b2ae0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b2ae4: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* b2ae8: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b2aec: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* b2af0: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b2af4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731896));
  fn2_1d2c2c(c);
  /* b2af8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b2afc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731904));
  fn2_1d2c2c(c);
  /* b2b00: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* b2b04: adrp x8, #0x250000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2424832)));
  /* b2b08: add x8, x8, #0xd00 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3328)));
  /* b2b0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2b10: mov w1, #3 */
  ARC_W_W(c, 1, UINT64_C(3));
  /* b2b14: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* b2b18: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b2b1c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b2b20: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* b2b24: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* b2b28: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* b2b2c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* b2b30: mov w20, #3 */
  ARC_W_W(c, 20, UINT64_C(3));
  /* b2b34: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731960));
  fn2_1b5e68(c);
  /* b2b38: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2b3c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b2b40: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* b2b44: bl #0x1b5d9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(731976));
  fn2_1b5d9c(c);
  /* b2b48: adrp x8, #0x25c000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2b4c: add x8, x8, #0xdb0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3504)));
  /* b2b50: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* b2b54: tbz w8, #0, #0xb2b90 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b2b90;
L_b2b58:;
  /* b2b58: adrp x1, #0x25c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2b5c: add x1, x1, #0xda8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3496)));
  /* b2b60: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b2b64: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(732008));
  fn2_1d2c40(c);
  /* b2b68: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* b2b6c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b2b70: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(732020));
  fn2_1d5dc0(c);
  /* b2b74: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b2b78: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(732028));
  fn2_1d2d24(c);
  /* b2b7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b2b80: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b2b84: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b2b88: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b2b8c: ret  */
  return;
L_b2b90:;
  /* b2b90: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2b94: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b2b98: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(732060));
  fn2_24b710(c);
  /* b2b9c: cbz w0, #0xb2b58 */
  if ((ARC_W_R(c, 0)) == 0) goto L_b2b58;
  /* b2ba0: adrp x20, #0x25c000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2ba4: add x20, x20, #0xda8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(3496)));
  /* b2ba8: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* b2bac: add x1, x1, #0x51c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1308)));
  /* b2bb0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b2bb4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(732088));
  fn2_1b907c(c);
  /* b2bb8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* b2bbc: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* b2bc0: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* b2bc4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* b2bc8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b2bcc: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(732112));
  fn2_24b6f0(c);
  /* b2bd0: adrp x0, #0x25c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2473984)));
  /* b2bd4: add x0, x0, #0xdb0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3504)));
  /* b2bd8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(732124));
  fn2_24b720(c);
  /* b2bdc: b #0xb2b58 */
  goto L_b2b58;
}

void fn2_b3f64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076592996));
  /* b3f64: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* b3f68: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* b3f6c: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* b3f70: lsl w8, w8, #2 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* b3f74: csel w0, wzr, w8, lt */
  ARC_W_W(c, 0, (ARC_COND(c, 11) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* b3f78: ret  */
  return;
}

void fn2_b5390(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076598160));
  /* b5390: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b5394: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b5398: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* b539c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b53a0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* b53a4: ldp x21, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b53a8: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* b53ac: add x20, x1, x8, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* b53b0: tbz w8, #0, #0xb53bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_b53bc;
  /* b53b4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b53b8: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_b53bc:;
  /* b53bc: ldr x1, [x2] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 2)));
  /* b53c0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b53c4: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(742344));
  fn2_1ccc88(c);
  /* b53c8: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b53cc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b53d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b53d4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(742360));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* b53d8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b53dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b53e0: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(742372));
  fn2_1d06b8(c);
  /* b53e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* b53e8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(742380));
  fn2_1ccd9c(c);
  /* b53ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b53f0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(742388));
  fn2_1ccd9c(c);
  /* b53f4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b53f8: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* b53fc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b5400: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b5404: ret  */
  return;
}

void fn2_b64bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076602556));
  /* b64bc: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b64c0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* b64c4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b64c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b64cc: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(746704));
  fn2_1b6040(c);
  /* b64d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b64d4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* b64d8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b64dc: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_b7580(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076606848));
  /* b7580: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b7584: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* b7588: tbz w9, #0, #0xb7594 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_b7594;
  /* b758c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* b7590: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_b7594:;
  /* b7594: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* b7598: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b759c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* b75a0: ldr x9, [x2] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 2)));
  /* b75a4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* b75a8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* b75ac: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* b75b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(751028));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b75b4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b75b8: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* b75bc: ret  */
  return;
}

void fn2_b9098(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076613784));
  /* b9098: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* b909c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b90a0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b90a4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* b90a8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* b90ac: bl #0x21a330 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757936));
  fn2_21a330(c);
  /* b90b0: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b90b4: bl #0x21db64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757944));
  fn2_21db64(c);
  /* b90b8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b90bc: bl #0x1ce4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757952));
  fn2_1ce4a4(c);
  /* b90c0: tbnz w0, #0, #0xb90d8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_b90d8;
  /* b90c4: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* b90c8: add x1, x1, #0xbe2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3042)));
  /* b90cc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b90d0: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757972));
  fn2_1b865c(c);
  /* b90d4: tbz w0, #0, #0xb90f8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_b90f8;
L_b90d8:;
  /* b90d8: bl #0x21a330 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757980));
  fn2_21a330(c);
  /* b90dc: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* b90e0: bl #0x21cd58 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(757988));
  fn2_21cd58(c);
  /* b90e4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b90e8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* b90ec: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758000));
  fn2_1d0708(c);
  /* b90f0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b90f4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758008));
  fn2_1ccd9c(c);
L_b90f8:;
  /* b90f8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b90fc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758016));
  fn2_1ccc74(c);
  /* b9100: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* b9104: add x1, x1, #0xed3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3795)));
  /* b9108: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b910c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758032));
  fn2_1b7d24(c);
  /* b9110: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b9114: bl #0x1ccef8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758040));
  fn2_1ccef8(c);
  /* b9118: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* b911c: b.lt #0xb9188 */
  if (ARC_COND(c, 11)) goto L_b9188;
  /* b9120: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* b9124: b #0xb9150 */
  goto L_b9150;
L_b9128:;
  /* b9128: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b912c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* b9130: bl #0x1b8a30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758068));
  fn2_1b8a30(c);
L_b9134:;
  /* b9134: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b9138: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758076));
  fn2_1ccd9c(c);
  /* b913c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b9140: add x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* b9144: bl #0x1ccef8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758088));
  fn2_1ccef8(c);
  /* b9148: cmp x20, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* b914c: b.ge #0xb9188 */
  if (ARC_COND(c, 10)) goto L_b9188;
L_b9150:;
  /* b9150: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b9154: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b9158: bl #0x1b8b30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758108));
  fn2_1b8b30(c);
  /* b915c: ldr w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* b9160: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* b9164: bl #0x1cf454 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758120));
  fn2_1cf454(c);
  /* b9168: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b916c: bl #0xb96ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758128));
  fn2_b96ec(c);
  /* b9170: tbnz w0, #0, #0xb9128 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_b9128;
  /* b9174: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b9178: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* b917c: bl #0x1ce4e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758144));
  fn2_1ce4e0(c);
  /* b9180: tbnz w0, #0, #0xb9128 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_b9128;
  /* b9184: b #0xb9134 */
  goto L_b9134;
L_b9188:;
  /* b9188: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* b918c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b9190: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b9194: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* b9198: bl #0x1cde7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758172));
  fn2_1cde7c(c);
  /* b919c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b91a0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* b91a4: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758184));
  fn2_1d0708(c);
  /* b91a8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b91ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758192));
  fn2_1ccd9c(c);
  /* b91b0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b91b4: bl #0x1ce4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758200));
  fn2_1ce4a4(c);
  /* b91b8: tbnz w0, #0, #0xb91ec */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_b91ec;
  /* b91bc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b91c0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* b91c4: bl #0x1b8b30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758216));
  fn2_1b8b30(c);
  /* b91c8: ldr w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* b91cc: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* b91d0: bl #0x1cf454 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758228));
  fn2_1cf454(c);
  /* b91d4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b91d8: bl #0xb96ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758236));
  fn2_b96ec(c);
  /* b91dc: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* b91e0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b91e4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758248));
  fn2_1ccd9c(c);
  /* b91e8: tbnz w20, #0, #0xb9214 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) != 0) goto L_b9214;
L_b91ec:;
  /* b91ec: adrp x0, #0x1b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(110592)));
  /* b91f0: add x0, x0, #0x3a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(929)));
  /* b91f4: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* b91f8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* b91fc: bl #0x1b8e18 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758272));
  fn2_1b8e18(c);
  /* b9200: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b9204: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* b9208: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758284));
  fn2_1d0708(c);
  /* b920c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b9210: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758292));
  fn2_1ccd9c(c);
L_b9214:;
  /* b9214: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* b9218: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b921c: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b9220: bl #0x1cdd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758308));
  fn2_1cdd9c(c);
  /* b9224: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b9228: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* b922c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* b9230: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* b9234: bl #0x1cde7c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758328));
  fn2_1cde7c(c);
  /* b9238: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* b923c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758336));
  fn2_1ccd9c(c);
  /* b9240: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* b9244: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758344));
  fn2_1ccd9c(c);
  /* b9248: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* b924c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758352));
  fn2_1ccd9c(c);
  /* b9250: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* b9254: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(758360));
  fn2_1ccd9c(c);
  /* b9258: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b925c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b9260: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* b9264: ret  */
  return;
}

void fn2_bcd6c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076629356));
  /* bcd6c: adrp x0, #0xbc000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(770048)));
  /* bcd70: add x0, x0, #0xdc4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3524)));
  /* bcd74: ret  */
  return;
}

void fn2_bd788(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076631944));
  /* bd788: adrp x0, #0xbd000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(774144)));
  /* bd78c: add x0, x0, #0xa68 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2664)));
  /* bd790: ret  */
  return;
}

void fn2_be07c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076634236));
  /* be07c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* be080: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* be084: add x1, x1, #0x37b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(891)));
  /* be088: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_beef8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076637944));
  /* beef8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* beefc: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bef00: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bef04: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bef08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bef0c: ldr x0, [x0, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(112))));
  /* bef10: cbz x0, #0xbef1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_bef1c;
  /* bef14: str x0, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 0));
  /* bef18: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782108));
  fn2_24b730(c);
L_bef1c:;
  /* bef1c: ldr x21, [x19, #0x50] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* bef20: cbz x21, #0xbef54 */
  if ((ARC_X_R(c, 21)) == 0) goto L_bef54;
  /* bef24: ldr x20, [x19, #0x58] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* bef28: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* bef2c: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* bef30: b.eq #0xbef4c */
  if (ARC_COND(c, 0)) goto L_bef4c;
L_bef34:;
  /* bef34: sub x20, x20, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* bef38: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bef3c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782144));
  fn2_1bc620(c);
  /* bef40: cmp x20, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 21));
  /* bef44: b.ne #0xbef34 */
  if (ARC_COND(c, 1)) goto L_bef34;
  /* bef48: ldr x0, [x19, #0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
L_bef4c:;
  /* bef4c: str x21, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 21));
  /* bef50: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782164));
  fn2_24b730(c);
L_bef54:;
  /* bef54: ldr x20, [x19, #0x38] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* bef58: cbz x20, #0xbefa0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_befa0;
  /* bef5c: ldr x21, [x19, #0x40] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* bef60: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* bef64: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* bef68: b.eq #0xbef98 */
  if (ARC_COND(c, 0)) goto L_bef98;
L_bef6c:;
  /* bef6c: sub x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) - UINT64_C(12)));
  /* bef70: sub x22, x21, #0x24 */
  ARC_X_W(c, 22, (ARC_X_R(c, 21) - UINT64_C(36)));
  /* bef74: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782200));
  fn2_1ccd9c(c);
  /* bef78: sub x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) - UINT64_C(24)));
  /* bef7c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782208));
  fn2_1d2d24(c);
  /* bef80: sub x0, x21, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) - UINT64_C(32)));
  /* bef84: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782216));
  fn2_1d2d24(c);
  /* bef88: cmp x22, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 20));
  /* bef8c: mov x21, x22 */
  ARC_X_W(c, 21, ARC_X_R(c, 22));
  /* bef90: b.ne #0xbef6c */
  if (ARC_COND(c, 1)) goto L_bef6c;
  /* bef94: ldr x0, [x19, #0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
L_bef98:;
  /* bef98: str x20, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 20));
  /* bef9c: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782240));
  fn2_24b730(c);
L_befa0:;
  /* befa0: add x0, x19, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(32)));
  /* befa4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782248));
  fn2_1ccd9c(c);
  /* befa8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* befac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782256));
  fn2_1d2d24(c);
  /* befb0: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* befb4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(782264));
  fn2_1d2d24(c);
  /* befb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* befbc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* befc0: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* befc4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* befc8: b #0x1d2d24 */
  fn2_1d2d24(c); return;
}

void fn2_bfb18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076641048));
  /* bfb18: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* bfb1c: ret  */
  return;
}

void fn2_c04f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076643576));
  /* c04f8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* c04fc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c0500: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c0504: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* c0508: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* c050c: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* c0510: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* c0514: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c0518: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* c051c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* c0520: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787748));
  fn2_1b8fd4(c);
  /* c0524: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* c0528: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c052c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787760));
  fn2_1b7d24(c);
  /* c0530: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c0534: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c0538: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* c053c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787776));
  fn2_1b8fd4(c);
  /* c0540: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* c0544: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* c0548: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787788));
  fn2_1d2c2c(c);
  /* c054c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* c0550: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787796));
  fn2_1d2c2c(c);
  /* c0554: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* c0558: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* c055c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787808));
  fn2_1ccc74(c);
  /* c0560: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* c0564: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* c0568: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* c056c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* c0570: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* c0574: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c0578: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787836));
  fn2_1d5dc0(c);
  /* c057c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* c0580: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* c0584: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* c0588: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787852));
  fn2_1d06b8(c);
  /* c058c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* c0590: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* c0594: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* c0598: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787868));
  fn2_1d5dc0(c);
  /* c059c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c05a0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787876));
  fn2_1d2d24(c);
  /* c05a4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* c05a8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787884));
  fn2_1ccd9c(c);
  /* c05ac: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* c05b0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(787892));
  fn2_1d2d24(c);
  /* c05b4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c05b8: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c05bc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* c05c0: ret  */
  return;
}

void fn2_c136c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076647276));
  /* c136c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* c1370: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c1374: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c1378: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c137c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c1380: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* c1384: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c1388: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* c138c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c1390: mov x21, x5 */
  ARC_X_W(c, 21, ARC_X_R(c, 5));
  /* c1394: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* c1398: mov x23, x3 */
  ARC_X_W(c, 23, ARC_X_R(c, 3));
  /* c139c: mov x24, x2 */
  ARC_X_W(c, 24, ARC_X_R(c, 2));
  /* c13a0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* c13a4: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791464));
  fn2_1d2c40(c);
  /* c13a8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c13ac: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c13b0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* c13b4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791480));
  fn2_1b8fd4(c);
  /* c13b8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* c13bc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* c13c0: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791492));
  fn2_1d2c40(c);
  /* c13c4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* c13c8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* c13cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* c13d0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791508));
  fn2_1b8fd4(c);
  /* c13d4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* c13d8: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* c13dc: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* c13e0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* c13e4: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* c13e8: bl #0xae7c0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791532));
  fn2_ae7c0(c);
  /* c13ec: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* c13f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791540));
  fn2_1d2d24(c);
  /* c13f4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* c13f8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791548));
  fn2_1d2d24(c);
  /* c13fc: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* c1400: add x22, x19, #8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* c1404: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791560));
  fn2_24b750(c);
  /* c1408: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* c140c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* c1410: stp xzr, xzr, [x0], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* c1414: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791576));
  fn2_1d2c40(c);
  /* c1418: ldp x8, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* c141c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c1420: stp x22, x8, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* c1424: str x21, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* c1428: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* c142c: stp x21, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* c1430: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791604));
  fn2_1d2d24(c);
  /* c1434: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* c1438: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791612));
  fn2_1d2d24(c);
  /* c143c: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* c1440: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791620));
  fn2_24b750(c);
  /* c1444: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c1448: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* c144c: stp xzr, xzr, [x0], #0x10 */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* c1450: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(791636));
  fn2_1d2c40(c);
  /* c1454: ldp x8, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* c1458: stp x22, x8, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* c145c: str x21, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* c1460: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* c1464: stp x21, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* c1468: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c146c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c1470: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c1474: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c1478: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* c147c: ret  */
  return;
}

void fn2_c30f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076654832));
  /* c30f0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* c30f4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c30f8: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* c30fc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c3100: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c3104: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* c3108: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* c310c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* c3110: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c3114: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* c3118: str xzr, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 31));
  /* c311c: bl #0xaec88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799008));
  fn2_aec88(c);
  /* c3120: ldr x22, [x29, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* c3124: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* c3128: bl #0x2258f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799020));
  fn2_2258f4(c);
  /* c312c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* c3130: ldr x0, [x22, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* c3134: tbz w8, #0, #0xc3154 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c3154;
  /* c3138: cmp x0, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22));
  /* c313c: b.eq #0xc3190 */
  if (ARC_COND(c, 0)) goto L_c3190;
  /* c3140: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* c3144: cbnz x0, #0xc315c */
  if ((ARC_X_R(c, 0)) != 0) goto L_c315c;
  /* c3148: str x22, [x22, #0x18] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(24)), ARC_X_R(c, 22));
  /* c314c: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* c3150: b #0xc3184 */
  goto L_c3184;
L_c3154:;
  /* c3154: cbz x0, #0xc31b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_c31b0;
  /* c3158: mov x23, xzr */
  ARC_X_W(c, 23, ARC_X_R(c, 31));
L_c315c:;
  /* c315c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799072));
  fn2_225abc(c);
  /* c3160: tbz w0, #0, #0xc317c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_c317c;
  /* c3164: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* c3168: ldr x8, [x22, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(24))));
  /* c316c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* c3170: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* c3174: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* c3178: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799100));
  arc_dispatch(c, ARC_X_R(c, 9));
L_c317c:;
  /* c317c: str x23, [x22, #0x18] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(24)), ARC_X_R(c, 23));
  /* c3180: cbz x23, #0xc31b0 */
  if ((ARC_X_R(c, 23)) == 0) goto L_c31b0;
L_c3184:;
  /* c3184: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c3188: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799116));
  fn2_2259d8(c);
  /* c318c: mov x22, x23 */
  ARC_X_W(c, 22, ARC_X_R(c, 23));
L_c3190:;
  /* c3190: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* c3194: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799128));
  fn2_225abc(c);
  /* c3198: tbz w0, #0, #0xc31b0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_c31b0;
  /* c319c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* c31a0: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* c31a4: ldr x0, [x22, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* c31a8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* c31ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799152));
  arc_dispatch(c, ARC_X_R(c, 8));
L_c31b0:;
  /* c31b0: ldr x1, [x29, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* c31b4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c31b8: bl #0xc2fb4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799164));
  fn2_c2fb4(c);
  /* c31bc: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* c31c0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* c31c4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c31c8: bl #0xc3244 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799180));
  fn2_c3244(c);
  /* c31cc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c31d0: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799188));
  fn2_1d79fc(c);
  /* c31d4: ldr x20, [x29, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* c31d8: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* c31dc: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* c31e0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c31e4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* c31e8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799212));
  fn2_1b8fd4(c);
  /* c31ec: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* c31f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c31f4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c31f8: bl #0x1d85d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799228));
  fn2_1d85d0(c);
  /* c31fc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* c3200: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799236));
  fn2_1d2d24(c);
  /* c3204: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* c3208: cbz x0, #0xc322c */
  if ((ARC_X_R(c, 0)) == 0) goto L_c322c;
  /* c320c: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799248));
  fn2_225abc(c);
  /* c3210: tbz w0, #0, #0xc322c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_c322c;
  /* c3214: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* c3218: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* c321c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* c3220: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* c3224: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* c3228: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(799276));
  arc_dispatch(c, ARC_X_R(c, 9));
L_c322c:;
  /* c322c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c3230: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* c3234: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c3238: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c323c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* c3240: ret  */
  return;
}

void fn2_c60f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076667120));
  /* c60f0: ldr x0, [x0, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* c60f4: ret  */
  return;
}

void fn2_c7384(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076671876));
  /* c7384: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* c7388: ret  */
  return;
}

void fn2_c8754(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076676948));
  /* c8754: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c8758: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c875c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c8760: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c8764: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* c8768: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* c876c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* c8770: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* c8774: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* c8778: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* c877c: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* c8780: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* c8784: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(821128));
  fn2_1bc084(c);
  /* c8788: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* c878c: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* c8790: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* c8794: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* c8798: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* c879c: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* c87a0: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* c87a4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c87a8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c87ac: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c87b0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c87b4: b #0xc8838 */
  fn2_c8838(c); return;
}

void fn2_ca3c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076684224));
  /* ca3c0: sub sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(288)));
  /* ca3c4: stp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ca3c8: str x28, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), ARC_X_R(c, 28));
  /* ca3cc: stp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ca3d0: stp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ca3d4: stp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ca3d8: stp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ca3dc: add x29, sp, #0xc0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(192)));
  /* ca3e0: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* ca3e4: mov w23, w2 */
  ARC_W_W(c, 23, ARC_W_R(c, 2));
  /* ca3e8: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* ca3ec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ca3f0: bl #0xc96a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828404));
  fn2_c96a4(c);
  /* ca3f4: cbz x0, #0xca6ac */
  if ((ARC_X_R(c, 0)) == 0) goto L_ca6ac;
  /* ca3f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ca3fc: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* ca400: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ca404: bl #0xca6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828424));
  fn2_ca6f0(c);
  /* ca408: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* ca40c: add x1, x1, #0x97f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2431)));
  /* ca410: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca414: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828440));
  fn2_1b7d24(c);
  /* ca418: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ca41c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca420: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828452));
  fn2_1bc2f8(c);
  /* ca424: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca428: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828460));
  fn2_1ccd9c(c);
  /* ca42c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* ca430: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* ca434: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca438: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828476));
  fn2_1b7d24(c);
  /* ca43c: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca440: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca444: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828488));
  fn2_1bc2f8(c);
  /* ca448: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca44c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828496));
  fn2_1ccd9c(c);
  /* ca450: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca454: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* ca458: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ca45c: sub x2, x29, #0x58 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca460: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828516));
  fn2_1d9c5c(c);
  /* ca464: sub x8, x29, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* ca468: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca46c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828528));
  fn2_1bc84c(c);
  /* ca470: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* ca474: bl #0x1ce4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828536));
  fn2_1ce4a4(c);
  /* ca478: mov w24, w0 */
  ARC_W_W(c, 24, ARC_W_R(c, 0));
  /* ca47c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* ca480: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828548));
  fn2_1ccd9c(c);
  /* ca484: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca488: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828556));
  fn2_1bc620(c);
  /* ca48c: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca490: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828564));
  fn2_1bc620(c);
  /* ca494: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ca498: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828572));
  fn2_1bc620(c);
  /* ca49c: tbz w24, #0, #0xca50c */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_ca50c;
  /* ca4a0: tbz w23, #0, #0xca52c */
  if (((ARC_W_R(c, 23)) >> 0 & 1) == 0) goto L_ca52c;
  /* ca4a4: sub x8, x29, #0x58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca4a8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* ca4ac: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* ca4b0: bl #0xc9844 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828596));
  fn2_c9844(c);
  /* ca4b4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca4b8: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca4bc: sub x19, x29, #0x30 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca4c0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828612));
  fn2_1bc530(c);
  /* ca4c4: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* ca4c8: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* ca4cc: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828624));
  fn2_1bc084(c);
  /* ca4d0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* ca4d4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ca4d8: add x2, sp, #0x50 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(80)));
  /* ca4dc: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* ca4e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ca4e4: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* ca4e8: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* ca4ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828656));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ca4f0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca4f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828664));
  fn2_1bc620(c);
  /* ca4f8: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* ca4fc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828672));
  fn2_1bc620(c);
  /* ca500: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca504: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828680));
  fn2_1d97fc(c);
  /* ca508: b #0xca684 */
  goto L_ca684;
L_ca50c:;
  /* ca50c: sub x2, x29, #0x38 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* ca510: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ca514: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ca518: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* ca51c: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* ca520: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* ca524: bl #0xca7b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828712));
  fn2_ca7b4(c);
  /* ca528: b #0xca684 */
  goto L_ca684;
L_ca52c:;
  /* ca52c: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* ca530: add x1, x1, #0x6e7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1767)));
  /* ca534: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca538: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ca53c: sub x26, x29, #0x30 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca540: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828740));
  fn2_1b8fd4(c);
  /* ca544: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca548: sub x1, x29, #0x58 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca54c: sub x25, x29, #0x30 */
  ARC_X_W(c, 25, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca550: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828756));
  fn2_1bc44c(c);
  /* ca554: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* ca558: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ca55c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ca560: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* ca564: str x25, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 25));
  /* ca568: add x24, sp, #8 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(8)));
  /* ca56c: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828784));
  fn2_221308(c);
  /* ca570: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* ca574: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828792));
  fn2_1bc620(c);
  /* ca578: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* ca57c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828800));
  fn2_1bc620(c);
  /* ca580: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca584: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828808));
  fn2_1d2d24(c);
  /* ca588: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ca58c: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828816));
  fn2_220748(c);
  /* ca590: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ca594: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* ca598: add x1, x1, #0x419 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1049)));
  /* ca59c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* ca5a0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ca5a4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828840));
  fn2_1b8fd4(c);
  /* ca5a8: add x0, x24, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* ca5ac: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* ca5b0: stp x21, x23, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ca5b4: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828856));
  fn2_1ddca4(c);
  /* ca5b8: add x0, x24, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(32)));
  /* ca5bc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ca5c0: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828868));
  fn2_1d788c(c);
  /* ca5c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ca5c8: bl #0x220748 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828876));
  fn2_220748(c);
  /* ca5cc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* ca5d0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* ca5d4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ca5d8: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* ca5dc: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* ca5e0: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828900));
  fn2_1b5d1c(c);
  /* ca5e4: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* ca5e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ca5ec: add x0, x25, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* ca5f0: add x1, x24, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* ca5f4: str q0, [x26] */
  arc_st64(ARC_X_R(c, 26), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 26) + 8, (c)->q[0].u64[1]);
  /* ca5f8: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828924));
  fn2_1ddca4(c);
  /* ca5fc: add x0, x25, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(32)));
  /* ca600: add x1, x24, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(32)));
  /* ca604: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828936));
  fn2_1d788c(c);
  /* ca608: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* ca60c: add x8, x8, #0x398 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(920)));
  /* ca610: add x0, x21, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(32)));
  /* ca614: stp x8, x20, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* ca618: add x1, x25, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* ca61c: ldr q0, [x26] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 26)), arc_ld64(ARC_X_R(c, 26) + 8));
  /* ca620: str q0, [x21, #0x10] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 21) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* ca624: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828968));
  fn2_1ddca4(c);
  /* ca628: add x0, x21, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(48)));
  /* ca62c: add x1, x25, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + UINT64_C(32)));
  /* ca630: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828980));
  fn2_1d788c(c);
  /* ca634: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca638: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* ca63c: bl #0x1b75a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(828992));
  fn2_1b75a4(c);
  /* ca640: add x0, x25, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(32)));
  /* ca644: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(829000));
  fn2_1d79fc(c);
  /* ca648: add x0, x25, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + UINT64_C(16)));
  /* ca64c: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(829008));
  fn2_1dde08(c);
  /* ca650: sub x1, x29, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* ca654: sub x2, x29, #0x58 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca658: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ca65c: mov w3, #4 */
  ARC_W_W(c, 3, UINT64_C(4));
  /* ca660: bl #0x221ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(829028));
  fn2_221ca0(c);
  /* ca664: sub x0, x29, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(88)));
  /* ca668: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(829036));
  fn2_1d79fc(c);
  /* ca66c: add x0, x24, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(32)));
  /* ca670: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(829044));
  fn2_1d79fc(c);
  /* ca674: add x0, x24, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 24) + UINT64_C(16)));
  /* ca678: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(829052));
  fn2_1dde08(c);
  /* ca67c: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* ca680: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(829060));
  fn2_1d2d24(c);
L_ca684:;
  /* ca684: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* ca688: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(829068));
  fn2_1d97fc(c);
  /* ca68c: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ca690: ldr x28, [sp, #0xd0] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(208))));
  /* ca694: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ca698: ldp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ca69c: ldp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ca6a0: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ca6a4: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* ca6a8: ret  */
  return;
L_ca6ac:;
  /* ca6ac: adrp x0, #0x1b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(110592)));
  /* ca6b0: add x0, x0, #0x3ce */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(974)));
  /* ca6b4: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* ca6b8: add x1, x1, #0x6d2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1746)));
  /* ca6bc: adrp x3, #0x22000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(139264)));
  /* ca6c0: add x3, x3, #0xeef */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3823)));
  /* ca6c4: mov w2, #0x8e */
  ARC_W_W(c, 2, UINT64_C(142));
  /* ca6c8: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* ca6cc: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* ca6d0: ldp x20, x19, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ca6d4: ldr x28, [sp, #0xd0] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(208))));
  /* ca6d8: ldp x22, x21, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ca6dc: ldp x24, x23, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ca6e0: ldp x26, x25, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ca6e4: ldp x29, x30, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ca6e8: add sp, sp, #0x120 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(288)));
  /* ca6ec: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_ccb3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076694332));
  /* ccb3c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ccb40: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ccb44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ccb48: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* ccb4c: add x8, x8, #0x398 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(920)));
  /* ccb50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ccb54: add x0, x0, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(48)));
  /* ccb58: str x8, [x19], #0x20 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ccb5c: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(838496));
  fn2_1d79fc(c);
  /* ccb60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ccb64: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ccb68: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ccb6c: b #0x1dde08 */
  fn2_1dde08(c); return;
}

void fn2_cd750(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076697424));
  /* cd750: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* cd754: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cd758: str x23, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 23));
  /* cd75c: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* cd760: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cd764: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* cd768: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* cd76c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd770: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* cd774: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* cd778: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* cd77c: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* cd780: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841604));
  fn2_1bc084(c);
  /* cd784: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd788: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* cd78c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841616));
  fn2_1bcf04(c);
  /* cd790: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd794: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841624));
  fn2_1bc620(c);
  /* cd798: cmp w21, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(1));
  /* cd79c: b.lt #0xcd7b0 */
  if (ARC_COND(c, 11)) goto L_cd7b0;
  /* cd7a0: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* cd7a4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd7a8: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841644));
  fn2_1bc0b8(c);
  /* cd7ac: b #0xcd7b8 */
  goto L_cd7b8;
L_cd7b0:;
  /* cd7b0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd7b4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841656));
  fn2_1bc084(c);
L_cd7b8:;
  /* cd7b8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd7bc: sub x23, x29, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd7c0: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841668));
  fn2_1bc630(c);
  /* cd7c4: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* cd7c8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd7cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841680));
  fn2_1bc620(c);
  /* cd7d0: tbz w22, #0, #0xcd7f4 */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_cd7f4;
  /* cd7d4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* cd7d8: bl #0x1e457c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841692));
  fn2_1e457c(c);
  /* cd7dc: cmp w21, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(3));
  /* cd7e0: b.lt #0xcd86c */
  if (ARC_COND(c, 11)) goto L_cd86c;
  /* cd7e4: ldr x1, [x20, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* cd7e8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd7ec: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841712));
  fn2_1bc0b8(c);
  /* cd7f0: b #0xcd874 */
  goto L_cd874;
L_cd7f4:;
  /* cd7f4: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd7f8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* cd7fc: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* cd800: bl #0xc9844 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841732));
  fn2_c9844(c);
  /* cd804: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd808: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd80c: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841744));
  fn2_1bc530(c);
  /* cd810: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd814: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* cd818: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841756));
  fn2_1bc084(c);
  /* cd81c: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* cd820: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* cd824: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* cd828: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* cd82c: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* cd830: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* cd834: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* cd838: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841788));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* cd83c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd840: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841796));
  fn2_1bc620(c);
  /* cd844: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd848: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841804));
  fn2_1bc620(c);
  /* cd84c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd850: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841812));
  fn2_1d97fc(c);
  /* cd854: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cd858: ldr x23, [sp, #0x60] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(96))));
  /* cd85c: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* cd860: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cd864: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* cd868: ret  */
  return;
L_cd86c:;
  /* cd86c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd870: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841844));
  fn2_1bc084(c);
L_cd874:;
  /* cd874: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd878: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd87c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841856));
  fn2_1bc84c(c);
  /* cd880: adrp x0, #0x1b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(110592)));
  /* cd884: add x0, x0, #0x3db */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(987)));
  /* cd888: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* cd88c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd890: bl #0x1b8e18 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841876));
  fn2_1b8e18(c);
  /* cd894: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* cd898: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* cd89c: bl #0x1e480c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841888));
  fn2_1e480c(c);
  /* cd8a0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd8a4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841896));
  fn2_1ccd9c(c);
  /* cd8a8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd8ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841904));
  fn2_1ccd9c(c);
  /* cd8b0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd8b4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841912));
  fn2_1bc620(c);
  /* cd8b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cd8bc: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841920));
  fn2_1d9740(c);
  /* cd8c0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd8c4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* cd8c8: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841932));
  fn2_1bc25c(c);
  /* cd8cc: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* cd8d0: add x1, x1, #0x134 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(308)));
  /* cd8d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd8d8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841948));
  fn2_1b7d24(c);
  /* cd8dc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd8e0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd8e4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841960));
  fn2_1bc2f8(c);
  /* cd8e8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd8ec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841968));
  fn2_1ccd9c(c);
  /* cd8f0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cd8f4: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* cd8f8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841980));
  fn2_1bbfa0(c);
  /* cd8fc: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd900: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841988));
  fn2_1bcf04(c);
  /* cd904: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd908: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(841996));
  fn2_1bc620(c);
  /* cd90c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd910: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842004));
  fn2_1bc620(c);
  /* cd914: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd918: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* cd91c: bl #0x1bc5bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842016));
  fn2_1bc5bc(c);
  /* cd920: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* cd924: add x1, x1, #0xb89 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2953)));
  /* cd928: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd92c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842032));
  fn2_1b7d24(c);
  /* cd930: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd934: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd938: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842044));
  fn2_1bc2f8(c);
  /* cd93c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd940: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842052));
  fn2_1ccd9c(c);
  /* cd944: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cd948: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* cd94c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842064));
  fn2_1bbfa0(c);
  /* cd950: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd954: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842072));
  fn2_1bcf04(c);
  /* cd958: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd95c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842080));
  fn2_1bc620(c);
  /* cd960: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd964: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842088));
  fn2_1bc620(c);
  /* cd968: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* cd96c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* cd970: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd974: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842104));
  fn2_1b7d24(c);
  /* cd978: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd97c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* cd980: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd984: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842120));
  fn2_1bc2f8(c);
  /* cd988: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd98c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842128));
  fn2_1ccd9c(c);
  /* cd990: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* cd994: add x1, x1, #0xf36 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3894)));
  /* cd998: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd99c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842144));
  fn2_1b7d24(c);
  /* cd9a0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd9a4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd9a8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842156));
  fn2_1bc2f8(c);
  /* cd9ac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd9b0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842164));
  fn2_1ccd9c(c);
  /* cd9b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cd9b8: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* cd9bc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842176));
  fn2_1bbfa0(c);
  /* cd9c0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd9c4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842184));
  fn2_1bcf04(c);
  /* cd9c8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd9cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842192));
  fn2_1bc620(c);
  /* cd9d0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd9d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842200));
  fn2_1bc620(c);
  /* cd9d8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cd9dc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* cd9e0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842212));
  fn2_1bc530(c);
  /* cd9e4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cd9e8: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* cd9ec: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842224));
  fn2_1bc084(c);
  /* cd9f0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* cd9f4: add x0, x19, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* cd9f8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* cd9fc: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* cda00: add x2, sp, #0x20 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(32)));
  /* cda04: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* cda08: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* cda0c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842256));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* cda10: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* cda14: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842264));
  fn2_1bc620(c);
  /* cda18: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* cda1c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842272));
  fn2_1bc620(c);
  /* cda20: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cda24: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842280));
  fn2_1d97fc(c);
  /* cda28: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* cda2c: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(842288));
  fn2_1e46f4(c);
  /* cda30: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cda34: ldr x23, [sp, #0x60] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(96))));
  /* cda38: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* cda3c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cda40: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* cda44: ret  */
  return;
}

void fn2_ce194(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076700052));
  /* ce194: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ce198: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ce19c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ce1a0: ldp x8, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ce1a4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* ce1a8: add x0, x1, x9, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> 1))));
  /* ce1ac: tbz w9, #0, #0xce1b8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_ce1b8;
  /* ce1b0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ce1b4: ldr x8, [x9, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ARC_X_R(c, 8))));
L_ce1b8:;
  /* ce1b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(844220));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ce1bc: cbz x0, #0xce1d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ce1d4;
  /* ce1c0: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* ce1c4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ce1c8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ce1cc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ce1d0: ret  */
  return;
L_ce1d4:;
  /* ce1d4: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* ce1d8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ce1dc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ce1e0: ret  */
  return;
}

void fn2_cf4b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076704944));
  /* cf4b0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* cf4b4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cf4b8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cf4bc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* cf4c0: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* cf4c4: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* cf4c8: b.hi #0xcf53c */
  if (ARC_COND(c, 8)) goto L_cf53c;
  /* cf4cc: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* cf4d0: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* cf4d4: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* cf4d8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849116));
  fn2_1d2c2c(c);
  /* cf4dc: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* cf4e0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849124));
  fn2_1d2c2c(c);
  /* cf4e4: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* cf4e8: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* cf4ec: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849136));
  fn2_1ccc74(c);
  /* cf4f0: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* cf4f4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* cf4f8: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* cf4fc: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* cf500: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* cf504: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* cf508: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849164));
  fn2_b2de4(c);
  /* cf50c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* cf510: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* cf514: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* cf518: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849180));
  fn2_b2de4(c);
  /* cf51c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* cf520: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* cf524: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* cf528: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849196));
  fn2_b2de4(c);
  /* cf52c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cf530: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cf534: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* cf538: ret  */
  return;
L_cf53c:;
  /* cf53c: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* cf540: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* cf544: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* cf548: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* cf54c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* cf550: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849236));
  fn2_1b8fd4(c);
  /* cf554: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* cf558: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* cf55c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849248));
  fn2_1b7d24(c);
  /* cf560: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cf564: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* cf568: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* cf56c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849264));
  fn2_1b8fd4(c);
  /* cf570: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* cf574: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* cf578: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849276));
  fn2_1d2c2c(c);
  /* cf57c: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* cf580: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849284));
  fn2_1d2c2c(c);
  /* cf584: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* cf588: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* cf58c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849296));
  fn2_1ccc74(c);
  /* cf590: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* cf594: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* cf598: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* cf59c: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* cf5a0: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* cf5a4: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849320));
  fn2_1d5dc0(c);
  /* cf5a8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* cf5ac: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* cf5b0: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* cf5b4: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849336));
  fn2_1d06b8(c);
  /* cf5b8: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* cf5bc: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* cf5c0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* cf5c4: movk w8, #2, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(131072)));
  /* cf5c8: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* cf5cc: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849360));
  fn2_1d5dc0(c);
  /* cf5d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* cf5d4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849368));
  fn2_1d2d24(c);
  /* cf5d8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* cf5dc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849376));
  fn2_1ccd9c(c);
  /* cf5e0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* cf5e4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(849384));
  fn2_1d2d24(c);
  /* cf5e8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* cf5ec: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* cf5f0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* cf5f4: ret  */
  return;
}

void fn2_d0e70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076711536));
  /* d0e70: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* d0e74: cbz x0, #0xd0e9c */
  if ((ARC_X_R(c, 0)) == 0) goto L_d0e9c;
  /* d0e78: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d0e7c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d0e80: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* d0e84: ldr x8, [x8, #0xff8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4088))));
  /* d0e88: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* d0e8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(855696));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* d0e90: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d0e94: cbz x0, #0xd0e9c */
  if ((ARC_X_R(c, 0)) == 0) goto L_d0e9c;
  /* d0e98: b #0x1b62dc */
  fn2_1b62dc(c); return;
L_d0e9c:;
  /* d0e9c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* d0ea0: ret  */
  return;
}

void fn2_d6510(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076733712));
  /* d6510: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* d6514: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d6518: stp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d651c: stp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d6520: stp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d6524: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* d6528: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d652c: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* d6530: add x1, x1, #0xca1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3233)));
  /* d6534: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d6538: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d653c: add x24, sp, #0x40 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(64)));
  /* d6540: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877892));
  fn2_1b8fd4(c);
  /* d6544: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d6548: bl #0xae4cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877900));
  fn2_ae4cc(c);
  /* d654c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d6550: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d6554: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877912));
  fn2_1d2d24(c);
  /* d6558: cbz x19, #0xd6614 */
  if ((ARC_X_R(c, 19)) == 0) goto L_d6614;
  /* d655c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* d6560: add x1, x1, #0x8f1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2289)));
  /* d6564: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d6568: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* d656c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877936));
  fn2_1b8fd4(c);
  /* d6570: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d6574: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* d6578: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877948));
  fn2_1bc44c(c);
  /* d657c: add x21, x24, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* d6580: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* d6584: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d6588: bl #0x1bc558 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877964));
  fn2_1bc558(c);
  /* d658c: add x22, x24, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* d6590: add x1, x20, #0x40 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(64)));
  /* d6594: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d6598: bl #0x1bc558 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877980));
  fn2_1bc558(c);
  /* d659c: add x23, x24, #0x48 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + UINT64_C(72)));
  /* d65a0: add x1, x20, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(80)));
  /* d65a4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* d65a8: bl #0x1bc558 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(877996));
  fn2_1bc558(c);
  /* d65ac: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* d65b0: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* d65b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d65b8: mov w2, #4 */
  ARC_W_W(c, 2, UINT64_C(4));
  /* d65bc: stp x24, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d65c0: stp x22, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d65c4: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878024));
  fn2_221308(c);
  /* d65c8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* d65cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878032));
  fn2_1bc620(c);
  /* d65d0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d65d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878040));
  fn2_1bc620(c);
  /* d65d8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d65dc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878048));
  fn2_1bc620(c);
  /* d65e0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* d65e4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878056));
  fn2_1bc620(c);
  /* d65e8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d65ec: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878064));
  fn2_1bcc90(c);
  /* d65f0: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* d65f4: b.eq #0xd6654 */
  if (ARC_COND(c, 0)) goto L_d6654;
  /* d65f8: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* d65fc: b.eq #0xd6640 */
  if (ARC_COND(c, 0)) goto L_d6640;
  /* d6600: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* d6604: b.ne #0xd6668 */
  if (ARC_COND(c, 1)) goto L_d6668;
  /* d6608: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d660c: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878096));
  fn2_1bc630(c);
  /* d6610: b #0xd6670 */
  goto L_d6670;
L_d6614:;
  /* d6614: adrp x0, #0x19000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(102400)));
  /* d6618: add x0, x0, #0xd59 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3417)));
  /* d661c: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* d6620: add x1, x1, #0xfe3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4067)));
  /* d6624: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* d6628: add x3, x3, #0xc48 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3144)));
  /* d662c: mov w2, #0x2a6 */
  ARC_W_W(c, 2, UINT64_C(678));
  /* d6630: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* d6634: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* d6638: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878140));
  fn2_1b54b0(c);
  /* d663c: b #0xd6684 */
  goto L_d6684;
L_d6640:;
  /* d6640: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d6644: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878152));
  fn2_1bc668(c);
  /* d6648: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* d664c: cset w19, ne */
  ARC_W_W(c, 19, (ARC_COND(c, 1) ? 1 : 0));
  /* d6650: b #0xd6674 */
  goto L_d6674;
L_d6654:;
  /* d6654: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d6658: bl #0x1bc7e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878172));
  fn2_1bc7e8(c);
  /* d665c: fcmp d0, #0.0 */
  arc_fcmp(c, (double)(ARC_D_R(c, 0)), (double)(0.0));
  /* d6660: cset w19, ne */
  ARC_W_W(c, 19, (ARC_COND(c, 1) ? 1 : 0));
  /* d6664: b #0xd6674 */
  goto L_d6674;
L_d6668:;
  /* d6668: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d666c: bl #0x1bda04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878192));
  fn2_1bda04(c);
L_d6670:;
  /* d6670: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
L_d6674:;
  /* d6674: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* d6678: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878204));
  fn2_1bc620(c);
  /* d667c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* d6680: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(878212));
  fn2_1d2d24(c);
L_d6684:;
  /* d6684: and w0, w19, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 19) & UINT64_C(1)));
  /* d6688: ldp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d668c: ldp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d6690: ldp x24, x23, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d6694: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d6698: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* d669c: ret  */
  return;
}

void fn2_db7a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076754852));
  /* db7a4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* db7a8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db7ac: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* db7b0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db7b4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* db7b8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* db7bc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* db7c0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* db7c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* db7c8: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* db7cc: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* db7d0: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899028));
  fn2_1b5d1c(c);
  /* db7d4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* db7d8: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* db7dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db7e0: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* db7e4: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* db7e8: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* db7ec: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* db7f0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899060));
  fn2_1d2c2c(c);
  /* db7f4: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* db7f8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899068));
  fn2_1d2c2c(c);
  /* db7fc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* db800: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* db804: add x8, x8, #0x868 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2152)));
  /* db808: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db80c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* db810: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* db814: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* db818: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* db81c: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* db820: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* db824: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* db828: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* db82c: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899120));
  fn2_1b5e68(c);
  /* db830: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* db834: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* db838: add x8, x8, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(136)));
  /* db83c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* db840: tbz w8, #0, #0xdb880 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_db880;
L_db844:;
  /* db844: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* db848: add x1, x1, #0x80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(128)));
  /* db84c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* db850: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899156));
  fn2_1d2c40(c);
  /* db854: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* db858: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* db85c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899168));
  fn2_1d5dc0(c);
  /* db860: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* db864: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899176));
  fn2_1d2d24(c);
  /* db868: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db86c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db870: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* db874: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db878: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* db87c: ret  */
  return;
L_db880:;
  /* db880: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* db884: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* db888: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899212));
  fn2_24b710(c);
  /* db88c: cbz w0, #0xdb844 */
  if ((ARC_W_R(c, 0)) == 0) goto L_db844;
  /* db890: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* db894: add x20, x20, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* db898: nop  */
  /* nop: no architectural effect here */
  /* db89c: adr x1, #0x36644 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222788)));
  /* db8a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* db8a4: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899240));
  fn2_1b907c(c);
  /* db8a8: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* db8ac: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* db8b0: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* db8b4: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* db8b8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* db8bc: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899264));
  fn2_24b6f0(c);
  /* db8c0: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* db8c4: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* db8c8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(899276));
  fn2_24b720(c);
  /* db8cc: b #0xdb844 */
  goto L_db844;
}

void fn2_dcda4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076760484));
  /* dcda4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dcda8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* dcdac: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dcdb0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dcdb4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* dcdb8: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* dcdbc: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* dcdc0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* dcdc4: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* dcdc8: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* dcdcc: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904656));
  fn2_1b5d1c(c);
  /* dcdd0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* dcdd4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* dcdd8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dcddc: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* dcde0: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* dcde4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* dcde8: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* dcdec: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904688));
  fn2_1d2c2c(c);
  /* dcdf0: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dcdf4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904696));
  fn2_1d2c2c(c);
  /* dcdf8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* dcdfc: adrp x8, #0x252000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2433024)));
  /* dce00: add x8, x8, #0x988 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2440)));
  /* dce04: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dce08: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* dce0c: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* dce10: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* dce14: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* dce18: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* dce1c: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* dce20: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* dce24: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* dce28: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* dce2c: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904752));
  fn2_1b5e68(c);
  /* dce30: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* dce34: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dce38: add x8, x8, #0x88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(136)));
  /* dce3c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* dce40: tbz w8, #0, #0xdce7c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_dce7c;
L_dce44:;
  /* dce44: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dce48: add x1, x1, #0x80 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(128)));
  /* dce4c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dce50: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904788));
  fn2_1d2c40(c);
  /* dce54: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* dce58: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dce5c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904800));
  fn2_1d5dc0(c);
  /* dce60: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* dce64: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904808));
  fn2_1d2d24(c);
  /* dce68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dce6c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dce70: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* dce74: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dce78: ret  */
  return;
L_dce7c:;
  /* dce7c: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dce80: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dce84: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904840));
  fn2_24b710(c);
  /* dce88: cbz w0, #0xdce44 */
  if ((ARC_W_R(c, 0)) == 0) goto L_dce44;
  /* dce8c: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dce90: add x20, x20, #0x80 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* dce94: nop  */
  /* nop: no architectural effect here */
  /* dce98: adr x1, #0x36644 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222788)));
  /* dce9c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dcea0: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904868));
  fn2_1b907c(c);
  /* dcea4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* dcea8: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* dceac: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* dceb0: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* dceb4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* dceb8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904892));
  fn2_24b6f0(c);
  /* dcebc: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* dcec0: add x0, x0, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(136)));
  /* dcec4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(904904));
  fn2_24b720(c);
  /* dcec8: b #0xdce44 */
  goto L_dce44;
}

void fn2_ddf90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076765072));
  /* ddf90: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* ddf94: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ddf98: str x27, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 27));
  /* ddf9c: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* ddfa0: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ddfa4: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ddfa8: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ddfac: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* ddfb0: ldp x9, x8, [x6] */
  { const uint64_t _pa = ARC_X_R(c, 6);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ddfb4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ddfb8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ddfbc: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* ddfc0: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* ddfc4: mov w25, w4 */
  ARC_W_W(c, 25, ARC_W_R(c, 4));
  /* ddfc8: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* ddfcc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* ddfd0: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* ddfd4: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* ddfd8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ddfdc: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* ddfe0: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* ddfe4: add x26, sp, #8 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(8)));
  /* ddfe8: mul x27, x8, x9 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* ddfec: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909296));
  fn2_1bc084(c);
  /* ddff0: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* ddff4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909304));
  fn2_1bc084(c);
  /* ddff8: cmp w25, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(0));
  /* ddffc: b.le #0xde058 */
  if (ARC_COND(c, 13)) goto L_de058;
  /* de000: ldr x1, [x24] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 24)));
  /* de004: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de008: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909324));
  fn2_1bc09c(c);
  /* de00c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* de010: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de014: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909336));
  fn2_1bcf04(c);
  /* de018: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de01c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909344));
  fn2_1bc620(c);
  /* de020: cmp w25, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(1));
  /* de024: b.eq #0xde074 */
  if (ARC_COND(c, 0)) goto L_de074;
  /* de028: ldr x1, [x24, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* de02c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de030: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909364));
  fn2_1bc09c(c);
  /* de034: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* de038: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de03c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909376));
  fn2_1bcf04(c);
  /* de040: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de044: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909384));
  fn2_1bc620(c);
  /* de048: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* de04c: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* de050: tbnz w21, #0, #0xde09c */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_de09c;
  /* de054: b #0xde0a4 */
  goto L_de0a4;
L_de058:;
  /* de058: sub w8, w27, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(2)));
  /* de05c: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* de060: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* de064: nop  */
  /* nop: no architectural effect here */
  /* de068: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* de06c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* de070: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909428));
  fn2_1bce10(c);
L_de074:;
  /* de074: sub w8, w27, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(1)));
  /* de078: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* de07c: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* de080: nop  */
  /* nop: no architectural effect here */
  /* de084: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* de088: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* de08c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909456));
  fn2_1bce10(c);
  /* de090: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* de094: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* de098: tbz w21, #0, #0xde0a4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_de0a4;
L_de09c:;
  /* de09c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* de0a0: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_de0a4:;
  /* de0a4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de0a8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* de0ac: add x20, sp, #8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(8)));
  /* de0b0: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909492));
  fn2_1bc0b8(c);
  /* de0b4: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* de0b8: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909500));
  fn2_1bc668(c);
  /* de0bc: mov x2, x0 */
  ARC_X_W(c, 2, ARC_X_R(c, 0));
  /* de0c0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de0c4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* de0c8: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909516));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* de0cc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* de0d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909524));
  fn2_1bc620(c);
  /* de0d4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* de0d8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909532));
  fn2_1bc620(c);
  /* de0dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* de0e0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(909540));
  fn2_1bc620(c);
  /* de0e4: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* de0e8: ldr x27, [sp, #0x60] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(96))));
  /* de0ec: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* de0f0: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* de0f4: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* de0f8: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* de0fc: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* de100: ret  */
  return;
}

void fn2_df414(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076770324));
  /* df414: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* df418: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* df41c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* df420: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* df424: bl #0x1b6040 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(914472));
  fn2_1b6040(c);
  /* df428: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* df42c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* df430: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* df434: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_e2f58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076785496));
  /* e2f58: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* e2f5c: ldp x1, x9, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* e2f60: mov x4, x3 */
  ARC_X_W(c, 4, ARC_X_R(c, 3));
  /* e2f64: mov x3, x2 */
  ARC_X_W(c, 3, ARC_X_R(c, 2));
  /* e2f68: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e2f6c: mov x2, x9 */
  ARC_X_W(c, 2, ARC_X_R(c, 9));
  /* e2f70: b #0xe3204 */
  fn2_e3204(c); return;
}

void fn2_e634c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076798796));
  /* e634c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6350: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e6354: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* e6358: add x8, x8, #0xb8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(184)));
  /* e635c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* e6360: tbnz w8, #0, #0xe6390 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e6390;
  /* e6364: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* e6368: add x0, x0, #0xb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(184)));
  /* e636c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(942960));
  fn2_24b710(c);
  /* e6370: cbz w0, #0xe6390 */
  if ((ARC_W_R(c, 0)) == 0) goto L_e6390;
  /* e6374: nop  */
  /* nop: no architectural effect here */
  /* e6378: adr x0, #0xe69fc */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(944636)));
  /* e637c: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(942976));
  fn2_1aff64(c);
  /* e6380: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* e6384: add x0, x0, #0xb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(184)));
  /* e6388: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e638c: b #0x24b720 */
  fn2_24b720(c); return;
L_e6390:;
  /* e6390: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e6394: ret  */
  return;
}

void fn2_e6fec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076802028));
  /* e6fec: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e6ff0: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e6ff4: str x21, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 21));
  /* e6ff8: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e6ffc: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* e7000: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e7004: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* e7008: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* e700c: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* e7010: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(946196));
  fn2_1bc084(c);
  /* e7014: ldr x20, [x20, #0x60] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(96))));
  /* e7018: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e701c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(946208));
  fn2_1bc084(c);
  /* e7020: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* e7024: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* e7028: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(946220));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* e702c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e7030: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* e7034: bl #0x1bc5bc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(946232));
  fn2_1bc5bc(c);
  /* e7038: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e703c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e7040: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(946244));
  fn2_1bcf04(c);
  /* e7044: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e7048: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(946252));
  fn2_1bc620(c);
  /* e704c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* e7050: bl #0x1e46f4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(946260));
  fn2_1e46f4(c);
  /* e7054: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e7058: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(946268));
  fn2_1bc620(c);
  /* e705c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e7060: ldr x21, [sp, #0x50] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(80))));
  /* e7064: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7068: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e706c: ret  */
  return;
}

void fn2_e8170(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076806512));
  /* e8170: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* e8174: ret  */
  return;
}

void fn2_eaf7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076818300));
  /* eaf7c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* eaf80: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eaf84: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* eaf88: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eaf8c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* eaf90: ldp x21, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* eaf94: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* eaf98: add x20, x1, x8, asr #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* eaf9c: tbz w8, #0, #0xeafa8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_eafa8;
  /* eafa0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* eafa4: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_eafa8:;
  /* eafa8: ldr x1, [x2] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 2)));
  /* eafac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* eafb0: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(962484));
  fn2_1bc0b8(c);
  /* eafb4: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* eafb8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* eafbc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eafc0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(962500));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* eafc4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* eafc8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eafcc: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(962512));
  fn2_1bce10(c);
  /* eafd0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* eafd4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(962520));
  fn2_1bc620(c);
  /* eafd8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* eafdc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(962528));
  fn2_1bc620(c);
  /* eafe0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eafe4: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* eafe8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eafec: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* eaff0: ret  */
  return;
}

void fn2_ed5dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076828124));
  /* ed5dc: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* ed5e0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed5e4: str x19, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 19));
  /* ed5e8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ed5ec: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* ed5f0: add x1, x1, #0xd98 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3480)));
  /* ed5f4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ed5f8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972284));
  fn2_1b7d24(c);
  /* ed5fc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ed600: bl #0x20bf64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972292));
  fn2_20bf64(c);
  /* ed604: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* ed608: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ed60c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972304));
  fn2_1ccd9c(c);
  /* ed610: tbz w19, #0, #0xed654 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_ed654;
  /* ed614: bl #0x224280 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972312));
  fn2_224280(c);
  /* ed618: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ed61c: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* ed620: add x1, x1, #0xd98 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3480)));
  /* ed624: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ed628: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972332));
  fn2_1b7d24(c);
  /* ed62c: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ed630: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* ed634: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ed638: bl #0x225440 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972348));
  fn2_225440(c);
  /* ed63c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ed640: bl #0x1f00e4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972356));
  fn2_1f00e4(c);
  /* ed644: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* ed648: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972364));
  fn2_1ccd9c(c);
  /* ed64c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ed650: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(972372));
  fn2_1ccd9c(c);
L_ed654:;
  /* ed654: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed658: ldr x19, [sp, #0x20] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(32))));
  /* ed65c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* ed660: ret  */
  return;
}

void fn2_f3a8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076853900));
  /* f3a8c: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* f3a90: strb w8, [x0, #0x26] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(38)), ARC_W_R(c, 8));
  /* f3a94: ret  */
  return;
}

void fn2_f4508(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076856584));
  /* f4508: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f450c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4510: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f4514: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f4518: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f451c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f4520: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* f4524: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* f4528: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f452c: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* f4530: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* f4534: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000760));
  fn2_1b5d1c(c);
  /* f4538: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* f453c: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* f4540: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4544: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f4548: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* f454c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* f4550: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* f4554: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000792));
  fn2_1d2c2c(c);
  /* f4558: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f455c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000800));
  fn2_1d2c2c(c);
  /* f4560: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* f4564: adrp x8, #0x251000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2428928)));
  /* f4568: add x8, x8, #0x1e0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(480)));
  /* f456c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f4570: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f4574: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* f4578: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* f457c: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f4580: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* f4584: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* f4588: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* f458c: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* f4590: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000852));
  fn2_1b5e68(c);
  /* f4594: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* f4598: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f459c: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* f45a0: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* f45a4: tbz w8, #0, #0xf45e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f45e4;
L_f45a8:;
  /* f45a8: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f45ac: add x1, x1, #0x140 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(320)));
  /* f45b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f45b4: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000888));
  fn2_1d2c40(c);
  /* f45b8: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f45bc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* f45c0: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000900));
  fn2_1d5dc0(c);
  /* f45c4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f45c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000908));
  fn2_1d2d24(c);
  /* f45cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f45d0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f45d4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f45d8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f45dc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f45e0: ret  */
  return;
L_f45e4:;
  /* f45e4: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f45e8: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f45ec: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000944));
  fn2_24b710(c);
  /* f45f0: cbz w0, #0xf45a8 */
  if ((ARC_W_R(c, 0)) == 0) goto L_f45a8;
  /* f45f4: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f45f8: add x20, x20, #0x140 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(320)));
  /* f45fc: nop  */
  /* nop: no architectural effect here */
  /* f4600: adr x1, #0x365bc */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222652)));
  /* f4604: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f4608: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000972));
  fn2_1b907c(c);
  /* f460c: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* f4610: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* f4614: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* f4618: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* f461c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f4620: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1000996));
  fn2_24b6f0(c);
  /* f4624: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f4628: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f462c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1001008));
  fn2_24b720(c);
  /* f4630: b #0xf45a8 */
  goto L_f45a8;
}

void fn2_f55ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076860908));
  /* f55ec: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f55f0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f55f4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f55f8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f55fc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f5600: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f5604: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* f5608: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* f560c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f5610: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* f5614: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* f5618: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005084));
  fn2_1b5d1c(c);
  /* f561c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* f5620: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* f5624: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5628: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* f562c: str w22, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 22));
  /* f5630: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* f5634: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* f5638: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005116));
  fn2_1d2c2c(c);
  /* f563c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f5640: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005124));
  fn2_1d2c2c(c);
  /* f5644: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* f5648: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* f564c: add x8, x8, #0x468 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1128)));
  /* f5650: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5654: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* f5658: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* f565c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* f5660: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5664: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* f5668: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* f566c: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* f5670: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* f5674: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005176));
  fn2_1b5e68(c);
  /* f5678: str w22, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 22));
  /* f567c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5680: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* f5684: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* f5688: tbz w8, #0, #0xf56c8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_f56c8;
L_f568c:;
  /* f568c: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f5690: add x1, x1, #0x140 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(320)));
  /* f5694: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5698: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005212));
  fn2_1d2c40(c);
  /* f569c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* f56a0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* f56a4: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005224));
  fn2_1d5dc0(c);
  /* f56a8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f56ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005232));
  fn2_1d2d24(c);
  /* f56b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f56b4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f56b8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f56bc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f56c0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f56c4: ret  */
  return;
L_f56c8:;
  /* f56c8: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f56cc: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f56d0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005268));
  fn2_24b710(c);
  /* f56d4: cbz w0, #0xf568c */
  if ((ARC_W_R(c, 0)) == 0) goto L_f568c;
  /* f56d8: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f56dc: add x20, x20, #0x140 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(320)));
  /* f56e0: nop  */
  /* nop: no architectural effect here */
  /* f56e4: adr x1, #0x365bc */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222652)));
  /* f56e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f56ec: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005296));
  fn2_1b907c(c);
  /* f56f0: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* f56f4: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* f56f8: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* f56fc: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* f5700: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f5704: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005320));
  fn2_24b6f0(c);
  /* f5708: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* f570c: add x0, x0, #0x148 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(328)));
  /* f5710: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1005332));
  fn2_24b720(c);
  /* f5714: b #0xf568c */
  goto L_f568c;
}

void fn2_fc398(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076888984));
  /* fc398: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* fc39c: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fc3a0: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fc3a4: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fc3a8: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* fc3ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fc3b0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fc3b4: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* fc3b8: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* fc3bc: add x22, sp, #8 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(8)));
  /* fc3c0: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033156));
  fn2_1bc0b8(c);
  /* fc3c4: add x0, x22, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* fc3c8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* fc3cc: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033168));
  fn2_1bc0b8(c);
  /* fc3d0: add x0, x22, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(48)));
  /* fc3d4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033176));
  fn2_1bc084(c);
  /* fc3d8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fc3dc: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033184));
  fn2_1db4a4(c);
  /* fc3e0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fc3e4: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* fc3e8: bl #0x1db9f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033196));
  fn2_1db9f0(c);
  /* fc3ec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fc3f0: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* fc3f4: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033208));
  fn2_1bbf48(c);
  /* fc3f8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* fc3fc: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033216));
  fn2_1bce10(c);
  /* fc400: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fc404: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fc408: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033228));
  fn2_1bbf48(c);
  /* fc40c: add x1, x22, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* fc410: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033236));
  fn2_1bce10(c);
  /* fc414: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* fc418: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* fc41c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fc420: bl #0x1d0298 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033252));
  fn2_1d0298(c);
  /* fc424: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* fc428: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033260));
  fn2_1db788(c);
  /* fc42c: add x0, x22, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(48)));
  /* fc430: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033268));
  fn2_1bc620(c);
  /* fc434: add x0, x22, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* fc438: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033276));
  fn2_1bc620(c);
  /* fc43c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fc440: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1033284));
  fn2_1bc620(c);
  /* fc444: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fc448: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fc44c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fc450: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* fc454: ret  */
  return;
}

void fn2_fda78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188076894840));
  /* fda78: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* fda7c: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fda80: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* fda84: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* fda88: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fda8c: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fda90: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fda94: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* fda98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fda9c: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* fdaa0: add x1, x1, #0x946 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2374)));
  /* fdaa4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdaa8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* fdaac: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039024));
  fn2_1b8fd4(c);
  /* fdab0: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdab4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fdab8: bl #0x1afcfc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039036));
  fn2_1afcfc(c);
  /* fdabc: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdac0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039044));
  fn2_1d2d24(c);
  /* fdac4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdac8: adrp x8, #0x253000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2437120)));
  /* fdacc: add x8, x8, #0x688 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1672)));
  /* fdad0: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* fdad4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* fdad8: stur q0, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* fdadc: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* fdae0: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* fdae4: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039080));
  fn2_1d9740(c);
  /* fdae8: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* fdaec: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039088));
  fn2_1db4a4(c);
  /* fdaf0: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* fdaf4: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039096));
  fn2_1d9740(c);
  /* fdaf8: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* fdafc: str xzr, [x19, #0x60] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)), ARC_X_R(c, 31));
  /* fdb00: strh wzr, [x19, #0x68] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(104)), ARC_W_R(c, 31));
  /* fdb04: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039112));
  fn2_1db4a4(c);
  /* fdb08: mov x20, #-1 */
  ARC_X_W(c, 20, UINT64_C(18446744073709551615));
  /* fdb0c: add x0, x19, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(128)));
  /* fdb10: str x20, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 20));
  /* fdb14: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039128));
  fn2_1ccc74(c);
  /* fdb18: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdb1c: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* fdb20: strh wzr, [x19, #0x88] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 31));
  /* fdb24: strb wzr, [x19, #0x8a] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(138)), ARC_W_R(c, 31));
  /* fdb28: str xzr, [x19, #0x90] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(144)), ARC_X_R(c, 31));
  /* fdb2c: strb wzr, [x19, #0xa8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(168)), ARC_W_R(c, 31));
  /* fdb30: stur q0, [x19, #0x98] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(152)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(152)) + 8, (c)->q[0].u64[1]);
  /* fdb34: str xzr, [x19, #0xb0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(176)), ARC_X_R(c, 31));
  /* fdb38: stur q0, [x19, #0xb8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(184)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(184)) + 8, (c)->q[0].u64[1]);
  /* fdb3c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039168));
  fn2_1d9740(c);
  /* fdb40: add x0, x19, #0xd0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(208)));
  /* fdb44: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039176));
  fn2_1d9740(c);
  /* fdb48: add x0, x19, #0xd8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(216)));
  /* fdb4c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039184));
  fn2_1ccc74(c);
  /* fdb50: add x0, x19, #0xe8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(232)));
  /* fdb54: str x20, [x19, #0xe0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(224)), ARC_X_R(c, 20));
  /* fdb58: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039196));
  fn2_1db4a4(c);
  /* fdb5c: add x0, x19, #0xf0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(240)));
  /* fdb60: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039204));
  fn2_1db4a4(c);
  /* fdb64: add x0, x19, #0xf8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(248)));
  /* fdb68: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039212));
  fn2_1db4a4(c);
  /* fdb6c: add x0, x19, #0x100 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(256)));
  /* fdb70: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039220));
  fn2_1ccc74(c);
  /* fdb74: add x0, x19, #0x108 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(264)));
  /* fdb78: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039228));
  fn2_1d9740(c);
  /* fdb7c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdb80: add x8, x19, #0x118 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(280)));
  /* fdb84: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* fdb88: add x0, x19, #0x178 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(376)));
  /* fdb8c: str x20, [x19, #0x110] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(272)), ARC_X_R(c, 20));
  /* fdb90: strb w22, [x19, #0x128] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(296)), ARC_W_R(c, 22));
  /* fdb94: str xzr, [x19, #0x130] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(304)), ARC_X_R(c, 31));
  /* fdb98: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* fdb9c: add x8, x19, #0x130 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* fdba0: stur q0, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)) + 8, (c)->q[0].u64[1]);
  /* fdba4: strb wzr, [x19, #0x148] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(328)), ARC_W_R(c, 31));
  /* fdba8: stp q0, q0, [x19, #0x150] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(336));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fdbac: str xzr, [x19, #0x170] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(368)), ARC_X_R(c, 31));
  /* fdbb0: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039284));
  fn2_1d9740(c);
  /* fdbb4: add x0, x19, #0x188 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(392)));
  /* fdbb8: str xzr, [x19, #0x180] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(384)), ARC_X_R(c, 31));
  /* fdbbc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039296));
  fn2_1ccc74(c);
  /* fdbc0: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdbc4: add x0, x19, #0x1b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(432)));
  /* fdbc8: strb wzr, [x19, #0x190] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(400)), ARC_W_R(c, 31));
  /* fdbcc: str xzr, [x19, #0x198] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(408)), ARC_X_R(c, 31));
  /* fdbd0: str q0, [x19, #0x1a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(416)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(416)) + 8, (c)->q[0].u64[1]);
  /* fdbd4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039320));
  fn2_1ccc74(c);
  /* fdbd8: add x0, x19, #0x1ca */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(458)));
  /* fdbdc: strb wzr, [x19, #0x1b8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(440)), ARC_W_R(c, 31));
  /* fdbe0: str xzr, [x19, #0x1c0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(448)), ARC_X_R(c, 31));
  /* fdbe4: strh wzr, [x19, #0x1c8] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(456)), ARC_W_R(c, 31));
  /* fdbe8: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039340));
  fn2_1ccc74(c);
  /* fdbec: add x8, x19, #0x1d2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(466)));
  /* fdbf0: mov x21, #-0x4010000000000000 */
  ARC_X_W(c, 21, UINT64_C(13830554455654793216));
  /* fdbf4: add x0, x19, #0x1e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(480)));
  /* fdbf8: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* fdbfc: str x21, [x19, #0x1d8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(472)), ARC_X_R(c, 21));
  /* fdc00: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039364));
  fn2_1ccc74(c);
  /* fdc04: add x0, x19, #0x1f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(496)));
  /* fdc08: str xzr, [x19, #0x1e8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(488)), ARC_X_R(c, 31));
  /* fdc0c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039376));
  fn2_1db4a4(c);
  /* fdc10: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdc14: add x0, x19, #0x220 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(544)));
  /* fdc18: strb wzr, [x19, #0x1f8] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(504)), ARC_W_R(c, 31));
  /* fdc1c: str x21, [x19, #0x200] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(512)), ARC_X_R(c, 21));
  /* fdc20: str xzr, [x19, #0x208] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(520)), ARC_X_R(c, 31));
  /* fdc24: str q0, [x19, #0x210] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(528)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(528)) + 8, (c)->q[0].u64[1]);
  /* fdc28: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039404));
  fn2_1db4a4(c);
  /* fdc2c: add x0, x19, #0x230 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(560)));
  /* fdc30: str xzr, [x19, #0x228] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(552)), ARC_X_R(c, 31));
  /* fdc34: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039416));
  fn2_1d9740(c);
  /* fdc38: add x0, x19, #0x238 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(568)));
  /* fdc3c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039424));
  fn2_1d9740(c);
  /* fdc40: add x0, x19, #0x240 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(576)));
  /* fdc44: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039432));
  fn2_1d9740(c);
  /* fdc48: add x0, x19, #0x248 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(584)));
  /* fdc4c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039440));
  fn2_1d9740(c);
  /* fdc50: add x0, x19, #0x250 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(592)));
  /* fdc54: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039448));
  fn2_1d9740(c);
  /* fdc58: add x0, x19, #0x258 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(600)));
  /* fdc5c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039456));
  fn2_1d9740(c);
  /* fdc60: add x0, x19, #0x260 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(608)));
  /* fdc64: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039464));
  fn2_1d9740(c);
  /* fdc68: add x0, x19, #0x268 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(616)));
  /* fdc6c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039472));
  fn2_1db4a4(c);
  /* fdc70: add x0, x19, #0x270 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(624)));
  /* fdc74: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039480));
  fn2_1d9740(c);
  /* fdc78: add x0, x19, #0x278 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(632)));
  /* fdc7c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039488));
  fn2_1db4a4(c);
  /* fdc80: add x0, x19, #0x289 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(649)));
  /* fdc84: str x20, [x19, #0x280] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(640)), ARC_X_R(c, 20));
  /* fdc88: strb wzr, [x19, #0x288] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(648)), ARC_W_R(c, 31));
  /* fdc8c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039504));
  fn2_1d9740(c);
  /* fdc90: add x0, x19, #0x2a0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(672)));
  /* fdc94: strb wzr, [x19, #0x291] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(657)), ARC_W_R(c, 31));
  /* fdc98: str xzr, [x19, #0x298] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(664)), ARC_X_R(c, 31));
  /* fdc9c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039520));
  fn2_1d9740(c);
  /* fdca0: add x0, x19, #0x2a8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(680)));
  /* fdca4: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039528));
  fn2_1d9740(c);
  /* fdca8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdcac: add x0, x19, #0x2c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(712)));
  /* fdcb0: str x20, [x19, #0x2c0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(704)), ARC_X_R(c, 20));
  /* fdcb4: str q0, [x19, #0x2b0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(688)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(688)) + 8, (c)->q[0].u64[1]);
  /* fdcb8: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039548));
  fn2_1ccc74(c);
  /* fdcbc: add x0, x19, #0x2d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(728)));
  /* fdcc0: str x22, [x19, #0x2d0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(720)), ARC_X_R(c, 22));
  /* fdcc4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039560));
  fn2_1ccc74(c);
  /* fdcc8: add x0, x19, #0x2e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(736)));
  /* fdccc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039568));
  fn2_1ccc74(c);
  /* fdcd0: nop  */
  /* nop: no architectural effect here */
  /* fdcd4: adr x1, #0x19e03 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(105987)));
  /* fdcd8: add x0, x19, #0x2e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(744)));
  /* fdcdc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039584));
  fn2_1b7d24(c);
  /* fdce0: add x0, x19, #0x2f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(752)));
  /* fdce4: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039592));
  fn2_1db4a4(c);
  /* fdce8: add x0, x19, #0x308 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(776)));
  /* fdcec: str x22, [x19, #0x2f8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(760)), ARC_X_R(c, 22));
  /* fdcf0: str xzr, [x19, #0x300] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(768)), ARC_X_R(c, 31));
  /* fdcf4: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039608));
  fn2_1d9740(c);
  /* fdcf8: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* fdcfc: mov x22, #-0x86a0 */
  ARC_X_W(c, 22, UINT64_C(18446744073709517152));
  /* fdd00: add x0, x19, #0x348 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(840)));
  /* fdd04: ldr q0, [x8, #0xb60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2912)) + 8));
  /* fdd08: movk x22, #0xfffe, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(4294836224)));
  /* fdd0c: add x8, x19, #0x330 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(816)));
  /* fdd10: str xzr, [x19, #0x320] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(800)), ARC_X_R(c, 31));
  /* fdd14: str q0, [x19, #0x310] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(784)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(784)) + 8, (c)->q[0].u64[1]);
  /* fdd18: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdd1c: str xzr, [x19, #0x330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(816)), ARC_X_R(c, 31));
  /* fdd20: str x22, [x19, #0x328] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(808)), ARC_X_R(c, 22));
  /* fdd24: stur q0, [x8, #8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(8)) + 8, (c)->q[0].u64[1]);
  /* fdd28: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039660));
  fn2_1d9740(c);
  /* fdd2c: add x0, x19, #0x350 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(848)));
  /* fdd30: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039668));
  fn2_1d9740(c);
  /* fdd34: add x0, x19, #0x360 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(864)));
  /* fdd38: str x21, [x19, #0x358] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(856)), ARC_X_R(c, 21));
  /* fdd3c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039680));
  fn2_1ccc74(c);
  /* fdd40: add x0, x19, #0x381 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(897)));
  /* fdd44: str x22, [x19, #0x368] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(872)), ARC_X_R(c, 22));
  /* fdd48: strb wzr, [x19, #0x370] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(880)), ARC_W_R(c, 31));
  /* fdd4c: str xzr, [x19, #0x378] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(888)), ARC_X_R(c, 31));
  /* fdd50: strb wzr, [x19, #0x380] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(896)), ARC_W_R(c, 31));
  /* fdd54: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039704));
  fn2_1ccc74(c);
  /* fdd58: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdd5c: add x0, x19, #0x3d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(976)));
  /* fdd60: str x21, [x19, #0x390] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(912)), ARC_X_R(c, 21));
  /* fdd64: str xzr, [x19, #0x398] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(920)), ARC_X_R(c, 31));
  /* fdd68: strb wzr, [x19, #0x3b0] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(944)), ARC_W_R(c, 31));
  /* fdd6c: str xzr, [x19, #0x3b8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(952)), ARC_X_R(c, 31));
  /* fdd70: str q0, [x19, #0x3a0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(928)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(928)) + 8, (c)->q[0].u64[1]);
  /* fdd74: str q0, [x19, #0x3c0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(960)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(960)) + 8, (c)->q[0].u64[1]);
  /* fdd78: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039740));
  fn2_1d9740(c);
  /* fdd7c: add x0, x19, #0x3d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(984)));
  /* fdd80: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039748));
  fn2_1db4a4(c);
  /* fdd84: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fdd88: add x0, x19, #0x3f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1008)));
  /* fdd8c: str q0, [x19, #0x3e0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(992)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(992)) + 8, (c)->q[0].u64[1]);
  /* fdd90: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039764));
  fn2_1d9740(c);
  /* fdd94: add x0, x19, #0x3f8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1016)));
  /* fdd98: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039772));
  fn2_1db4a4(c);
  /* fdd9c: add x0, x19, #0x408 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1032)));
  /* fdda0: str x20, [x19, #0x400] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(1024)), ARC_X_R(c, 20));
  /* fdda4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039784));
  fn2_1ccc74(c);
  /* fdda8: add x0, x19, #0x410 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1040)));
  /* fddac: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039792));
  fn2_1ccc74(c);
  /* fddb0: add x0, x19, #0x418 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1048)));
  /* fddb4: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039800));
  fn2_1ccc74(c);
  /* fddb8: add x0, x19, #0x428 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1064)));
  /* fddbc: str xzr, [x19, #0x420] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(1056)), ARC_X_R(c, 31));
  /* fddc0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039812));
  fn2_1ccc74(c);
  /* fddc4: add x0, x19, #0x430 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1072)));
  /* fddc8: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039820));
  fn2_1d9740(c);
  /* fddcc: add x0, x19, #0x438 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1080)));
  /* fddd0: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039828));
  fn2_1d9740(c);
  /* fddd4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fddd8: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039836));
  fn2_1d9740(c);
  /* fdddc: add x0, x19, #0x440 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1088)));
  /* fdde0: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdde4: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039848));
  fn2_1bc530(c);
  /* fdde8: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fddec: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039856));
  fn2_1d97fc(c);
  /* fddf0: add x0, x19, #0x460 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1120)));
  /* fddf4: str xzr, [x19, #0x458] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(1112)), ARC_X_R(c, 31));
  /* fddf8: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039868));
  fn2_1d9740(c);
  /* fddfc: add x0, x19, #0x468 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1128)));
  /* fde00: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039876));
  fn2_1bc084(c);
  /* fde04: add x0, x19, #0x480 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(1152)));
  /* fde08: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039884));
  fn2_1d9740(c);
  /* fde0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fde10: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fde14: str xzr, [x19, #0x488] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(1160)), ARC_X_R(c, 31));
  /* fde18: strb wzr, [x19, #0x490] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1168)), ARC_W_R(c, 31));
  /* fde1c: str xzr, [x19, #0x498] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(1176)), ARC_X_R(c, 31));
  /* fde20: bl #0x215300 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039908));
  fn2_215300(c);
  /* fde24: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* fde28: adrp x21, #0x25d000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2478080)));
  /* fde2c: ldr w9, [x8, #0x1b8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(440))));
  /* fde30: ldr x10, [x21, #0x1b0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 21) + INT64_C(432))));
  /* fde34: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* fde38: str w9, [x8, #0x1b8] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(440)), ARC_W_R(c, 9));
  /* fde3c: cbnz x10, #0xfde60 */
  if ((ARC_X_R(c, 10)) != 0) goto L_fde60;
  /* fde40: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* fde44: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* fde48: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* fde4c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* fde50: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039956));
  fn2_1b5d1c(c);
  /* fde54: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fde58: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039964));
  fn2_1d9740(c);
  /* fde5c: str x20, [x21, #0x1b0] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(432)), ARC_X_R(c, 20));
L_fde60:;
  /* fde60: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fde64: bl #0xfd5b4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039976));
  fn2_fd5b4(c);
  /* fde68: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* fde6c: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fde70: bl #0x1da27c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039988));
  fn2_1da27c(c);
  /* fde74: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fde78: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1039996));
  fn2_1d97fc(c);
  /* fde7c: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* fde80: bl #0x1da088 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040004));
  fn2_1da088(c);
  /* fde84: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fde88: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040012));
  fn2_1db4a4(c);
  /* fde8c: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* fde90: adrp x21, #0x253000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2437120)));
  /* fde94: add x21, x21, #0xa70 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2672)));
L_fde98:;
  /* fde98: ldr x1, [x21, x20] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + ARC_X_R(c, 20))));
  /* fde9c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fdea0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040036));
  fn2_1b7d24(c);
  /* fdea4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdea8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* fdeac: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040048));
  fn2_1bc2f8(c);
  /* fdeb0: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fdeb4: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdeb8: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040060));
  fn2_1db920(c);
  /* fdebc: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdec0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040068));
  fn2_1bc620(c);
  /* fdec4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fdec8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040076));
  fn2_1ccd9c(c);
  /* fdecc: add x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fded0: cmp x20, #0xd0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(208));
  /* fded4: b.ne #0xfde98 */
  if (ARC_COND(c, 1)) goto L_fde98;
  /* fded8: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* fdedc: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fdee0: bl #0x1dc768 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040100));
  fn2_1dc768(c);
  /* fdee4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fdee8: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040108));
  fn2_1db788(c);
  /* fdeec: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* fdef0: bl #0x1dc48c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040116));
  fn2_1dc48c(c);
  /* fdef4: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* fdef8: adrp x22, #0x253000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(2437120)));
  /* fdefc: add x22, x22, #0x700 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1792)));
L_fdf00:;
  /* fdf00: ldr x20, [x22, x21] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 22) + ARC_X_R(c, 21))));
  /* fdf04: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdf08: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fdf0c: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040144));
  fn2_1bc25c(c);
  /* fdf10: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fdf14: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* fdf18: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040156));
  fn2_1b7d24(c);
  /* fdf1c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fdf20: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fdf24: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040168));
  fn2_1bc2f8(c);
  /* fdf28: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* fdf2c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* fdf30: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040180));
  fn2_1bbfa0(c);
  /* fdf34: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdf38: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040188));
  fn2_1bcf04(c);
  /* fdf3c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fdf40: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040196));
  fn2_1bc620(c);
  /* fdf44: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fdf48: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040204));
  fn2_1ccd9c(c);
  /* fdf4c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdf50: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040212));
  fn2_1bc620(c);
  /* fdf54: add x21, x21, #8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fdf58: cmp x21, #0x70 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(112));
  /* fdf5c: b.ne #0xfdf00 */
  if (ARC_COND(c, 1)) goto L_fdf00;
  /* fdf60: add x0, x19, #0x58 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* fdf64: bl #0x1da088 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040232));
  fn2_1da088(c);
  /* fdf68: mov x27, xzr */
  ARC_X_W(c, 27, ARC_X_R(c, 31));
  /* fdf6c: adrp x28, #0x253000 */
  ARC_X_W(c, 28, (arc_image_bases[2] + UINT64_C(2437120)));
  /* fdf70: add x28, x28, #0x770 */
  ARC_X_W(c, 28, (ARC_X_R(c, 28) + UINT64_C(1904)));
  /* fdf74: adrp x20, #0x26000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(155648)));
  /* fdf78: add x20, x20, #0x829 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2089)));
  /* fdf7c: adrp x21, #0x23000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(143360)));
  /* fdf80: add x21, x21, #0xdba */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(3514)));
  /* fdf84: adrp x22, #0x1a000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(106496)));
  /* fdf88: add x22, x22, #0xa2a */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(2602)));
  /* fdf8c: adrp x23, #0x1c000 */
  ARC_X_W(c, 23, (arc_image_bases[2] + UINT64_C(114688)));
  /* fdf90: add x23, x23, #0xca5 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(3237)));
L_fdf94:;
  /* fdf94: add x24, x28, x27 */
  ARC_X_W(c, 24, (ARC_X_R(c, 28) + ARC_X_R(c, 27)));
  /* fdf98: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* fdf9c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* fdfa0: ldr x1, [x24] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 24)));
  /* fdfa4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040296));
  fn2_1b8fd4(c);
  /* fdfa8: ldpsw x25, x26, [x24, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(8));
    ARC_X_W(c, 25, (int64_t)(int32_t)arc_ld32(_pa));
    ARC_X_W(c, 26, (int64_t)(int32_t)arc_ld32(_pa + 4));
  }
  /* fdfac: ldrb w24, [x24, #0x10] */
  ARC_W_W(c, 24, arc_ld8((ARC_X_R(c, 24) + INT64_C(16))));
  /* fdfb0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fdfb4: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040312));
  fn2_1d9740(c);
  /* fdfb8: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdfbc: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* fdfc0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040324));
  fn2_1bc290(c);
  /* fdfc4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fdfc8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* fdfcc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040336));
  fn2_1b7d24(c);
  /* fdfd0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fdfd4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fdfd8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040348));
  fn2_1bc2f8(c);
  /* fdfdc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fdfe0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040356));
  fn2_1ccd9c(c);
  /* fdfe4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fdfe8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* fdfec: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040368));
  fn2_1bbfa0(c);
  /* fdff0: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fdff4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040376));
  fn2_1bcf04(c);
  /* fdff8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fdffc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040384));
  fn2_1bc620(c);
  /* fe000: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe004: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040392));
  fn2_1bc620(c);
  /* fe008: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe00c: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* fe010: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040404));
  fn2_1bc290(c);
  /* fe014: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe018: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* fe01c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040416));
  fn2_1b7d24(c);
  /* fe020: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fe024: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe028: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040428));
  fn2_1bc2f8(c);
  /* fe02c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe030: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040436));
  fn2_1ccd9c(c);
  /* fe034: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fe038: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* fe03c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040448));
  fn2_1bbfa0(c);
  /* fe040: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe044: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040456));
  fn2_1bcf04(c);
  /* fe048: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fe04c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040464));
  fn2_1bc620(c);
  /* fe050: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe054: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040472));
  fn2_1bc620(c);
  /* fe058: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe05c: mov w1, w24 */
  ARC_W_W(c, 1, ARC_W_R(c, 24));
  /* fe060: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040484));
  fn2_1bc25c(c);
  /* fe064: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe068: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* fe06c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040496));
  fn2_1b7d24(c);
  /* fe070: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fe074: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe078: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040508));
  fn2_1bc2f8(c);
  /* fe07c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe080: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040516));
  fn2_1ccd9c(c);
  /* fe084: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fe088: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* fe08c: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040528));
  fn2_1bbfa0(c);
  /* fe090: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe094: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040536));
  fn2_1bcf04(c);
  /* fe098: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fe09c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040544));
  fn2_1bc620(c);
  /* fe0a0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe0a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040552));
  fn2_1bc620(c);
  /* fe0a8: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe0ac: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* fe0b0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040564));
  fn2_1bc290(c);
  /* fe0b4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe0b8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* fe0bc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040576));
  fn2_1b7d24(c);
  /* fe0c0: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fe0c4: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe0c8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040588));
  fn2_1bc2f8(c);
  /* fe0cc: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe0d0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040596));
  fn2_1ccd9c(c);
  /* fe0d4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fe0d8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* fe0dc: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040608));
  fn2_1bbfa0(c);
  /* fe0e0: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe0e4: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040616));
  fn2_1bcf04(c);
  /* fe0e8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* fe0ec: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040624));
  fn2_1bc620(c);
  /* fe0f0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe0f4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040632));
  fn2_1bc620(c);
  /* fe0f8: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe0fc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* fe100: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040644));
  fn2_1bc530(c);
  /* fe104: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* fe108: sub x2, x29, #0x20 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe10c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fe110: bl #0x2188c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040660));
  fn2_2188c8(c);
  /* fe114: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* fe118: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040668));
  fn2_1bc620(c);
  /* fe11c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* fe120: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040676));
  fn2_1d97fc(c);
  /* fe124: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* fe128: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1040684));
  fn2_1d2d24(c);
  /* fe12c: add x27, x27, #0x18 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(24)));
  /* fe130: cmp x27, #0x2e8 */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(744));
  /* fe134: b.ne #0xfdf94 */
  if (ARC_COND(c, 1)) goto L_fdf94;
  /* fe138: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe13c: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fe140: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fe144: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* fe148: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* fe14c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe150: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* fe154: ret  */
  return;
}

void fn2_129814(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074452));
  /* 129814: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 129818: ret  */
  return;
}

void fn2_1299b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077074868));
  /* 1299b4: ldr x0, [x0, #0x98] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(152))));
  /* 1299b8: ret  */
  return;
}

void fn2_129af4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075188));
  /* 129af4: ldr x0, [x0, #0x118] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(280))));
  /* 129af8: ret  */
  return;
}

void fn2_129c34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075508));
  /* 129c34: ldr d0, [x0, #0x198] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(408))));
  /* 129c38: ret  */
  return;
}

void fn2_129d74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077075828));
  /* 129d74: add x1, x0, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(496)));
  /* 129d78: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129d7c: b #0x1db4b8 */
  fn2_1db4b8(c); return;
}

void fn2_129eb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076148));
  /* 129eb4: add x1, x0, #0x270 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(624)));
  /* 129eb8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129ebc: b #0x1d9754 */
  fn2_1d9754(c); return;
}

void fn2_129ff4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076468));
  /* 129ff4: add x1, x0, #0x308 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(776)));
  /* 129ff8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 129ffc: b #0x1d9754 */
  fn2_1d9754(c); return;
}

void fn2_12a134(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077076788));
  /* 12a134: add x1, x0, #0x381 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(897)));
  /* 12a138: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12a13c: b #0x1ccc88 */
  fn2_1ccc88(c); return;
}

void fn2_12a274(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077077108));
  /* 12a274: add x1, x0, #0x408 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(1032)));
  /* 12a278: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12a27c: b #0x1ccc88 */
  fn2_1ccc88(c); return;
}

void fn2_12a794(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077078420));
  /* 12a794: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12a798: ret  */
  return;
}

void fn2_12b610(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077082128));
  /* 12b610: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12b614: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12b618: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12b61c: ldp x9, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12b620: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 12b624: add x0, x1, x8, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 12b628: tbz w8, #0, #0x12b634 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12b634;
  /* 12b62c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 12b630: ldr x9, [x8, x9] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 9))));
L_12b634:;
  /* 12b634: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12b638: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1226300));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 12b63c: cbz x19, #0x12b694 */
  if ((ARC_X_R(c, 19)) == 0) goto L_12b694;
  /* 12b640: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 12b644: cbz x8, #0x12b688 */
  if ((ARC_X_R(c, 8)) == 0) goto L_12b688;
  /* 12b648: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 12b64c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12b650: ldr x9, [x9, #0x5f8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(1528))));
  /* 12b654: ldr x1, [x8, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 12b658: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 12b65c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1226336));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 12b660: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 12b664: cbz x0, #0x12b688 */
  if ((ARC_X_R(c, 0)) == 0) goto L_12b688;
L_12b668:;
  /* 12b668: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1226348));
  fn2_225abc(c);
  /* 12b66c: tbz w0, #0, #0x12b688 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_12b688;
  /* 12b670: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12b674: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 12b678: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 12b67c: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 12b680: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 12b684: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1226376));
  arc_dispatch(c, ARC_X_R(c, 9));
L_12b688:;
  /* 12b688: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12b68c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12b690: ret  */
  return;
L_12b694:;
  /* 12b694: adrp x0, #0x1d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(118784)));
  /* 12b698: add x0, x0, #0x4bd */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1213)));
  /* 12b69c: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 12b6a0: add x1, x1, #0x462 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1122)));
  /* 12b6a4: adrp x3, #0x23000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(143360)));
  /* 12b6a8: add x3, x3, #0xdc8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3528)));
  /* 12b6ac: mov w2, #0xf6 */
  ARC_W_W(c, 2, UINT64_C(246));
  /* 12b6b0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 12b6b4: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 12b6b8: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1226428));
  fn2_1b54b0(c);
  /* 12b6bc: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 12b6c0: cbnz x0, #0x12b668 */
  if ((ARC_X_R(c, 0)) != 0) goto L_12b668;
  /* 12b6c4: b #0x12b688 */
  goto L_12b688;
}

void fn2_12ce3c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077088316));
  /* 12ce3c: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 12ce40: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12ce44: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 12ce48: lsl w8, w8, #2 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(2)) & 31)));
  /* 12ce4c: csel w0, wzr, w8, lt */
  ARC_W_W(c, 0, (ARC_COND(c, 11) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* 12ce50: ret  */
  return;
}

void fn2_12e084(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077092996));
  /* 12e084: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e088: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 12e08c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12e090: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12e094: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 12e098: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 12e09c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 12e0a0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12e0a4: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 12e0a8: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 12e0ac: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237168));
  fn2_1b5d1c(c);
  /* 12e0b0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 12e0b4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 12e0b8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 12e0bc: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 12e0c0: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 12e0c4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12e0c8: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 12e0cc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237200));
  fn2_1d2c2c(c);
  /* 12e0d0: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12e0d4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237208));
  fn2_1d2c2c(c);
  /* 12e0d8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 12e0dc: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 12e0e0: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 12e0e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e0e8: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 12e0ec: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 12e0f0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 12e0f4: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12e0f8: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 12e0fc: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 12e100: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 12e104: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 12e108: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 12e10c: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237264));
  fn2_1b5e68(c);
  /* 12e110: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 12e114: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12e118: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 12e11c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 12e120: tbz w8, #0, #0x12e15c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12e15c;
L_12e124:;
  /* 12e124: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12e128: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 12e12c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12e130: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237300));
  fn2_1d2c40(c);
  /* 12e134: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 12e138: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12e13c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237312));
  fn2_1d5dc0(c);
  /* 12e140: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 12e144: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237320));
  fn2_1d2d24(c);
  /* 12e148: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e14c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12e150: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12e154: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12e158: ret  */
  return;
L_12e15c:;
  /* 12e15c: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12e160: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12e164: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237352));
  fn2_24b710(c);
  /* 12e168: cbz w0, #0x12e124 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12e124;
  /* 12e16c: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12e170: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 12e174: nop  */
  /* nop: no architectural effect here */
  /* 12e178: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 12e17c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12e180: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237380));
  fn2_1b907c(c);
  /* 12e184: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 12e188: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 12e18c: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 12e190: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 12e194: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 12e198: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237404));
  fn2_24b6f0(c);
  /* 12e19c: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 12e1a0: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 12e1a4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1237416));
  fn2_24b720(c);
  /* 12e1a8: b #0x12e124 */
  goto L_12e124;
}

void fn2_12f3a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077097888));
  /* 12f3a0: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* 12f3a4: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12f3a8: str x27, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 27));
  /* 12f3ac: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 12f3b0: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12f3b4: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12f3b8: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12f3bc: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 12f3c0: ldp x9, x8, [x6] */
  { const uint64_t _pa = ARC_X_R(c, 6);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12f3c4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 12f3c8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 12f3cc: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* 12f3d0: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 12f3d4: mov w25, w4 */
  ARC_W_W(c, 25, ARC_W_R(c, 4));
  /* 12f3d8: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 12f3dc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 12f3e0: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 12f3e4: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 12f3e8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 12f3ec: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 12f3f0: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 12f3f4: add x26, sp, #0x20 */
  ARC_X_W(c, 26, ((c)->sp + UINT64_C(32)));
  /* 12f3f8: mul x27, x8, x9 */
  ARC_X_W(c, 27, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 12f3fc: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242112));
  fn2_1bc084(c);
  /* 12f400: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 12f404: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242120));
  fn2_1bc084(c);
  /* 12f408: cmp w25, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(0));
  /* 12f40c: b.le #0x12f468 */
  if (ARC_COND(c, 13)) goto L_12f468;
  /* 12f410: ldr x1, [x24] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 24)));
  /* 12f414: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12f418: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242140));
  fn2_1bc09c(c);
  /* 12f41c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 12f420: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 12f424: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242152));
  fn2_1bcf04(c);
  /* 12f428: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12f42c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242160));
  fn2_1bc620(c);
  /* 12f430: cmp w25, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(1));
  /* 12f434: b.eq #0x12f484 */
  if (ARC_COND(c, 0)) goto L_12f484;
  /* 12f438: ldr x1, [x24, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 24) + INT64_C(8))));
  /* 12f43c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12f440: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242180));
  fn2_1bc09c(c);
  /* 12f444: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 12f448: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 12f44c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242192));
  fn2_1bcf04(c);
  /* 12f450: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12f454: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242200));
  fn2_1bc620(c);
  /* 12f458: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* 12f45c: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 12f460: tbnz w21, #0, #0x12f4ac */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_12f4ac;
  /* 12f464: b #0x12f4b4 */
  goto L_12f4b4;
L_12f468:;
  /* 12f468: sub w8, w27, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(2)));
  /* 12f46c: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 12f470: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 12f474: nop  */
  /* nop: no architectural effect here */
  /* 12f478: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 12f47c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 12f480: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242244));
  fn2_1bce10(c);
L_12f484:;
  /* 12f484: sub w8, w27, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) - UINT64_C(1)));
  /* 12f488: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 12f48c: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 12f490: nop  */
  /* nop: no architectural effect here */
  /* 12f494: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 12f498: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 12f49c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242272));
  fn2_1bce10(c);
  /* 12f4a0: add x22, x22, x21, asr #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> 1))));
  /* 12f4a4: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 12f4a8: tbz w21, #0, #0x12f4b4 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) == 0) goto L_12f4b4;
L_12f4ac:;
  /* 12f4ac: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* 12f4b0: ldr x19, [x8, x19] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 19))));
L_12f4b4:;
  /* 12f4b4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 12f4b8: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 12f4bc: add x20, sp, #0x20 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(32)));
  /* 12f4c0: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242308));
  fn2_1bc84c(c);
  /* 12f4c4: add x0, x26, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + UINT64_C(24)));
  /* 12f4c8: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242316));
  fn2_1bc630(c);
  /* 12f4cc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 12f4d0: and w2, w0, #1 */
  ARC_W_W(c, 2, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* 12f4d4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 12f4d8: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242332));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 12f4dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 12f4e0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242340));
  fn2_1ccd9c(c);
  /* 12f4e4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 12f4e8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242348));
  fn2_1bc620(c);
  /* 12f4ec: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 12f4f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1242356));
  fn2_1bc620(c);
  /* 12f4f4: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12f4f8: ldr x27, [sp, #0x60] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(96))));
  /* 12f4fc: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12f500: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 12f504: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 12f508: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12f50c: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* 12f510: ret  */
  return;
}

void fn2_130810(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077103120));
  /* 130810: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 130814: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 130818: str x21, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 21));
  /* 13081c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 130820: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 130824: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 130828: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 13082c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 130830: str wzr, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 31));
  /* 130834: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247288));
  fn2_1d2c2c(c);
  /* 130838: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 13083c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247296));
  fn2_1d2c2c(c);
  /* 130840: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 130844: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 130848: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247308));
  fn2_1ccc74(c);
  /* 13084c: mov w21, #6 */
  ARC_W_W(c, 21, UINT64_C(6));
  /* 130850: cmp w20, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(3));
  /* 130854: str w21, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 21));
  /* 130858: b.hi #0x1308b4 */
  if (ARC_COND(c, 8)) goto L_1308b4;
  /* 13085c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 130860: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 130864: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 130868: str wzr, [sp] */
  arc_st32((c)->sp, ARC_W_R(c, 31));
  /* 13086c: bl #0xb1e98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247344));
  fn2_b1e98(c);
  /* 130870: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 130874: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 130878: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13087c: bl #0xb1e98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247360));
  fn2_b1e98(c);
  /* 130880: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 130884: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 130888: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13088c: bl #0xb1e98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247376));
  fn2_b1e98(c);
  /* 130890: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 130894: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 130898: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 13089c: bl #0xb1e98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247392));
  fn2_b1e98(c);
  /* 1308a0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1308a4: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1308a8: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1308ac: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1308b0: ret  */
  return;
L_1308b4:;
  /* 1308b4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1308b8: mov x20, sp */
  ARC_X_W(c, 20, (c)->sp);
  /* 1308bc: str wzr, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 31));
  /* 1308c0: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 1308c4: stp q0, q0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 1308c8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247436));
  fn2_1d2c2c(c);
  /* 1308cc: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 1308d0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247444));
  fn2_1d2c2c(c);
  /* 1308d4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1308d8: str wzr, [sp, #0x14] */
  arc_st32(((c)->sp + INT64_C(20)), ARC_W_R(c, 31));
  /* 1308dc: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247456));
  fn2_1ccc74(c);
  /* 1308e0: ldr w8, [sp] */
  ARC_W_W(c, 8, arc_ld32((c)->sp));
  /* 1308e4: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1308e8: orr x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 1308ec: str w21, [sp, #0x20] */
  arc_st32(((c)->sp + INT64_C(32)), ARC_W_R(c, 21));
  /* 1308f0: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1308f4: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247480));
  fn2_1d2b98(c);
  /* 1308f8: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1308fc: orr x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 130900: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247492));
  fn2_1d2b98(c);
  /* 130904: ldr w8, [sp, #0x14] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(20))));
  /* 130908: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 13090c: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 130910: str w8, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 8));
  /* 130914: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247512));
  fn2_1d0708(c);
  /* 130918: ldr w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(32))));
  /* 13091c: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 130920: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 130924: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247528));
  fn2_1ccd9c(c);
  /* 130928: orr x0, x20, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(12)));
  /* 13092c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247536));
  fn2_1d2d24(c);
  /* 130930: orr x0, x20, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) | UINT64_C(4)));
  /* 130934: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1247544));
  fn2_1d2d24(c);
  /* 130938: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13093c: ldr x21, [sp, #0x40] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(64))));
  /* 130940: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 130944: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 130948: ret  */
  return;
}

void fn2_13204c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077109324));
  /* 13204c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 132050: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 132054: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 132058: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13205c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 132060: ldp x21, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 132064: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 132068: add x19, x1, x8, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 13206c: tbz w8, #0, #0x132078 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_132078;
  /* 132070: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 132074: ldr x21, [x8, x21] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
L_132078:;
  /* 132078: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 13207c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 132080: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1253508));
  fn2_1ccc88(c);
  /* 132084: ldr x1, [x20, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 132088: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13208c: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1253520));
  fn2_1ccc88(c);
  /* 132090: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 132094: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 132098: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13209c: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1253536));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1320a0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1320a4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1253544));
  fn2_1ccd9c(c);
  /* 1320a8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1320ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1253552));
  fn2_1ccd9c(c);
  /* 1320b0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1320b4: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1320b8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1320bc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1320c0: ret  */
  return;
}

void fn2_133860(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077115488));
  /* 133860: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 133864: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 133868: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13386c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 133870: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 133874: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 133878: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 13387c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 133880: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 133884: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 133888: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259660));
  fn2_1b5d1c(c);
  /* 13388c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 133890: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 133894: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 133898: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 13389c: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1338a0: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1338a4: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1338a8: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259692));
  fn2_1d2c2c(c);
  /* 1338ac: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1338b0: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259700));
  fn2_1d2c2c(c);
  /* 1338b4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1338b8: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 1338bc: add x8, x8, #0x558 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1368)));
  /* 1338c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1338c4: mov w1, #5 */
  ARC_W_W(c, 1, UINT64_C(5));
  /* 1338c8: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 1338cc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1338d0: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1338d4: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 1338d8: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 1338dc: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 1338e0: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 1338e4: mov w20, #5 */
  ARC_W_W(c, 20, UINT64_C(5));
  /* 1338e8: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259756));
  fn2_1b5e68(c);
  /* 1338ec: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 1338f0: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1338f4: add x8, x8, #0x1c8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(456)));
  /* 1338f8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1338fc: tbz w8, #0, #0x133938 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_133938;
L_133900:;
  /* 133900: adrp x1, #0x25d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 133904: add x1, x1, #0x1bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(444)));
  /* 133908: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13390c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259792));
  fn2_1d2c40(c);
  /* 133910: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 133914: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 133918: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259804));
  fn2_1d5dc0(c);
  /* 13391c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 133920: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259812));
  fn2_1d2d24(c);
  /* 133924: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133928: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13392c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 133930: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 133934: ret  */
  return;
L_133938:;
  /* 133938: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13393c: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 133940: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259844));
  fn2_24b710(c);
  /* 133944: cbz w0, #0x133900 */
  if ((ARC_W_R(c, 0)) == 0) goto L_133900;
  /* 133948: adrp x20, #0x25d000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13394c: add x20, x20, #0x1bc */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(444)));
  /* 133950: nop  */
  /* nop: no architectural effect here */
  /* 133954: adr x1, #0x363e8 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(222184)));
  /* 133958: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13395c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259872));
  fn2_1b907c(c);
  /* 133960: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 133964: adrp x2, #0x24f000 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2420736)));
  /* 133968: add x2, x2, #0x980 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2432)));
  /* 13396c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 133970: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 133974: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259896));
  fn2_24b6f0(c);
  /* 133978: adrp x0, #0x25d000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 13397c: add x0, x0, #0x1c8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(456)));
  /* 133980: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1259908));
  fn2_24b720(c);
  /* 133984: b #0x133900 */
  goto L_133900;
}

void fn2_134f54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077121364));
  /* 134f54: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 134f58: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134f5c: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 134f60: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 134f64: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 134f68: add x19, x0, x2, asr #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 0) + ((uint64_t)((int64_t)(ARC_X_R(c, 2)) >> 1))));
  /* 134f6c: mov x21, x3 */
  ARC_X_W(c, 21, ARC_X_R(c, 3));
  /* 134f70: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 134f74: tbz w2, #0, #0x134f80 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_134f80;
  /* 134f78: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 134f7c: ldr x20, [x8, x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 20))));
L_134f80:;
  /* 134f80: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* 134f84: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 134f88: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265548));
  fn2_1ccc88(c);
  /* 134f8c: ldr x1, [x21, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* 134f90: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134f94: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265560));
  fn2_1ccc88(c);
  /* 134f98: ldr x1, [x21, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 134f9c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 134fa0: bl #0x1db4b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265572));
  fn2_1db4b8(c);
  /* 134fa4: ldr x1, [x21, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 134fa8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 134fac: bl #0x1d788c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265584));
  fn2_1d788c(c);
  /* 134fb0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 134fb4: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134fb8: add x3, sp, #0x10 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(16)));
  /* 134fbc: mov x4, sp */
  ARC_X_W(c, 4, (c)->sp);
  /* 134fc0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134fc4: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265608));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 134fc8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 134fcc: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265616));
  fn2_1d79fc(c);
  /* 134fd0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 134fd4: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265624));
  fn2_1db788(c);
  /* 134fd8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 134fdc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265632));
  fn2_1ccd9c(c);
  /* 134fe0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 134fe4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1265640));
  fn2_1ccd9c(c);
  /* 134fe8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 134fec: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 134ff0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134ff4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 134ff8: ret  */
  return;
}

void fn2_1361cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077126092));
  /* 1361cc: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 1361d0: stp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1361d4: stp x28, x27, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1361d8: stp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1361dc: stp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1361e0: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1361e4: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1361e8: add x29, sp, #0x90 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(144)));
  /* 1361ec: ldp x9, x8, [x7] */
  { const uint64_t _pa = ARC_X_R(c, 7);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1361f0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1361f4: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1361f8: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* 1361fc: stp x5, x6, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* 136200: mov w28, w4 */
  ARC_W_W(c, 28, ARC_W_R(c, 4));
  /* 136204: mov x27, x3 */
  ARC_X_W(c, 27, ARC_X_R(c, 3));
  /* 136208: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 13620c: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 136210: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 136214: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 136218: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 13621c: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 136220: add x20, sp, #0x48 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(72)));
  /* 136224: mul x19, x8, x9 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 136228: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270316));
  fn2_1bc084(c);
  /* 13622c: add x26, x20, #0x18 */
  ARC_X_W(c, 26, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 136230: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 136234: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270328));
  fn2_1bc084(c);
  /* 136238: add x25, x20, #0x30 */
  ARC_X_W(c, 25, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 13623c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 136240: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270340));
  fn2_1bc084(c);
  /* 136244: cmp w28, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(0));
  /* 136248: b.le #0x1362c8 */
  if (ARC_COND(c, 13)) goto L_1362c8;
  /* 13624c: ldr x1, [x27] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 27)));
  /* 136250: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 136254: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270360));
  fn2_1bc09c(c);
  /* 136258: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 13625c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 136260: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270372));
  fn2_1bcf04(c);
  /* 136264: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 136268: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270380));
  fn2_1bc620(c);
  /* 13626c: cmp w28, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(1));
  /* 136270: str x20, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 20));
  /* 136274: b.eq #0x1362e8 */
  if (ARC_COND(c, 0)) goto L_1362e8;
  /* 136278: ldr x1, [x27, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 27) + INT64_C(8))));
  /* 13627c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 136280: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270404));
  fn2_1bc09c(c);
  /* 136284: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 136288: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 13628c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270416));
  fn2_1bcf04(c);
  /* 136290: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 136294: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270424));
  fn2_1bc620(c);
  /* 136298: cmp w28, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 28), UINT64_C(2));
  /* 13629c: str x26, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 26));
  /* 1362a0: b.ls #0x136308 */
  if (ARC_COND(c, 9)) goto L_136308;
  /* 1362a4: ldr x1, [x27, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* 1362a8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1362ac: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270448));
  fn2_1bc09c(c);
  /* 1362b0: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1362b4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1362b8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270460));
  fn2_1bcf04(c);
  /* 1362bc: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1362c0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270468));
  fn2_1bc620(c);
  /* 1362c4: b #0x136324 */
  goto L_136324;
L_1362c8:;
  /* 1362c8: sub w8, w19, #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(3)));
  /* 1362cc: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 1362d0: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* 1362d4: nop  */
  /* nop: no architectural effect here */
  /* 1362d8: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 1362dc: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1362e0: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270500));
  fn2_1bce10(c);
  /* 1362e4: str x20, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 20));
L_1362e8:;
  /* 1362e8: sub w8, w19, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(2)));
  /* 1362ec: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 1362f0: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* 1362f4: nop  */
  /* nop: no architectural effect here */
  /* 1362f8: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 1362fc: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 136300: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270532));
  fn2_1bce10(c);
  /* 136304: str x26, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 26));
L_136308:;
  /* 136308: sub w8, w19, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(1)));
  /* 13630c: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 136310: ldr x10, [x24] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 24)));
  /* 136314: nop  */
  /* nop: no architectural effect here */
  /* 136318: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 13631c: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 136320: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270564));
  fn2_1bce10(c);
L_136324:;
  /* 136324: ldp x4, x5, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 4, arc_ld64(_pa));
    ARC_X_W(c, 5, arc_ld64(_pa + 8));
  }
  /* 136328: add x3, sp, #0x30 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(48)));
  /* 13632c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 136330: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 136334: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 136338: str x25, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 25));
  /* 13633c: bl #0x13637c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270592));
  fn2_13637c(c);
  /* 136340: add x19, sp, #0x48 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(72)));
  /* 136344: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 136348: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270604));
  fn2_1bc620(c);
  /* 13634c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 136350: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270612));
  fn2_1bc620(c);
  /* 136354: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 136358: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1270620));
  fn2_1bc620(c);
  /* 13635c: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136360: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 136364: ldp x24, x23, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 136368: ldp x26, x25, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13636c: ldp x28, x27, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 136370: ldp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136374: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 136378: ret  */
  return;
}

void fn2_137404(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077130756));
  /* 137404: sub sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(272)));
  /* 137408: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13740c: stp x28, x27, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 137410: stp x26, x25, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 137414: stp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 137418: stp x22, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13741c: stp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137420: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* 137424: ldp x9, x8, [x6] */
  { const uint64_t _pa = ARC_X_R(c, 6);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 137428: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13742c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 137430: mov x23, x6 */
  ARC_X_W(c, 23, ARC_X_R(c, 6));
  /* 137434: stp x2, x5, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 5));
  }
  /* 137438: mov w27, w4 */
  ARC_W_W(c, 27, ARC_W_R(c, 4));
  /* 13743c: mov x26, x3 */
  ARC_X_W(c, 26, ARC_X_R(c, 3));
  /* 137440: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 137444: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 137448: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 13744c: add x20, sp, #0x48 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(72)));
  /* 137450: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 137454: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 137458: mul x19, x8, x9 */
  ARC_X_W(c, 19, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 13745c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274976));
  fn2_1bc084(c);
  /* 137460: add x28, x20, #0x18 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 137464: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 137468: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1274988));
  fn2_1bc084(c);
  /* 13746c: add x25, x20, #0x30 */
  ARC_X_W(c, 25, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 137470: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 137474: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275000));
  fn2_1bc084(c);
  /* 137478: add x24, x20, #0x48 */
  ARC_X_W(c, 24, (ARC_X_R(c, 20) + UINT64_C(72)));
  /* 13747c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 137480: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275012));
  fn2_1bc084(c);
  /* 137484: cmp w27, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(0));
  /* 137488: b.le #0x137534 */
  if (ARC_COND(c, 13)) goto L_137534;
  /* 13748c: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 137490: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 137494: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275032));
  fn2_1bc09c(c);
  /* 137498: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 13749c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1374a0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275044));
  fn2_1bcf04(c);
  /* 1374a4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1374a8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275052));
  fn2_1bc620(c);
  /* 1374ac: cmp w27, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(1));
  /* 1374b0: str x20, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 20));
  /* 1374b4: b.eq #0x137554 */
  if (ARC_COND(c, 0)) goto L_137554;
  /* 1374b8: ldr x1, [x26, #8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 1374bc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1374c0: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275076));
  fn2_1bc09c(c);
  /* 1374c4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1374c8: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 1374cc: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275088));
  fn2_1bcf04(c);
  /* 1374d0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1374d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275096));
  fn2_1bc620(c);
  /* 1374d8: cmp w27, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(2));
  /* 1374dc: str x28, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 28));
  /* 1374e0: b.ls #0x137574 */
  if (ARC_COND(c, 9)) goto L_137574;
  /* 1374e4: ldr x1, [x26, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 1374e8: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 1374ec: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275120));
  fn2_1bc09c(c);
  /* 1374f0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1374f4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 1374f8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275132));
  fn2_1bcf04(c);
  /* 1374fc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 137500: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275140));
  fn2_1bc620(c);
  /* 137504: cmp w27, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 27), UINT64_C(3));
  /* 137508: str x25, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 25));
  /* 13750c: b.eq #0x137594 */
  if (ARC_COND(c, 0)) goto L_137594;
  /* 137510: ldr x1, [x26, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 137514: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 137518: bl #0x1bc09c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275164));
  fn2_1bc09c(c);
  /* 13751c: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 137520: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 137524: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275176));
  fn2_1bcf04(c);
  /* 137528: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 13752c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275184));
  fn2_1bc620(c);
  /* 137530: b #0x1375b0 */
  goto L_1375b0;
L_137534:;
  /* 137534: sub w8, w19, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(4)));
  /* 137538: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13753c: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 137540: nop  */
  /* nop: no architectural effect here */
  /* 137544: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 137548: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 13754c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275216));
  fn2_1bce10(c);
  /* 137550: str x20, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 20));
L_137554:;
  /* 137554: sub w8, w19, #3 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(3)));
  /* 137558: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13755c: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 137560: nop  */
  /* nop: no architectural effect here */
  /* 137564: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 137568: mov x0, x28 */
  ARC_X_W(c, 0, ARC_X_R(c, 28));
  /* 13756c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275248));
  fn2_1bce10(c);
  /* 137570: str x28, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 28));
L_137574:;
  /* 137574: sub w8, w19, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(2)));
  /* 137578: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13757c: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 137580: nop  */
  /* nop: no architectural effect here */
  /* 137584: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 137588: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 13758c: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275280));
  fn2_1bce10(c);
  /* 137590: str x25, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 25));
L_137594:;
  /* 137594: sub w8, w19, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 19) - UINT64_C(1)));
  /* 137598: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 13759c: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* 1375a0: nop  */
  /* nop: no architectural effect here */
  /* 1375a4: smaddl x1, w8, w9, x10 */
  ARC_X_W(c, 1, (((int64_t)(ARC_X_R(c, 10))) + (((int64_t)(int32_t)(ARC_W_R(c, 8))) * ((int64_t)(int32_t)(ARC_W_R(c, 9))))));
  /* 1375a8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1375ac: bl #0x1bce10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275312));
  fn2_1bce10(c);
L_1375b0:;
  /* 1375b0: ldp x2, x4, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 4, arc_ld64(_pa + 8));
  }
  /* 1375b4: add x3, sp, #0x28 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(40)));
  /* 1375b8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1375bc: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1375c0: str x24, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 24));
  /* 1375c4: bl #0x13760c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275336));
  fn2_13760c(c);
  /* 1375c8: add x19, sp, #0x48 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(72)));
  /* 1375cc: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* 1375d0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275348));
  fn2_1bc620(c);
  /* 1375d4: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 1375d8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275356));
  fn2_1bc620(c);
  /* 1375dc: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1375e0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275364));
  fn2_1bc620(c);
  /* 1375e4: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1375e8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1275372));
  fn2_1bc620(c);
  /* 1375ec: ldp x20, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1375f0: ldp x22, x21, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1375f4: ldp x24, x23, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1375f8: ldp x26, x25, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 1375fc: ldp x28, x27, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 137600: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137604: add sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(272)));
  /* 137608: ret  */
  return;
}

void fn2_13896c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077136236));
  /* 13896c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 138970: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 138974: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 138978: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13897c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138980: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 138984: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 138988: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 13898c: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 138990: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 138994: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 138998: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 13899c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1280416));
  fn2_1bc084(c);
  /* 1389a0: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 1389a4: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 1389a8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1389ac: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 1389b0: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* 1389b4: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 1389b8: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* 1389bc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1389c0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1389c4: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1389c8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1389cc: b #0x138a74 */
  fn2_138a74(c); return;
}

void fn2_139ec4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077141700));
  /* 139ec4: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 139ec8: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 139ecc: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 139ed0: csel w0, w9, w8, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 139ed4: ret  */
  return;
}

void fn2_13b334(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077146932));
  /* 13b334: cmp w1, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4));
  /* 13b338: b.hi #0x13b378 */
  if (ARC_COND(c, 8)) goto L_13b378;
  /* 13b33c: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 13b340: mov w8, #0x1d */
  ARC_W_W(c, 8, UINT64_C(29));
  /* 13b344: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 13b348: csel w8, w8, wzr, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 13b34c: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 13b350: mov w10, #0x1b */
  ARC_W_W(c, 10, UINT64_C(27));
  /* 13b354: csel w8, w9, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 13b358: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 13b35c: csel w8, w10, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* 13b360: cmp w1, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(3));
  /* 13b364: csel w8, w9, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 13b368: cmp w1, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(4));
  /* 13b36c: mov w9, #0x19 */
  ARC_W_W(c, 9, UINT64_C(25));
  /* 13b370: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 13b374: ret  */
  return;
L_13b378:;
  /* 13b378: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 13b37c: ret  */
  return;
}

void fn2_13c6dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077151964));
  /* 13c6dc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13c6e0: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13c6e4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13c6e8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13c6ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13c6f0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 13c6f4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 13c6f8: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 13c6fc: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 13c700: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 13c704: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 13c708: mov x24, x8 */
  ARC_X_W(c, 24, ARC_X_R(c, 8));
  /* 13c70c: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1296144));
  fn2_1bc084(c);
  /* 13c710: ldp x1, x2, [x23, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(96));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 13c714: add x7, x23, #0x48 */
  ARC_X_W(c, 7, (ARC_X_R(c, 23) + UINT64_C(72)));
  /* 13c718: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13c71c: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 13c720: mov w4, w20 */
  ARC_W_W(c, 4, ARC_W_R(c, 20));
  /* 13c724: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* 13c728: mov x6, x19 */
  ARC_X_W(c, 6, ARC_X_R(c, 19));
  /* 13c72c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13c730: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13c734: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13c738: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13c73c: b #0x13c968 */
  fn2_13c968(c); return;
}

void fn2_13f1d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077162964));
  /* 13f1d4: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 13f1d8: stp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13f1dc: str x25, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), ARC_X_R(c, 25));
  /* 13f1e0: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13f1e4: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13f1e8: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13f1ec: add x29, sp, #0x70 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(112)));
  /* 13f1f0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13f1f4: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 13f1f8: mov x21, x7 */
  ARC_X_W(c, 21, ARC_X_R(c, 7));
  /* 13f1fc: mov x22, x6 */
  ARC_X_W(c, 22, ARC_X_R(c, 6));
  /* 13f200: mov x23, x5 */
  ARC_X_W(c, 23, ARC_X_R(c, 5));
  /* 13f204: mov w24, w4 */
  ARC_W_W(c, 24, ARC_W_R(c, 4));
  /* 13f208: mov x25, x2 */
  ARC_X_W(c, 25, ARC_X_R(c, 2));
  /* 13f20c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13f210: bl #0xfe5ac */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307156));
  fn2_fe5ac(c);
  /* 13f214: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 13f218: add x1, x1, #0x9c2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2498)));
  /* 13f21c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f220: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13f224: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307176));
  fn2_1b8fd4(c);
  /* 13f228: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 13f22c: add x1, x1, #0x2c0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(704)));
  /* 13f230: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 13f234: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13f238: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307196));
  fn2_1b8fd4(c);
  /* 13f23c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f240: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 13f244: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307208));
  fn2_1bc25c(c);
  /* 13f248: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f24c: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 13f250: sub x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f254: bl #0x1495c8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307224));
  fn2_1495c8(c);
  /* 13f258: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f25c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307232));
  fn2_1bc620(c);
  /* 13f260: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 13f264: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307240));
  fn2_1d2d24(c);
  /* 13f268: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f26c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307248));
  fn2_1d2d24(c);
  /* 13f270: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13f274: bl #0x155e1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307256));
  fn2_155e1c(c);
  /* 13f278: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 13f27c: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 13f280: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307268));
  fn2_1dc718(c);
  /* 13f284: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 13f288: str x20, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), ARC_X_R(c, 20));
  /* 13f28c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 13f290: b.ne #0x13f350 */
  if (ARC_COND(c, 1)) goto L_13f350;
  /* 13f294: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 13f298: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 13f29c: add x0, x19, #0x1ca */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(458)));
  /* 13f2a0: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307300));
  fn2_1b865c(c);
  /* 13f2a4: tbz w0, #0, #0x13f350 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13f350;
  /* 13f2a8: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 13f2ac: cbz x8, #0x13f610 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13f610;
  /* 13f2b0: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 13f2b4: add x1, x1, #0x88b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2187)));
  /* 13f2b8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f2bc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307328));
  fn2_1b7d24(c);
  /* 13f2c0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f2c4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f2c8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307340));
  fn2_1bc2f8(c);
  /* 13f2cc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f2d0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307348));
  fn2_1ccd9c(c);
  /* 13f2d4: ldr x25, [x19, #0x30] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 13f2d8: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 13f2dc: add x1, x1, #0xcaf */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3247)));
  /* 13f2e0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13f2e4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13f2e8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307372));
  fn2_1b8fd4(c);
  /* 13f2ec: add x8, sp, #0x28 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(40)));
  /* 13f2f0: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 13f2f4: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 13f2f8: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307388));
  fn2_21fe38(c);
  /* 13f2fc: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f300: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 13f304: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f308: add x2, sp, #0x28 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(40)));
  /* 13f30c: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307408));
  fn2_1d9c5c(c);
  /* 13f310: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13f314: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f318: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307420));
  fn2_1bc84c(c);
  /* 13f31c: add x0, x19, #0x1ca */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(458)));
  /* 13f320: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13f324: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307432));
  fn2_1d0708(c);
  /* 13f328: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 13f32c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307440));
  fn2_1ccd9c(c);
  /* 13f330: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f334: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307448));
  fn2_1bc620(c);
  /* 13f338: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 13f33c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307456));
  fn2_1bc620(c);
  /* 13f340: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 13f344: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307464));
  fn2_1d2d24(c);
  /* 13f348: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f34c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307472));
  fn2_1bc620(c);
L_13f350:;
  /* 13f350: adrp x9, #0x37000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(225280)));
  /* 13f354: mov w8, #0x100 */
  ARC_W_W(c, 8, UINT64_C(256));
  /* 13f358: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 13f35c: ldr q0, [x9, #0x9b0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2480)) + 8));
  /* 13f360: sturh w8, [x19, #0x89] */
  arc_st16((ARC_X_R(c, 19) + INT64_C(137)), ARC_W_R(c, 8));
  /* 13f364: and w8, w24, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 24) & UINT64_C(1)));
  /* 13f368: ldr x24, [x29, #0x50] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 29) + INT64_C(80))));
  /* 13f36c: add x0, x19, #0x2d8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(728)));
  /* 13f370: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13f374: strb w25, [x19, #0x69] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(105)), ARC_W_R(c, 25));
  /* 13f378: str xzr, [x19, #0x1c0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(448)), ARC_X_R(c, 31));
  /* 13f37c: strb wzr, [x19, #0x1c9] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(457)), ARC_W_R(c, 31));
  /* 13f380: str q0, [x19, #0x390] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(912)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(912)) + 8, (c)->q[0].u64[1]);
  /* 13f384: strb wzr, [x19, #0x380] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(896)), ARC_W_R(c, 31));
  /* 13f388: strb w8, [x19, #0x128] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(296)), ARC_W_R(c, 8));
  /* 13f38c: str x23, [x19, #0x2d0] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(720)), ARC_X_R(c, 23));
  /* 13f390: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307540));
  fn2_1d06b8(c);
  /* 13f394: add x0, x19, #0x2e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(736)));
  /* 13f398: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13f39c: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307552));
  fn2_1d06b8(c);
  /* 13f3a0: add x0, x19, #0x2f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(752)));
  /* 13f3a4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 13f3a8: bl #0x1dc718 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307564));
  fn2_1dc718(c);
  /* 13f3ac: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13f3b0: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307572));
  fn2_1db794(c);
  /* 13f3b4: cmp x0, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 20));
  /* 13f3b8: b.le #0x13f3d0 */
  if (ARC_COND(c, 13)) goto L_13f3d0;
  /* 13f3bc: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13f3c0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13f3c4: bl #0x1bbf38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307592));
  fn2_1bbf38(c);
  /* 13f3c8: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307596));
  fn2_1bc668(c);
  /* 13f3cc: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
L_13f3d0:;
  /* 13f3d0: ldr x20, [x19, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 13f3d4: str x25, [x19, #0x2f8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(760)), ARC_X_R(c, 25));
  /* 13f3d8: str xzr, [x19, #0xb8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(184)), ARC_X_R(c, 31));
  /* 13f3dc: cbz x20, #0x13f5f0 */
  if ((ARC_X_R(c, 20)) == 0) goto L_13f5f0;
  /* 13f3e0: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 13f3e4: add x1, x1, #0x843 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2115)));
  /* 13f3e8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f3ec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13f3f0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307636));
  fn2_1b8fd4(c);
  /* 13f3f4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f3f8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 13f3fc: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307648));
  fn2_1bc25c(c);
  /* 13f400: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f404: sub x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f408: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13f40c: bl #0x21fd30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307664));
  fn2_21fd30(c);
  /* 13f410: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f414: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307672));
  fn2_1bc620(c);
  /* 13f418: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f41c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307680));
  fn2_1d2d24(c);
  /* 13f420: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 13f424: add x1, x1, #0xc37 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3127)));
  /* 13f428: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f42c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307696));
  fn2_1b7d24(c);
  /* 13f430: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f434: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f438: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307708));
  fn2_1bc2f8(c);
  /* 13f43c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f440: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307716));
  fn2_1ccd9c(c);
  /* 13f444: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 13f448: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f44c: bl #0x1d998c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307728));
  fn2_1d998c(c);
  /* 13f450: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 13f454: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f458: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307740));
  fn2_1bc620(c);
  /* 13f45c: tbz w20, #0, #0x13f51c */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_13f51c;
  /* 13f460: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 13f464: add x1, x1, #0xc37 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3127)));
  /* 13f468: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f46c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307760));
  fn2_1b7d24(c);
  /* 13f470: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f474: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f478: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307772));
  fn2_1bc2f8(c);
  /* 13f47c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f480: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307780));
  fn2_1ccd9c(c);
  /* 13f484: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 13f488: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f48c: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307792));
  fn2_1d9a68(c);
  /* 13f490: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f494: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307800));
  fn2_1bc620(c);
  /* 13f498: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 13f49c: add x1, x1, #0xde1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3553)));
  /* 13f4a0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f4a4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307816));
  fn2_1b7d24(c);
  /* 13f4a8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f4ac: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f4b0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307828));
  fn2_1bc2f8(c);
  /* 13f4b4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f4b8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307836));
  fn2_1ccd9c(c);
  /* 13f4bc: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 13f4c0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f4c4: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307848));
  fn2_1d9a68(c);
  /* 13f4c8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f4cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307856));
  fn2_1bc620(c);
  /* 13f4d0: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 13f4d4: add x1, x1, #0x8dc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2268)));
  /* 13f4d8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f4dc: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307872));
  fn2_1b7d24(c);
  /* 13f4e0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f4e4: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f4e8: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307884));
  fn2_1bc2f8(c);
  /* 13f4ec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f4f0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307892));
  fn2_1ccd9c(c);
  /* 13f4f4: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 13f4f8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f4fc: bl #0x1d9a68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307904));
  fn2_1d9a68(c);
  /* 13f500: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f504: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307912));
  fn2_1bc620(c);
  /* 13f508: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 13f50c: add x1, x19, #0xc8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 13f510: ldr x8, [x8, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* 13f514: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 13f518: bl #0xecb5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307932));
  fn2_ecb5c(c);
L_13f51c:;
  /* 13f51c: ldr x20, [x19, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 13f520: cbz x20, #0x13f5ac */
  if ((ARC_X_R(c, 20)) == 0) goto L_13f5ac;
  /* 13f524: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 13f528: add x1, x1, #0xf30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3888)));
  /* 13f52c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f530: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13f534: sub x21, x29, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f538: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307964));
  fn2_1b8fd4(c);
  /* 13f53c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f540: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13f544: bl #0x221708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307976));
  fn2_221708(c);
  /* 13f548: mov w20, w0 */
  ARC_W_W(c, 20, ARC_W_R(c, 0));
  /* 13f54c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f550: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1307988));
  fn2_1d2d24(c);
  /* 13f554: tbz w20, #0, #0x13f5ac */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_13f5ac;
  /* 13f558: ldr x20, [x19, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 13f55c: adrp x1, #0x19000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(102400)));
  /* 13f560: add x1, x1, #0xf30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3888)));
  /* 13f564: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 13f568: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 13f56c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308016));
  fn2_1b8fd4(c);
  /* 13f570: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f574: add x1, sp, #0x28 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(40)));
  /* 13f578: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308028));
  fn2_1bc44c(c);
  /* 13f57c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 13f580: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13f584: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13f588: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 13f58c: stur x21, [x29, #-0x30] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-48)), ARC_X_R(c, 21));
  /* 13f590: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308052));
  fn2_221308(c);
  /* 13f594: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f598: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308060));
  fn2_1bc620(c);
  /* 13f59c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13f5a0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308068));
  fn2_1bc620(c);
  /* 13f5a4: add x0, sp, #0x28 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(40)));
  /* 13f5a8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308076));
  fn2_1d2d24(c);
L_13f5ac:;
  /* 13f5ac: adrp x0, #0x1f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(126976)));
  /* 13f5b0: add x0, x0, #0xa90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2704)));
  /* 13f5b4: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f5b8: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 13f5bc: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308096));
  fn2_1b7d74(c);
  /* 13f5c0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f5c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13f5c8: bl #0x14c268 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308108));
  fn2_14c268(c);
  /* 13f5cc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 13f5d0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308116));
  fn2_1ccd9c(c);
L_13f5d4:;
  /* 13f5d4: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13f5d8: ldr x25, [sp, #0x80] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(128))));
  /* 13f5dc: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13f5e0: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13f5e4: ldp x29, x30, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13f5e8: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 13f5ec: ret  */
  return;
L_13f5f0:;
  /* 13f5f0: adrp x0, #0x28000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(163840)));
  /* 13f5f4: add x0, x0, #0x7f7 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2039)));
  /* 13f5f8: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 13f5fc: add x1, x1, #0x1fd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(509)));
  /* 13f600: adrp x3, #0x1a000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(106496)));
  /* 13f604: add x3, x3, #0xa84 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2692)));
  /* 13f608: mov w2, #0x100 */
  ARC_W_W(c, 2, UINT64_C(256));
  /* 13f60c: b #0x13f62c */
  goto L_13f62c;
L_13f610:;
  /* 13f610: adrp x0, #0x28000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(163840)));
  /* 13f614: add x0, x0, #0x7f7 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2039)));
  /* 13f618: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 13f61c: add x1, x1, #0x1fd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(509)));
  /* 13f620: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 13f624: add x3, x3, #0x28a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(650)));
  /* 13f628: mov w2, #0xee */
  ARC_W_W(c, 2, UINT64_C(238));
L_13f62c:;
  /* 13f62c: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 13f630: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 13f634: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1308216));
  fn2_1b54b0(c);
  /* 13f638: b #0x13f5d4 */
  goto L_13f5d4;
}

void fn2_146930(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077193520));
  /* 146930: ldrb w8, [x0, #0x148] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(328))));
  /* 146934: tbz w8, #0, #0x14693c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_14693c;
  /* 146938: ret  */
  return;
L_14693c:;
  /* 14693c: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 146940: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 146944: str x23, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), ARC_X_R(c, 23));
  /* 146948: stp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 14694c: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 146950: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* 146954: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 146958: cmp x1, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1));
  /* 14695c: b.lt #0x1469a0 */
  if (ARC_COND(c, 11)) goto L_1469a0;
  /* 146960: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 146964: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 146968: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 14696c: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337712));
  fn2_1bc25c(c);
  /* 146970: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 146974: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 146978: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337724));
  fn2_1bc290(c);
  /* 14697c: add x0, x19, #0x289 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(649)));
  /* 146980: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 146984: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337736));
  fn2_1bbfa0(c);
  /* 146988: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14698c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337744));
  fn2_1bcf04(c);
  /* 146990: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 146994: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337752));
  fn2_1bc620(c);
  /* 146998: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 14699c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337760));
  fn2_1bc620(c);
L_1469a0:;
  /* 1469a0: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 1469a4: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337768));
  fn2_1db794(c);
  /* 1469a8: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* 1469ac: b.lt #0x146b18 */
  if (ARC_COND(c, 11)) goto L_146b18;
  /* 1469b0: mov x20, xzr */
  ARC_X_W(c, 20, ARC_X_R(c, 31));
  /* 1469b4: adrp x21, #0x26000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(155648)));
  /* 1469b8: add x21, x21, #0x6cc */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1740)));
  /* 1469bc: adrp x22, #0x34000 */
  ARC_X_W(c, 22, (arc_image_bases[2] + UINT64_C(212992)));
  /* 1469c0: add x22, x22, #0xfb6 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(4022)));
  /* 1469c4: b #0x1469fc */
  goto L_1469fc;
L_1469c8:;
  /* 1469c8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1469cc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337808));
  fn2_1bc620(c);
  /* 1469d0: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 1469d4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337816));
  fn2_1bc620(c);
  /* 1469d8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1469dc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337824));
  fn2_1bc620(c);
  /* 1469e0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1469e4: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337832));
  fn2_1d97fc(c);
L_1469e8:;
  /* 1469e8: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 1469ec: add x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 1469f0: bl #0x1db794 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337844));
  fn2_1db794(c);
  /* 1469f4: cmp x20, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 1469f8: b.ge #0x146b18 */
  if (ARC_COND(c, 10)) goto L_146b18;
L_1469fc:;
  /* 1469fc: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 146a00: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 146a04: bl #0x1bbf48 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337864));
  fn2_1bbf48(c);
  /* 146a08: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 146a0c: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337872));
  fn2_1bccb8(c);
  /* 146a10: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 146a14: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 146a18: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337884));
  fn2_1b7d24(c);
  /* 146a1c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 146a20: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 146a24: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337896));
  fn2_1bc2f8(c);
  /* 146a28: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 146a2c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337904));
  fn2_1ccd9c(c);
  /* 146a30: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 146a34: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 146a38: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337916));
  fn2_1bc25c(c);
  /* 146a3c: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 146a40: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 146a44: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 146a48: sub x2, x29, #0x48 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 146a4c: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337936));
  fn2_1d9c5c(c);
  /* 146a50: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 146a54: bl #0x1bc630 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337944));
  fn2_1bc630(c);
  /* 146a58: tbnz w0, #0, #0x1469c8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_1469c8;
  /* 146a5c: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 146a60: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 146a64: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337960));
  fn2_1b7d24(c);
  /* 146a68: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 146a6c: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* 146a70: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337972));
  fn2_1bc2f8(c);
  /* 146a74: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 146a78: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337980));
  fn2_1ccd9c(c);
  /* 146a7c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 146a80: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1337988));
  fn2_1bc084(c);
  /* 146a84: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* 146a88: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 146a8c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 146a90: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 146a94: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338008));
  fn2_1d9c5c(c);
  /* 146a98: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 146a9c: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338016));
  fn2_1bc668(c);
  /* 146aa0: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 146aa4: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 146aa8: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338028));
  fn2_1bc290(c);
  /* 146aac: add x0, x19, #0x289 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(649)));
  /* 146ab0: add x1, sp, #0x50 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(80)));
  /* 146ab4: bl #0x1d998c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338040));
  fn2_1d998c(c);
  /* 146ab8: mov w23, w0 */
  ARC_W_W(c, 23, ARC_W_R(c, 0));
  /* 146abc: add x0, sp, #0x50 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(80)));
  /* 146ac0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338052));
  fn2_1bc620(c);
  /* 146ac4: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 146ac8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338060));
  fn2_1bc620(c);
  /* 146acc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 146ad0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338068));
  fn2_1bc620(c);
  /* 146ad4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 146ad8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338076));
  fn2_1bc620(c);
  /* 146adc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 146ae0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338084));
  fn2_1bc620(c);
  /* 146ae4: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 146ae8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338092));
  fn2_1bc620(c);
  /* 146aec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 146af0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338100));
  fn2_1bc620(c);
  /* 146af4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 146af8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338108));
  fn2_1d97fc(c);
  /* 146afc: tbnz w23, #0, #0x1469e8 */
  if (((ARC_W_R(c, 23)) >> 0 & 1) != 0) goto L_1469e8;
  /* 146b00: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 146b04: ldr x23, [sp, #0xc0] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(192))));
  /* 146b08: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 146b0c: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 146b10: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 146b14: ret  */
  return;
L_146b18:;
  /* 146b18: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 146b1c: add x1, x1, #0x9c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(156)));
  /* 146b20: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 146b24: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 146b28: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338156));
  fn2_1b8fd4(c);
  /* 146b2c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 146b30: sub x1, x29, #0x48 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 146b34: sub x20, x29, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 146b38: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338172));
  fn2_1bc44c(c);
  /* 146b3c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 146b40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 146b44: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 146b48: stur x20, [x29, #-0x30] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-48)), ARC_X_R(c, 20));
  /* 146b4c: bl #0x219104 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338192));
  fn2_219104(c);
  /* 146b50: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 146b54: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338200));
  fn2_1bc620(c);
  /* 146b58: sub x0, x29, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(72)));
  /* 146b5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1338208));
  fn2_1d2d24(c);
  /* 146b60: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 146b64: ldr x23, [sp, #0xc0] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(192))));
  /* 146b68: ldp x22, x21, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 146b6c: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 146b70: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 146b74: ret  */
  return;
}

void fn2_14a080(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077207680));
  /* 14a080: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 14a084: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14a088: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 14a08c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 14a090: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 14a094: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 14a098: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 14a09c: bl #0x1e98c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351840));
  fn2_1e98c4(c);
  /* 14a0a0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 14a0a4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 14a0a8: bl #0x1e9e44 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351852));
  fn2_1e9e44(c);
  /* 14a0ac: tbz w0, #0, #0x14a0d0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_14a0d0;
  /* 14a0b0: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 14a0b4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 14a0b8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 14a0bc: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14a0c0: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 14a0c4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14a0c8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 14a0cc: b #0x1ea158 */
  fn2_1ea158(c); return;
L_14a0d0:;
  /* 14a0d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 14a0d4: bl #0xae4cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351896));
  fn2_ae4cc(c);
  /* 14a0d8: cbz x0, #0x14a140 */
  if ((ARC_X_R(c, 0)) == 0) goto L_14a140;
  /* 14a0dc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 14a0e0: adrp x1, #0x28000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(163840)));
  /* 14a0e4: add x1, x1, #0x811 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2065)));
  /* 14a0e8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14a0ec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 14a0f0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351924));
  fn2_1b8fd4(c);
  /* 14a0f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14a0f8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 14a0fc: add x20, sp, #8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(8)));
  /* 14a100: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351940));
  fn2_1bc44c(c);
  /* 14a104: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14a108: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 14a10c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 14a110: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 14a114: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 14a118: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351964));
  fn2_221308(c);
  /* 14a11c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14a120: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351972));
  fn2_1bc620(c);
  /* 14a124: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14a128: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1351980));
  fn2_1d2d24(c);
  /* 14a12c: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14a130: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 14a134: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14a138: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 14a13c: ret  */
  return;
L_14a140:;
  /* 14a140: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 14a144: add x1, x1, #0xabd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2749)));
  /* 14a148: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14a14c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1352016));
  fn2_1b7d24(c);
  /* 14a150: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14a154: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 14a158: bl #0x1cccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1352028));
  fn2_1cccb8(c);
  /* 14a15c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 14a160: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14a164: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 14a168: bl #0x1cf868 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1352044));
  fn2_1cf868(c);
  /* 14a16c: adrp x0, #0x2a000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(172032)));
  /* 14a170: add x0, x0, #0xaa */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(170)));
  /* 14a174: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 14a178: add x1, x1, #0x4e9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1257)));
  /* 14a17c: adrp x3, #0x19000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(102400)));
  /* 14a180: add x3, x3, #0xf4a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3914)));
  /* 14a184: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* 14a188: mov w2, #0x3b */
  ARC_W_W(c, 2, UINT64_C(59));
  /* 14a18c: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 14a190: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 14a194: bl #0x1b5698 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1352088));
  fn2_1b5698(c);
  /* 14a198: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 14a19c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1352096));
  fn2_1ccd9c(c);
  /* 14a1a0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 14a1a4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1352104));
  fn2_1ccd9c(c);
  /* 14a1a8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14a1ac: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1352112));
  fn2_1ccd9c(c);
  /* 14a1b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14a1b4: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1352120));
  fn2_1bc084(c);
  /* 14a1b8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14a1bc: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 14a1c0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14a1c4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 14a1c8: ret  */
  return;
}

void fn2_14c344(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077216580));
  /* 14c344: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 14c348: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 14c34c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 14c350: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 14c354: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 14c358: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 14c35c: strb w8, [x0, #0x1d2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(466)), ARC_W_R(c, 8));
  /* 14c360: adrp x0, #0x27000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(159744)));
  /* 14c364: add x0, x0, #0xc53 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3155)));
  /* 14c368: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14c36c: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360752));
  fn2_1b7d74(c);
  /* 14c370: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14c374: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 14c378: bl #0x14c268 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360764));
  fn2_14c268(c);
  /* 14c37c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 14c380: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1360772));
  fn2_1ccd9c(c);
  /* 14c384: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 14c388: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 14c38c: ret  */
  return;
}

void fn2_152794(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077242260));
  /* 152794: ldr x8, [x0, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(48))));
  /* 152798: cbz x8, #0x152ca4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_152ca4;
  /* 15279c: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* 1527a0: stp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1527a4: stp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1527a8: stp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1527ac: add x29, sp, #0xb0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(176)));
  /* 1527b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1527b4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1527b8: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 1527bc: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* 1527c0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1527c4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386440));
  fn2_1b7d24(c);
  /* 1527c8: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1527cc: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1527d0: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386452));
  fn2_1bc2f8(c);
  /* 1527d4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1527d8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386460));
  fn2_1ccd9c(c);
  /* 1527dc: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1527e0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1527e4: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1527e8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386476));
  fn2_1b7d24(c);
  /* 1527ec: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1527f0: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1527f4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386488));
  fn2_1bc2f8(c);
  /* 1527f8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1527fc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386496));
  fn2_1ccd9c(c);
  /* 152800: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152804: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152808: add x2, sp, #0x48 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(72)));
  /* 15280c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 152810: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386516));
  fn2_1d9c5c(c);
  /* 152814: sub x8, x29, #0x38 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 152818: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15281c: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386528));
  fn2_1bc84c(c);
  /* 152820: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152824: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386536));
  fn2_1bc620(c);
  /* 152828: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 15282c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386544));
  fn2_1bc620(c);
  /* 152830: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152834: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386552));
  fn2_1bc620(c);
  /* 152838: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 15283c: add x1, x1, #0xe3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(227)));
  /* 152840: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 152844: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386568));
  fn2_1b865c(c);
  /* 152848: tbz w0, #0, #0x152ad0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_152ad0;
  /* 15284c: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 152850: add x1, x1, #0x8dc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2268)));
  /* 152854: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152858: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386588));
  fn2_1b7d24(c);
  /* 15285c: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152860: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152864: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386600));
  fn2_1bc2f8(c);
  /* 152868: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15286c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386608));
  fn2_1ccd9c(c);
  /* 152870: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 152874: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 152878: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 15287c: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386624));
  fn2_1b7d24(c);
  /* 152880: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152884: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152888: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386636));
  fn2_1bc2f8(c);
  /* 15288c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152890: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386644));
  fn2_1ccd9c(c);
  /* 152894: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152898: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 15289c: add x2, sp, #0x48 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(72)));
  /* 1528a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1528a4: sub x22, x29, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1528a8: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386668));
  fn2_1d9c5c(c);
  /* 1528ac: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* 1528b0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1528b4: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386680));
  fn2_1bc84c(c);
  /* 1528b8: adrp x0, #0x1c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(114688)));
  /* 1528bc: add x0, x0, #0xd53 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3411)));
  /* 1528c0: add x8, sp, #0x38 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(56)));
  /* 1528c4: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 1528c8: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386700));
  fn2_1b7d74(c);
  /* 1528cc: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1528d0: add x1, sp, #0x38 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(56)));
  /* 1528d4: bl #0x1cd318 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386712));
  fn2_1cd318(c);
  /* 1528d8: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 1528dc: add x0, sp, #0x38 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(56)));
  /* 1528e0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386724));
  fn2_1ccd9c(c);
  /* 1528e4: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 1528e8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386732));
  fn2_1ccd9c(c);
  /* 1528ec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1528f0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386740));
  fn2_1bc620(c);
  /* 1528f4: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1528f8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386748));
  fn2_1bc620(c);
  /* 1528fc: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152900: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386756));
  fn2_1bc620(c);
  /* 152904: tbnz w21, #0, #0x15296c */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_15296c;
  /* 152908: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 15290c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 152910: add x0, x19, #0x1e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(480)));
  /* 152914: bl #0x1b852c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386776));
  fn2_1b852c(c);
  /* 152918: ldr x21, [x19, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 15291c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 152920: add x1, x1, #0xda4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3492)));
  /* 152924: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152928: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 15292c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386800));
  fn2_1b8fd4(c);
  /* 152930: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152934: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 152938: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386812));
  fn2_1bc44c(c);
  /* 15293c: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 152940: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152944: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 152948: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 15294c: stur x22, [x29, #-0x50] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-80)), ARC_X_R(c, 22));
  /* 152950: bl #0x221308 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386836));
  fn2_221308(c);
  /* 152954: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152958: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386844));
  fn2_1bc620(c);
  /* 15295c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 152960: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386852));
  fn2_1bc620(c);
  /* 152964: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152968: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386860));
  fn2_1d2d24(c);
L_15296c:;
  /* 15296c: ldr x21, [x19, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 152970: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 152974: add x1, x1, #0x1a5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(421)));
  /* 152978: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 15297c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 152980: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386884));
  fn2_1b8fd4(c);
  /* 152984: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152988: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 15298c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 152990: bl #0x21fe38 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386900));
  fn2_21fe38(c);
  /* 152994: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152998: bl #0x1bcbbc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386908));
  fn2_1bcbbc(c);
  /* 15299c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1529a0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1529a4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386920));
  fn2_1bc620(c);
  /* 1529a8: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1529ac: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386928));
  fn2_1d2d24(c);
  /* 1529b0: sub x8, x29, #0x50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 1529b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1529b8: bl #0xfe890 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386940));
  fn2_fe890(c);
  /* 1529bc: cbz x21, #0x1529d4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_1529d4;
  /* 1529c0: ldur x8, [x29, #-0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 1529c4: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* 1529c8: b.ne #0x1529d4 */
  if (ARC_COND(c, 1)) goto L_1529d4;
  /* 1529cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1529d0: bl #0xfe98c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386964));
  fn2_fe98c(c);
L_1529d4:;
  /* 1529d4: ldr x21, [x19, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 1529d8: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1529dc: add x1, x1, #0x1a5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(421)));
  /* 1529e0: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 1529e4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1529e8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386988));
  fn2_1b8fd4(c);
  /* 1529ec: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1529f0: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1386996));
  fn2_1bc084(c);
  /* 1529f4: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 1529f8: sub x2, x29, #0x30 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 1529fc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 152a00: bl #0x21fd30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387012));
  fn2_21fd30(c);
  /* 152a04: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152a08: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387020));
  fn2_1bc620(c);
  /* 152a0c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152a10: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387028));
  fn2_1d2d24(c);
  /* 152a14: ldr x21, [x19, #0x30] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 152a18: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 152a1c: add x1, x1, #0x733 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1843)));
  /* 152a20: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152a24: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 152a28: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387052));
  fn2_1b8fd4(c);
  /* 152a2c: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 152a30: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387060));
  fn2_1d9740(c);
  /* 152a34: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152a38: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 152a3c: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387072));
  fn2_1bc530(c);
  /* 152a40: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 152a44: sub x2, x29, #0x30 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152a48: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 152a4c: bl #0x21fd30 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387088));
  fn2_21fd30(c);
  /* 152a50: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152a54: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387096));
  fn2_1bc620(c);
  /* 152a58: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 152a5c: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387104));
  fn2_1d97fc(c);
  /* 152a60: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152a64: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387112));
  fn2_1d2d24(c);
  /* 152a68: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152a6c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387120));
  fn2_1db4a4(c);
  /* 152a70: add x0, x19, #0x6a */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(106)));
  /* 152a74: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152a78: bl #0x1dc768 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387132));
  fn2_1dc768(c);
  /* 152a7c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152a80: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387140));
  fn2_1db788(c);
  /* 152a84: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152a88: strb wzr, [x19, #0x68] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(104)), ARC_W_R(c, 31));
  /* 152a8c: bl #0x1db4a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387152));
  fn2_1db4a4(c);
  /* 152a90: add x0, x19, #0x1f0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(496)));
  /* 152a94: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152a98: bl #0x1dc768 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387164));
  fn2_1dc768(c);
  /* 152a9c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152aa0: bl #0x1db788 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387172));
  fn2_1db788(c);
  /* 152aa4: ldur x0, [x29, #-0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 152aa8: cbz x0, #0x152af4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_152af4;
  /* 152aac: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387184));
  fn2_225abc(c);
  /* 152ab0: tbz w0, #0, #0x152af4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_152af4;
  /* 152ab4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 152ab8: ldur x8, [x29, #-0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 152abc: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 152ac0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 152ac4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 152ac8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387212));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 152acc: b #0x152af4 */
  goto L_152af4;
L_152ad0:;
  /* 152ad0: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 152ad4: add x1, x1, #0xef9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3833)));
  /* 152ad8: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 152adc: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387232));
  fn2_1b865c(c);
  /* 152ae0: tbz w0, #0, #0x152af4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_152af4;
  /* 152ae4: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 152ae8: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 152aec: add x0, x19, #0x1e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(480)));
  /* 152af0: bl #0x1b852c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387252));
  fn2_1b852c(c);
L_152af4:;
  /* 152af4: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 152af8: add x1, x1, #0xb71 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2929)));
  /* 152afc: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152b00: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 152b04: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387272));
  fn2_1b8fd4(c);
  /* 152b08: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152b0c: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 152b10: sub x22, x29, #0x30 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152b14: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387288));
  fn2_1bc44c(c);
  /* 152b18: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 152b1c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 152b20: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 152b24: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387304));
  fn2_1bc530(c);
  /* 152b28: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152b2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 152b30: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 152b34: stp x22, x21, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 152b38: bl #0x221204 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387324));
  fn2_221204(c);
  /* 152b3c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 152b40: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387332));
  fn2_1bc620(c);
  /* 152b44: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152b48: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387340));
  fn2_1bc620(c);
  /* 152b4c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152b50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387348));
  fn2_1d2d24(c);
  /* 152b54: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 152b58: add x1, x1, #0x1f0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(496)));
  /* 152b5c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152b60: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387364));
  fn2_1b7d24(c);
  /* 152b64: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152b68: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152b6c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387376));
  fn2_1bc2f8(c);
  /* 152b70: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152b74: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387384));
  fn2_1ccd9c(c);
  /* 152b78: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 152b7c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 152b80: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152b84: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387400));
  fn2_1b7d24(c);
  /* 152b88: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152b8c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152b90: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387412));
  fn2_1bc2f8(c);
  /* 152b94: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152b98: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387420));
  fn2_1ccd9c(c);
  /* 152b9c: sub x8, x29, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152ba0: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152ba4: add x2, sp, #0x48 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(72)));
  /* 152ba8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 152bac: sub x21, x29, #0x30 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152bb0: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387444));
  fn2_1d9c5c(c);
  /* 152bb4: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* 152bb8: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152bbc: bl #0x1bc84c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387456));
  fn2_1bc84c(c);
  /* 152bc0: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152bc4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387464));
  fn2_1bc620(c);
  /* 152bc8: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152bcc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387472));
  fn2_1bc620(c);
  /* 152bd0: sub x0, x29, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152bd4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387480));
  fn2_1bc620(c);
  /* 152bd8: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 152bdc: add x1, x1, #0xef9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3833)));
  /* 152be0: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 152be4: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387496));
  fn2_1b865c(c);
  /* 152be8: tbz w0, #0, #0x152c58 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_152c58;
L_152bec:;
  /* 152bec: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 152bf0: add x1, x1, #0xd9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(217)));
  /* 152bf4: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152bf8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 152bfc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387520));
  fn2_1b8fd4(c);
  /* 152c00: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152c04: add x1, sp, #0x48 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(72)));
  /* 152c08: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387532));
  fn2_1bc44c(c);
  /* 152c0c: add x20, x21, #0x18 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 152c10: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 152c14: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 152c18: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387548));
  fn2_1bc25c(c);
  /* 152c1c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 152c20: sub x1, x29, #0x50 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 152c24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 152c28: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 152c2c: stp x21, x20, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 20));
  }
  /* 152c30: bl #0x2213f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387572));
  fn2_2213f8(c);
  /* 152c34: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 152c38: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387580));
  fn2_1bc620(c);
  /* 152c3c: sub x0, x29, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 152c40: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387588));
  fn2_1bc620(c);
  /* 152c44: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 152c48: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387596));
  fn2_1bc620(c);
  /* 152c4c: add x0, sp, #0x48 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(72)));
  /* 152c50: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387604));
  fn2_1d2d24(c);
  /* 152c54: b #0x152c80 */
  goto L_152c80;
L_152c58:;
  /* 152c58: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 152c5c: add x1, x1, #0xe3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(227)));
  /* 152c60: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 152c64: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387624));
  fn2_1b865c(c);
  /* 152c68: tbz w0, #0, #0x152c80 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_152c80;
  /* 152c6c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 152c70: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 152c74: add x0, x19, #0x1e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(480)));
  /* 152c78: bl #0x1b865c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387644));
  fn2_1b865c(c);
  /* 152c7c: tbnz w0, #0, #0x152bec */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_152bec;
L_152c80:;
  /* 152c80: add x0, sp, #0x40 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(64)));
  /* 152c84: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387656));
  fn2_1ccd9c(c);
  /* 152c88: sub x0, x29, #0x38 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(56)));
  /* 152c8c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1387664));
  fn2_1ccd9c(c);
  /* 152c90: ldp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 152c94: ldp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 152c98: ldp x29, x30, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 152c9c: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* 152ca0: ret  */
  return;
L_152ca4:;
  /* 152ca4: adrp x0, #0x2c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(180224)));
  /* 152ca8: add x0, x0, #0xedb */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3803)));
  /* 152cac: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 152cb0: add x1, x1, #0xacd */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2765)));
  /* 152cb4: adrp x3, #0x2e000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(188416)));
  /* 152cb8: add x3, x3, #0x28a */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(650)));
  /* 152cbc: mov w2, #0x224 */
  ARC_W_W(c, 2, UINT64_C(548));
  /* 152cc0: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 152cc4: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 152cc8: b #0x1b54b0 */
  fn2_1b54b0(c); return;
}

void fn2_159594(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077270420));
  /* 159594: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 159598: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 15959c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1595a0: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1595a4: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 1595a8: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1595ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1595b0: add x1, x0, #0x188 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(392)));
  /* 1595b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1595b8: bl #0x1cf730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414588));
  fn2_1cf730(c);
  /* 1595bc: tbnz w0, #0, #0x15962c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_15962c;
  /* 1595c0: add x0, x19, #0x188 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(392)));
  /* 1595c4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1595c8: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414604));
  fn2_1d06b8(c);
  /* 1595cc: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 1595d0: add x1, x1, #0x6aa */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1706)));
  /* 1595d4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1595d8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1595dc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414624));
  fn2_1b8fd4(c);
  /* 1595e0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 1595e4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1595e8: add x22, sp, #0x20 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(32)));
  /* 1595ec: bl #0x1bc44c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414640));
  fn2_1bc44c(c);
  /* 1595f0: add x21, x22, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 22) + UINT64_C(24)));
  /* 1595f4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1595f8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1595fc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414656));
  fn2_1bc2f8(c);
  /* 159600: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 159604: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 159608: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 15960c: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 159610: bl #0x219104 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414676));
  fn2_219104(c);
  /* 159614: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 159618: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414684));
  fn2_1bc620(c);
  /* 15961c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 159620: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414692));
  fn2_1bc620(c);
  /* 159624: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 159628: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1414700));
  fn2_1d2d24(c);
L_15962c:;
  /* 15962c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 159630: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 159634: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 159638: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 15963c: ret  */
  return;
}

void fn2_160c78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077300856));
  /* 160c78: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 160c7c: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 160c80: str x19, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 19));
  /* 160c84: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* 160c88: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 160c8c: add x0, x0, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(200)));
  /* 160c90: bl #0x1d983c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445012));
  fn2_1d983c(c);
  /* 160c94: tbnz w0, #0, #0x160e08 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_160e08;
  /* 160c98: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160c9c: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 160ca0: bl #0x1bc25c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445028));
  fn2_1bc25c(c);
  /* 160ca4: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 160ca8: add x1, x1, #0xc37 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3127)));
  /* 160cac: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160cb0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445044));
  fn2_1b7d24(c);
  /* 160cb4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 160cb8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160cbc: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445056));
  fn2_1bc2f8(c);
  /* 160cc0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160cc4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445064));
  fn2_1ccd9c(c);
  /* 160cc8: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 160ccc: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 160cd0: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445076));
  fn2_1bbfa0(c);
  /* 160cd4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160cd8: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445084));
  fn2_1bcf04(c);
  /* 160cdc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 160ce0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445092));
  fn2_1bc620(c);
  /* 160ce4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160ce8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445100));
  fn2_1bc620(c);
  /* 160cec: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 160cf0: add x1, x1, #0x6cc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1740)));
  /* 160cf4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 160cf8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445116));
  fn2_1b7d24(c);
  /* 160cfc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160d00: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 160d04: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445128));
  fn2_1bc2f8(c);
  /* 160d08: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 160d0c: add x1, x1, #0x8dc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2268)));
  /* 160d10: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160d14: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445144));
  fn2_1b7d24(c);
  /* 160d18: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 160d1c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160d20: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445156));
  fn2_1bc2f8(c);
  /* 160d24: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160d28: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445164));
  fn2_1ccd9c(c);
  /* 160d2c: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 160d30: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 160d34: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445176));
  fn2_1bbfa0(c);
  /* 160d38: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160d3c: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445184));
  fn2_1bcf04(c);
  /* 160d40: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 160d44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445192));
  fn2_1bc620(c);
  /* 160d48: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160d4c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445200));
  fn2_1bc620(c);
  /* 160d50: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 160d54: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445208));
  fn2_1ccd9c(c);
  /* 160d58: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445212));
  fn2_22eb3c(c);
  /* 160d5c: bl #0x2301f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445216));
  fn2_2301f8(c);
  /* 160d60: fcvtzs x1, d0 */
  ARC_X_W(c, 1, arc_f2i64((double)(ARC_D_R(c, 0))));
  /* 160d64: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160d68: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445228));
  fn2_1bc290(c);
  /* 160d6c: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 160d70: add x1, x1, #0xde1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3553)));
  /* 160d74: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160d78: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445244));
  fn2_1b7d24(c);
  /* 160d7c: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 160d80: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160d84: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445256));
  fn2_1bc2f8(c);
  /* 160d88: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 160d8c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445264));
  fn2_1ccd9c(c);
  /* 160d90: add x0, x19, #0xc8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 160d94: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 160d98: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445276));
  fn2_1bbfa0(c);
  /* 160d9c: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160da0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445284));
  fn2_1bcf04(c);
  /* 160da4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 160da8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445292));
  fn2_1bc620(c);
  /* 160dac: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160db0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445300));
  fn2_1bc620(c);
  /* 160db4: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 160db8: add x1, x19, #0xc8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(200)));
  /* 160dbc: ldr x8, [x8, #0xfa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4008))));
  /* 160dc0: ldr x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* 160dc4: bl #0xecb5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445320));
  fn2_ecb5c(c);
  /* 160dc8: adrp x0, #0x22000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(139264)));
  /* 160dcc: add x0, x0, #0x5e1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1505)));
  /* 160dd0: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160dd4: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 160dd8: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445340));
  fn2_1b7d74(c);
  /* 160ddc: add x0, x19, #0x100 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(256)));
  /* 160de0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160de4: bl #0x1d0708 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445352));
  fn2_1d0708(c);
  /* 160de8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 160dec: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445360));
  fn2_1ccd9c(c);
  /* 160df0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 160df4: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 160df8: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 160dfc: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 160e00: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 160e04: bl #0x14d1a4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1445384));
  fn2_14d1a4(c);
L_160e08:;
  /* 160e08: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 160e0c: ldr x19, [sp, #0x50] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(80))));
  /* 160e10: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 160e14: ret  */
  return;
}

void fn2_168e84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077334148));
  /* 168e84: ldr x8, [x0, #0x280] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(640))));
  /* 168e88: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* 168e8c: b.ge #0x16903c */
  if (ARC_COND(c, 10)) goto L_16903c;
  /* 168e90: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 168e94: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 168e98: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 168e9c: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 168ea0: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 168ea4: ldrb w8, [x0, #0x288] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(648))));
  /* 168ea8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 168eac: cbnz w8, #0x16902c */
  if ((ARC_W_R(c, 8)) != 0) goto L_16902c;
  /* 168eb0: ldr x8, [x19, #0x140] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(320))));
  /* 168eb4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 168eb8: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 168ebc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 168ec0: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* 168ec4: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 168ec8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 168ecc: str x8, [x19, #0x140] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(320)), ARC_X_R(c, 8));
  /* 168ed0: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 168ed4: bl #0x169744 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478360));
  fn2_169744(c);
  /* 168ed8: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 168edc: add x1, x1, #0x8d7 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2263)));
  /* 168ee0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 168ee4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478376));
  fn2_1b7d24(c);
  /* 168ee8: ldr x22, [x19, #0x140] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(320))));
  /* 168eec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 168ef0: sub x1, x29, #0x28 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 168ef4: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478392));
  fn2_1ccc88(c);
  /* 168ef8: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 168efc: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 168f00: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* 168f04: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 168f08: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 168f0c: mov x3, x22 */
  ARC_X_W(c, 3, ARC_X_R(c, 22));
  /* 168f10: bl #0x16ec64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478420));
  fn2_16ec64(c);
  /* 168f14: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 168f18: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 168f1c: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478432));
  fn2_1bc2f8(c);
  /* 168f20: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 168f24: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 168f28: sub x21, x29, #0x18 */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 168f2c: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478448));
  fn2_1bc0b8(c);
  /* 168f30: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 168f34: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 168f38: stur x21, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 21));
  /* 168f3c: bl #0x24a164 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478464));
  fn2_24a164(c);
  /* 168f40: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 168f44: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478472));
  fn2_1bc620(c);
  /* 168f48: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 168f4c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478480));
  fn2_1bc620(c);
  /* 168f50: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 168f54: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478488));
  fn2_1ccd9c(c);
  /* 168f58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 168f5c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478496));
  fn2_1ccd9c(c);
  /* 168f60: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 168f64: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478504));
  fn2_1ccd9c(c);
  /* 168f68: adrp x0, #0x23000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(143360)));
  /* 168f6c: add x0, x0, #0xfba */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4026)));
  /* 168f70: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 168f74: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* 168f78: bl #0x1b7d74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478524));
  fn2_1b7d74(c);
  /* 168f7c: add x8, sp, #0x20 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(32)));
  /* 168f80: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 168f84: bl #0xae0d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478536));
  fn2_ae0d8(c);
  /* 168f88: ldr x21, [x19, #0x140] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(320))));
  /* 168f8c: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 168f90: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 168f94: mov w1, #0x5a */
  ARC_W_W(c, 1, UINT64_C(90));
  /* 168f98: bl #0x1cdd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478556));
  fn2_1cdd9c(c);
  /* 168f9c: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 168fa0: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 168fa4: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 168fa8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 168fac: bl #0xfc458 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478576));
  fn2_fc458(c);
  /* 168fb0: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 168fb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 168fb8: bl #0xfe7b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478588));
  fn2_fe7b8(c);
  /* 168fbc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 168fc0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478596));
  fn2_1ccd9c(c);
  /* 168fc4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 168fc8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478604));
  fn2_1ccd9c(c);
  /* 168fcc: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 168fd0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478612));
  fn2_1ccd9c(c);
  /* 168fd4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 168fd8: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478620));
  fn2_1ccd9c(c);
  /* 168fdc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 168fe0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 168fe4: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478632));
  fn2_1bc290(c);
  /* 168fe8: add x0, x19, #0x268 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(616)));
  /* 168fec: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 168ff0: bl #0x1dbd34 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478644));
  fn2_1dbd34(c);
  /* 168ff4: mov w21, w0 */
  ARC_W_W(c, 21, ARC_W_R(c, 0));
  /* 168ff8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 168ffc: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478656));
  fn2_1bc620(c);
  /* 169000: tbnz w21, #0, #0x169024 */
  if (((ARC_W_R(c, 21)) >> 0 & 1) != 0) goto L_169024;
  /* 169004: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 169008: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 16900c: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478672));
  fn2_1bc290(c);
  /* 169010: add x0, x19, #0x268 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(616)));
  /* 169014: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 169018: bl #0x1db920 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478684));
  fn2_1db920(c);
  /* 16901c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 169020: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478692));
  fn2_1bc620(c);
L_169024:;
  /* 169024: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 169028: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1478700));
  fn2_1ccd9c(c);
L_16902c:;
  /* 16902c: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 169030: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 169034: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 169038: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
L_16903c:;
  /* 16903c: ret  */
  return;
}

void fn2_16f78c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077361036));
  /* 16f78c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 16f790: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 16f794: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 16f798: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 16f79c: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 16f7a0: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 16f7a4: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 16f7a8: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 16f7ac: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1505200));
  fn2_1b5d1c(c);
  /* 16f7b0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 16f7b4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 16f7b8: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1505212));
  fn2_1afdf8(c);
  /* 16f7bc: adrp x8, #0x255000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 16f7c0: add x8, x8, #0x190 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(400)));
  /* 16f7c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 16f7c8: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 16f7cc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 16f7d0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 16f7d4: ret  */
  return;
}

void fn2_171a80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077369984));
  /* 171a80: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 171a84: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 171a88: str x19, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), ARC_X_R(c, 19));
  /* 171a8c: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 171a90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 171a94: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 171a98: add x1, x1, #0xfb4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(4020)));
  /* 171a9c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 171aa0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514148));
  fn2_1b7d24(c);
  /* 171aa4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 171aa8: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 171aac: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514160));
  fn2_1bc2f8(c);
  /* 171ab0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 171ab4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514168));
  fn2_1ccd9c(c);
  /* 171ab8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 171abc: mov w1, #0xa */
  ARC_W_W(c, 1, UINT64_C(10));
  /* 171ac0: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514180));
  fn2_1bc290(c);
  /* 171ac4: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 171ac8: add x0, x19, #0x30 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(48)));
  /* 171acc: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 171ad0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 171ad4: bl #0x1d9c5c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514200));
  fn2_1d9c5c(c);
  /* 171ad8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 171adc: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514208));
  fn2_1bc668(c);
  /* 171ae0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 171ae4: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 171ae8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514220));
  fn2_1bc620(c);
  /* 171aec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 171af0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514228));
  fn2_1bc620(c);
  /* 171af4: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 171af8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1514236));
  fn2_1bc620(c);
  /* 171afc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 171b00: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 171b04: ldr x19, [sp, #0x60] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(96))));
  /* 171b08: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 171b0c: ret  */
  return;
}

void fn2_1757c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077385668));
  /* 1757c4: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1757c8: b #0x220748 */
  fn2_220748(c); return;
}

void fn2_1768f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077390068));
  /* 1768f4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1768f8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1768fc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 176900: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 176904: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 176908: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 17690c: b.hi #0x176980 */
  if (ARC_COND(c, 8)) goto L_176980;
  /* 176910: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 176914: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 176918: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 17691c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534240));
  fn2_1d2c2c(c);
  /* 176920: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 176924: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534248));
  fn2_1d2c2c(c);
  /* 176928: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 17692c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 176930: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534260));
  fn2_1ccc74(c);
  /* 176934: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 176938: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 17693c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 176940: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 176944: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 176948: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* 17694c: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534288));
  fn2_b2de4(c);
  /* 176950: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 176954: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 176958: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 17695c: bl #0xb1d4c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534304));
  fn2_b1d4c(c);
  /* 176960: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 176964: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 176968: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 17696c: bl #0xb8078 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534320));
  fn2_b8078(c);
  /* 176970: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 176974: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 176978: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 17697c: ret  */
  return;
L_176980:;
  /* 176980: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* 176984: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* 176988: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 17698c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 176990: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 176994: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534360));
  fn2_1b8fd4(c);
  /* 176998: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 17699c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1769a0: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534372));
  fn2_1b7d24(c);
  /* 1769a4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1769a8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1769ac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1769b0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534388));
  fn2_1b8fd4(c);
  /* 1769b4: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1769b8: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 1769bc: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534400));
  fn2_1d2c2c(c);
  /* 1769c0: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 1769c4: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534408));
  fn2_1d2c2c(c);
  /* 1769c8: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1769cc: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 1769d0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534420));
  fn2_1ccc74(c);
  /* 1769d4: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* 1769d8: mov w8, #0x1a */
  ARC_W_W(c, 8, UINT64_C(26));
  /* 1769dc: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 1769e0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1769e4: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 1769e8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 1769ec: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534448));
  fn2_1d5dc0(c);
  /* 1769f0: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 1769f4: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1769f8: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 1769fc: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534464));
  fn2_1d06b8(c);
  /* 176a00: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 176a04: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 176a08: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 176a0c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534480));
  fn2_1d5dc0(c);
  /* 176a10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 176a14: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534488));
  fn2_1d2d24(c);
  /* 176a18: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 176a1c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534496));
  fn2_1ccd9c(c);
  /* 176a20: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 176a24: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1534504));
  fn2_1d2d24(c);
  /* 176a28: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 176a2c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 176a30: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 176a34: ret  */
  return;
}

void fn2_179594(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077401492));
  /* 179594: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 179598: ret  */
  return;
}

void fn2_17b9fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077410812));
  /* 17b9fc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 17ba00: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 17ba04: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 17ba08: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 17ba0c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 17ba10: ldp x8, x20, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 20, arc_ld64(_pa + 8));
  }
  /* 17ba14: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 17ba18: ldr w9, [x1] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 1)));
  /* 17ba1c: ldr w22, [x1, #0x18] */
  ARC_W_W(c, 22, arc_ld32((ARC_X_R(c, 1) + INT64_C(24))));
  /* 17ba20: ldr x21, [x1, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 1) + INT64_C(32))));
  /* 17ba24: ldr w23, [x1, #0x28] */
  ARC_W_W(c, 23, arc_ld32((ARC_X_R(c, 1) + INT64_C(40))));
  /* 17ba28: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 17ba2c: str w9, [x0], #4 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 17ba30: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1554996));
  fn2_1d2c40(c);
  /* 17ba34: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 17ba38: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1555004));
  fn2_1d2c2c(c);
  /* 17ba3c: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 17ba40: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 17ba44: str w22, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 22));
  /* 17ba48: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1555020));
  fn2_1ccc88(c);
  /* 17ba4c: ldr w8, [x19, #0x14] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(20))));
  /* 17ba50: str w23, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 23));
  /* 17ba54: cmp w8, #0x11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(17));
  /* 17ba58: b.ne #0x17ba90 */
  if (ARC_COND(c, 1)) goto L_17ba90;
  /* 17ba5c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 17ba60: add x1, x19, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 17ba64: bl #0x1d2c70 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1555048));
  fn2_1d2c70(c);
  /* 17ba68: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 17ba6c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 17ba70: bl #0x1d2b98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1555060));
  fn2_1d2b98(c);
  /* 17ba74: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 17ba78: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1555068));
  fn2_1d2d24(c);
  /* 17ba7c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17ba80: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 17ba84: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 17ba88: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17ba8c: ret  */
  return;
L_17ba90:;
  /* 17ba90: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 17ba94: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 17ba98: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 17ba9c: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 17baa0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 17baa4: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 17baa8: b #0x1d5dc0 */
  fn2_1d5dc0(c); return;
}

void fn2_17d128(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077416744));
  /* 17d128: ret  */
  return;
}

void fn2_17e034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077420596));
  /* 17e034: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17e038: ret  */
  return;
}

void fn2_17eefc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077424380));
  /* 17eefc: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17ef00: ret  */
  return;
}

void fn2_17fdc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077428164));
  /* 17fdc4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 17fdc8: ret  */
  return;
}

void fn2_180c8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077431948));
  /* 180c8c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 180c90: ret  */
  return;
}

void fn2_181b54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077435732));
  /* 181b54: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 181b58: ret  */
  return;
}

void fn2_1834b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077442224));
  /* 1834b0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1834b4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1834b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1834bc: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1834c0: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1834c4: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 1834c8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1586380));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1834cc: sxtw x8, w0 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 1834d0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1834d4: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1834d8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1834dc: ret  */
  return;
}

void fn2_184270(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077445744));
  /* 184270: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 184274: ret  */
  return;
}

void fn2_184f20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077448992));
  /* 184f20: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 184f24: ret  */
  return;
}

void fn2_185ea8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077452968));
  /* 185ea8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 185eac: ret  */
  return;
}

void fn2_187d70(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077460848));
  /* 187d70: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 187d74: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 187d78: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 187d7c: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 187d80: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 187d84: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 187d88: sub x8, x29, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 187d8c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 187d90: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 187d94: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 187d98: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 187d9c: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605024));
  fn2_1bccb8(c);
  /* 187da0: add x8, sp, #0x30 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(48)));
  /* 187da4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 187da8: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605036));
  fn2_1bccb8(c);
  /* 187dac: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 187db0: add x1, x1, #0xf26 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3878)));
  /* 187db4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187db8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605052));
  fn2_1b7d24(c);
  /* 187dbc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187dc0: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 187dc4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605064));
  fn2_1bc2f8(c);
  /* 187dc8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187dcc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605072));
  fn2_1ccd9c(c);
  /* 187dd0: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 187dd4: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187dd8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605084));
  fn2_1bbfa0(c);
  /* 187ddc: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605088));
  fn2_1bc668(c);
  /* 187de0: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* 187de4: b.le #0x187ef0 */
  if (ARC_COND(c, 13)) goto L_187ef0;
  /* 187de8: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 187dec: add x1, x1, #0xa16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2582)));
  /* 187df0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187df4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605112));
  fn2_1b7d24(c);
  /* 187df8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187dfc: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 187e00: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605124));
  fn2_1bc2f8(c);
  /* 187e04: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187e08: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605132));
  fn2_1ccd9c(c);
  /* 187e0c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 187e10: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 187e14: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605144));
  fn2_1bbfa0(c);
  /* 187e18: bl #0x1bcc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605148));
  fn2_1bcc90(c);
  /* 187e1c: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* 187e20: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187e24: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605160));
  fn2_1bc620(c);
  /* 187e28: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187e2c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605168));
  fn2_1bc620(c);
  /* 187e30: cmp w22, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(27));
  /* 187e34: b.ne #0x187ef8 */
  if (ARC_COND(c, 1)) goto L_187ef8;
  /* 187e38: adrp x1, #0x2f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(192512)));
  /* 187e3c: add x1, x1, #0xa16 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2582)));
  /* 187e40: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187e44: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605192));
  fn2_1b7d24(c);
  /* 187e48: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187e4c: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 187e50: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605204));
  fn2_1bc2f8(c);
  /* 187e54: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187e58: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605212));
  fn2_1ccd9c(c);
  /* 187e5c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 187e60: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187e64: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605224));
  fn2_1bbfa0(c);
  /* 187e68: sub x8, x29, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 187e6c: bl #0x1bccb8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605232));
  fn2_1bccb8(c);
  /* 187e70: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187e74: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605240));
  fn2_1bc620(c);
  /* 187e78: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605244));
  fn2_22eb3c(c);
  /* 187e7c: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605248));
  fn2_2302d4(c);
  /* 187e80: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 187e84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 187e88: bl #0x1bc668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605260));
  fn2_1bc668(c);
  /* 187e8c: sub x8, x22, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 0)));
  /* 187e90: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187e94: scvtf d0, x8 */
  arc_d_w(c, 0, (double)(((int64_t)(ARC_X_R(c, 8)))));
  /* 187e98: bl #0x1bc2c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605276));
  fn2_1bc2c4(c);
  /* 187e9c: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 187ea0: add x1, x1, #0xd1b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3355)));
  /* 187ea4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187ea8: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605292));
  fn2_1b7d24(c);
  /* 187eac: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187eb0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 187eb4: bl #0x1bc2f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605304));
  fn2_1bc2f8(c);
  /* 187eb8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187ebc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605312));
  fn2_1ccd9c(c);
  /* 187ec0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 187ec4: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 187ec8: bl #0x1bbfa0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605324));
  fn2_1bbfa0(c);
  /* 187ecc: sub x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187ed0: bl #0x1bcf04 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605332));
  fn2_1bcf04(c);
  /* 187ed4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187ed8: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605340));
  fn2_1bc620(c);
  /* 187edc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187ee0: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605348));
  fn2_1bc620(c);
  /* 187ee4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 187ee8: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605356));
  fn2_1d97fc(c);
  /* 187eec: b #0x187ef8 */
  goto L_187ef8;
L_187ef0:;
  /* 187ef0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187ef4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605368));
  fn2_1bc620(c);
L_187ef8:;
  /* 187ef8: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 187efc: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 187f00: mov w0, #0x30 */
  ARC_W_W(c, 0, UINT64_C(48));
  /* 187f04: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 187f08: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605388));
  fn2_1b5d1c(c);
  /* 187f0c: adrp x8, #0x255000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2445312)));
  /* 187f10: add x8, x8, #0xb80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2944)));
  /* 187f14: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 187f18: stp x8, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 187f1c: nop  */
  /* nop: no architectural effect here */
  /* 187f20: adr x8, #0x18801c */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(1605660)));
  /* 187f24: mov w2, #0x18 */
  ARC_W_W(c, 2, UINT64_C(24));
  /* 187f28: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 187f2c: stp x8, xzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 187f30: str x20, [x1, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 1) + INT64_C(24));
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(24));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 187f34: bl #0x1b7894 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605432));
  fn2_1b7894(c);
  /* 187f38: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 187f3c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 187f40: bl #0x1b793c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605444));
  fn2_1b793c(c);
  /* 187f44: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187f48: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 187f4c: sub x19, x29, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187f50: bl #0x1bc0b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605460));
  fn2_1bc0b8(c);
  /* 187f54: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187f58: stur x19, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 19));
  /* 187f5c: bl #0x1d7878 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605472));
  fn2_1d7878(c);
  /* 187f60: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 187f64: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187f68: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 187f6c: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 187f70: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 187f74: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 187f78: ldr x8, [x8, #0xc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(200))));
  /* 187f7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605504));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 187f80: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187f84: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605512));
  fn2_1bc620(c);
  /* 187f88: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 187f8c: add x1, x1, #0x20c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(524)));
  /* 187f90: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 187f94: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605528));
  fn2_1b7d24(c);
  /* 187f98: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 187f9c: add x1, x1, #0x3f2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1010)));
  /* 187fa0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 187fa4: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605544));
  fn2_1b7d24(c);
  /* 187fa8: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187fac: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 187fb0: bl #0x1bc530 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605556));
  fn2_1bc530(c);
  /* 187fb4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187fb8: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 187fbc: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 187fc0: sub x4, x29, #0x18 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187fc4: mov w3, #3 */
  ARC_W_W(c, 3, UINT64_C(3));
  /* 187fc8: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* 187fcc: bl #0x1870ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605584));
  fn2_1870ec(c);
  /* 187fd0: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 187fd4: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605592));
  fn2_1bc620(c);
  /* 187fd8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 187fdc: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605600));
  fn2_1ccd9c(c);
  /* 187fe0: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 187fe4: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605608));
  fn2_1ccd9c(c);
  /* 187fe8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 187fec: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605616));
  fn2_1d79fc(c);
  /* 187ff0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 187ff4: bl #0x1d79fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605624));
  fn2_1d79fc(c);
  /* 187ff8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 187ffc: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605632));
  fn2_1d97fc(c);
  /* 188000: sub x0, x29, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(40)));
  /* 188004: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1605640));
  fn2_1d97fc(c);
  /* 188008: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18800c: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 188010: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 188014: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 188018: ret  */
  return;
}

void fn2_18bfc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077477828));
  /* 18bfc4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 18bfc8: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 18bfcc: strb w8, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 8));
  /* 18bfd0: ret  */
  return;
}

void fn2_18ce64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077481572));
  /* 18ce64: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 18ce68: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18ce6c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18ce70: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 18ce74: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 18ce78: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 18ce7c: b.hi #0x18cef0 */
  if (ARC_COND(c, 8)) goto L_18cef0;
  /* 18ce80: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 18ce84: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 18ce88: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 18ce8c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625744));
  fn2_1d2c2c(c);
  /* 18ce90: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 18ce94: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625752));
  fn2_1d2c2c(c);
  /* 18ce98: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 18ce9c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 18cea0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625764));
  fn2_1ccc74(c);
  /* 18cea4: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* 18cea8: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18ceac: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 18ceb0: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 18ceb4: str w8, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 8));
  /* 18ceb8: stur wzr, [x29, #-8] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* 18cebc: bl #0xdbab4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625792));
  fn2_dbab4(c);
  /* 18cec0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18cec4: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 18cec8: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 18cecc: bl #0xb8078 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625808));
  fn2_b8078(c);
  /* 18ced0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18ced4: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* 18ced8: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* 18cedc: bl #0xb2de4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625824));
  fn2_b2de4(c);
  /* 18cee0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18cee4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18cee8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 18ceec: ret  */
  return;
L_18cef0:;
  /* 18cef0: adrp x20, #0x1e000 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(122880)));
  /* 18cef4: add x20, x20, #0xb6f */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2927)));
  /* 18cef8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18cefc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 18cf00: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 18cf04: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625864));
  fn2_1b8fd4(c);
  /* 18cf08: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 18cf0c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 18cf10: bl #0x1b7d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625876));
  fn2_1b7d24(c);
  /* 18cf14: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18cf18: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 18cf1c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 18cf20: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625892));
  fn2_1b8fd4(c);
  /* 18cf24: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 18cf28: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 18cf2c: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625904));
  fn2_1d2c2c(c);
  /* 18cf30: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 18cf34: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625912));
  fn2_1d2c2c(c);
  /* 18cf38: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 18cf3c: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 18cf40: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625924));
  fn2_1ccc74(c);
  /* 18cf44: mov w20, #6 */
  ARC_W_W(c, 20, UINT64_C(6));
  /* 18cf48: mov w8, #0x1a */
  ARC_W_W(c, 8, UINT64_C(26));
  /* 18cf4c: add x0, x19, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* 18cf50: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18cf54: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 18cf58: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* 18cf5c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625952));
  fn2_1d5dc0(c);
  /* 18cf60: add x0, x19, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(24)));
  /* 18cf64: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 18cf68: str wzr, [x19, #0x14] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(20)), ARC_W_R(c, 31));
  /* 18cf6c: bl #0x1d06b8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625968));
  fn2_1d06b8(c);
  /* 18cf70: add x0, x19, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(12)));
  /* 18cf74: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 18cf78: str w20, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 20));
  /* 18cf7c: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625984));
  fn2_1d5dc0(c);
  /* 18cf80: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 18cf84: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1625992));
  fn2_1d2d24(c);
  /* 18cf88: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 18cf8c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1626000));
  fn2_1ccd9c(c);
  /* 18cf90: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18cf94: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1626008));
  fn2_1d2d24(c);
  /* 18cf98: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18cf9c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18cfa0: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 18cfa4: ret  */
  return;
}

void fn2_18e830(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077488176));
  /* 18e830: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 18e834: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 18e838: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 18e83c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 18e840: ldr x20, [x0, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 18e844: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 18e848: cbz x20, #0x18e91c */
  if ((ARC_X_R(c, 20)) == 0) goto L_18e91c;
  /* 18e84c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18e850: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632340));
  fn2_1ccc74(c);
  /* 18e854: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18e858: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 18e85c: mov w1, #0x3e8 */
  ARC_W_W(c, 1, UINT64_C(1000));
  /* 18e860: bl #0x2321fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632356));
  fn2_2321fc(c);
  /* 18e864: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 18e868: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632364));
  fn2_1ccd9c(c);
  /* 18e86c: ldr x20, [x19, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 18e870: cbz x20, #0x18e88c */
  if ((ARC_X_R(c, 20)) == 0) goto L_18e88c;
  /* 18e874: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 18e878: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632380));
  fn2_2259d8(c);
  /* 18e87c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 18e880: str x20, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 20));
  /* 18e884: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632392));
  fn2_2259d8(c);
  /* 18e888: b #0x18e890 */
  goto L_18e890;
L_18e88c:;
  /* 18e88c: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
L_18e890:;
  /* 18e890: mov x8, #0x4008000000000000 */
  ARC_X_W(c, 8, UINT64_C(4613937818241073152));
  /* 18e894: add x0, x19, #0x48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(72)));
  /* 18e898: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 18e89c: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 18e8a0: bl #0x191100 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632420));
  fn2_191100(c);
  /* 18e8a4: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 18e8a8: cbz x0, #0x18e8cc */
  if ((ARC_X_R(c, 0)) == 0) goto L_18e8cc;
  /* 18e8ac: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632432));
  fn2_225abc(c);
  /* 18e8b0: tbz w0, #0, #0x18e8cc */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_18e8cc;
  /* 18e8b4: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 18e8b8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 18e8bc: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 18e8c0: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 18e8c4: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 18e8c8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632460));
  arc_dispatch(c, ARC_X_R(c, 9));
L_18e8cc:;
  /* 18e8cc: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 18e8d0: cbz x20, #0x18e8f4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_18e8f4;
  /* 18e8d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 18e8d8: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632476));
  fn2_225abc(c);
  /* 18e8dc: tbz w0, #0, #0x18e8f4 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_18e8f4;
  /* 18e8e0: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 18e8e4: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 18e8e8: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 18e8ec: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 18e8f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632500));
  arc_dispatch(c, ARC_X_R(c, 8));
L_18e8f4:;
  /* 18e8f4: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 18e8f8: cbz x0, #0x18e91c */
  if ((ARC_X_R(c, 0)) == 0) goto L_18e91c;
  /* 18e8fc: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632512));
  fn2_225abc(c);
  /* 18e900: tbz w0, #0, #0x18e91c */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_18e91c;
  /* 18e904: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 18e908: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 18e90c: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 18e910: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 18e914: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 18e918: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1632540));
  arc_dispatch(c, ARC_X_R(c, 9));
L_18e91c:;
  /* 18e91c: str xzr, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 31));
  /* 18e920: strb wzr, [x19, #0x20] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 31));
  /* 18e924: strb wzr, [x19, #0x78] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(120)), ARC_W_R(c, 31));
  /* 18e928: str xzr, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 31));
  /* 18e92c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 18e930: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 18e934: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 18e938: ret  */
  return;
}

void fn2_191dd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077501908));
  /* 191dd4: b #0x24b730 */
  fn2_24b730(c); return;
}

void fn2_194604(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077512196));
  /* 194604: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 194608: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 19460c: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 194610: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 194614: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 194618: ldr x9, [x0, #0x80] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(128))));
  /* 19461c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 194620: ldr x20, [x0, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 194624: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 194628: strb w8, [x0, #0x60] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(96)), ARC_W_R(c, 8));
  /* 19462c: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 194630: str x8, [x0, #0x80] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(128)), ARC_X_R(c, 8));
  /* 194634: cbz x20, #0x194710 */
  if ((ARC_X_R(c, 20)) == 0) goto L_194710;
  /* 194638: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 19463c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656384));
  fn2_1ccc74(c);
  /* 194640: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 194644: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 194648: mov w1, #0x3e8 */
  ARC_W_W(c, 1, UINT64_C(1000));
  /* 19464c: bl #0x2321fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656400));
  fn2_2321fc(c);
  /* 194650: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 194654: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656408));
  fn2_1ccd9c(c);
  /* 194658: ldr x20, [x19, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 19465c: cbz x20, #0x194668 */
  if ((ARC_X_R(c, 20)) == 0) goto L_194668;
  /* 194660: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 194664: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656424));
  fn2_2259d8(c);
L_194668:;
  /* 194668: bl #0x22eb3c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656428));
  fn2_22eb3c(c);
  /* 19466c: bl #0x2302d4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656432));
  fn2_2302d4(c);
  /* 194670: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 194674: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* 194678: cbz x20, #0x194688 */
  if ((ARC_X_R(c, 20)) == 0) goto L_194688;
  /* 19467c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 194680: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* 194684: bl #0x2259d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656456));
  fn2_2259d8(c);
L_194688:;
  /* 194688: add x0, x19, #0x88 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(136)));
  /* 19468c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 194690: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 194694: bl #0x19dd2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656472));
  fn2_19dd2c(c);
  /* 194698: ldr x0, [sp] */
  ARC_X_W(c, 0, arc_ld64((c)->sp));
  /* 19469c: cbz x0, #0x1946c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1946c0;
  /* 1946a0: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656484));
  fn2_225abc(c);
  /* 1946a4: tbz w0, #0, #0x1946c0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1946c0;
  /* 1946a8: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1946ac: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1946b0: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 1946b4: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1946b8: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1946bc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656512));
  arc_dispatch(c, ARC_X_R(c, 9));
L_1946c0:;
  /* 1946c0: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* 1946c4: cbz x20, #0x1946e8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_1946e8;
  /* 1946c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1946cc: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656528));
  fn2_225abc(c);
  /* 1946d0: tbz w0, #0, #0x1946e8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_1946e8;
  /* 1946d4: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1946d8: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 1946dc: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1946e0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1946e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656552));
  arc_dispatch(c, ARC_X_R(c, 8));
L_1946e8:;
  /* 1946e8: ldr x0, [x19, #0x20] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 1946ec: cbz x0, #0x194710 */
  if ((ARC_X_R(c, 0)) == 0) goto L_194710;
  /* 1946f0: bl #0x225abc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656564));
  fn2_225abc(c);
  /* 1946f4: tbz w0, #0, #0x194710 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_194710;
  /* 1946f8: adrp x9, #0x257000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1946fc: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* 194700: ldr x9, [x9, #0xfb0] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(4016))));
  /* 194704: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 194708: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 19470c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656592));
  arc_dispatch(c, ARC_X_R(c, 9));
L_194710:;
  /* 194710: add x0, x19, #0x50 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(80)));
  /* 194714: str xzr, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 31));
  /* 194718: strb wzr, [x19, #0x40] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(64)), ARC_W_R(c, 31));
  /* 19471c: bl #0x1db804 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1656608));
  fn2_1db804(c);
  /* 194720: mov x8, #-0x4010000000000000 */
  ARC_X_W(c, 8, UINT64_C(13830554455654793216));
  /* 194724: str x8, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 8));
  /* 194728: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19472c: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 194730: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 194734: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 194738: ret  */
  return;
}

void fn2_19e1a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077552040));
  /* 19e1a8: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 19e1ac: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 19e1b0: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 19e1b4: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 19e1b8: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 19e1bc: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 19e1c0: ldrsw x1, [x1] */
  ARC_X_W(c, 1, ((int64_t)(int32_t)arc_ld32(ARC_X_R(c, 1))));
  /* 19e1c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 19e1c8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 19e1cc: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 19e1d0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 19e1d4: mov x22, x8 */
  ARC_X_W(c, 22, ARC_X_R(c, 8));
  /* 19e1d8: add x24, sp, #0x18 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(24)));
  /* 19e1dc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696224));
  fn2_1bc290(c);
  /* 19e1e0: add x23, x24, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + UINT64_C(24)));
  /* 19e1e4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 19e1e8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 19e1ec: bl #0x1bc544 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696240));
  fn2_1bc544(c);
  /* 19e1f0: ldr x1, [x19] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* 19e1f4: add x19, x24, #0x30 */
  ARC_X_W(c, 19, (ARC_X_R(c, 24) + UINT64_C(48)));
  /* 19e1f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 19e1fc: bl #0x1bc290 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696256));
  fn2_1bc290(c);
  /* 19e200: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 19e204: stp x24, x23, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 19e208: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 19e20c: bl #0x1d7878 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696272));
  fn2_1d7878(c);
  /* 19e210: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 19e214: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 19e218: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 19e21c: ldr x8, [x8, #0xfb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 19e220: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 19e224: mov w3, #3 */
  ARC_W_W(c, 3, UINT64_C(3));
  /* 19e228: ldr x8, [x8, #0xc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(200))));
  /* 19e22c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696304));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 19e230: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 19e234: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696312));
  fn2_1bc620(c);
  /* 19e238: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 19e23c: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696320));
  fn2_1bc620(c);
  /* 19e240: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 19e244: bl #0x1bc620 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1696328));
  fn2_1bc620(c);
  /* 19e248: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 19e24c: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 19e250: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 19e254: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 19e258: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 19e25c: ret  */
  return;
}

void fn2_19eda4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077555108));
  /* 19eda4: fmov d0, #8.00000000 */
  arc_d_w(c, 0, (double)(8.0));
  /* 19eda8: ret  */
  return;
}

void fn2_1a00f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077560056));
  /* 1a00f8: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1a00fc: mov x3, x1 */
  ARC_X_W(c, 3, ARC_X_R(c, 1));
  /* 1a0100: ldr x2, [x0, #0x28] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* 1a0104: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1a0108: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1a010c: b #0x1a0114 */
  fn2_1a0114(c); return;
}

void fn2_1a13e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077564900));
  /* 1a13e4: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* 1a13e8: mov w8, #0x1b */
  ARC_W_W(c, 8, UINT64_C(27));
  /* 1a13ec: cset w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? 1 : 0));
  /* 1a13f0: cmp w1, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1));
  /* 1a13f4: lsl w9, w9, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 1a13f8: csel w8, w8, w9, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* 1a13fc: cmp w1, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2));
  /* 1a1400: csel w0, w8, wzr, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 31)));
  /* 1a1404: ret  */
  return;
}

void fn2_1a2640(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077569600));
  /* 1a2640: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a2644: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1a2648: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a264c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a2650: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1a2654: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1a2658: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 1a265c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1a2660: mov w0, #0x70 */
  ARC_W_W(c, 0, UINT64_C(112));
  /* 1a2664: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 1a2668: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713772));
  fn2_1b5d1c(c);
  /* 1a266c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1a2670: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 1a2674: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a2678: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 1a267c: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1a2680: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1a2684: str x8, [x0], #0xc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(12));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 1a2688: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713804));
  fn2_1d2c2c(c);
  /* 1a268c: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a2690: bl #0x1d2c2c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713812));
  fn2_1d2c2c(c);
  /* 1a2694: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1a2698: adrp x8, #0x254000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2441216)));
  /* 1a269c: add x8, x8, #0x138 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(312)));
  /* 1a26a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a26a4: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 1a26a8: stur xzr, [x19, #0x1c] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(28)), ARC_X_R(c, 31));
  /* 1a26ac: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 1a26b0: stp xzr, x21, [x19, #0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a26b4: stur q0, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)) + 8, (c)->q[0].u64[1]);
  /* 1a26b8: stur q0, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* 1a26bc: stur q0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* 1a26c0: str x20, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 20));
  /* 1a26c4: mov w20, #2 */
  ARC_W_W(c, 20, UINT64_C(2));
  /* 1a26c8: bl #0x1b5e68 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713868));
  fn2_1b5e68(c);
  /* 1a26cc: str w20, [x19, #0x1c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(28)), ARC_W_R(c, 20));
  /* 1a26d0: nop  */
  /* nop: no architectural effect here */
  /* 1a26d4: adr x8, #0x25d368 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a26d8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1a26dc: tbz w8, #0, #0x1a2718 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1a2718;
L_1a26e0:;
  /* 1a26e0: nop  */
  /* nop: no architectural effect here */
  /* 1a26e4: adr x1, #0x25d35a */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a26e8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a26ec: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713904));
  fn2_1d2c40(c);
  /* 1a26f0: add x0, x19, #0x14 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(20)));
  /* 1a26f4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a26f8: bl #0x1d5dc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713916));
  fn2_1d5dc0(c);
  /* 1a26fc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1a2700: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713924));
  fn2_1d2d24(c);
  /* 1a2704: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1a2708: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a270c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1a2710: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a2714: ret  */
  return;
L_1a2718:;
  /* 1a2718: nop  */
  /* nop: no architectural effect here */
  /* 1a271c: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a2720: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713956));
  fn2_24b710(c);
  /* 1a2724: cbz w0, #0x1a26e0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1a26e0;
  /* 1a2728: nop  */
  /* nop: no architectural effect here */
  /* 1a272c: adr x20, #0x25d35a */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2478938)));
  /* 1a2730: adrp x1, #0x36000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(221184)));
  /* 1a2734: add x1, x1, #0x53c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1340)));
  /* 1a2738: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1a273c: bl #0x1b907c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1713984));
  fn2_1b907c(c);
  /* 1a2740: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 1a2744: nop  */
  /* nop: no architectural effect here */
  /* 1a2748: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 1a274c: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 1a2750: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1a2754: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1714008));
  fn2_24b6f0(c);
  /* 1a2758: nop  */
  /* nop: no architectural effect here */
  /* 1a275c: adr x0, #0x25d368 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2478952)));
  /* 1a2760: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1714020));
  fn2_24b720(c);
  /* 1a2764: b #0x1a26e0 */
  goto L_1a26e0;
}

void fn2_1a4034(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077576244));
  /* 1a4034: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1a4038: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1a403c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1a4040: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1a4044: ldrb w8, [x0, #0x21] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(33))));
  /* 1a4048: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1a404c: cbz w8, #0x1a40bc */
  if ((ARC_W_R(c, 8)) == 0) goto L_1a40bc;
  /* 1a4050: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1a4054: cbz x0, #0x1a40bc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a40bc;
  /* 1a4058: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1a405c: add x1, x1, #0x88f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2191)));
  /* 1a4060: bl #0x24b7d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720420));
  fn2_24b7d0(c);
  /* 1a4064: cbz x0, #0x1a40a0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a40a0;
  /* 1a4068: ldr w8, [x19, #0x50] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(80))));
  /* 1a406c: cbz w8, #0x1a40a0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1a40a0;
  /* 1a4070: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1a4074: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* 1a4078: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_1a407c:;
  /* 1a407c: ldr x8, [x19, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 1a4080: ldr x0, [x19, #0x38] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* 1a4084: ldr w1, [x8, x21] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 8) + ARC_X_R(c, 21))));
  /* 1a4088: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720460));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 1a408c: ldr w8, [x19, #0x50] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(80))));
  /* 1a4090: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 1a4094: add x21, x21, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 1a4098: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 1a409c: b.lo #0x1a407c */
  if (ARC_COND(c, 3)) goto L_1a407c;
L_1a40a0:;
  /* 1a40a0: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 1a40a4: cbz x0, #0x1a40bc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a40bc;
  /* 1a40a8: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1a40ac: add x1, x1, #0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(0)));
  /* 1a40b0: bl #0x24b7d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720500));
  fn2_24b7d0(c);
  /* 1a40b4: cbz x0, #0x1a40bc */
  if ((ARC_X_R(c, 0)) == 0) goto L_1a40bc;
  /* 1a40b8: blr x0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1720508));
  arc_dispatch(c, ARC_X_R(c, 0));
L_1a40bc:;
  /* 1a40bc: ldr w8, [x19, #0x50] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(80))));
  /* 1a40c0: strb wzr, [x19, #0x21] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(33)), ARC_W_R(c, 31));
  /* 1a40c4: cbz w8, #0x1a40cc */
  if ((ARC_W_R(c, 8)) == 0) goto L_1a40cc;
  /* 1a40c8: str wzr, [x19, #0x50] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(80)), ARC_W_R(c, 31));
L_1a40cc:;
  /* 1a40cc: add x0, x19, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(96)));
  /* 1a40d0: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1a40d4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1a40d8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1a40dc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1a40e0: b #0x1a6e28 */
  fn2_1a6e28(c); return;
}

void fn2_1a6cf4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077587700));
  /* 1a6cf4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1a6cf8: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1a6cfc: add x1, x1, #0x12 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(18)));
  /* 1a6d00: b #0x1b7d24 */
  fn2_1b7d24(c); return;
}

void fn2_1a8b80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077595520));
  /* 1a8b80: ldr w0, [x0, #0x28] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(40))));
  /* 1a8b84: ret  */
  return;
}

void fn2_1aacc4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077604036));
  /* 1aacc4: ldp x3, x8, [x0, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(96));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1aacc8: add x0, x1, x8, asr #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> 1))));
  /* 1aaccc: tbz w8, #0, #0x1aacd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1aacd8;
  /* 1aacd0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1aacd4: ldr x3, [x8, x3] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 8) + ARC_X_R(c, 3))));
L_1aacd8:;
  /* 1aacd8: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 1aacdc: ldr w1, [x8] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* 1aace0: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1af07c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077621372));
  /* 1af07c: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1af080: str w1, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* 1af084: ret  */
  return;
}

void fn2_1b0208(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077625864));
  /* 1b0208: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b020c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b0210: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b0214: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1b0218: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b021c: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1b0220: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1770020));
  fn2_1d2c40(c);
  /* 1b0224: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b0228: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b022c: bl #0x1d2c40 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1770032));
  fn2_1d2c40(c);
  /* 1b0230: add x8, x19, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 1b0234: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1b0238: str xzr, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 31));
  /* 1b023c: stp x8, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1b0240: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1770052));
  fn2_1d2d24(c);
  /* 1b0244: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b0248: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b024c: ret  */
  return;
}

void fn2_1b3a1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077640220));
  /* 1b3a1c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1b3a20: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b3a24: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b3a28: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1b3a2c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1b3a30: ldp x10, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 1b3a34: mov x11, #0x8e39 */
  ARC_X_W(c, 11, UINT64_C(36409));
  /* 1b3a38: movk x11, #0x38e3, lsl #16 */
  ARC_X_W(c, 11, ((ARC_X_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(954400768)));
  /* 1b3a3c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b3a40: movk x11, #0xe38e, lsl #32 */
  ARC_X_W(c, 11, ((ARC_X_R(c, 11) & UINT64_C(18446462603027808255)) | UINT64_C(250199024861184)));
  /* 1b3a44: sub x8, x8, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 1b3a48: movk x11, #0x8e38, lsl #48 */
  ARC_X_W(c, 11, ((ARC_X_R(c, 11) & UINT64_C(281474976710655)) | UINT64_C(10247940952081563648)));
  /* 1b3a4c: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 1b3a50: mul x21, x8, x11 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 11))));
  /* 1b3a54: mov x8, #0xc71c */
  ARC_X_W(c, 8, UINT64_C(50972));
  /* 1b3a58: movk x8, #0x1c71, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(477167616)));
  /* 1b3a5c: movk x8, #0x71c7, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(125099512430592)));
  /* 1b3a60: movk x8, #0x71c, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(512284457613393920)));
  /* 1b3a64: add x9, x21, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 1b3a68: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 1b3a6c: b.hi #0x1b3b94 */
  if (ARC_COND(c, 8)) goto L_1b3b94;
  /* 1b3a70: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* 1b3a74: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1b3a78: ldr x13, [x12, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 12) + INT64_C(16));
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(16));
    ARC_X_W(c, 13, arc_ld64(_a));
  }
  /* 1b3a7c: str x12, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 12));
  /* 1b3a80: sub x10, x13, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 13) - ARC_X_R(c, 10)));
  /* 1b3a84: mov x13, #0xe38e */
  ARC_X_W(c, 13, UINT64_C(58254));
  /* 1b3a88: asr x10, x10, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(2)) & 63))));
  /* 1b3a8c: movk x13, #0x8e38, lsl #16 */
  ARC_X_W(c, 13, ((ARC_X_R(c, 13) & UINT64_C(18446744069414649855)) | UINT64_C(2386034688)));
  /* 1b3a90: movk x13, #0x38e3, lsl #32 */
  ARC_X_W(c, 13, ((ARC_X_R(c, 13) & UINT64_C(18446462603027808255)) | UINT64_C(62547608731648)));
  /* 1b3a94: mul x10, x10, x11 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11))));
  /* 1b3a98: movk x13, #0x38e, lsl #48 */
  ARC_X_W(c, 13, ((ARC_X_R(c, 13) & UINT64_C(281474976710655)) | UINT64_C(256142228806696960)));
  /* 1b3a9c: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* 1b3aa0: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 1b3aa4: csel x9, x11, x9, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
  /* 1b3aa8: cmp x10, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 13));
  /* 1b3aac: csel x22, x9, x8, lo */
  ARC_X_W(c, 22, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 1b3ab0: cbz x22, #0x1b3acc */
  if ((ARC_X_R(c, 22)) == 0) goto L_1b3acc;
  /* 1b3ab4: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* 1b3ab8: b.hi #0x1b3b9c */
  if (ARC_COND(c, 8)) goto L_1b3b9c;
  /* 1b3abc: add x8, x22, x22, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 22)) << 3)));
  /* 1b3ac0: lsl x0, x8, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 1b3ac4: bl #0x24b750 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784520));
  fn2_24b750(c);
  /* 1b3ac8: b #0x1b3ad0 */
  goto L_1b3ad0;
L_1b3acc:;
  /* 1b3acc: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_1b3ad0:;
  /* 1b3ad0: mov w8, #0x24 */
  ARC_W_W(c, 8, UINT64_C(36));
  /* 1b3ad4: ldr w9, [x20] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 20)));
  /* 1b3ad8: add x1, x20, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(4)));
  /* 1b3adc: madd x21, x21, x8, x0 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* 1b3ae0: madd x8, x22, x8, x0 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 0)) + ((uint64_t)(ARC_X_R(c, 22)) * (uint64_t)(ARC_X_R(c, 8)))));
  /* 1b3ae4: stp x0, x21, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1b3ae8: add x0, x21, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(4)));
  /* 1b3aec: str w9, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 9));
  /* 1b3af0: str x8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 8));
  /* 1b3af4: bl #0x1d2ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784568));
  fn2_1d2ca0(c);
  /* 1b3af8: add x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(12)));
  /* 1b3afc: add x1, x20, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(12)));
  /* 1b3b00: bl #0x1d2ca0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784580));
  fn2_1d2ca0(c);
  /* 1b3b04: ldr w8, [x20, #0x14] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(20))));
  /* 1b3b08: add x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + UINT64_C(24)));
  /* 1b3b0c: add x1, x20, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 1b3b10: str w8, [x21, #0x14] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(20)), ARC_W_R(c, 8));
  /* 1b3b14: bl #0x1ccd18 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784600));
  fn2_1ccd18(c);
  /* 1b3b18: ldr w8, [x20, #0x20] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(32))));
  /* 1b3b1c: add x9, x21, #0x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + UINT64_C(36)));
  /* 1b3b20: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1b3b24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b3b28: str x9, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 9));
  /* 1b3b2c: str w8, [x21, #0x20] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(32)), ARC_W_R(c, 8));
  /* 1b3b30: bl #0x1b391c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784628));
  fn2_1b391c(c);
  /* 1b3b34: ldp x20, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b3b38: ldr x19, [x19, #8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 1b3b3c: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1b3b40: b.eq #0x1b3b70 */
  if (ARC_COND(c, 0)) goto L_1b3b70;
L_1b3b44:;
  /* 1b3b44: sub x8, x21, #0x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - UINT64_C(36)));
  /* 1b3b48: sub x0, x21, #0xc */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) - UINT64_C(12)));
  /* 1b3b4c: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 1b3b50: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784660));
  fn2_1ccd9c(c);
  /* 1b3b54: sub x0, x21, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) - UINT64_C(24)));
  /* 1b3b58: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784668));
  fn2_1d2d24(c);
  /* 1b3b5c: sub x0, x21, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) - UINT64_C(32)));
  /* 1b3b60: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784676));
  fn2_1d2d24(c);
  /* 1b3b64: ldr x21, [sp, #0x18] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1b3b68: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1b3b6c: b.ne #0x1b3b44 */
  if (ARC_COND(c, 1)) goto L_1b3b44;
L_1b3b70:;
  /* 1b3b70: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1b3b74: cbz x0, #0x1b3b7c */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b3b7c;
  /* 1b3b78: bl #0x24b730 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784700));
  fn2_24b730(c);
L_1b3b7c:;
  /* 1b3b7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b3b80: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1b3b84: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1b3b88: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b3b8c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1b3b90: ret  */
  return;
L_1b3b94:;
  /* 1b3b94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b3b98: bl #0xdb228 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784732));
  fn2_db228(c);
L_1b3b9c:;
  /* 1b3b9c: bl #0x179cc0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1784736));
  fn2_179cc0(c);
}

void fn2_1b5bd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077648856));
  /* 1b5bd8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b5bdc: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b5be0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b5be4: cbz x0, #0x1b5c1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b5c1c;
  /* 1b5be8: cbz x1, #0x1b5c50 */
  if ((ARC_X_R(c, 1)) == 0) goto L_1b5c50;
  /* 1b5bec: nop  */
  /* nop: no architectural effect here */
  /* 1b5bf0: adr x8, #0x25d430 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2479152)));
  /* 1b5bf4: tbz w2, #0, #0x1b5c80 */
  if (((ARC_W_R(c, 2)) >> 0 & 1) == 0) goto L_1b5c80;
  /* 1b5bf8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b5bfc: sub x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) - UINT64_C(16)));
  /* 1b5c00: add x1, x1, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 1b5c04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1793032));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b5c08: cbz x0, #0x1b5cb0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b5cb0;
  /* 1b5c0c: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 1b5c10: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b5c14: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b5c18: ret  */
  return;
L_1b5c1c:;
  /* 1b5c1c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b5c20: tst w2, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 2) & UINT64_C(1)));
  /* 1b5c24: mov w9, #0x10 */
  ARC_W_W(c, 9, UINT64_C(16));
  /* 1b5c28: ldr x8, [x8, #0x678] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1656))));
  /* 1b5c2c: csel x19, x9, xzr, ne */
  ARC_X_W(c, 19, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 31)));
  /* 1b5c30: add x0, x19, x1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + ARC_X_R(c, 1)));
  /* 1b5c34: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b5c38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1793084));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b5c3c: cbz x0, #0x1b5c90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_1b5c90;
  /* 1b5c40: add x0, x0, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 19)));
  /* 1b5c44: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b5c48: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b5c4c: ret  */
  return;
L_1b5c50:;
  /* 1b5c50: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b5c54: tst w2, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 2) & UINT64_C(1)));
  /* 1b5c58: mov x9, #-0x10 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551600));
  /* 1b5c5c: ldr x8, [x8, #0x688] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1672))));
  /* 1b5c60: csel x9, x9, xzr, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 31)));
  /* 1b5c64: add x0, x0, x9 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* 1b5c68: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b5c6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1793136));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b5c70: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1b5c74: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b5c78: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b5c7c: ret  */
  return;
L_1b5c80:;
  /* 1b5c80: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1b5c84: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b5c88: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b5c8c: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
L_1b5c90:;
  /* 1b5c90: adrp x0, #0x1c000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(114688)));
  /* 1b5c94: add x0, x0, #0x7a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1953)));
  /* 1b5c98: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1b5c9c: add x1, x1, #0xa52 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2642)));
  /* 1b5ca0: adrp x3, #0x28000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1b5ca4: add x3, x3, #0x88 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(136)));
  /* 1b5ca8: mov w2, #0x2d */
  ARC_W_W(c, 2, UINT64_C(45));
  /* 1b5cac: b #0x1b5ccc */
  goto L_1b5ccc;
L_1b5cb0:;
  /* 1b5cb0: adrp x0, #0x2b000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1b5cb4: add x0, x0, #0xcdc */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3292)));
  /* 1b5cb8: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1b5cbc: add x1, x1, #0xa52 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2642)));
  /* 1b5cc0: adrp x3, #0x28000 */
  ARC_X_W(c, 3, (arc_image_bases[2] + UINT64_C(163840)));
  /* 1b5cc4: add x3, x3, #0x88 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(136)));
  /* 1b5cc8: mov w2, #0x4a */
  ARC_W_W(c, 2, UINT64_C(74));
L_1b5ccc:;
  /* 1b5ccc: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* 1b5cd0: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* 1b5cd4: bl #0x1b54b0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1793240));
  fn2_1b54b0(c);
  /* 1b5cd8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1b5cdc: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b5ce0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b5ce4: ret  */
  return;
}

void fn2_1b755c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077655388));
  /* 1b755c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1b7560: strb wzr, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 1b7564: ret  */
  return;
}

void fn2_1b7dc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077657536));
  /* 1b7dc0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b7dc4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b7dc8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b7dcc: ldr x8, [x8, #0x828] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2088))));
  /* 1b7dd0: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b7dd4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1801688));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b7dd8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b7ddc: ret  */
  return;
}

void fn2_1b8a60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077660768));
  /* 1b8a60: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1b8a64: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1b8a68: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1b8a6c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1b8a70: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1b8a74: ldr x8, [x8, #0x878] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2168))));
  /* 1b8a78: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1b8a7c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1804928));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1b8a80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1b8a84: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1b8a88: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1b8a8c: ret  */
  return;
}

void fn2_1b9228(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077662760));
  /* 1b9228: b #0x1b922c */
  fn2_1b922c(c); return;
}

void fn2_1ba378(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077667192));
  /* 1ba378: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1ba37c: cbz x8, #0x1ba390 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1ba390;
  /* 1ba380: ldur x8, [x8, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-8))));
  /* 1ba384: subs x8, x8, #1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1)));
  /* 1ba388: csel x0, xzr, x8, lo */
  ARC_X_W(c, 0, (ARC_COND(c, 3) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 8)));
  /* 1ba38c: ret  */
  return;
L_1ba390:;
  /* 1ba390: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 1ba394: ret  */
  return;
}

void fn2_1bb320(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077671200));
  /* 1bb320: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 1bb324: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 1bb328: cbz x8, #0x1bb384 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1bb384;
  /* 1bb32c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bb330: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1bb334: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1bb338: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bb33c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1bb340: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1bb344: sub x21, x8, #0x10 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - UINT64_C(16)));
L_1bb348:;
  /* 1bb348: ldar x22, [x21] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 21)));
  /* 1bb34c: cbz x22, #0x1bb378 */
  if ((ARC_X_R(c, 22)) == 0) goto L_1bb378;
  /* 1bb350: add x1, x22, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 1bb354: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1bb358: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1bb35c: bl #0x24b250 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1815392));
  fn2_24b250(c);
  /* 1bb360: cmp x0, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22));
  /* 1bb364: b.ne #0x1bb348 */
  if (ARC_COND(c, 1)) goto L_1bb348;
  /* 1bb368: cmn x22, #1 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(1), 0);
  /* 1bb36c: b.eq #0x1bb378 */
  if (ARC_COND(c, 0)) goto L_1bb378;
  /* 1bb370: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1bb374: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_1bb378:;
  /* 1bb378: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1bb37c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1bb380: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
L_1bb384:;
  /* 1bb384: ret  */
  return;
}

void fn2_1bbd74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077673844));
  /* 1bbd74: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bbd78: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1bbd7c: ldr x8, [x8, #0x8d8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2264))));
  /* 1bbd80: ldr x2, [x8] */
  ARC_X_W(c, 2, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbd84: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bbfb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077674416));
  /* 1bbfb0: nop  */
  /* nop: no architectural effect here */
  /* 1bbfb4: adr x8, #0x25d7b8 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2480056)));
  /* 1bbfb8: ldr x7, [x8] */
  ARC_X_W(c, 7, arc_ld64(ARC_X_R(c, 8)));
  /* 1bbfbc: br x7 */
  arc_dispatch(c, ARC_X_R(c, 7)); return;
}

void fn2_1bc51c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077675804));
  /* 1bc51c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc520: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1bc524: str xzr, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 31));
  /* 1bc528: ldr x2, [x8, #0xb30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(2864))));
  /* 1bc52c: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bc9a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077676964));
  /* 1bc9a4: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 1bc9a8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1bc9ac: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1bc9b0: ldr x2, [x8, #0xbf0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))));
  /* 1bc9b4: mov w9, #0x3f800000 */
  ARC_W_W(c, 9, UINT64_C(1065353216));
  /* 1bc9b8: stur xzr, [x0, #0xc] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(12)), ARC_X_R(c, 31));
  /* 1bc9bc: stur xzr, [x0, #4] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(4)), ARC_X_R(c, 31));
  /* 1bc9c0: str wzr, [x0, #0x14] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(20)), ARC_W_R(c, 31));
  /* 1bc9c4: str w9, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* 1bc9c8: str w9, [x0, #0xc] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 9));
  /* 1bc9cc: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1bce9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077678236));
  /* 1bce9c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1bcea0: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1bcea4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1bcea8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bceac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1bceb0: ldr x8, [x8, #0x760] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1888))));
  /* 1bceb4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bceb8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1822396));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bcebc: mov x8, #0xf7ef */
  ARC_X_W(c, 8, UINT64_C(63471));
  /* 1bcec0: movk x8, #0x90, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(9437184)));
  /* 1bcec4: movk x8, #0x40, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(274877906944)));
  /* 1bcec8: lsr x8, x8, x0 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((ARC_X_R(c, 0)) & 63)));
  /* 1bcecc: tbz w8, #0, #0x1bceec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1bceec;
L_1bced0:;
  /* 1bced0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bced4: ldr x8, [x8, #0x6b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1712))));
  /* 1bced8: ldr x1, [x8] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 8)));
  /* 1bcedc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1bcee0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1bcee4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1bcee8: br x1 */
  arc_dispatch(c, ARC_X_R(c, 1)); return;
L_1bceec:;
  /* 1bceec: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1bcef0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1bcef4: ldr x8, [x8, #0x6b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1720))));
  /* 1bcef8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1bcefc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1822464));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1bcf00: b #0x1bced0 */
  goto L_1bced0;
}

void fn2_1bdb54(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077681492));
  /* 1bdb54: ldp s19, s20, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_su_w(c, 19, arc_ld32(_pa));
    arc_su_w(c, 20, arc_ld32((_pa + 4)));
  }
  /* 1bdb58: ldp s7, s21, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    arc_su_w(c, 7, arc_ld32(_pa));
    arc_su_w(c, 21, arc_ld32((_pa + 4)));
  }
  /* 1bdb5c: ldp s4, s1, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_su_w(c, 4, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 1bdb60: ldp s3, s0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_su_w(c, 3, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* 1bdb64: fmul s24, s20, s7 */
  arc_s_w(c, 24, (float)(arc_fmul32(ARC_S_R(c, 20), ARC_S_R(c, 7))));
  /* 1bdb68: fmul s23, s19, s21 */
  arc_s_w(c, 23, (float)(arc_fmul32(ARC_S_R(c, 19), ARC_S_R(c, 21))));
  /* 1bdb6c: fmul s25, s20, s1 */
  arc_s_w(c, 25, (float)(arc_fmul32(ARC_S_R(c, 20), ARC_S_R(c, 1))));
  /* 1bdb70: ldp s18, s6, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 18, arc_ld32(_pa));
    arc_su_w(c, 6, arc_ld32((_pa + 4)));
  }
  /* 1bdb74: ldp s2, s5, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 5, arc_ld32((_pa + 4)));
  }
  /* 1bdb78: fmul s20, s20, s4 */
  arc_s_w(c, 20, (float)(arc_fmul32(ARC_S_R(c, 20), ARC_S_R(c, 4))));
  /* 1bdb7c: ldp s26, s28, [x0, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(48));
    arc_su_w(c, 26, arc_ld32(_pa));
    arc_su_w(c, 28, arc_ld32((_pa + 4)));
  }
  /* 1bdb80: fmul s16, s24, s0 */
  arc_s_w(c, 16, (float)(arc_fmul32(ARC_S_R(c, 24), ARC_S_R(c, 0))));
  /* 1bdb84: fmul s17, s0, s23 */
  arc_s_w(c, 17, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 23))));
  /* 1bdb88: fmul s22, s21, s6 */
  arc_s_w(c, 22, (float)(arc_fmul32(ARC_S_R(c, 21), ARC_S_R(c, 6))));
  /* 1bdb8c: fmul s27, s25, s2 */
  arc_s_w(c, 27, (float)(arc_fmul32(ARC_S_R(c, 25), ARC_S_R(c, 2))));
  /* 1bdb90: fmul s24, s24, s3 */
  arc_s_w(c, 24, (float)(arc_fmul32(ARC_S_R(c, 24), ARC_S_R(c, 3))));
  /* 1bdb94: fmul s23, s23, s3 */
  arc_s_w(c, 23, (float)(arc_fmul32(ARC_S_R(c, 23), ARC_S_R(c, 3))));
  /* 1bdb98: fmul s21, s21, s18 */
  arc_s_w(c, 21, (float)(arc_fmul32(ARC_S_R(c, 21), ARC_S_R(c, 18))));
  /* 1bdb9c: fmul s25, s25, s3 */
  arc_s_w(c, 25, (float)(arc_fmul32(ARC_S_R(c, 25), ARC_S_R(c, 3))));
  /* 1bdba0: fmul s29, s16, s26 */
  arc_s_w(c, 29, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 26))));
  /* 1bdba4: fmul s17, s26, s17 */
  arc_s_w(c, 17, (float)(arc_fmul32(ARC_S_R(c, 26), ARC_S_R(c, 17))));
  /* 1bdba8: fmul s16, s19, s1 */
  arc_s_w(c, 16, (float)(arc_fmul32(ARC_S_R(c, 19), ARC_S_R(c, 1))));
  /* 1bdbac: fmul s30, s2, s22 */
  arc_s_w(c, 30, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 22))));
  /* 1bdbb0: fmul s27, s26, s27 */
  arc_s_w(c, 27, (float)(arc_fmul32(ARC_S_R(c, 26), ARC_S_R(c, 27))));
  /* 1bdbb4: fmul s24, s24, s28 */
  arc_s_w(c, 24, (float)(arc_fmul32(ARC_S_R(c, 24), ARC_S_R(c, 28))));
  /* 1bdbb8: fmul s23, s23, s28 */
  arc_s_w(c, 23, (float)(arc_fmul32(ARC_S_R(c, 23), ARC_S_R(c, 28))));
  /* 1bdbbc: fmul s19, s19, s4 */
  arc_s_w(c, 19, (float)(arc_fmul32(ARC_S_R(c, 19), ARC_S_R(c, 4))));
  /* 1bdbc0: fsub s29, s29, s17 */
  arc_s_w(c, 29, (float)(arc_fsub32(ARC_S_R(c, 29), ARC_S_R(c, 17))));
  /* 1bdbc4: fmul s17, s7, s6 */
  arc_s_w(c, 17, (float)(arc_fmul32(ARC_S_R(c, 7), ARC_S_R(c, 6))));
  /* 1bdbc8: fmul s7, s7, s18 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 7), ARC_S_R(c, 18))));
  /* 1bdbcc: fmul s30, s26, s30 */
  arc_s_w(c, 30, (float)(arc_fmul32(ARC_S_R(c, 26), ARC_S_R(c, 30))));
  /* 1bdbd0: fmul s22, s22, s3 */
  arc_s_w(c, 22, (float)(arc_fmul32(ARC_S_R(c, 22), ARC_S_R(c, 3))));
  /* 1bdbd4: fmul s4, s6, s4 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 4))));
  /* 1bdbd8: fmul s1, s1, s18 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 18))));
  /* 1bdbdc: fsub s27, s29, s27 */
  arc_s_w(c, 27, (float)(arc_fsub32(ARC_S_R(c, 29), ARC_S_R(c, 27))));
  /* 1bdbe0: fmul s29, s16, s5 */
  arc_s_w(c, 29, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 5))));
  /* 1bdbe4: fmul s16, s16, s3 */
  arc_s_w(c, 16, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 3))));
  /* 1bdbe8: fmul s3, s17, s3 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 17), ARC_S_R(c, 3))));
  /* 1bdbec: fadd s27, s27, s30 */
  arc_s_w(c, 27, (float)(arc_fadd32(ARC_S_R(c, 27), ARC_S_R(c, 30))));
  /* 1bdbf0: fmul s30, s17, s5 */
  arc_s_w(c, 30, (float)(arc_fmul32(ARC_S_R(c, 17), ARC_S_R(c, 5))));
  /* 1bdbf4: fmul s29, s26, s29 */
  arc_s_w(c, 29, (float)(arc_fmul32(ARC_S_R(c, 26), ARC_S_R(c, 29))));
  /* 1bdbf8: fmul s26, s26, s30 */
  arc_s_w(c, 26, (float)(arc_fmul32(ARC_S_R(c, 26), ARC_S_R(c, 30))));
  /* 1bdbfc: fadd s27, s29, s27 */
  arc_s_w(c, 27, (float)(arc_fadd32(ARC_S_R(c, 29), ARC_S_R(c, 27))));
  /* 1bdc00: fsub s26, s27, s26 */
  arc_s_w(c, 26, (float)(arc_fsub32(ARC_S_R(c, 27), ARC_S_R(c, 26))));
  /* 1bdc04: fsub s24, s26, s24 */
  arc_s_w(c, 24, (float)(arc_fsub32(ARC_S_R(c, 26), ARC_S_R(c, 24))));
  /* 1bdc08: fmul s26, s2, s20 */
  arc_s_w(c, 26, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 20))));
  /* 1bdc0c: fmul s20, s0, s20 */
  arc_s_w(c, 20, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 20))));
  /* 1bdc10: fadd s23, s23, s24 */
  arc_s_w(c, 23, (float)(arc_fadd32(ARC_S_R(c, 23), ARC_S_R(c, 24))));
  /* 1bdc14: fmul s24, s2, s21 */
  arc_s_w(c, 24, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 21))));
  /* 1bdc18: fmul s26, s28, s26 */
  arc_s_w(c, 26, (float)(arc_fmul32(ARC_S_R(c, 28), ARC_S_R(c, 26))));
  /* 1bdc1c: fmul s21, s0, s21 */
  arc_s_w(c, 21, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 21))));
  /* 1bdc20: fadd s23, s26, s23 */
  arc_s_w(c, 23, (float)(arc_fadd32(ARC_S_R(c, 26), ARC_S_R(c, 23))));
  /* 1bdc24: fmul s26, s5, s19 */
  arc_s_w(c, 26, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 19))));
  /* 1bdc28: fmul s24, s28, s24 */
  arc_s_w(c, 24, (float)(arc_fmul32(ARC_S_R(c, 28), ARC_S_R(c, 24))));
  /* 1bdc2c: fsub s23, s23, s24 */
  arc_s_w(c, 23, (float)(arc_fsub32(ARC_S_R(c, 23), ARC_S_R(c, 24))));
  /* 1bdc30: fmul s24, s5, s7 */
  arc_s_w(c, 24, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 7))));
  /* 1bdc34: fmul s26, s28, s26 */
  arc_s_w(c, 26, (float)(arc_fmul32(ARC_S_R(c, 28), ARC_S_R(c, 26))));
  /* 1bdc38: fmul s24, s28, s24 */
  arc_s_w(c, 24, (float)(arc_fmul32(ARC_S_R(c, 28), ARC_S_R(c, 24))));
  /* 1bdc3c: fsub s23, s23, s26 */
  arc_s_w(c, 23, (float)(arc_fsub32(ARC_S_R(c, 23), ARC_S_R(c, 26))));
  /* 1bdc40: fadd s23, s24, s23 */
  arc_s_w(c, 23, (float)(arc_fadd32(ARC_S_R(c, 24), ARC_S_R(c, 23))));
  /* 1bdc44: ldp s26, s24, [x0, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(56));
    arc_su_w(c, 26, arc_ld32(_pa));
    arc_su_w(c, 24, arc_ld32((_pa + 4)));
  }
  /* 1bdc48: fmul s25, s25, s26 */
  arc_s_w(c, 25, (float)(arc_fmul32(ARC_S_R(c, 25), ARC_S_R(c, 26))));
  /* 1bdc4c: fmul s22, s22, s26 */
  arc_s_w(c, 22, (float)(arc_fmul32(ARC_S_R(c, 22), ARC_S_R(c, 26))));
  /* 1bdc50: fmul s20, s20, s26 */
  arc_s_w(c, 20, (float)(arc_fmul32(ARC_S_R(c, 20), ARC_S_R(c, 26))));
  /* 1bdc54: fmul s6, s26, s21 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 26), ARC_S_R(c, 21))));
  /* 1bdc58: fmul s21, s5, s4 */
  arc_s_w(c, 21, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 4))));
  /* 1bdc5c: fmul s5, s5, s1 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 1))));
  /* 1bdc60: fmul s3, s3, s24 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 24))));
  /* 1bdc64: fmul s4, s2, s4 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 4))));
  /* 1bdc68: fadd s23, s25, s23 */
  arc_s_w(c, 23, (float)(arc_fadd32(ARC_S_R(c, 25), ARC_S_R(c, 23))));
  /* 1bdc6c: fmul s1, s2, s1 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 1))));
  /* 1bdc70: fmul s18, s21, s26 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 21), ARC_S_R(c, 26))));
  /* 1bdc74: fmul s5, s26, s5 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 26), ARC_S_R(c, 5))));
  /* 1bdc78: fsub s22, s23, s22 */
  arc_s_w(c, 22, (float)(arc_fsub32(ARC_S_R(c, 23), ARC_S_R(c, 22))));
  /* 1bdc7c: fmul s1, s1, s24 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 24))));
  /* 1bdc80: fsub s20, s22, s20 */
  arc_s_w(c, 20, (float)(arc_fsub32(ARC_S_R(c, 22), ARC_S_R(c, 20))));
  /* 1bdc84: fadd s6, s6, s20 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 6), ARC_S_R(c, 20))));
  /* 1bdc88: fadd s6, s18, s6 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 18), ARC_S_R(c, 6))));
  /* 1bdc8c: fsub s5, s6, s5 */
  arc_s_w(c, 5, (float)(arc_fsub32(ARC_S_R(c, 6), ARC_S_R(c, 5))));
  /* 1bdc90: fmul s6, s16, s24 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 24))));
  /* 1bdc94: fsub s5, s5, s6 */
  arc_s_w(c, 5, (float)(arc_fsub32(ARC_S_R(c, 5), ARC_S_R(c, 6))));
  /* 1bdc98: fmul s6, s0, s19 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 19))));
  /* 1bdc9c: fmul s0, s0, s7 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 7))));
  /* 1bdca0: fadd s3, s3, s5 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 5))));
  /* 1bdca4: fmul s5, s6, s24 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 24))));
  /* 1bdca8: fmul s0, s0, s24 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 24))));
  /* 1bdcac: fadd s3, s5, s3 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 5), ARC_S_R(c, 3))));
  /* 1bdcb0: fsub s0, s3, s0 */
  arc_s_w(c, 0, (float)(arc_fsub32(ARC_S_R(c, 3), ARC_S_R(c, 0))));
  /* 1bdcb4: fmul s3, s4, s24 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 24))));
  /* 1bdcb8: fsub s0, s0, s3 */
  arc_s_w(c, 0, (float)(arc_fsub32(ARC_S_R(c, 0), ARC_S_R(c, 3))));
  /* 1bdcbc: fadd s0, s1, s0 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 0))));
  /* 1bdcc0: ret  */
  return;
}

void fn2_1bee18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077686296));
  /* 1bee18: ldp q1, q0, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1bee1c: ldp q3, q4, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1bee20: stp q1, q0, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 1bee24: ldr d0, [x1] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 1)));
  /* 1bee28: ldr d2, [x8, #0x30] */
  arc_du_w(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 1bee2c: stp q3, q4, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[4].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[4].u64[1]);
  }
  /* 1bee30: fadd v0.2s, v0.2s, v2.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[0].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[0].f32[1], (c)->q[2].f32[1]);
    (c)->q[0] = _t; }
  /* 1bee34: str d0, [x8, #0x30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(48)), (c)->q[0].u64[0]);
  /* 1bee38: ret  */
  return;
}

void fn2_1c19d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077697488));
  /* 1c19d0: ldr d0, [x2] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 2)));
  /* 1c19d4: ldr d4, [x0] */
  arc_du_w(c, 4, arc_ld64(ARC_X_R(c, 0)));
  /* 1c19d8: mov w8, #0xc5ac */
  ARC_W_W(c, 8, UINT64_C(50604));
  /* 1c19dc: ldr s1, [x2, #8] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 1c19e0: ldr s5, [x0, #8] */
  arc_su_w(c, 5, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c19e4: movk w8, #0x3727, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(925302784)));
  /* 1c19e8: fmul v2.2s, v0.2s, v4.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[4].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[4].f32[1]);
    (c)->q[2] = _t; }
  /* 1c19ec: fmov s6, w8 */
  arc_su_w(c, 6, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c19f0: fmul s3, s1, s5 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 5))));
  /* 1c19f4: faddp s2, v2.2s */
  arc_s_w(c, 2, (float)(arc_fadd32((c)->q[2].f32[0], (c)->q[2].f32[1])));
  /* 1c19f8: fadd s3, s2, s3 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 2), ARC_S_R(c, 3))));
  /* 1c19fc: fabs s2, s3 */
  arc_s_w(c, 2, (float)(fabsf(ARC_S_R(c, 3))));
  /* 1c1a00: fcmp s2, s6 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 6)));
  /* 1c1a04: b.mi #0x1c1a58 */
  if (ARC_COND(c, 4)) goto L_1c1a58;
  /* 1c1a08: ldr d2, [x1] */
  arc_du_w(c, 2, arc_ld64(ARC_X_R(c, 1)));
  /* 1c1a0c: fmul v6.2s, v4.2s, v2.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[4].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[4].f32[1], (c)->q[2].f32[1]);
    (c)->q[6] = _t; }
  /* 1c1a10: ldr s4, [x1, #8] */
  arc_su_w(c, 4, arc_ld32((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1c1a14: fmul s5, s5, s4 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 4))));
  /* 1c1a18: faddp s6, v6.2s */
  arc_s_w(c, 6, (float)(arc_fadd32((c)->q[6].f32[0], (c)->q[6].f32[1])));
  /* 1c1a1c: fadd s5, s6, s5 */
  arc_s_w(c, 5, (float)(arc_fadd32(ARC_S_R(c, 6), ARC_S_R(c, 5))));
  /* 1c1a20: ldr s6, [x0, #0xc] */
  arc_su_w(c, 6, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1c1a24: fsub s5, s5, s6 */
  arc_s_w(c, 5, (float)(arc_fsub32(ARC_S_R(c, 5), ARC_S_R(c, 6))));
  /* 1c1a28: fdiv s3, s5, s3 */
  arc_s_w(c, 3, (float)(arc_fdiv32(ARC_S_R(c, 5), ARC_S_R(c, 3))));
  /* 1c1a2c: fmov s5, w8 */
  arc_su_w(c, 5, (uint32_t)(ARC_W_R(c, 8)));
  /* 1c1a30: fcmp s3, s5 */
  arc_fcmp(c, (double)(ARC_S_R(c, 3)), (double)(ARC_S_R(c, 5)));
  /* 1c1a34: b.gt #0x1c1a58 */
  if (ARC_COND(c, 12)) goto L_1c1a58;
  /* 1c1a38: fmul v0.2s, v0.2s, v3.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[3].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[3].f32[0]);
    (c)->q[0] = _t; }
  /* 1c1a3c: fmul s1, s1, s3 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 3))));
  /* 1c1a40: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1c1a44: fsub v0.2s, v2.2s, v0.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[2].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[2].f32[1], (c)->q[0].f32[1]);
    (c)->q[0] = _t; }
  /* 1c1a48: fsub s1, s4, s1 */
  arc_s_w(c, 1, (float)(arc_fsub32(ARC_S_R(c, 4), ARC_S_R(c, 1))));
  /* 1c1a4c: str d0, [x3] */
  arc_st64(ARC_X_R(c, 3), (c)->q[0].u64[0]);
  /* 1c1a50: str s1, [x3, #8] */
  arc_st32((ARC_X_R(c, 3) + INT64_C(8)), (c)->q[1].u32[0]);
  /* 1c1a54: ret  */
  return;
L_1c1a58:;
  /* 1c1a58: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1c1a5c: ret  */
  return;
}

void fn2_1c35dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077704668));
  /* 1c35dc: ldr s0, [x0, #8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1c35e0: ldr s1, [x0, #0x14] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(20))));
  /* 1c35e4: ldr s2, [x0, #0x20] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 0) + INT64_C(32))));
  /* 1c35e8: ldr d3, [x0, #0x18] */
  arc_du_w(c, 3, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 1c35ec: fmul s0, s0, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 0))));
  /* 1c35f0: fmul s1, s1, s1 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 1))));
  /* 1c35f4: fmul s2, s2, s2 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 2))));
  /* 1c35f8: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c35fc: ldur d1, [x0, #0xc] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1c3600: fmul v1.2s, v1.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[1].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[1].f32[1], (c)->q[1].f32[1]);
    (c)->q[1] = _t; }
  /* 1c3604: fadd s0, s0, s2 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 2))));
  /* 1c3608: fsqrt s2, s0 */
  arc_s_w(c, 2, (float)(arc_fsqrt32(ARC_S_R(c, 0))));
  /* 1c360c: ldr d0, [x0] */
  arc_du_w(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 1c3610: fmul v0.2s, v0.2s, v0.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[0].f32[1]);
    (c)->q[0] = _t; }
  /* 1c3614: fadd v0.2s, v0.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[0].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[0].f32[1], (c)->q[1].f32[1]);
    (c)->q[0] = _t; }
  /* 1c3618: fmul v1.2s, v3.2s, v3.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[3].f32[0], (c)->q[3].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[3].f32[1], (c)->q[3].f32[1]);
    (c)->q[1] = _t; }
  /* 1c361c: fadd v0.2s, v0.2s, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[0].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[0].f32[1], (c)->q[1].f32[1]);
    (c)->q[0] = _t; }
  /* 1c3620: fsqrt v0.2s, v0.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsqrt32((c)->q[0].f32[0]);
    _t.f32[1] = arc_fsqrt32((c)->q[0].f32[1]);
    (c)->q[0] = _t; }
  /* 1c3624: mov s1, v0.s[1] */
  arc_su_w(c, 1, (c)->q[0].u32[1]);
  /* 1c3628: ret  */
  return;
}

void fn2_1c5e38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077715000));
  /* 1c5e38: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1c5e3c: str d8, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), (c)->q[8].u64[0]);
  /* 1c5e40: stp x29, x30, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1c5e44: str x21, [sp, #0x48] */
  arc_st64(((c)->sp + INT64_C(72)), ARC_X_R(c, 21));
  /* 1c5e48: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1c5e4c: add x29, sp, #0x38 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(56)));
  /* 1c5e50: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1c5e54: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1c5e58: fmov s8, s0 */
  arc_su_w(c, 8, (uint32_t)(ARC_SU_R(c, 0)));
  /* 1c5e5c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1c5e60: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1c5e64: bl #0x1c4780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1859176));
  fn2_1c4780(c);
  /* 1c5e68: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1c5e6c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1c5e70: bl #0x1c4780 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1859188));
  fn2_1c4780(c);
  /* 1c5e74: fmov s0, s8 */
  arc_su_w(c, 0, (uint32_t)(ARC_SU_R(c, 8)));
  /* 1c5e78: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 1c5e7c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 1c5e80: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1c5e84: bl #0x1c6b9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1859208));
  fn2_1c6b9c(c);
  /* 1c5e88: ldp s0, s1, [x21] */
  { const uint64_t _pa = ARC_X_R(c, 21);
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 1c5e8c: fmov s20, #2.00000000 */
  arc_s_w(c, 20, (float)(2.0));
  /* 1c5e90: ldp s2, s3, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 3, arc_ld32((_pa + 4)));
  }
  /* 1c5e94: fmov s26, #1.00000000 */
  arc_s_w(c, 26, (float)(1.0));
  /* 1c5e98: ldp s4, s5, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_su_w(c, 4, arc_ld32(_pa));
    arc_su_w(c, 5, arc_ld32((_pa + 4)));
  }
  /* 1c5e9c: ldr s6, [x21, #0x20] */
  arc_su_w(c, 6, arc_ld32((ARC_X_R(c, 21) + INT64_C(32))));
  /* 1c5ea0: fmul s0, s0, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 0))));
  /* 1c5ea4: fmul s1, s1, s1 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 1))));
  /* 1c5ea8: fmul s2, s2, s2 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 2))));
  /* 1c5eac: fmul s3, s3, s3 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 3))));
  /* 1c5eb0: fmul s4, s4, s4 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 4))));
  /* 1c5eb4: fmul s6, s6, s6 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 6))));
  /* 1c5eb8: fadd s0, s0, s1 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 1))));
  /* 1c5ebc: fadd s0, s0, s2 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 2))));
  /* 1c5ec0: ldp s1, s2, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    arc_su_w(c, 1, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* 1c5ec4: fmul s1, s1, s1 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 1))));
  /* 1c5ec8: fmul s2, s2, s2 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 2))));
  /* 1c5ecc: fsqrt s0, s0 */
  arc_s_w(c, 0, (float)(arc_fsqrt32(ARC_S_R(c, 0))));
  /* 1c5ed0: fadd s1, s1, s2 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 2))));
  /* 1c5ed4: fadd s1, s1, s4 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 4))));
  /* 1c5ed8: fsqrt s2, s1 */
  arc_s_w(c, 2, (float)(arc_fsqrt32(ARC_S_R(c, 1))));
  /* 1c5edc: ldp s1, s4, [x21, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    arc_su_w(c, 1, arc_ld32(_pa));
    arc_su_w(c, 4, arc_ld32((_pa + 4)));
  }
  /* 1c5ee0: fmul s1, s1, s1 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 1), ARC_S_R(c, 1))));
  /* 1c5ee4: fmul s4, s4, s4 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 4))));
  /* 1c5ee8: fadd s1, s3, s1 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 1))));
  /* 1c5eec: fadd s1, s1, s4 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 4))));
  /* 1c5ef0: fmul s4, s5, s5 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 5))));
  /* 1c5ef4: ldp s3, s5, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_su_w(c, 3, arc_ld32(_pa));
    arc_su_w(c, 5, arc_ld32((_pa + 4)));
  }
  /* 1c5ef8: fmul s3, s3, s3 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 3))));
  /* 1c5efc: fmul s5, s5, s5 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 5))));
  /* 1c5f00: fadd s3, s4, s3 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 3))));
  /* 1c5f04: fsub s2, s2, s0 */
  arc_s_w(c, 2, (float)(arc_fsub32(ARC_S_R(c, 2), ARC_S_R(c, 0))));
  /* 1c5f08: fadd s3, s3, s5 */
  arc_s_w(c, 3, (float)(arc_fadd32(ARC_S_R(c, 3), ARC_S_R(c, 5))));
  /* 1c5f0c: ldp s4, s5, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    arc_su_w(c, 4, arc_ld32(_pa));
    arc_su_w(c, 5, arc_ld32((_pa + 4)));
  }
  /* 1c5f10: fmul s4, s4, s4 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 4), ARC_S_R(c, 4))));
  /* 1c5f14: fmul s5, s5, s5 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 5))));
  /* 1c5f18: fmul s2, s2, s8 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 8))));
  /* 1c5f1c: fsqrt s1, s1 */
  arc_s_w(c, 1, (float)(arc_fsqrt32(ARC_S_R(c, 1))));
  /* 1c5f20: fadd s4, s4, s5 */
  arc_s_w(c, 4, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 5))));
  /* 1c5f24: fadd s0, s0, s2 */
  arc_s_w(c, 0, (float)(arc_fadd32(ARC_S_R(c, 0), ARC_S_R(c, 2))));
  /* 1c5f28: fadd s4, s4, s6 */
  arc_s_w(c, 4, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 6))));
  /* 1c5f2c: ldp s5, s6, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_su_w(c, 5, arc_ld32(_pa));
    arc_su_w(c, 6, arc_ld32((_pa + 4)));
  }
  /* 1c5f30: fmul s7, s5, s5 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 5))));
  /* 1c5f34: fmul s16, s6, s6 */
  arc_s_w(c, 16, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 6))));
  /* 1c5f38: fadd s7, s7, s16 */
  arc_s_w(c, 7, (float)(arc_fadd32(ARC_S_R(c, 7), ARC_S_R(c, 16))));
  /* 1c5f3c: ldp s17, s16, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_su_w(c, 17, arc_ld32(_pa));
    arc_su_w(c, 16, arc_ld32((_pa + 4)));
  }
  /* 1c5f40: fmul s18, s17, s17 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 17), ARC_S_R(c, 17))));
  /* 1c5f44: fadd s7, s7, s18 */
  arc_s_w(c, 7, (float)(arc_fadd32(ARC_S_R(c, 7), ARC_S_R(c, 18))));
  /* 1c5f48: fmul s18, s16, s16 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 16))));
  /* 1c5f4c: fadd s7, s7, s18 */
  arc_s_w(c, 7, (float)(arc_fadd32(ARC_S_R(c, 7), ARC_S_R(c, 18))));
  /* 1c5f50: ldp s18, s19, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    arc_su_w(c, 18, arc_ld32(_pa));
    arc_su_w(c, 19, arc_ld32((_pa + 4)));
  }
  /* 1c5f54: fmul s18, s18, s18 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 18), ARC_S_R(c, 18))));
  /* 1c5f58: fmul s19, s19, s19 */
  arc_s_w(c, 19, (float)(arc_fmul32(ARC_S_R(c, 19), ARC_S_R(c, 19))));
  /* 1c5f5c: fdiv s7, s20, s7 */
  arc_s_w(c, 7, (float)(arc_fdiv32(ARC_S_R(c, 20), ARC_S_R(c, 7))));
  /* 1c5f60: ldr s20, [x20, #0x20] */
  arc_su_w(c, 20, arc_ld32((ARC_X_R(c, 20) + INT64_C(32))));
  /* 1c5f64: fadd s18, s18, s19 */
  arc_s_w(c, 18, (float)(arc_fadd32(ARC_S_R(c, 18), ARC_S_R(c, 19))));
  /* 1c5f68: fmul s20, s20, s20 */
  arc_s_w(c, 20, (float)(arc_fmul32(ARC_S_R(c, 20), ARC_S_R(c, 20))));
  /* 1c5f6c: fadd s18, s18, s20 */
  arc_s_w(c, 18, (float)(arc_fadd32(ARC_S_R(c, 18), ARC_S_R(c, 20))));
  /* 1c5f70: fsqrt s3, s3 */
  arc_s_w(c, 3, (float)(arc_fsqrt32(ARC_S_R(c, 3))));
  /* 1c5f74: fmul s19, s6, s7 */
  arc_s_w(c, 19, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 7))));
  /* 1c5f78: fmul s20, s17, s7 */
  arc_s_w(c, 20, (float)(arc_fmul32(ARC_S_R(c, 17), ARC_S_R(c, 7))));
  /* 1c5f7c: fmul s7, s5, s7 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 7))));
  /* 1c5f80: fmul s21, s6, s19 */
  arc_s_w(c, 21, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 19))));
  /* 1c5f84: fmul s17, s17, s20 */
  arc_s_w(c, 17, (float)(arc_fmul32(ARC_S_R(c, 17), ARC_S_R(c, 20))));
  /* 1c5f88: fmul s22, s5, s7 */
  arc_s_w(c, 22, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 7))));
  /* 1c5f8c: fmul s24, s16, s20 */
  arc_s_w(c, 24, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 20))));
  /* 1c5f90: fmul s25, s5, s19 */
  arc_s_w(c, 25, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 19))));
  /* 1c5f94: fmul s19, s16, s19 */
  arc_s_w(c, 19, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 19))));
  /* 1c5f98: fmul s5, s5, s20 */
  arc_s_w(c, 5, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 20))));
  /* 1c5f9c: fmul s7, s16, s7 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 7))));
  /* 1c5fa0: fadd s23, s21, s17 */
  arc_s_w(c, 23, (float)(arc_fadd32(ARC_S_R(c, 21), ARC_S_R(c, 17))));
  /* 1c5fa4: fmul s6, s6, s20 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 20))));
  /* 1c5fa8: fadd s17, s22, s17 */
  arc_s_w(c, 17, (float)(arc_fadd32(ARC_S_R(c, 22), ARC_S_R(c, 17))));
  /* 1c5fac: fsub s16, s25, s24 */
  arc_s_w(c, 16, (float)(arc_fsub32(ARC_S_R(c, 25), ARC_S_R(c, 24))));
  /* 1c5fb0: fadd s20, s5, s19 */
  arc_s_w(c, 20, (float)(arc_fadd32(ARC_S_R(c, 5), ARC_S_R(c, 19))));
  /* 1c5fb4: fsub s5, s5, s19 */
  arc_s_w(c, 5, (float)(arc_fsub32(ARC_S_R(c, 5), ARC_S_R(c, 19))));
  /* 1c5fb8: fsub s2, s26, s23 */
  arc_s_w(c, 2, (float)(arc_fsub32(ARC_S_R(c, 26), ARC_S_R(c, 23))));
  /* 1c5fbc: fadd s23, s25, s24 */
  arc_s_w(c, 23, (float)(arc_fadd32(ARC_S_R(c, 25), ARC_S_R(c, 24))));
  /* 1c5fc0: fmul s16, s16, s0 */
  arc_s_w(c, 16, (float)(arc_fmul32(ARC_S_R(c, 16), ARC_S_R(c, 0))));
  /* 1c5fc4: fmul s2, s2, s0 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 2), ARC_S_R(c, 0))));
  /* 1c5fc8: fmul s0, s20, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 20), ARC_S_R(c, 0))));
  /* 1c5fcc: fsub s3, s3, s1 */
  arc_s_w(c, 3, (float)(arc_fsub32(ARC_S_R(c, 3), ARC_S_R(c, 1))));
  /* 1c5fd0: stp s2, s16, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, (c)->q[2].u32[0]);
    arc_st32((_pa + 4), (c)->q[16].u32[0]);
  }
  /* 1c5fd4: fmul s3, s3, s8 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 8))));
  /* 1c5fd8: fsqrt s4, s4 */
  arc_s_w(c, 4, (float)(arc_fsqrt32(ARC_S_R(c, 4))));
  /* 1c5fdc: fadd s1, s1, s3 */
  arc_s_w(c, 1, (float)(arc_fadd32(ARC_S_R(c, 1), ARC_S_R(c, 3))));
  /* 1c5fe0: fsub s3, s26, s17 */
  arc_s_w(c, 3, (float)(arc_fsub32(ARC_S_R(c, 26), ARC_S_R(c, 17))));
  /* 1c5fe4: fadd s17, s22, s21 */
  arc_s_w(c, 17, (float)(arc_fadd32(ARC_S_R(c, 22), ARC_S_R(c, 21))));
  /* 1c5fe8: fsub s21, s6, s7 */
  arc_s_w(c, 21, (float)(arc_fsub32(ARC_S_R(c, 6), ARC_S_R(c, 7))));
  /* 1c5fec: fadd s6, s6, s7 */
  arc_s_w(c, 6, (float)(arc_fadd32(ARC_S_R(c, 6), ARC_S_R(c, 7))));
  /* 1c5ff0: fmul s7, s23, s1 */
  arc_s_w(c, 7, (float)(arc_fmul32(ARC_S_R(c, 23), ARC_S_R(c, 1))));
  /* 1c5ff4: fsub s17, s26, s17 */
  arc_s_w(c, 17, (float)(arc_fsub32(ARC_S_R(c, 26), ARC_S_R(c, 17))));
  /* 1c5ff8: fmul s3, s3, s1 */
  arc_s_w(c, 3, (float)(arc_fmul32(ARC_S_R(c, 3), ARC_S_R(c, 1))));
  /* 1c5ffc: fmul s1, s21, s1 */
  arc_s_w(c, 1, (float)(arc_fmul32(ARC_S_R(c, 21), ARC_S_R(c, 1))));
  /* 1c6000: stp s0, s7, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[7].u32[0]);
  }
  /* 1c6004: stp s3, s1, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st32(_pa, (c)->q[3].u32[0]);
    arc_st32((_pa + 4), (c)->q[1].u32[0]);
  }
  /* 1c6008: fsqrt s18, s18 */
  arc_s_w(c, 18, (float)(arc_fsqrt32(ARC_S_R(c, 18))));
  /* 1c600c: fsub s18, s18, s4 */
  arc_s_w(c, 18, (float)(arc_fsub32(ARC_S_R(c, 18), ARC_S_R(c, 4))));
  /* 1c6010: fmul s18, s18, s8 */
  arc_s_w(c, 18, (float)(arc_fmul32(ARC_S_R(c, 18), ARC_S_R(c, 8))));
  /* 1c6014: fadd s4, s4, s18 */
  arc_s_w(c, 4, (float)(arc_fadd32(ARC_S_R(c, 4), ARC_S_R(c, 18))));
  /* 1c6018: fmul s2, s5, s4 */
  arc_s_w(c, 2, (float)(arc_fmul32(ARC_S_R(c, 5), ARC_S_R(c, 4))));
  /* 1c601c: fmul s0, s6, s4 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 4))));
  /* 1c6020: fmul s4, s17, s4 */
  arc_s_w(c, 4, (float)(arc_fmul32(ARC_S_R(c, 17), ARC_S_R(c, 4))));
  /* 1c6024: stp s2, s0, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    arc_st32(_pa, (c)->q[2].u32[0]);
    arc_st32((_pa + 4), (c)->q[0].u32[0]);
  }
  /* 1c6028: str s4, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), (c)->q[4].u32[0]);
  /* 1c602c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1c6030: ldr x21, [sp, #0x48] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(72))));
  /* 1c6034: ldp x29, x30, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1c6038: ldr d8, [sp, #0x30] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 1c603c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1c6040: ret  */
  return;
}

void fn2_1c90a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077727904));
  /* 1c90a0: fcmp s0, #0.0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(0.0));
  /* 1c90a4: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* 1c90a8: b.eq #0x1c9108 */
  if (ARC_COND(c, 0)) goto L_1c9108;
  /* 1c90ac: add x8, x0, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* 1c90b0: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 1c90b4: ldr s2, [x0, #4] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1c90b8: ld1 {v1.s}[1], [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    (c)->q[1].u32[1] = arc_ld32(_pa + 0);
  }
  /* 1c90bc: fmov v4.2d, #0.50000000 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = 0.5;
    _t.f64[1] = 0.5;
    (c)->q[4] = _t; }
  /* 1c90c0: fcvt d2, s2 */
  arc_d_w(c, 2, (double)(ARC_S_R(c, 2)));
  /* 1c90c4: fcvtl v1.2d, v1.2s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = (double)(c)->q[1].f32[0];
    _t.f64[1] = (double)(c)->q[1].f32[1];
    (c)->q[1] = _t; }
  /* 1c90c8: dup v3.2d, v0.d[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].u64[0]);
    _t.u64[1] = ((c)->q[0].u64[0]);
    (c)->q[3] = _t; }
  /* 1c90cc: fdiv d2, d2, d0 */
  arc_d_w(c, 2, (double)(arc_fdiv64(ARC_D_R(c, 2), ARC_D_R(c, 0))));
  /* 1c90d0: fdiv v1.2d, v1.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = arc_fdiv64((c)->q[1].f64[0], (c)->q[3].f64[0]);
    _t.f64[1] = arc_fdiv64((c)->q[1].f64[1], (c)->q[3].f64[1]);
    (c)->q[1] = _t; }
  /* 1c90d4: fmov d3, #0.50000000 */
  arc_d_w(c, 3, (double)(0.5));
  /* 1c90d8: fadd d2, d2, d3 */
  arc_d_w(c, 2, (double)(arc_fadd64(ARC_D_R(c, 2), ARC_D_R(c, 3))));
  /* 1c90dc: frintm d2, d2 */
  arc_d_w(c, 2, (double)(floor(ARC_D_R(c, 2))));
  /* 1c90e0: fmul d2, d2, d0 */
  arc_d_w(c, 2, (double)(arc_fmul64(ARC_D_R(c, 2), ARC_D_R(c, 0))));
  /* 1c90e4: fcvt s2, d2 */
  arc_s_w(c, 2, (float)(ARC_D_R(c, 2)));
  /* 1c90e8: fadd v1.2d, v1.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = arc_fadd64((c)->q[1].f64[0], (c)->q[4].f64[0]);
    _t.f64[1] = arc_fadd64((c)->q[1].f64[1], (c)->q[4].f64[1]);
    (c)->q[1] = _t; }
  /* 1c90ec: frintm v1.2d, v1.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = floor((c)->q[1].f64[0]);
    _t.f64[1] = floor((c)->q[1].f64[1]);
    (c)->q[1] = _t; }
  /* 1c90f0: fmul v0.2d, v1.2d, v0.d[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f64[0] = arc_fmul64((c)->q[1].f64[0], (c)->q[0].f64[0]);
    _t.f64[1] = arc_fmul64((c)->q[1].f64[1], (c)->q[0].f64[0]);
    (c)->q[0] = _t; }
  /* 1c90f4: fcvtn v1.2s, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = (float)(c)->q[0].f64[0];
    _t.f32[1] = (float)(c)->q[0].f64[1];
    (c)->q[1] = _t; }
  /* 1c90f8: add x8, x0, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* 1c90fc: stp s1, s2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, (c)->q[1].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* 1c9100: st1 {v1.s}[1], [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa + 0, (c)->q[1].u32[1]);
  }
  /* 1c9104: ret  */
  return;
L_1c9108:;
  /* 1c9108: add x8, x0, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* 1c910c: ld1 {v1.s}[1], [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    (c)->q[1].u32[1] = arc_ld32(_pa + 0);
  }
  /* 1c9110: add x8, x0, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* 1c9114: str s1, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[1].u32[0]);
  /* 1c9118: st1 {v1.s}[1], [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_st32(_pa + 0, (c)->q[1].u32[1]);
  }
  /* 1c911c: ret  */
  return;
}

void fn2_1c9cb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077730996));
  /* 1c9cb4: fmov v1.4s, #-5.00000000 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = -5.0;
    _t.f32[1] = -5.0;
    _t.f32[2] = -5.0;
    _t.f32[3] = -5.0;
    (c)->q[1] = _t; }
  /* 1c9cb8: ldr q2, [x2] */
  arc_q_w(c, 2, arc_ld64(ARC_X_R(c, 2)), arc_ld64(ARC_X_R(c, 2) + 8));
  /* 1c9cbc: ldr q3, [x0] */
  arc_q_w(c, 3, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 1c9cc0: fmov v5.4s, #4.00000000 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = 4.0;
    _t.f32[1] = 4.0;
    _t.f32[2] = 4.0;
    _t.f32[3] = 4.0;
    (c)->q[5] = _t; }
  /* 1c9cc4: fmov v6.4s, #3.00000000 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = 3.0;
    _t.f32[1] = 3.0;
    _t.f32[2] = 3.0;
    _t.f32[3] = 3.0;
    (c)->q[6] = _t; }
  /* 1c9cc8: ldr q7, [x1] */
  arc_q_w(c, 7, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 1c9ccc: fadd v4.4s, v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[2].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[2].f32[1], (c)->q[2].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[2].f32[2], (c)->q[2].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[2].f32[3], (c)->q[2].f32[3]);
    (c)->q[4] = _t; }
  /* 1c9cd0: fsub v16.4s, v7.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[7].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[7].f32[1], (c)->q[2].f32[1]);
    _t.f32[2] = arc_fsub32((c)->q[7].f32[2], (c)->q[2].f32[2]);
    _t.f32[3] = arc_fsub32((c)->q[7].f32[3], (c)->q[2].f32[3]);
    (c)->q[16] = _t; }
  /* 1c9cd4: fmul v1.4s, v3.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[3].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[3].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fmul32((c)->q[3].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fmul32((c)->q[3].f32[3], (c)->q[1].f32[3]);
    (c)->q[1] = _t; }
  /* 1c9cd8: fadd v1.4s, v4.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[4].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[4].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[4].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[4].f32[3], (c)->q[1].f32[3]);
    (c)->q[1] = _t; }
  /* 1c9cdc: fmul v4.4s, v7.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[7].f32[0], (c)->q[5].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[7].f32[1], (c)->q[5].f32[1]);
    _t.f32[2] = arc_fmul32((c)->q[7].f32[2], (c)->q[5].f32[2]);
    _t.f32[3] = arc_fmul32((c)->q[7].f32[3], (c)->q[5].f32[3]);
    (c)->q[4] = _t; }
  /* 1c9ce0: fmul v5.4s, v3.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[3].f32[0], (c)->q[6].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[3].f32[1], (c)->q[6].f32[1]);
    _t.f32[2] = arc_fmul32((c)->q[3].f32[2], (c)->q[6].f32[2]);
    _t.f32[3] = arc_fmul32((c)->q[3].f32[3], (c)->q[6].f32[3]);
    (c)->q[5] = _t; }
  /* 1c9ce4: fadd v3.4s, v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[3].f32[0], (c)->q[3].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[3].f32[1], (c)->q[3].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[3].f32[2], (c)->q[3].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[3].f32[3], (c)->q[3].f32[3]);
    (c)->q[3] = _t; }
  /* 1c9ce8: fadd v1.4s, v4.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[4].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[4].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[4].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[4].f32[3], (c)->q[1].f32[3]);
    (c)->q[1] = _t; }
  /* 1c9cec: fsub v2.4s, v5.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[5].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[5].f32[1], (c)->q[2].f32[1]);
    _t.f32[2] = arc_fsub32((c)->q[5].f32[2], (c)->q[2].f32[2]);
    _t.f32[3] = arc_fsub32((c)->q[5].f32[3], (c)->q[2].f32[3]);
    (c)->q[2] = _t; }
  /* 1c9cf0: fmul v4.4s, v7.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[7].f32[0], (c)->q[6].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[7].f32[1], (c)->q[6].f32[1]);
    _t.f32[2] = arc_fmul32((c)->q[7].f32[2], (c)->q[6].f32[2]);
    _t.f32[3] = arc_fmul32((c)->q[7].f32[3], (c)->q[6].f32[3]);
    (c)->q[4] = _t; }
  /* 1c9cf4: ldr q5, [x3] */
  arc_q_w(c, 5, arc_ld64(ARC_X_R(c, 3)), arc_ld64(ARC_X_R(c, 3) + 8));
  /* 1c9cf8: fmul s6, s0, s0 */
  arc_s_w(c, 6, (float)(arc_fmul32(ARC_S_R(c, 0), ARC_S_R(c, 0))));
  /* 1c9cfc: fmul v7.4s, v16.4s, v0.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[16].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[16].f32[1], (c)->q[0].f32[0]);
    _t.f32[2] = arc_fmul32((c)->q[16].f32[2], (c)->q[0].f32[0]);
    _t.f32[3] = arc_fmul32((c)->q[16].f32[3], (c)->q[0].f32[0]);
    (c)->q[7] = _t; }
  /* 1c9d00: fsub v1.4s, v1.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[1].f32[0], (c)->q[5].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[1].f32[1], (c)->q[5].f32[1]);
    _t.f32[2] = arc_fsub32((c)->q[1].f32[2], (c)->q[5].f32[2]);
    _t.f32[3] = arc_fsub32((c)->q[1].f32[3], (c)->q[5].f32[3]);
    (c)->q[1] = _t; }
  /* 1c9d04: fsub v2.4s, v2.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fsub32((c)->q[2].f32[0], (c)->q[4].f32[0]);
    _t.f32[1] = arc_fsub32((c)->q[2].f32[1], (c)->q[4].f32[1]);
    _t.f32[2] = arc_fsub32((c)->q[2].f32[2], (c)->q[4].f32[2]);
    _t.f32[3] = arc_fsub32((c)->q[2].f32[3], (c)->q[4].f32[3]);
    (c)->q[2] = _t; }
  /* 1c9d08: fmul s0, s6, s0 */
  arc_s_w(c, 0, (float)(arc_fmul32(ARC_S_R(c, 6), ARC_S_R(c, 0))));
  /* 1c9d0c: fadd v3.4s, v3.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[3].f32[0], (c)->q[7].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[3].f32[1], (c)->q[7].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[3].f32[2], (c)->q[7].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[3].f32[3], (c)->q[7].f32[3]);
    (c)->q[3] = _t; }
  /* 1c9d10: fmul v1.4s, v1.4s, v6.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[1].f32[0], (c)->q[6].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[1].f32[1], (c)->q[6].f32[0]);
    _t.f32[2] = arc_fmul32((c)->q[1].f32[2], (c)->q[6].f32[0]);
    _t.f32[3] = arc_fmul32((c)->q[1].f32[3], (c)->q[6].f32[0]);
    (c)->q[1] = _t; }
  /* 1c9d14: fadd v2.4s, v5.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[5].f32[0], (c)->q[2].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[5].f32[1], (c)->q[2].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[5].f32[2], (c)->q[2].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[5].f32[3], (c)->q[2].f32[3]);
    (c)->q[2] = _t; }
  /* 1c9d18: fadd v1.4s, v3.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[3].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[3].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[3].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[3].f32[3], (c)->q[1].f32[3]);
    (c)->q[1] = _t; }
  /* 1c9d1c: fmul v0.4s, v2.4s, v0.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[2].f32[0], (c)->q[0].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[2].f32[1], (c)->q[0].f32[0]);
    _t.f32[2] = arc_fmul32((c)->q[2].f32[2], (c)->q[0].f32[0]);
    _t.f32[3] = arc_fmul32((c)->q[2].f32[3], (c)->q[0].f32[0]);
    (c)->q[0] = _t; }
  /* 1c9d20: fadd v0.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fadd32((c)->q[0].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fadd32((c)->q[0].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fadd32((c)->q[0].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fadd32((c)->q[0].f32[3], (c)->q[1].f32[3]);
    (c)->q[0] = _t; }
  /* 1c9d24: movi v1.4s, #0x3f, lsl #24 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(1056964608);
    _t.u32[1] = UINT64_C(1056964608);
    _t.u32[2] = UINT64_C(1056964608);
    _t.u32[3] = UINT64_C(1056964608);
    (c)->q[1] = _t; }
  /* 1c9d28: fmul v0.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.f32[0] = arc_fmul32((c)->q[0].f32[0], (c)->q[1].f32[0]);
    _t.f32[1] = arc_fmul32((c)->q[0].f32[1], (c)->q[1].f32[1]);
    _t.f32[2] = arc_fmul32((c)->q[0].f32[2], (c)->q[1].f32[2]);
    _t.f32[3] = arc_fmul32((c)->q[0].f32[3], (c)->q[1].f32[3]);
    (c)->q[0] = _t; }
  /* 1c9d2c: mov s1, v0.s[1] */
  arc_su_w(c, 1, (c)->q[0].u32[1]);
  /* 1c9d30: mov s2, v0.s[2] */
  arc_su_w(c, 2, (c)->q[0].u32[2]);
  /* 1c9d34: mov s3, v0.s[3] */
  arc_su_w(c, 3, (c)->q[0].u32[3]);
  /* 1c9d38: ret  */
  return;
}

void fn2_1cd090(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077744272));
  /* 1cd090: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1cd094: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cd098: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cd09c: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cd0a0: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1cd0a4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1cd0a8: ldr x8, [x8, #0xeb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3768))));
  /* 1cd0ac: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1cd0b0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1cd0b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1888440));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cd0b8: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1cd0bc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cd0c0: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1cd0c4: ret  */
  return;
}

void fn2_1cdb9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077747100));
  /* 1cdb9c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 1cdba0: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cdba4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1cdba8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cdbac: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1cdbb0: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1cdbb4: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cdbb8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1cdbbc: ldr x22, [x8, #0xfb8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 1cdbc0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cdbc4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1cdbc8: strb w2, [sp, #0x14] */
  arc_st8(((c)->sp + INT64_C(20)), ARC_W_R(c, 2));
  /* 1cdbcc: str x3, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 3));
  /* 1cdbd0: bl #0x1e457c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1891284));
  fn2_1e457c(c);
  /* 1cdbd4: add x8, sp, #0x14 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(20)));
  /* 1cdbd8: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1cdbdc: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1cdbe0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cdbe4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1cdbe8: mov w3, #3 */
  ARC_W_W(c, 3, UINT64_C(3));
  /* 1cdbec: stp x19, x8, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 1cdbf0: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 1cdbf4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1891320));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1cdbf8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cdbfc: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1cdc00: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cdc04: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 1cdc08: ret  */
  return;
}

void fn2_1ce6f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077750008));
  /* 1ce6f8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1ce6fc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ce700: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1ce704: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ce708: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ce70c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1ce710: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1ce714: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1ce718: ldr x21, [x8, #0x278] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(632))));
  /* 1ce71c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1ce720: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ce724: sturb w1, [x29, #-4] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 1));
  /* 1ce728: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ce72c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1ce730: str xzr, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 31));
  /* 1ce734: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1894200));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ce738: sub x8, x29, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1ce73c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ce740: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ce744: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ce748: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1ce74c: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 1ce750: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1894228));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1ce754: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ce758: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1ce75c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ce760: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1ce764: ret  */
  return;
}

void fn2_1cf150(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077752656));
  /* 1cf150: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1cf154: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cf158: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cf15c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1cf160: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1cf164: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1cf168: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1cf16c: ldr x0, [x9, #0x1b8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(440))));
  /* 1cf170: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1cf174: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1cf178: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1896828));
  fn2_1ddc90(c);
  /* 1cf17c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1cf180: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cf184: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1cf188: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1cf18c: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1cf190: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cf194: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cf198: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1cf19c: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1cfbc8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077755336));
  /* 1cfbc8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1cfbcc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1cfbd0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1cfbd4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1cfbd8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1cfbdc: adrp x8, #0x25d000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2478080)));
  /* 1cfbe0: add x8, x8, #0xe40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3648)));
  /* 1cfbe4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1cfbe8: ldr x0, [x8, #0x490] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(1168))));
  /* 1cfbec: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1cfbf0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1cfbf4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1cfbf8: str xzr, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 31));
  /* 1cfbfc: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1cfc00: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1cfc04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1899528));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1cfc08: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1cfc0c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1cfc10: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1cfc14: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1cfc18: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1cfc1c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1cfc20: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1cfc24: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d078c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077758348));
  /* 1d078c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d0790: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d0794: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d0798: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1d079c: mov w0, #0x15 */
  ARC_W_W(c, 0, UINT64_C(21));
  /* 1d07a0: ldr x8, [x8, #0x7a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1960))));
  /* 1d07a4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d07a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1902508));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d07ac: adrp x19, #0x258000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1d07b0: nop  */
  /* nop: no architectural effect here */
  /* 1d07b4: adr x20, #0x25e3e8 */
  ARC_X_W(c, 20, (arc_image_bases[2] + UINT64_C(2483176)));
  /* 1d07b8: ldr x19, [x19, #0x7c8] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(1992))));
  /* 1d07bc: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 1d07c0: mov w0, #0x15 */
  ARC_W_W(c, 0, UINT64_C(21));
  /* 1d07c4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* 1d07c8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1d07cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1902544));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d07d0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1d07d4: str x0, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d07d8: mov w0, #0x15 */
  ARC_W_W(c, 0, UINT64_C(21));
  /* 1d07dc: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 1d07e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1902564));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d07e4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1d07e8: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 1d07ec: mov w0, #0x15 */
  ARC_W_W(c, 0, UINT64_C(21));
  /* 1d07f0: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 1d07f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1902584));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d07f8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1d07fc: ldr x8, [x8, #0x7d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2000))));
  /* 1d0800: str x0, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d0804: mov w0, #0x15 */
  ARC_W_W(c, 0, UINT64_C(21));
  /* 1d0808: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1d080c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1902608));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d0810: str x0, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 0));
  /* 1d0814: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d0818: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d081c: ret  */
  return;
}

void fn2_1d3330(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077769520));
  /* 1d3330: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1d3334: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d3338: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d333c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d3340: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3344: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1d3348: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 1d334c: ldr x0, [x9, #0x4c8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1224))));
  /* 1d3350: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 1d3354: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d3358: bl #0x1e457c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1913692));
  fn2_1e457c(c);
  /* 1d335c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1d3360: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d3364: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1d3368: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d336c: ldr x4, [sp, #8] */
  ARC_X_W(c, 4, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1d3370: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d3374: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d3378: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1d337c: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1d3e94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077772436));
  /* 1d3e94: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1d3e98: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d3e9c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1d3ea0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d3ea4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d3ea8: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d3eac: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d3eb0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d3eb4: ldr x22, [x9, #0x5c8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 9) + INT64_C(1480))));
  /* 1d3eb8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d3ebc: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d3ec0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1916612));
  fn2_1ccc74(c);
  /* 1d3ec4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1d3ec8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d3ecc: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d3ed0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d3ed4: str x19, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 19));
  /* 1d3ed8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1916636));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1d3edc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d3ee0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1d3ee4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d3ee8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1d3eec: ret  */
  return;
}

void fn2_1d47fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077774844));
  /* 1d47fc: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d4800: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d4804: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d4808: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d480c: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d4810: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1d4814: ldr x8, [x8, #0x6c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1736))));
  /* 1d4818: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1d481c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1919008));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d4820: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d4824: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d4828: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d482c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d4830: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d4834: ret  */
  return;
}

void fn2_1d50f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077777136));
  /* 1d50f0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d50f4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d50f8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d50fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d5100: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d5104: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d5108: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d510c: ldr x0, [x9, #0x7c8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1992))));
  /* 1d5110: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d5114: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d5118: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d511c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1921312));
  fn2_1ccc74(c);
  /* 1d5120: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d5124: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d5128: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d512c: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d5130: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d5134: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d5138: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d513c: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d5a50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077779536));
  /* 1d5a50: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d5a54: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1d5a58: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1d5a5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1d5a60: adrp x9, #0x25e000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d5a64: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1d5a68: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1d5a6c: ldr x0, [x9, #0x8e8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2280))));
  /* 1d5a70: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1d5a74: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 1d5a78: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1d5a7c: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1923712));
  fn2_1ccc74(c);
  /* 1d5a80: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1d5a84: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 1d5a88: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1d5a8c: ldr x3, [x29, #0x18] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1d5a90: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1d5a94: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1d5a98: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d5a9c: br x3 */
  arc_dispatch(c, ARC_X_R(c, 3)); return;
}

void fn2_1d68a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077783200));
  /* 1d68a0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d68a4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d68a8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d68ac: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d68b0: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d68b4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1d68b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1927356));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d68bc: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d68c0: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d68c4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d68c8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d68cc: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d68d0: ret  */
  return;
}

void fn2_1d78f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077787384));
  /* 1d78f8: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1d78fc: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 1d7900: strb w8, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* 1d7904: strb wzr, [x1] */
  arc_st8(ARC_X_R(c, 1), ARC_W_R(c, 31));
  /* 1d7908: ldrb w8, [x1, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(1))));
  /* 1d790c: ldrb w9, [x0, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 1d7910: strb w8, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 8));
  /* 1d7914: strb w9, [x1, #1] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(1)), ARC_W_R(c, 9));
  /* 1d7918: ldrb w8, [x1, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(2))));
  /* 1d791c: ldrb w9, [x0, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 1d7920: strb w8, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* 1d7924: strb w9, [x1, #2] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(2)), ARC_W_R(c, 9));
  /* 1d7928: ldrb w8, [x1, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(3))));
  /* 1d792c: ldrb w9, [x0, #3] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 1d7930: strb w8, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 8));
  /* 1d7934: strb w9, [x1, #3] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(3)), ARC_W_R(c, 9));
  /* 1d7938: ldrb w8, [x1, #4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(4))));
  /* 1d793c: ldrb w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(4))));
  /* 1d7940: strb w8, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 8));
  /* 1d7944: strb w9, [x1, #4] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(4)), ARC_W_R(c, 9));
  /* 1d7948: ldrb w8, [x1, #5] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(5))));
  /* 1d794c: ldrb w9, [x0, #5] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(5))));
  /* 1d7950: strb w8, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 8));
  /* 1d7954: strb w9, [x1, #5] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(5)), ARC_W_R(c, 9));
  /* 1d7958: ldrb w8, [x1, #6] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(6))));
  /* 1d795c: ldrb w9, [x0, #6] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(6))));
  /* 1d7960: strb w8, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* 1d7964: strb w9, [x1, #6] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(6)), ARC_W_R(c, 9));
  /* 1d7968: ldrb w8, [x1, #7] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(7))));
  /* 1d796c: ldrb w9, [x0, #7] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(7))));
  /* 1d7970: strb w8, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 8));
  /* 1d7974: strb w9, [x1, #7] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(7)), ARC_W_R(c, 9));
  /* 1d7978: ldrb w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(8))));
  /* 1d797c: ldrb w9, [x0, #8] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(8))));
  /* 1d7980: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1d7984: strb w9, [x1, #8] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(8)), ARC_W_R(c, 9));
  /* 1d7988: ldrb w8, [x1, #9] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(9))));
  /* 1d798c: ldrb w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(9))));
  /* 1d7990: strb w8, [x0, #9] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* 1d7994: strb w9, [x1, #9] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(9)), ARC_W_R(c, 9));
  /* 1d7998: ldrb w8, [x1, #0xa] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(10))));
  /* 1d799c: ldrb w9, [x0, #0xa] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(10))));
  /* 1d79a0: strb w8, [x0, #0xa] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(10)), ARC_W_R(c, 8));
  /* 1d79a4: strb w9, [x1, #0xa] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(10)), ARC_W_R(c, 9));
  /* 1d79a8: ldrb w8, [x1, #0xb] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(11))));
  /* 1d79ac: ldrb w9, [x0, #0xb] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(11))));
  /* 1d79b0: strb w8, [x0, #0xb] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(11)), ARC_W_R(c, 8));
  /* 1d79b4: strb w9, [x1, #0xb] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(11)), ARC_W_R(c, 9));
  /* 1d79b8: ldrb w8, [x1, #0xc] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(12))));
  /* 1d79bc: ldrb w9, [x0, #0xc] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(12))));
  /* 1d79c0: strb w8, [x0, #0xc] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(12)), ARC_W_R(c, 8));
  /* 1d79c4: strb w9, [x1, #0xc] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(12)), ARC_W_R(c, 9));
  /* 1d79c8: ldrb w8, [x1, #0xd] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(13))));
  /* 1d79cc: ldrb w9, [x0, #0xd] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(13))));
  /* 1d79d0: strb w8, [x0, #0xd] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(13)), ARC_W_R(c, 8));
  /* 1d79d4: strb w9, [x1, #0xd] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(13)), ARC_W_R(c, 9));
  /* 1d79d8: ldrb w8, [x1, #0xe] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(14))));
  /* 1d79dc: ldrb w9, [x0, #0xe] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(14))));
  /* 1d79e0: strb w8, [x0, #0xe] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(14)), ARC_W_R(c, 8));
  /* 1d79e4: strb w9, [x1, #0xe] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(14)), ARC_W_R(c, 9));
  /* 1d79e8: ldrb w8, [x1, #0xf] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 1) + INT64_C(15))));
  /* 1d79ec: ldrb w9, [x0, #0xf] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(15))));
  /* 1d79f0: strb w8, [x0, #0xf] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(15)), ARC_W_R(c, 8));
  /* 1d79f4: strb w9, [x1, #0xf] */
  arc_st8((ARC_X_R(c, 1) + INT64_C(15)), ARC_W_R(c, 9));
  /* 1d79f8: ret  */
  return;
}

void fn2_1d8710(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077790992));
  /* 1d8710: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d8714: ldr x1, [x8, #0xbb0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + INT64_C(2992))));
  /* 1d8718: br x1 */
  arc_dispatch(c, ARC_X_R(c, 1)); return;
}

void fn2_1d998c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077795724));
  /* 1d998c: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1d9990: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1d9994: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1d9998: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1d999c: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1d99a0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1d99a4: ldr x8, [x8, #0xca0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3232))));
  /* 1d99a8: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1d99ac: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1d99b0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1939892));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1d99b4: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1d99b8: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1d99bc: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1d99c0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1d99c4: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1d99c8: ret  */
  return;
}

void fn2_1da22c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077797932));
  /* 1da22c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1da230: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1da234: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1da238: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1da23c: adrp x21, #0x25e000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1da240: add x21, x21, #0xc50 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(3152)));
  /* 1da244: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1da248: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1da24c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1da250: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1942100));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1da254: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1da258: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1da25c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1da260: str x19, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 19));
  /* 1da264: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1942120));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1da268: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1da26c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1da270: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1da274: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1da278: ret  */
  return;
}

void fn2_1dba2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077804076));
  /* 1dba2c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1dba30: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dba34: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1dba38: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dba3c: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1dba40: str x2, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 2));
  /* 1dba44: ldr x8, [x8, #0xeb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3760))));
  /* 1dba48: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1dba4c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1dba50: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1dba54: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1dba58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1948252));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dba5c: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1dba60: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dba64: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1dba68: ret  */
  return;
}

void fn2_1dc33c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077806396));
  /* 1dc33c: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1dc340: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1dc344: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1dc348: adrp x8, #0x25e000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2482176)));
  /* 1dc34c: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1dc350: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1dc354: ldr x8, [x8, #0xfb0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(4016))));
  /* 1dc358: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1dc35c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1950560));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1dc360: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1dc364: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1dc368: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1dc36c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1dc370: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1dc374: ret  */
  return;
}

void fn2_1ddf44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077813572));
  /* 1ddf44: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1ddf48: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ddf4c: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1ddf50: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1ddf54: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1ddf58: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1ddf5c: ldr x8, [x8, #0xa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(168))));
  /* 1ddf60: stp x1, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1ddf64: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1ddf68: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1ddf6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1957744));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ddf70: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1ddf74: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1ddf78: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1ddf7c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ddf80: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1ddf84: ret  */
  return;
}

void fn2_1de828(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077815848));
  /* 1de828: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1de82c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1de830: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1de834: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1de838: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1de83c: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1de840: ldr x8, [x8, #0x1a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(424))));
  /* 1de844: stp x1, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1de848: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 1de84c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1de850: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1960020));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1de854: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1de858: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1de85c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1de860: ret  */
  return;
}

void fn2_1df0e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077818084));
  /* 1df0e4: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1df0e8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1df0ec: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1df0f0: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1df0f4: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1df0f8: ldr x8, [x8, #0x2b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(696))));
  /* 1df0fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1962240));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1df100: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1df104: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1df108: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1df10c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1df110: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1df114: ret  */
  return;
}

void fn2_1e0164(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077822308));
  /* 1e0164: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e0168: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e016c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e0170: ldr x4, [x8, #0x3a0] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(928))));
  /* 1e0174: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e0178: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1e11fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077826556));
  /* 1e11fc: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e1200: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e1204: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e1208: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e120c: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1e1210: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e1214: ldr x8, [x8, #0x498] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1176))));
  /* 1e1218: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1e121c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e1220: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e1224: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1970728));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e1228: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e122c: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e1230: ret  */
  return;
}

void fn2_1e22a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077830816));
  /* 1e22a0: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e22a4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e22a8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e22ac: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e22b0: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1e22b4: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e22b8: ldr x8, [x8, #0x590] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1424))));
  /* 1e22bc: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e22c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1974980));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e22c4: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 1e22c8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e22cc: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e22d0: ret  */
  return;
}

void fn2_1e330c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077835020));
  /* 1e330c: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e3310: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e3314: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e3318: ldr x2, [x8, #0x690] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 8) + INT64_C(1680))));
  /* 1e331c: br x2 */
  arc_dispatch(c, ARC_X_R(c, 2)); return;
}

void fn2_1e3b28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077837096));
  /* 1e3b28: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e3b2c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e3b30: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e3b34: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e3b38: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e3b3c: ldr x8, [x8, #0x7a8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1960))));
  /* 1e3b40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1981252));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e3b44: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e3b48: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e3b4c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e3b50: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e3b54: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e3b58: ret  */
  return;
}

void fn2_1e4bd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077841368));
  /* 1e4bd8: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 1e4bdc: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e4be0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1e4be4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e4be8: stp x2, x1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1e4bec: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1e4bf0: ldr x8, [x8, #0x880] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2176))));
  /* 1e4bf4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e4bf8: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1e4bfc: mov w3, #2 */
  ARC_W_W(c, 3, UINT64_C(2));
  /* 1e4c00: str x9, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 9));
  /* 1e4c04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1985544));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e4c08: ldur x0, [x29, #-8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1e4c0c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e4c10: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 1e4c14: ret  */
  return;
}

void fn2_1e5c34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077845556));
  /* 1e5c34: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e5c38: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 1e5c3c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1e5c40: ldr x4, [x8, #0x978] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 8) + INT64_C(2424))));
  /* 1e5c44: mov w3, wzr */
  ARC_W_W(c, 3, ARC_W_R(c, 31));
  /* 1e5c48: br x4 */
  arc_dispatch(c, ARC_X_R(c, 4)); return;
}

void fn2_1e6d1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077849884));
  /* 1e6d1c: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e6d20: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e6d24: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e6d28: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e6d2c: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e6d30: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e6d34: ldr x8, [x8, #0xa70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2672))));
  /* 1e6d38: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e6d3c: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e6d40: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1994052));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e6d44: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e6d48: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e6d4c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e6d50: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e6d54: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e6d58: ret  */
  return;
}

void fn2_1e7d2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077853996));
  /* 1e7d2c: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e7d30: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e7d34: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e7d38: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e7d3c: stp xzr, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1e7d40: ldr x8, [x8, #0xb70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2928))));
  /* 1e7d44: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1e7d48: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1e7d4c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(1998160));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e7d50: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e7d54: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e7d58: ret  */
  return;
}

void fn2_1e8550(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077856080));
  /* 1e8550: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e8554: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1e8558: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1e855c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1e8560: adrp x21, #0x25f000 */
  ARC_X_W(c, 21, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e8564: add x21, x21, #0xb68 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(2920)));
  /* 1e8568: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1e856c: ldr x8, [x21, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* 1e8570: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1e8574: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2000248));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e8578: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1e857c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1e8580: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e8584: str x19, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 19));
  /* 1e8588: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2000268));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e858c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1e8590: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1e8594: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1e8598: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e859c: ret  */
  return;
}

void fn2_1e95c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077860296));
  /* 1e95c8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* 1e95cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1e95d0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1e95d4: adrp x8, #0x25f000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1e95d8: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 1e95dc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1e95e0: ldr x8, [x8, #0xd60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))));
  /* 1e95e4: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 1e95e8: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
  /* 1e95ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2004464));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1e95f0: ldurb w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-4))));
  /* 1e95f4: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* 1e95f8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1e95fc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1e9600: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* 1e9604: ret  */
  return;
}

void fn2_1eb0c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077867208));
  /* 1eb0c8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1eb0cc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1eb0d0: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1eb0d4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1eb0d8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1eb0dc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1eb0e0: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1eb0e4: add x9, x9, #0xf08 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3848)));
  /* 1eb0e8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 1eb0ec: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1eb0f0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1eb0f4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1eb0f8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1eb0fc: tbz w9, #0, #0x1eb14c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1eb14c;
L_1eb100:;
  /* 1eb100: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1eb104: bl #0x1bc084 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011400));
  fn2_1bc084(c);
  /* 1eb108: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1eb10c: adrp x9, #0x25f000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1eb110: add x5, sp, #4 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(4)));
  /* 1eb114: ldr x8, [x8, #0x978] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2424))));
  /* 1eb118: ldr x0, [x9, #0xf00] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3840))));
  /* 1eb11c: ldr x1, [x22, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1eb120: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1eb124: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 1eb128: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* 1eb12c: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1eb130: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011444));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1eb134: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1eb138: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1eb13c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1eb140: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1eb144: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1eb148: ret  */
  return;
L_1eb14c:;
  /* 1eb14c: adrp x0, #0x25f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1eb150: add x0, x0, #0xf08 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3848)));
  /* 1eb154: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011480));
  fn2_24b710(c);
  /* 1eb158: cbz w0, #0x1eb100 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1eb100;
  /* 1eb15c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1eb160: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1eb164: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1eb168: bl #0x1ebc08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011500));
  fn2_1ebc08(c);
  /* 1eb16c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1eb170: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 1eb174: add x1, x1, #0xe7e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3710)));
  /* 1eb178: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* 1eb17c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1eb180: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011524));
  fn2_1b8fd4(c);
  /* 1eb184: mov w2, #0x6343 */
  ARC_W_W(c, 2, UINT64_C(25411));
  /* 1eb188: add x1, sp, #4 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(4)));
  /* 1eb18c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1eb190: movk w2, #0xc754, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3344171008)));
  /* 1eb194: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011544));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1eb198: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1eb19c: add x0, sp, #4 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(4)));
  /* 1eb1a0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011556));
  fn2_1d2d24(c);
  /* 1eb1a4: adrp x0, #0x25f000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2486272)));
  /* 1eb1a8: add x0, x0, #0xf00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3840)));
  /* 1eb1ac: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1eb1b0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2011572));
  fn2_24b720(c);
  /* 1eb1b4: b #0x1eb100 */
  goto L_1eb100;
}

void fn2_1ed51c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077876508));
  /* 1ed51c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1ed520: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ed524: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1ed528: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ed52c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ed530: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ed534: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ed538: add x8, x8, #0x98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(152)));
  /* 1ed53c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ed540: tbz w8, #0, #0x1ed590 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ed590;
L_1ed544:;
  /* 1ed544: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ed548: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ed54c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ed550: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1ed554: ldr x8, [x8, #0x90] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(144))));
  /* 1ed558: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ed55c: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 1ed560: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1ed564: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1ed568: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ed56c: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1ed570: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020724));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1ed574: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1ed578: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ed57c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1ed580: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ed584: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ed588: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1ed58c: ret  */
  return;
L_1ed590:;
  /* 1ed590: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ed594: add x8, x8, #0x98 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(152)));
  /* 1ed598: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ed59c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ed5a0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 1ed5a4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 1ed5a8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020780));
  fn2_24b710(c);
  /* 1ed5ac: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ed5b0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ed5b4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ed5b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ed5bc: cbz w8, #0x1ed544 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ed544;
  /* 1ed5c0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ed5c4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ed5c8: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1ed5cc: bl #0x1ed700 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020816));
  fn2_1ed700(c);
  /* 1ed5d0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ed5d4: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 1ed5d8: add x1, x1, #0xaac */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2732)));
  /* 1ed5dc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ed5e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ed5e4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020840));
  fn2_1b8fd4(c);
  /* 1ed5e8: mov w2, #0x8e84 */
  ARC_W_W(c, 2, UINT64_C(36484));
  /* 1ed5ec: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1ed5f0: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1ed5f4: movk w2, #0x32d5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(852819968)));
  /* 1ed5f8: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020860));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1ed5fc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1ed600: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1ed604: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020872));
  fn2_1d2d24(c);
  /* 1ed608: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ed60c: add x0, x0, #0x90 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(144)));
  /* 1ed610: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1ed614: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2020888));
  fn2_24b720(c);
  /* 1ed618: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ed61c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ed620: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 1ed624: b #0x1ed544 */
  goto L_1ed544;
}

void fn2_1ef130(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077883696));
  /* 1ef130: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ef134: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1ef138: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ef13c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1ef140: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ef144: add x8, x8, #0x238 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(568)));
  /* 1ef148: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1ef14c: tbz w8, #0, #0x1ef18c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1ef18c;
L_1ef150:;
  /* 1ef150: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ef154: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ef158: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ef15c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1ef160: ldr x8, [x8, #0x230] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(560))));
  /* 1ef164: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ef168: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1ef16c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1ef170: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ef174: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027896));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1ef178: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1ef17c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ef180: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1ef184: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ef188: ret  */
  return;
L_1ef18c:;
  /* 1ef18c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ef190: add x8, x8, #0x238 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(568)));
  /* 1ef194: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1ef198: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ef19c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027936));
  fn2_24b710(c);
  /* 1ef1a0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ef1a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ef1a8: cbz w8, #0x1ef150 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ef150;
  /* 1ef1ac: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ef1b0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ef1b4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1ef1b8: bl #0x1f0cc4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027964));
  fn2_1f0cc4(c);
  /* 1ef1bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1ef1c0: adrp x1, #0x1f000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(126976)));
  /* 1ef1c4: add x1, x1, #0xdaa */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3498)));
  /* 1ef1c8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ef1cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ef1d0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2027988));
  fn2_1b8fd4(c);
  /* 1ef1d4: mov w2, #0x6f73 */
  ARC_W_W(c, 2, UINT64_C(28531));
  /* 1ef1d8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ef1dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ef1e0: movk w2, #0x9255, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2455044096)));
  /* 1ef1e4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2028008));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1ef1e8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1ef1ec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1ef1f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2028020));
  fn2_1d2d24(c);
  /* 1ef1f4: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1ef1f8: add x0, x0, #0x230 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(560)));
  /* 1ef1fc: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1ef200: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2028036));
  fn2_24b720(c);
  /* 1ef204: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ef208: b #0x1ef150 */
  goto L_1ef150;
}

void fn2_1f0fac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077891500));
  /* 1f0fac: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1f0fb0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f0fb4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f0fb8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f0fbc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f0fc0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f0fc4: add x8, x8, #0x430 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1072)));
  /* 1f0fc8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f0fcc: tbz w8, #0, #0x1f1024 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f1024;
L_1f0fd0:;
  /* 1f0fd0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f0fd4: adrp x9, #0x260000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f0fd8: mov w11, w1 */
  ARC_W_W(c, 11, ARC_W_R(c, 1));
  /* 1f0fdc: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f0fe0: ldr x8, [x9, #0x428] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1064))));
  /* 1f0fe4: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f0fe8: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1f0fec: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f0ff0: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f0ff4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f0ff8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f0ffc: stp x11, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f1000: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2035716));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f1004: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1f1008: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 1f100c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 1f1010: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f1014: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f1018: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f101c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1f1020: ret  */
  return;
L_1f1024:;
  /* 1f1024: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f1028: add x8, x8, #0x430 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1072)));
  /* 1f102c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f1030: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f1034: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 1f1038: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2035772));
  fn2_24b710(c);
  /* 1f103c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 1f1040: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f1044: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f1048: cbz w8, #0x1f0fd0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f0fd0;
  /* 1f104c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f1050: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f1054: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1f1058: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2035804));
  fn2_20293c(c);
  /* 1f105c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f1060: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1f1064: add x1, x1, #0xb3d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2877)));
  /* 1f1068: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f106c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f1070: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2035828));
  fn2_1b8fd4(c);
  /* 1f1074: mov w2, #0x711e */
  ARC_W_W(c, 2, UINT64_C(28958));
  /* 1f1078: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f107c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f1080: movk w2, #0x13e9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(334036992)));
  /* 1f1084: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2035848));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1f1088: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f108c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f1090: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2035860));
  fn2_1d2d24(c);
  /* 1f1094: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f1098: add x0, x0, #0x428 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1064)));
  /* 1f109c: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1f10a0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2035876));
  fn2_24b720(c);
  /* 1f10a4: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 1f10a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f10ac: b #0x1f0fd0 */
  goto L_1f0fd0;
}

void fn2_1f3618(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077901336));
  /* 1f3618: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1f361c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f3620: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1f3624: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f3628: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f362c: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1f3630: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f3634: add x8, x8, #0x630 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1584)));
  /* 1f3638: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f363c: tbz w8, #0, #0x1f36a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f36a0;
L_1f3640:;
  /* 1f3640: and w10, w3, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 3) & UINT64_C(1)));
  /* 1f3644: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1f3648: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f364c: strb w10, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 10));
  /* 1f3650: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f3654: adrp x11, #0x260000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f3658: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f365c: stp x9, x1, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 1f3660: ldr x0, [x11, #0x628] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 11) + INT64_C(1576))));
  /* 1f3664: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1f3668: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 1f366c: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1f3670: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f3674: str x9, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 9));
  /* 1f3678: add x9, sp, #0xc */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(12)));
  /* 1f367c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f3680: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 1f3684: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045576));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f3688: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f368c: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f3690: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1f3694: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f3698: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1f369c: ret  */
  return;
L_1f36a0:;
  /* 1f36a0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f36a4: add x8, x8, #0x630 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1584)));
  /* 1f36a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f36ac: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f36b0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f36b4: mov w21, w3 */
  ARC_W_W(c, 21, ARC_W_R(c, 3));
  /* 1f36b8: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 1f36bc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045632));
  fn2_24b710(c);
  /* 1f36c0: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1f36c4: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* 1f36c8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f36cc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f36d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f36d4: cbz w8, #0x1f3640 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f3640;
  /* 1f36d8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f36dc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f36e0: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1f36e4: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045672));
  fn2_20293c(c);
  /* 1f36e8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1f36ec: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 1f36f0: add x1, x1, #0x665 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1637)));
  /* 1f36f4: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1f36f8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f36fc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045696));
  fn2_1b8fd4(c);
  /* 1f3700: mov w2, #0x5dd9 */
  ARC_W_W(c, 2, UINT64_C(24025));
  /* 1f3704: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1f3708: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1f370c: movk w2, #0xf4e0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4108320768)));
  /* 1f3710: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045716));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1f3714: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1f3718: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1f371c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045728));
  fn2_1d2d24(c);
  /* 1f3720: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f3724: add x0, x0, #0x628 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1576)));
  /* 1f3728: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1f372c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2045744));
  fn2_24b720(c);
  /* 1f3730: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 1f3734: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f3738: mov w3, w21 */
  ARC_W_W(c, 3, ARC_W_R(c, 21));
  /* 1f373c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f3740: b #0x1f3640 */
  goto L_1f3640;
}

void fn2_1f57f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077910000));
  /* 1f57f0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1f57f4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f57f8: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 1f57fc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f5800: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1f5804: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f5808: add x8, x8, #0x830 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2096)));
  /* 1f580c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f5810: tbz w8, #0, #0x1f5864 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f5864;
L_1f5814:;
  /* 1f5814: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f5818: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 1f581c: adrp x10, #0x260000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f5820: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 1f5824: ldr q0, [x8, #0xa20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2592))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2592)) + 8));
  /* 1f5828: ldr x8, [x10, #0x828] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(2088))));
  /* 1f582c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f5830: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 1f5834: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1f5838: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 1f583c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f5840: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 1f5844: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054216));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1f5848: ldp s0, s1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 1f584c: ldp s2, s3, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 3, arc_ld32((_pa + 4)));
  }
  /* 1f5850: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f5854: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1f5858: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f585c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1f5860: ret  */
  return;
L_1f5864:;
  /* 1f5864: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f5868: add x8, x8, #0x830 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2096)));
  /* 1f586c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f5870: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f5874: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054264));
  fn2_24b710(c);
  /* 1f5878: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f587c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f5880: cbz w8, #0x1f5814 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f5814;
  /* 1f5884: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f5888: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f588c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 1f5890: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054292));
  fn2_20293c(c);
  /* 1f5894: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f5898: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 1f589c: add x1, x1, #0x62 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(98)));
  /* 1f58a0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f58a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f58a8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054316));
  fn2_1b8fd4(c);
  /* 1f58ac: mov w2, #0xf074 */
  ARC_W_W(c, 2, UINT64_C(61556));
  /* 1f58b0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1f58b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1f58b8: movk w2, #0xcd4a, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3444178944)));
  /* 1f58bc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054336));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 1f58c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1f58c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1f58c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054348));
  fn2_1d2d24(c);
  /* 1f58cc: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f58d0: add x0, x0, #0x828 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2088)));
  /* 1f58d4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1f58d8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2054364));
  fn2_24b720(c);
  /* 1f58dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f58e0: b #0x1f5814 */
  goto L_1f5814;
}

void fn2_1f7650(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077917776));
  /* 1f7650: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1f7654: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f7658: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f765c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f7660: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1f7664: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f7668: add x8, x8, #0xa30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2608)));
  /* 1f766c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f7670: tbz w8, #0, #0x1f76c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f76c0;
L_1f7674:;
  /* 1f7674: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f7678: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f767c: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 1f7680: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f7684: ldr x8, [x8, #0xa28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2600))));
  /* 1f7688: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f768c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 1f7690: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 1f7694: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f7698: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f769c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f76a0: stp x11, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1f76a4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2061992));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f76a8: ldur w0, [x29, #-8] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(-8))));
  /* 1f76ac: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f76b0: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f76b4: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f76b8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1f76bc: ret  */
  return;
L_1f76c0:;
  /* 1f76c0: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f76c4: add x8, x8, #0xa30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2608)));
  /* 1f76c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f76cc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f76d0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1f76d4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2062040));
  fn2_24b710(c);
  /* 1f76d8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f76dc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f76e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f76e4: cbz w8, #0x1f7674 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f7674;
  /* 1f76e8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f76ec: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f76f0: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1f76f4: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2062072));
  fn2_20293c(c);
  /* 1f76f8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f76fc: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 1f7700: add x1, x1, #0xba5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2981)));
  /* 1f7704: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f7708: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f770c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2062096));
  fn2_1b8fd4(c);
  /* 1f7710: mov w2, #0xe8c2 */
  ARC_W_W(c, 2, UINT64_C(59586));
  /* 1f7714: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f7718: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1f771c: movk w2, #0x7f9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(133758976)));
  /* 1f7720: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2062116));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1f7724: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1f7728: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 1f772c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2062128));
  fn2_1d2d24(c);
  /* 1f7730: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f7734: add x0, x0, #0xa28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2600)));
  /* 1f7738: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1f773c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2062144));
  fn2_24b720(c);
  /* 1f7740: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1f7744: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f7748: b #0x1f7674 */
  goto L_1f7674;
}

void fn2_1f9700(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077926144));
  /* 1f9700: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 1f9704: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1f9708: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1f970c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1f9710: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1f9714: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 1f9718: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f971c: add x8, x8, #0xc30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3120)));
  /* 1f9720: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1f9724: tbz w8, #0, #0x1f9794 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1f9794;
L_1f9728:;
  /* 1f9728: sxtw x10, w3 */
  ARC_X_W(c, 10, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 1f972c: mov w8, w1 */
  ARC_W_W(c, 8, ARC_W_R(c, 1));
  /* 1f9730: and w9, w2, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 2) & UINT64_C(1)));
  /* 1f9734: adrp x11, #0x260000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f9738: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 1f973c: add x2, sp, #0x18 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(24)));
  /* 1f9740: strb w9, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 9));
  /* 1f9744: ldr x8, [x11, #0xc28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 11) + INT64_C(3112))));
  /* 1f9748: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 1f974c: str x10, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 10));
  /* 1f9750: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f9754: add x11, sp, #0xc */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(12)));
  /* 1f9758: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1f975c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1f9760: stp x9, x11, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 1f9764: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 1f9768: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f976c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1f9770: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1f9774: str x9, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 9));
  /* 1f9778: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070396));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1f977c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1f9780: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1f9784: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1f9788: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1f978c: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 1f9790: ret  */
  return;
L_1f9794:;
  /* 1f9794: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f9798: add x8, x8, #0xc30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3120)));
  /* 1f979c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1f97a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1f97a4: mov x20, x3 */
  ARC_X_W(c, 20, ARC_X_R(c, 3));
  /* 1f97a8: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* 1f97ac: mov w22, w1 */
  ARC_W_W(c, 22, ARC_W_R(c, 1));
  /* 1f97b0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070452));
  fn2_24b710(c);
  /* 1f97b4: mov w1, w22 */
  ARC_W_W(c, 1, ARC_W_R(c, 22));
  /* 1f97b8: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 1f97bc: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1f97c0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1f97c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f97c8: cbz w8, #0x1f9728 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1f9728;
  /* 1f97cc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1f97d0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1f97d4: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 1f97d8: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070492));
  fn2_20293c(c);
  /* 1f97dc: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1f97e0: adrp x1, #0x29000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(167936)));
  /* 1f97e4: add x1, x1, #0xbf2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3058)));
  /* 1f97e8: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1f97ec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1f97f0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070516));
  fn2_1b8fd4(c);
  /* 1f97f4: mov w2, #0x604b */
  ARC_W_W(c, 2, UINT64_C(24651));
  /* 1f97f8: add x1, sp, #0x18 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(24)));
  /* 1f97fc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 1f9800: movk w2, #0xf31, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(254869504)));
  /* 1f9804: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070536));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 1f9808: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1f980c: add x0, sp, #0x18 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(24)));
  /* 1f9810: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070548));
  fn2_1d2d24(c);
  /* 1f9814: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1f9818: add x0, x0, #0xc28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3112)));
  /* 1f981c: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 1f9820: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2070564));
  fn2_24b720(c);
  /* 1f9824: mov w1, w22 */
  ARC_W_W(c, 1, ARC_W_R(c, 22));
  /* 1f9828: mov w2, w21 */
  ARC_W_W(c, 2, ARC_W_R(c, 21));
  /* 1f982c: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* 1f9830: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1f9834: b #0x1f9728 */
  goto L_1f9728;
}

void fn2_1fb828(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077934632));
  /* 1fb828: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1fb82c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fb830: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fb834: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fb838: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1fb83c: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb840: add x8, x8, #0xe30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3632)));
  /* 1fb844: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fb848: tbz w8, #0, #0x1fb890 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fb890;
L_1fb84c:;
  /* 1fb84c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fb850: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb854: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 1fb858: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 1fb85c: ldr x8, [x8, #0xe28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3624))));
  /* 1fb860: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fb864: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 1fb868: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fb86c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 1fb870: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fb874: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 1fb878: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078844));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1fb87c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fb880: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fb884: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fb888: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1fb88c: ret  */
  return;
L_1fb890:;
  /* 1fb890: adrp x8, #0x260000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb894: add x8, x8, #0xe30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3632)));
  /* 1fb898: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fb89c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fb8a0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1fb8a4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078888));
  fn2_24b710(c);
  /* 1fb8a8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fb8ac: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fb8b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fb8b4: cbz w8, #0x1fb84c */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fb84c;
  /* 1fb8b8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fb8bc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fb8c0: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1fb8c4: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078920));
  fn2_20293c(c);
  /* 1fb8c8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1fb8cc: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 1fb8d0: add x1, x1, #0x895 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2197)));
  /* 1fb8d4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1fb8d8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fb8dc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078944));
  fn2_1b8fd4(c);
  /* 1fb8e0: mov w2, #0xfe2d */
  ARC_W_W(c, 2, UINT64_C(65069));
  /* 1fb8e4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1fb8e8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1fb8ec: movk w2, #0xa23e, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2721972224)));
  /* 1fb8f0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078964));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1fb8f4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1fb8f8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1fb8fc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078976));
  fn2_1d2d24(c);
  /* 1fb900: adrp x0, #0x260000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2490368)));
  /* 1fb904: add x0, x0, #0xe28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3624)));
  /* 1fb908: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 1fb90c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2078992));
  fn2_24b720(c);
  /* 1fb910: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fb914: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fb918: b #0x1fb84c */
  goto L_1fb84c;
}

void fn2_1fd9d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077943252));
  /* 1fd9d4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 1fd9d8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1fd9dc: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 1fd9e0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1fd9e4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1fd9e8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1fd9ec: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fd9f0: add x8, x8, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* 1fd9f4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1fd9f8: tbz w8, #0, #0x1fda4c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1fda4c;
L_1fd9fc:;
  /* 1fd9fc: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fda00: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 1fda04: adrp x10, #0x261000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fda08: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 1fda0c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1fda10: ldr x0, [x10, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(40))));
  /* 1fda14: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* 1fda18: add x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 1fda1c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 1fda20: ldr x10, [x11] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 11)));
  /* 1fda24: stp x1, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 1fda28: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 1fda2c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 1fda30: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087476));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 1fda34: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1fda38: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1fda3c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1fda40: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1fda44: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 1fda48: ret  */
  return;
L_1fda4c:;
  /* 1fda4c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fda50: add x8, x8, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* 1fda54: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1fda58: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1fda5c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 1fda60: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1fda64: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087528));
  fn2_24b710(c);
  /* 1fda68: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1fda6c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fda70: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1fda74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fda78: cbz w8, #0x1fd9fc */
  if ((ARC_W_R(c, 8)) == 0) goto L_1fd9fc;
  /* 1fda7c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1fda80: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1fda84: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 1fda88: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087564));
  fn2_20293c(c);
  /* 1fda8c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fda90: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 1fda94: add x1, x1, #0x8be */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2238)));
  /* 1fda98: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fda9c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1fdaa0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087588));
  fn2_1b8fd4(c);
  /* 1fdaa4: mov w2, #0x4017 */
  ARC_W_W(c, 2, UINT64_C(16407));
  /* 1fdaa8: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1fdaac: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 1fdab0: movk w2, #0xcb57, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3411476480)));
  /* 1fdab4: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087608));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 1fdab8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 1fdabc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1fdac0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087620));
  fn2_1d2d24(c);
  /* 1fdac4: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1fdac8: add x0, x0, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(40)));
  /* 1fdacc: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 1fdad0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2087636));
  fn2_24b720(c);
  /* 1fdad4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 1fdad8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1fdadc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 1fdae0: b #0x1fd9fc */
  goto L_1fd9fc;
}

void fn2_1ffbe0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077951968));
  /* 1ffbe0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1ffbe4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1ffbe8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1ffbec: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1ffbf0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 1ffbf4: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ffbf8: add x9, x9, #0x230 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(560)));
  /* 1ffbfc: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 1ffc00: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1ffc04: tbz w9, #0, #0x1ffc64 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_1ffc64;
L_1ffc08:;
  /* 1ffc08: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ffc0c: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 1ffc10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ffc14: ldr x20, [x8, #0x228] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(552))));
  /* 1ffc18: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096156));
  fn2_1ccc74(c);
  /* 1ffc1c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ffc20: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 1ffc24: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ffc28: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 1ffc2c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 1ffc30: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 1ffc34: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 1ffc38: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096188));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1ffc3c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ffc40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1ffc44: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096200));
  fn2_1ccc88(c);
  /* 1ffc48: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ffc4c: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096208));
  fn2_1ccd9c(c);
  /* 1ffc50: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1ffc54: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1ffc58: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1ffc5c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 1ffc60: ret  */
  return;
L_1ffc64:;
  /* 1ffc64: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ffc68: add x8, x8, #0x230 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(560)));
  /* 1ffc6c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 1ffc70: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 1ffc74: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096248));
  fn2_24b710(c);
  /* 1ffc78: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 1ffc7c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1ffc80: cbz w8, #0x1ffc08 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1ffc08;
  /* 1ffc84: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 1ffc88: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 1ffc8c: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 1ffc90: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096276));
  fn2_20293c(c);
  /* 1ffc94: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1ffc98: adrp x1, #0x2e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(188416)));
  /* 1ffc9c: add x1, x1, #0x8ef */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2287)));
  /* 1ffca0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ffca4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1ffca8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096300));
  fn2_1b8fd4(c);
  /* 1ffcac: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 1ffcb0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 1ffcb4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1ffcb8: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 1ffcbc: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096320));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 1ffcc0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1ffcc4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 1ffcc8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096332));
  fn2_1d2d24(c);
  /* 1ffccc: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 1ffcd0: add x0, x0, #0x228 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(552)));
  /* 1ffcd4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 1ffcd8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2096348));
  fn2_24b720(c);
  /* 1ffcdc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1ffce0: b #0x1ffc08 */
  goto L_1ffc08;
}

void fn2_201c84(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077960324));
  /* 201c84: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 201c88: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 201c8c: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 201c90: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 201c94: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 201c98: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 201c9c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201ca0: add x8, x8, #0x430 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1072)));
  /* 201ca4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 201ca8: tbz w8, #0, #0x201cfc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_201cfc;
L_201cac:;
  /* 201cac: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 201cb0: sxtw x9, w1 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 201cb4: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201cb8: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 201cbc: ldr x8, [x8, #0x428] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1064))));
  /* 201cc0: add x11, x29, #0x18 */
  ARC_X_W(c, 11, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 201cc4: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* 201cc8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 201ccc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 201cd0: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 201cd4: stp x11, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 201cd8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 201cdc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 201ce0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104548));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 201ce4: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 201ce8: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 201cec: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 201cf0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 201cf4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 201cf8: ret  */
  return;
L_201cfc:;
  /* 201cfc: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201d00: add x8, x8, #0x430 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1072)));
  /* 201d04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 201d08: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 201d0c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 201d10: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 201d14: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104600));
  fn2_24b710(c);
  /* 201d18: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 201d1c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 201d20: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 201d24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 201d28: cbz w8, #0x201cac */
  if ((ARC_W_R(c, 8)) == 0) goto L_201cac;
  /* 201d2c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 201d30: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 201d34: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 201d38: bl #0x20293c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104636));
  fn2_20293c(c);
  /* 201d3c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 201d40: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 201d44: add x1, x1, #0xa21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2593)));
  /* 201d48: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 201d4c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 201d50: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104660));
  fn2_1b8fd4(c);
  /* 201d54: mov w2, #0x53f3 */
  ARC_W_W(c, 2, UINT64_C(21491));
  /* 201d58: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 201d5c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 201d60: movk w2, #0xf0d0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4040163328)));
  /* 201d64: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104680));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 201d68: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 201d6c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 201d70: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104692));
  fn2_1d2d24(c);
  /* 201d74: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 201d78: add x0, x0, #0x428 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1064)));
  /* 201d7c: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 201d80: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2104708));
  fn2_24b720(c);
  /* 201d84: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 201d88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 201d8c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 201d90: b #0x201cac */
  goto L_201cac;
}

void fn2_202fd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077965264));
  /* 202fd0: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 202fd4: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 202fd8: str x27, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 27));
  /* 202fdc: stp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 202fe0: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 202fe4: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 202fe8: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 202fec: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 202ff0: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 202ff4: add x8, x8, #0x520 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1312)));
  /* 202ff8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 202ffc: tbz w8, #0, #0x20308c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20308c;
L_203000:;
  /* 203000: sxtw x8, w2 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 203004: sxtw x9, w3 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 3))));
  /* 203008: sxtw x10, w4 */
  ARC_X_W(c, 10, ((int64_t)(int32_t)(ARC_W_R(c, 4))));
  /* 20300c: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 203010: add x2, sp, #0x30 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(48)));
  /* 203014: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 203018: stp x9, x8, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 20301c: sxtw x9, w6 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 6))));
  /* 203020: sxtw x8, w5 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 5))));
  /* 203024: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 203028: add x9, sp, #0x28 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(40)));
  /* 20302c: stp x8, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 203030: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 203034: add x10, sp, #0x18 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(24)));
  /* 203038: stp x1, x9, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 20303c: ldr x8, [x8, #0x518] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1304))));
  /* 203040: add x9, sp, #0x20 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(32)));
  /* 203044: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 203048: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20304c: stp x9, x10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 203050: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 203054: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 203058: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20305c: ldr x11, [x11] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 11)));
  /* 203060: stp x9, x10, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 203064: blr x11 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2109544));
  arc_dispatch(c, ARC_X_R(c, 11));
  /* 203068: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 20306c: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 203070: ldr x27, [sp, #0x70] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(112))));
  /* 203074: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 203078: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 20307c: ldp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 203080: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 203084: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 203088: ret  */
  return;
L_20308c:;
  /* 20308c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 203090: add x8, x8, #0x520 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1312)));
  /* 203094: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 203098: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20309c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 2030a0: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* 2030a4: mov x22, x5 */
  ARC_X_W(c, 22, ARC_X_R(c, 5));
  /* 2030a8: mov x23, x4 */
  ARC_X_W(c, 23, ARC_X_R(c, 4));
  /* 2030ac: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 2030b0: mov x25, x2 */
  ARC_X_W(c, 25, ARC_X_R(c, 2));
  /* 2030b4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2109624));
  fn2_24b710(c);
  /* 2030b8: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* 2030bc: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 2030c0: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* 2030c4: mov x5, x22 */
  ARC_X_W(c, 5, ARC_X_R(c, 22));
  /* 2030c8: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* 2030cc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2030d0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2030d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2030d8: cbz w8, #0x203000 */
  if ((ARC_W_R(c, 8)) == 0) goto L_203000;
  /* 2030dc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2030e0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2030e4: ldr x27, [x8] */
  ARC_X_W(c, 27, arc_ld64(ARC_X_R(c, 8)));
  /* 2030e8: bl #0x2042d8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2109676));
  fn2_2042d8(c);
  /* 2030ec: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 2030f0: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 2030f4: add x1, x1, #0x426 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1062)));
  /* 2030f8: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 2030fc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 203100: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2109700));
  fn2_1b8fd4(c);
  /* 203104: mov w2, #0x19c9 */
  ARC_W_W(c, 2, UINT64_C(6601));
  /* 203108: add x1, sp, #0x30 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(48)));
  /* 20310c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 203110: movk w2, #0x5a4d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1514995712)));
  /* 203114: blr x27 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2109720));
  arc_dispatch(c, ARC_X_R(c, 27));
  /* 203118: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* 20311c: add x0, sp, #0x30 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(48)));
  /* 203120: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2109732));
  fn2_1d2d24(c);
  /* 203124: nop  */
  /* nop: no architectural effect here */
  /* 203128: adr x0, #0x261518 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2495768)));
  /* 20312c: str x26, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 26));
  }
  /* 203130: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2109748));
  fn2_24b720(c);
  /* 203134: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* 203138: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 20313c: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* 203140: mov x5, x22 */
  ARC_X_W(c, 5, ARC_X_R(c, 22));
  /* 203144: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* 203148: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 20314c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 203150: b #0x203000 */
  goto L_203000;
}

void fn2_205118(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077973784));
  /* 205118: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20511c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 205120: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 205124: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 205128: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20512c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205130: add x8, x8, #0x6f0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1776)));
  /* 205134: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 205138: tbz w8, #0, #0x205184 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_205184;
L_20513c:;
  /* 20513c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 205140: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205144: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 205148: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 20514c: ldr x8, [x8, #0x6e8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1768))));
  /* 205150: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 205154: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 205158: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 20515c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 205160: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 205164: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 205168: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 20516c: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2118000));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 205170: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 205174: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 205178: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20517c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 205180: ret  */
  return;
L_205184:;
  /* 205184: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 205188: add x8, x8, #0x6f0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1776)));
  /* 20518c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 205190: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 205194: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 205198: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2118044));
  fn2_24b710(c);
  /* 20519c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2051a0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2051a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2051a8: cbz w8, #0x20513c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20513c;
  /* 2051ac: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2051b0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2051b4: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2051b8: bl #0x205cd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2118076));
  fn2_205cd4(c);
  /* 2051bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2051c0: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 2051c4: add x1, x1, #0xcb9 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3257)));
  /* 2051c8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2051cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2051d0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2118100));
  fn2_1b8fd4(c);
  /* 2051d4: mov w2, #0x1009 */
  ARC_W_W(c, 2, UINT64_C(4105));
  /* 2051d8: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2051dc: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2051e0: movk w2, #0x4cad, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1286406144)));
  /* 2051e4: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2118120));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2051e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2051ec: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2051f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2118132));
  fn2_1d2d24(c);
  /* 2051f4: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 2051f8: add x0, x0, #0x6e8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1768)));
  /* 2051fc: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 205200: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2118148));
  fn2_24b720(c);
  /* 205204: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 205208: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20520c: b #0x20513c */
  goto L_20513c;
}

void fn2_206e14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077981204));
  /* 206e14: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 206e18: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 206e1c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 206e20: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 206e24: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 206e28: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206e2c: add x9, x9, #0x8d8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2264)));
  /* 206e30: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 206e34: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 206e38: tbz w9, #0, #0x206e98 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_206e98;
L_206e3c:;
  /* 206e3c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206e40: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 206e44: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 206e48: ldr x20, [x8, #0x8d0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(2256))));
  /* 206e4c: bl #0x1d9740 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125392));
  fn2_1d9740(c);
  /* 206e50: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 206e54: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 206e58: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 206e5c: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 206e60: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 206e64: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 206e68: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 206e6c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125424));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 206e70: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 206e74: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 206e78: bl #0x1d9754 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125436));
  fn2_1d9754(c);
  /* 206e7c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 206e80: bl #0x1d97fc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125444));
  fn2_1d97fc(c);
  /* 206e84: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 206e88: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 206e8c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 206e90: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 206e94: ret  */
  return;
L_206e98:;
  /* 206e98: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206e9c: add x8, x8, #0x8d8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2264)));
  /* 206ea0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 206ea4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 206ea8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125484));
  fn2_24b710(c);
  /* 206eac: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 206eb0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 206eb4: cbz w8, #0x206e3c */
  if ((ARC_W_R(c, 8)) == 0) goto L_206e3c;
  /* 206eb8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 206ebc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 206ec0: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 206ec4: bl #0x2086f8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125512));
  fn2_2086f8(c);
  /* 206ec8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 206ecc: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 206ed0: add x1, x1, #0x259 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(601)));
  /* 206ed4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 206ed8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 206edc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125536));
  fn2_1b8fd4(c);
  /* 206ee0: mov w2, #0x48e7 */
  ARC_W_W(c, 2, UINT64_C(18663));
  /* 206ee4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 206ee8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 206eec: movk w2, #0xb8e7, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3102146560)));
  /* 206ef0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125556));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 206ef4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 206ef8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 206efc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125568));
  fn2_1d2d24(c);
  /* 206f00: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 206f04: add x0, x0, #0x8d0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2256)));
  /* 206f08: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 206f0c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2125584));
  fn2_24b720(c);
  /* 206f10: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 206f14: b #0x206e3c */
  goto L_206e3c;
}

void fn2_2089ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077988332));
  /* 2089ec: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 2089f0: ret  */
  return;
}

void fn2_20a428(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188077995048));
  /* 20a428: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20a42c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 20a430: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20a434: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 20a438: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20a43c: add x8, x8, #0xc18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3096)));
  /* 20a440: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20a444: tbz w8, #0, #0x20a488 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20a488;
L_20a448:;
  /* 20a448: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20a44c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20a450: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20a454: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 20a458: ldr x8, [x8, #0xc10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3088))));
  /* 20a45c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20a460: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 20a464: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 20a468: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20a46c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139248));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20a470: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 20a474: fcvt s0, d0 */
  arc_s_w(c, 0, (float)(ARC_D_R(c, 0)));
  /* 20a478: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20a47c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 20a480: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20a484: ret  */
  return;
L_20a488:;
  /* 20a488: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20a48c: add x8, x8, #0xc18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3096)));
  /* 20a490: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20a494: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20a498: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139292));
  fn2_24b710(c);
  /* 20a49c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20a4a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20a4a4: cbz w8, #0x20a448 */
  if ((ARC_W_R(c, 8)) == 0) goto L_20a448;
  /* 20a4a8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20a4ac: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20a4b0: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20a4b4: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139320));
  fn2_20c8c4(c);
  /* 20a4b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20a4bc: adrp x1, #0x20000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(131072)));
  /* 20a4c0: add x1, x1, #0xa2d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2605)));
  /* 20a4c4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20a4c8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20a4cc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139344));
  fn2_1b8fd4(c);
  /* 20a4d0: mov w2, #0xe66e */
  ARC_W_W(c, 2, UINT64_C(58990));
  /* 20a4d4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20a4d8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20a4dc: movk w2, #0x67c0, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1740636160)));
  /* 20a4e0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139364));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20a4e4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20a4e8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20a4ec: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139376));
  fn2_1d2d24(c);
  /* 20a4f0: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20a4f4: add x0, x0, #0xc10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3088)));
  /* 20a4f8: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20a4fc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2139392));
  fn2_24b720(c);
  /* 20a500: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20a504: b #0x20a448 */
  goto L_20a448;
}

void fn2_20c3f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078003188));
  /* 20c3f4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 20c3f8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20c3fc: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 20c400: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20c404: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 20c408: str x1, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 1));
  /* 20c40c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20c410: add x8, x8, #0xe18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3608)));
  /* 20c414: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 20c418: tbz w8, #0, #0x20c464 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_20c464;
L_20c41c:;
  /* 20c41c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20c420: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20c424: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 20c428: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 20c42c: ldr x8, [x8, #0xe10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3600))));
  /* 20c430: stp x0, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 20c434: add x2, sp, #0x10 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(16)));
  /* 20c438: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 20c43c: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* 20c440: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 20c444: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20c448: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147404));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 20c44c: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 20c450: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20c454: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 20c458: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20c45c: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 20c460: ret  */
  return;
L_20c464:;
  /* 20c464: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20c468: add x8, x8, #0xe18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3608)));
  /* 20c46c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 20c470: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20c474: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147448));
  fn2_24b710(c);
  /* 20c478: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20c47c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20c480: cbz w8, #0x20c41c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20c41c;
  /* 20c484: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20c488: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20c48c: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 20c490: bl #0x20c8c4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147476));
  fn2_20c8c4(c);
  /* 20c494: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20c498: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 20c49c: add x1, x1, #0x4bc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1212)));
  /* 20c4a0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 20c4a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20c4a8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147500));
  fn2_1b8fd4(c);
  /* 20c4ac: mov w2, #0x8674 */
  ARC_W_W(c, 2, UINT64_C(34420));
  /* 20c4b0: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 20c4b4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20c4b8: movk w2, #0x326d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(846004224)));
  /* 20c4bc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147520));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 20c4c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20c4c4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 20c4c8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147532));
  fn2_1d2d24(c);
  /* 20c4cc: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20c4d0: add x0, x0, #0xe10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3600)));
  /* 20c4d4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20c4d8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2147548));
  fn2_24b720(c);
  /* 20c4dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20c4e0: b #0x20c41c */
  goto L_20c41c;
}

void fn2_20e1e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078010852));
  /* 20e1e4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 20e1e8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20e1ec: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 20e1f0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20e1f4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 20e1f8: adrp x9, #0x261000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20e1fc: add x9, x9, #0xff8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4088)));
  /* 20e200: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 20e204: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 20e208: tbz w9, #0, #0x20e268 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_20e268;
L_20e20c:;
  /* 20e20c: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20e210: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 20e214: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 20e218: ldr x20, [x8, #0xff0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(4080))));
  /* 20e21c: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155040));
  fn2_1ddc90(c);
  /* 20e220: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20e224: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 20e228: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20e22c: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 20e230: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 20e234: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 20e238: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 20e23c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155072));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 20e240: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 20e244: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 20e248: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155084));
  fn2_1ddca4(c);
  /* 20e24c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 20e250: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155092));
  fn2_1dde08(c);
  /* 20e254: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20e258: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 20e25c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20e260: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 20e264: ret  */
  return;
L_20e268:;
  /* 20e268: adrp x8, #0x261000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20e26c: add x8, x8, #0xff8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4088)));
  /* 20e270: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 20e274: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 20e278: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155132));
  fn2_24b710(c);
  /* 20e27c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 20e280: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20e284: cbz w8, #0x20e20c */
  if ((ARC_W_R(c, 8)) == 0) goto L_20e20c;
  /* 20e288: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20e28c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 20e290: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 20e294: bl #0x20e2e8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155160));
  fn2_20e2e8(c);
  /* 20e298: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20e29c: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 20e2a0: add x1, x1, #0x93e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2366)));
  /* 20e2a4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 20e2a8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 20e2ac: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155184));
  fn2_1b8fd4(c);
  /* 20e2b0: mov w2, #0xee09 */
  ARC_W_W(c, 2, UINT64_C(60937));
  /* 20e2b4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 20e2b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 20e2bc: movk w2, #0x7e16, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2115371008)));
  /* 20e2c0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155204));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 20e2c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 20e2c8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 20e2cc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155216));
  fn2_1d2d24(c);
  /* 20e2d0: adrp x0, #0x261000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2494464)));
  /* 20e2d4: add x0, x0, #0xff0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4080)));
  /* 20e2d8: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 20e2dc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2155232));
  fn2_24b720(c);
  /* 20e2e0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 20e2e4: b #0x20e20c */
  goto L_20e20c;
}

void fn2_20fc78(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078017656));
  /* 20fc78: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 20fc7c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 20fc80: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 20fc84: adrp x19, #0x262000 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 20fc88: ldr x0, [x19, #0x148] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(328))));
  /* 20fc8c: cbz x0, #0x20fc9c */
  if ((ARC_X_R(c, 0)) == 0) goto L_20fc9c;
L_20fc90:;
  /* 20fc90: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20fc94: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20fc98: ret  */
  return;
L_20fc9c:;
  /* 20fc9c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20fca0: ldr x8, [x8, #0x988] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2440))));
  /* 20fca4: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* 20fca8: bl #0x210574 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161836));
  fn2_210574(c);
  /* 20fcac: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161840));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 20fcb0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20fcb4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 20fcb8: nop  */
  /* nop: no architectural effect here */
  /* 20fcbc: adr x2, #0x2525c0 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2434496)));
  /* 20fcc0: ldr x8, [x8, #0x990] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2448))));
  /* 20fcc4: ldr x9, [x9, #0x670] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(1648))));
  /* 20fcc8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 20fccc: ldr x1, [x9] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 9)));
  /* 20fcd0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161876));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 20fcd4: str x0, [x19, #0x148] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(328)), ARC_X_R(c, 0));
  /* 20fcd8: cbz x0, #0x20fc90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_20fc90;
  /* 20fcdc: bl #0x210574 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161888));
  fn2_210574(c);
  /* 20fce0: ldr x1, [x19, #0x148] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(328))));
  /* 20fce4: bl #0x1ebc9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2161896));
  fn2_1ebc9c(c);
  /* 20fce8: ldr x0, [x19, #0x148] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(328))));
  /* 20fcec: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 20fcf0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 20fcf4: ret  */
  return;
}

void fn2_211a50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078025296));
  /* 211a50: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 211a54: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 211a58: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 211a5c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 211a60: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 211a64: add x8, x8, #0x308 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(776)));
  /* 211a68: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 211a6c: tbz w8, #0, #0x211aac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_211aac;
L_211a70:;
  /* 211a70: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 211a74: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 211a78: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 211a7c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 211a80: ldr x8, [x8, #0x300] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(768))));
  /* 211a84: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 211a88: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 211a8c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 211a90: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 211a94: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169496));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 211a98: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 211a9c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 211aa0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 211aa4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 211aa8: ret  */
  return;
L_211aac:;
  /* 211aac: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 211ab0: add x8, x8, #0x308 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(776)));
  /* 211ab4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 211ab8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 211abc: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169536));
  fn2_24b710(c);
  /* 211ac0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 211ac4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 211ac8: cbz w8, #0x211a70 */
  if ((ARC_W_R(c, 8)) == 0) goto L_211a70;
  /* 211acc: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 211ad0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 211ad4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 211ad8: bl #0x21234c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169564));
  fn2_21234c(c);
  /* 211adc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 211ae0: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 211ae4: add x1, x1, #0xf8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(248)));
  /* 211ae8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 211aec: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 211af0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169588));
  fn2_1b8fd4(c);
  /* 211af4: mov w2, #0xdece */
  ARC_W_W(c, 2, UINT64_C(57038));
  /* 211af8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 211afc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 211b00: movk w2, #0xc8db, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3369795584)));
  /* 211b04: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169608));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 211b08: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 211b0c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 211b10: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169620));
  fn2_1d2d24(c);
  /* 211b14: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 211b18: add x0, x0, #0x300 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(768)));
  /* 211b1c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 211b20: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2169636));
  fn2_24b720(c);
  /* 211b24: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 211b28: b #0x211a70 */
  goto L_211a70;
}

void fn2_21246c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078027884));
  /* 21246c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 212470: ret  */
  return;
}

void fn2_2142c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078035652));
  /* 2142c4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 2142c8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2142cc: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 2142d0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2142d4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2142d8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2142dc: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2142e0: add x8, x8, #0x5b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1464)));
  /* 2142e4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2142e8: tbz w8, #0, #0x214348 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_214348;
L_2142ec:;
  /* 2142ec: adrp x12, #0x258000 */
  ARC_X_W(c, 12, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2142f0: sxtw x9, w2 */
  ARC_X_W(c, 9, ((int64_t)(int32_t)(ARC_W_R(c, 2))));
  /* 2142f4: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 2142f8: ldr x12, [x12, #0x980] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + INT64_C(2432))));
  /* 2142fc: adrp x10, #0x262000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 214300: add x11, x1, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 214304: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 214308: ldr x0, [x10, #0x5b0] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 10) + INT64_C(1456))));
  /* 21430c: str x9, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 9));
  /* 214310: csel x9, xzr, x11, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 11)));
  /* 214314: ldr x11, [x12] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 12)));
  /* 214318: add x10, x29, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21431c: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 214320: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* 214324: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 214328: stp x9, x10, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 21432c: blr x11 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179888));
  arc_dispatch(c, ARC_X_R(c, 11));
  /* 214330: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 214334: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 214338: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21433c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 214340: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 214344: ret  */
  return;
L_214348:;
  /* 214348: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21434c: add x8, x8, #0x5b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1464)));
  /* 214350: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 214354: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 214358: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 21435c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 214360: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179940));
  fn2_24b710(c);
  /* 214364: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 214368: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21436c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 214370: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 214374: cbz w8, #0x2142ec */
  if ((ARC_W_R(c, 8)) == 0) goto L_2142ec;
  /* 214378: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21437c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 214380: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 214384: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2179976));
  fn2_219a98(c);
  /* 214388: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 21438c: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 214390: add x1, x1, #0x2c */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(44)));
  /* 214394: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 214398: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21439c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2180000));
  fn2_1b8fd4(c);
  /* 2143a0: mov w2, #0x68a7 */
  ARC_W_W(c, 2, UINT64_C(26791));
  /* 2143a4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 2143a8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 2143ac: movk w2, #0xc5a4, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3315859456)));
  /* 2143b0: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2180020));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 2143b4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2143b8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 2143bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2180032));
  fn2_1d2d24(c);
  /* 2143c0: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2143c4: add x0, x0, #0x5b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1456)));
  /* 2143c8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 2143cc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2180048));
  fn2_24b720(c);
  /* 2143d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2143d4: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* 2143d8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2143dc: b #0x2142ec */
  goto L_2142ec;
}

void fn2_216100(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078043392));
  /* 216100: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 216104: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 216108: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21610c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 216110: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216114: add x8, x8, #0x7b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1976)));
  /* 216118: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21611c: tbz w8, #0, #0x21615c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21615c;
L_216120:;
  /* 216120: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 216124: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216128: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21612c: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 216130: ldr x8, [x8, #0x7b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1968))));
  /* 216134: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 216138: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21613c: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 216140: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 216144: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187592));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 216148: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 21614c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 216150: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 216154: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 216158: ret  */
  return;
L_21615c:;
  /* 21615c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 216160: add x8, x8, #0x7b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1976)));
  /* 216164: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 216168: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21616c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187632));
  fn2_24b710(c);
  /* 216170: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 216174: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 216178: cbz w8, #0x216120 */
  if ((ARC_W_R(c, 8)) == 0) goto L_216120;
  /* 21617c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 216180: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 216184: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 216188: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187660));
  fn2_219a98(c);
  /* 21618c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 216190: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 216194: add x1, x1, #0x2ce */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(718)));
  /* 216198: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21619c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2161a0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187684));
  fn2_1b8fd4(c);
  /* 2161a4: mov w2, #0xfc96 */
  ARC_W_W(c, 2, UINT64_C(64662));
  /* 2161a8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2161ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 2161b0: movk w2, #0x2c1a, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(739901440)));
  /* 2161b4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187704));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2161b8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2161bc: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2161c0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187716));
  fn2_1d2d24(c);
  /* 2161c4: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 2161c8: add x0, x0, #0x7b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1968)));
  /* 2161cc: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2161d0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2187732));
  fn2_24b720(c);
  /* 2161d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2161d8: b #0x216120 */
  goto L_216120;
}

void fn2_217e74(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078050932));
  /* 217e74: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 217e78: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 217e7c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 217e80: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 217e84: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217e88: add x8, x8, #0x9b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2488)));
  /* 217e8c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 217e90: tbz w8, #0, #0x217ed8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_217ed8;
L_217e94:;
  /* 217e94: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 217e98: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217e9c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217ea0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 217ea4: ldr x8, [x8, #0x9b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2480))));
  /* 217ea8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 217eac: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 217eb0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 217eb4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 217eb8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195132));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 217ebc: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 217ec0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 217ec4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 217ec8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 217ecc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 217ed0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 217ed4: ret  */
  return;
L_217ed8:;
  /* 217ed8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217edc: add x8, x8, #0x9b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2488)));
  /* 217ee0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 217ee4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 217ee8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195180));
  fn2_24b710(c);
  /* 217eec: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 217ef0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 217ef4: cbz w8, #0x217e94 */
  if ((ARC_W_R(c, 8)) == 0) goto L_217e94;
  /* 217ef8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 217efc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 217f00: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 217f04: bl #0x219a98 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195208));
  fn2_219a98(c);
  /* 217f08: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 217f0c: adrp x1, #0x23000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(143360)));
  /* 217f10: add x1, x1, #0xa18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2584)));
  /* 217f14: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217f18: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 217f1c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195232));
  fn2_1b8fd4(c);
  /* 217f20: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 217f24: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217f28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 217f2c: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 217f30: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195252));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 217f34: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 217f38: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 217f3c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195264));
  fn2_1d2d24(c);
  /* 217f40: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 217f44: add x0, x0, #0x9b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2480)));
  /* 217f48: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 217f4c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2195280));
  fn2_24b720(c);
  /* 217f50: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 217f54: b #0x217e94 */
  goto L_217e94;
}

void fn2_2199d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078057940));
  /* 2199d4: ret  */
  return;
}

void fn2_21a8b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078061748));
  /* 21a8b4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21a8b8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 21a8bc: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21a8c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 21a8c4: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21a8c8: add x8, x8, #0xbc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3008)));
  /* 21a8cc: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21a8d0: tbz w8, #0, #0x21a90c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21a90c;
L_21a8d4:;
  /* 21a8d4: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21a8d8: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21a8dc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21a8e0: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 21a8e4: ldr x8, [x8, #0xbb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3000))));
  /* 21a8e8: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21a8ec: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 21a8f0: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 21a8f4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21a8f8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205948));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 21a8fc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21a900: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 21a904: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21a908: ret  */
  return;
L_21a90c:;
  /* 21a90c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21a910: add x8, x8, #0xbc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3008)));
  /* 21a914: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21a918: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21a91c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2205984));
  fn2_24b710(c);
  /* 21a920: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21a924: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21a928: cbz w8, #0x21a8d4 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21a8d4;
  /* 21a92c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21a930: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21a934: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 21a938: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2206012));
  fn2_21f8e0(c);
  /* 21a93c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21a940: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 21a944: add x1, x1, #0xf66 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3942)));
  /* 21a948: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21a94c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21a950: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2206036));
  fn2_1b8fd4(c);
  /* 21a954: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 21a958: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21a95c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21a960: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 21a964: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2206056));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 21a968: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21a96c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 21a970: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2206068));
  fn2_1d2d24(c);
  /* 21a974: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21a978: add x0, x0, #0xbb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3000)));
  /* 21a97c: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21a980: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2206084));
  fn2_24b720(c);
  /* 21a984: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21a988: b #0x21a8d4 */
  goto L_21a8d4;
}

void fn2_21c948(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078070088));
  /* 21c948: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21c94c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21c950: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21c954: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21c958: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21c95c: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c960: add x8, x8, #0xdc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3520)));
  /* 21c964: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 21c968: tbz w8, #0, #0x21c9bc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_21c9bc;
L_21c96c:;
  /* 21c96c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21c970: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c974: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 21c978: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 21c97c: ldr x8, [x8, #0xdb8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3512))));
  /* 21c980: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21c984: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 21c988: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21c98c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 21c990: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21c994: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 21c998: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214300));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 21c99c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 21c9a0: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 21c9a4: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 21c9a8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21c9ac: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21c9b0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21c9b4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21c9b8: ret  */
  return;
L_21c9bc:;
  /* 21c9bc: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21c9c0: add x8, x8, #0xdc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3520)));
  /* 21c9c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 21c9c8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21c9cc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 21c9d0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214356));
  fn2_24b710(c);
  /* 21c9d4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21c9d8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21c9dc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21c9e0: cbz w8, #0x21c96c */
  if ((ARC_W_R(c, 8)) == 0) goto L_21c96c;
  /* 21c9e4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21c9e8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21c9ec: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21c9f0: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214388));
  fn2_21f8e0(c);
  /* 21c9f4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21c9f8: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 21c9fc: add x1, x1, #0x235 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(565)));
  /* 21ca00: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21ca04: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21ca08: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214412));
  fn2_1b8fd4(c);
  /* 21ca0c: mov w2, #0x7ddb */
  ARC_W_W(c, 2, UINT64_C(32219));
  /* 21ca10: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21ca14: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21ca18: movk w2, #0xea19, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3927506944)));
  /* 21ca1c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214432));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21ca20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21ca24: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21ca28: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214444));
  fn2_1d2d24(c);
  /* 21ca2c: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21ca30: add x0, x0, #0xdb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3512)));
  /* 21ca34: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 21ca38: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2214460));
  fn2_24b720(c);
  /* 21ca3c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21ca40: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 21ca44: b #0x21c96c */
  goto L_21c96c;
}

void fn2_21e91c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078078236));
  /* 21e91c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 21e920: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 21e924: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 21e928: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 21e92c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 21e930: adrp x9, #0x262000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e934: add x9, x9, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4032)));
  /* 21e938: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 21e93c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 21e940: tbz w9, #0, #0x21e9a0 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_21e9a0;
L_21e944:;
  /* 21e944: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e948: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 21e94c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e950: ldr x20, [x8, #0xfb8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(4024))));
  /* 21e954: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222424));
  fn2_1ccc74(c);
  /* 21e958: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21e95c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 21e960: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21e964: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 21e968: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 21e96c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 21e970: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 21e974: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222456));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 21e978: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21e97c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 21e980: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222468));
  fn2_1ccc88(c);
  /* 21e984: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e988: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222476));
  fn2_1ccd9c(c);
  /* 21e98c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 21e990: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 21e994: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 21e998: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 21e99c: ret  */
  return;
L_21e9a0:;
  /* 21e9a0: adrp x8, #0x262000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21e9a4: add x8, x8, #0xfc0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4032)));
  /* 21e9a8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 21e9ac: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 21e9b0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222516));
  fn2_24b710(c);
  /* 21e9b4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 21e9b8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21e9bc: cbz w8, #0x21e944 */
  if ((ARC_W_R(c, 8)) == 0) goto L_21e944;
  /* 21e9c0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 21e9c4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 21e9c8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 21e9cc: bl #0x21f8e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222544));
  fn2_21f8e0(c);
  /* 21e9d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21e9d4: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 21e9d8: add x1, x1, #0xd5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(213)));
  /* 21e9dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21e9e0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 21e9e4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222568));
  fn2_1b8fd4(c);
  /* 21e9e8: mov w2, #0x3dd0 */
  ARC_W_W(c, 2, UINT64_C(15824));
  /* 21e9ec: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 21e9f0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 21e9f4: movk w2, #0xc05, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(201654272)));
  /* 21e9f8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222588));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 21e9fc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 21ea00: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 21ea04: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222600));
  fn2_1d2d24(c);
  /* 21ea08: adrp x0, #0x262000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2498560)));
  /* 21ea0c: add x0, x0, #0xfb8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4024)));
  /* 21ea10: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 21ea14: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2222616));
  fn2_24b720(c);
  /* 21ea18: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 21ea1c: b #0x21e944 */
  goto L_21e944;
}

void fn2_220240(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078084672));
  /* 220240: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 220244: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 220248: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22024c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 220250: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 220254: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220258: add x9, x9, #0x140 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(320)));
  /* 22025c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 220260: tbz w9, #0, #0x22028c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22028c;
L_220264:;
  /* 220264: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220268: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22026c: ldr x9, [x9, #0x138] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(312))));
  /* 220270: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 220274: bl #0x2029d0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228856));
  fn2_2029d0(c);
  /* 220278: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22027c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 220280: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 220284: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 220288: ret  */
  return;
L_22028c:;
  /* 22028c: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220290: add x9, x9, #0x140 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(320)));
  /* 220294: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 220298: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* 22029c: mov x20, x8 */
  ARC_X_W(c, 20, ARC_X_R(c, 8));
  /* 2202a0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228900));
  fn2_24b710(c);
  /* 2202a4: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 2202a8: mov w9, w0 */
  ARC_W_W(c, 9, ARC_W_R(c, 0));
  /* 2202ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2202b0: cbz w9, #0x220264 */
  if ((ARC_W_R(c, 9)) == 0) goto L_220264;
  /* 2202b4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2202b8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2202bc: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2202c0: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228932));
  fn2_222b84(c);
  /* 2202c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2202c8: adrp x1, #0x2c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(180224)));
  /* 2202cc: add x1, x1, #0xc7e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3198)));
  /* 2202d0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2202d4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2202d8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228956));
  fn2_1b8fd4(c);
  /* 2202dc: mov w2, #0x1d98 */
  ARC_W_W(c, 2, UINT64_C(7576));
  /* 2202e0: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 2202e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 2202e8: movk w2, #0xee2d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3995926528)));
  /* 2202ec: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228976));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 2202f0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2202f4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2202f8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2228988));
  fn2_1d2d24(c);
  /* 2202fc: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 220300: add x0, x0, #0x138 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(312)));
  /* 220304: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 220308: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2229004));
  fn2_24b720(c);
  /* 22030c: mov x8, x20 */
  ARC_X_W(c, 8, ARC_X_R(c, 20));
  /* 220310: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 220314: b #0x220264 */
  goto L_220264;
}

void fn2_2221dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078092764));
  /* 2221dc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2221e0: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 2221e4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2221e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2221ec: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2221f0: add x8, x8, #0x340 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(832)));
  /* 2221f4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2221f8: tbz w8, #0, #0x222240 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_222240;
L_2221fc:;
  /* 2221fc: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 222200: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 222204: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 222208: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22220c: ldr x8, [x8, #0x338] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(824))));
  /* 222210: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 222214: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 222218: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22221c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 222220: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2236964));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 222224: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 222228: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 22222c: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 222230: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 222234: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 222238: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22223c: ret  */
  return;
L_222240:;
  /* 222240: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 222244: add x8, x8, #0x340 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(832)));
  /* 222248: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22224c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 222250: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2237012));
  fn2_24b710(c);
  /* 222254: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 222258: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22225c: cbz w8, #0x2221fc */
  if ((ARC_W_R(c, 8)) == 0) goto L_2221fc;
  /* 222260: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 222264: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 222268: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 22226c: bl #0x222b84 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2237040));
  fn2_222b84(c);
  /* 222270: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 222274: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 222278: add x1, x1, #0x53f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1343)));
  /* 22227c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 222280: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 222284: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2237064));
  fn2_1b8fd4(c);
  /* 222288: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 22228c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 222290: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 222294: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 222298: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2237084));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 22229c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 2222a0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2222a4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2237096));
  fn2_1d2d24(c);
  /* 2222a8: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2222ac: add x0, x0, #0x338 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(824)));
  /* 2222b0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 2222b4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2237112));
  fn2_24b720(c);
  /* 2222b8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2222bc: b #0x2221fc */
  goto L_2221fc;
}

void fn2_223fd4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078100436));
  /* 223fd4: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 223fd8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 223fdc: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 223fe0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 223fe4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 223fe8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 223fec: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 223ff0: add x8, x8, #0x510 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1296)));
  /* 223ff4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 223ff8: tbz w8, #0, #0x224048 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_224048;
L_223ffc:;
  /* 223ffc: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 224000: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 224004: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 224008: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 22400c: ldr x8, [x8, #0x508] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1288))));
  /* 224010: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 224014: stp x1, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 224018: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 22401c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 224020: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 224024: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 224028: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244652));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 22402c: ldr w0, [x29, #0x18] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 29) + INT64_C(24))));
  /* 224030: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 224034: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 224038: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22403c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 224040: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 224044: ret  */
  return;
L_224048:;
  /* 224048: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22404c: add x8, x8, #0x510 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1296)));
  /* 224050: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 224054: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 224058: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 22405c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 224060: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244708));
  fn2_24b710(c);
  /* 224064: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 224068: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 22406c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 224070: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 224074: cbz w8, #0x223ffc */
  if ((ARC_W_R(c, 8)) == 0) goto L_223ffc;
  /* 224078: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22407c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 224080: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 224084: bl #0x2241ec */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244744));
  fn2_2241ec(c);
  /* 224088: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 22408c: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 224090: add x1, x1, #0x92a */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2346)));
  /* 224094: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 224098: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22409c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244768));
  fn2_1b8fd4(c);
  /* 2240a0: mov w2, #0x8e84 */
  ARC_W_W(c, 2, UINT64_C(36484));
  /* 2240a4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 2240a8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 2240ac: movk w2, #0x32d5, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(852819968)));
  /* 2240b0: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244788));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 2240b4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 2240b8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 2240bc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244800));
  fn2_1d2d24(c);
  /* 2240c0: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 2240c4: add x0, x0, #0x508 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1288)));
  /* 2240c8: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 2240cc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2244816));
  fn2_24b720(c);
  /* 2240d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2240d4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 2240d8: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 2240dc: b #0x223ffc */
  goto L_223ffc;
}

void fn2_225e2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078108204));
  /* 225e2c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 225e30: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 225e34: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 225e38: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 225e3c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225e40: add x8, x8, #0x6b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1720)));
  /* 225e44: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 225e48: tbz w8, #0, #0x225e84 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_225e84;
L_225e4c:;
  /* 225e4c: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 225e50: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225e54: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 225e58: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 225e5c: ldr x8, [x8, #0x6b0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1712))));
  /* 225e60: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 225e64: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 225e68: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 225e6c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 225e70: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252404));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 225e74: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 225e78: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 225e7c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 225e80: ret  */
  return;
L_225e84:;
  /* 225e84: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225e88: add x8, x8, #0x6b8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1720)));
  /* 225e8c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 225e90: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 225e94: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252440));
  fn2_24b710(c);
  /* 225e98: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 225e9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 225ea0: cbz w8, #0x225e4c */
  if ((ARC_W_R(c, 8)) == 0) goto L_225e4c;
  /* 225ea4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 225ea8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 225eac: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 225eb0: bl #0x2267e0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252468));
  fn2_2267e0(c);
  /* 225eb4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 225eb8: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 225ebc: add x1, x1, #0xc93 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3219)));
  /* 225ec0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 225ec4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 225ec8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252492));
  fn2_1b8fd4(c);
  /* 225ecc: mov w2, #0x6d64 */
  ARC_W_W(c, 2, UINT64_C(28004));
  /* 225ed0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 225ed4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 225ed8: movk w2, #0xbfdd, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3218931712)));
  /* 225edc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252512));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 225ee0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 225ee4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 225ee8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252524));
  fn2_1d2d24(c);
  /* 225eec: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 225ef0: add x0, x0, #0x6b0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1712)));
  /* 225ef4: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 225ef8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2252540));
  fn2_24b720(c);
  /* 225efc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 225f00: b #0x225e4c */
  goto L_225e4c;
}

void fn2_227e18(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078116376));
  /* 227e18: ret  */
  return;
}

void fn2_2292d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078121684));
  /* 2292d4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2292d8: b #0x1ccc74 */
  fn2_1ccc74(c); return;
}

void fn2_22a974(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078127476));
  /* 22a974: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 22a978: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22a97c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22a980: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22a984: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 22a988: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a98c: add x8, x8, #0xb30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2864)));
  /* 22a990: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22a994: tbz w8, #0, #0x22a9e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22a9e0;
L_22a998:;
  /* 22a998: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22a99c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a9a0: sxtw x11, w1 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 1))));
  /* 22a9a4: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 22a9a8: ldr x8, [x8, #0xb28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2856))));
  /* 22a9ac: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22a9b0: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 22a9b4: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 22a9b8: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 22a9bc: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 22a9c0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22a9c4: stp x11, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 22a9c8: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271692));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 22a9cc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22a9d0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22a9d4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22a9d8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 22a9dc: ret  */
  return;
L_22a9e0:;
  /* 22a9e0: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22a9e4: add x8, x8, #0xb30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2864)));
  /* 22a9e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22a9ec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22a9f0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 22a9f4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271736));
  fn2_24b710(c);
  /* 22a9f8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22a9fc: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22aa00: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22aa04: cbz w8, #0x22a998 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22a998;
  /* 22aa08: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22aa0c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22aa10: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 22aa14: bl #0x22c080 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271768));
  fn2_22c080(c);
  /* 22aa18: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22aa1c: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 22aa20: add x1, x1, #0x6b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(107)));
  /* 22aa24: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22aa28: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22aa2c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271792));
  fn2_1b8fd4(c);
  /* 22aa30: mov w2, #0xe753 */
  ARC_W_W(c, 2, UINT64_C(59219));
  /* 22aa34: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22aa38: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22aa3c: movk w2, #0x76f3, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1995636736)));
  /* 22aa40: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271812));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 22aa44: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22aa48: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22aa4c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271824));
  fn2_1d2d24(c);
  /* 22aa50: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22aa54: add x0, x0, #0xb28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2856)));
  /* 22aa58: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 22aa5c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2271840));
  fn2_24b720(c);
  /* 22aa60: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 22aa64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22aa68: b #0x22a998 */
  goto L_22a998;
}

void fn2_22c534(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078134580));
  /* 22c534: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22c538: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 22c53c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22c540: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22c544: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22c548: add x8, x8, #0xca0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3232)));
  /* 22c54c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22c550: tbz w8, #0, #0x22c598 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22c598;
L_22c554:;
  /* 22c554: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22c558: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22c55c: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22c560: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22c564: ldr x8, [x8, #0xc98] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3224))));
  /* 22c568: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22c56c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22c570: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22c574: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22c578: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278780));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 22c57c: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 22c580: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 22c584: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 22c588: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22c58c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22c590: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22c594: ret  */
  return;
L_22c598:;
  /* 22c598: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22c59c: add x8, x8, #0xca0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3232)));
  /* 22c5a0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22c5a4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22c5a8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278828));
  fn2_24b710(c);
  /* 22c5ac: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22c5b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c5b4: cbz w8, #0x22c554 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22c554;
  /* 22c5b8: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22c5bc: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22c5c0: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 22c5c4: bl #0x22d668 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278856));
  fn2_22d668(c);
  /* 22c5c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22c5cc: adrp x1, #0x2a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(172032)));
  /* 22c5d0: add x1, x1, #0x588 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1416)));
  /* 22c5d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22c5d8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22c5dc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278880));
  fn2_1b8fd4(c);
  /* 22c5e0: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 22c5e4: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22c5e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22c5ec: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 22c5f0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278900));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 22c5f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22c5f8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22c5fc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278912));
  fn2_1d2d24(c);
  /* 22c600: nop  */
  /* nop: no architectural effect here */
  /* 22c604: adr x0, #0x263c98 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2505880)));
  /* 22c608: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22c60c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2278928));
  fn2_24b720(c);
  /* 22c610: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22c614: b #0x22c554 */
  goto L_22c554;
}

void fn2_22e328(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078142248));
  /* 22e328: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22e32c: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 22e330: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22e334: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 22e338: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22e33c: add x8, x8, #0xe80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3712)));
  /* 22e340: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 22e344: tbz w8, #0, #0x22e38c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_22e38c;
L_22e348:;
  /* 22e348: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22e34c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22e350: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22e354: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 22e358: ldr x8, [x8, #0xe78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3704))));
  /* 22e35c: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22e360: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 22e364: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 22e368: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22e36c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286448));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 22e370: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 22e374: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 22e378: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 22e37c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22e380: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 22e384: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22e388: ret  */
  return;
L_22e38c:;
  /* 22e38c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22e390: add x8, x8, #0xe80 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3712)));
  /* 22e394: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 22e398: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22e39c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286496));
  fn2_24b710(c);
  /* 22e3a0: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22e3a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22e3a8: cbz w8, #0x22e348 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22e348;
  /* 22e3ac: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22e3b0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22e3b4: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 22e3b8: bl #0x22ea10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286524));
  fn2_22ea10(c);
  /* 22e3bc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22e3c0: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 22e3c4: add x1, x1, #0xed */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(237)));
  /* 22e3c8: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22e3cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22e3d0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286548));
  fn2_1b8fd4(c);
  /* 22e3d4: mov w2, #0xa5e1 */
  ARC_W_W(c, 2, UINT64_C(42465));
  /* 22e3d8: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22e3dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22e3e0: movk w2, #0x232, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(36831232)));
  /* 22e3e4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286568));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 22e3e8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 22e3ec: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 22e3f0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286580));
  fn2_1d2d24(c);
  /* 22e3f4: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22e3f8: add x0, x0, #0xe78 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3704)));
  /* 22e3fc: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 22e400: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2286596));
  fn2_24b720(c);
  /* 22e404: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22e408: b #0x22e348 */
  goto L_22e348;
}

void fn2_22fd64(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078148964));
  /* 22fd64: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 22fd68: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 22fd6c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 22fd70: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 22fd74: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 22fd78: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 22fd7c: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22fd80: add x9, x9, #0xfc8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4040)));
  /* 22fd84: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 22fd88: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 22fd8c: tbz w9, #0, #0x22fe0c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_22fe0c;
L_22fd90:;
  /* 22fd90: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 22fd94: adrp x9, #0x263000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22fd98: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 22fd9c: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 22fda0: and w8, w2, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 2) & UINT64_C(1)));
  /* 22fda4: ldr x20, [x9, #0xfc0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 9) + INT64_C(4032))));
  /* 22fda8: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22fdac: strb w8, [sp] */
  arc_st8((c)->sp, ARC_W_R(c, 8));
  /* 22fdb0: bl #0x1ccc74 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293172));
  fn2_1ccc74(c);
  /* 22fdb4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22fdb8: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 22fdbc: mov x10, sp */
  ARC_X_W(c, 10, (c)->sp);
  /* 22fdc0: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 22fdc4: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 22fdc8: sub x3, x29, #8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22fdcc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 22fdd0: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 22fdd4: stp x9, x10, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 22fdd8: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 22fddc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293216));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 22fde0: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22fde4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 22fde8: bl #0x1ccc88 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293228));
  fn2_1ccc88(c);
  /* 22fdec: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 22fdf0: bl #0x1ccd9c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293236));
  fn2_1ccd9c(c);
  /* 22fdf4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 22fdf8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 22fdfc: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 22fe00: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 22fe04: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 22fe08: ret  */
  return;
L_22fe0c:;
  /* 22fe0c: adrp x8, #0x263000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22fe10: add x8, x8, #0xfc8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4040)));
  /* 22fe14: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 22fe18: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 22fe1c: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* 22fe20: mov w22, w1 */
  ARC_W_W(c, 22, ARC_W_R(c, 1));
  /* 22fe24: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293288));
  fn2_24b710(c);
  /* 22fe28: mov w1, w22 */
  ARC_W_W(c, 1, ARC_W_R(c, 22));
  /* 22fe2c: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 22fe30: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 22fe34: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22fe38: cbz w8, #0x22fd90 */
  if ((ARC_W_R(c, 8)) == 0) goto L_22fd90;
  /* 22fe3c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 22fe40: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 22fe44: ldr x24, [x8] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 8)));
  /* 22fe48: bl #0x23048c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293324));
  fn2_23048c(c);
  /* 22fe4c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 22fe50: adrp x1, #0x30000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(196608)));
  /* 22fe54: add x1, x1, #0xa4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(164)));
  /* 22fe58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22fe5c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 22fe60: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293348));
  fn2_1b8fd4(c);
  /* 22fe64: mov w2, #0x7a14 */
  ARC_W_W(c, 2, UINT64_C(31252));
  /* 22fe68: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 22fe6c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 22fe70: movk w2, #0x43bc, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1136394240)));
  /* 22fe74: blr x24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293368));
  arc_dispatch(c, ARC_X_R(c, 24));
  /* 22fe78: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 22fe7c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 22fe80: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293380));
  fn2_1d2d24(c);
  /* 22fe84: adrp x0, #0x263000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2502656)));
  /* 22fe88: add x0, x0, #0xfc0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4032)));
  /* 22fe8c: str x23, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 22fe90: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2293396));
  fn2_24b720(c);
  /* 22fe94: mov w1, w22 */
  ARC_W_W(c, 1, ARC_W_R(c, 22));
  /* 22fe98: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* 22fe9c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 22fea0: b #0x22fd90 */
  goto L_22fd90;
}

void fn2_231af0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078156528));
  /* 231af0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 231af4: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 231af8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 231afc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 231b00: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 231b04: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 231b08: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 231b0c: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 231b10: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2300692));
  fn2_1b5d1c(c);
  /* 231b14: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 231b18: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 231b1c: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2300704));
  fn2_1afdf8(c);
  /* 231b20: adrp x8, #0x257000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 231b24: add x8, x8, #0x230 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(560)));
  /* 231b28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 231b2c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 231b30: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 231b34: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 231b38: ret  */
  return;
}

void fn2_2336c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078163656));
  /* 2336c8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2336cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 2336d0: nop  */
  /* nop: no architectural effect here */
  /* 2336d4: adr x8, #0x264198 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2507160)));
  /* 2336d8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 2336dc: tbnz w8, #0, #0x23370c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_23370c;
  /* 2336e0: nop  */
  /* nop: no architectural effect here */
  /* 2336e4: adr x0, #0x264198 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2507160)));
  /* 2336e8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2307820));
  fn2_24b710(c);
  /* 2336ec: cbz w0, #0x23370c */
  if ((ARC_W_R(c, 0)) == 0) goto L_23370c;
  /* 2336f0: nop  */
  /* nop: no architectural effect here */
  /* 2336f4: adr x0, #0x2337a8 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2308008)));
  /* 2336f8: bl #0x1aff64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2307836));
  fn2_1aff64(c);
  /* 2336fc: nop  */
  /* nop: no architectural effect here */
  /* 233700: adr x0, #0x264198 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2507160)));
  /* 233704: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 233708: b #0x24b720 */
  fn2_24b720(c); return;
L_23370c:;
  /* 23370c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 233710: ret  */
  return;
}

void fn2_23503c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078170172));
  /* 23503c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 235040: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 235044: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 235048: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23504c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 235050: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235054: add x8, x8, #0x588 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1416)));
  /* 235058: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23505c: tbz w8, #0, #0x2350ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_2350ac;
L_235060:;
  /* 235060: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 235064: and w8, w1, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 1) & UINT64_C(1)));
  /* 235068: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23506c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 235070: strb w8, [sp, #4] */
  arc_st8(((c)->sp + INT64_C(4)), ARC_W_R(c, 8));
  /* 235074: ldr x8, [x9, #0x580] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(1408))));
  /* 235078: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23507c: add x9, sp, #4 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(4)));
  /* 235080: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 235084: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 235088: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23508c: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 235090: str x9, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 9));
  /* 235094: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314392));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 235098: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23509c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 2350a0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 2350a4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 2350a8: ret  */
  return;
L_2350ac:;
  /* 2350ac: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 2350b0: add x8, x8, #0x588 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1416)));
  /* 2350b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2350b8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 2350bc: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 2350c0: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314436));
  fn2_24b710(c);
  /* 2350c4: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 2350c8: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2350cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2350d0: cbz w8, #0x235060 */
  if ((ARC_W_R(c, 8)) == 0) goto L_235060;
  /* 2350d4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2350d8: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 2350dc: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 2350e0: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314468));
  fn2_23b340(c);
  /* 2350e4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2350e8: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 2350ec: add x1, x1, #0x76b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1899)));
  /* 2350f0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 2350f4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2350f8: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314492));
  fn2_1b8fd4(c);
  /* 2350fc: mov w2, #0x76c2 */
  ARC_W_W(c, 2, UINT64_C(30402));
  /* 235100: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 235104: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 235108: movk w2, #0x9a29, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2586378240)));
  /* 23510c: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314512));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 235110: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 235114: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 235118: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314524));
  fn2_1d2d24(c);
  /* 23511c: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 235120: add x0, x0, #0x580 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1408)));
  /* 235124: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 235128: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2314540));
  fn2_24b720(c);
  /* 23512c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 235130: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 235134: b #0x235060 */
  goto L_235060;
}

void fn2_236d9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078177692));
  /* 236d9c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 236da0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 236da4: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 236da8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 236dac: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 236db0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236db4: add x8, x8, #0x788 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1928)));
  /* 236db8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 236dbc: tbz w8, #0, #0x236e08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_236e08;
L_236dc0:;
  /* 236dc0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 236dc4: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 236dc8: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236dcc: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 236dd0: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 236dd4: ldr x0, [x9, #0x780] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(1920))));
  /* 236dd8: add x10, sp, #8 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(8)));
  /* 236ddc: add x2, x29, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 236de0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 236de4: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 236de8: str x10, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 10));
  /* 236dec: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 236df0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321908));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 236df4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 236df8: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 236dfc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 236e00: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 236e04: ret  */
  return;
L_236e08:;
  /* 236e08: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236e0c: add x8, x8, #0x788 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1928)));
  /* 236e10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 236e14: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 236e18: str s0, [sp, #4] */
  arc_st32(((c)->sp + INT64_C(4)), (c)->q[0].u32[0]);
  /* 236e1c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321952));
  fn2_24b710(c);
  /* 236e20: ldr s0, [sp, #4] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(4))));
  /* 236e24: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 236e28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 236e2c: cbz w8, #0x236dc0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_236dc0;
  /* 236e30: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 236e34: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 236e38: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 236e3c: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2321984));
  fn2_23b340(c);
  /* 236e40: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 236e44: adrp x1, #0x1c000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(114688)));
  /* 236e48: add x1, x1, #0x9f8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2552)));
  /* 236e4c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 236e50: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 236e54: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2322008));
  fn2_1b8fd4(c);
  /* 236e58: mov w2, #0xd661 */
  ARC_W_W(c, 2, UINT64_C(54881));
  /* 236e5c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 236e60: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 236e64: movk w2, #0x1647, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(373751808)));
  /* 236e68: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2322028));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 236e6c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 236e70: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 236e74: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2322040));
  fn2_1d2d24(c);
  /* 236e78: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 236e7c: add x0, x0, #0x780 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1920)));
  /* 236e80: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 236e84: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2322056));
  fn2_24b720(c);
  /* 236e88: ldr s0, [sp, #4] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(4))));
  /* 236e8c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 236e90: b #0x236dc0 */
  goto L_236dc0;
}

void fn2_238d7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078185852));
  /* 238d7c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 238d80: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 238d84: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 238d88: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 238d8c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 238d90: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238d94: add x8, x8, #0x988 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2440)));
  /* 238d98: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 238d9c: tbz w8, #0, #0x238df0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_238df0;
L_238da0:;
  /* 238da0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 238da4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238da8: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 238dac: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 238db0: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 238db4: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 238db8: str x1, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 1));
  /* 238dbc: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 238dc0: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 238dc4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 238dc8: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 238dcc: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2330064));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 238dd0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 238dd4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 238dd8: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 238ddc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 238de0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 238de4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 238de8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 238dec: ret  */
  return;
L_238df0:;
  /* 238df0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238df4: add x8, x8, #0x988 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2440)));
  /* 238df8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 238dfc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 238e00: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 238e04: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2330120));
  fn2_24b710(c);
  /* 238e08: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 238e0c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 238e10: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 238e14: cbz w8, #0x238da0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_238da0;
  /* 238e18: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 238e1c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 238e20: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 238e24: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2330152));
  fn2_23b340(c);
  /* 238e28: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 238e2c: adrp x1, #0x35000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(217088)));
  /* 238e30: add x1, x1, #0xad2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2770)));
  /* 238e34: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 238e38: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 238e3c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2330176));
  fn2_1b8fd4(c);
  /* 238e40: mov w2, #0xecb5 */
  ARC_W_W(c, 2, UINT64_C(60597));
  /* 238e44: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 238e48: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 238e4c: movk w2, #0x9c26, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2619736064)));
  /* 238e50: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2330196));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 238e54: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 238e58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 238e5c: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2330208));
  fn2_1d2d24(c);
  /* 238e60: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 238e64: add x0, x0, #0x980 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2432)));
  /* 238e68: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 238e6c: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2330224));
  fn2_24b720(c);
  /* 238e70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 238e74: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 238e78: b #0x238da0 */
  goto L_238da0;
}

void fn2_23ac98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078193816));
  /* 23ac98: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 23ac9c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23aca0: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 23aca4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23aca8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23acac: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 23acb0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23acb4: add x8, x8, #0xb88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2952)));
  /* 23acb8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23acbc: tbz w8, #0, #0x23ad10 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23ad10;
L_23acc0:;
  /* 23acc0: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23acc4: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23acc8: add x9, x1, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 23accc: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 23acd0: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 23acd4: ldr x8, [x8, #0xb80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2944))));
  /* 23acd8: csel x9, xzr, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* 23acdc: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23ace0: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23ace4: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 23ace8: stp x9, x2, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 23acec: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 23acf0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23acf4: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2338040));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 23acf8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23acfc: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 23ad00: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23ad04: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23ad08: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 23ad0c: ret  */
  return;
L_23ad10:;
  /* 23ad10: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23ad14: add x8, x8, #0xb88 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2952)));
  /* 23ad18: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23ad1c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23ad20: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 23ad24: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 23ad28: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2338092));
  fn2_24b710(c);
  /* 23ad2c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 23ad30: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 23ad34: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23ad38: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23ad3c: cbz w8, #0x23acc0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_23acc0;
  /* 23ad40: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23ad44: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23ad48: ldr x23, [x8] */
  ARC_X_W(c, 23, arc_ld64(ARC_X_R(c, 8)));
  /* 23ad4c: bl #0x23b340 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2338128));
  fn2_23b340(c);
  /* 23ad50: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 23ad54: adrp x1, #0x2b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(176128)));
  /* 23ad58: add x1, x1, #0x37e */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(894)));
  /* 23ad5c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 23ad60: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23ad64: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2338152));
  fn2_1b8fd4(c);
  /* 23ad68: mov w2, #0x445b */
  ARC_W_W(c, 2, UINT64_C(17499));
  /* 23ad6c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 23ad70: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 23ad74: movk w2, #0x7f3d, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2134704128)));
  /* 23ad78: blr x23 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2338172));
  arc_dispatch(c, ARC_X_R(c, 23));
  /* 23ad7c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 23ad80: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 23ad84: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2338184));
  fn2_1d2d24(c);
  /* 23ad88: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23ad8c: add x0, x0, #0xb80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2944)));
  /* 23ad90: str x22, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 22));
  }
  /* 23ad94: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2338200));
  fn2_24b720(c);
  /* 23ad98: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 23ad9c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23ada0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 23ada4: b #0x23acc0 */
  goto L_23acc0;
}

void fn2_23bb68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078197608));
  /* 23bb68: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 23bb6c: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23bb70: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 23bb74: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23bb78: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 23bb7c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23bb80: add x8, x8, #0xc08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3080)));
  /* 23bb84: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23bb88: tbz w8, #0, #0x23bbe0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23bbe0;
L_23bb8c:;
  /* 23bb8c: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23bb90: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 23bb94: mov w8, w1 */
  ARC_W_W(c, 8, ARC_W_R(c, 1));
  /* 23bb98: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23bb9c: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 23bba0: adrp x9, #0x264000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23bba4: ldr x0, [x9, #0xc00] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3072))));
  /* 23bba8: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 23bbac: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 23bbb0: ldr x9, [x10] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 10)));
  /* 23bbb4: add x11, sp, #0x10 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(16)));
  /* 23bbb8: sub x2, x29, #0x10 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 23bbbc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23bbc0: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 23bbc4: stp x8, x11, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* 23bbc8: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341836));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23bbcc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23bbd0: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 23bbd4: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23bbd8: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 23bbdc: ret  */
  return;
L_23bbe0:;
  /* 23bbe0: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23bbe4: add x8, x8, #0xc08 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3080)));
  /* 23bbe8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23bbec: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23bbf0: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* 23bbf4: str s0, [sp, #0xc] */
  arc_st32(((c)->sp + INT64_C(12)), (c)->q[0].u32[0]);
  /* 23bbf8: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341884));
  fn2_24b710(c);
  /* 23bbfc: ldr s0, [sp, #0xc] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(12))));
  /* 23bc00: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 23bc04: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23bc08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23bc0c: cbz w8, #0x23bb8c */
  if ((ARC_W_R(c, 8)) == 0) goto L_23bb8c;
  /* 23bc10: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23bc14: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23bc18: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 23bc1c: bl #0x23c3cc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341920));
  fn2_23c3cc(c);
  /* 23bc20: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23bc24: adrp x1, #0x26000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(155648)));
  /* 23bc28: add x1, x1, #0xea5 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3749)));
  /* 23bc2c: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 23bc30: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23bc34: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341944));
  fn2_1b8fd4(c);
  /* 23bc38: mov w2, #0xfc88 */
  ARC_W_W(c, 2, UINT64_C(64648));
  /* 23bc3c: sub x1, x29, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 23bc40: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 23bc44: movk w2, #0xffb6, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(4290117632)));
  /* 23bc48: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341964));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 23bc4c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 23bc50: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 23bc54: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341976));
  fn2_1d2d24(c);
  /* 23bc58: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23bc5c: add x0, x0, #0xc00 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3072)));
  /* 23bc60: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 23bc64: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2341992));
  fn2_24b720(c);
  /* 23bc68: ldr s0, [sp, #0xc] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(12))));
  /* 23bc6c: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 23bc70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23bc74: b #0x23bb8c */
  goto L_23bb8c;
}

void fn2_23d1d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078203352));
  /* 23d1d8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 23d1dc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23d1e0: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 23d1e4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23d1e8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 23d1ec: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23d1f0: add x8, x8, #0xe18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3608)));
  /* 23d1f4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23d1f8: tbz w8, #0, #0x23d24c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23d24c;
L_23d1fc:;
  /* 23d1fc: adrp x9, #0x258000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23d200: adrp x8, #0x37000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(225280)));
  /* 23d204: adrp x10, #0x264000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23d208: ldr x9, [x9, #0x980] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))));
  /* 23d20c: ldr q0, [x8, #0xa20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2592))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2592)) + 8));
  /* 23d210: ldr x8, [x10, #0xe10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 10) + INT64_C(3600))));
  /* 23d214: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23d218: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 23d21c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 23d220: ldr x9, [x9] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 9)));
  /* 23d224: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23d228: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 23d22c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347568));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 23d230: ldp s0, s1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 23d234: ldp s2, s3, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 3, arc_ld32((_pa + 4)));
  }
  /* 23d238: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23d23c: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 23d240: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23d244: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 23d248: ret  */
  return;
L_23d24c:;
  /* 23d24c: adrp x8, #0x264000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23d250: add x8, x8, #0xe18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3608)));
  /* 23d254: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23d258: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23d25c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347616));
  fn2_24b710(c);
  /* 23d260: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23d264: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23d268: cbz w8, #0x23d1fc */
  if ((ARC_W_R(c, 8)) == 0) goto L_23d1fc;
  /* 23d26c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23d270: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23d274: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 23d278: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347644));
  fn2_242738(c);
  /* 23d27c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23d280: adrp x1, #0x24000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(147456)));
  /* 23d284: add x1, x1, #0x673 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1651)));
  /* 23d288: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 23d28c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23d290: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347668));
  fn2_1b8fd4(c);
  /* 23d294: mov w2, #0xf074 */
  ARC_W_W(c, 2, UINT64_C(61556));
  /* 23d298: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 23d29c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 23d2a0: movk w2, #0xcd4a, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3444178944)));
  /* 23d2a4: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347688));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 23d2a8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 23d2ac: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 23d2b0: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347700));
  fn2_1d2d24(c);
  /* 23d2b4: adrp x0, #0x264000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2506752)));
  /* 23d2b8: add x0, x0, #0xe10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3600)));
  /* 23d2bc: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 23d2c0: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2347716));
  fn2_24b720(c);
  /* 23d2c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23d2c8: b #0x23d1fc */
  goto L_23d1fc;
}

void fn2_23f84c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078213196));
  /* 23f84c: sub sp, sp, #0x140 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(320)));
  /* 23f850: stp x29, x30, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 23f854: str x28, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), ARC_X_R(c, 28));
  /* 23f858: stp x20, x19, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 23f85c: add x29, sp, #0x110 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(272)));
  /* 23f860: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 23f864: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 23f868: ldr w9, [x29, #0x50] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(80))));
  /* 23f86c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 23f870: ldr w10, [x29, #0x48] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(72))));
  /* 23f874: ldr x19, [x29, #0x30] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(48))));
  /* 23f878: tbz w8, #0, #0x23f93c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_23f93c;
L_23f87c:;
  /* 23f87c: mov w8, w4 */
  ARC_W_W(c, 8, ARC_W_R(c, 4));
  /* 23f880: sxtw x12, w6 */
  ARC_X_W(c, 12, ((int64_t)(int32_t)(ARC_W_R(c, 6))));
  /* 23f884: stp x9, x10, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 23f888: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 23f88c: sxtw x8, w7 */
  ARC_X_W(c, 8, ((int64_t)(int32_t)(ARC_W_R(c, 7))));
  /* 23f890: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* 23f894: fcvt d1, s1 */
  arc_d_w(c, 1, (double)(ARC_S_R(c, 1)));
  /* 23f898: sxtw x11, w5 */
  ARC_X_W(c, 11, ((int64_t)(int32_t)(ARC_W_R(c, 5))));
  /* 23f89c: add x10, sp, #0x78 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(120)));
  /* 23f8a0: stp x8, x12, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* 23f8a4: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 23f8a8: stur x11, [x29, #-0x80] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)), ARC_X_R(c, 11));
  /* 23f8ac: adrp x11, #0x258000 */
  ARC_X_W(c, 11, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23f8b0: add x9, x8, #0x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 23f8b4: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 23f8b8: stur d0, [x29, #-0x78] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-120)), (c)->q[0].u64[0]);
  /* 23f8bc: csel x8, xzr, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* 23f8c0: sub x9, x29, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(128)));
  /* 23f8c4: str d1, [sp, #0x68] */
  arc_st64(((c)->sp + INT64_C(104)), (c)->q[1].u64[0]);
  /* 23f8c8: stp x8, x2, [x29, #-0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-112));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 23f8cc: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 23f8d0: sub x2, x29, #0x70 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 23f8d4: stp x3, x8, [x29, #-0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-96));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 23f8d8: sub x8, x29, #0x78 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(120)));
  /* 23f8dc: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* 23f8e0: stp x8, x9, [x29, #-0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-80));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 23f8e4: add x8, sp, #0x88 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(136)));
  /* 23f8e8: add x9, sp, #0x80 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(128)));
  /* 23f8ec: stp x8, x9, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 23f8f0: add x9, x29, #0x38 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(56)));
  /* 23f8f4: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 23f8f8: stp x19, x9, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 23f8fc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 23f900: add x9, x29, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(64)));
  /* 23f904: ldr x11, [x11, #0x980] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 11) + INT64_C(2432))));
  /* 23f908: ldr x1, [x0, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 23f90c: stp x9, x10, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 23f910: add x9, sp, #0x70 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(112)));
  /* 23f914: add x10, sp, #0x68 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(104)));
  /* 23f918: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23f91c: ldr x11, [x11] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 11)));
  /* 23f920: stp x9, x10, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 23f924: blr x11 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357544));
  arc_dispatch(c, ARC_X_R(c, 11));
  /* 23f928: ldp x20, x19, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 23f92c: ldr x28, [sp, #0x120] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(288))));
  /* 23f930: ldp x29, x30, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 23f934: add sp, sp, #0x140 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(320)));
  /* 23f938: ret  */
  return;
L_23f93c:;
  /* 23f93c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 23f940: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 23f944: stp x3, x0, [sp, #0x58] */
  { const uint64_t _pa = ((c)->sp + INT64_C(88));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 23f948: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 23f94c: str x2, [sp, #0x50] */
  arc_st64(((c)->sp + INT64_C(80)), ARC_X_R(c, 2));
  /* 23f950: str s1, [sp, #0x4c] */
  arc_st32(((c)->sp + INT64_C(76)), (c)->q[1].u32[0]);
  /* 23f954: stp x7, x1, [sp, #0x38] */
  { const uint64_t _pa = ((c)->sp + INT64_C(56));
    arc_st64(_pa, ARC_X_R(c, 7));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 23f958: str x6, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 6));
  /* 23f95c: str s0, [sp, #0x2c] */
  arc_st32(((c)->sp + INT64_C(44)), (c)->q[0].u32[0]);
  /* 23f960: str x5, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 5));
  /* 23f964: str w4, [sp, #0x1c] */
  arc_st32(((c)->sp + INT64_C(28)), ARC_W_R(c, 4));
  /* 23f968: stp x10, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 23f96c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357616));
  fn2_24b710(c);
  /* 23f970: ldp x10, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 23f974: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 23f978: ldp x6, x7, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 6, arc_ld64(_pa));
    ARC_X_W(c, 7, arc_ld64(_pa + 8));
  }
  /* 23f97c: ldr w4, [sp, #0x1c] */
  ARC_W_W(c, 4, arc_ld32(((c)->sp + INT64_C(28))));
  /* 23f980: ldp x2, x3, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* 23f984: ldr x5, [sp, #0x20] */
  ARC_X_W(c, 5, arc_ld64(((c)->sp + INT64_C(32))));
  /* 23f988: ldr s0, [sp, #0x2c] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(44))));
  /* 23f98c: ldr x1, [sp, #0x40] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(64))));
  /* 23f990: ldr s1, [sp, #0x4c] */
  arc_su_w(c, 1, arc_ld32(((c)->sp + INT64_C(76))));
  /* 23f994: ldr x0, [sp, #0x60] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(96))));
  /* 23f998: cbz w8, #0x23f87c */
  if ((ARC_W_R(c, 8)) == 0) goto L_23f87c;
  /* 23f99c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 23f9a0: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 23f9a4: ldr x20, [x8] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 8)));
  /* 23f9a8: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357676));
  fn2_242738(c);
  /* 23f9ac: str x19, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 19));
  /* 23f9b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23f9b4: adrp x1, #0x25000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(151552)));
  /* 23f9b8: add x1, x1, #0x1af */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(431)));
  /* 23f9bc: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 23f9c0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 23f9c4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357704));
  fn2_1b8fd4(c);
  /* 23f9c8: mov w2, #0xa169 */
  ARC_W_W(c, 2, UINT64_C(41321));
  /* 23f9cc: sub x1, x29, #0x70 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 23f9d0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 23f9d4: movk w2, #0xb5d1, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3050373120)));
  /* 23f9d8: blr x20 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357724));
  arc_dispatch(c, ARC_X_R(c, 20));
  /* 23f9dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 23f9e0: sub x0, x29, #0x70 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(112)));
  /* 23f9e4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357736));
  fn2_1d2d24(c);
  /* 23f9e8: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 23f9ec: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 23f9f0: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 23f9f4: ldr x19, [sp] */
  ARC_X_W(c, 19, arc_ld64((c)->sp));
  /* 23f9f8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2357756));
  fn2_24b720(c);
  /* 23f9fc: ldp x10, x9, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 23fa00: ldr w4, [sp, #0x1c] */
  ARC_W_W(c, 4, arc_ld32(((c)->sp + INT64_C(28))));
  /* 23fa04: ldp x6, x7, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 6, arc_ld64(_pa));
    ARC_X_W(c, 7, arc_ld64(_pa + 8));
  }
  /* 23fa08: ldr x5, [sp, #0x20] */
  ARC_X_W(c, 5, arc_ld64(((c)->sp + INT64_C(32))));
  /* 23fa0c: ldr s0, [sp, #0x2c] */
  arc_su_w(c, 0, arc_ld32(((c)->sp + INT64_C(44))));
  /* 23fa10: ldr x1, [sp, #0x40] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(64))));
  /* 23fa14: ldr s1, [sp, #0x4c] */
  arc_su_w(c, 1, arc_ld32(((c)->sp + INT64_C(76))));
  /* 23fa18: ldr x0, [sp, #0x60] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(96))));
  /* 23fa1c: ldp x2, x3, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 3, arc_ld64(_pa + 8));
  }
  /* 23fa20: b #0x23f87c */
  goto L_23f87c;
}

void fn2_2419e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078221796));
  /* 2419e4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 2419e8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 2419ec: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 2419f0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 2419f4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 2419f8: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2419fc: add x8, x8, #0x218 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(536)));
  /* 241a00: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 241a04: tbz w8, #0, #0x241a50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_241a50;
L_241a08:;
  /* 241a08: adrp x10, #0x258000 */
  ARC_X_W(c, 10, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 241a0c: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241a10: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 241a14: ldr x10, [x10, #0x980] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + INT64_C(2432))));
  /* 241a18: ldr x8, [x8, #0x210] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(528))));
  /* 241a1c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 241a20: stp x1, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 241a24: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 241a28: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* 241a2c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 241a30: mov x1, x9 */
  ARC_X_W(c, 1, ARC_X_R(c, 9));
  /* 241a34: blr x10 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2366008));
  arc_dispatch(c, ARC_X_R(c, 10));
  /* 241a38: ldp s0, s1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* 241a3c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 241a40: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 241a44: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 241a48: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 241a4c: ret  */
  return;
L_241a50:;
  /* 241a50: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241a54: add x8, x8, #0x218 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(536)));
  /* 241a58: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 241a5c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 241a60: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 241a64: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2366056));
  fn2_24b710(c);
  /* 241a68: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 241a6c: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 241a70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 241a74: cbz w8, #0x241a08 */
  if ((ARC_W_R(c, 8)) == 0) goto L_241a08;
  /* 241a78: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 241a7c: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 241a80: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 241a84: bl #0x242738 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2366088));
  fn2_242738(c);
  /* 241a88: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 241a8c: adrp x1, #0x1d000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(118784)));
  /* 241a90: add x1, x1, #0xf27 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3879)));
  /* 241a94: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 241a98: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 241a9c: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2366112));
  fn2_1b8fd4(c);
  /* 241aa0: mov w2, #0xa1fa */
  ARC_W_W(c, 2, UINT64_C(41466));
  /* 241aa4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 241aa8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 241aac: movk w2, #0x9e55, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(2656370688)));
  /* 241ab0: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2366132));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 241ab4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 241ab8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 241abc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2366144));
  fn2_1d2d24(c);
  /* 241ac0: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 241ac4: add x0, x0, #0x210 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(528)));
  /* 241ac8: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 241acc: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2366160));
  fn2_24b720(c);
  /* 241ad0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 241ad4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 241ad8: b #0x241a08 */
  goto L_241a08;
}

void fn2_242c48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078226504));
  /* 242c48: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 242c4c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 242c50: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 242c54: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 242c58: adrp x1, #0x1e000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(122880)));
  /* 242c5c: add x1, x1, #0xb6f */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2927)));
  /* 242c60: mov w0, #0x18 */
  ARC_W_W(c, 0, UINT64_C(24));
  /* 242c64: mov x2, x1 */
  ARC_X_W(c, 2, ARC_X_R(c, 1));
  /* 242c68: bl #0x1b5d1c */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2370668));
  fn2_1b5d1c(c);
  /* 242c6c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 242c70: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 242c74: bl #0x1afdf8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2370680));
  fn2_1afdf8(c);
  /* 242c78: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 242c7c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 242c80: ldr x8, [x8, #0xa78] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2680))));
  /* 242c84: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 242c88: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 242c8c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 242c90: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 242c94: ret  */
  return;
}

void fn2_243afc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078230268));
  /* 243afc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 243b00: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 243b04: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 243b08: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 243b0c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 243b10: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 243b14: add x9, x9, #0x3e8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1000)));
  /* 243b18: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 243b1c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 243b20: tbz w9, #0, #0x243b80 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_243b80;
L_243b24:;
  /* 243b24: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 243b28: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 243b2c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 243b30: ldr x20, [x8, #0x3e0] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(992))));
  /* 243b34: bl #0x1e6a64 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374456));
  fn2_1e6a64(c);
  /* 243b38: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 243b3c: mov x3, sp */
  ARC_X_W(c, 3, (c)->sp);
  /* 243b40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 243b44: ldr x8, [x8, #0x980] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))));
  /* 243b48: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 243b4c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 243b50: ldr x8, [x8] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 8)));
  /* 243b54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374488));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 243b58: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 243b5c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 243b60: bl #0x1e6a78 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374500));
  fn2_1e6a78(c);
  /* 243b64: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 243b68: bl #0x1e6bdc */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374508));
  fn2_1e6bdc(c);
  /* 243b6c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 243b70: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 243b74: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 243b78: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 243b7c: ret  */
  return;
L_243b80:;
  /* 243b80: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 243b84: add x8, x8, #0x3e8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1000)));
  /* 243b88: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 243b8c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 243b90: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374548));
  fn2_24b710(c);
  /* 243b94: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 243b98: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 243b9c: cbz w8, #0x243b24 */
  if ((ARC_W_R(c, 8)) == 0) goto L_243b24;
  /* 243ba0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 243ba4: ldr x8, [x8, #0x9d0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))));
  /* 243ba8: ldr x22, [x8] */
  ARC_X_W(c, 22, arc_ld64(ARC_X_R(c, 8)));
  /* 243bac: bl #0x244850 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374576));
  fn2_244850(c);
  /* 243bb0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 243bb4: adrp x1, #0x21000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(135168)));
  /* 243bb8: add x1, x1, #0x620 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1568)));
  /* 243bbc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 243bc0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 243bc4: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374600));
  fn2_1b8fd4(c);
  /* 243bc8: mov w2, #0xc1ea */
  ARC_W_W(c, 2, UINT64_C(49642));
  /* 243bcc: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 243bd0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 243bd4: movk w2, #0x1da9, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(497614848)));
  /* 243bd8: blr x22 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374620));
  arc_dispatch(c, ARC_X_R(c, 22));
  /* 243bdc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 243be0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 243be4: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374632));
  fn2_1d2d24(c);
  /* 243be8: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 243bec: add x0, x0, #0x3e0 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(992)));
  /* 243bf0: str x20, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 20));
  }
  /* 243bf4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2374648));
  fn2_24b720(c);
  /* 243bf8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 243bfc: b #0x243b24 */
  goto L_243b24;
}

void fn2_244a50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078234192));
  /* 244a50: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 244a54: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 244a58: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 244a5c: nop  */
  /* nop: no architectural effect here */
  /* 244a60: adr x8, #0x265378 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2511736)));
  /* 244a64: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 244a68: tbz w8, #0, #0x244a88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_244a88;
L_244a6c:;
  /* 244a6c: nop  */
  /* nop: no architectural effect here */
  /* 244a70: adr x0, #0x265370 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2511728)));
  /* 244a74: nop  */
  /* nop: no architectural effect here */
  /* 244a78: adr x1, #0x2579a0 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(2455968)));
  /* 244a7c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 244a80: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 244a84: b #0x1b00bc */
  fn2_1b00bc(c); return;
L_244a88:;
  /* 244a88: nop  */
  /* nop: no architectural effect here */
  /* 244a8c: adr x0, #0x265378 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2511736)));
  /* 244a90: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2378388));
  fn2_24b710(c);
  /* 244a94: cbz w0, #0x244a6c */
  if ((ARC_W_R(c, 0)) == 0) goto L_244a6c;
  /* 244a98: nop  */
  /* nop: no architectural effect here */
  /* 244a9c: adr x19, #0x265370 */
  ARC_X_W(c, 19, (arc_image_bases[2] + UINT64_C(2511728)));
  /* 244aa0: adrp x1, #0x1a000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(106496)));
  /* 244aa4: add x1, x1, #0x7fc */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2044)));
  /* 244aa8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 244aac: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 244ab0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2378420));
  fn2_1b8fd4(c);
  /* 244ab4: adrp x0, #0x257000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2453504)));
  /* 244ab8: nop  */
  /* nop: no architectural effect here */
  /* 244abc: adr x2, #0x24f980 */
  ARC_X_W(c, 2, (arc_image_bases[2] + UINT64_C(2423168)));
  /* 244ac0: ldr x0, [x0, #0xf88] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(3976))));
  /* 244ac4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 244ac8: bl #0x24b6f0 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2378444));
  fn2_24b6f0(c);
  /* 244acc: nop  */
  /* nop: no architectural effect here */
  /* 244ad0: adr x0, #0x265378 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2511736)));
  /* 244ad4: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2378456));
  fn2_24b720(c);
  /* 244ad8: b #0x244a6c */
  goto L_244a6c;
}

void fn2_245adc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078238428));
  /* 245adc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 245ae0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 245ae4: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 245ae8: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 245aec: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 245af0: add x8, x8, #0x548 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1352)));
  /* 245af4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 245af8: tbz w8, #0, #0x245b34 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_245b34;
L_245afc:;
  /* 245afc: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 245b00: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 245b04: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245b08: ldr x8, [x8, #0x540] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1344))));
  /* 245b0c: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 245b10: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 245b14: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 245b18: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 245b1c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382624));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 245b20: ldr d0, [x29, #0x18] */
  arc_du_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 245b24: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 245b28: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 245b2c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 245b30: ret  */
  return;
L_245b34:;
  /* 245b34: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 245b38: add x0, x0, #0x548 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1352)));
  /* 245b3c: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 245b40: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382660));
  fn2_24b710(c);
  /* 245b44: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 245b48: cbz w0, #0x245afc */
  if ((ARC_W_R(c, 0)) == 0) goto L_245afc;
  /* 245b4c: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 245b50: adrp x1, #0x1b000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(110592)));
  /* 245b54: add x1, x1, #0x292 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(658)));
  /* 245b58: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 245b5c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245b60: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 245b64: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 245b68: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382700));
  fn2_1b8fd4(c);
  /* 245b6c: mov w1, #0x90b3 */
  ARC_W_W(c, 1, UINT64_C(37043));
  /* 245b70: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245b74: movk w1, #0x7f8e, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2140012544)));
  /* 245b78: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382716));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 245b7c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 245b80: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 245b84: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382728));
  fn2_1d2d24(c);
  /* 245b88: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 245b8c: add x0, x0, #0x540 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1344)));
  /* 245b90: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 245b94: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2382744));
  fn2_24b720(c);
  /* 245b98: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 245b9c: b #0x245afc */
  goto L_245afc;
}

void fn2_247438(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078244920));
  /* 247438: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 24743c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 247440: str x19, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 19));
  /* 247444: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 247448: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24744c: add x8, x8, #0x748 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1864)));
  /* 247450: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 247454: tbz w8, #0, #0x247498 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_247498;
L_247458:;
  /* 247458: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24745c: add x9, sp, #0x10 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(16)));
  /* 247460: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 247464: ldr x8, [x8, #0x740] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(1856))));
  /* 247468: sub x1, x29, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* 24746c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 247470: str d0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), (c)->q[0].u64[0]);
  /* 247474: stur x9, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 9));
  /* 247478: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2389116));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 24747c: ldrb w8, [x29, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(24))));
  /* 247480: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* 247484: cset w0, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? 1 : 0));
  /* 247488: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 24748c: ldr x19, [sp, #0x30] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(48))));
  /* 247490: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 247494: ret  */
  return;
L_247498:;
  /* 247498: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24749c: add x0, x0, #0x748 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1864)));
  /* 2474a0: str d0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), (c)->q[0].u64[0]);
  /* 2474a4: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2389160));
  fn2_24b710(c);
  /* 2474a8: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 2474ac: cbz w0, #0x247458 */
  if ((ARC_W_R(c, 0)) == 0) goto L_247458;
  /* 2474b0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2474b4: adrp x1, #0x34000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(212992)));
  /* 2474b8: add x1, x1, #0xe6d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3693)));
  /* 2474bc: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 2474c0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2474c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2474c8: ldr x19, [x8] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 8)));
  /* 2474cc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2389200));
  fn2_1b8fd4(c);
  /* 2474d0: mov w1, #0xe6ed */
  ARC_W_W(c, 1, UINT64_C(59117));
  /* 2474d4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2474d8: movk w1, #0xd4bd, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(3569156096)));
  /* 2474dc: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2389216));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* 2474e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 2474e4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 2474e8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2389228));
  fn2_1d2d24(c);
  /* 2474ec: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2474f0: add x0, x0, #0x740 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1856)));
  /* 2474f4: str x19, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 19));
  }
  /* 2474f8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2389244));
  fn2_24b720(c);
  /* 2474fc: ldr d0, [sp, #8] */
  arc_du_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 247500: b #0x247458 */
  goto L_247458;
}

void fn2_249024(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078252068));
  /* 249024: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 249028: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 24902c: str x21, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 21));
  /* 249030: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 249034: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 249038: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24903c: add x8, x8, #0x948 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2376)));
  /* 249040: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 249044: tbz w8, #0, #0x249088 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_249088;
L_249048:;
  /* 249048: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24904c: stp x1, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 249050: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 249054: ldr x8, [x8, #0x940] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2368))));
  /* 249058: mov x10, sp */
  ARC_X_W(c, 10, (c)->sp);
  /* 24905c: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 249060: add x1, sp, #0x10 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(16)));
  /* 249064: mov w2, #2 */
  ARC_W_W(c, 2, UINT64_C(2));
  /* 249068: stp x9, x10, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 24906c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396272));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 249070: ldr x0, [x29, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 249074: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 249078: ldr x21, [sp, #0x30] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(48))));
  /* 24907c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 249080: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 249084: ret  */
  return;
L_249088:;
  /* 249088: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24908c: add x8, x8, #0x948 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2376)));
  /* 249090: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 249094: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 249098: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 24909c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396320));
  fn2_24b710(c);
  /* 2490a0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 2490a4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 2490a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 2490ac: cbz w8, #0x249048 */
  if ((ARC_W_R(c, 8)) == 0) goto L_249048;
  /* 2490b0: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 2490b4: adrp x1, #0x22000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(139264)));
  /* 2490b8: add x1, x1, #0xe03 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(3587)));
  /* 2490bc: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 2490c0: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 2490c4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 2490c8: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 2490cc: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396368));
  fn2_1b8fd4(c);
  /* 2490d0: mov w1, #0xb5fa */
  ARC_W_W(c, 1, UINT64_C(46586));
  /* 2490d4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 2490d8: movk w1, #0xbac4, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(3133407232)));
  /* 2490dc: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396384));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 2490e0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 2490e4: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 2490e8: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396396));
  fn2_1d2d24(c);
  /* 2490ec: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 2490f0: add x0, x0, #0x940 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2368)));
  /* 2490f4: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 2490f8: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2396412));
  fn2_24b720(c);
  /* 2490fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 249100: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 249104: b #0x249048 */
  goto L_249048;
}

void fn2_24aa1c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078258716));
  /* 24aa1c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 24aa20: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 24aa24: str x21, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 21));
  /* 24aa28: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 24aa2c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 24aa30: adrp x9, #0x265000 */
  ARC_X_W(c, 9, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24aa34: add x9, x9, #0xb48 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2888)));
  /* 24aa38: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 24aa3c: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 24aa40: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 24aa44: tbz w9, #0, #0x24aa94 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_24aa94;
L_24aa48:;
  /* 24aa48: adrp x8, #0x265000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24aa4c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 24aa50: ldr x21, [x8, #0xb40] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(2880))));
  /* 24aa54: bl #0x1ddc90 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402904));
  fn2_1ddc90(c);
  /* 24aa58: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 24aa5c: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 24aa60: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 24aa64: str x20, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 20));
  /* 24aa68: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402924));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 24aa6c: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 24aa70: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 24aa74: bl #0x1ddca4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402936));
  fn2_1ddca4(c);
  /* 24aa78: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 24aa7c: bl #0x1dde08 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402944));
  fn2_1dde08(c);
  /* 24aa80: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 24aa84: ldr x21, [sp, #0x20] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(32))));
  /* 24aa88: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 24aa8c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 24aa90: ret  */
  return;
L_24aa94:;
  /* 24aa94: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24aa98: add x0, x0, #0xb48 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2888)));
  /* 24aa9c: bl #0x24b710 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2402976));
  fn2_24b710(c);
  /* 24aaa0: cbz w0, #0x24aa48 */
  if ((ARC_W_R(c, 0)) == 0) goto L_24aa48;
  /* 24aaa4: adrp x8, #0x258000 */
  ARC_X_W(c, 8, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24aaa8: adrp x1, #0x27000 */
  ARC_X_W(c, 1, (arc_image_bases[2] + UINT64_C(159744)));
  /* 24aaac: add x1, x1, #0x8d0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2256)));
  /* 24aab0: ldr x8, [x8, #0x800] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2048))));
  /* 24aab4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 24aab8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 24aabc: ldr x21, [x8] */
  ARC_X_W(c, 21, arc_ld64(ARC_X_R(c, 8)));
  /* 24aac0: bl #0x1b8fd4 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2403012));
  fn2_1b8fd4(c);
  /* 24aac4: mov w1, #0xc52a */
  ARC_W_W(c, 1, UINT64_C(50474));
  /* 24aac8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 24aacc: movk w1, #0xafab, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(2947219456)));
  /* 24aad0: blr x21 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2403028));
  arc_dispatch(c, ARC_X_R(c, 21));
  /* 24aad4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 24aad8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 24aadc: bl #0x1d2d24 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2403040));
  fn2_1d2d24(c);
  /* 24aae0: adrp x0, #0x265000 */
  ARC_X_W(c, 0, (arc_image_bases[2] + UINT64_C(2510848)));
  /* 24aae4: add x0, x0, #0xb40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2880)));
  /* 24aae8: str x21, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 21));
  }
  /* 24aaec: bl #0x24b720 */
  ARC_X_W(c, 30, arc_image_bases[2] + UINT64_C(2403056));
  fn2_24b720(c);
  /* 24aaf0: b #0x24aa48 */
  goto L_24aa48;
}

void fn2_24b7d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(144115188078262224));
  /* 24b7d0: adrp x16, #0x258000 */
  ARC_X_W(c, 16, (arc_image_bases[2] + UINT64_C(2457600)));
  /* 24b7d4: ldr x17, [x16, #0xb30] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2864))));
  /* 24b7d8: add x16, x16, #0xb30 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2864)));
  /* 24b7dc: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
}

