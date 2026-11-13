#include "lifted.h"

void fn1_9c898(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038569112));
  /* 9c898: bti c */
  /* bti: no architectural effect here */
  /* 9c89c: b #0xa0b40 */
  fn1_a0b40(c); return;
}

void fn1_a1118(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038587672));
  /* a1118: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a111c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1120: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a1124: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a1128: ldr x1, [x1, #0x8c0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2240))));
  /* a112c: bl #0xa0c40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659760));
  fn1_a0c40(c);
  /* a1130: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1134: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a1138: ret  */
  return;
}

void fn1_a24dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592732));
  /* a24dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a24e0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a24e4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a24e8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a24ec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a24f0: nop  */
  /* nop: no architectural effect here */
  /* a24f4: adr x0, #0x1576b0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406640)));
  /* a24f8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664828));
  fn1_142518(c);
  /* a24fc: adrp x8, #0x157000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a2500: ldr x14, [x8, #0x6d8] */
  ARC_X_W(c, 14, arc_ld64((ARC_X_R(c, 8) + INT64_C(1752))));
  /* a2504: cbz x14, #0xa251c */
  if ((ARC_X_R(c, 14)) == 0) goto L_a251c;
  /* a2508: adrp x9, #0x157000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a250c: add x9, x9, #0x8e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2272)));
  /* a2510: cmp x14, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 9));
  /* a2514: b.ne #0xa2534 */
  if (ARC_COND(c, 1)) goto L_a2534;
  /* a2518: b #0xa2598 */
  goto L_a2598;
L_a251c:;
  /* a251c: mov w9, #0x80 */
  ARC_W_W(c, 9, UINT64_C(128));
  /* a2520: adrp x14, #0x157000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(1404928)));
  /* a2524: add x14, x14, #0x6ec */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(1772)));
  /* a2528: movk w9, #0x7d, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(8192000)));
  /* a252c: str x14, [x8, #0x6d8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(1752)), ARC_X_R(c, 14));
  /* a2530: str w9, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 9));
L_a2534:;
  /* a2534: add x9, x19, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(3)));
  /* a2538: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* a253c: nop  */
  /* nop: no architectural effect here */
  /* a2540: adr x11, #0x1576e0 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(1406688)));
  /* a2544: lsr x12, x9, #2 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63)));
  /* a2548: add x13, x12, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) + UINT64_C(1)));
L_a254c:;
  /* a254c: add x19, x14, #4 */
  ARC_X_W(c, 19, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* a2550: tst x19, #0xf */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 19) & UINT64_C(15)));
  /* a2554: b.ne #0xa2620 */
  if (ARC_COND(c, 1)) goto L_a2620;
  /* a2558: ldrh w15, [x14, #2] */
  ARC_W_W(c, 15, arc_ld16((ARC_X_R(c, 14) + INT64_C(2))));
  /* a255c: mov x9, x14 */
  ARC_X_W(c, 9, ARC_X_R(c, 14));
  /* a2560: sub w14, w15, w13 */
  ARC_W_W(c, 14, (ARC_W_R(c, 15) - ARC_W_R(c, 13)));
  /* a2564: cmp x13, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 15));
  /* a2568: and w14, w14, #3 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) & UINT64_C(3)));
  /* a256c: csel x14, x14, xzr, lo */
  ARC_X_W(c, 14, (ARC_COND(c, 3) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 31)));
  /* a2570: add x14, x14, x13 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + ARC_X_R(c, 13)));
  /* a2574: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* a2578: b.lo #0xa25a0 */
  if (ARC_COND(c, 3)) goto L_a25a0;
  /* a257c: cmp x12, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* a2580: b.lo #0xa25e0 */
  if (ARC_COND(c, 3)) goto L_a25e0;
  /* a2584: ldrh w10, [x9] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 9)));
  /* a2588: add x14, x11, x10, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* a258c: cmp x10, #0x80 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(128));
  /* a2590: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* a2594: b.ne #0xa254c */
  if (ARC_COND(c, 1)) goto L_a254c;
L_a2598:;
  /* a2598: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* a259c: b #0xa2600 */
  goto L_a2600;
L_a25a0:;
  /* a25a0: sub w8, w15, w14 */
  ARC_W_W(c, 8, (ARC_W_R(c, 15) - ARC_W_R(c, 14)));
  /* a25a4: add x10, x9, w8, uxth #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint16_t)(ARC_W_R(c, 8)))) << 2)));
  /* a25a8: strh w8, [x9, #2] */
  arc_st16((ARC_X_R(c, 9) + INT64_C(2)), ARC_W_R(c, 8));
  /* a25ac: add x19, x10, #4 */
  ARC_X_W(c, 19, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* a25b0: strh wzr, [x10] */
  arc_st16(ARC_X_R(c, 10), ARC_W_R(c, 31));
  /* a25b4: tst x19, #0xf */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 19) & UINT64_C(15)));
  /* a25b8: strh w14, [x10, #2] */
  arc_st16((ARC_X_R(c, 10) + INT64_C(2)), ARC_W_R(c, 14));
  /* a25bc: b.eq #0xa2600 */
  if (ARC_COND(c, 0)) goto L_a2600;
  /* a25c0: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* a25c4: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* a25c8: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a25cc: add x1, x1, #0x254 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(596)));
  /* a25d0: nop  */
  /* nop: no architectural effect here */
  /* a25d4: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* a25d8: mov w2, #0xa7 */
  ARC_W_W(c, 2, UINT64_C(167));
  /* a25dc: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665056));
  fn1_a23d8(c);
L_a25e0:;
  /* a25e0: ldrh w12, [x9] */
  ARC_W_W(c, 12, arc_ld16(ARC_X_R(c, 9)));
  /* a25e4: cbz x10, #0xa25f4 */
  if ((ARC_X_R(c, 10)) == 0) goto L_a25f4;
  /* a25e8: strh w12, [x10] */
  arc_st16(ARC_X_R(c, 10), ARC_W_R(c, 12));
  /* a25ec: strh wzr, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* a25f0: b #0xa2600 */
  goto L_a2600;
L_a25f4:;
  /* a25f4: add x10, x11, x12, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* a25f8: strh wzr, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* a25fc: str x10, [x8, #0x6d8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(1752)), ARC_X_R(c, 10));
L_a2600:;
  /* a2600: nop  */
  /* nop: no architectural effect here */
  /* a2604: adr x0, #0x1576b0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406640)));
  /* a2608: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665100));
  fn1_142560(c);
  /* a260c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a2610: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a2614: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2618: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a261c: ret  */
  return;
L_a2620:;
  /* a2620: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* a2624: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* a2628: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a262c: add x1, x1, #0x254 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(596)));
  /* a2630: nop  */
  /* nop: no architectural effect here */
  /* a2634: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* a2638: mov w2, #0x92 */
  ARC_W_W(c, 2, UINT64_C(146));
  /* a263c: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665152));
  fn1_a23d8(c);
  /* a2640: b #0xa2648 */
  goto L_a2648;
  /* a2644: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665160));
  fn1_a1454(c);
L_a2648:;
  /* a2648: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a264c: nop  */
  /* nop: no architectural effect here */
  /* a2650: adr x0, #0x1576b0 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406640)));
  /* a2654: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665176));
  fn1_142560(c);
  /* a2658: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a265c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665184));
  fn1_9cc20(c);
  /* a2660: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(665188));
  fn1_a1454(c);
}

void fn1_a867c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038617724));
  /* a867c: bti c */
  /* bti: no architectural effect here */
  /* a8680: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a8684: ret  */
  return;
}

void fn1_aec68(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038643816));
  /* aec68: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aec6c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aec70: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* aec74: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aec78: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aec7c: ldr x20, [x0, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* aec80: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* aec84: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* aec88: cbz x20, #0xaece4 */
  if ((ARC_X_R(c, 20)) == 0) goto L_aece4;
  /* aec8c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* aec90: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aec94: ldr x22, [x21, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(16))));
  /* aec98: add x10, x8, x20 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* aec9c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* aeca0: b.ls #0xaecc8 */
  if (ARC_COND(c, 9)) goto L_aecc8;
  /* aeca4: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* aeca8: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* aecac: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* aecb0: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* aecb4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aecb8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715964));
  fn1_142878(c);
  /* aecbc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aecc0: cbz x0, #0xaee3c */
  if ((ARC_X_R(c, 0)) == 0) goto L_aee3c;
  /* aecc4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_aecc8:;
  /* aecc8: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* aeccc: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* aecd0: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* aecd4: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(715992));
  fn1_1449d8(c);
  /* aecd8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aecdc: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* aece0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_aece4:;
  /* aece4: ldr x20, [x21, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 21) + INT64_C(32))));
  /* aece8: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* aecec: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* aecf0: ubfiz w8, w8, #0xa, #6 */
  ARC_W_W(c, 8, ((uint32_t)((((uint32_t)(ARC_W_R(c, 8))) & UINT64_C(63))) << 10));
  /* aecf4: ubfiz w9, w9, #0xa, #6 */
  ARC_W_W(c, 9, ((uint32_t)((((uint32_t)(ARC_W_R(c, 9))) & UINT64_C(63))) << 10));
  /* aecf8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* aecfc: b.ls #0xaed48 */
  if (ARC_COND(c, 9)) goto L_aed48;
  /* aed00: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* aed04: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aed08: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aed0c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* aed10: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716052));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* aed14: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* aed18: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* aed1c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* aed20: b.eq #0xaee28 */
  if (ARC_COND(c, 0)) goto L_aee28;
  /* aed24: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* aed28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aed2c: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* aed30: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aed34: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aed38: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aed3c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aed40: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aed44: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_aed48:;
  /* aed48: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* aed4c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* aed50: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aed54: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* aed58: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aed5c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* aed60: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aed64: b.ls #0xaed90 */
  if (ARC_COND(c, 9)) goto L_aed90;
  /* aed68: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* aed6c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* aed70: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* aed74: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* aed78: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aed7c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716160));
  fn1_142878(c);
  /* aed80: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aed84: cbz x0, #0xaee40 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aee40;
  /* aed88: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aed8c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_aed90:;
  /* aed90: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* aed94: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* aed98: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* aed9c: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* aeda0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aeda4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aeda8: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* aedac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716208));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* aedb0: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* aedb4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* aedb8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* aedbc: b.eq #0xaedd4 */
  if (ARC_COND(c, 0)) goto L_aedd4;
  /* aedc0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* aedc4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aedc8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* aedcc: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* aedd0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716244));
  arc_dispatch(c, ARC_X_R(c, 8));
L_aedd4:;
  /* aedd4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* aedd8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* aeddc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* aede0: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* aede4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* aede8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* aedec: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* aedf0: b.ls #0xaee1c */
  if (ARC_COND(c, 9)) goto L_aee1c;
  /* aedf4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* aedf8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* aedfc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* aee00: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* aee04: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* aee08: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716300));
  fn1_142878(c);
  /* aee0c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* aee10: cbz x0, #0xaee44 */
  if ((ARC_X_R(c, 0)) == 0) goto L_aee44;
  /* aee14: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* aee18: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_aee1c:;
  /* aee1c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* aee20: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* aee24: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_aee28:;
  /* aee28: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aee2c: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* aee30: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aee34: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aee38: ret  */
  return;
L_aee3c:;
  /* aee3c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716352));
  fn1_1427b8(c);
L_aee40:;
  /* aee40: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716356));
  fn1_1427b8(c);
L_aee44:;
  /* aee44: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(716360));
  fn1_1427b8(c);
}

void fn1_b399c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038663580));
  /* b399c: bti c */
  /* bti: no architectural effect here */
  /* b39a0: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b39a4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b39a8: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b39ac: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_b76e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038679272));
  /* b76e8: bti c */
  /* bti: no architectural effect here */
  /* b76ec: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b76f0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_ba0e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038690016));
  /* ba0e0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ba0e4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ba0e8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ba0ec: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ba0f0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ba0f4: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ba0f8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* ba0fc: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ba100: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* ba104: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* ba108: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ba10c: b.hi #0xba130 */
  if (ARC_COND(c, 8)) goto L_ba130;
  /* ba110: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ba114: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba118: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762140));
  fn1_1428a8(c);
  /* ba11c: cbz x0, #0xba188 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba188;
  /* ba120: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ba124: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba128: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* ba12c: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_ba130:;
  /* ba130: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ba134: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* ba138: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ba13c: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba140: adrp x9, #0x14c000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1359872)));
  /* ba144: add x9, x9, #0x490 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1168)));
  /* ba148: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* ba14c: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* ba150: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ba154: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* ba158: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* ba15c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* ba160: and w8, w9, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ba164: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* ba168: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* ba16c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ba170: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* ba174: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba178: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ba17c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba180: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba184: ret  */
  return;
L_ba188:;
  /* ba188: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(762252));
  fn1_142488(c);
}

void fn1_bd828(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704168));
  /* bd828: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bd82c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd830: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bd834: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776248));
  fn1_1428f0(c);
L_bd838:;
  /* bd838: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd83c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd840: ret  */
  return;
  /* bd844: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776264));
  fn1_142548(c);
  /* bd848: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776268));
  fn1_142980(c);
  /* bd84c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* bd850: b #0xbd838 */
  goto L_bd838;
  /* bd854: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776280));
  fn1_a1454(c);
}

void fn1_c9d28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038754600));
L_c9d28:;
  /* c9d28: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* c9d2c: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* c9d30: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c9d34: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* c9d38: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c9d3c: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c9d40: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c9d44: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c9d48: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* c9d4c: mov w26, #2 */
  ARC_W_W(c, 26, UINT64_C(2));
  /* c9d50: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
  /* c9d54: mov w28, #4 */
  ARC_W_W(c, 28, UINT64_C(4));
  /* c9d58: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c9d5c: dup v16.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[16] = _t; }
  /* c9d60: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* c9d64: dup v18.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[18] = _t; }
  /* c9d68: ldr q19, [x8, #0xa80] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2688)) + 8));
  /* c9d6c: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* c9d70: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c9d74: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c9d78: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* c9d7c: mov x21, #-1 */
  ARC_X_W(c, 21, UINT64_C(18446744073709551615));
  /* c9d80: stur w3, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 3));
  /* c9d84: stur q16, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[16].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[16].u64[1]);
  /* c9d88: stp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[18].u64[0]);
    arc_st64(_pa + 8, (c)->q[18].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* c9d8c: str q19, [sp] */
  arc_st64((c)->sp, (c)->q[19].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[19].u64[1]);
L_c9d90:;
  /* c9d90: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c9d94:;
  /* c9d94: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* c9d98: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* c9d9c: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* c9da0: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* c9da4: b.gt #0xc9db8 */
  if (ARC_COND(c, 12)) goto L_c9db8;
  /* c9da8: b.lo #0xca714 */
  if (ARC_COND(c, 3)) goto L_ca714;
  /* c9dac: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c9db0: b.ne #0xc9dd0 */
  if (ARC_COND(c, 1)) goto L_c9dd0;
  /* c9db4: b #0xca638 */
  goto L_ca638;
L_c9db8:;
  /* c9db8: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* c9dbc: b.eq #0xca654 */
  if (ARC_COND(c, 0)) goto L_ca654;
  /* c9dc0: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* c9dc4: b.eq #0xca6a0 */
  if (ARC_COND(c, 0)) goto L_ca6a0;
  /* c9dc8: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* c9dcc: b.eq #0xca580 */
  if (ARC_COND(c, 0)) goto L_ca580;
L_c9dd0:;
  /* c9dd0: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* c9dd4: b.le #0xca738 */
  if (ARC_COND(c, 13)) goto L_ca738;
  /* c9dd8: cbz x22, #0xca7b4 */
  if ((ARC_X_R(c, 22)) == 0) goto L_ca7b4;
  /* c9ddc: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* c9de0: ldur x10, [x20, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c9de4: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* c9de8: add x9, x19, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* c9dec: b.lo #0xc9f24 */
  if (ARC_COND(c, 3)) goto L_c9f24;
  /* c9df0: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* c9df4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* c9df8: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9dfc: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9e00: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* c9e04: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* c9e08: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c9e0c: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* c9e10: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* c9e14: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9e18: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9e1c: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* c9e20: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* c9e24: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* c9e28: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* c9e2c: csel x10, x10, x11, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* c9e30: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* c9e34: ldp x11, x10, [x9, #-8] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* c9e38: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* c9e3c: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* c9e40: ldur x8, [x20, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* c9e44: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* c9e48: csel x10, x11, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* c9e4c: csel x8, x11, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* c9e50: stur x10, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), ARC_X_R(c, 10));
  /* c9e54: stur x8, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 8));
  /* c9e58: ldur x8, [x20, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* c9e5c: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* c9e60: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* c9e64: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9e68: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9e6c: stur x11, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), ARC_X_R(c, 11));
  /* c9e70: ldur x11, [x9, #-8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* c9e74: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* c9e78: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* c9e7c: csel x10, x10, x11, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* c9e80: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* c9e84: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* c9e88: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* c9e8c: stur x8, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 8));
  /* c9e90: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* c9e94: ldur x10, [x20, #-0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* c9e98: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* c9e9c: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9ea0: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9ea4: stur x11, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), ARC_X_R(c, 11));
  /* c9ea8: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* c9eac: ldur x8, [x20, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* c9eb0: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* c9eb4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* c9eb8: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9ebc: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9ec0: stur x11, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), ARC_X_R(c, 11));
  /* c9ec4: ldr x11, [x9, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* c9ec8: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* c9ecc: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* c9ed0: csel x10, x10, x11, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* c9ed4: str x10, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 10));
  /* c9ed8: ldp x11, x10, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* c9edc: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* c9ee0: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* c9ee4: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* c9ee8: csel x12, x11, x8, gt */
  ARC_X_W(c, 12, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* c9eec: csel x8, x11, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* c9ef0: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* c9ef4: csel x11, x12, x10, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* c9ef8: csel x12, x12, x10, gt */
  ARC_X_W(c, 12, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* c9efc: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* c9f00: csel x10, x10, x8, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* c9f04: csel x8, x8, x11, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* c9f08: stur x10, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 10));
  /* c9f0c: stp x8, x12, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* c9f10: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* c9f14: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* c9f18: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c9f1c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* c9f20: b #0xc9f74 */
  goto L_c9f74;
L_c9f24:;
  /* c9f24: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* c9f28: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* c9f2c: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9f30: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9f34: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* c9f38: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* c9f3c: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c9f40: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* c9f44: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* c9f48: csel x11, x8, x10, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9f4c: csel x8, x8, x10, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* c9f50: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* c9f54: ldr x11, [x19] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 19)));
  /* c9f58: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* c9f5c: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* c9f60: csel x10, x10, x11, lt */
  ARC_X_W(c, 10, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* c9f64: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c9f68: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* c9f6c: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* c9f70: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_c9f74:;
  /* c9f74: ldur w9, [x29, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* c9f78: sub x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* c9f7c: tbnz w9, #0, #0xc9f8c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_c9f8c;
  /* c9f80: ldur x9, [x19, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(-8))));
  /* c9f84: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* c9f88: b.ge #0xca4b0 */
  if (ARC_COND(c, 10)) goto L_ca4b0;
L_c9f8c:;
  /* c9f8c: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c9f90: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* c9f94: b.ge #0xc9fac */
  if (ARC_COND(c, 10)) goto L_c9fac;
  /* c9f98: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c9f9c:;
  /* c9f9c: ldr x10, [x9, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* c9fa0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* c9fa4: b.ge #0xc9f9c */
  if (ARC_COND(c, 10)) goto L_c9f9c;
  /* c9fa8: b #0xc9fcc */
  goto L_c9fcc;
L_c9fac:;
  /* c9fac: add x10, x19, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(8)));
L_c9fb0:;
  /* c9fb0: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* c9fb4: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* c9fb8: b.hs #0xc9fcc */
  if (ARC_COND(c, 2)) goto L_c9fcc;
  /* c9fbc: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c9fc0: ldr x11, [x10], #8 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* c9fc4: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* c9fc8: b.ge #0xc9fb0 */
  if (ARC_COND(c, 10)) goto L_c9fb0;
L_c9fcc:;
  /* c9fcc: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c9fd0: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* c9fd4: b.hs #0xc9fe8 */
  if (ARC_COND(c, 2)) goto L_c9fe8;
  /* c9fd8: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_c9fdc:;
  /* c9fdc: ldr x11, [x10, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-8));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* c9fe0: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* c9fe4: b.lt #0xc9fdc */
  if (ARC_COND(c, 11)) goto L_c9fdc;
L_c9fe8:;
  /* c9fe8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c9fec: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c9ff0: b.hs #0xca008 */
  if (ARC_COND(c, 2)) goto L_ca008;
  /* c9ff4: ldr x12, [x10] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 10)));
  /* c9ff8: ldr x13, [x9] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 9)));
  /* c9ffc: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* ca000: str x12, [x11], #8 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 12));
  }
  /* ca004: str x13, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 13));
L_ca008:;
  /* ca008: sub x12, x10, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(8)));
  /* ca00c: sub x14, x12, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* ca010: cmp x14, #0x3f1 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1009));
  /* ca014: b.lt #0xca178 */
  if (ARC_COND(c, 11)) goto L_ca178;
  /* ca018: dup v0.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[0] = _t; }
  /* ca01c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* ca020: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* ca024: b #0xca050 */
  goto L_ca050;
L_ca028:;
  /* ca028: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* ca02c: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* ca030: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* ca034: add x11, x11, x15, lsl #9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 9)));
  /* ca038: csel x15, x4, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 31)));
  /* ca03c: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* ca040: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* ca044: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* ca048: cmp x15, #0x3f0 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1008));
  /* ca04c: b.le #0xca188 */
  if (ARC_COND(c, 13)) goto L_ca188;
L_ca050:;
  /* ca050: cbz x14, #0xca060 */
  if ((ARC_X_R(c, 14)) == 0) goto L_ca060;
  /* ca054: cbz x13, #0xca0c0 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ca0c0;
L_ca058:;
  /* ca058: cbnz x14, #0xca134 */
  if ((ARC_X_R(c, 14)) != 0) goto L_ca134;
  /* ca05c: b #0xca028 */
  goto L_ca028;
L_ca060:;
  /* ca060: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* ca064: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* ca068: add x14, x11, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* ca06c: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* ca070: mov w15, #0x40 */
  ARC_W_W(c, 15, UINT64_C(64));
L_ca074:;
  /* ca074: ldp q4, q5, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ca078: add v6.2d, v3.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[16].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[16].u64[1];
    (c)->q[6] = _t; }
  /* ca07c: subs x15, x15, #4 */
  ARC_X_W(c, 15, arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4)));
  /* ca080: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* ca084: cmge v4.2d, v4.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[4].i64[0] >= (c)->q[0].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[4].i64[1] >= (c)->q[0].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* ca088: cmge v5.2d, v5.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[5].i64[0] >= (c)->q[0].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[5].i64[1] >= (c)->q[0].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* ca08c: and v4.16b, v4.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[17].u8[15];
    (c)->q[4] = _t; }
  /* ca090: and v5.16b, v5.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[17].u8[15];
    (c)->q[5] = _t; }
  /* ca094: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* ca098: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* ca09c: add v3.2d, v3.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[18].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[18].u64[1];
    (c)->q[3] = _t; }
  /* ca0a0: orr v1.16b, v4.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* ca0a4: orr v2.16b, v5.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* ca0a8: b.ne #0xca074 */
  if (ARC_COND(c, 1)) goto L_ca074;
  /* ca0ac: orr v1.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* ca0b0: ext v2.16b, v1.16b, v1.16b, #8 */
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
    (c)->q[2] = _t; }
  /* ca0b4: orr v1.8b, v1.8b, v2.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[2].u8[7];
    (c)->q[1] = _t; }
  /* ca0b8: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* ca0bc: cbnz x13, #0xca058 */
  if ((ARC_X_R(c, 13)) != 0) goto L_ca058;
L_ca0c0:;
  /* ca0c0: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* ca0c4: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* ca0c8: sub x13, x12, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* ca0cc: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* ca0d0: mov w15, #0x40 */
  ARC_W_W(c, 15, UINT64_C(64));
L_ca0d4:;
  /* ca0d4: ldp q5, q4, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ca0d8: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* ca0dc: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* ca0e0: sub x15, x15, #4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* ca0e4: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* ca0e8: ext v4.16b, v4.16b, v4.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[8];
    _t.u8[1] = (c)->q[4].u8[9];
    _t.u8[2] = (c)->q[4].u8[10];
    _t.u8[3] = (c)->q[4].u8[11];
    _t.u8[4] = (c)->q[4].u8[12];
    _t.u8[5] = (c)->q[4].u8[13];
    _t.u8[6] = (c)->q[4].u8[14];
    _t.u8[7] = (c)->q[4].u8[15];
    _t.u8[8] = (c)->q[4].u8[0];
    _t.u8[9] = (c)->q[4].u8[1];
    _t.u8[10] = (c)->q[4].u8[2];
    _t.u8[11] = (c)->q[4].u8[3];
    _t.u8[12] = (c)->q[4].u8[4];
    _t.u8[13] = (c)->q[4].u8[5];
    _t.u8[14] = (c)->q[4].u8[6];
    _t.u8[15] = (c)->q[4].u8[7];
    (c)->q[4] = _t; }
  /* ca0ec: ext v5.16b, v5.16b, v5.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[8];
    _t.u8[1] = (c)->q[5].u8[9];
    _t.u8[2] = (c)->q[5].u8[10];
    _t.u8[3] = (c)->q[5].u8[11];
    _t.u8[4] = (c)->q[5].u8[12];
    _t.u8[5] = (c)->q[5].u8[13];
    _t.u8[6] = (c)->q[5].u8[14];
    _t.u8[7] = (c)->q[5].u8[15];
    _t.u8[8] = (c)->q[5].u8[0];
    _t.u8[9] = (c)->q[5].u8[1];
    _t.u8[10] = (c)->q[5].u8[2];
    _t.u8[11] = (c)->q[5].u8[3];
    _t.u8[12] = (c)->q[5].u8[4];
    _t.u8[13] = (c)->q[5].u8[5];
    _t.u8[14] = (c)->q[5].u8[6];
    _t.u8[15] = (c)->q[5].u8[7];
    (c)->q[5] = _t; }
  /* ca0f0: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* ca0f4: cmgt v4.2d, v0.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].i64[0] > (c)->q[4].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[0].i64[1] > (c)->q[4].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* ca0f8: cmgt v5.2d, v0.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].i64[0] > (c)->q[5].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[0].i64[1] > (c)->q[5].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* ca0fc: and v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* ca100: and v5.16b, v5.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* ca104: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* ca108: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* ca10c: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* ca110: orr v1.16b, v4.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* ca114: orr v2.16b, v5.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* ca118: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* ca11c: cbnz x15, #0xca0d4 */
  if ((ARC_X_R(c, 15)) != 0) goto L_ca0d4;
  /* ca120: orr v1.16b, v2.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* ca124: ext v2.16b, v1.16b, v1.16b, #8 */
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
    (c)->q[2] = _t; }
  /* ca128: orr v1.8b, v1.8b, v2.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[2].u8[7];
    (c)->q[1] = _t; }
  /* ca12c: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* ca130: cbz x14, #0xca028 */
  if ((ARC_X_R(c, 14)) == 0) goto L_ca028;
L_ca134:;
  /* ca134: cbz x13, #0xca028 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ca028;
L_ca138:;
  /* ca138: rbit x15, x13 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 13)));
  /* ca13c: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* ca140: sub x17, x13, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* ca144: sub x3, x14, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* ca148: and x13, x17, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) & ARC_X_R(c, 13)));
  /* ca14c: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* ca150: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* ca154: and x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) & ARC_X_R(c, 14)));
  /* ca158: sub x15, x12, x15, lsl #3 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* ca15c: ldr x0, [x11, x16, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3))));
  /* ca160: ldr x1, [x15] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 15)));
  /* ca164: str x1, [x11, x16, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3)), ARC_X_R(c, 1));
  /* ca168: str x0, [x15] */
  arc_st64(ARC_X_R(c, 15), ARC_X_R(c, 0));
  /* ca16c: cbz x13, #0xca028 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ca028;
  /* ca170: cbnz x14, #0xca138 */
  if ((ARC_X_R(c, 14)) != 0) goto L_ca138;
  /* ca174: b #0xca028 */
  goto L_ca028;
L_ca178:;
  /* ca178: asr x15, x14, #3 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(3)) & 63))));
  /* ca17c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* ca180: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* ca184: b #0xca1ac */
  goto L_ca1ac;
L_ca188:;
  /* ca188: asr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63))));
  /* ca18c: orr x17, x13, x14 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) | ARC_X_R(c, 14)));
  /* ca190: cbz x17, #0xca1ac */
  if ((ARC_X_R(c, 17)) == 0) goto L_ca1ac;
  /* ca194: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* ca198: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* ca19c: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* ca1a0: cbz x14, #0xca1bc */
  if ((ARC_X_R(c, 14)) == 0) goto L_ca1bc;
  /* ca1a4: cbnz w16, #0xca28c */
  if ((ARC_W_R(c, 16)) != 0) goto L_ca28c;
  /* ca1a8: b #0xca350 */
  goto L_ca350;
L_ca1ac:;
  /* ca1ac: add x14, x15, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* ca1b0: add x15, x14, x14, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 14)) >> 63)));
  /* ca1b4: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* ca1b8: sub x0, x14, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
L_ca1bc:;
  /* ca1bc: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* ca1c0: b.lt #0xca1dc */
  if (ARC_COND(c, 11)) goto L_ca1dc;
  /* ca1c4: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* ca1c8: b.hs #0xca1e4 */
  if (ARC_COND(c, 2)) goto L_ca1e4;
  /* ca1cc: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* ca1d0: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* ca1d4: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* ca1d8: b #0xca260 */
  goto L_ca260;
L_ca1dc:;
  /* ca1dc: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* ca1e0: b #0xca280 */
  goto L_ca280;
L_ca1e4:;
  /* ca1e4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* ca1e8: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* ca1ec: and x17, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* ca1f0: dup v2.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[2] = _t; }
  /* ca1f4: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* ca1f8: add x1, x11, x17, lsl #3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 3)));
  /* ca1fc: add x14, x11, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* ca200: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
L_ca204:;
  /* ca204: ldp q4, q5, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ca208: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* ca20c: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* ca210: subs x3, x3, #4 */
  ARC_X_W(c, 3, arc_sub64(c, ARC_X_R(c, 3), UINT64_C(4)));
  /* ca214: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* ca218: cmge v4.2d, v4.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[4].i64[0] >= (c)->q[2].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[4].i64[1] >= (c)->q[2].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* ca21c: cmge v5.2d, v5.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[5].i64[0] >= (c)->q[2].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[5].i64[1] >= (c)->q[2].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* ca220: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* ca224: and v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* ca228: and v5.16b, v5.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* ca22c: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* ca230: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* ca234: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* ca238: orr v0.16b, v4.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* ca23c: orr v1.16b, v5.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* ca240: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* ca244: b.ne #0xca204 */
  if (ARC_COND(c, 1)) goto L_ca204;
  /* ca248: orr v0.16b, v1.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* ca24c: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* ca250: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* ca254: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* ca258: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* ca25c: b.eq #0xca280 */
  if (ARC_COND(c, 0)) goto L_ca280;
L_ca260:;
  /* ca260: ldr x3, [x1], #8 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_a));
  }
  /* ca264: cmp x3, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 8));
  /* ca268: cset w3, ge */
  ARC_W_W(c, 3, (ARC_COND(c, 10) ? 1 : 0));
  /* ca26c: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* ca270: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* ca274: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* ca278: orr x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) | ARC_X_R(c, 14)));
  /* ca27c: b.ne #0xca260 */
  if (ARC_COND(c, 1)) goto L_ca260;
L_ca280:;
  /* ca280: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* ca284: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* ca288: cbz w16, #0xca350 */
  if ((ARC_W_R(c, 16)) == 0) goto L_ca350;
L_ca28c:;
  /* ca28c: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* ca290: b.lt #0xca350 */
  if (ARC_COND(c, 11)) goto L_ca350;
  /* ca294: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* ca298: b.hs #0xca2ac */
  if (ARC_COND(c, 2)) goto L_ca2ac;
  /* ca29c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* ca2a0: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* ca2a4: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* ca2a8: b #0xca330 */
  goto L_ca330;
L_ca2ac:;
  /* ca2ac: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* ca2b0: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* ca2b4: and x16, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* ca2b8: dup v2.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[2] = _t; }
  /* ca2bc: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* ca2c0: sub x0, x12, x16, lsl #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* ca2c4: sub x13, x12, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* ca2c8: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
L_ca2cc:;
  /* ca2cc: ldp q5, q4, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ca2d0: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* ca2d4: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* ca2d8: sub x1, x1, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - UINT64_C(4)));
  /* ca2dc: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* ca2e0: ext v4.16b, v4.16b, v4.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[8];
    _t.u8[1] = (c)->q[4].u8[9];
    _t.u8[2] = (c)->q[4].u8[10];
    _t.u8[3] = (c)->q[4].u8[11];
    _t.u8[4] = (c)->q[4].u8[12];
    _t.u8[5] = (c)->q[4].u8[13];
    _t.u8[6] = (c)->q[4].u8[14];
    _t.u8[7] = (c)->q[4].u8[15];
    _t.u8[8] = (c)->q[4].u8[0];
    _t.u8[9] = (c)->q[4].u8[1];
    _t.u8[10] = (c)->q[4].u8[2];
    _t.u8[11] = (c)->q[4].u8[3];
    _t.u8[12] = (c)->q[4].u8[4];
    _t.u8[13] = (c)->q[4].u8[5];
    _t.u8[14] = (c)->q[4].u8[6];
    _t.u8[15] = (c)->q[4].u8[7];
    (c)->q[4] = _t; }
  /* ca2e4: ext v5.16b, v5.16b, v5.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[8];
    _t.u8[1] = (c)->q[5].u8[9];
    _t.u8[2] = (c)->q[5].u8[10];
    _t.u8[3] = (c)->q[5].u8[11];
    _t.u8[4] = (c)->q[5].u8[12];
    _t.u8[5] = (c)->q[5].u8[13];
    _t.u8[6] = (c)->q[5].u8[14];
    _t.u8[7] = (c)->q[5].u8[15];
    _t.u8[8] = (c)->q[5].u8[0];
    _t.u8[9] = (c)->q[5].u8[1];
    _t.u8[10] = (c)->q[5].u8[2];
    _t.u8[11] = (c)->q[5].u8[3];
    _t.u8[12] = (c)->q[5].u8[4];
    _t.u8[13] = (c)->q[5].u8[5];
    _t.u8[14] = (c)->q[5].u8[6];
    _t.u8[15] = (c)->q[5].u8[7];
    (c)->q[5] = _t; }
  /* ca2e8: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* ca2ec: cmgt v4.2d, v2.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[2].i64[0] > (c)->q[4].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[2].i64[1] > (c)->q[4].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* ca2f0: cmgt v5.2d, v2.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[2].i64[0] > (c)->q[5].i64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[2].i64[1] > (c)->q[5].i64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* ca2f4: and v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* ca2f8: and v5.16b, v5.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[7].u8[15];
    (c)->q[5] = _t; }
  /* ca2fc: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* ca300: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* ca304: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* ca308: orr v0.16b, v4.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* ca30c: orr v1.16b, v5.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* ca310: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* ca314: cbnz x1, #0xca2cc */
  if ((ARC_X_R(c, 1)) != 0) goto L_ca2cc;
  /* ca318: orr v0.16b, v1.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* ca31c: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* ca320: ext v1.16b, v0.16b, v0.16b, #8 */
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
    (c)->q[1] = _t; }
  /* ca324: orr v0.8b, v0.8b, v1.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    (c)->q[0] = _t; }
  /* ca328: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* ca32c: b.eq #0xca350 */
  if (ARC_COND(c, 0)) goto L_ca350;
L_ca330:;
  /* ca330: ldr x1, [x0], #0xfffffffffffffff8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-8));
    ARC_X_W(c, 1, arc_ld64(_a));
  }
  /* ca334: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* ca338: cset w1, lt */
  ARC_W_W(c, 1, (ARC_COND(c, 11) ? 1 : 0));
  /* ca33c: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* ca340: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* ca344: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* ca348: orr x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) | ARC_X_R(c, 13)));
  /* ca34c: b.ne #0xca330 */
  if (ARC_COND(c, 1)) goto L_ca330;
L_ca350:;
  /* ca350: cbz x14, #0xca394 */
  if ((ARC_X_R(c, 14)) == 0) goto L_ca394;
  /* ca354: cbz x13, #0xca394 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ca394;
L_ca358:;
  /* ca358: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* ca35c: rbit x0, x14 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 14)));
  /* ca360: sub x1, x13, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* ca364: sub x4, x14, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* ca368: and x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) & ARC_X_R(c, 13)));
  /* ca36c: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* ca370: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* ca374: and x14, x4, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 4) & ARC_X_R(c, 14)));
  /* ca378: sub x16, x12, x16, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* ca37c: ldr x5, [x11, x0, lsl #3] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 3))));
  /* ca380: ldr x3, [x16] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 16)));
  /* ca384: str x3, [x11, x0, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 3)), ARC_X_R(c, 3));
  /* ca388: str x5, [x16] */
  arc_st64(ARC_X_R(c, 16), ARC_X_R(c, 5));
  /* ca38c: cbz x13, #0xca394 */
  if ((ARC_X_R(c, 13)) == 0) goto L_ca394;
  /* ca390: cbnz x14, #0xca358 */
  if ((ARC_X_R(c, 14)) != 0) goto L_ca358;
L_ca394:;
  /* ca394: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* ca398: csel x16, x17, xzr, eq */
  ARC_X_W(c, 16, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* ca39c: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* ca3a0: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* ca3a4: add x23, x11, x16, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* ca3a8: sub x11, x12, x15, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* ca3ac: cbnz x14, #0xca3c8 */
  if ((ARC_X_R(c, 14)) != 0) goto L_ca3c8;
  /* ca3b0: cbnz x13, #0xca400 */
  if ((ARC_X_R(c, 13)) != 0) goto L_ca400;
  /* ca3b4: b #0xca42c */
  goto L_ca42c;
L_ca3b8:;
  /* ca3b8: lsl x12, x21, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 21)) << ((ARC_X_R(c, 12)) & 63)));
  /* ca3bc: sub x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(8)));
  /* ca3c0: bic x14, x14, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 12))));
  /* ca3c4: cbz x14, #0xca428 */
  if ((ARC_X_R(c, 14)) == 0) goto L_ca428;
L_ca3c8:;
  /* ca3c8: clz x12, x14 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 14)));
  /* ca3cc: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* ca3d0: add x13, x23, x12, lsl #3 */
  ARC_X_W(c, 13, (ARC_X_R(c, 23) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* ca3d4: cmp x11, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 13));
  /* ca3d8: b.eq #0xca3b8 */
  if (ARC_COND(c, 0)) goto L_ca3b8;
  /* ca3dc: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* ca3e0: ldr x16, [x13] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 13)));
  /* ca3e4: str x15, [x13] */
  arc_st64(ARC_X_R(c, 13), ARC_X_R(c, 15));
  /* ca3e8: str x16, [x11] */
  arc_st64(ARC_X_R(c, 11), ARC_X_R(c, 16));
  /* ca3ec: b #0xca3b8 */
  goto L_ca3b8;
L_ca3f0:;
  /* ca3f0: lsl x12, x21, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 21)) << ((ARC_X_R(c, 12)) & 63)));
  /* ca3f4: add x23, x23, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* ca3f8: bic x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 12))));
  /* ca3fc: cbz x13, #0xca42c */
  if ((ARC_X_R(c, 13)) == 0) goto L_ca42c;
L_ca400:;
  /* ca400: clz x12, x13 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 13)));
  /* ca404: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* ca408: sub x14, x11, x12, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* ca40c: cmp x23, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 14));
  /* ca410: b.eq #0xca3f0 */
  if (ARC_COND(c, 0)) goto L_ca3f0;
  /* ca414: ldr x15, [x23] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 23)));
  /* ca418: ldr x16, [x14] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 14)));
  /* ca41c: str x15, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* ca420: str x16, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 16));
  /* ca424: b #0xca3f0 */
  goto L_ca3f0;
L_ca428:;
  /* ca428: add x23, x11, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + UINT64_C(8)));
L_ca42c:;
  /* ca42c: sub x24, x23, #8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* ca430: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* ca434: b.eq #0xca440 */
  if (ARC_COND(c, 0)) goto L_ca440;
  /* ca438: ldr x11, [x24] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 24)));
  /* ca43c: str x11, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 11));
L_ca440:;
  /* ca440: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ca444: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* ca448: b.lo #0xca480 */
  if (ARC_COND(c, 3)) goto L_ca480;
  /* ca44c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ca450: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* ca454: bl #0xd13cc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(828504));
  fn1_d13cc(c);
  /* ca458: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* ca45c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ca460: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ca464: bl #0xd13cc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(828520));
  fn1_d13cc(c);
  /* ca468: tbnz w0, #0, #0xca564 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_ca564;
  /* ca46c: ldp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 18, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ca470: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* ca474: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* ca478: ldr q19, [sp] */
  arc_q_w(c, 19, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* ca47c: tbnz w25, #0, #0xc9d94 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_c9d94;
L_ca480:;
  /* ca480: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ca484: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ca488: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* ca48c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* ca490: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* ca494: bl #0xc9d28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(828568));
  fn1_c9d28(c);
  /* ca498: ldp q19, q18, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 19, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 18, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ca49c: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* ca4a0: ldr q17, [sp, #0x20] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* ca4a4: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* ca4a8: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ca4ac: b #0xc9d94 */
  goto L_c9d94;
L_ca4b0:;
  /* ca4b0: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ca4b4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ca4b8: b.ge #0xca4d0 */
  if (ARC_COND(c, 10)) goto L_ca4d0;
  /* ca4bc: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_ca4c0:;
  /* ca4c0: ldr x9, [x23, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* ca4c4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ca4c8: b.ge #0xca4c0 */
  if (ARC_COND(c, 10)) goto L_ca4c0;
  /* ca4cc: b #0xca4f0 */
  goto L_ca4f0;
L_ca4d0:;
  /* ca4d0: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
L_ca4d4:;
  /* ca4d4: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* ca4d8: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* ca4dc: b.hs #0xca4f0 */
  if (ARC_COND(c, 2)) goto L_ca4f0;
  /* ca4e0: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* ca4e4: ldr x10, [x9], #8 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* ca4e8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ca4ec: b.ge #0xca4d4 */
  if (ARC_COND(c, 10)) goto L_ca4d4;
L_ca4f0:;
  /* ca4f0: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* ca4f4: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* ca4f8: b.hs #0xca50c */
  if (ARC_COND(c, 2)) goto L_ca50c;
  /* ca4fc: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_ca500:;
  /* ca500: ldr x10, [x9, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* ca504: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ca508: b.lt #0xca500 */
  if (ARC_COND(c, 11)) goto L_ca500;
L_ca50c:;
  /* ca50c: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* ca510: b.hs #0xca544 */
  if (ARC_COND(c, 2)) goto L_ca544;
  /* ca514: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* ca518: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
L_ca51c:;
  /* ca51c: str x11, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 11));
  /* ca520: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_ca524:;
  /* ca524: ldr x10, [x23, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* ca528: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ca52c: b.ge #0xca524 */
  if (ARC_COND(c, 10)) goto L_ca524;
L_ca530:;
  /* ca530: ldr x11, [x9, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* ca534: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* ca538: b.lt #0xca530 */
  if (ARC_COND(c, 11)) goto L_ca530;
  /* ca53c: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* ca540: b.lo #0xca51c */
  if (ARC_COND(c, 3)) goto L_ca51c;
L_ca544:;
  /* ca544: sub x9, x23, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* ca548: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* ca54c: b.eq #0xca558 */
  if (ARC_COND(c, 0)) goto L_ca558;
  /* ca550: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* ca554: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
L_ca558:;
  /* ca558: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ca55c: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ca560: b #0xc9d94 */
  goto L_c9d94;
L_ca564:;
  /* ca564: ldp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 18, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ca568: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* ca56c: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* ca570: ldr q19, [sp] */
  arc_q_w(c, 19, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* ca574: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* ca578: tbz w25, #0, #0xc9d90 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_c9d90;
  /* ca57c: b #0xca714 */
  goto L_ca714;
L_ca580:;
  /* ca580: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ca584: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ca588: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca58c: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca590: stp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* ca594: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* ca598: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ca59c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ca5a0: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca5a4: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca5a8: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* ca5ac: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* ca5b0: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ca5b4: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ca5b8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ca5bc: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca5c0: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca5c4: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* ca5c8: ldp x9, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ca5cc: ldr x11, [x19, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ca5d0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ca5d4: csel x9, x9, x10, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* ca5d8: csel x8, x8, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* ca5dc: stp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* ca5e0: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ca5e4: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* ca5e8: csel x9, x11, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* ca5ec: csel x8, x11, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* ca5f0: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* ca5f4: ldp x11, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ca5f8: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ca5fc: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* ca600: csel x12, x10, x9, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* ca604: csel x10, x10, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* ca608: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* ca60c: csel x9, x9, x11, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* ca610: csel x11, x12, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* ca614: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* ca618: csel x12, x10, x8, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ca61c: csel x10, x10, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ca620: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* ca624: csel x8, x8, x11, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* ca628: stp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* ca62c: csel x8, x12, x11, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* ca630: stp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* ca634: b #0xca714 */
  goto L_ca714;
L_ca638:;
  /* ca638: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ca63c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ca640: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ca644: b.ge #0xca714 */
  if (ARC_COND(c, 10)) goto L_ca714;
  /* ca648: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ca64c: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* ca650: b #0xca714 */
  goto L_ca714;
L_ca654:;
  /* ca654: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ca658: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ca65c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ca660: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca664: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca668: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* ca66c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* ca670: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ca674: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ca678: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ca67c: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca680: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca684: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* ca688: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ca68c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ca690: csel x9, x9, x10, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* ca694: csel x8, x8, x10, gt */
  ARC_X_W(c, 8, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* ca698: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* ca69c: b #0xca710 */
  goto L_ca710;
L_ca6a0:;
  /* ca6a0: ldp x10, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ca6a4: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ca6a8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ca6ac: csel x11, x9, x8, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ca6b0: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ca6b4: str x11, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 11));
  /* ca6b8: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ca6bc: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ca6c0: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* ca6c4: csel x9, x10, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ca6c8: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ca6cc: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* ca6d0: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ca6d4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ca6d8: csel x10, x9, x8, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ca6dc: csel x8, x9, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ca6e0: stp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* ca6e4: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ca6e8: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ca6ec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ca6f0: csel x10, x8, x9, gt */
  ARC_X_W(c, 10, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca6f4: csel x8, x8, x9, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ca6f8: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* ca6fc: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ca700: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* ca704: csel x9, x10, x8, gt */
  ARC_X_W(c, 9, (ARC_COND(c, 12) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ca708: csel x8, x10, x8, lt */
  ARC_X_W(c, 8, (ARC_COND(c, 11) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ca70c: str x9, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 9));
L_ca710:;
  /* ca710: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_ca714:;
  /* ca714: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ca718: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ca71c: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ca720: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ca724: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ca728: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ca72c: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* ca730: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ca734: ret  */
  return;
L_ca738:;
  /* ca738: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* ca73c: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ca740: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ca744: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* ca748: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* ca74c: tbz w10, #0, #0xca988 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_ca988;
  /* ca750: tbnz w8, #0, #0xca714 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ca714;
  /* ca754: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* ca758: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* ca75c: b #0xca778 */
  goto L_ca778;
L_ca760:;
  /* ca760: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_ca764:;
  /* ca764: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
L_ca768:;
  /* ca768: add x9, x10, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* ca76c: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ca770: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* ca774: b.eq #0xca714 */
  if (ARC_COND(c, 0)) goto L_ca714;
L_ca778:;
  /* ca778: ldp x12, x11, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ca77c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* ca780: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* ca784: b.ge #0xca768 */
  if (ARC_COND(c, 10)) goto L_ca768;
  /* ca788: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_ca78c:;
  /* ca78c: subs x9, x13, #8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* ca790: str x12, [x19, x13] */
  arc_st64((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_X_R(c, 12));
  /* ca794: b.eq #0xca760 */
  if (ARC_COND(c, 0)) goto L_ca760;
  /* ca798: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* ca79c: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* ca7a0: ldur x12, [x12, #-0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + INT64_C(-16))));
  /* ca7a4: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* ca7a8: b.lt #0xca78c */
  if (ARC_COND(c, 11)) goto L_ca78c;
  /* ca7ac: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ca7b0: b #0xca764 */
  goto L_ca764;
L_ca7b4:;
  /* ca7b4: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* ca7b8: b.eq #0xca714 */
  if (ARC_COND(c, 0)) goto L_ca714;
  /* ca7bc: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* ca7c0: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* ca7c4: b #0xca7d8 */
  goto L_ca7d8;
L_ca7c8:;
  /* ca7c8: str x13, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 13));
L_ca7cc:;
  /* ca7cc: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* ca7d0: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* ca7d4: b.le #0xca8a8 */
  if (ARC_COND(c, 13)) goto L_ca8a8;
L_ca7d8:;
  /* ca7d8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ca7dc: b.lo #0xca7cc */
  if (ARC_COND(c, 3)) goto L_ca7cc;
  /* ca7e0: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* ca7e4: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* ca7e8: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* ca7ec: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* ca7f0: add x11, x19, x12, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* ca7f4: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* ca7f8: b.ge #0xca81c */
  if (ARC_COND(c, 10)) goto L_ca81c;
  /* ca7fc: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* ca800: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* ca804: ldr x16, [x14, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(8));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(8));
    ARC_X_W(c, 16, arc_ld64(_a));
  }
  /* ca808: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* ca80c: csel x15, x15, x16, gt */
  ARC_X_W(c, 15, (ARC_COND(c, 12) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 16)));
  /* ca810: csel x11, x14, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* ca814: csel x12, x13, x12, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* ca818: b #0xca820 */
  goto L_ca820;
L_ca81c:;
  /* ca81c: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
L_ca820:;
  /* ca820: add x14, x19, x10, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* ca824: ldr x13, [x14] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 14)));
  /* ca828: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* ca82c: b.ge #0xca858 */
  if (ARC_COND(c, 10)) goto L_ca858;
  /* ca830: b #0xca7cc */
  goto L_ca7cc;
L_ca834:;
  /* ca834: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* ca838: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* ca83c: ldr x0, [x17, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(8));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(8));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* ca840: cmp x15, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 0));
  /* ca844: csel x15, x15, x0, gt */
  ARC_X_W(c, 15, (ARC_COND(c, 12) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 0)));
  /* ca848: csel x11, x17, x11, lt */
  ARC_X_W(c, 11, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* ca84c: csel x12, x12, x16, lt */
  ARC_X_W(c, 12, (ARC_COND(c, 11) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* ca850: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* ca854: b.lt #0xca7c8 */
  if (ARC_COND(c, 11)) goto L_ca7c8;
L_ca858:;
  /* ca858: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* ca85c: str x15, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* ca860: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* ca864: b.lt #0xca7c8 */
  if (ARC_COND(c, 11)) goto L_ca7c8;
  /* ca868: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* ca86c: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* ca870: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* ca874: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* ca878: add x11, x19, x16, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* ca87c: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* ca880: b.lt #0xca834 */
  if (ARC_COND(c, 11)) goto L_ca834;
  /* ca884: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* ca888: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* ca88c: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* ca890: b.ge #0xca858 */
  if (ARC_COND(c, 10)) goto L_ca858;
  /* ca894: b #0xca7c8 */
  goto L_ca7c8;
L_ca898:;
  /* ca898: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_ca89c:;
  /* ca89c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* ca8a0: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* ca8a4: b.le #0xca714 */
  if (ARC_COND(c, 13)) goto L_ca714;
L_ca8a8:;
  /* ca8a8: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* ca8ac: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* ca8b0: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* ca8b4: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* ca8b8: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* ca8bc: b #0xca8e8 */
  goto L_ca8e8;
L_ca8c0:;
  /* ca8c0: ldr x13, [x16, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 16) + INT64_C(16));
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(16));
    ARC_X_W(c, 13, arc_ld64(_a));
  }
  /* ca8c4: ldur x15, [x16, #-8] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 16) + INT64_C(-8))));
  /* ca8c8: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* ca8cc: csel x15, x15, x13, gt */
  ARC_X_W(c, 15, (ARC_COND(c, 12) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 13)));
  /* ca8d0: csel x9, x16, x9, lt */
  ARC_X_W(c, 9, (ARC_COND(c, 11) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 9)));
  /* ca8d4: csel x13, x17, x14, lt */
  ARC_X_W(c, 13, (ARC_COND(c, 11) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 14)));
L_ca8d8:;
  /* ca8d8: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* ca8dc: str x15, [x12] */
  arc_st64(ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* ca8e0: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* ca8e4: b.gt #0xca914 */
  if (ARC_COND(c, 12)) goto L_ca914;
L_ca8e8:;
  /* ca8e8: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* ca8ec: add x16, x12, x13, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 13)) << 3)));
  /* ca8f0: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* ca8f4: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* ca8f8: add x17, x9, #2 */
  ARC_X_W(c, 17, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ca8fc: add x9, x16, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + UINT64_C(8)));
  /* ca900: cmp x17, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 8));
  /* ca904: b.lt #0xca8c0 */
  if (ARC_COND(c, 11)) goto L_ca8c0;
  /* ca908: ldr x15, [x9] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 9)));
  /* ca90c: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* ca910: b #0xca8d8 */
  goto L_ca8d8;
L_ca914:;
  /* ca914: sub x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* ca918: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* ca91c: b.eq #0xca898 */
  if (ARC_COND(c, 0)) goto L_ca898;
  /* ca920: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* ca924: ldr x12, [x20] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 20)));
  /* ca928: add x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(8)));
  /* ca92c: asr x11, x11, #3 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(3)) & 63))));
  /* ca930: str x12, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* ca934: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* ca938: subs x11, x11, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2)));
  /* ca93c: b.lt #0xca89c */
  if (ARC_COND(c, 11)) goto L_ca89c;
  /* ca940: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* ca944: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* ca948: add x12, x19, x10, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* ca94c: ldr x13, [x12] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 12)));
  /* ca950: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* ca954: b.ge #0xca89c */
  if (ARC_COND(c, 10)) goto L_ca89c;
L_ca958:;
  /* ca958: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* ca95c: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* ca960: str x13, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 13));
  /* ca964: cbz x10, #0xca980 */
  if ((ARC_X_R(c, 10)) == 0) goto L_ca980;
  /* ca968: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* ca96c: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* ca970: add x12, x19, x10, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* ca974: ldr x13, [x12] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 12)));
  /* ca978: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* ca97c: b.lt #0xca958 */
  if (ARC_COND(c, 11)) goto L_ca958;
L_ca980:;
  /* ca980: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* ca984: b #0xca89c */
  goto L_ca89c;
L_ca988:;
  /* ca988: tbz w8, #0, #0xca99c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ca99c;
  /* ca98c: b #0xca714 */
  goto L_ca714;
L_ca990:;
  /* ca990: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ca994: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* ca998: b.eq #0xca714 */
  if (ARC_COND(c, 0)) goto L_ca714;
L_ca99c:;
  /* ca99c: ldp x10, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ca9a0: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* ca9a4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ca9a8: b.ge #0xca990 */
  if (ARC_COND(c, 10)) goto L_ca990;
  /* ca9ac: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_ca9b0:;
  /* ca9b0: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ca9b4: ldur x10, [x9, #-0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-16))));
  /* ca9b8: sub x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* ca9bc: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ca9c0: b.lt #0xca9b0 */
  if (ARC_COND(c, 11)) goto L_ca9b0;
  /* ca9c4: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ca9c8: b #0xca990 */
  goto L_ca990;
}

void fn1_d737c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809468));
  /* d737c: bti c */
  /* bti: no architectural effect here */
  /* d7380: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* d7384: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* d7388: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* d738c: ret  */
  return;
}

void fn1_db37c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825852));
  /* db37c: bti c */
  /* bti: no architectural effect here */
  /* db380: nop  */
  /* nop: no architectural effect here */
  /* db384: adr x0, #0x51bf4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334836)));
  /* db388: ret  */
  return;
}

void fn1_dc4b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038830264));
  /* dc4b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dc4bc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dc4c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dc4c4: nop  */
  /* nop: no architectural effect here */
  /* dc4c8: adr x8, #0x159200 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413632)));
  /* dc4cc: ldarb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* dc4d0: nop  */
  /* nop: no architectural effect here */
  /* dc4d4: adr x8, #0x157e78 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1408632)));
  /* dc4d8: tbz w9, #0, #0xdc590 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_dc590;
L_dc4dc:;
  /* dc4dc: ldr x9, [x8, #0x1380] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(4992))));
  /* dc4e0: mov x12, #0xd21 */
  ARC_X_W(c, 12, UINT64_C(3361));
  /* dc4e4: movk x12, #0x20d2, lsl #16 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(550633472)));
  /* dc4e8: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* dc4ec: movk x12, #0xd20d, lsl #32 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446462603027808255)) | UINT64_C(230953276407808)));
  /* dc4f0: add x13, x9, #0x18d */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) + UINT64_C(397)));
  /* dc4f4: lsr x11, x10, #4 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(4)) & 63)));
  /* dc4f8: movk x12, #0xd20, lsl #48 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(281474976710655)) | UINT64_C(945755921747804160)));
  /* dc4fc: lsr x14, x13, #4 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(4)) & 63)));
  /* dc500: umulh x11, x11, x12 */
  ARC_X_W(c, 11, arc_umulh(ARC_X_R(c, 11), ARC_X_R(c, 12)));
  /* dc504: umulh x12, x14, x12 */
  ARC_X_W(c, 12, arc_umulh(ARC_X_R(c, 14), ARC_X_R(c, 12)));
  /* dc508: mov w14, #0x270 */
  ARC_W_W(c, 14, UINT64_C(624));
  /* dc50c: lsr x11, x11, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* dc510: msub x10, x11, x14, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) - ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 14)))));
  /* dc514: lsr x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(1)) & 63)));
  /* dc518: msub x11, x11, x14, x13 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 13)) - ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 14)))));
  /* dc51c: ldr x13, [x8, x9, lsl #3] */
  ARC_X_W(c, 13, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* dc520: mov w14, #0xb0df */
  ARC_W_W(c, 14, UINT64_C(45279));
  /* dc524: movk w14, #0x9908, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(2567438336)));
  /* dc528: and x13, x13, #0xffffffff80000000 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & UINT64_C(18446744071562067968)));
  /* dc52c: ldr x12, [x8, x10, lsl #3] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* dc530: ldr x11, [x8, x11, lsl #3] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 11)) << 3))));
  /* dc534: tst w12, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 12) & UINT64_C(1)));
  /* dc538: and x12, x12, #0x7ffffffe */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & UINT64_C(2147483646)));
  /* dc53c: csel x14, x14, xzr, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 31)));
  /* dc540: orr x12, x12, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) | ARC_X_R(c, 13)));
  /* dc544: eor x11, x14, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 14) ^ ARC_X_R(c, 11)));
  /* dc548: eor x11, x11, x12, lsr #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) ^ ((uint64_t)(ARC_X_R(c, 12)) >> 1)));
  /* dc54c: str x11, [x8, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 11));
  /* dc550: ldr x9, [x8, #0x1380] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(4992))));
  /* dc554: ldr x9, [x8, x9, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* dc558: str x10, [x8, #0x1380] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(4992)), ARC_X_R(c, 10));
  /* dc55c: ubfx x11, x9, #0xb, #0x20 */
  ARC_X_W(c, 11, (((uint64_t)(ARC_X_R(c, 9)) >> 11) & UINT64_C(4294967295)));
  /* dc560: eor x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) ^ ARC_X_R(c, 9)));
  /* dc564: mov w11, #0x5680 */
  ARC_W_W(c, 11, UINT64_C(22144));
  /* dc568: movk w11, #0x9d2c, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(2636906496)));
  /* dc56c: and x11, x11, x9, lsl #7 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & ((uint64_t)(ARC_X_R(c, 9)) << 7)));
  /* dc570: eor x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) ^ ARC_X_R(c, 9)));
  /* dc574: mov w11, #-0x103a0000 */
  ARC_W_W(c, 11, UINT64_C(18446744073437315072));
  /* dc578: and x11, x11, x9, lsl #15 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & ((uint64_t)(ARC_X_R(c, 9)) << 15)));
  /* dc57c: eor x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) ^ ARC_X_R(c, 9)));
  /* dc580: eor x0, x9, x9, lsr #18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 18)));
  /* dc584: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dc588: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dc58c: ret  */
  return;
L_dc590:;
  /* dc590: nop  */
  /* nop: no architectural effect here */
  /* dc594: adr x0, #0x159200 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413632)));
  /* dc598: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(902556));
  fn1_1424b8(c);
  /* dc59c: nop  */
  /* nop: no architectural effect here */
  /* dc5a0: adr x8, #0x157e78 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1408632)));
  /* dc5a4: cbz w0, #0xdc4dc */
  if ((ARC_W_R(c, 0)) == 0) goto L_dc4dc;
  /* dc5a8: adrp x9, #0x157000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404928)));
  /* dc5ac: mov w8, #0x1571 */
  ARC_W_W(c, 8, UINT64_C(5489));
  /* dc5b0: mov w10, #0x8965 */
  ARC_W_W(c, 10, UINT64_C(35173));
  /* dc5b4: str x8, [x9, #0xe78] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(3704)), ARC_X_R(c, 8));
  /* dc5b8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* dc5bc: movk w10, #0x6c07, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1812398080)));
L_dc5c0:;
  /* dc5c0: lsr x11, x8, #0x1e */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(30)) & 63)));
  /* dc5c4: eor w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) ^ ARC_W_R(c, 8)));
  /* dc5c8: nop  */
  /* nop: no architectural effect here */
  /* dc5cc: adr x11, #0x157e78 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(1408632)));
  /* dc5d0: madd w8, w8, w10, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) + ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* dc5d4: str x8, [x11, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 8));
  /* dc5d8: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* dc5dc: cmp x9, #0x270 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(624));
  /* dc5e0: b.ne #0xdc5c0 */
  if (ARC_COND(c, 1)) goto L_dc5c0;
  /* dc5e4: adrp x8, #0x159000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413120)));
  /* dc5e8: nop  */
  /* nop: no architectural effect here */
  /* dc5ec: adr x0, #0x159200 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413632)));
  /* dc5f0: str xzr, [x8, #0x1f8] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(504)), ARC_X_R(c, 31));
  /* dc5f4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(902648));
  fn1_1424d0(c);
  /* dc5f8: nop  */
  /* nop: no architectural effect here */
  /* dc5fc: adr x8, #0x157e78 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1408632)));
  /* dc600: b #0xdc4dc */
  goto L_dc4dc;
}

void fn1_e1938(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038851896));
  /* e1938: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e193c: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1940: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* e1944: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e1948: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e194c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1950: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1954: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e1958: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* e195c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e1960: and x21, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e1964: subs x9, x2, x21 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 21)));
  /* e1968: b.hs #0xe1988 */
  if (ARC_COND(c, 2)) goto L_e1988;
  /* e196c: ldr x23, [x20, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* e1970: str x19, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 19));
  /* e1974: cbz x19, #0xe1a28 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e1a28;
  /* e1978: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e197c: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e1980: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924036));
  fn1_1449f0(c);
  /* e1984: b #0xe1a28 */
  goto L_e1a28;
L_e1988:;
  /* e1988: mov x10, #-9 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551607));
  /* e198c: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* e1990: sub x10, x10, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 21)));
  /* e1994: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* e1998: b.hi #0xe1a4c */
  if (ARC_COND(c, 8)) goto L_e1a4c;
  /* e199c: ldr x10, [x20, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* e19a0: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e19a4: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* e19a8: sub x9, x21, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* e19ac: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* e19b0: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* e19b4: csinc x22, x10, x20, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 20)) + 1)));
  /* e19b8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* e19bc: b.hi #0xe19ec */
  if (ARC_COND(c, 8)) goto L_e19ec;
  /* e19c0: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* e19c4: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* e19c8: cmp x19, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e19cc: csel x8, x19, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 8)));
  /* e19d0: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* e19d4: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* e19d8: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* e19dc: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e19e0: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* e19e4: csel x25, x8, x9, lo */
  ARC_X_W(c, 25, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e19e8: b #0xe19f0 */
  goto L_e19f0;
L_e19ec:;
  /* e19ec: mov x25, #-9 */
  ARC_X_W(c, 25, UINT64_C(18446744073709551607));
L_e19f0:;
  /* e19f0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* e19f4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924152));
  fn1_1428f0(c);
  /* e19f8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* e19fc: cbz x19, #0xe1a10 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e1a10;
  /* e1a00: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e1a04: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* e1a08: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* e1a0c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924176));
  fn1_1449d8(c);
L_e1a10:;
  /* e1a10: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e1a14: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e1a18: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924188));
  fn1_142608(c);
  /* e1a1c: orr x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) | UINT64_C(1)));
  /* e1a20: stp x19, x23, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e1a24: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_e1a28:;
  /* e1a28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e1a2c: strb wzr, [x23, x19] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 19)), ARC_W_R(c, 31));
  /* e1a30: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1a34: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* e1a38: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e1a3c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e1a40: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1a44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1a48: ret  */
  return;
L_e1a4c:;
  /* e1a4c: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(924240));
  fn1_d7d54(c);
}

void fn1_e42e8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038862568));
  /* e42e8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e42ec: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e42f0: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e42f4: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e42f8: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e42fc: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e4300: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* e4304: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* e4308: mov w23, #0x7473 */
  ARC_W_W(c, 23, UINT64_C(29811));
  /* e430c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e4310: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* e4314: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e4318: movk w23, #0x696f, lsl #16 */
  ARC_W_W(c, 23, ((ARC_W_R(c, 23) & UINT64_C(18446744069414649855)) | UINT64_C(1768882176)));
  /* e431c: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* e4320: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e4324: stur w23, [sp, #9] */
  arc_st32(((c)->sp + INT64_C(9)), ARC_W_R(c, 23));
  /* e4328: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e432c: strb wzr, [sp, #0xd] */
  arc_st8(((c)->sp + INT64_C(13)), ARC_W_R(c, 31));
  /* e4330: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* e4334: csinc x21, x9, x0, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e4338: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934716));
  fn1_142a58(c);
  /* e433c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e4340: ldr w24, [x0] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 0)));
  /* e4344: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e4348: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* e434c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e4350: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* e4354: bl #0x142e78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934744));
  fn1_142e78(c);
  /* e4358: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e435c: str w24, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 24));
  /* e4360: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e4364: b.eq #0xe43b0 */
  if (ARC_COND(c, 0)) goto L_e43b0;
  /* e4368: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e436c: subs x8, x8, x21 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21)));
  /* e4370: b.eq #0xe43dc */
  if (ARC_COND(c, 0)) goto L_e43dc;
  /* e4374: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e4378: cbz x19, #0xe4380 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e4380;
  /* e437c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e4380:;
  /* e4380: cmp x20, w20, sxtw */
  (void)arc_sub64(c, ARC_X_R(c, 20), ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 20))));
  /* e4384: b.ne #0xe43e4 */
  if (ARC_COND(c, 1)) goto L_e43e4;
  /* e4388: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e438c: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934800));
  fn1_142e00(c);
  /* e4390: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* e4394: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4398: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e439c: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e43a0: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e43a4: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e43a8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e43ac: ret  */
  return;
L_e43b0:;
  /* e43b0: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* e43b4: add x1, x1, #0xa7d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2685)));
  /* e43b8: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e43bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e43c0: sub x19, x29, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e43c4: bl #0xe7974 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934856));
  fn1_e7974(c);
  /* e43c8: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* e43cc: ldur x9, [x29, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* e43d0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e43d4: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e43d8: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934876));
  fn1_da038(c);
L_e43dc:;
  /* e43dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e43e0: bl #0xe779c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934884));
  fn1_e779c(c);
L_e43e4:;
  /* e43e4: mov w8, #0x24 */
  ARC_W_W(c, 8, UINT64_C(36));
  /* e43e8: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e43ec: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e43f0: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e43f4: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* e43f8: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e43fc: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* e4400: sub x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4404: stur w23, [x29, #-0x17] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-23)), ARC_W_R(c, 23));
  /* e4408: stur x10, [x29, #-0x13] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-19)), ARC_X_R(c, 10));
  /* e440c: stur x8, [x29, #-0xd] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-13)), ARC_X_R(c, 8));
  /* e4410: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4414: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934936));
  fn1_da038(c);
  /* e4418: b #0xe441c */
  goto L_e441c;
L_e441c:;
  /* e441c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e4420: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4424: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934952));
  fn1_142e00(c);
  /* e4428: b #0xe4430 */
  goto L_e4430;
  /* e442c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e4430:;
  /* e4430: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4434: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934968));
  fn1_142e00(c);
  /* e4438: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e443c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934976));
  fn1_9cc20(c);
}

void fn1_e8ae8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038881000));
  /* e8ae8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8aec: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* e8af0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8af4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e8af8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e8afc: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* e8b00: ldp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e8b04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8b08: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e8b0c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8b10: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* e8b14: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* e8b18: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e8b1c: bl #0x143088 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953120));
  fn1_143088(c);
  /* e8b20: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* e8b24: subs x9, x9, x8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* e8b28: cset w21, ne */
  ARC_W_W(c, 21, (ARC_COND(c, 1) ? 1 : 0));
  /* e8b2c: b.eq #0xe8b98 */
  if (ARC_COND(c, 0)) goto L_e8b98;
  /* e8b30: asr x11, x9, #3 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* e8b34: cmp x11, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(1));
  /* e8b38: csinc x9, x11, xzr, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 31)) + 1)));
  /* e8b3c: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* e8b40: b.hs #0xe8b4c */
  if (ARC_COND(c, 2)) goto L_e8b4c;
  /* e8b44: mov x10, xzr */
  ARC_X_W(c, 10, ARC_X_R(c, 31));
  /* e8b48: b #0xe8b80 */
  goto L_e8b80;
L_e8b4c:;
  /* e8b4c: and x10, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e8b50: add x13, x8, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* e8b54: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* e8b58: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_e8b5c:;
  /* e8b5c: ldp x15, x16, [x13, #-8] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-8));
    ARC_X_W(c, 15, arc_ld64(_pa));
    ARC_X_W(c, 16, arc_ld64(_pa + 8));
  }
  /* e8b60: subs x14, x14, #2 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(2)));
  /* e8b64: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* e8b68: mul x21, x15, x21 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 15)) * (uint64_t)(ARC_X_R(c, 21))));
  /* e8b6c: mul x12, x16, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 16)) * (uint64_t)(ARC_X_R(c, 12))));
  /* e8b70: b.ne #0xe8b5c */
  if (ARC_COND(c, 1)) goto L_e8b5c;
  /* e8b74: mul x21, x12, x21 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 12)) * (uint64_t)(ARC_X_R(c, 21))));
  /* e8b78: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* e8b7c: b.eq #0xe8b98 */
  if (ARC_COND(c, 0)) goto L_e8b98;
L_e8b80:;
  /* e8b80: add x8, x8, x10, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* e8b84: sub x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 10)));
L_e8b88:;
  /* e8b88: ldr x10, [x8], #8 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* e8b8c: subs x9, x9, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1)));
  /* e8b90: mul x21, x10, x21 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 21))));
  /* e8b94: b.ne #0xe8b88 */
  if (ARC_COND(c, 1)) goto L_e8b88;
L_e8b98:;
  /* e8b98: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* e8b9c: ldp x0, x8, [x22, #0x20]! */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(32));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(32));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e8ba0: subs x1, x8, x0 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0)));
  /* e8ba4: cbz x0, #0xe8bcc */
  if ((ARC_X_R(c, 0)) == 0) goto L_e8bcc;
  /* e8ba8: b.eq #0xe8bc0 */
  if (ARC_COND(c, 0)) goto L_e8bc0;
  /* e8bac: sub x9, x0, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) - ARC_X_R(c, 8)));
  /* e8bb0: add x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* e8bb4: and x9, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* e8bb8: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* e8bbc: str x8, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 8));
L_e8bc0:;
  /* e8bc0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953284));
  fn1_142608(c);
  /* e8bc4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* e8bc8: stp xzr, xzr, [x22] */
  { const uint64_t _pa = ARC_X_R(c, 22);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
L_e8bcc:;
  /* e8bcc: cbz x21, #0xe8c00 */
  if ((ARC_X_R(c, 21)) == 0) goto L_e8c00;
  /* e8bd0: lsr x8, x21, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(61)) & 63)));
  /* e8bd4: cbnz x8, #0xe8d08 */
  if ((ARC_X_R(c, 8)) != 0) goto L_e8d08;
  /* e8bd8: lsl x22, x21, #3 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(3)) & 63)));
  /* e8bdc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e8be0: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953316));
  fn1_1428f0(c);
  /* e8be4: mov w1, wzr */
  ARC_W_W(c, 1, ARC_W_R(c, 31));
  /* e8be8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* e8bec: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e8bf0: str x0, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 0));
  /* e8bf4: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953336));
  fn1_144a20(c);
  /* e8bf8: add x8, x21, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 22)));
  /* e8bfc: str x8, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 8));
L_e8c00:;
  /* e8c00: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* e8c04: b.eq #0xe8ce8 */
  if (ARC_COND(c, 0)) goto L_e8ce8;
  /* e8c08: ldp x8, x17, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 17, arc_ld64(_pa + 8));
  }
  /* e8c0c: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* e8c10: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* e8c14: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e8c18: str x20, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* e8c1c: sub x13, x17, x8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) - ARC_X_R(c, 8)));
  /* e8c20: sub x17, x17, #0x10 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) - UINT64_C(16)));
  /* e8c24: asr x11, x13, #3 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(3)) & 63))));
  /* e8c28: add x12, x10, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + ARC_X_R(c, 13)));
  /* e8c2c: add x13, x9, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* e8c30: sub x15, x12, #8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* e8c34: sub x16, x13, #0x10 */
  ARC_X_W(c, 16, (ARC_X_R(c, 13) - UINT64_C(16)));
  /* e8c38: sub x14, x11, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* e8c3c: b #0xe8c54 */
  goto L_e8c54;
L_e8c40:;
  /* e8c40: ldr x1, [x21, x0, lsl #3] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 0)) << 3))));
  /* e8c44: ldr x2, [x10, x14, lsl #3] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 14)) << 3))));
  /* e8c48: add x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* e8c4c: add x1, x2, x1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 2) + ARC_X_R(c, 1)));
  /* e8c50: str x1, [x21, x0, lsl #3] */
  arc_st64((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 0)) << 3)), ARC_X_R(c, 1));
L_e8c54:;
  /* e8c54: ldr x1, [x8, x14, lsl #3] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 14)) << 3))));
  /* e8c58: add x1, x1, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1)));
  /* e8c5c: str x1, [x8, x14, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 14)) << 3)), ARC_X_R(c, 1));
  /* e8c60: ldr x2, [x9, x14, lsl #3] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 14)) << 3))));
  /* e8c64: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* e8c68: b.lo #0xe8c40 */
  if (ARC_COND(c, 3)) goto L_e8c40;
  /* e8c6c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* e8c70: mov x4, #-1 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551615));
  /* e8c74: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
L_e8c78:;
  /* e8c78: add x1, x11, x2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ARC_X_R(c, 2)));
  /* e8c7c: cmp x1, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1));
  /* e8c80: b.eq #0xe8ce8 */
  if (ARC_COND(c, 0)) goto L_e8ce8;
  /* e8c84: mov x1, x4 */
  ARC_X_W(c, 1, ARC_X_R(c, 4));
  /* e8c88: ldr x4, [x3] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 3)));
  /* e8c8c: add x4, x4, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) + UINT64_C(1)));
  /* e8c90: stp x4, xzr, [x3], #-8 */
  { const uint64_t _pa = ARC_X_R(c, 3);
    ARC_X_W(c, 3, ARC_X_R(c, 3) + INT64_C(-8));
    arc_st64(_pa, ARC_X_R(c, 4));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e8c94: ldr x5, [x16, x2, lsl #3] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 16) + ((uint64_t)(ARC_X_R(c, 2)) << 3))));
  /* e8c98: sub x2, x2, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* e8c9c: cmp x4, x5 */
  (void)arc_sub64(c, ARC_X_R(c, 4), ARC_X_R(c, 5));
  /* e8ca0: sub x4, x1, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 1) - UINT64_C(1)));
  /* e8ca4: b.hs #0xe8c78 */
  if (ARC_COND(c, 2)) goto L_e8c78;
  /* e8ca8: ldr x4, [x21, x0, lsl #3] */
  ARC_X_W(c, 4, arc_ld64((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 0)) << 3))));
  /* e8cac: ldr x5, [x15, x2, lsl #3] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 15) + ((uint64_t)(ARC_X_R(c, 2)) << 3))));
  /* e8cb0: add x3, x0, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* e8cb4: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* e8cb8: add x4, x5, x4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 5) + ARC_X_R(c, 4)));
  /* e8cbc: str x4, [x21, x3, lsl #3] */
  arc_st64((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 3)) << 3)), ARC_X_R(c, 4));
  /* e8cc0: cbz x2, #0xe8c54 */
  if ((ARC_X_R(c, 2)) == 0) goto L_e8c54;
L_e8cc4:;
  /* e8cc4: ldr x0, [x13, x1, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 1)) << 3))));
  /* e8cc8: ldr x2, [x12, x1, lsl #3] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 1)) << 3))));
  /* e8ccc: adds x1, x1, #1 */
  ARC_X_W(c, 1, arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0));
  /* e8cd0: sub x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) - UINT64_C(1)));
  /* e8cd4: msub x4, x0, x2, x4 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 4)) - ((uint64_t)(ARC_X_R(c, 0)) * (uint64_t)(ARC_X_R(c, 2)))));
  /* e8cd8: str x4, [x21, x3, lsl #3] */
  arc_st64((ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 3)) << 3)), ARC_X_R(c, 4));
  /* e8cdc: b.lo #0xe8cc4 */
  if (ARC_COND(c, 3)) goto L_e8cc4;
  /* e8ce0: mov x0, x3 */
  ARC_X_W(c, 0, ARC_X_R(c, 3));
  /* e8ce4: b #0xe8c54 */
  goto L_e8c54;
L_e8ce8:;
  /* e8ce8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8cec: bl #0x1430a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953584));
  fn1_1430a0(c);
  /* e8cf0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e8cf4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e8cf8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8cfc: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* e8d00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8d04: ret  */
  return;
L_e8d08:;
  /* e8d08: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953612));
  fn1_d9fe8(c);
  /* e8d0c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e8d10: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e8d14: bl #0x1430a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953624));
  fn1_1430a0(c);
  /* e8d18: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e8d1c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(953632));
  fn1_9cc20(c);
}

void fn1_eade0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889952));
  /* eade0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eade4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eade8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eadec: bl #0x143238 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962032));
  fn1_143238(c);
  /* eadf0: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* eadf4: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* eadf8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eadfc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eae00: ret  */
  return;
  /* eae04: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962056));
  fn1_a1454(c);
}

void fn1_ecc44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038897732));
  /* ecc44: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ecc48: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ecc4c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ecc50: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ecc54: ldr w8, [x1, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 1) + INT64_C(8))));
  /* ecc58: ldr q0, [x1, #0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))), arc_ld64((ARC_X_R(c, 1) + INT64_C(16)) + 8));
  /* ecc5c: nop  */
  /* nop: no architectural effect here */
  /* ecc60: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ecc64: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ecc68: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ecc6c: str w8, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* ecc70: ldr x8, [x1, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(48))));
  /* ecc74: ldr d1, [x1, #0x20] */
  arc_du_w(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(32))));
  /* ecc78: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* ecc7c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ecc80: stp xzr, x8, [x0, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* ecc84: str d1, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), (c)->q[1].u64[0]);
  /* ecc88: b.eq #0xecc98 */
  if (ARC_COND(c, 0)) goto L_ecc98;
  /* ecc8c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ecc90: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ecc94: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969880));
  fn1_db2e0(c);
L_ecc98:;
  /* ecc98: ldur q2, [x19, #0x48] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))), arc_ld64((ARC_X_R(c, 19) + INT64_C(72)) + 8));
  /* ecc9c: ldur q0, [x19, #0x38] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))), arc_ld64((ARC_X_R(c, 19) + INT64_C(56)) + 8));
  /* ecca0: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* ecca4: stur q2, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), (c)->q[2].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)) + 8, (c)->q[2].u64[1]);
  /* ecca8: stur q0, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* eccac: ldr q0, [x19, #0x60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))), arc_ld64((ARC_X_R(c, 19) + INT64_C(96)) + 8));
  /* eccb0: ldr x8, [x19, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* eccb4: stur q1, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)) + 8, (c)->q[1].u64[1]);
  /* eccb8: str q0, [x20, #0x60] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(96)) + 8, (c)->q[0].u64[1]);
  /* eccbc: stur q1, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)) + 8, (c)->q[1].u64[1]);
  /* eccc0: ldur q0, [x19, #0x78] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(120))), arc_ld64((ARC_X_R(c, 19) + INT64_C(120)) + 8));
  /* eccc4: str x8, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), ARC_X_R(c, 8));
  /* eccc8: ldr x8, [x19, #0x70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* ecccc: str xzr, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 31));
  /* eccd0: str q1, [x19, #0x60] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)) + 8, (c)->q[1].u64[1]);
  /* eccd4: str x8, [x20, #0x70] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(112)), ARC_X_R(c, 8));
  /* eccd8: str xzr, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 31));
  /* eccdc: stur q0, [x20, #0x78] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* ecce0: stur q1, [x19, #0x78] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)), (c)->q[1].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(120)) + 8, (c)->q[1].u64[1]);
  /* ecce4: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ecce8: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eccec: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eccf0: ret  */
  return;
}

void fn1_ee8c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038905024));
  /* ee8c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ee8c4: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ee8c8: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ee8cc: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ee8d0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ee8d4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ee8d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee8dc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ee8e0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ee8e4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ee8e8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ee8ec: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ee8f0: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977140));
  fn1_1435f8(c);
  /* ee8f4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* ee8f8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ee8fc: b.ne #0xee9c4 */
  if (ARC_COND(c, 1)) goto L_ee9c4;
  /* ee900: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee904: nop  */
  /* nop: no architectural effect here */
  /* ee908: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ee90c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee910: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee914: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ee918: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ee91c: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* ee920: b.eq #0xee930 */
  if (ARC_COND(c, 0)) goto L_ee930;
  /* ee924: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ee928: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ee92c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977200));
  fn1_db2e0(c);
L_ee930:;
  /* ee930: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ee934: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ee938: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ee93c: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977216));
  fn1_143748(c);
  /* ee940: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee944: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ee948: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee94c: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee950: ldr x8, [x9, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(56))));
  /* ee954: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ee958: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ee95c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ee960: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* ee964: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977256));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ee968: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ee96c: b.eq #0xee990 */
  if (ARC_COND(c, 0)) goto L_ee990;
  /* ee970: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ee974: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ee978: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977276));
  fn1_bd950(c);
  /* ee97c: cbnz x0, #0xee990 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ee990;
  /* ee980: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ee984: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ee988: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ee98c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977296));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ee990:;
  /* ee990: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee994: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee998: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee99c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee9a0: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ee9a4: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ee9a8: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ee9ac: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ee9b0: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ee9b4: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ee9b8: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ee9bc: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ee9c0: b.ne #0xee9e0 */
  if (ARC_COND(c, 1)) goto L_ee9e0;
L_ee9c4:;
  /* ee9c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee9c8: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ee9cc: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ee9d0: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ee9d4: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ee9d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ee9dc: ret  */
  return;
L_ee9e0:;
  /* ee9e0: nop  */
  /* nop: no architectural effect here */
  /* ee9e4: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ee9e8: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977388));
  fn1_ec720(c);
  /* ee9ec: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ee9f0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ee9f4: b.eq #0xeea18 */
  if (ARC_COND(c, 0)) goto L_eea18;
  /* ee9f8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ee9fc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* eea00: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977412));
  fn1_bd950(c);
  /* eea04: cbnz x0, #0xeea18 */
  if ((ARC_X_R(c, 0)) != 0) goto L_eea18;
  /* eea08: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* eea0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* eea10: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* eea14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977432));
  arc_dispatch(c, ARC_X_R(c, 8));
L_eea18:;
  /* eea18: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* eea1c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977440));
  fn1_142548(c);
  /* eea20: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* eea24: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* eea28: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eea2c: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* eea30: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* eea34: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* eea38: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* eea3c: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* eea40: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* eea44: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* eea48: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* eea4c: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* eea50: tbnz w8, #0, #0xeea5c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_eea5c;
  /* eea54: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977496));
  fn1_142980(c);
  /* eea58: b #0xee990 */
  goto L_ee990;
L_eea5c:;
  /* eea5c: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977504));
  fn1_1429b0(c);
  /* eea60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eea64: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977512));
  fn1_142980(c);
  /* eea68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eea6c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977520));
  fn1_9cc20(c);
  /* eea70: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(977524));
  fn1_a1454(c);
}

void fn1_f3834(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925364));
  /* f3834: bti c */
  /* bti: no architectural effect here */
  /* f3838: add x0, x0, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* f383c: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f52f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038932212));
  /* f52f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f52f8: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f52fc: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f5300: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5304: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f5308: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f530c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5310: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f5314: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5318: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f531c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f5320: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f5324: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004328));
  fn1_143670(c);
  /* f5328: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f532c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f5330: b.ne #0xf53f8 */
  if (ARC_COND(c, 1)) goto L_f53f8;
  /* f5334: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5338: nop  */
  /* nop: no architectural effect here */
  /* f533c: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f5340: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5344: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5348: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f534c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5350: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f5354: b.eq #0xf5364 */
  if (ARC_COND(c, 0)) goto L_f5364;
  /* f5358: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f535c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f5360: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004388));
  fn1_db2e0(c);
L_f5364:;
  /* f5364: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f5368: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f536c: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f5370: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004404));
  fn1_143748(c);
  /* f5374: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5378: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f537c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5380: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5384: ldr x8, [x9, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(56))));
  /* f5388: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f538c: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f5390: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f5394: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f5398: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004444));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f539c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f53a0: b.eq #0xf53c4 */
  if (ARC_COND(c, 0)) goto L_f53c4;
  /* f53a4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f53a8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f53ac: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004464));
  fn1_bd950(c);
  /* f53b0: cbnz x0, #0xf53c4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f53c4;
  /* f53b4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f53b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f53bc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f53c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004484));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f53c4:;
  /* f53c4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f53c8: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f53cc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f53d0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f53d4: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f53d8: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f53dc: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f53e0: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f53e4: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f53e8: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f53ec: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f53f0: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f53f4: b.ne #0xf5414 */
  if (ARC_COND(c, 1)) goto L_f5414;
L_f53f8:;
  /* f53f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f53fc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f5400: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f5404: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5408: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f540c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f5410: ret  */
  return;
L_f5414:;
  /* f5414: nop  */
  /* nop: no architectural effect here */
  /* f5418: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f541c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004576));
  fn1_ec720(c);
  /* f5420: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5424: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f5428: b.eq #0xf544c */
  if (ARC_COND(c, 0)) goto L_f544c;
  /* f542c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5430: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5434: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004600));
  fn1_bd950(c);
  /* f5438: cbnz x0, #0xf544c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f544c;
  /* f543c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5440: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5444: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5448: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004620));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f544c:;
  /* f544c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f5450: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004628));
  fn1_142548(c);
  /* f5454: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5458: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f545c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5460: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f5464: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f5468: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f546c: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f5470: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5474: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f5478: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f547c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5480: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f5484: tbnz w8, #0, #0xf5490 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f5490;
  /* f5488: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004684));
  fn1_142980(c);
  /* f548c: b #0xf53c4 */
  goto L_f53c4;
L_f5490:;
  /* f5490: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004692));
  fn1_1429b0(c);
  /* f5494: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5498: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004700));
  fn1_142980(c);
  /* f549c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f54a0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004708));
  fn1_9cc20(c);
  /* f54a4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1004712));
  fn1_a1454(c);
}

void fn1_facb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038955192));
  /* facb8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* facbc: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* facc0: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* facc4: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* facc8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* faccc: add x20, x0, #0x40 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(64)));
  /* facd0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* facd4: cmp x20, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 1));
  /* facd8: b.eq #0xfad30 */
  if (ARC_COND(c, 0)) goto L_fad30;
  /* facdc: ldrb w9, [x20] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 20)));
  /* face0: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* face4: tbnz w9, #0, #0xfad00 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_fad00;
  /* face8: tbnz w8, #0, #0xfad20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_fad20;
  /* facec: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* facf0: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* facf4: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* facf8: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* facfc: b #0xfad30 */
  goto L_fad30;
L_fad00:;
  /* fad00: ldp x10, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* fad04: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* fad08: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fad0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fad10: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* fad14: csel x2, x11, x10, eq */
  ARC_X_W(c, 2, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* fad18: bl #0xe1938 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1027356));
  fn1_e1938(c);
  /* fad1c: b #0xfad30 */
  goto L_fad30;
L_fad20:;
  /* fad20: ldp x2, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fad24: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fad28: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* fad2c: bl #0xe1888 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1027376));
  fn1_e1888(c);
L_fad30:;
  /* fad30: ldrb w11, [x19, #0x40] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 19) + INT64_C(64))));
  /* fad34: ldp x10, x8, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fad38: ldr w12, [x19, #0x60] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(96))));
  /* fad3c: add x9, x19, #0x41 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(65)));
  /* fad40: str xzr, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 31));
  /* fad44: ubfx x13, x11, #1, #7 */
  ARC_X_W(c, 13, (((uint64_t)(ARC_X_R(c, 11)) >> 1) & UINT64_C(127)));
  /* fad48: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* fad4c: csel x21, x9, x8, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* fad50: csel x22, x13, x10, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 10)));
  /* fad54: tbz w12, #3, #0xfad68 */
  if (((ARC_W_R(c, 12)) >> 3 & 1) == 0) goto L_fad68;
  /* fad58: add x13, x21, x22 */
  ARC_X_W(c, 13, (ARC_X_R(c, 21) + ARC_X_R(c, 22)));
  /* fad5c: stp x21, x21, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fad60: str x13, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 13));
  /* fad64: str x13, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 13));
L_fad68:;
  /* fad68: tbz w12, #4, #0xfae54 */
  if (((ARC_W_R(c, 12)) >> 4 & 1) == 0) goto L_fae54;
  /* fad6c: ldr x12, [x19, #0x40] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fad70: and w11, w11, #0xff */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(255)));
  /* fad74: tst w11, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & UINT64_C(1)));
  /* fad78: mov w11, #0x16 */
  ARC_W_W(c, 11, UINT64_C(22));
  /* fad7c: and x13, x12, #0xfffffffffffffffe */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) & UINT64_C(18446744073709551614)));
  /* fad80: ubfx x14, x12, #1, #7 */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 12)) >> 1) & UINT64_C(127)));
  /* fad84: sub x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* fad88: csel x11, x11, x13, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 13)));
  /* fad8c: tst x12, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 12) & UINT64_C(1)));
  /* fad90: add x13, x21, x22 */
  ARC_X_W(c, 13, (ARC_X_R(c, 21) + ARC_X_R(c, 22)));
  /* fad94: csel x10, x14, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 10)));
  /* fad98: str x13, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 13));
  /* fad9c: subs x1, x11, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10)));
  /* fada0: b.ls #0xfadb4 */
  if (ARC_COND(c, 9)) goto L_fadb4;
  /* fada4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fada8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* fadac: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1027504));
  fn1_142d10(c);
  /* fadb0: b #0xfadd0 */
  goto L_fadd0;
L_fadb4:;
  /* fadb4: tbnz w12, #0, #0xfadc8 */
  if (((ARC_W_R(c, 12)) >> 0 & 1) != 0) goto L_fadc8;
  /* fadb8: lsl w8, w11, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 11)) << ((UINT64_C(1)) & 31)));
  /* fadbc: strb w8, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* fadc0: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* fadc4: b #0xfadcc */
  goto L_fadcc;
L_fadc8:;
  /* fadc8: str x11, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 11));
L_fadcc:;
  /* fadcc: strb wzr, [x8, x11] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 11)), ARC_W_R(c, 31));
L_fadd0:;
  /* fadd0: ldrb w8, [x19, #0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(64))));
  /* fadd4: ldr x9, [x19, #0x48] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* fadd8: stp x21, x21, [x19, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* faddc: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* fade0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* fade4: ldrb w8, [x19, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(96))));
  /* fade8: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* fadec: tst w8, #3 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(3)));
  /* fadf0: add x9, x21, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 9)));
  /* fadf4: str x9, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 9));
  /* fadf8: b.eq #0xfae54 */
  if (ARC_COND(c, 0)) goto L_fae54;
  /* fadfc: lsr x8, x22, #0x1f */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(31)) & 63)));
  /* fae00: cbz x8, #0xfae48 */
  if ((ARC_X_R(c, 8)) == 0) goto L_fae48;
  /* fae04: mov x8, #-0xffffffff80000000 */
  ARC_X_W(c, 8, UINT64_C(18446744071562067968));
  /* fae08: mov x9, #5 */
  ARC_X_W(c, 9, UINT64_C(5));
  /* fae0c: mov w10, #0x7fffffff */
  ARC_W_W(c, 10, UINT64_C(2147483647));
  /* fae10: add x8, x22, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* fae14: movk x9, #2, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* fae18: umulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_umulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* fae1c: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* fae20: add x8, x9, x8, lsr #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* fae24: lsr x8, x8, #0x1e */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(30)) & 63)));
  /* fae28: lsl x9, x8, #0x1f */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(31)) & 63)));
  /* fae2c: sub x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* fae30: add x9, x21, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 10)));
  /* fae34: add x21, x9, x8 */
  ARC_X_W(c, 21, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* fae38: sub x8, x22, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 8)));
  /* fae3c: mov x9, #-0x7fffffff */
  ARC_X_W(c, 9, UINT64_C(18446744071562067969));
  /* fae40: add x22, x8, x9 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* fae44: str x21, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 21));
L_fae48:;
  /* fae48: cbz x22, #0xfae54 */
  if ((ARC_X_R(c, 22)) == 0) goto L_fae54;
  /* fae4c: add x8, x21, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 22)));
  /* fae50: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
L_fae54:;
  /* fae54: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fae58: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fae5c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fae60: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fae64: ret  */
  return;
}

void fn1_fe338(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038969144));
  /* fe338: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe33c: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* fe340: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe344: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fe348: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fe34c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fe350: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* fe354: ldrb w8, [x0, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* fe358: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fe35c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fe360: b.ne #0xfe37c */
  if (ARC_COND(c, 1)) goto L_fe37c;
  /* fe364: ldr w0, [x19, #0x5c] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 19) + INT64_C(92))));
  /* fe368: tbz w1, #0, #0xfe4c4 */
  if (((ARC_W_R(c, 1)) >> 0 & 1) == 0) goto L_fe4c4;
  /* fe36c: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* fe370: strb wzr, [x19, #0x60] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(96)), ARC_W_R(c, 31));
  /* fe374: str w8, [x19, #0x5c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(92)), ARC_W_R(c, 8));
  /* fe378: b #0xfe4c4 */
  goto L_fe4c4;
L_fe37c:;
  /* fe37c: ldrb w8, [x19, #0x61] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(97))));
  /* fe380: mov w20, w1 */
  ARC_W_W(c, 20, ARC_W_R(c, 1));
  /* fe384: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fe388: b.ne #0xfe3ac */
  if (ARC_COND(c, 1)) goto L_fe3ac;
  /* fe38c: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fe390: bl #0x1437f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041300));
  fn1_1437f0(c);
  /* fe394: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fe398: b.eq #0xfe4c4 */
  if (ARC_COND(c, 0)) goto L_fe4c4;
  /* fe39c: and w0, w0, #0xff */
  ARC_W_W(c, 0, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* fe3a0: tbz w20, #0, #0xfe448 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_fe448;
  /* fe3a4: str w0, [x19, #0x5c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(92)), ARC_W_R(c, 0));
  /* fe3a8: b #0xfe4c4 */
  goto L_fe4c4;
L_fe3ac:;
  /* fe3ac: ldr w8, [x19, #0x58] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(88))));
  /* fe3b0: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* fe3b4: sub x23, x29, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe3b8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fe3bc: csinc w21, w8, wzr, gt */
  ARC_W_W(c, 21, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ((ARC_W_R(c, 31)) + 1)));
L_fe3c0:;
  /* fe3c0: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fe3c4: bl #0x1437f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041352));
  fn1_1437f0(c);
  /* fe3c8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fe3cc: b.eq #0xfe4c4 */
  if (ARC_COND(c, 0)) goto L_fe4c4;
  /* fe3d0: strb w0, [x23, x22] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 22)), ARC_W_R(c, 0));
  /* fe3d4: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* fe3d8: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* fe3dc: b.ne #0xfe3c0 */
  if (ARC_COND(c, 1)) goto L_fe3c0;
  /* fe3e0: sub x22, x29, #0xc */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* fe3e4: sub x23, x29, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(8)));
L_fe3e8:;
  /* fe3e8: ldp x0, x1, [x19, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(72));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* fe3ec: sub x2, x29, #8 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe3f0: add x3, x23, x21 */
  ARC_X_W(c, 3, (ARC_X_R(c, 23) + ARC_X_R(c, 21)));
  /* fe3f4: add x4, sp, #8 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(8)));
  /* fe3f8: sub x5, x29, #0xc */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* fe3fc: orr x6, x22, #1 */
  ARC_X_W(c, 6, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* fe400: mov x7, sp */
  ARC_X_W(c, 7, (c)->sp);
  /* fe404: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fe408: ldr x24, [x1] */
  ARC_X_W(c, 24, arc_ld64(ARC_X_R(c, 1)));
  /* fe40c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* fe410: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041428));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe414: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* fe418: b.ne #0xfe460 */
  if (ARC_COND(c, 1)) goto L_fe460;
  /* fe41c: ldr x8, [x19, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fe420: cmp x21, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(8));
  /* fe424: str x24, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* fe428: b.eq #0xfe488 */
  if (ARC_COND(c, 0)) goto L_fe488;
  /* fe42c: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fe430: bl #0x1437f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041460));
  fn1_1437f0(c);
  /* fe434: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fe438: b.eq #0xfe4c4 */
  if (ARC_COND(c, 0)) goto L_fe4c4;
  /* fe43c: strb w0, [x23, x21] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 21)), ARC_W_R(c, 0));
  /* fe440: add x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* fe444: b #0xfe3e8 */
  goto L_fe3e8;
L_fe448:;
  /* fe448: ldr x1, [x19, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fe44c: mov w19, w0 */
  ARC_W_W(c, 19, ARC_W_R(c, 0));
  /* fe450: bl #0x143808 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041492));
  fn1_143808(c);
  /* fe454: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fe458: csinv w0, w19, wzr, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? (ARC_W_R(c, 19)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* fe45c: b #0xfe4c4 */
  goto L_fe4c4;
L_fe460:;
  /* fe460: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* fe464: b.eq #0xfe488 */
  if (ARC_COND(c, 0)) goto L_fe488;
  /* fe468: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* fe46c: b.ne #0xfe478 */
  if (ARC_COND(c, 1)) goto L_fe478;
  /* fe470: ldurb w8, [x29, #-8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-8))));
  /* fe474: sturb w8, [x29, #-0xc] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 8));
L_fe478:;
  /* fe478: tbz w20, #0, #0xfe490 */
  if (((ARC_W_R(c, 20)) >> 0 & 1) == 0) goto L_fe490;
  /* fe47c: ldurb w0, [x29, #-0xc] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 29) + INT64_C(-12))));
  /* fe480: str w0, [x19, #0x5c] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(92)), ARC_W_R(c, 0));
  /* fe484: b #0xfe4c4 */
  goto L_fe4c4;
L_fe488:;
  /* fe488: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* fe48c: b #0xfe4c4 */
  goto L_fe4c4;
L_fe490:;
  /* fe490: sub x9, x29, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe494: mov w8, w21 */
  ARC_W_W(c, 8, ARC_W_R(c, 21));
  /* fe498: sub x20, x9, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 9) - UINT64_C(1)));
L_fe49c:;
  /* fe49c: subs x21, x8, #1 */
  ARC_X_W(c, 21, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1)));
  /* fe4a0: b.lt #0xfe4c0 */
  if (ARC_COND(c, 11)) goto L_fe4c0;
  /* fe4a4: ldrb w0, [x20, x8] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 20) + ARC_X_R(c, 8))));
  /* fe4a8: ldr x1, [x19, #0x40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fe4ac: bl #0x143808 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1041584));
  fn1_143808(c);
  /* fe4b0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* fe4b4: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* fe4b8: b.ne #0xfe49c */
  if (ARC_COND(c, 1)) goto L_fe49c;
  /* fe4bc: b #0xfe4c4 */
  goto L_fe4c4;
L_fe4c0:;
  /* fe4c0: ldurb w0, [x29, #-0xc] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 29) + INT64_C(-12))));
L_fe4c4:;
  /* fe4c4: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fe4c8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fe4cc: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fe4d0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fe4d4: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* fe4d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fe4dc: ret  */
  return;
}

void fn1_10a1b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039017904));
  /* 10a1b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10a1b4: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* 10a1b8: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10a1bc: str x23, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), ARC_X_R(c, 23));
  /* 10a1c0: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10a1c4: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10a1c8: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 10a1cc: ldr w9, [x2, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 2) + INT64_C(8))));
  /* 10a1d0: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 10a1d4: add x10, x29, #0x18 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a1d8: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10a1dc: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10a1e0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10a1e4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10a1e8: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 10a1ec: orr x8, x10, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) | UINT64_C(1)));
  /* 10a1f0: tbz w9, #0xb, #0x10a21c */
  if (((ARC_W_R(c, 9)) >> 11 & 1) == 0) goto L_10a21c;
  /* 10a1f4: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10a1f8: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10a1fc: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10a200: b.eq #0x10a21c */
  if (ARC_COND(c, 0)) goto L_10a21c;
  /* 10a204: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10a208: b.eq #0x10a21c */
  if (ARC_COND(c, 0)) goto L_10a21c;
  /* 10a20c: add x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a210: mov w10, #0x2b */
  ARC_W_W(c, 10, UINT64_C(43));
  /* 10a214: orr x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10a218: strb w10, [x29, #0x19] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(25)), ARC_W_R(c, 10));
L_10a21c:;
  /* 10a21c: tbz w9, #9, #0x10a228 */
  if (((ARC_W_R(c, 9)) >> 9 & 1) == 0) goto L_10a228;
  /* 10a220: mov w10, #0x23 */
  ARC_W_W(c, 10, UINT64_C(35));
  /* 10a224: strb w10, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
L_10a228:;
  /* 10a228: mov w10, #0x4a */
  ARC_W_W(c, 10, UINT64_C(74));
  /* 10a22c: mov w11, #0x6c */
  ARC_W_W(c, 11, UINT64_C(108));
  /* 10a230: and w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) & ARC_W_R(c, 10)));
  /* 10a234: strb w11, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 11));
  /* 10a238: cmp w10, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(64));
  /* 10a23c: b.eq #0x10a25c */
  if (ARC_COND(c, 0)) goto L_10a25c;
  /* 10a240: cmp w10, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(8));
  /* 10a244: b.ne #0x10a264 */
  if (ARC_COND(c, 1)) goto L_10a264;
  /* 10a248: tst w9, #0x4000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(16384)));
  /* 10a24c: mov w9, #0x58 */
  ARC_W_W(c, 9, UINT64_C(88));
  /* 10a250: mov w10, #0x78 */
  ARC_W_W(c, 10, UINT64_C(120));
  /* 10a254: csel w9, w10, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* 10a258: b #0x10a268 */
  goto L_10a268;
L_10a25c:;
  /* 10a25c: mov w9, #0x6f */
  ARC_W_W(c, 9, UINT64_C(111));
  /* 10a260: b #0x10a268 */
  goto L_10a268;
L_10a264:;
  /* 10a264: mov w9, #0x64 */
  ARC_W_W(c, 9, UINT64_C(100));
L_10a268:;
  /* 10a268: strb w9, [x8, #1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 9));
  /* 10a26c: nop  */
  /* nop: no architectural effect here */
  /* 10a270: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a274: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10a278: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10a27c: tbz w8, #0, #0x10a378 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10a378;
L_10a280:;
  /* 10a280: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10a284: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a288: add x3, x29, #0x18 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 10a28c: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 10a290: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10a294: sub x22, x29, #0x18 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a298: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090204));
  fn1_136860(c);
  /* 10a29c: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10a2a0: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10a2a4: add x22, x22, w0, sxtw */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 0)))));
  /* 10a2a8: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10a2ac: mov x23, x22 */
  ARC_X_W(c, 23, ARC_X_R(c, 22));
  /* 10a2b0: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10a2b4: b.eq #0x10a310 */
  if (ARC_COND(c, 0)) goto L_10a310;
  /* 10a2b8: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10a2bc: b.ne #0x10a30c */
  if (ARC_COND(c, 1)) goto L_10a30c;
  /* 10a2c0: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* 10a2c4: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10a2c8: b.eq #0x10a2d4 */
  if (ARC_COND(c, 0)) goto L_10a2d4;
  /* 10a2cc: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10a2d0: b.ne #0x10a2e0 */
  if (ARC_COND(c, 1)) goto L_10a2e0;
L_10a2d4:;
  /* 10a2d4: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a2d8: orr x23, x8, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10a2dc: b #0x10a310 */
  goto L_10a310;
L_10a2e0:;
  /* 10a2e0: cmp w0, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(2));
  /* 10a2e4: b.lt #0x10a30c */
  if (ARC_COND(c, 11)) goto L_10a30c;
  /* 10a2e8: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10a2ec: b.ne #0x10a30c */
  if (ARC_COND(c, 1)) goto L_10a30c;
  /* 10a2f0: ldurb w8, [x29, #-0x17] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-23))));
  /* 10a2f4: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10a2f8: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10a2fc: b.ne #0x10a30c */
  if (ARC_COND(c, 1)) goto L_10a30c;
  /* 10a300: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a304: orr x23, x8, #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10a308: b #0x10a310 */
  goto L_10a310;
L_10a30c:;
  /* 10a30c: sub x23, x29, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(24)));
L_10a310:;
  /* 10a310: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a314: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10a318: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090332));
  fn1_143460(c);
  /* 10a31c: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* 10a320: add x3, sp, #0x1b */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(27)));
  /* 10a324: add x4, sp, #0x10 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(16)));
  /* 10a328: add x5, sp, #8 */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(8)));
  /* 10a32c: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 10a330: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 10a334: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10a338: bl #0x1438f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090364));
  fn1_1438f8(c);
  /* 10a33c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a340: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090372));
  fn1_143478(c);
  /* 10a344: ldp x3, x2, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 10a348: add x1, sp, #0x1b */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(27)));
  /* 10a34c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10a350: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10a354: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10a358: bl #0x10b5d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090396));
  fn1_10b5d8(c);
  /* 10a35c: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10a360: ldr x23, [sp, #0x70] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(112))));
  /* 10a364: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10a368: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10a36c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* 10a370: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10a374: ret  */
  return;
L_10a378:;
  /* 10a378: nop  */
  /* nop: no architectural effect here */
  /* 10a37c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a380: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090436));
  fn1_1424b8(c);
  /* 10a384: cbz w0, #0x10a280 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10a280;
  /* 10a388: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10a38c: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10a390: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10a394: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10a398: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090460));
  fn1_1441e0(c);
  /* 10a39c: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10a3a0: nop  */
  /* nop: no architectural effect here */
  /* 10a3a4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a3a8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090476));
  fn1_1424d0(c);
  /* 10a3ac: b #0x10a280 */
  goto L_10a280;
  /* 10a3b0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10a3b4: nop  */
  /* nop: no architectural effect here */
  /* 10a3b8: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10a3bc: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090496));
  fn1_1424e8(c);
  /* 10a3c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a3c4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090504));
  fn1_9cc20(c);
  /* 10a3c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10a3cc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 10a3d0: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090516));
  fn1_143478(c);
  /* 10a3d4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10a3d8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1090524));
  fn1_9cc20(c);
}

void fn1_112acc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039053004));
  /* 112acc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 112ad0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 112ad4: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 112ad8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 112adc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112ae0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 112ae4: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 112ae8: mov x21, x5 */
  ARC_X_W(c, 21, ARC_X_R(c, 5));
  /* 112aec: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 112af0: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 112af4: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 112af8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 112afc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 112b00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125124));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 112b04: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 112b08: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 112b0c: ldr x10, [x0, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 112b10: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 112b14: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 112b18: ldr x8, [x0, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 112b1c: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 112b20: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 112b24: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 112b28: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 112b2c: cmn x10, x8 */
  (void)arc_add64(c, ARC_X_R(c, 10), ARC_X_R(c, 8), 0);
  /* 112b30: b.ne #0x112b44 */
  if (ARC_COND(c, 1)) goto L_112b44;
  /* 112b34: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 112b38: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 112b3c: str w8, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 8));
  /* 112b40: b #0x112b9c */
  goto L_112b9c;
L_112b44:;
  /* 112b44: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 112b48: add x3, x0, #0x30 */
  ARC_X_W(c, 3, (ARC_X_R(c, 0) + UINT64_C(48)));
  /* 112b4c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 112b50: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 112b54: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 112b58: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* 112b5c: mov x5, x20 */
  ARC_X_W(c, 5, ARC_X_R(c, 20));
  /* 112b60: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 112b64: bl #0x104878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1125224));
  fn1_104878(c);
  /* 112b68: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 112b6c: subs x9, x0, x24 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 24)));
  /* 112b70: b.ne #0x112b84 */
  if (ARC_COND(c, 1)) goto L_112b84;
  /* 112b74: cmp w8, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(12));
  /* 112b78: b.ne #0x112b84 */
  if (ARC_COND(c, 1)) goto L_112b84;
  /* 112b7c: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 112b80: b #0x112b9c */
  goto L_112b9c;
L_112b84:;
  /* 112b84: cmp x9, #0x18 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(24));
  /* 112b88: b.ne #0x112b9c */
  if (ARC_COND(c, 1)) goto L_112b9c;
  /* 112b8c: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* 112b90: b.gt #0x112b9c */
  if (ARC_COND(c, 12)) goto L_112b9c;
  /* 112b94: add w8, w8, #0xc */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(12)));
  /* 112b98: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_112b9c:;
  /* 112b9c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 112ba0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 112ba4: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 112ba8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 112bac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 112bb0: ret  */
  return;
}

void fn1_113fb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058360));
  /* 113fb8: bti c */
  /* bti: no architectural effect here */
  /* 113fbc: ldr w0, [x0, #0x7c] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(124))));
  /* 113fc0: ret  */
  return;
}

void fn1_11eb2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039102252));
  /* 11eb2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11eb30: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11eb34: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11eb38: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11eb3c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11eb40: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11eb44: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11eb48: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11eb4c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11eb50: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11eb54: ldr x23, [x23, #0xb58] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(2904))));
  /* 11eb58: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11eb5c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11eb60: b.eq #0x11ec1c */
  if (ARC_COND(c, 0)) goto L_11ec1c;
  /* 11eb64: nop  */
  /* nop: no architectural effect here */
  /* 11eb68: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11eb6c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174384));
  fn1_142518(c);
  /* 11eb70: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11eb74: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11eb78: b.ne #0x11eba4 */
  if (ARC_COND(c, 1)) goto L_11eba4;
  /* 11eb7c: nop  */
  /* nop: no architectural effect here */
  /* 11eb80: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11eb84: nop  */
  /* nop: no architectural effect here */
  /* 11eb88: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11eb8c:;
  /* 11eb8c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11eb90: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11eb94: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174424));
  fn1_142530(c);
  /* 11eb98: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11eb9c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11eba0: b.eq #0x11eb8c */
  if (ARC_COND(c, 0)) goto L_11eb8c;
L_11eba4:;
  /* 11eba4: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11eba8: cbz x8, #0x11ebbc */
  if ((ARC_X_R(c, 8)) == 0) goto L_11ebbc;
  /* 11ebac: nop  */
  /* nop: no architectural effect here */
  /* 11ebb0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ebb4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174456));
  fn1_142560(c);
  /* 11ebb8: b #0x11ec1c */
  goto L_11ec1c;
L_11ebbc:;
  /* 11ebbc: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11ebc0: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11ebc4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11ebc8: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11ebcc: nop  */
  /* nop: no architectural effect here */
  /* 11ebd0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ebd4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174488));
  fn1_142560(c);
  /* 11ebd8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11ebdc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11ebe0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11ebe4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174504));
  fn1_a2030(c);
  /* 11ebe8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11ebec: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11ebf0: nop  */
  /* nop: no architectural effect here */
  /* 11ebf4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ebf8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174524));
  fn1_142518(c);
  /* 11ebfc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11ec00: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11ec04: nop  */
  /* nop: no architectural effect here */
  /* 11ec08: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11ec0c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174544));
  fn1_142560(c);
  /* 11ec10: nop  */
  /* nop: no architectural effect here */
  /* 11ec14: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11ec18: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174556));
  fn1_142578(c);
L_11ec1c:;
  /* 11ec1c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11ec20: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11ec24: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11ec28: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11ec2c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174576));
  fn1_db2e0(c);
  /* 11ec30: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11ec34: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11ec38: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11ec3c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11ec40: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11ec44: b.hi #0x11ec70 */
  if (ARC_COND(c, 8)) goto L_11ec70;
  /* 11ec48: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11ec4c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11ec50: b.ls #0x11ec64 */
  if (ARC_COND(c, 9)) goto L_11ec64;
  /* 11ec54: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11ec58: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174620));
  fn1_1352bc(c);
  /* 11ec5c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11ec60: b #0x11ec70 */
  goto L_11ec70;
L_11ec64:;
  /* 11ec64: b.hs #0x11ec70 */
  if (ARC_COND(c, 2)) goto L_11ec70;
  /* 11ec68: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11ec6c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11ec70:;
  /* 11ec70: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11ec74: cbz x20, #0x11ec98 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11ec98;
  /* 11ec78: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11ec7c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11ec80: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174660));
  fn1_bd950(c);
  /* 11ec84: cbnz x0, #0x11ec98 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11ec98;
  /* 11ec88: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11ec8c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11ec90: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11ec94: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174680));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11ec98:;
  /* 11ec98: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11ec9c: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11eca0: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11eca4: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11eca8: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11ecac: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11ecb0: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11ecb4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11ecb8: ret  */
  return;
  /* 11ecbc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11ecc0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11ecc4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11ecc8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174732));
  fn1_bd950(c);
  /* 11eccc: cbnz x0, #0x11ecf4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11ecf4;
  /* 11ecd0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11ecd4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11ecd8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11ecdc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174752));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11ece0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11ece4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174760));
  fn1_9cc20(c);
  /* 11ece8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11ecec: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11ecf0: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174772));
  fn1_d2a78(c);
L_11ecf4:;
  /* 11ecf4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11ecf8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1174780));
  fn1_9cc20(c);
}

void fn1_1264c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133376));
  /* 1264c0: bti c */
  /* bti: no architectural effect here */
  /* 1264c4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 1264c8: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 1264cc: b.eq #0x1264fc */
  if (ARC_COND(c, 0)) goto L_1264fc;
  /* 1264d0: nop  */
  /* nop: no architectural effect here */
  /* 1264d4: adr x8, #0x75c10 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(482320)));
L_1264d8:;
  /* 1264d8: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* 1264dc: cmp w9, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(127));
  /* 1264e0: b.hi #0x1264fc */
  if (ARC_COND(c, 8)) goto L_1264fc;
  /* 1264e4: ldr x9, [x8, x9, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 1264e8: tst x9, x1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & ARC_X_R(c, 1)));
  /* 1264ec: b.eq #0x1264fc */
  if (ARC_COND(c, 0)) goto L_1264fc;
  /* 1264f0: add x0, x0, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* 1264f4: cmp x0, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 3));
  /* 1264f8: b.ne #0x1264d8 */
  if (ARC_COND(c, 1)) goto L_1264d8;
L_1264fc:;
  /* 1264fc: ret  */
  return;
}

void fn1_128c08(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039143432));
  /* 128c08: bti c */
  /* bti: no architectural effect here */
  /* 128c0c: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 128c10: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 128c14: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 128c18: str x3, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 3));
  /* 128c1c: b.lt #0x128c50 */
  if (ARC_COND(c, 11)) goto L_128c50;
  /* 128c20: tbz w7, #2, #0x128c50 */
  if (((ARC_W_R(c, 7)) >> 2 & 1) == 0) goto L_128c50;
  /* 128c24: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 128c28: cmp w8, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(239));
  /* 128c2c: b.ne #0x128c50 */
  if (ARC_COND(c, 1)) goto L_128c50;
  /* 128c30: ldrb w8, [x0, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 128c34: cmp w8, #0xbb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(187));
  /* 128c38: b.ne #0x128c50 */
  if (ARC_COND(c, 1)) goto L_128c50;
  /* 128c3c: ldrb w8, [x0, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 128c40: cmp w8, #0xbf */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(191));
  /* 128c44: b.ne #0x128c50 */
  if (ARC_COND(c, 1)) goto L_128c50;
  /* 128c48: add x0, x0, #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3)));
  /* 128c4c: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
L_128c50:;
  /* 128c50: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 128c54: b.hs #0x128e5c */
  if (ARC_COND(c, 2)) goto L_128e5c;
  /* 128c58: ldr x8, [x5] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 5)));
  /* 128c5c: mov w9, #0x3fc0 */
  ARC_W_W(c, 9, UINT64_C(16320));
  /* 128c60: mov w10, #0xd800 */
  ARC_W_W(c, 10, UINT64_C(55296));
  /* 128c64: mov w11, #0xdc00 */
  ARC_W_W(c, 11, UINT64_C(56320));
  /* 128c68: b #0x128c8c */
  goto L_128c8c;
L_128c6c:;
  /* 128c6c: strh w12, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 12));
  /* 128c70: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
L_128c74:;
  /* 128c74: add x0, x0, x12 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 12)));
  /* 128c78: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* 128c7c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 128c80: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 128c84: str x8, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 8));
  /* 128c88: b.hs #0x128e5c */
  if (ARC_COND(c, 2)) goto L_128e5c;
L_128c8c:;
  /* 128c8c: cmp x8, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 4));
  /* 128c90: b.hs #0x128e6c */
  if (ARC_COND(c, 2)) goto L_128e6c;
  /* 128c94: ldrb w12, [x0] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 0)));
  /* 128c98: cmp x6, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 12));
  /* 128c9c: b.lo #0x128e64 */
  if (ARC_COND(c, 3)) goto L_128e64;
  /* 128ca0: tbz w12, #7, #0x128c6c */
  if (((ARC_W_R(c, 12)) >> 7 & 1) == 0) goto L_128c6c;
  /* 128ca4: cmp w12, #0xc2 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(194));
  /* 128ca8: b.lo #0x128e64 */
  if (ARC_COND(c, 3)) goto L_128e64;
  /* 128cac: cmp w12, #0xdf */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(223));
  /* 128cb0: b.hi #0x128cec */
  if (ARC_COND(c, 8)) goto L_128cec;
  /* 128cb4: sub x13, x1, x0 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 128cb8: cmp x13, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(2));
  /* 128cbc: b.lt #0x128e6c */
  if (ARC_COND(c, 11)) goto L_128e6c;
  /* 128cc0: ldrb w13, [x0, #1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 128cc4: and w14, w13, #0xc0 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) & UINT64_C(192)));
  /* 128cc8: cmp w14, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(128));
  /* 128ccc: b.ne #0x128e64 */
  if (ARC_COND(c, 1)) goto L_128e64;
  /* 128cd0: and w13, w13, #0x3f */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) & UINT64_C(63)));
  /* 128cd4: bfi w13, w12, #6, #5 */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 13)) & UINT64_C(4294965311)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(31)) << 6)));
  /* 128cd8: cmp x6, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 13));
  /* 128cdc: b.lo #0x128e64 */
  if (ARC_COND(c, 3)) goto L_128e64;
  /* 128ce0: strh w13, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 13));
  /* 128ce4: mov w12, #2 */
  ARC_W_W(c, 12, UINT64_C(2));
  /* 128ce8: b #0x128c74 */
  goto L_128c74;
L_128cec:;
  /* 128cec: cmp w12, #0xef */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(239));
  /* 128cf0: b.hi #0x128d24 */
  if (ARC_COND(c, 8)) goto L_128d24;
  /* 128cf4: sub x14, x1, x0 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 128cf8: cmp x14, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(2));
  /* 128cfc: b.lt #0x128e6c */
  if (ARC_COND(c, 11)) goto L_128e6c;
  /* 128d00: ldrb w13, [x0, #1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 128d04: cmp w12, #0xed */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(237));
  /* 128d08: b.eq #0x128d5c */
  if (ARC_COND(c, 0)) goto L_128d5c;
  /* 128d0c: cmp w12, #0xe0 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(224));
  /* 128d10: b.ne #0x128d6c */
  if (ARC_COND(c, 1)) goto L_128d6c;
  /* 128d14: and w15, w13, #0xe0 */
  ARC_W_W(c, 15, (ARC_W_R(c, 13) & UINT64_C(224)));
  /* 128d18: cmp w15, #0xa0 */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(160));
  /* 128d1c: b.eq #0x128d78 */
  if (ARC_COND(c, 0)) goto L_128d78;
  /* 128d20: b #0x128e64 */
  goto L_128e64;
L_128d24:;
  /* 128d24: cmp w12, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(244));
  /* 128d28: b.hi #0x128e64 */
  if (ARC_COND(c, 8)) goto L_128e64;
  /* 128d2c: sub x15, x1, x0 */
  ARC_X_W(c, 15, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 128d30: cmp x15, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(2));
  /* 128d34: b.lt #0x128e6c */
  if (ARC_COND(c, 11)) goto L_128e6c;
  /* 128d38: ldrb w13, [x0, #1] */
  ARC_W_W(c, 13, arc_ld8((ARC_X_R(c, 0) + INT64_C(1))));
  /* 128d3c: cmp w12, #0xf4 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(244));
  /* 128d40: b.eq #0x128db4 */
  if (ARC_COND(c, 0)) goto L_128db4;
  /* 128d44: cmp w12, #0xf0 */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(240));
  /* 128d48: b.ne #0x128dc4 */
  if (ARC_COND(c, 1)) goto L_128dc4;
  /* 128d4c: sub w14, w13, #0x90 */
  ARC_W_W(c, 14, (ARC_W_R(c, 13) - UINT64_C(144)));
  /* 128d50: cmp w14, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 14), UINT64_C(48));
  /* 128d54: b.lo #0x128dd0 */
  if (ARC_COND(c, 3)) goto L_128dd0;
  /* 128d58: b #0x128e64 */
  goto L_128e64;
L_128d5c:;
  /* 128d5c: sxtb w15, w13 */
  ARC_W_W(c, 15, ((int32_t)(int8_t)(ARC_W_R(c, 13))));
  /* 128d60: cmn w15, #0x60 */
  (void)arc_add32(c, ARC_W_R(c, 15), UINT64_C(96), 0);
  /* 128d64: b.lt #0x128d78 */
  if (ARC_COND(c, 11)) goto L_128d78;
  /* 128d68: b #0x128e64 */
  goto L_128e64;
L_128d6c:;
  /* 128d6c: sxtb w15, w13 */
  ARC_W_W(c, 15, ((int32_t)(int8_t)(ARC_W_R(c, 13))));
  /* 128d70: cmn w15, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 15), UINT64_C(65), 0);
  /* 128d74: b.gt #0x128e64 */
  if (ARC_COND(c, 12)) goto L_128e64;
L_128d78:;
  /* 128d78: cmp x14, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(2));
  /* 128d7c: b.eq #0x128e6c */
  if (ARC_COND(c, 0)) goto L_128e6c;
  /* 128d80: ldrb w14, [x0, #2] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 128d84: and w15, w14, #0xc0 */
  ARC_W_W(c, 15, (ARC_W_R(c, 14) & UINT64_C(192)));
  /* 128d88: cmp w15, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 15), UINT64_C(128));
  /* 128d8c: b.ne #0x128e64 */
  if (ARC_COND(c, 1)) goto L_128e64;
  /* 128d90: lsl w12, w12, #0xc */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 12)) << ((UINT64_C(12)) & 31)));
  /* 128d94: bfi w12, w13, #6, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294963263)) | ((((uint32_t)(ARC_W_R(c, 13))) & UINT64_C(63)) << 6)));
  /* 128d98: bfxil w12, w14, #0, #6 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 14))) >> 0) & UINT64_C(63))));
  /* 128d9c: and w13, w12, #0xffff */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) & UINT64_C(65535)));
  /* 128da0: cmp x6, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 13));
  /* 128da4: b.lo #0x128e64 */
  if (ARC_COND(c, 3)) goto L_128e64;
  /* 128da8: strh w12, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 12));
  /* 128dac: mov w12, #3 */
  ARC_W_W(c, 12, UINT64_C(3));
  /* 128db0: b #0x128c74 */
  goto L_128c74;
L_128db4:;
  /* 128db4: sxtb w14, w13 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 13))));
  /* 128db8: cmn w14, #0x70 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(112), 0);
  /* 128dbc: b.lt #0x128dd0 */
  if (ARC_COND(c, 11)) goto L_128dd0;
  /* 128dc0: b #0x128e64 */
  goto L_128e64;
L_128dc4:;
  /* 128dc4: sxtb w14, w13 */
  ARC_W_W(c, 14, ((int32_t)(int8_t)(ARC_W_R(c, 13))));
  /* 128dc8: cmn w14, #0x41 */
  (void)arc_add32(c, ARC_W_R(c, 14), UINT64_C(65), 0);
  /* 128dcc: b.gt #0x128e64 */
  if (ARC_COND(c, 12)) goto L_128e64;
L_128dd0:;
  /* 128dd0: cmp x15, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(2));
  /* 128dd4: b.eq #0x128e6c */
  if (ARC_COND(c, 0)) goto L_128e6c;
  /* 128dd8: ldrb w14, [x0, #2] */
  ARC_W_W(c, 14, arc_ld8((ARC_X_R(c, 0) + INT64_C(2))));
  /* 128ddc: and w16, w14, #0xc0 */
  ARC_W_W(c, 16, (ARC_W_R(c, 14) & UINT64_C(192)));
  /* 128de0: cmp w16, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(128));
  /* 128de4: b.ne #0x128e64 */
  if (ARC_COND(c, 1)) goto L_128e64;
  /* 128de8: cmp x15, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(3));
  /* 128dec: b.eq #0x128e6c */
  if (ARC_COND(c, 0)) goto L_128e6c;
  /* 128df0: ldrb w15, [x0, #3] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 0) + INT64_C(3))));
  /* 128df4: and w16, w15, #0xc0 */
  ARC_W_W(c, 16, (ARC_W_R(c, 15) & UINT64_C(192)));
  /* 128df8: cmp w16, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 16), UINT64_C(128));
  /* 128dfc: b.ne #0x128e64 */
  if (ARC_COND(c, 1)) goto L_128e64;
  /* 128e00: sub x16, x4, x8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 4) - ARC_X_R(c, 8)));
  /* 128e04: cmp x16, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 16), UINT64_C(3));
  /* 128e08: b.lt #0x128e6c */
  if (ARC_COND(c, 11)) goto L_128e6c;
  /* 128e0c: ubfiz x16, x12, #0x12, #3 */
  ARC_X_W(c, 16, ((uint64_t)((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(7))) << 18));
  /* 128e10: bfi x16, x13, #0xc, #6 */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(18446744073709293567)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(63)) << 12)));
  /* 128e14: bfi x16, x14, #6, #6 */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(18446744073709547583)) | ((((uint64_t)(ARC_X_R(c, 14))) & UINT64_C(63)) << 6)));
  /* 128e18: bfxil x16, x15, #0, #6 */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(18446744073709551552)) | ((((uint64_t)(ARC_X_R(c, 15))) >> 0) & UINT64_C(63))));
  /* 128e1c: cmp x16, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 6));
  /* 128e20: b.hi #0x128e64 */
  if (ARC_COND(c, 8)) goto L_128e64;
  /* 128e24: ubfiz w12, w12, #2, #3 */
  ARC_W_W(c, 12, ((uint32_t)((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(7))) << 2));
  /* 128e28: ubfiz w16, w13, #2, #4 */
  ARC_W_W(c, 16, ((uint32_t)((((uint32_t)(ARC_W_R(c, 13))) & UINT64_C(15))) << 2));
  /* 128e2c: bfxil w12, w13, #4, #2 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967292)) | ((((uint32_t)(ARC_W_R(c, 13))) >> 4) & UINT64_C(3))));
  /* 128e30: and x13, x15, #0x3f */
  ARC_X_W(c, 13, (ARC_X_R(c, 15) & UINT64_C(63)));
  /* 128e34: bfi w13, w14, #6, #4 */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 13)) & UINT64_C(4294966335)) | ((((uint32_t)(ARC_W_R(c, 14))) & UINT64_C(15)) << 6)));
  /* 128e38: orr w12, w16, w12, lsl #6 */
  ARC_W_W(c, 12, (ARC_W_R(c, 16) | ((uint32_t)(ARC_W_R(c, 12)) << 6)));
  /* 128e3c: orr w13, w13, w11 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) | ARC_W_R(c, 11)));
  /* 128e40: bfxil w12, w14, #4, #2 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967292)) | ((((uint32_t)(ARC_W_R(c, 14))) >> 4) & UINT64_C(3))));
  /* 128e44: add w12, w12, w9 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + ARC_W_R(c, 9)));
  /* 128e48: orr w12, w12, w10 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) | ARC_W_R(c, 10)));
  /* 128e4c: strh w12, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 12));
  /* 128e50: mov w12, #4 */
  ARC_W_W(c, 12, UINT64_C(4));
  /* 128e54: strh w13, [x8, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(2));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 13));
  }
  /* 128e58: b #0x128c74 */
  goto L_128c74;
L_128e5c:;
  /* 128e5c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 128e60: ret  */
  return;
L_128e64:;
  /* 128e64: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 128e68: ret  */
  return;
L_128e6c:;
  /* 128e6c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 128e70: ret  */
  return;
}

void fn1_12a788(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039150472));
  /* 12a788: bti c */
  /* bti: no architectural effect here */
  /* 12a78c: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 12a790: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a794: ret  */
  return;
}

void fn1_12bc8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155852));
  /* 12bc8c: bti c */
  /* bti: no architectural effect here */
  /* 12bc90: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12bc94: ldr x8, [x8, #0xcc8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3272))));
  /* 12bc98: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12bc9c: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12bca0: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 12bca4: tbnz w9, #0, #0x12bcac */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12bcac;
  /* 12bca8: ret  */
  return;
L_12bcac:;
  /* 12bcac: ldr x8, [x0, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* 12bcb0: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12bcb4: and x1, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12bcb8: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12bcbc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1323c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039182276));
  /* 1323c4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1323c8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1323cc: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1323d0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1323d4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1323d8: nop  */
  /* nop: no architectural effect here */
  /* 1323dc: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 1323e0: ldr x20, [x0] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 0)));
  /* 1323e4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1323e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1323ec: adrp x21, #0x15d000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 1323f0: tbz w8, #0, #0x13241c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13241c;
L_1323f4:;
  /* 1323f4: ldr x8, [x21, #0xc30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(3120))));
  /* 1323f8: cmp x20, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1323fc: b.eq #0x132408 */
  if (ARC_COND(c, 0)) goto L_132408;
  /* 132400: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 132404: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254408));
  fn1_144210(c);
L_132408:;
  /* 132408: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13240c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 132410: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132414: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 132418: ret  */
  return;
L_13241c:;
  /* 13241c: nop  */
  /* nop: no architectural effect here */
  /* 132420: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 132424: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254440));
  fn1_1424b8(c);
  /* 132428: cbz w0, #0x1323f4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1323f4;
  /* 13242c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 132430: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 132434: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 132438: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 13243c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254464));
  fn1_1441e0(c);
  /* 132440: str x0, [x21, #0xc30] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 132444: nop  */
  /* nop: no architectural effect here */
  /* 132448: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 13244c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254480));
  fn1_1424d0(c);
  /* 132450: b #0x1323f4 */
  goto L_1323f4;
  /* 132454: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 132458: nop  */
  /* nop: no architectural effect here */
  /* 13245c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 132460: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254500));
  fn1_1424e8(c);
  /* 132464: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 132468: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254508));
  fn1_a1454(c);
  /* 13246c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254512));
  fn1_a1454(c);
}

void fn1_134c34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192628));
  /* 134c34: bti c */
  /* bti: no architectural effect here */
  /* 134c38: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 134c3c: b #0x143d00 */
  fn1_143d00(c); return;
}

void fn1_13701c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039201820));
  /* 13701c: bti c */
  /* bti: no architectural effect here */
  /* 137020: ldp x8, x9, [x1, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 137024: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 137028: b.eq #0x137048 */
  if (ARC_COND(c, 0)) goto L_137048;
  /* 13702c: ldr w9, [x8] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 8)));
  /* 137030: mov w10, #-0x2028 */
  ARC_W_W(c, 10, UINT64_C(18446744073709543384));
  /* 137034: add w10, w9, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) + ARC_W_R(c, 10)));
  /* 137038: cmp w10, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(2));
  /* 13703c: ccmp w9, #0xd, #4, hs */
  if (ARC_COND(c, 2)) { (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(13)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 137040: ccmp w9, #0xa, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(10)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* 137044: b.ne #0x137058 */
  if (ARC_COND(c, 1)) goto L_137058;
L_137048:;
  /* 137048: mov w9, #-0x3e1 */
  ARC_W_W(c, 9, UINT64_C(18446744073709550623));
  /* 13704c: str xzr, [x1, #0x50] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(80)), ARC_X_R(c, 31));
  /* 137050: str w9, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 9));
  /* 137054: ret  */
  return;
L_137058:;
  /* 137058: add x10, x8, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 13705c: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 137060: mov w9, #-0x3e3 */
  ARC_W_W(c, 9, UINT64_C(18446744073709550621));
  /* 137064: str w9, [x1] */
  arc_st32(ARC_X_R(c, 1), ARC_W_R(c, 9));
  /* 137068: str x10, [x1, #0x10] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(16)), ARC_X_R(c, 10));
  /* 13706c: str x8, [x1, #0x50] */
  arc_st64((ARC_X_R(c, 1) + INT64_C(80)), ARC_X_R(c, 8));
  /* 137070: ret  */
  return;
}

void fn1_13a5d0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039215568));
  /* 13a5d0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13a5d4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13a5d8: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13a5dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13a5e0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13a5e4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13a5e8: cbz x1, #0x13a60c */
  if ((ARC_X_R(c, 1)) == 0) goto L_13a60c;
  /* 13a5ec: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 13a5f0: nop  */
  /* nop: no architectural effect here */
  /* 13a5f4: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a5f8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13a5fc: tbz w8, #0, #0x13a6ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a6ac;
L_13a600:;
  /* 13a600: nop  */
  /* nop: no architectural effect here */
  /* 13a604: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13a608: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
L_13a60c:;
  /* 13a60c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 13a610: bl #0x13ba8c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287700));
  fn1_13ba8c(c);
  /* 13a614: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13a618: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 13a61c: cbz x8, #0x13a638 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13a638;
  /* 13a620: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a624: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13a628: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13a62c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a630: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13a634: b #0x1445d0 */
  fn1_1445d0(c); return;
L_13a638:;
  /* 13a638: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13a63c: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a640: cbz x20, #0x13a654 */
  if ((ARC_X_R(c, 20)) == 0) goto L_13a654;
  /* 13a644: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 13a648: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a64c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287760));
  fn1_bd950(c);
  /* 13a650: cbz x0, #0x13a664 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13a664;
L_13a654:;
  /* 13a654: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13a658: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a65c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13a660: ret  */
  return;
L_13a664:;
  /* 13a664: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 13a668: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13a66c: ldr x8, [x19], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13a670: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13a674: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287800));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13a678: ldar x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13a67c: cbz x8, #0x13a690 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13a690;
  /* 13a680: add x1, x20, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 13a684: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13a688: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287820));
  fn1_bd950(c);
  /* 13a68c: cbnz x0, #0x13a654 */
  if ((ARC_X_R(c, 0)) != 0) goto L_13a654;
L_13a690:;
  /* 13a690: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13a694: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13a698: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13a69c: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13a6a0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a6a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13a6a8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_13a6ac:;
  /* 13a6ac: nop  */
  /* nop: no architectural effect here */
  /* 13a6b0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a6b4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287864));
  fn1_1424b8(c);
  /* 13a6b8: cbz w0, #0x13a600 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13a600;
  /* 13a6bc: nop  */
  /* nop: no architectural effect here */
  /* 13a6c0: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a6c4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287880));
  fn1_1424d0(c);
  /* 13a6c8: b #0x13a600 */
  goto L_13a600;
}

void fn1_141188(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039243144));
  /* 141188: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 14118c: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 141190: stp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 141194: str x21, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), ARC_X_R(c, 21));
  /* 141198: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 14119c: add x29, sp, #0x90 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(144)));
  /* 1411a0: stur wzr, [x29, #-0x10] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-16)), ARC_W_R(c, 31));
  /* 1411a4: nop  */
  /* nop: no architectural effect here */
  /* 1411a8: adr x9, #0x159210 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 1411ac: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 1411b0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1411b4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1411b8: mov x21, x8 */
  ARC_X_W(c, 21, ARC_X_R(c, 8));
  /* 1411bc: tbz w9, #0, #0x141240 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_141240;
L_1411c0:;
  /* 1411c0: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 1411c4: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1411c8: nop  */
  /* nop: no architectural effect here */
  /* 1411cc: adr x10, #0x156d40 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 1411d0: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1411d4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1411d8: stur x10, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 10));
  /* 1411dc: csinc x0, x9, x20, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 1411e0: bl #0x144588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315300));
  fn1_144588(c);
  /* 1411e4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1411e8: b.ne #0x141210 */
  if (ARC_COND(c, 1)) goto L_141210;
  /* 1411ec: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315312));
  fn1_142a58(c);
  /* 1411f0: nop  */
  /* nop: no architectural effect here */
  /* 1411f4: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 1411f8: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 1411fc: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 141200: tbz w9, #0, #0x141260 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_141260;
L_141204:;
  /* 141204: nop  */
  /* nop: no architectural effect here */
  /* 141208: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 14120c: stp x8, x9, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
L_141210:;
  /* 141210: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 141214: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 141218: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* 14121c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 141220: mov x3, x19 */
  ARC_X_W(c, 3, ARC_X_R(c, 19));
  /* 141224: bl #0x1388e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315368));
  fn1_1388e8(c);
  /* 141228: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 14122c: ldr x21, [sp, #0xa0] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(160))));
  /* 141230: ldp x29, x30, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 141234: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 141238: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 14123c: ret  */
  return;
L_141240:;
  /* 141240: nop  */
  /* nop: no architectural effect here */
  /* 141244: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141248: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315404));
  fn1_1424b8(c);
  /* 14124c: cbz w0, #0x1411c0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_1411c0;
  /* 141250: nop  */
  /* nop: no architectural effect here */
  /* 141254: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 141258: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315420));
  fn1_1424d0(c);
  /* 14125c: b #0x1411c0 */
  goto L_1411c0;
L_141260:;
  /* 141260: nop  */
  /* nop: no architectural effect here */
  /* 141264: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 141268: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* 14126c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315440));
  fn1_1424b8(c);
  /* 141270: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 141274: cbz w0, #0x141204 */
  if ((ARC_W_R(c, 0)) == 0) goto L_141204;
  /* 141278: nop  */
  /* nop: no architectural effect here */
  /* 14127c: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 141280: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1315460));
  fn1_1424d0(c);
  /* 141284: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 141288: b #0x141204 */
  goto L_141204;
}

void fn1_142890(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249040));
  /* 142890: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142894: ldr x17, [x16, #0x10] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(16))));
  /* 142898: add x16, x16, #0x10 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(16)));
  /* 14289c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1428a0: nop  */
  /* nop: no architectural effect here */
  /* 1428a4: nop  */
  /* nop: no architectural effect here */
}

void fn1_142e90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250576));
  /* 142e90: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142e94: ldr x17, [x16, #0x210] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(528))));
  /* 142e98: add x16, x16, #0x210 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(528)));
  /* 142e9c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142ea0: nop  */
  /* nop: no architectural effect here */
  /* 142ea4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143490(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252112));
  /* 143490: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143494: ldr x17, [x16, #0x410] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1040))));
  /* 143498: add x16, x16, #0x410 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1040)));
  /* 14349c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1434a0: nop  */
  /* nop: no architectural effect here */
  /* 1434a4: nop  */
  /* nop: no architectural effect here */
}

void fn1_143a90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253648));
  /* 143a90: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143a94: ldr x17, [x16, #0x610] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1552))));
  /* 143a98: add x16, x16, #0x610 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1552)));
  /* 143a9c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143aa0: nop  */
  /* nop: no architectural effect here */
  /* 143aa4: nop  */
  /* nop: no architectural effect here */
}

void fn1_144090(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255184));
  /* 144090: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144094: ldr x17, [x16, #0x810] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2064))));
  /* 144098: add x16, x16, #0x810 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2064)));
  /* 14409c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1440a0: nop  */
  /* nop: no architectural effect here */
  /* 1440a4: nop  */
  /* nop: no architectural effect here */
}

void fn1_144690(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256720));
  /* 144690: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144694: ldr x17, [x16, #0xa10] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2576))));
  /* 144698: add x16, x16, #0xa10 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2576)));
  /* 14469c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 1446a0: nop  */
  /* nop: no architectural effect here */
  /* 1446a4: nop  */
  /* nop: no architectural effect here */
}

