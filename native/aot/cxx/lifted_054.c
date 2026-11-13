#include "lifted.h"

void fn1_a0644(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038584900));
  /* a0644: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a0648: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a064c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a0650: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a0654: and w8, w0, #0xf */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(15)));
  /* a0658: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* a065c: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* a0660: b.gt #0xa0680 */
  if (ARC_COND(c, 12)) goto L_a0680;
  /* a0664: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* a0668: b.le #0xa06c0 */
  if (ARC_COND(c, 13)) goto L_a06c0;
  /* a066c: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* a0670: b.eq #0xa0698 */
  if (ARC_COND(c, 0)) goto L_a0698;
  /* a0674: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* a0678: b.eq #0xa06ac */
  if (ARC_COND(c, 0)) goto L_a06ac;
  /* a067c: b #0xa06cc */
  goto L_a06cc;
L_a0680:;
  /* a0680: cmp w8, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(10));
  /* a0684: b.le #0xa0700 */
  if (ARC_COND(c, 13)) goto L_a0700;
  /* a0688: cmp w8, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(12));
  /* a068c: b.eq #0xa06ac */
  if (ARC_COND(c, 0)) goto L_a06ac;
  /* a0690: cmp w8, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(11));
  /* a0694: b.ne #0xa06cc */
  if (ARC_COND(c, 1)) goto L_a06cc;
L_a0698:;
  /* a0698: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
L_a069c:;
  /* a069c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a06a0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a06a4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a06a8: ret  */
  return;
L_a06ac:;
  /* a06ac: mov w0, #0x10 */
  ARC_W_W(c, 0, UINT64_C(16));
  /* a06b0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a06b4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a06b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a06bc: ret  */
  return;
L_a06c0:;
  /* a06c0: b.eq #0xa069c */
  if (ARC_COND(c, 0)) goto L_a069c;
  /* a06c4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* a06c8: b.eq #0xa070c */
  if (ARC_COND(c, 0)) goto L_a070c;
L_a06cc:;
  /* a06cc: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a06d0: nop  */
  /* nop: no architectural effect here */
  /* a06d4: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* a06d8: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* a06dc: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* a06e0: add x2, x2, #0x457 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(1111)));
  /* a06e4: adrp x3, #0x51000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(331776)));
  /* a06e8: add x3, x3, #0x960 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(2400)));
  /* a06ec: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* a06f0: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657140));
  fn1_144a38(c);
  /* a06f4: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* a06f8: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657148));
  fn1_143730(c);
  /* a06fc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657152));
  fn1_1427b8(c);
L_a0700:;
  /* a0700: b.eq #0xa069c */
  if (ARC_COND(c, 0)) goto L_a069c;
  /* a0704: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* a0708: b.ne #0xa06cc */
  if (ARC_COND(c, 1)) goto L_a06cc;
L_a070c:;
  /* a070c: adrp x19, #0x151000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a0710: nop  */
  /* nop: no architectural effect here */
  /* a0714: adr x1, #0x4f83f */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(325695)));
  /* a0718: ldr x19, [x19, #0x998] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 19) + INT64_C(2456))));
  /* a071c: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* a0720: add x2, x2, #0x457 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(1111)));
  /* a0724: adrp x3, #0x4f000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(323584)));
  /* a0728: add x3, x3, #0xde5 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(3557)));
  /* a072c: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* a0730: bl #0x144a38 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657204));
  fn1_144a38(c);
  /* a0734: add x0, x19, #0x130 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(304)));
  /* a0738: bl #0x143730 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657212));
  fn1_143730(c);
  /* a073c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(657216));
  fn1_1427b8(c);
}

void fn1_a21f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591984));
  /* a21f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a21f4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a21f8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a21fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a2200: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a2204: bl #0x142680 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(664072));
  fn1_142680(c);
  /* a2208: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a220c: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a2210: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a2214: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a2218: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a221c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a77e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038613988));
  /* a77e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a77e8: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a77ec: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* a77f0: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a77f4: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a77f8: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a77fc: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a7800: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a7804: ldp x24, x26, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 26, arc_ld64(_pa + 8));
  }
  /* a7808: sub x8, x26, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) - ARC_X_R(c, 24)));
  /* a780c: asr x25, x8, #3 */
  ARC_X_W(c, 25, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* a7810: cmp x1, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 25));
  /* a7814: b.hi #0xa78fc */
  if (ARC_COND(c, 8)) goto L_a78fc;
  /* a7818: add x22, x24, x1, lsl #3 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 1)) << 3)));
  /* a781c: ldr x23, [x0, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* a7820: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a7824: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a7828: sub x21, x26, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 26) - ARC_X_R(c, 22)));
  /* a782c: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a7830: add w9, w21, #0xf */
  ARC_W_W(c, 9, (ARC_W_R(c, 21) + UINT64_C(15)));
  /* a7834: and x27, x9, #0xfffffff0 */
  ARC_X_W(c, 27, (ARC_X_R(c, 9) & UINT64_C(4294967280)));
  /* a7838: add x9, x8, x27 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 27)));
  /* a783c: cmp x9, #0xff0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(4080));
  /* a7840: b.lo #0xa7890 */
  if (ARC_COND(c, 3)) goto L_a7890;
  /* a7844: cmp x27, #0xff1 */
  (void)arc_sub64(c, ARC_X_R(c, 27), UINT64_C(4081));
  /* a7848: b.lo #0xa7874 */
  if (ARC_COND(c, 3)) goto L_a7874;
  /* a784c: add x0, x27, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + UINT64_C(16)));
  /* a7850: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686164));
  fn1_1428a8(c);
  /* a7854: cbz x0, #0xa793c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a793c;
  /* a7858: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* a785c: stp x8, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7860: str x0, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 0));
  /* a7864: add x23, x0, #0x10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* a7868: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* a786c: b.ne #0xa78a8 */
  if (ARC_COND(c, 1)) goto L_a78a8;
  /* a7870: b #0xa78c4 */
  goto L_a78c4;
L_a7874:;
  /* a7874: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a7878: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686204));
  fn1_1428a8(c);
  /* a787c: cbz x0, #0xa793c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a793c;
  /* a7880: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a7884: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a7888: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a788c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_a7890:;
  /* a7890: add x9, x8, x27 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ARC_X_R(c, 27)));
  /* a7894: add x8, x23, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* a7898: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* a789c: add x23, x8, #0x10 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* a78a0: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* a78a4: b.eq #0xa78c4 */
  if (ARC_COND(c, 0)) goto L_a78c4;
L_a78a8:;
  /* a78a8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a78ac: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a78b0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a78b4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686264));
  fn1_1449f0(c);
  /* a78b8: ldp x24, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a78bc: sub x8, x8, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 24)));
  /* a78c0: asr x25, x8, #3 */
  ARC_X_W(c, 25, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
L_a78c4:;
  /* a78c4: cmp x20, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 25));
  /* a78c8: b.hi #0xa791c */
  if (ARC_COND(c, 8)) goto L_a791c;
  /* a78cc: add x8, x24, x20, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 20)) << 3)));
  /* a78d0: asr x1, x21, #3 */
  ARC_X_W(c, 1, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(3)) & 63))));
  /* a78d4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* a78d8: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* a78dc: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a78e0: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* a78e4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a78e8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a78ec: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a78f0: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a78f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a78f8: ret  */
  return;
L_a78fc:;
  /* a78fc: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* a7900: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* a7904: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a7908: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* a790c: nop  */
  /* nop: no architectural effect here */
  /* a7910: adr x3, #0x5018e */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(328078)));
  /* a7914: mov w2, #0xb18 */
  ARC_W_W(c, 2, UINT64_C(2840));
  /* a7918: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686364));
  fn1_a23d8(c);
L_a791c:;
  /* a791c: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* a7920: add x0, x0, #0x8a6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2214)));
  /* a7924: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* a7928: add x1, x1, #0x10b */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(267)));
  /* a792c: adrp x3, #0x51000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(331776)));
  /* a7930: add x3, x3, #0x145 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(325)));
  /* a7934: mov w2, #0x86 */
  ARC_W_W(c, 2, UINT64_C(134));
  /* a7938: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686396));
  fn1_a23d8(c);
L_a793c:;
  /* a793c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(686400));
  fn1_142488(c);
}

void fn1_ad0d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038636760));
  /* ad0d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ad0dc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ad0e0: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* ad0e4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ad0e8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ad0ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ad0f0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ad0f4: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708856));
  fn1_a52b0(c);
  /* ad0f8: cbz x0, #0xad22c */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad22c;
  /* ad0fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ad100: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ad104: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(708872));
  fn1_aa69c(c);
  /* ad108: cbz x0, #0xad22c */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad22c;
  /* ad10c: ldp x21, x9, [x20] */
  { const uint64_t _pa = ARC_X_R(c, 20);
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ad110: cmp x21, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 9));
  /* ad114: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* ad118: b.eq #0xad134 */
  if (ARC_COND(c, 0)) goto L_ad134;
  /* ad11c: ldrb w8, [x21] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 21)));
  /* ad120: cmp w8, #0x6e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(110));
  /* ad124: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* ad128: b.ne #0xad134 */
  if (ARC_COND(c, 1)) goto L_ad134;
  /* ad12c: add x8, x21, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* ad130: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
L_ad134:;
  /* ad134: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ad138: b.eq #0xad14c */
  if (ARC_COND(c, 0)) goto L_ad14c;
  /* ad13c: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* ad140: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* ad144: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* ad148: b.hs #0xad160 */
  if (ARC_COND(c, 2)) goto L_ad160;
L_ad14c:;
  /* ad14c: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* ad150: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* ad154: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad158: b.ne #0xad198 */
  if (ARC_COND(c, 1)) goto L_ad198;
  /* ad15c: b #0xad228 */
  goto L_ad228;
L_ad160:;
  /* ad160: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* ad164: sub w10, w10, #0x3a */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - UINT64_C(58)));
  /* ad168: cmn w10, #0xa */
  (void)arc_add32(c, ARC_W_R(c, 10), UINT64_C(10), 0);
  /* ad16c: b.lo #0xad188 */
  if (ARC_COND(c, 3)) goto L_ad188;
  /* ad170: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ad174: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad178: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* ad17c: b.ne #0xad160 */
  if (ARC_COND(c, 1)) goto L_ad160;
  /* ad180: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* ad184: b #0xad18c */
  goto L_ad18c;
L_ad188:;
  /* ad188: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
L_ad18c:;
  /* ad18c: sub x22, x10, x21 */
  ARC_X_W(c, 22, (ARC_X_R(c, 10) - ARC_X_R(c, 21)));
  /* ad190: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ad194: b.eq #0xad228 */
  if (ARC_COND(c, 0)) goto L_ad228;
L_ad198:;
  /* ad198: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* ad19c: cmp w9, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(69));
  /* ad1a0: b.ne #0xad228 */
  if (ARC_COND(c, 1)) goto L_ad228;
  /* ad1a4: ldr x23, [x20, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 20) + INT64_C(4912))));
  /* ad1a8: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* ad1ac: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* ad1b0: ldr x9, [x23, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* ad1b4: sub x10, x9, #0xfc0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - UINT64_C(4032)));
  /* ad1b8: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* ad1bc: b.hi #0xad1e4 */
  if (ARC_COND(c, 8)) goto L_ad1e4;
  /* ad1c0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* ad1c4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ad1c8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709068));
  fn1_1428a8(c);
  /* ad1cc: cbz x0, #0xad244 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ad244;
  /* ad1d0: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* ad1d4: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ad1d8: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* ad1dc: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
  /* ad1e0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_ad1e4:;
  /* ad1e4: add x8, x9, #0x30 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(48)));
  /* ad1e8: add x9, x23, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) + ARC_X_R(c, 9)));
  /* ad1ec: mov w10, #0x45 */
  ARC_W_W(c, 10, UINT64_C(69));
  /* ad1f0: str x8, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 8));
  /* ad1f4: adrp x8, #0x14b000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1355776)));
  /* ad1f8: add x8, x8, #0x158 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(344)));
  /* ad1fc: str x8, [x9, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(16));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ad200: ldurh w8, [x9, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 9) + INT64_C(9))));
  /* ad204: strb w10, [x9, #8] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(8)), ARC_W_R(c, 10));
  /* ad208: mov w10, #0x542 */
  ARC_W_W(c, 10, UINT64_C(1346));
  /* ad20c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ad210: stp x19, x0, [x9, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* ad214: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* ad218: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* ad21c: stp x21, x22, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* ad220: sturh w8, [x9, #9] */
  arc_st16((ARC_X_R(c, 9) + INT64_C(9)), ARC_W_R(c, 8));
  /* ad224: b #0xad22c */
  goto L_ad22c;
L_ad228:;
  /* ad228: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_ad22c:;
  /* ad22c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ad230: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ad234: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ad238: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ad23c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ad240: ret  */
  return;
L_ad244:;
  /* ad244: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(709192));
  fn1_142488(c);
}

void fn1_b30ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038661292));
  /* b30ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b30b0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b30b4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b30b8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b30bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b30c0: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b30c4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b30c8: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b30cc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b30d0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b30d4: b.hi #0xb30f8 */
  if (ARC_COND(c, 8)) goto L_b30f8;
  /* b30d8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b30dc: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b30e0: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733412));
  fn1_1428a8(c);
  /* b30e4: cbz x0, #0xb3148 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b3148;
  /* b30e8: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b30ec: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b30f0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b30f4: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b30f8:;
  /* b30f8: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b30fc: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b3100: adrp x8, #0x14a000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b3104: add x8, x8, #0xca8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3240)));
  /* b3108: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b310c: mov w9, #0x27 */
  ARC_W_W(c, 9, UINT64_C(39));
  /* b3110: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b3114: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b3118: mov w10, #0x500 */
  ARC_W_W(c, 10, UINT64_C(1280));
  /* b311c: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* b3120: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* b3124: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b3128: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b312c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b3130: str x9, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 9));
  /* b3134: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b3138: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b313c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b3140: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b3144: ret  */
  return;
L_b3148:;
  /* b3148: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(733516));
  fn1_142488(c);
}

void fn1_b6c38(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038676536));
  /* b6c38: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b6c3c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b6c40: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b6c44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b6c48: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b6c4c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b6c50: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* b6c54: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b6c58: add x11, x9, #9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(9)));
  /* b6c5c: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* b6c60: b.ls #0xb6c90 */
  if (ARC_COND(c, 9)) goto L_b6c90;
  /* b6c64: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b6c68: add x9, x9, #0x3e9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1001)));
  /* b6c6c: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* b6c70: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b6c74: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* b6c78: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b6c7c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748672));
  fn1_142878(c);
  /* b6c80: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b6c84: cbz x0, #0xb6d10 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b6d10;
  /* b6c88: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b6c8c: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_b6c90:;
  /* b6c90: adrp x10, #0x51000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(331776)));
  /* b6c94: add x10, x10, #0xe60 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3680)));
  /* b6c98: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b6c9c: ldr x10, [x10] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 10)));
  /* b6ca0: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b6ca4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b6ca8: strb w9, [x8, #8] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 9));
  /* b6cac: str x10, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* b6cb0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b6cb4: ldr x20, [x20, #0x10] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* b6cb8: add x8, x8, #9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(9)));
  /* b6cbc: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b6cc0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b6cc4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b6cc8: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b6ccc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748752));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b6cd0: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b6cd4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b6cd8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b6cdc: b.ne #0xb6cf0 */
  if (ARC_COND(c, 1)) goto L_b6cf0;
  /* b6ce0: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6ce4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6ce8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6cec: ret  */
  return;
L_b6cf0:;
  /* b6cf0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b6cf4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b6cf8: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b6cfc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b6d00: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b6d04: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b6d08: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b6d0c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b6d10:;
  /* b6d10: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(748820));
  fn1_1427b8(c);
}

void fn1_b8e04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038685188));
  /* b8e04: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b8e08: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* b8e0c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b8e10: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* b8e14: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* b8e18: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* b8e1c: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b8e20: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b8e24: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* b8e28: ldp x9, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b8e2c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* b8e30: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8e34: b.eq #0xb8e5c */
  if (ARC_COND(c, 0)) goto L_b8e5c;
  /* b8e38: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* b8e3c: cmp w10, #0x72 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(114));
  /* b8e40: b.ne #0xb8e5c */
  if (ARC_COND(c, 1)) goto L_b8e5c;
  /* b8e44: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b8e48: mov w25, #4 */
  ARC_W_W(c, 25, UINT64_C(4));
  /* b8e4c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* b8e50: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8e54: b.ne #0xb8e68 */
  if (ARC_COND(c, 1)) goto L_b8e68;
  /* b8e58: b #0xb8e80 */
  goto L_b8e80;
L_b8e5c:;
  /* b8e5c: mov w25, wzr */
  ARC_W_W(c, 25, ARC_W_R(c, 31));
  /* b8e60: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8e64: b.eq #0xb8e80 */
  if (ARC_COND(c, 0)) goto L_b8e80;
L_b8e68:;
  /* b8e68: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* b8e6c: cmp w10, #0x56 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(86));
  /* b8e70: b.ne #0xb8e80 */
  if (ARC_COND(c, 1)) goto L_b8e80;
  /* b8e74: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b8e78: orr w25, w25, #2 */
  ARC_W_W(c, 25, (ARC_W_R(c, 25) | UINT64_C(2)));
  /* b8e7c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
L_b8e80:;
  /* b8e80: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8e84: b.eq #0xb8ea0 */
  if (ARC_COND(c, 0)) goto L_b8ea0;
  /* b8e88: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* b8e8c: cmp w10, #0x4b */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(75));
  /* b8e90: b.ne #0xb8ea0 */
  if (ARC_COND(c, 1)) goto L_b8ea0;
  /* b8e94: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b8e98: orr w25, w25, #1 */
  ARC_W_W(c, 25, (ARC_W_R(c, 25) | UINT64_C(1)));
  /* b8e9c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
L_b8ea0:;
  /* b8ea0: sub x10, x8, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* b8ea4: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* b8ea8: b.hs #0xb8eb4 */
  if (ARC_COND(c, 2)) goto L_b8eb4;
L_b8eac:;
  /* b8eac: mov x26, xzr */
  ARC_X_W(c, 26, ARC_X_R(c, 31));
  /* b8eb0: b #0xb913c */
  goto L_b913c;
L_b8eb4:;
  /* b8eb4: ldrh w10, [x9] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 9)));
  /* b8eb8: mov w11, #0x6f44 */
  ARC_W_W(c, 11, UINT64_C(28484));
  /* b8ebc: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* b8ec0: b.eq #0xb8fa4 */
  if (ARC_COND(c, 0)) goto L_b8fa4;
  /* b8ec4: ldrh w10, [x9] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 9)));
  /* b8ec8: mov w11, #0x4f44 */
  ARC_W_W(c, 11, UINT64_C(20292));
  /* b8ecc: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* b8ed0: b.eq #0xb9020 */
  if (ARC_COND(c, 0)) goto L_b9020;
  /* b8ed4: ldrh w10, [x9] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 9)));
  /* b8ed8: mov w11, #0x7744 */
  ARC_W_W(c, 11, UINT64_C(30532));
  /* b8edc: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* b8ee0: b.ne #0xb8eac */
  if (ARC_COND(c, 1)) goto L_b8eac;
  /* b8ee4: ldp x11, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b8ee8: add x9, x9, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b8eec: add x24, x19, #0x28 */
  ARC_X_W(c, 24, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* b8ef0: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* b8ef4: sub x10, x10, x11 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 11)));
  /* b8ef8: asr x20, x10, #3 */
  ARC_X_W(c, 20, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(3)) & 63))));
  /* b8efc: b #0xb8f30 */
  goto L_b8f30;
L_b8f00:;
  /* b8f00: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* b8f04: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757512));
  fn1_142878(c);
  /* b8f08: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* b8f0c: cbz x0, #0xb9390 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9390;
L_b8f10:;
  /* b8f10: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* b8f14: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* b8f18: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b8f1c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* b8f20: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_b8f24:;
  /* b8f24: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b8f28: str x0, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* b8f2c: str x23, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 23));
L_b8f30:;
  /* b8f30: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b8f34: b.eq #0xb8f44 */
  if (ARC_COND(c, 0)) goto L_b8f44;
  /* b8f38: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* b8f3c: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* b8f40: b.eq #0xb90b8 */
  if (ARC_COND(c, 0)) goto L_b90b8;
L_b8f44:;
  /* b8f44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b8f48: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757580));
  fn1_a52b0(c);
  /* b8f4c: cbz x0, #0xb92b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b92b0;
  /* b8f50: ldp x23, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b8f54: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* b8f58: b.ne #0xb8f24 */
  if (ARC_COND(c, 1)) goto L_b8f24;
  /* b8f5c: ldr x22, [x19, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b8f60: mov x26, x0 */
  ARC_X_W(c, 26, ARC_X_R(c, 0));
  /* b8f64: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* b8f68: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* b8f6c: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* b8f70: b.ne #0xb8f00 */
  if (ARC_COND(c, 1)) goto L_b8f00;
  /* b8f74: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b8f78: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757628));
  fn1_1428a8(c);
  /* b8f7c: cbz x0, #0xb9398 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9398;
  /* b8f80: cmp x23, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* b8f84: b.eq #0xb8f9c */
  if (ARC_COND(c, 0)) goto L_b8f9c;
  /* b8f88: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* b8f8c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b8f90: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* b8f94: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757656));
  fn1_1449f0(c);
  /* b8f98: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_b8f9c:;
  /* b8f9c: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* b8fa0: b #0xb8f10 */
  goto L_b8f10;
L_b8fa4:;
  /* b8fa4: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b8fa8: add x9, x9, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b8fac: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* b8fb0: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b8fb4: sub x10, x8, #0xfd0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b8fb8: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* b8fbc: b.hi #0xb8fdc */
  if (ARC_COND(c, 8)) goto L_b8fdc;
  /* b8fc0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b8fc4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757704));
  fn1_1428a8(c);
  /* b8fc8: cbz x0, #0xb939c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b939c;
  /* b8fcc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b8fd0: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b8fd4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b8fd8: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b8fdc:;
  /* b8fdc: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b8fe0: add x26, x20, x8 */
  ARC_X_W(c, 26, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b8fe4: adrp x8, #0x149000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b8fe8: add x8, x8, #0xc10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3088)));
  /* b8fec: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* b8ff0: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b8ff4: str x8, [x26, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b8ff8: ldurh w8, [x26, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 26) + INT64_C(9))));
  /* b8ffc: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* b9000: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b9004: strb w9, [x26, #8] */
  arc_st8((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 9));
  /* b9008: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b900c: sturh w8, [x26, #9] */
  arc_st16((ARC_X_R(c, 26) + INT64_C(9)), ARC_W_R(c, 8));
  /* b9010: adrp x8, #0x50000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(327680)));
  /* b9014: add x8, x8, #0x369 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(873)));
  /* b9018: stp x8, x9, [x26, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* b901c: b #0xb913c */
  goto L_b913c;
L_b9020:;
  /* b9020: add x8, x9, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* b9024: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9028: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b902c: bl #0xaa69c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757808));
  fn1_aa69c(c);
  /* b9030: cbz x0, #0xb92b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b92b0;
  /* b9034: ldp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b9038: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b903c: b.eq #0xb92ac */
  if (ARC_COND(c, 0)) goto L_b92ac;
  /* b9040: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* b9044: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* b9048: b.ne #0xb92ac */
  if (ARC_COND(c, 1)) goto L_b92ac;
  /* b904c: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b9050: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b9054: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* b9058: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b905c: sub x10, x8, #0xfd0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9060: cmn x10, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 10), UINT64_C(4081), 0);
  /* b9064: b.hi #0xb908c */
  if (ARC_COND(c, 8)) goto L_b908c;
  /* b9068: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b906c: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9070: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757876));
  fn1_1428a8(c);
  /* b9074: cbz x0, #0xb939c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b939c;
  /* b9078: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b907c: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9080: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9084: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* b9088: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
L_b908c:;
  /* b908c: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9090: add x26, x20, x8 */
  ARC_X_W(c, 26, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b9094: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* b9098: add x8, x8, #0x58 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(88)));
  /* b909c: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* b90a0: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b90a4: str x8, [x26, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b90a8: ldurh w8, [x26, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 26) + INT64_C(9))));
  /* b90ac: mov w9, #0x11 */
  ARC_W_W(c, 9, UINT64_C(17));
  /* b90b0: str x0, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 0));
  /* b90b4: b #0xb912c */
  goto L_b912c;
L_b90b8:;
  /* b90b8: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* b90bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b90c0: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b90c4: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b90c8: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(757964));
  fn1_a77e4(c);
  /* b90cc: ldr x22, [x19, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b90d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b90d4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* b90d8: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b90dc: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b90e0: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b90e4: b.hi #0xb9104 */
  if (ARC_COND(c, 8)) goto L_b9104;
  /* b90e8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b90ec: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758000));
  fn1_1428a8(c);
  /* b90f0: cbz x0, #0xb939c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b939c;
  /* b90f4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b90f8: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b90fc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b9100: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9104:;
  /* b9104: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9108: add x26, x22, x8 */
  ARC_X_W(c, 26, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* b910c: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* b9110: add x8, x8, #0xd0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(208)));
  /* b9114: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9118: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b911c: str x8, [x26, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 26) + INT64_C(16));
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b9120: ldurh w8, [x26, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 26) + INT64_C(9))));
  /* b9124: mov w9, #0x12 */
  ARC_W_W(c, 9, UINT64_C(18));
  /* b9128: stp x20, x21, [x26, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
L_b912c:;
  /* b912c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b9130: strb w9, [x26, #8] */
  arc_st8((ARC_X_R(c, 26) + INT64_C(8)), ARC_W_R(c, 9));
  /* b9134: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b9138: sturh w8, [x26, #9] */
  arc_st16((ARC_X_R(c, 26) + INT64_C(9)), ARC_W_R(c, 8));
L_b913c:;
  /* b913c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b9140: sub x10, x9, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* b9144: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* b9148: b.lo #0xb915c */
  if (ARC_COND(c, 3)) goto L_b915c;
  /* b914c: ldrh w10, [x8] */
  ARC_W_W(c, 10, arc_ld16(ARC_X_R(c, 8)));
  /* b9150: mov w11, #0x7844 */
  ARC_W_W(c, 11, UINT64_C(30788));
  /* b9154: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* b9158: b.eq #0xb929c */
  if (ARC_COND(c, 0)) goto L_b929c;
L_b915c:;
  /* b915c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b9160: b.eq #0xb92ac */
  if (ARC_COND(c, 0)) goto L_b92ac;
L_b9164:;
  /* b9164: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* b9168: cmp w10, #0x46 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(70));
  /* b916c: b.ne #0xb92ac */
  if (ARC_COND(c, 1)) goto L_b92ac;
  /* b9170: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b9174: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b9178: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* b917c: b.eq #0xb9194 */
  if (ARC_COND(c, 0)) goto L_b9194;
  /* b9180: ldrb w9, [x10] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 10)));
  /* b9184: cmp w9, #0x59 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(89));
  /* b9188: b.ne #0xb9194 */
  if (ARC_COND(c, 1)) goto L_b9194;
  /* b918c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b9190: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_b9194:;
  /* b9194: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9198: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758172));
  fn1_a52b0(c);
  /* b919c: cbz x0, #0xb92b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b92b0;
  /* b91a0: ldp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b91a4: add x28, x19, #0x28 */
  ARC_X_W(c, 28, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* b91a8: mov w21, #0x4552 */
  ARC_W_W(c, 21, UINT64_C(17746));
  /* b91ac: mov w27, #0x454f */
  ARC_W_W(c, 27, UINT64_C(17743));
  /* b91b0: sub x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* b91b4: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* b91b8: stp x0, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b91bc: b #0xb91ec */
  goto L_b91ec;
L_b91c0:;
  /* b91c0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* b91c4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758216));
  fn1_142878(c);
  /* b91c8: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* b91cc: cbz x0, #0xb938c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b938c;
L_b91d0:;
  /* b91d0: asr x8, x22, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(2)) & 63))));
  /* b91d4: add x24, x0, x22 */
  ARC_X_W(c, 24, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* b91d8: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* b91dc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b91e0: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
L_b91e4:;
  /* b91e4: str x0, [x24], #8 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* b91e8: str x24, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 24));
L_b91ec:;
  /* b91ec: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b91f0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b91f4: b.eq #0xb920c */
  if (ARC_COND(c, 0)) goto L_b920c;
  /* b91f8: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* b91fc: cmp w10, #0x76 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(118));
  /* b9200: b.eq #0xb9290 */
  if (ARC_COND(c, 0)) goto L_b9290;
  /* b9204: cmp w10, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(69));
  /* b9208: b.eq #0xb92ec */
  if (ARC_COND(c, 0)) goto L_b92ec;
L_b920c:;
  /* b920c: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* b9210: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* b9214: b.lo #0xb9230 */
  if (ARC_COND(c, 3)) goto L_b9230;
  /* b9218: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* b921c: cmp w9, w21 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 21));
  /* b9220: b.eq #0xb92d4 */
  if (ARC_COND(c, 0)) goto L_b92d4;
  /* b9224: ldrh w9, [x8] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 8)));
  /* b9228: cmp w9, w27 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 27));
  /* b922c: b.eq #0xb92e0 */
  if (ARC_COND(c, 0)) goto L_b92e0;
L_b9230:;
  /* b9230: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9234: bl #0xa52b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758328));
  fn1_a52b0(c);
  /* b9238: cbz x0, #0xb92b0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b92b0;
  /* b923c: ldp x24, x8, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* b9240: cmp x24, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* b9244: b.ne #0xb91e4 */
  if (ARC_COND(c, 1)) goto L_b91e4;
  /* b9248: ldr x23, [x19, #0x10] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b924c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9250: sub x22, x24, x23 */
  ARC_X_W(c, 22, (ARC_X_R(c, 24) - ARC_X_R(c, 23)));
  /* b9254: cmp x23, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 28));
  /* b9258: lsl x1, x22, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* b925c: b.ne #0xb91c0 */
  if (ARC_COND(c, 1)) goto L_b91c0;
  /* b9260: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* b9264: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758376));
  fn1_1428a8(c);
  /* b9268: cbz x0, #0xb9394 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b9394;
  /* b926c: cmp x24, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 28));
  /* b9270: b.eq #0xb9288 */
  if (ARC_COND(c, 0)) goto L_b9288;
  /* b9274: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* b9278: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* b927c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* b9280: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758404));
  fn1_1449f0(c);
  /* b9284: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_b9288:;
  /* b9288: str x0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 0));
  /* b928c: b #0xb91d0 */
  goto L_b91d0;
L_b9290:;
  /* b9290: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b9294: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b9298: b #0xb91ec */
  goto L_b91ec;
L_b929c:;
  /* b929c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* b92a0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b92a4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b92a8: b.ne #0xb9164 */
  if (ARC_COND(c, 1)) goto L_b9164;
L_b92ac:;
  /* b92ac: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_b92b0:;
  /* b92b0: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b92b4: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b92b8: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* b92bc: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* b92c0: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* b92c4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b92c8: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* b92cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b92d0: ret  */
  return;
L_b92d4:;
  /* b92d4: mov w23, #1 */
  ARC_W_W(c, 23, UINT64_C(1));
  /* b92d8: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* b92dc: b #0xb92f4 */
  goto L_b92f4;
L_b92e0:;
  /* b92e0: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* b92e4: mov w23, #2 */
  ARC_W_W(c, 23, UINT64_C(2));
  /* b92e8: b #0xb92f4 */
  goto L_b92f4;
L_b92ec:;
  /* b92ec: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* b92f0: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
L_b92f4:;
  /* b92f4: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* b92f8: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* b92fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9300: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* b9304: bl #0xa77e4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758536));
  fn1_a77e4(c);
  /* b9308: ldr x20, [x19, #0x1330] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* b930c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9310: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* b9314: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* b9318: sub x9, x8, #0xfb0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4016)));
  /* b931c: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9320: b.hi #0xb9340 */
  if (ARC_COND(c, 8)) goto L_b9340;
  /* b9324: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9328: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758572));
  fn1_1428a8(c);
  /* b932c: cbz x0, #0xb939c */
  if ((ARC_X_R(c, 0)) == 0) goto L_b939c;
  /* b9330: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9334: stp x20, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9338: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b933c: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9340:;
  /* b9340: add x9, x8, #0x40 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* b9344: add x0, x20, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 8)));
  /* b9348: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* b934c: add x8, x8, #0x148 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(328)));
  /* b9350: str x9, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9354: ldr x9, [sp] */
  ARC_X_W(c, 9, arc_ld64((c)->sp));
  /* b9358: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* b935c: mov w8, #0x10 */
  ARC_W_W(c, 8, UINT64_C(16));
  /* b9360: strb w8, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* b9364: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b9368: stp x9, x21, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b936c: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* b9370: str x22, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 22));
  /* b9374: orr w8, w8, #0x100 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(256)));
  /* b9378: str w25, [x0, #0x28] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(40)), ARC_W_R(c, 25));
  /* b937c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b9380: strb w23, [x0, #0x2c] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(44)), ARC_W_R(c, 23));
  /* b9384: str x26, [x0, #0x30] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(48)), ARC_X_R(c, 26));
  /* b9388: b #0xb92b0 */
  goto L_b92b0;
L_b938c:;
  /* b938c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758672));
  fn1_1427b8(c);
L_b9390:;
  /* b9390: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758676));
  fn1_1427b8(c);
L_b9394:;
  /* b9394: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758680));
  fn1_1427b8(c);
L_b9398:;
  /* b9398: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758684));
  fn1_1427b8(c);
L_b939c:;
  /* b939c: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(758688));
  fn1_142488(c);
}

void fn1_bca30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038700592));
  /* bca30: bti c */
  /* bti: no architectural effect here */
  /* bca34: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* bca38: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* bca3c: sxtb w9, w8 */
  ARC_W_W(c, 9, ((int32_t)(int8_t)(ARC_W_R(c, 8))));
  /* bca40: cmn w9, #0x40 */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(64), 0);
  /* bca44: b.ge #0xbca54 */
  if (ARC_COND(c, 10)) goto L_bca54;
  /* bca48: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bca4c: ldr x16, [x8] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 8)));
  /* bca50: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_bca54:;
  /* bca54: tst w8, #0xc0 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(192)));
  /* bca58: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* bca5c: ret  */
  return;
}

void fn1_bf30c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038711052));
L_bf30c:;
  /* bf30c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bf310: stp d15, d14, [sp, #-0xa0]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-160));
    (c)->sp = (c)->sp + INT64_C(-160);
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64((_pa + 8), (c)->q[14].u64[0]);
  }
  /* bf314: stp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64((_pa + 8), (c)->q[12].u64[0]);
  }
  /* bf318: stp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* bf31c: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* bf320: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bf324: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* bf328: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* bf32c: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* bf330: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* bf334: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bf338: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* bf33c: sub sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(496)));
  /* bf340: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf344: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf348: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* bf34c: ldr q0, [x8, #0xcf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3312)) + 8));
  /* bf350: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf354: ldr q11, [x9, #0xb90] */
  arc_q_w(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2960)) + 8));
  /* bf358: ldr q12, [x8, #0xb00] */
  arc_q_w(c, 12, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2816)) + 8));
  /* bf35c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf360: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf364: ldr q13, [x8, #0x990] */
  arc_q_w(c, 13, arc_ld64((ARC_X_R(c, 8) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2448)) + 8));
  /* bf368: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf36c: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* bf370: ldr q15, [x8, #0xaa0] */
  arc_q_w(c, 15, arc_ld64((ARC_X_R(c, 8) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2720)) + 8));
  /* bf374: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf378: ldr q14, [x9, #0xa50] */
  arc_q_w(c, 14, arc_ld64((ARC_X_R(c, 9) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2640)) + 8));
  /* bf37c: ldr q0, [x8, #0xba0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2976))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2976)) + 8));
  /* bf380: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf384: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf388: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bf38c: adrp x6, #0x52000 */
  ARC_X_W(c, 6, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf390: adrp x27, #0x52000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf394: stur q0, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)) + 8, (c)->q[0].u64[1]);
  /* bf398: ldr q0, [x9, #0x9d0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2512)) + 8));
  /* bf39c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf3a0: adrp x22, #0x52000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf3a4: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* bf3a8: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* bf3ac: stur q0, [x29, #-0x80] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)) + 8, (c)->q[0].u64[1]);
  /* bf3b0: ldr q0, [x8, #0xd60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3424)) + 8));
  /* bf3b4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf3b8: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* bf3bc: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* bf3c0: mov x26, #-1 */
  ARC_X_W(c, 26, UINT64_C(18446744073709551615));
  /* bf3c4: stur q0, [x29, #-0x90] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)) + 8, (c)->q[0].u64[1]);
  /* bf3c8: ldr q0, [x8, #0xb40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2880)) + 8));
  /* bf3cc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf3d0: str w3, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 3));
  /* bf3d4: stur q0, [x29, #-0xa0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)) + 8, (c)->q[0].u64[1]);
  /* bf3d8: ldr q0, [x9, #0x9e0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2528)) + 8));
  /* bf3dc: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf3e0: stp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[14].u64[0]);
    arc_st64(_pa + 8, (c)->q[14].u64[1]);
    arc_st64((_pa + 16), (c)->q[13].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[13].u64[1]);
  }
  /* bf3e4: stur q0, [x29, #-0xb0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)) + 8, (c)->q[0].u64[1]);
  /* bf3e8: ldr q0, [x8, #0xbc0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3008)) + 8));
  /* bf3ec: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf3f0: stp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[12].u64[0]);
    arc_st64(_pa + 8, (c)->q[12].u64[1]);
    arc_st64((_pa + 16), (c)->q[11].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[11].u64[1]);
  }
  /* bf3f4: stur q0, [x29, #-0xc0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)) + 8, (c)->q[0].u64[1]);
  /* bf3f8: ldr q0, [x8, #0xb50] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2896)) + 8));
  /* bf3fc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf400: str q15, [sp] */
  arc_st64((c)->sp, (c)->q[15].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[15].u64[1]);
  /* bf404: stur q0, [x29, #-0xd0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)) + 8, (c)->q[0].u64[1]);
  /* bf408: ldr q0, [x9, #0x9f0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2544)) + 8));
  /* bf40c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf410: stur q0, [x29, #-0xe0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)) + 8, (c)->q[0].u64[1]);
  /* bf414: ldr q0, [x8, #0xd10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3344)) + 8));
  /* bf418: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf41c: stur q0, [x29, #-0xf0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)) + 8, (c)->q[0].u64[1]);
  /* bf420: ldr q0, [x8, #0x970] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2416)) + 8));
  /* bf424: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf428: stur q0, [x29, #-0x100] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)) + 8, (c)->q[0].u64[1]);
  /* bf42c: ldr q0, [x9, #0xa60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2656)) + 8));
  /* bf430: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf434: str q0, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* bf438: ldr q0, [x8, #0x980] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2432)) + 8));
  /* bf43c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf440: str q0, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(272)) + 8, (c)->q[0].u64[1]);
  /* bf444: ldr q0, [x8, #0xbf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3056)) + 8));
  /* bf448: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf44c: str q0, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(256)) + 8, (c)->q[0].u64[1]);
  /* bf450: ldr q0, [x9, #0xb10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2832)) + 8));
  /* bf454: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf458: str q0, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(240)) + 8, (c)->q[0].u64[1]);
  /* bf45c: ldr q0, [x8, #0xd70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3440)) + 8));
  /* bf460: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf464: str q0, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* bf468: ldr q0, [x8, #0xd30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3376)) + 8));
  /* bf46c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf470: str q0, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(208)) + 8, (c)->q[0].u64[1]);
  /* bf474: ldr q0, [x9, #0x9a0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2464)) + 8));
  /* bf478: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf47c: str q0, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(192)) + 8, (c)->q[0].u64[1]);
  /* bf480: ldr q0, [x8, #0xc30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3120)) + 8));
  /* bf484: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf488: str q0, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(176)) + 8, (c)->q[0].u64[1]);
  /* bf48c: ldr q0, [x8, #0xb60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2912)) + 8));
  /* bf490: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf494: str q0, [sp, #0xa0] */
  arc_st64(((c)->sp + INT64_C(160)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(160)) + 8, (c)->q[0].u64[1]);
  /* bf498: ldr q0, [x9, #0xa00] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2560)) + 8));
  /* bf49c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf4a0: str q0, [sp, #0x90] */
  arc_st64(((c)->sp + INT64_C(144)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(144)) + 8, (c)->q[0].u64[1]);
  /* bf4a4: ldr q0, [x8, #0x9b0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2480)) + 8));
  /* bf4a8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* bf4ac: str q0, [sp, #0x80] */
  arc_st64(((c)->sp + INT64_C(128)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(128)) + 8, (c)->q[0].u64[1]);
  /* bf4b0: ldr q0, [x8, #0xb20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2848)) + 8));
  /* bf4b4: str q0, [sp, #0x70] */
  arc_st64(((c)->sp + INT64_C(112)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(112)) + 8, (c)->q[0].u64[1]);
  /* bf4b8: ldr q0, [x9, #0xcb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3248)) + 8));
  /* bf4bc: str q0, [sp, #0x60] */
  arc_st64(((c)->sp + INT64_C(96)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(96)) + 8, (c)->q[0].u64[1]);
L_bf4c0:;
  /* bf4c0: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_bf4c4:;
  /* bf4c4: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* bf4c8: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* bf4cc: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* bf4d0: b.gt #0xbf4e4 */
  if (ARC_COND(c, 12)) goto L_bf4e4;
  /* bf4d4: b.lo #0xc0664 */
  if (ARC_COND(c, 3)) goto L_c0664;
  /* bf4d8: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* bf4dc: b.ne #0xbf4fc */
  if (ARC_COND(c, 1)) goto L_bf4fc;
  /* bf4e0: b #0xc057c */
  goto L_c057c;
L_bf4e4:;
  /* bf4e4: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* bf4e8: b.eq #0xc0598 */
  if (ARC_COND(c, 0)) goto L_c0598;
  /* bf4ec: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* bf4f0: b.eq #0xc05e8 */
  if (ARC_COND(c, 0)) goto L_c05e8;
  /* bf4f4: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* bf4f8: b.eq #0xc04a8 */
  if (ARC_COND(c, 0)) goto L_c04a8;
L_bf4fc:;
  /* bf4fc: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* bf500: b.le #0xc0698 */
  if (ARC_COND(c, 13)) goto L_c0698;
  /* bf504: cbz x2, #0xc0718 */
  if ((ARC_X_R(c, 2)) == 0) goto L_c0718;
  /* bf508: add x9, x19, x8, lsr #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 8)) >> 1)));
  /* bf50c: ldurb w10, [x20, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* bf510: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* bf514: b.lo #0xbf65c */
  if (ARC_COND(c, 3)) goto L_bf65c;
  /* bf518: ldrb w8, [x9] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 9)));
  /* bf51c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* bf520: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf524: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf528: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* bf52c: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* bf530: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* bf534: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* bf538: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* bf53c: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf540: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf544: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* bf548: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* bf54c: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* bf550: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* bf554: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* bf558: strb w10, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* bf55c: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* bf560: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* bf564: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* bf568: ldurb w8, [x9, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* bf56c: ldurb w10, [x20, #-2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(-2))));
  /* bf570: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* bf574: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf578: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf57c: sturb w11, [x20, #-2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* bf580: sturb w8, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 8));
  /* bf584: ldurb w8, [x20, #-2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-2))));
  /* bf588: ldrb w10, [x19, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* bf58c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* bf590: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf594: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf598: sturb w11, [x20, #-2] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-2)), ARC_W_R(c, 11));
  /* bf59c: ldurb w11, [x9, #-1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* bf5a0: ldrb w10, [x19, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* bf5a4: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* bf5a8: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* bf5ac: strb w10, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 10));
  /* bf5b0: ldurb w10, [x9, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* bf5b4: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* bf5b8: sturb w8, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 8));
  /* bf5bc: ldrb w8, [x9, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 9) + INT64_C(1))));
  /* bf5c0: ldurb w10, [x20, #-3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(-3))));
  /* bf5c4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* bf5c8: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf5cc: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf5d0: sturb w11, [x20, #-3] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-3)), ARC_W_R(c, 11));
  /* bf5d4: strb w8, [x9, #1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1)), ARC_W_R(c, 8));
  /* bf5d8: ldurb w8, [x20, #-3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-3))));
  /* bf5dc: ldrb w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* bf5e0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* bf5e4: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf5e8: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf5ec: sturb w11, [x20, #-3] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-3)), ARC_W_R(c, 11));
  /* bf5f0: ldrb w11, [x9, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 9) + INT64_C(1))));
  /* bf5f4: ldrb w10, [x19, #2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* bf5f8: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* bf5fc: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* bf600: strb w10, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* bf604: ldrb w10, [x9, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(1))));
  /* bf608: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* bf60c: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* bf610: ldurb w10, [x9, #-1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* bf614: and w8, w8, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* bf618: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* bf61c: csel w12, w11, w8, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* bf620: csel w8, w11, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* bf624: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* bf628: csel w11, w12, w10, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* bf62c: csel w12, w12, w10, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* bf630: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* bf634: csel w10, w10, w8, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* bf638: csel w8, w8, w11, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* bf63c: strb w12, [x9, #1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1)), ARC_W_R(c, 12));
  /* bf640: sturb w10, [x9, #-1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(-1)), ARC_W_R(c, 10));
  /* bf644: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* bf648: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* bf64c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* bf650: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* bf654: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* bf658: b #0xbf6ac */
  goto L_bf6ac;
L_bf65c:;
  /* bf65c: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* bf660: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* bf664: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf668: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf66c: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* bf670: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* bf674: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* bf678: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* bf67c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* bf680: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf684: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* bf688: sturb w11, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 11));
  /* bf68c: ldrb w11, [x19] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 19)));
  /* bf690: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* bf694: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* bf698: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* bf69c: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* bf6a0: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* bf6a4: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* bf6a8: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_bf6ac:;
  /* bf6ac: ldr w9, [sp, #0x5c] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(92))));
  /* bf6b0: sub x2, x2, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* bf6b4: tbnz w9, #0, #0xbf6c4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_bf6c4;
  /* bf6b8: ldurb w9, [x19, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(-1))));
  /* bf6bc: cmp w9, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* bf6c0: b.hs #0xc03c0 */
  if (ARC_COND(c, 2)) goto L_c03c0;
L_bf6c4:;
  /* bf6c4: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* bf6c8: cmp w9, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* bf6cc: b.ls #0xbf6e4 */
  if (ARC_COND(c, 9)) goto L_bf6e4;
  /* bf6d0: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_bf6d4:;
  /* bf6d4: ldrb w10, [x9, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* bf6d8: cmp w10, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* bf6dc: b.ls #0xbf6d4 */
  if (ARC_COND(c, 9)) goto L_bf6d4;
  /* bf6e0: b #0xbf704 */
  goto L_bf704;
L_bf6e4:;
  /* bf6e4: add x10, x19, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(1)));
L_bf6e8:;
  /* bf6e8: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* bf6ec: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* bf6f0: b.hs #0xbf704 */
  if (ARC_COND(c, 2)) goto L_bf704;
  /* bf6f4: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* bf6f8: ldrb w11, [x10], #1 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* bf6fc: cmp w11, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* bf700: b.ls #0xbf6e8 */
  if (ARC_COND(c, 9)) goto L_bf6e8;
L_bf704:;
  /* bf704: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* bf708: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* bf70c: b.hs #0xbf720 */
  if (ARC_COND(c, 2)) goto L_bf720;
  /* bf710: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_bf714:;
  /* bf714: ldrb w11, [x10, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-1));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* bf718: cmp w11, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* bf71c: b.hi #0xbf714 */
  if (ARC_COND(c, 8)) goto L_bf714;
L_bf720:;
  /* bf720: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* bf724: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* bf728: b.hs #0xbf740 */
  if (ARC_COND(c, 2)) goto L_bf740;
  /* bf72c: ldrb w12, [x10] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 10)));
  /* bf730: ldrb w13, [x9] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 9)));
  /* bf734: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* bf738: strb w12, [x11], #1 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* bf73c: strb w13, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 13));
L_bf740:;
  /* bf740: sub x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* bf744: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* bf748: cmp x15, #0x7f */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(127));
  /* bf74c: b.lt #0xbfcd8 */
  if (ARC_COND(c, 11)) goto L_bfcd8;
  /* bf750: dup v0.16b, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 8));
    _t.u8[1] = (ARC_W_R(c, 8));
    _t.u8[2] = (ARC_W_R(c, 8));
    _t.u8[3] = (ARC_W_R(c, 8));
    _t.u8[4] = (ARC_W_R(c, 8));
    _t.u8[5] = (ARC_W_R(c, 8));
    _t.u8[6] = (ARC_W_R(c, 8));
    _t.u8[7] = (ARC_W_R(c, 8));
    _t.u8[8] = (ARC_W_R(c, 8));
    _t.u8[9] = (ARC_W_R(c, 8));
    _t.u8[10] = (ARC_W_R(c, 8));
    _t.u8[11] = (ARC_W_R(c, 8));
    _t.u8[12] = (ARC_W_R(c, 8));
    _t.u8[13] = (ARC_W_R(c, 8));
    _t.u8[14] = (ARC_W_R(c, 8));
    _t.u8[15] = (ARC_W_R(c, 8));
    (c)->q[0] = _t; }
  /* bf754: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* bf758: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* bf75c: b #0xbf788 */
  goto L_bf788;
L_bf760:;
  /* bf760: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* bf764: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* bf768: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* bf76c: add x11, x11, x15, lsl #6 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 6)));
  /* bf770: csel x15, x4, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 31)));
  /* bf774: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* bf778: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* bf77c: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* bf780: cmp x15, #0x7e */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(126));
  /* bf784: b.le #0xbfce4 */
  if (ARC_COND(c, 13)) goto L_bfce4;
L_bf788:;
  /* bf788: cbz x14, #0xbf798 */
  if ((ARC_X_R(c, 14)) == 0) goto L_bf798;
  /* bf78c: cbz x13, #0xbf9fc */
  if ((ARC_X_R(c, 13)) == 0) goto L_bf9fc;
L_bf790:;
  /* bf790: cbnz x14, #0xbfc94 */
  if ((ARC_X_R(c, 14)) != 0) goto L_bfc94;
  /* bf794: b #0xbf760 */
  goto L_bf760;
L_bf798:;
  /* bf798: ldp q1, q2, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* bf79c: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* bf7a0: ldp q25, q27, [x11, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(32));
    arc_q_w(c, 25, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 27, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* bf7a4: ldr q8, [x6, #0xc40] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3136)) + 8));
  /* bf7a8: ldr q9, [x27, #0xbb0] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2992)) + 8));
  /* bf7ac: cmhi v1.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[1].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[1].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[1].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[1].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[1].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[1].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[1].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[1].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[1].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[1].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[1].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[1].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[1].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[1].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[1].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[1].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[1] = _t; }
  /* bf7b0: cmhi v2.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[2].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[2].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[2].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[2].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[2].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[2].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[2].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[2].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[2].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[2].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[2].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[2].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[2].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[2].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[2].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[2].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[2] = _t; }
  /* bf7b4: cmhi v25.16b, v0.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[25].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[25].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[25].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[25].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[25].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[25].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[25].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[25].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[25].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[25].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[25].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[25].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[25].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[25].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[25].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[25].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* bf7b8: sshll v3.8h, v1.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[7]) << 0);
    (c)->q[3] = _t; }
  /* bf7bc: sshll2 v1.8h, v1.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[15]) << 0);
    (c)->q[1] = _t; }
  /* bf7c0: sshll2 v4.8h, v2.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[15]) << 0);
    (c)->q[4] = _t; }
  /* bf7c4: sshll v2.8h, v2.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[7]) << 0);
    (c)->q[2] = _t; }
  /* bf7c8: sshll2 v5.4s, v3.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[7]) << 0);
    (c)->q[5] = _t; }
  /* bf7cc: sshll v6.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[6] = _t; }
  /* bf7d0: sshll v3.4s, v3.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[3].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[3].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[3].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[3].i16[3]) << 0);
    (c)->q[3] = _t; }
  /* bf7d4: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* bf7d8: sshll2 v23.4s, v2.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* bf7dc: sshll v17.4s, v4.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* bf7e0: sshll2 v19.4s, v4.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[4].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[4].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[4].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[4].i16[7]) << 0);
    (c)->q[19] = _t; }
  /* bf7e4: sshll v18.4s, v2.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* bf7e8: ushll2 v7.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* bf7ec: ushll2 v16.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* bf7f0: ushll v3.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* bf7f4: ushll2 v20.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* bf7f8: ushll v21.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* bf7fc: ushll v24.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* bf800: ldp q6, q1, [x29, #-0x70] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-112));
    arc_q_w(c, 6, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* bf804: ushll2 v4.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* bf808: ushll v22.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* bf80c: ushll2 v26.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[26] = _t; }
  /* bf810: bic v5.16b, v12.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[12].u8[0] & (~(c)->q[16].u8[0]);
    _t.u8[1] = (c)->q[12].u8[1] & (~(c)->q[16].u8[1]);
    _t.u8[2] = (c)->q[12].u8[2] & (~(c)->q[16].u8[2]);
    _t.u8[3] = (c)->q[12].u8[3] & (~(c)->q[16].u8[3]);
    _t.u8[4] = (c)->q[12].u8[4] & (~(c)->q[16].u8[4]);
    _t.u8[5] = (c)->q[12].u8[5] & (~(c)->q[16].u8[5]);
    _t.u8[6] = (c)->q[12].u8[6] & (~(c)->q[16].u8[6]);
    _t.u8[7] = (c)->q[12].u8[7] & (~(c)->q[16].u8[7]);
    _t.u8[8] = (c)->q[12].u8[8] & (~(c)->q[16].u8[8]);
    _t.u8[9] = (c)->q[12].u8[9] & (~(c)->q[16].u8[9]);
    _t.u8[10] = (c)->q[12].u8[10] & (~(c)->q[16].u8[10]);
    _t.u8[11] = (c)->q[12].u8[11] & (~(c)->q[16].u8[11]);
    _t.u8[12] = (c)->q[12].u8[12] & (~(c)->q[16].u8[12]);
    _t.u8[13] = (c)->q[12].u8[13] & (~(c)->q[16].u8[13]);
    _t.u8[14] = (c)->q[12].u8[14] & (~(c)->q[16].u8[14]);
    _t.u8[15] = (c)->q[12].u8[15] & (~(c)->q[16].u8[15]);
    (c)->q[5] = _t; }
  /* bf814: bic v2.16b, v11.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[11].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[11].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[11].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[11].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[11].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[11].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[11].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[11].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[11].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[11].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[11].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[11].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[11].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[11].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[11].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[11].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[2] = _t; }
  /* bf818: ushll v20.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* bf81c: ldur q17, [x29, #-0x90] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* bf820: bic v6.16b, v6.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (~(c)->q[3].u8[0]);
    _t.u8[1] = (c)->q[6].u8[1] & (~(c)->q[3].u8[1]);
    _t.u8[2] = (c)->q[6].u8[2] & (~(c)->q[3].u8[2]);
    _t.u8[3] = (c)->q[6].u8[3] & (~(c)->q[3].u8[3]);
    _t.u8[4] = (c)->q[6].u8[4] & (~(c)->q[3].u8[4]);
    _t.u8[5] = (c)->q[6].u8[5] & (~(c)->q[3].u8[5]);
    _t.u8[6] = (c)->q[6].u8[6] & (~(c)->q[3].u8[6]);
    _t.u8[7] = (c)->q[6].u8[7] & (~(c)->q[3].u8[7]);
    _t.u8[8] = (c)->q[6].u8[8] & (~(c)->q[3].u8[8]);
    _t.u8[9] = (c)->q[6].u8[9] & (~(c)->q[3].u8[9]);
    _t.u8[10] = (c)->q[6].u8[10] & (~(c)->q[3].u8[10]);
    _t.u8[11] = (c)->q[6].u8[11] & (~(c)->q[3].u8[11]);
    _t.u8[12] = (c)->q[6].u8[12] & (~(c)->q[3].u8[12]);
    _t.u8[13] = (c)->q[6].u8[13] & (~(c)->q[3].u8[13]);
    _t.u8[14] = (c)->q[6].u8[14] & (~(c)->q[3].u8[14]);
    _t.u8[15] = (c)->q[6].u8[15] & (~(c)->q[3].u8[15]);
    (c)->q[6] = _t; }
  /* bf824: ldur q3, [x29, #-0x80] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* bf828: bic v1.16b, v1.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (~(c)->q[4].u8[0]);
    _t.u8[1] = (c)->q[1].u8[1] & (~(c)->q[4].u8[1]);
    _t.u8[2] = (c)->q[1].u8[2] & (~(c)->q[4].u8[2]);
    _t.u8[3] = (c)->q[1].u8[3] & (~(c)->q[4].u8[3]);
    _t.u8[4] = (c)->q[1].u8[4] & (~(c)->q[4].u8[4]);
    _t.u8[5] = (c)->q[1].u8[5] & (~(c)->q[4].u8[5]);
    _t.u8[6] = (c)->q[1].u8[6] & (~(c)->q[4].u8[6]);
    _t.u8[7] = (c)->q[1].u8[7] & (~(c)->q[4].u8[7]);
    _t.u8[8] = (c)->q[1].u8[8] & (~(c)->q[4].u8[8]);
    _t.u8[9] = (c)->q[1].u8[9] & (~(c)->q[4].u8[9]);
    _t.u8[10] = (c)->q[1].u8[10] & (~(c)->q[4].u8[10]);
    _t.u8[11] = (c)->q[1].u8[11] & (~(c)->q[4].u8[11]);
    _t.u8[12] = (c)->q[1].u8[12] & (~(c)->q[4].u8[12]);
    _t.u8[13] = (c)->q[1].u8[13] & (~(c)->q[4].u8[13]);
    _t.u8[14] = (c)->q[1].u8[14] & (~(c)->q[4].u8[14]);
    _t.u8[15] = (c)->q[1].u8[15] & (~(c)->q[4].u8[15]);
    (c)->q[1] = _t; }
  /* bf82c: bic v4.16b, v14.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[14].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[14].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[14].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[14].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[14].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[14].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[14].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[14].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[14].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[14].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[14].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[14].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[14].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[14].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[14].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[14].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[4] = _t; }
  /* bf830: ushll2 v22.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[3]) << 0);
    (c)->q[22] = _t; }
  /* bf834: bic v16.16b, v13.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[13].u8[0] & (~(c)->q[7].u8[0]);
    _t.u8[1] = (c)->q[13].u8[1] & (~(c)->q[7].u8[1]);
    _t.u8[2] = (c)->q[13].u8[2] & (~(c)->q[7].u8[2]);
    _t.u8[3] = (c)->q[13].u8[3] & (~(c)->q[7].u8[3]);
    _t.u8[4] = (c)->q[13].u8[4] & (~(c)->q[7].u8[4]);
    _t.u8[5] = (c)->q[13].u8[5] & (~(c)->q[7].u8[5]);
    _t.u8[6] = (c)->q[13].u8[6] & (~(c)->q[7].u8[6]);
    _t.u8[7] = (c)->q[13].u8[7] & (~(c)->q[7].u8[7]);
    _t.u8[8] = (c)->q[13].u8[8] & (~(c)->q[7].u8[8]);
    _t.u8[9] = (c)->q[13].u8[9] & (~(c)->q[7].u8[9]);
    _t.u8[10] = (c)->q[13].u8[10] & (~(c)->q[7].u8[10]);
    _t.u8[11] = (c)->q[13].u8[11] & (~(c)->q[7].u8[11]);
    _t.u8[12] = (c)->q[13].u8[12] & (~(c)->q[7].u8[12]);
    _t.u8[13] = (c)->q[13].u8[13] & (~(c)->q[7].u8[13]);
    _t.u8[14] = (c)->q[13].u8[14] & (~(c)->q[7].u8[14]);
    _t.u8[15] = (c)->q[13].u8[15] & (~(c)->q[7].u8[15]);
    (c)->q[16] = _t; }
  /* bf838: bic v3.16b, v3.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[3].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[3].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[3].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[3].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[3].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[3].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[3].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[3].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[3].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[3].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[3].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[3].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[3].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[3].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[3].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[3] = _t; }
  /* bf83c: ushll2 v24.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[23].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[23].u32[3]) << 0);
    (c)->q[24] = _t; }
  /* bf840: bic v7.16b, v15.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[15].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[15].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[15].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[15].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[15].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[15].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[15].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[15].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[15].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[15].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[15].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[15].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[15].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[15].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[15].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[15].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[7] = _t; }
  /* bf844: ushll v21.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* bf848: ushll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* bf84c: ushll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* bf850: ushll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[23].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[23].u32[1]) << 0);
    (c)->q[23] = _t; }
  /* bf854: bic v17.16b, v17.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[17].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[17].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[17].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[17].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[17].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[17].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[17].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[17].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[17].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[17].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[17].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[17].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[17].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[17].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[17].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[17] = _t; }
  /* bf858: ldur q24, [x29, #-0xa0] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* bf85c: bic v22.16b, v24.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* bf860: ldur q24, [x29, #-0x100] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* bf864: orr v1.16b, v17.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* bf868: bic v20.16b, v24.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* bf86c: ldp q24, q28, [x29, #-0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-240));
    arc_q_w(c, 24, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 28, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* bf870: orr v2.16b, v22.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* bf874: bic v19.16b, v28.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[28].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[28].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[28].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[28].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[28].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[28].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[28].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[28].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[28].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[28].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[28].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[28].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[28].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[28].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[28].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* bf878: bic v21.16b, v24.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[21] = _t; }
  /* bf87c: cmhi v24.16b, v0.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[27].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[27].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[27].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[27].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[27].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[27].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[27].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[27].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[27].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[27].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[27].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[27].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[27].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[27].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[27].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[27].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[24] = _t; }
  /* bf880: ldp q28, q27, [x29, #-0xc0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-192));
    arc_q_w(c, 28, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 27, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* bf884: orr v3.16b, v20.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* bf888: sshll2 v20.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[15]) << 0);
    (c)->q[20] = _t; }
  /* bf88c: orr v7.16b, v19.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* bf890: sshll2 v19.8h, v24.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[24].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[24].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[24].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[24].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[24].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[24].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[24].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[24].i8[15]) << 0);
    (c)->q[19] = _t; }
  /* bf894: orr v6.16b, v21.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* bf898: bic v18.16b, v27.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[27].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[27].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[27].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[27].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[27].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[27].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[27].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[27].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[27].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[27].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[27].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[27].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[27].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[27].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[27].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* bf89c: ldur q27, [x29, #-0xd0] */
  arc_q_w(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(-208))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-208)) + 8));
  /* bf8a0: bic v26.16b, v28.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (~(c)->q[26].u8[0]);
    _t.u8[1] = (c)->q[28].u8[1] & (~(c)->q[26].u8[1]);
    _t.u8[2] = (c)->q[28].u8[2] & (~(c)->q[26].u8[2]);
    _t.u8[3] = (c)->q[28].u8[3] & (~(c)->q[26].u8[3]);
    _t.u8[4] = (c)->q[28].u8[4] & (~(c)->q[26].u8[4]);
    _t.u8[5] = (c)->q[28].u8[5] & (~(c)->q[26].u8[5]);
    _t.u8[6] = (c)->q[28].u8[6] & (~(c)->q[26].u8[6]);
    _t.u8[7] = (c)->q[28].u8[7] & (~(c)->q[26].u8[7]);
    _t.u8[8] = (c)->q[28].u8[8] & (~(c)->q[26].u8[8]);
    _t.u8[9] = (c)->q[28].u8[9] & (~(c)->q[26].u8[9]);
    _t.u8[10] = (c)->q[28].u8[10] & (~(c)->q[26].u8[10]);
    _t.u8[11] = (c)->q[28].u8[11] & (~(c)->q[26].u8[11]);
    _t.u8[12] = (c)->q[28].u8[12] & (~(c)->q[26].u8[12]);
    _t.u8[13] = (c)->q[28].u8[13] & (~(c)->q[26].u8[13]);
    _t.u8[14] = (c)->q[28].u8[14] & (~(c)->q[26].u8[14]);
    _t.u8[15] = (c)->q[28].u8[15] & (~(c)->q[26].u8[15]);
    (c)->q[26] = _t; }
  /* bf8a4: bic v23.16b, v27.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[27].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[27].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[27].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[27].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[27].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[27].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[27].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[27].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[27].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[27].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[27].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[27].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[27].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[27].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[27].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[23] = _t; }
  /* bf8a8: sshll v27.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[7]) << 0);
    (c)->q[27] = _t; }
  /* bf8ac: orr v5.16b, v18.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* bf8b0: sshll2 v18.4s, v19.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* bf8b4: orr v16.16b, v26.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* bf8b8: sshll v19.4s, v19.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* bf8bc: orr v4.16b, v23.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* bf8c0: sshll v23.8h, v24.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[24].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[24].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[24].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[24].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[24].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[24].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[24].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[24].i8[7]) << 0);
    (c)->q[23] = _t; }
  /* bf8c4: sshll2 v24.4s, v20.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[7]) << 0);
    (c)->q[24] = _t; }
  /* bf8c8: sshll v20.4s, v20.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[3]) << 0);
    (c)->q[20] = _t; }
  /* bf8cc: sshll v25.4s, v27.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[3]) << 0);
    (c)->q[25] = _t; }
  /* bf8d0: sshll2 v21.4s, v27.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[7]) << 0);
    (c)->q[21] = _t; }
  /* bf8d4: sshll v30.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* bf8d8: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* bf8dc: sshll2 v27.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* bf8e0: sshll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[1]) << 0);
    (c)->q[24] = _t; }
  /* bf8e4: sshll v26.4s, v23.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[3]) << 0);
    (c)->q[26] = _t; }
  /* bf8e8: sshll2 v29.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[29] = _t; }
  /* bf8ec: sshll v20.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[20] = _t; }
  /* bf8f0: sshll2 v28.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* bf8f4: sshll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* bf8f8: sshll2 v22.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* bf8fc: sshll v21.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[21] = _t; }
  /* bf900: sshll v31.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[1]) << 0);
    (c)->q[31] = _t; }
  /* bf904: bic v30.16b, v8.16b, v30.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (~(c)->q[30].u8[0]);
    _t.u8[1] = (c)->q[8].u8[1] & (~(c)->q[30].u8[1]);
    _t.u8[2] = (c)->q[8].u8[2] & (~(c)->q[30].u8[2]);
    _t.u8[3] = (c)->q[8].u8[3] & (~(c)->q[30].u8[3]);
    _t.u8[4] = (c)->q[8].u8[4] & (~(c)->q[30].u8[4]);
    _t.u8[5] = (c)->q[8].u8[5] & (~(c)->q[30].u8[5]);
    _t.u8[6] = (c)->q[8].u8[6] & (~(c)->q[30].u8[6]);
    _t.u8[7] = (c)->q[8].u8[7] & (~(c)->q[30].u8[7]);
    _t.u8[8] = (c)->q[8].u8[8] & (~(c)->q[30].u8[8]);
    _t.u8[9] = (c)->q[8].u8[9] & (~(c)->q[30].u8[9]);
    _t.u8[10] = (c)->q[8].u8[10] & (~(c)->q[30].u8[10]);
    _t.u8[11] = (c)->q[8].u8[11] & (~(c)->q[30].u8[11]);
    _t.u8[12] = (c)->q[8].u8[12] & (~(c)->q[30].u8[12]);
    _t.u8[13] = (c)->q[8].u8[13] & (~(c)->q[30].u8[13]);
    _t.u8[14] = (c)->q[8].u8[14] & (~(c)->q[30].u8[14]);
    _t.u8[15] = (c)->q[8].u8[15] & (~(c)->q[30].u8[15]);
    (c)->q[30] = _t; }
  /* bf908: sshll v8.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[8] = _t; }
  /* bf90c: bic v20.16b, v10.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* bf910: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* bf914: sshll2 v23.4s, v23.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* bf918: sshll2 v26.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[3]) << 0);
    (c)->q[26] = _t; }
  /* bf91c: sshll2 v19.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[19] = _t; }
  /* bf920: bic v25.16b, v10.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[25].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[25].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[25].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[25].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[25].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[25].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[25].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[25].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[25].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[25].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[25].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[25].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[25].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[25].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[25].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[25].u8[15]);
    (c)->q[25] = _t; }
  /* bf924: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* bf928: bic v31.16b, v9.16b, v31.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (~(c)->q[31].u8[0]);
    _t.u8[1] = (c)->q[9].u8[1] & (~(c)->q[31].u8[1]);
    _t.u8[2] = (c)->q[9].u8[2] & (~(c)->q[31].u8[2]);
    _t.u8[3] = (c)->q[9].u8[3] & (~(c)->q[31].u8[3]);
    _t.u8[4] = (c)->q[9].u8[4] & (~(c)->q[31].u8[4]);
    _t.u8[5] = (c)->q[9].u8[5] & (~(c)->q[31].u8[5]);
    _t.u8[6] = (c)->q[9].u8[6] & (~(c)->q[31].u8[6]);
    _t.u8[7] = (c)->q[9].u8[7] & (~(c)->q[31].u8[7]);
    _t.u8[8] = (c)->q[9].u8[8] & (~(c)->q[31].u8[8]);
    _t.u8[9] = (c)->q[9].u8[9] & (~(c)->q[31].u8[9]);
    _t.u8[10] = (c)->q[9].u8[10] & (~(c)->q[31].u8[10]);
    _t.u8[11] = (c)->q[9].u8[11] & (~(c)->q[31].u8[11]);
    _t.u8[12] = (c)->q[9].u8[12] & (~(c)->q[31].u8[12]);
    _t.u8[13] = (c)->q[9].u8[13] & (~(c)->q[31].u8[13]);
    _t.u8[14] = (c)->q[9].u8[14] & (~(c)->q[31].u8[14]);
    _t.u8[15] = (c)->q[9].u8[15] & (~(c)->q[31].u8[15]);
    (c)->q[31] = _t; }
  /* bf92c: ldr q9, [x22, #0xc80] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 22) + INT64_C(3200)) + 8));
  /* bf930: bic v24.16b, v10.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[24] = _t; }
  /* bf934: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* bf938: bic v8.16b, v9.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (~(c)->q[8].u8[0]);
    _t.u8[1] = (c)->q[9].u8[1] & (~(c)->q[8].u8[1]);
    _t.u8[2] = (c)->q[9].u8[2] & (~(c)->q[8].u8[2]);
    _t.u8[3] = (c)->q[9].u8[3] & (~(c)->q[8].u8[3]);
    _t.u8[4] = (c)->q[9].u8[4] & (~(c)->q[8].u8[4]);
    _t.u8[5] = (c)->q[9].u8[5] & (~(c)->q[8].u8[5]);
    _t.u8[6] = (c)->q[9].u8[6] & (~(c)->q[8].u8[6]);
    _t.u8[7] = (c)->q[9].u8[7] & (~(c)->q[8].u8[7]);
    _t.u8[8] = (c)->q[9].u8[8] & (~(c)->q[8].u8[8]);
    _t.u8[9] = (c)->q[9].u8[9] & (~(c)->q[8].u8[9]);
    _t.u8[10] = (c)->q[9].u8[10] & (~(c)->q[8].u8[10]);
    _t.u8[11] = (c)->q[9].u8[11] & (~(c)->q[8].u8[11]);
    _t.u8[12] = (c)->q[9].u8[12] & (~(c)->q[8].u8[12]);
    _t.u8[13] = (c)->q[9].u8[13] & (~(c)->q[8].u8[13]);
    _t.u8[14] = (c)->q[9].u8[14] & (~(c)->q[8].u8[14]);
    _t.u8[15] = (c)->q[9].u8[15] & (~(c)->q[8].u8[15]);
    (c)->q[8] = _t; }
  /* bf93c: sshll2 v9.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* bf940: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* bf944: bic v21.16b, v10.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[21] = _t; }
  /* bf948: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* bf94c: orr v24.16b, v30.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[24].u8[15];
    (c)->q[24] = _t; }
  /* bf950: bic v29.16b, v10.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[29].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[29].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[29].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[29].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[29].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[29].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[29].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[29].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[29].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[29].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[29].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[29].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[29].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[29].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[29].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[29].u8[15]);
    (c)->q[29] = _t; }
  /* bf954: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* bf958: orr v17.16b, v8.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[20].u8[15];
    (c)->q[17] = _t; }
  /* bf95c: orr v20.16b, v31.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[25].u8[15];
    (c)->q[20] = _t; }
  /* bf960: bic v28.16b, v10.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[28].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[28].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[28].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[28].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[28].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[28].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[28].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[28].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[28].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[28].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[28].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[28].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[28].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[28].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[28].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[28].u8[15]);
    (c)->q[28] = _t; }
  /* bf964: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* bf968: orr v7.16b, v24.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* bf96c: orr v3.16b, v17.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* bf970: bic v27.16b, v10.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[27].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[27].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[27].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[27].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[27].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[27].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[27].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[27].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[27].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[27].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[27].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[27].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[27].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[27].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[27].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[27].u8[15]);
    (c)->q[27] = _t; }
  /* bf974: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* bf978: orr v6.16b, v20.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* bf97c: bic v22.16b, v10.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* bf980: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* bf984: orr v3.16b, v6.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* bf988: bic v9.16b, v10.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[9].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[9].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[9].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[9].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[9].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[9].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[9].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[9].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[9].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[9].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[9].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[9].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[9].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[9].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[9].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[9].u8[15]);
    (c)->q[9] = _t; }
  /* bf98c: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* bf990: bic v18.16b, v10.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* bf994: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* bf998: orr v22.16b, v9.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[22].u8[15];
    (c)->q[22] = _t; }
  /* bf99c: bic v26.16b, v10.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[26].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[26].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[26].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[26].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[26].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[26].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[26].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[26].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[26].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[26].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[26].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[26].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[26].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[26].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[26].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[26].u8[15]);
    (c)->q[26] = _t; }
  /* bf9a0: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* bf9a4: orr v18.16b, v18.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[27].u8[15];
    (c)->q[18] = _t; }
  /* bf9a8: bic v19.16b, v10.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* bf9ac: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* bf9b0: orr v1.16b, v22.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* bf9b4: bic v23.16b, v10.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[23] = _t; }
  /* bf9b8: orr v2.16b, v18.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* bf9bc: orr v19.16b, v19.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[29].u8[15];
    (c)->q[19] = _t; }
  /* bf9c0: orr v21.16b, v23.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* bf9c4: orr v23.16b, v26.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[28].u8[15];
    (c)->q[23] = _t; }
  /* bf9c8: orr v1.16b, v1.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[2].u8[15];
    (c)->q[1] = _t; }
  /* bf9cc: orr v16.16b, v19.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* bf9d0: orr v4.16b, v21.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* bf9d4: orr v5.16b, v23.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* bf9d8: orr v2.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[16].u8[15];
    (c)->q[2] = _t; }
  /* bf9dc: orr v4.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[7].u8[15];
    (c)->q[4] = _t; }
  /* bf9e0: orr v1.16b, v2.16b, v1.16b */
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
  /* bf9e4: orr v2.16b, v3.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[4].u8[15];
    (c)->q[2] = _t; }
  /* bf9e8: orr v1.16b, v2.16b, v1.16b */
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
  /* bf9ec: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* bf9f0: orr v1.8b, v1.8b, v2.8b */
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
  /* bf9f4: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* bf9f8: cbnz x13, #0xbf790 */
  if ((ARC_X_R(c, 13)) != 0) goto L_bf790;
L_bf9fc:;
  /* bf9fc: ldur q1, [x12, #-0xf] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 12) + INT64_C(-15))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-15)) + 8));
  /* bfa00: ldur q2, [x12, #-0x1f] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(-31))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-31)) + 8));
  /* bfa04: ldur q3, [x12, #-0x2f] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 12) + INT64_C(-47))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-47)) + 8));
  /* bfa08: ldur q4, [x12, #-0x3f] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(-63))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-63)) + 8));
  /* bfa0c: ldr q10, [sp, #0x120] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* bfa10: ldr q8, [x6, #0xc40] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 6) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3136)) + 8));
  /* bfa14: rev64 v1.16b, v1.16b */
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
  /* bfa18: rev64 v2.16b, v2.16b */
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
  /* bfa1c: rev64 v3.16b, v3.16b */
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
  /* bfa20: rev64 v4.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[7];
    _t.u8[1] = (c)->q[4].u8[6];
    _t.u8[2] = (c)->q[4].u8[5];
    _t.u8[3] = (c)->q[4].u8[4];
    _t.u8[4] = (c)->q[4].u8[3];
    _t.u8[5] = (c)->q[4].u8[2];
    _t.u8[6] = (c)->q[4].u8[1];
    _t.u8[7] = (c)->q[4].u8[0];
    _t.u8[8] = (c)->q[4].u8[15];
    _t.u8[9] = (c)->q[4].u8[14];
    _t.u8[10] = (c)->q[4].u8[13];
    _t.u8[11] = (c)->q[4].u8[12];
    _t.u8[12] = (c)->q[4].u8[11];
    _t.u8[13] = (c)->q[4].u8[10];
    _t.u8[14] = (c)->q[4].u8[9];
    _t.u8[15] = (c)->q[4].u8[8];
    (c)->q[4] = _t; }
  /* bfa24: ldr q9, [x27, #0xbb0] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 27) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2992)) + 8));
  /* bfa28: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* bfa2c: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* bfa30: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* bfa34: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* bfa38: cmhi v1.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[1].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[1].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[1].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[1].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[1].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[1].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[1].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[1].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[1].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[1].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[1].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[1].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[1].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[1].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[1].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[1].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[1] = _t; }
  /* bfa3c: cmhi v2.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[2].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[2].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[2].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[2].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[2].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[2].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[2].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[2].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[2].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[2].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[2].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[2].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[2].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[2].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[2].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[2].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[2] = _t; }
  /* bfa40: cmhi v3.16b, v0.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[3].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[3].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[3].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[3].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[3].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[3].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[3].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[3].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[3].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[3].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[3].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[3].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[3].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[3].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[3].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[3].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[3] = _t; }
  /* bfa44: sshll2 v5.8h, v1.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[15]) << 0);
    (c)->q[5] = _t; }
  /* bfa48: sshll v1.8h, v1.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[1].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[1].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[1].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[1].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[1].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[1].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[1].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[1].i8[7]) << 0);
    (c)->q[1] = _t; }
  /* bfa4c: sshll2 v6.8h, v2.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[15]) << 0);
    (c)->q[6] = _t; }
  /* bfa50: sshll v2.8h, v2.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[2].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[2].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[2].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[2].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[2].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[2].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[2].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[2].i8[7]) << 0);
    (c)->q[2] = _t; }
  /* bfa54: sshll v16.4s, v1.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[3]) << 0);
    (c)->q[16] = _t; }
  /* bfa58: sshll2 v1.4s, v1.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[1].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[1].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[1].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[1].i16[7]) << 0);
    (c)->q[1] = _t; }
  /* bfa5c: sshll v17.4s, v6.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[3]) << 0);
    (c)->q[17] = _t; }
  /* bfa60: sshll2 v6.4s, v6.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[6].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[6].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[6].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[6].i16[7]) << 0);
    (c)->q[6] = _t; }
  /* bfa64: sshll v7.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[5].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[5].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[5].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[5].i16[3]) << 0);
    (c)->q[7] = _t; }
  /* bfa68: sshll v18.4s, v2.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[3]) << 0);
    (c)->q[18] = _t; }
  /* bfa6c: sshll2 v2.4s, v2.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[2].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[2].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[2].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[2].i16[7]) << 0);
    (c)->q[2] = _t; }
  /* bfa70: sshll2 v5.4s, v5.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[5].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[5].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[5].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[5].i16[7]) << 0);
    (c)->q[5] = _t; }
  /* bfa74: ushll v22.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* bfa78: ushll2 v1.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[1] = _t; }
  /* bfa7c: ushll v20.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* bfa80: ushll v25.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* bfa84: ushll2 v27.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[27] = _t; }
  /* bfa88: ldur q6, [x29, #-0x60] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* bfa8c: ushll v19.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* bfa90: ushll v26.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* bfa94: ushll2 v2.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* bfa98: and v1.16b, v1.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] & (c)->q[6].u8[15];
    (c)->q[1] = _t; }
  /* bfa9c: ldur q6, [x29, #-0x70] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* bfaa0: ushll v21.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* bfaa4: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* bfaa8: ushll v23.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[23] = _t; }
  /* bfaac: ushll v24.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* bfab0: and v20.16b, v20.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[6].u8[15];
    (c)->q[20] = _t; }
  /* bfab4: ldur q6, [x29, #-0x80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-128))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-128)) + 8));
  /* bfab8: ushll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[18].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[18].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* bfabc: ushll2 v17.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[17] = _t; }
  /* bfac0: ushll2 v7.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* bfac4: and v22.16b, v22.16b, v14.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[14].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[14].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[14].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[14].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[14].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[14].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[14].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[14].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[14].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[14].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[14].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[14].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[14].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[14].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[14].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[14].u8[15];
    (c)->q[22] = _t; }
  /* bfac8: and v19.16b, v19.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[6].u8[15];
    (c)->q[19] = _t; }
  /* bfacc: ldur q6, [x29, #-0x90] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-144))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-144)) + 8));
  /* bfad0: and v28.16b, v5.16b, v11.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[11].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[11].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[11].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[11].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[11].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[11].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[11].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[11].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[11].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[11].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[11].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[11].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[11].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[11].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[11].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[11].u8[15];
    (c)->q[28] = _t; }
  /* bfad4: and v5.16b, v21.16b, v15.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[15].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[15].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[15].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[15].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[15].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[15].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[15].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[15].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[15].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[15].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[15].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[15].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[15].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[15].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[15].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[15].u8[15];
    (c)->q[5] = _t; }
  /* bfad8: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* bfadc: and v6.16b, v2.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] & (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* bfae0: ldur q2, [x29, #-0xa0] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* bfae4: and v7.16b, v7.16b, v13.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[13].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[13].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[13].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[13].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[13].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[13].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[13].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[13].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[13].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[13].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[13].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[13].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[13].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[13].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[13].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[13].u8[15];
    (c)->q[7] = _t; }
  /* bfae8: and v21.16b, v27.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[2].u8[15];
    (c)->q[21] = _t; }
  /* bfaec: ldur q2, [x29, #-0x100] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* bfaf0: sshll v27.8h, v3.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[3].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[3].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[3].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[3].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[3].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[3].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[3].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[3].i8[7]) << 0);
    (c)->q[27] = _t; }
  /* bfaf4: and v16.16b, v16.16b, v12.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[12].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[12].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[12].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[12].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[12].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[12].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[12].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[12].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[12].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[12].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[12].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[12].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[12].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[12].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[12].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[12].u8[15];
    (c)->q[16] = _t; }
  /* bfaf8: orr v1.16b, v6.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* bfafc: and v2.16b, v23.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* bfb00: ldur q23, [x29, #-0xe0] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(-224))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-224)) + 8));
  /* bfb04: and v23.16b, v25.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[23].u8[15];
    (c)->q[23] = _t; }
  /* bfb08: ldur q25, [x29, #-0xf0] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-240))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-240)) + 8));
  /* bfb0c: orr v2.16b, v2.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[19].u8[15];
    (c)->q[2] = _t; }
  /* bfb10: sshll2 v19.8h, v3.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[3].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[3].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[3].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[3].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[3].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[3].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[3].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[3].i8[15]) << 0);
    (c)->q[19] = _t; }
  /* bfb14: and v24.16b, v24.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[25].u8[15];
    (c)->q[24] = _t; }
  /* bfb18: cmhi v25.16b, v0.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[0].u8[0] > (c)->q[4].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[0].u8[1] > (c)->q[4].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[0].u8[2] > (c)->q[4].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[0].u8[3] > (c)->q[4].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[0].u8[4] > (c)->q[4].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[0].u8[5] > (c)->q[4].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[0].u8[6] > (c)->q[4].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[0].u8[7] > (c)->q[4].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[0].u8[8] > (c)->q[4].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[0].u8[9] > (c)->q[4].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[0].u8[10] > (c)->q[4].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[0].u8[11] > (c)->q[4].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[0].u8[12] > (c)->q[4].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[0].u8[13] > (c)->q[4].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[0].u8[14] > (c)->q[4].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[0].u8[15] > (c)->q[4].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* bfb1c: ldur q4, [x29, #-0xb0] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(-176))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-176)) + 8));
  /* bfb20: orr v5.16b, v23.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* bfb24: and v18.16b, v18.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[4].u8[15];
    (c)->q[18] = _t; }
  /* bfb28: ldur q4, [x29, #-0xd0] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(-208))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-208)) + 8));
  /* bfb2c: sshll v23.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[0]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[1]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[2]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[3]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[4]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[5]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[6]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[7]) << 0);
    (c)->q[23] = _t; }
  /* bfb30: and v26.16b, v26.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[4].u8[15];
    (c)->q[26] = _t; }
  /* bfb34: ldur q4, [x29, #-0xc0] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 29) + INT64_C(-192))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-192)) + 8));
  /* bfb38: orr v16.16b, v18.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* bfb3c: and v17.16b, v17.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[4].u8[15];
    (c)->q[17] = _t; }
  /* bfb40: orr v4.16b, v24.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[20].u8[15];
    (c)->q[4] = _t; }
  /* bfb44: sshll2 v24.4s, v19.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[7]) << 0);
    (c)->q[24] = _t; }
  /* bfb48: sshll v19.4s, v19.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[19].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[19].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[19].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[19].i16[3]) << 0);
    (c)->q[19] = _t; }
  /* bfb4c: sshll2 v20.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((int16_t)((c)->q[25].i8[8]) << 0);
    _t.u16[1] = (uint16_t)((int16_t)((c)->q[25].i8[9]) << 0);
    _t.u16[2] = (uint16_t)((int16_t)((c)->q[25].i8[10]) << 0);
    _t.u16[3] = (uint16_t)((int16_t)((c)->q[25].i8[11]) << 0);
    _t.u16[4] = (uint16_t)((int16_t)((c)->q[25].i8[12]) << 0);
    _t.u16[5] = (uint16_t)((int16_t)((c)->q[25].i8[13]) << 0);
    _t.u16[6] = (uint16_t)((int16_t)((c)->q[25].i8[14]) << 0);
    _t.u16[7] = (uint16_t)((int16_t)((c)->q[25].i8[15]) << 0);
    (c)->q[20] = _t; }
  /* bfb50: sshll v25.4s, v27.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[3]) << 0);
    (c)->q[25] = _t; }
  /* bfb54: orr v3.16b, v26.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[22].u8[15];
    (c)->q[3] = _t; }
  /* bfb58: sshll2 v22.4s, v27.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[27].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[27].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[27].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[27].i16[7]) << 0);
    (c)->q[22] = _t; }
  /* bfb5c: sshll v26.4s, v23.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[3]) << 0);
    (c)->q[26] = _t; }
  /* bfb60: orr v7.16b, v17.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* bfb64: orr v17.16b, v21.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[28].u8[15];
    (c)->q[17] = _t; }
  /* bfb68: sshll2 v27.2d, v24.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* bfb6c: sshll2 v29.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[29] = _t; }
  /* bfb70: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* bfb74: sshll2 v28.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* bfb78: sshll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[25].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[25].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* bfb7c: sshll v24.2d, v24.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[24].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[24].i32[1]) << 0);
    (c)->q[24] = _t; }
  /* bfb80: sshll2 v21.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* bfb84: sshll v22.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[22] = _t; }
  /* bfb88: sshll2 v18.4s, v20.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[7]) << 0);
    (c)->q[18] = _t; }
  /* bfb8c: sshll v20.4s, v20.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[20].i16[0]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[20].i16[1]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[20].i16[2]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[20].i16[3]) << 0);
    (c)->q[20] = _t; }
  /* bfb90: and v19.16b, v19.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[10].u8[15];
    (c)->q[19] = _t; }
  /* bfb94: ldr q10, [sp, #0x110] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* bfb98: sshll v31.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[1]) << 0);
    (c)->q[31] = _t; }
  /* bfb9c: sshll2 v23.4s, v23.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((int32_t)((c)->q[23].i16[4]) << 0);
    _t.u32[1] = (uint32_t)((int32_t)((c)->q[23].i16[5]) << 0);
    _t.u32[2] = (uint32_t)((int32_t)((c)->q[23].i16[6]) << 0);
    _t.u32[3] = (uint32_t)((int32_t)((c)->q[23].i16[7]) << 0);
    (c)->q[23] = _t; }
  /* bfba0: sshll2 v26.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[3]) << 0);
    (c)->q[26] = _t; }
  /* bfba4: and v25.16b, v25.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[10].u8[15];
    (c)->q[25] = _t; }
  /* bfba8: ldr q10, [sp, #0x100] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* bfbac: sshll v30.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[30] = _t; }
  /* bfbb0: and v31.16b, v31.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[9].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[9].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[9].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[9].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[9].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[9].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[9].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[9].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[9].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[9].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[9].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[9].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[9].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[9].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[9].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[9].u8[15];
    (c)->q[31] = _t; }
  /* bfbb4: ldr q9, [x22, #0xc80] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 22) + INT64_C(3200)) + 8));
  /* bfbb8: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* bfbbc: and v24.16b, v24.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[10].u8[15];
    (c)->q[24] = _t; }
  /* bfbc0: ldr q10, [sp, #0xf0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* bfbc4: and v30.16b, v30.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[8].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[8].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[8].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[8].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[8].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[8].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[8].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[8].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[8].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[8].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[8].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[8].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[8].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[8].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[8].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[8].u8[15];
    (c)->q[30] = _t; }
  /* bfbc8: sshll v8.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[8] = _t; }
  /* bfbcc: sshll2 v20.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[20] = _t; }
  /* bfbd0: and v22.16b, v22.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[10].u8[15];
    (c)->q[22] = _t; }
  /* bfbd4: ldr q10, [sp, #0xe0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* bfbd8: and v29.16b, v29.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[29].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[29].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[29].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[29].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[29].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[29].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[29].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[29].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[29].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[29].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[29].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[29].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[29].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[29].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[29].u8[15] & (c)->q[10].u8[15];
    (c)->q[29] = _t; }
  /* bfbdc: ldr q10, [sp, #0xd0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* bfbe0: and v8.16b, v8.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[9].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[9].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[9].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[9].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[9].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[9].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[9].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[9].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[9].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[9].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[9].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[9].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[9].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[9].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[9].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[9].u8[15];
    (c)->q[8] = _t; }
  /* bfbe4: sshll2 v9.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[9] = _t; }
  /* bfbe8: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* bfbec: orr v24.16b, v30.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[24].u8[15];
    (c)->q[24] = _t; }
  /* bfbf0: and v28.16b, v28.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[10].u8[15];
    (c)->q[28] = _t; }
  /* bfbf4: ldr q10, [sp, #0xc0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* bfbf8: orr v6.16b, v8.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[19].u8[15];
    (c)->q[6] = _t; }
  /* bfbfc: orr v19.16b, v31.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[25].u8[15];
    (c)->q[19] = _t; }
  /* bfc00: and v27.16b, v27.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[10].u8[15];
    (c)->q[27] = _t; }
  /* bfc04: ldr q10, [sp, #0xb0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* bfc08: orr v5.16b, v24.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* bfc0c: and v21.16b, v21.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[10].u8[15];
    (c)->q[21] = _t; }
  /* bfc10: ldr q10, [sp, #0xa0] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(160))), arc_ld64(((c)->sp + INT64_C(160)) + 8));
  /* bfc14: orr v2.16b, v6.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* bfc18: orr v4.16b, v19.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* bfc1c: and v9.16b, v9.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[10].u8[15];
    (c)->q[9] = _t; }
  /* bfc20: ldr q10, [sp, #0x90] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(144))), arc_ld64(((c)->sp + INT64_C(144)) + 8));
  /* bfc24: and v18.16b, v18.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[10].u8[15];
    (c)->q[18] = _t; }
  /* bfc28: ldr q10, [sp, #0x80] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(128))), arc_ld64(((c)->sp + INT64_C(128)) + 8));
  /* bfc2c: orr v2.16b, v4.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* bfc30: orr v21.16b, v9.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* bfc34: and v26.16b, v26.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[10].u8[15];
    (c)->q[26] = _t; }
  /* bfc38: ldr q10, [sp, #0x70] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(112))), arc_ld64(((c)->sp + INT64_C(112)) + 8));
  /* bfc3c: orr v18.16b, v18.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[27].u8[15];
    (c)->q[18] = _t; }
  /* bfc40: and v20.16b, v20.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[10].u8[15];
    (c)->q[20] = _t; }
  /* bfc44: ldr q10, [sp, #0x60] */
  arc_q_w(c, 10, arc_ld64(((c)->sp + INT64_C(96))), arc_ld64(((c)->sp + INT64_C(96)) + 8));
  /* bfc48: orr v1.16b, v21.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* bfc4c: and v23.16b, v23.16b, v10.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[10].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[10].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[10].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[10].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[10].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[10].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[10].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[10].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[10].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[10].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[10].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[10].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[10].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[10].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[10].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[10].u8[15];
    (c)->q[23] = _t; }
  /* bfc50: orr v6.16b, v18.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[17].u8[15];
    (c)->q[6] = _t; }
  /* bfc54: orr v20.16b, v20.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[29].u8[15];
    (c)->q[20] = _t; }
  /* bfc58: orr v22.16b, v23.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[22].u8[15];
    (c)->q[22] = _t; }
  /* bfc5c: orr v23.16b, v26.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[28].u8[15];
    (c)->q[23] = _t; }
  /* bfc60: orr v1.16b, v1.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[6].u8[15];
    (c)->q[1] = _t; }
  /* bfc64: orr v7.16b, v20.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* bfc68: orr v3.16b, v22.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* bfc6c: orr v16.16b, v23.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* bfc70: orr v6.16b, v16.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[7].u8[15];
    (c)->q[6] = _t; }
  /* bfc74: orr v3.16b, v3.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[5].u8[15];
    (c)->q[3] = _t; }
  /* bfc78: orr v1.16b, v6.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* bfc7c: orr v2.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[3].u8[15];
    (c)->q[2] = _t; }
  /* bfc80: orr v1.16b, v2.16b, v1.16b */
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
  /* bfc84: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* bfc88: orr v1.8b, v1.8b, v2.8b */
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
  /* bfc8c: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* bfc90: cbz x14, #0xbf760 */
  if ((ARC_X_R(c, 14)) == 0) goto L_bf760;
L_bfc94:;
  /* bfc94: cbz x13, #0xbf760 */
  if ((ARC_X_R(c, 13)) == 0) goto L_bf760;
L_bfc98:;
  /* bfc98: rbit x15, x13 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 13)));
  /* bfc9c: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* bfca0: sub x17, x13, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* bfca4: sub x3, x14, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* bfca8: and x13, x17, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) & ARC_X_R(c, 13)));
  /* bfcac: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* bfcb0: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* bfcb4: and x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) & ARC_X_R(c, 14)));
  /* bfcb8: sub x15, x12, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 15)));
  /* bfcbc: ldrb w0, [x11, x16] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 16))));
  /* bfcc0: ldrb w1, [x15] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 15)));
  /* bfcc4: strb w1, [x11, x16] */
  arc_st8((ARC_X_R(c, 11) + ARC_X_R(c, 16)), ARC_W_R(c, 1));
  /* bfcc8: strb w0, [x15] */
  arc_st8(ARC_X_R(c, 15), ARC_W_R(c, 0));
  /* bfccc: cbz x13, #0xbf760 */
  if ((ARC_X_R(c, 13)) == 0) goto L_bf760;
  /* bfcd0: cbnz x14, #0xbfc98 */
  if ((ARC_X_R(c, 14)) != 0) goto L_bfc98;
  /* bfcd4: b #0xbf760 */
  goto L_bf760;
L_bfcd8:;
  /* bfcd8: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* bfcdc: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* bfce0: b #0xbfd04 */
  goto L_bfd04;
L_bfce4:;
  /* bfce4: orr x17, x13, x14 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) | ARC_X_R(c, 14)));
  /* bfce8: cbz x17, #0xbfd04 */
  if ((ARC_X_R(c, 17)) == 0) goto L_bfd04;
  /* bfcec: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* bfcf0: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* bfcf4: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* bfcf8: cbz x14, #0xbfd14 */
  if ((ARC_X_R(c, 14)) == 0) goto L_bfd14;
  /* bfcfc: cbnz w16, #0xbff9c */
  if ((ARC_W_R(c, 16)) != 0) goto L_bff9c;
  /* bfd00: b #0xc0224 */
  goto L_c0224;
L_bfd04:;
  /* bfd04: add x14, x15, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* bfd08: add x15, x14, x14, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 14)) >> 63)));
  /* bfd0c: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* bfd10: sub x0, x14, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
L_bfd14:;
  /* bfd14: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* bfd18: b.lt #0xbfd34 */
  if (ARC_COND(c, 11)) goto L_bfd34;
  /* bfd1c: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* bfd20: b.hs #0xbfd3c */
  if (ARC_COND(c, 2)) goto L_bfd3c;
  /* bfd24: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* bfd28: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* bfd2c: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* bfd30: b #0xbff70 */
  goto L_bff70;
L_bfd34:;
  /* bfd34: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* bfd38: b #0xbff90 */
  goto L_bff90;
L_bfd3c:;
  /* bfd3c: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* bfd40: b.hs #0xbfd50 */
  if (ARC_COND(c, 2)) goto L_bfd50;
  /* bfd44: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* bfd48: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* bfd4c: b #0xbfec8 */
  goto L_bfec8;
L_bfd50:;
  /* bfd50: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfd54: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* bfd58: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* bfd5c: ldr q0, [x17, #0xa70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 17) + INT64_C(2672))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2672)) + 8));
  /* bfd60: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfd64: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* bfd68: ldr q1, [x17, #0xc60] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 17) + INT64_C(3168))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3168)) + 8));
  /* bfd6c: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfd70: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* bfd74: ldr q2, [x17, #0xa10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 17) + INT64_C(2576))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2576)) + 8));
  /* bfd78: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfd7c: movi v17.2d, #0000000000000000 */
  arc_v_clear(c, 17);
  /* bfd80: ldr q19, [x17, #0xc00] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 17) + INT64_C(3072))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3072)) + 8));
  /* bfd84: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfd88: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* bfd8c: ldr q20, [x17, #0xcc0] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 17) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3264)) + 8));
  /* bfd90: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfd94: movi v18.2d, #0000000000000000 */
  arc_v_clear(c, 18);
  /* bfd98: movi v16.2d, #0000000000000000 */
  arc_v_clear(c, 16);
  /* bfd9c: ldr q22, [x17, #0xc70] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 17) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3184)) + 8));
  /* bfda0: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfda4: dup v21.16b, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 8));
    _t.u8[1] = (ARC_W_R(c, 8));
    _t.u8[2] = (ARC_W_R(c, 8));
    _t.u8[3] = (ARC_W_R(c, 8));
    _t.u8[4] = (ARC_W_R(c, 8));
    _t.u8[5] = (ARC_W_R(c, 8));
    _t.u8[6] = (ARC_W_R(c, 8));
    _t.u8[7] = (ARC_W_R(c, 8));
    _t.u8[8] = (ARC_W_R(c, 8));
    _t.u8[9] = (ARC_W_R(c, 8));
    _t.u8[10] = (ARC_W_R(c, 8));
    _t.u8[11] = (ARC_W_R(c, 8));
    _t.u8[12] = (ARC_W_R(c, 8));
    _t.u8[13] = (ARC_W_R(c, 8));
    _t.u8[14] = (ARC_W_R(c, 8));
    _t.u8[15] = (ARC_W_R(c, 8));
    (c)->q[21] = _t; }
  /* bfda8: ldr q23, [x17, #0xc10] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 17) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3088)) + 8));
  /* bfdac: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfdb0: ldr q24, [x17, #0xa80] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 17) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2688)) + 8));
  /* bfdb4: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* bfdb8: and x17, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
L_bfdbc:;
  /* bfdbc: ldr q25, [x11, x14] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 11) + ARC_X_R(c, 14))), arc_ld64((ARC_X_R(c, 11) + ARC_X_R(c, 14)) + 8));
  /* bfdc0: dup v29.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[29] = _t; }
  /* bfdc4: add x14, x14, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(16)));
  /* bfdc8: cmp x17, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 14));
  /* bfdcc: cmhs v25.16b, v25.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[25].u8[0] >= (c)->q[21].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[25].u8[1] >= (c)->q[21].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[25].u8[2] >= (c)->q[21].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[25].u8[3] >= (c)->q[21].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[25].u8[4] >= (c)->q[21].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[25].u8[5] >= (c)->q[21].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[25].u8[6] >= (c)->q[21].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[25].u8[7] >= (c)->q[21].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[25].u8[8] >= (c)->q[21].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[25].u8[9] >= (c)->q[21].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[25].u8[10] >= (c)->q[21].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[25].u8[11] >= (c)->q[21].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[25].u8[12] >= (c)->q[21].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[25].u8[13] >= (c)->q[21].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[25].u8[14] >= (c)->q[21].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[25].u8[15] >= (c)->q[21].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* bfdd0: ushll2 v26.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[8]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[9]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[10]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[11]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[12]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[13]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[14]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[15]) << 0);
    (c)->q[26] = _t; }
  /* bfdd4: ushll v25.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[7]) << 0);
    (c)->q[25] = _t; }
  /* bfdd8: ushll2 v27.4s, v26.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[7]) << 0);
    (c)->q[27] = _t; }
  /* bfddc: ushll v26.4s, v26.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[3]) << 0);
    (c)->q[26] = _t; }
  /* bfde0: ushll2 v28.4s, v25.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[7]) << 0);
    (c)->q[28] = _t; }
  /* bfde4: ushll v25.4s, v25.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[3]) << 0);
    (c)->q[25] = _t; }
  /* bfde8: ushll2 v30.2d, v27.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[3]) << 0);
    (c)->q[30] = _t; }
  /* bfdec: ushll v27.2d, v27.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[1]) << 0);
    (c)->q[27] = _t; }
  /* bfdf0: ushll2 v31.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* bfdf4: ushll2 v8.2d, v28.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[3]) << 0);
    (c)->q[8] = _t; }
  /* bfdf8: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* bfdfc: ushll v28.2d, v28.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[1]) << 0);
    (c)->q[28] = _t; }
  /* bfe00: ushll2 v9.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[3]) << 0);
    (c)->q[9] = _t; }
  /* bfe04: ushll v25.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* bfe08: and v30.16b, v30.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[29].u8[15];
    (c)->q[30] = _t; }
  /* bfe0c: and v27.16b, v27.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[29].u8[15];
    (c)->q[27] = _t; }
  /* bfe10: and v31.16b, v31.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[29].u8[15];
    (c)->q[31] = _t; }
  /* bfe14: and v8.16b, v8.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[29].u8[15];
    (c)->q[8] = _t; }
  /* bfe18: and v26.16b, v26.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[29].u8[15];
    (c)->q[26] = _t; }
  /* bfe1c: and v28.16b, v28.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[29].u8[15];
    (c)->q[28] = _t; }
  /* bfe20: and v9.16b, v9.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[29].u8[15];
    (c)->q[9] = _t; }
  /* bfe24: and v25.16b, v25.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[29].u8[15];
    (c)->q[25] = _t; }
  /* bfe28: dup v29.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[29] = _t; }
  /* bfe2c: ushl v31.2d, v31.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[31] = _t; }
  /* bfe30: ushl v27.2d, v27.2d, v1.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[27].u64[0], (int8_t)(c)->q[1].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[27].u64[1], (int8_t)(c)->q[1].u64[1]);
    (c)->q[27] = _t; }
  /* bfe34: ushl v30.2d, v30.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[0].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[0].u64[1]);
    (c)->q[30] = _t; }
  /* bfe38: ushl v28.2d, v28.2d, v22.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[28].u64[0], (int8_t)(c)->q[22].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[28].u64[1], (int8_t)(c)->q[22].u64[1]);
    (c)->q[28] = _t; }
  /* bfe3c: ushl v26.2d, v26.2d, v19.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[19].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[19].u64[1]);
    (c)->q[26] = _t; }
  /* bfe40: ushl v8.2d, v8.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[8].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[8].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[8] = _t; }
  /* bfe44: ushl v25.2d, v25.2d, v24.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[25].u64[0], (int8_t)(c)->q[24].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[25].u64[1], (int8_t)(c)->q[24].u64[1]);
    (c)->q[25] = _t; }
  /* bfe48: ushl v9.2d, v9.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[9] = _t; }
  /* bfe4c: add v22.2d, v22.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[22].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[22].u64[1] + (c)->q[29].u64[1];
    (c)->q[22] = _t; }
  /* bfe50: orr v16.16b, v30.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* bfe54: orr v18.16b, v27.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* bfe58: orr v7.16b, v31.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* bfe5c: orr v5.16b, v8.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* bfe60: orr v17.16b, v26.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* bfe64: orr v6.16b, v28.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* bfe68: orr v4.16b, v9.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* bfe6c: orr v3.16b, v25.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* bfe70: add v23.2d, v23.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[23].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[23].u64[1] + (c)->q[29].u64[1];
    (c)->q[23] = _t; }
  /* bfe74: add v24.2d, v24.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[24].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[24].u64[1] + (c)->q[29].u64[1];
    (c)->q[24] = _t; }
  /* bfe78: add v20.2d, v20.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[29].u64[1];
    (c)->q[20] = _t; }
  /* bfe7c: add v19.2d, v19.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[19].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[19].u64[1] + (c)->q[29].u64[1];
    (c)->q[19] = _t; }
  /* bfe80: add v2.2d, v2.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[29].u64[1];
    (c)->q[2] = _t; }
  /* bfe84: add v1.2d, v1.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[1].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[1].u64[1] + (c)->q[29].u64[1];
    (c)->q[1] = _t; }
  /* bfe88: add v0.2d, v0.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[0].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[0].u64[1] + (c)->q[29].u64[1];
    (c)->q[0] = _t; }
  /* bfe8c: b.ne #0xbfdbc */
  if (ARC_COND(c, 1)) goto L_bfdbc;
  /* bfe90: orr v0.16b, v3.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[17].u8[15];
    (c)->q[0] = _t; }
  /* bfe94: orr v1.16b, v6.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[18].u8[15];
    (c)->q[1] = _t; }
  /* bfe98: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* bfe9c: orr v2.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[7].u8[15];
    (c)->q[2] = _t; }
  /* bfea0: orr v3.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[16].u8[15];
    (c)->q[3] = _t; }
  /* bfea4: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* bfea8: orr v1.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* bfeac: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* bfeb0: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* bfeb4: orr v0.8b, v0.8b, v1.8b */
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
  /* bfeb8: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* bfebc: b.eq #0xbff90 */
  if (ARC_COND(c, 0)) goto L_bff90;
  /* bfec0: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* bfec4: b.eq #0xbff6c */
  if (ARC_COND(c, 0)) goto L_bff6c;
L_bfec8:;
  /* bfec8: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* bfecc: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
  /* bfed0: dup v1.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[1] = _t; }
  /* bfed4: dup v4.2d, x17 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 17));
    _t.u64[1] = (ARC_X_R(c, 17));
    (c)->q[4] = _t; }
  /* bfed8: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfedc: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* bfee0: ldr q3, [x17, #0xc10] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 17) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 17) + INT64_C(3088)) + 8));
  /* bfee4: adrp x17, #0x52000 */
  ARC_X_W(c, 17, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfee8: ldr q5, [x17, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 17) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 17) + INT64_C(2688)) + 8));
  /* bfeec: and x17, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* bfef0: mov v0.d[0], x14 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 14));
  /* bfef4: orr v3.16b, v4.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* bfef8: bic v1.4h, #0xff, lsl #8 */
  { Arm64Vec _t = (c)->q[1];
    _t.u16[0] = (uint16_t)(_t.u16[0] & UINT64_C(255));
    _t.u16[1] = (uint16_t)(_t.u16[1] & UINT64_C(255));
    _t.u16[2] = (uint16_t)(_t.u16[2] & UINT64_C(255));
    _t.u16[3] = (uint16_t)(_t.u16[3] & UINT64_C(255));
    _t.u64[1] = 0;
    (c)->q[1] = _t; }
  /* bfefc: orr v4.16b, v4.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[5].u8[15];
    (c)->q[4] = _t; }
  /* bff00: add x1, x11, x17 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ARC_X_R(c, 17)));
L_bff04:;
  /* bff04: ldr s5, [x11, x3] */
  arc_su_w(c, 5, arc_ld32((ARC_X_R(c, 11) + ARC_X_R(c, 3))));
  /* bff08: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* bff0c: add x3, x3, #4 */
  ARC_X_W(c, 3, (ARC_X_R(c, 3) + UINT64_C(4)));
  /* bff10: cmp x17, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 3));
  /* bff14: ushll v5.8h, v5.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[5].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[5].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[5].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[5].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[5].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[5].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[5].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[5].u8[7]) << 0);
    (c)->q[5] = _t; }
  /* bff18: cmhs v5.4h, v5.4h, v1.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[5].u16[0] >= (c)->q[1].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[5].u16[1] >= (c)->q[1].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[5].u16[2] >= (c)->q[1].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[5].u16[3] >= (c)->q[1].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* bff1c: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* bff20: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* bff24: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* bff28: and v7.16b, v7.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[6].u8[15];
    (c)->q[7] = _t; }
  /* bff2c: and v5.16b, v5.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[6].u8[15];
    (c)->q[5] = _t; }
  /* bff30: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* bff34: ushl v6.2d, v7.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[6] = _t; }
  /* bff38: dup v7.2d, x21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 21));
    _t.u64[1] = (ARC_X_R(c, 21));
    (c)->q[7] = _t; }
  /* bff3c: orr v2.16b, v6.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* bff40: orr v0.16b, v5.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* bff44: add v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[7].u64[1];
    (c)->q[3] = _t; }
  /* bff48: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* bff4c: b.ne #0xbff04 */
  if (ARC_COND(c, 1)) goto L_bff04;
  /* bff50: orr v0.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[2].u8[15];
    (c)->q[0] = _t; }
  /* bff54: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* bff58: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* bff5c: orr v0.8b, v0.8b, v1.8b */
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
  /* bff60: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* bff64: b.ne #0xbff70 */
  if (ARC_COND(c, 1)) goto L_bff70;
  /* bff68: b #0xbff90 */
  goto L_bff90;
L_bff6c:;
  /* bff6c: add x1, x11, x17 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ARC_X_R(c, 17)));
L_bff70:;
  /* bff70: ldrb w3, [x1], #1 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(1));
    ARC_W_W(c, 3, arc_ld8(_a));
  }
  /* bff74: cmp w3, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 3), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* bff78: cset w3, hs */
  ARC_W_W(c, 3, (ARC_COND(c, 2) ? 1 : 0));
  /* bff7c: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* bff80: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* bff84: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* bff88: orr x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) | ARC_X_R(c, 14)));
  /* bff8c: b.ne #0xbff70 */
  if (ARC_COND(c, 1)) goto L_bff70;
L_bff90:;
  /* bff90: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* bff94: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* bff98: cbz w16, #0xc0224 */
  if ((ARC_W_R(c, 16)) == 0) goto L_c0224;
L_bff9c:;
  /* bff9c: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* bffa0: b.lt #0xc0224 */
  if (ARC_COND(c, 11)) goto L_c0224;
  /* bffa4: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* bffa8: b.hs #0xbffbc */
  if (ARC_COND(c, 2)) goto L_bffbc;
  /* bffac: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* bffb0: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* bffb4: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* bffb8: b #0xc0204 */
  goto L_c0204;
L_bffbc:;
  /* bffbc: cmp x15, #0x10 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(16));
  /* bffc0: b.hs #0xbffd0 */
  if (ARC_COND(c, 2)) goto L_bffd0;
  /* bffc4: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* bffc8: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* bffcc: b #0xc0150 */
  goto L_c0150;
L_bffd0:;
  /* bffd0: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* bffd4: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* bffd8: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* bffdc: ldr q0, [x13, #0xa70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 13) + INT64_C(2672))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2672)) + 8));
  /* bffe0: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* bffe4: movi v6.2d, #0000000000000000 */
  arc_v_clear(c, 6);
  /* bffe8: ldr q1, [x13, #0xc60] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 13) + INT64_C(3168))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3168)) + 8));
  /* bffec: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfff0: movi v5.2d, #0000000000000000 */
  arc_v_clear(c, 5);
  /* bfff4: ldr q2, [x13, #0xa10] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 13) + INT64_C(2576))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2576)) + 8));
  /* bfff8: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* bfffc: movi v17.2d, #0000000000000000 */
  arc_v_clear(c, 17);
  /* c0000: ldr q20, [x13, #0xc00] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 13) + INT64_C(3072))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3072)) + 8));
  /* c0004: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0008: movi v7.2d, #0000000000000000 */
  arc_v_clear(c, 7);
  /* c000c: ldr q21, [x13, #0xcc0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 13) + INT64_C(3264))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3264)) + 8));
  /* c0010: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0014: movi v18.2d, #0000000000000000 */
  arc_v_clear(c, 18);
  /* c0018: movi v16.2d, #0000000000000000 */
  arc_v_clear(c, 16);
  /* c001c: ldr q22, [x13, #0xc70] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 13) + INT64_C(3184))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3184)) + 8));
  /* c0020: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0024: dup v19.16b, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 8));
    _t.u8[1] = (ARC_W_R(c, 8));
    _t.u8[2] = (ARC_W_R(c, 8));
    _t.u8[3] = (ARC_W_R(c, 8));
    _t.u8[4] = (ARC_W_R(c, 8));
    _t.u8[5] = (ARC_W_R(c, 8));
    _t.u8[6] = (ARC_W_R(c, 8));
    _t.u8[7] = (ARC_W_R(c, 8));
    _t.u8[8] = (ARC_W_R(c, 8));
    _t.u8[9] = (ARC_W_R(c, 8));
    _t.u8[10] = (ARC_W_R(c, 8));
    _t.u8[11] = (ARC_W_R(c, 8));
    _t.u8[12] = (ARC_W_R(c, 8));
    _t.u8[13] = (ARC_W_R(c, 8));
    _t.u8[14] = (ARC_W_R(c, 8));
    _t.u8[15] = (ARC_W_R(c, 8));
    (c)->q[19] = _t; }
  /* c0028: ldr q23, [x13, #0xc10] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 13) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3088)) + 8));
  /* c002c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0030: and x16, x15, #0x7ffffffffffffff0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775792)));
  /* c0034: ldr q24, [x13, #0xa80] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 13) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2688)) + 8));
  /* c0038: sub x13, x12, #0xf */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(15)));
  /* c003c: mov x0, x16 */
  ARC_X_W(c, 0, ARC_X_R(c, 16));
L_c0040:;
  /* c0040: ldr q25, [x13], #0xfffffffffffffff0 */
  arc_q_w(c, 25, arc_ld64(ARC_X_R(c, 13)), arc_ld64(ARC_X_R(c, 13) + 8));
  ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(-16));
  /* c0044: dup v29.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[29] = _t; }
  /* c0048: subs x0, x0, #0x10 */
  ARC_X_W(c, 0, arc_sub64(c, ARC_X_R(c, 0), UINT64_C(16)));
  /* c004c: rev64 v25.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[7];
    _t.u8[1] = (c)->q[25].u8[6];
    _t.u8[2] = (c)->q[25].u8[5];
    _t.u8[3] = (c)->q[25].u8[4];
    _t.u8[4] = (c)->q[25].u8[3];
    _t.u8[5] = (c)->q[25].u8[2];
    _t.u8[6] = (c)->q[25].u8[1];
    _t.u8[7] = (c)->q[25].u8[0];
    _t.u8[8] = (c)->q[25].u8[15];
    _t.u8[9] = (c)->q[25].u8[14];
    _t.u8[10] = (c)->q[25].u8[13];
    _t.u8[11] = (c)->q[25].u8[12];
    _t.u8[12] = (c)->q[25].u8[11];
    _t.u8[13] = (c)->q[25].u8[10];
    _t.u8[14] = (c)->q[25].u8[9];
    _t.u8[15] = (c)->q[25].u8[8];
    (c)->q[25] = _t; }
  /* c0050: ext v25.16b, v25.16b, v25.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[8];
    _t.u8[1] = (c)->q[25].u8[9];
    _t.u8[2] = (c)->q[25].u8[10];
    _t.u8[3] = (c)->q[25].u8[11];
    _t.u8[4] = (c)->q[25].u8[12];
    _t.u8[5] = (c)->q[25].u8[13];
    _t.u8[6] = (c)->q[25].u8[14];
    _t.u8[7] = (c)->q[25].u8[15];
    _t.u8[8] = (c)->q[25].u8[0];
    _t.u8[9] = (c)->q[25].u8[1];
    _t.u8[10] = (c)->q[25].u8[2];
    _t.u8[11] = (c)->q[25].u8[3];
    _t.u8[12] = (c)->q[25].u8[4];
    _t.u8[13] = (c)->q[25].u8[5];
    _t.u8[14] = (c)->q[25].u8[6];
    _t.u8[15] = (c)->q[25].u8[7];
    (c)->q[25] = _t; }
  /* c0054: cmhi v25.16b, v19.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[19].u8[0] > (c)->q[25].u8[0]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[1] = ((c)->q[19].u8[1] > (c)->q[25].u8[1]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[2] = ((c)->q[19].u8[2] > (c)->q[25].u8[2]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[3] = ((c)->q[19].u8[3] > (c)->q[25].u8[3]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[4] = ((c)->q[19].u8[4] > (c)->q[25].u8[4]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[5] = ((c)->q[19].u8[5] > (c)->q[25].u8[5]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[6] = ((c)->q[19].u8[6] > (c)->q[25].u8[6]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[7] = ((c)->q[19].u8[7] > (c)->q[25].u8[7]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[8] = ((c)->q[19].u8[8] > (c)->q[25].u8[8]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[9] = ((c)->q[19].u8[9] > (c)->q[25].u8[9]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[10] = ((c)->q[19].u8[10] > (c)->q[25].u8[10]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[11] = ((c)->q[19].u8[11] > (c)->q[25].u8[11]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[12] = ((c)->q[19].u8[12] > (c)->q[25].u8[12]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[13] = ((c)->q[19].u8[13] > (c)->q[25].u8[13]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[14] = ((c)->q[19].u8[14] > (c)->q[25].u8[14]) ? (uint8_t)~(uint8_t)0 : 0;
    _t.u8[15] = ((c)->q[19].u8[15] > (c)->q[25].u8[15]) ? (uint8_t)~(uint8_t)0 : 0;
    (c)->q[25] = _t; }
  /* c0058: ushll v26.8h, v25.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[7]) << 0);
    (c)->q[26] = _t; }
  /* c005c: ushll2 v25.8h, v25.16b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[25].u8[8]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[25].u8[9]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[25].u8[10]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[25].u8[11]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[25].u8[12]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[25].u8[13]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[25].u8[14]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[25].u8[15]) << 0);
    (c)->q[25] = _t; }
  /* c0060: ushll2 v27.4s, v26.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[7]) << 0);
    (c)->q[27] = _t; }
  /* c0064: ushll v26.4s, v26.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[26].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[26].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[26].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[26].u16[3]) << 0);
    (c)->q[26] = _t; }
  /* c0068: ushll2 v28.4s, v25.8h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[4]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[5]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[6]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[7]) << 0);
    (c)->q[28] = _t; }
  /* c006c: ushll v25.4s, v25.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[25].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[25].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[25].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[25].u16[3]) << 0);
    (c)->q[25] = _t; }
  /* c0070: ushll v30.2d, v27.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[1]) << 0);
    (c)->q[30] = _t; }
  /* c0074: ushll2 v31.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[3]) << 0);
    (c)->q[31] = _t; }
  /* c0078: ushll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[26].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[26].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* c007c: ushll2 v8.2d, v28.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[3]) << 0);
    (c)->q[8] = _t; }
  /* c0080: ushll v28.2d, v28.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[28].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[28].u32[1]) << 0);
    (c)->q[28] = _t; }
  /* c0084: ushll v9.2d, v25.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[1]) << 0);
    (c)->q[9] = _t; }
  /* c0088: ushll2 v25.2d, v25.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[25].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[25].u32[3]) << 0);
    (c)->q[25] = _t; }
  /* c008c: ushll2 v27.2d, v27.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[27].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[27].u32[3]) << 0);
    (c)->q[27] = _t; }
  /* c0090: and v30.16b, v30.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] & (c)->q[29].u8[15];
    (c)->q[30] = _t; }
  /* c0094: and v31.16b, v31.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] & (c)->q[29].u8[15];
    (c)->q[31] = _t; }
  /* c0098: and v26.16b, v26.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[29].u8[15];
    (c)->q[26] = _t; }
  /* c009c: and v8.16b, v8.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] & (c)->q[29].u8[15];
    (c)->q[8] = _t; }
  /* c00a0: and v28.16b, v28.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[29].u8[15];
    (c)->q[28] = _t; }
  /* c00a4: and v9.16b, v9.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] & (c)->q[29].u8[15];
    (c)->q[9] = _t; }
  /* c00a8: and v25.16b, v25.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[29].u8[15];
    (c)->q[25] = _t; }
  /* c00ac: and v27.16b, v27.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[29].u8[15];
    (c)->q[27] = _t; }
  /* c00b0: dup v29.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[29] = _t; }
  /* c00b4: ushl v26.2d, v26.2d, v24.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[26].u64[0], (int8_t)(c)->q[24].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[26].u64[1], (int8_t)(c)->q[24].u64[1]);
    (c)->q[26] = _t; }
  /* c00b8: ushl v31.2d, v31.2d, v23.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[31].u64[0], (int8_t)(c)->q[23].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[31].u64[1], (int8_t)(c)->q[23].u64[1]);
    (c)->q[31] = _t; }
  /* c00bc: ushl v30.2d, v30.2d, v22.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[30].u64[0], (int8_t)(c)->q[22].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[30].u64[1], (int8_t)(c)->q[22].u64[1]);
    (c)->q[30] = _t; }
  /* c00c0: ushl v9.2d, v9.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[9].u64[0], (int8_t)(c)->q[20].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[9].u64[1], (int8_t)(c)->q[20].u64[1]);
    (c)->q[9] = _t; }
  /* c00c4: ushl v28.2d, v28.2d, v1.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[28].u64[0], (int8_t)(c)->q[1].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[28].u64[1], (int8_t)(c)->q[1].u64[1]);
    (c)->q[28] = _t; }
  /* c00c8: ushl v8.2d, v8.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[8].u64[0], (int8_t)(c)->q[0].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[8].u64[1], (int8_t)(c)->q[0].u64[1]);
    (c)->q[8] = _t; }
  /* c00cc: ushl v27.2d, v27.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[27].u64[0], (int8_t)(c)->q[21].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[27].u64[1], (int8_t)(c)->q[21].u64[1]);
    (c)->q[27] = _t; }
  /* c00d0: ushl v25.2d, v25.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[25].u64[0], (int8_t)(c)->q[2].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[25].u64[1], (int8_t)(c)->q[2].u64[1]);
    (c)->q[25] = _t; }
  /* c00d4: add v22.2d, v22.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[22].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[22].u64[1] + (c)->q[29].u64[1];
    (c)->q[22] = _t; }
  /* c00d8: add v23.2d, v23.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[23].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[23].u64[1] + (c)->q[29].u64[1];
    (c)->q[23] = _t; }
  /* c00dc: add v24.2d, v24.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[24].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[24].u64[1] + (c)->q[29].u64[1];
    (c)->q[24] = _t; }
  /* c00e0: add v21.2d, v21.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[21].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[21].u64[1] + (c)->q[29].u64[1];
    (c)->q[21] = _t; }
  /* c00e4: add v20.2d, v20.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[20].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[20].u64[1] + (c)->q[29].u64[1];
    (c)->q[20] = _t; }
  /* c00e8: orr v16.16b, v8.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[8].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[8].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[8].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[8].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[8].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[8].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[8].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[8].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[8].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[8].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[8].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[8].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[8].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[8].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[8].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c00ec: orr v18.16b, v28.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* c00f0: orr v7.16b, v25.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* c00f4: orr v5.16b, v27.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c00f8: orr v17.16b, v9.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[9].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[9].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[9].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[9].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[9].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[9].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[9].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[9].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[9].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[9].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[9].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[9].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[9].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[9].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[9].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* c00fc: orr v6.16b, v30.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[30].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[30].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[30].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[30].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[30].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[30].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[30].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[30].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[30].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[30].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[30].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[30].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[30].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[30].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[30].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c0100: orr v4.16b, v31.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[31].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[31].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[31].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[31].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[31].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[31].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[31].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[31].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[31].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[31].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[31].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[31].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[31].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[31].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[31].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c0104: orr v3.16b, v26.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c0108: add v2.2d, v2.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[2].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[2].u64[1] + (c)->q[29].u64[1];
    (c)->q[2] = _t; }
  /* c010c: add v1.2d, v1.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[1].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[1].u64[1] + (c)->q[29].u64[1];
    (c)->q[1] = _t; }
  /* c0110: add v0.2d, v0.2d, v29.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[0].u64[0] + (c)->q[29].u64[0];
    _t.u64[1] = (c)->q[0].u64[1] + (c)->q[29].u64[1];
    (c)->q[0] = _t; }
  /* c0114: b.ne #0xc0040 */
  if (ARC_COND(c, 1)) goto L_c0040;
  /* c0118: orr v0.16b, v3.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[17].u8[15];
    (c)->q[0] = _t; }
  /* c011c: orr v1.16b, v6.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[18].u8[15];
    (c)->q[1] = _t; }
  /* c0120: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c0124: orr v2.16b, v4.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[7].u8[15];
    (c)->q[2] = _t; }
  /* c0128: orr v3.16b, v5.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[16].u8[15];
    (c)->q[3] = _t; }
  /* c012c: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c0130: orr v1.16b, v2.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* c0134: orr v0.16b, v0.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[1].u8[15];
    (c)->q[0] = _t; }
  /* c0138: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c013c: orr v0.8b, v0.8b, v1.8b */
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
  /* c0140: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c0144: b.eq #0xc0224 */
  if (ARC_COND(c, 0)) goto L_c0224;
  /* c0148: tst x15, #0xc */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 15) & UINT64_C(12)));
  /* c014c: b.eq #0xc0200 */
  if (ARC_COND(c, 0)) goto L_c0200;
L_c0150:;
  /* c0150: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c0154: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
  /* c0158: dup v1.4h, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (ARC_W_R(c, 8));
    _t.u16[1] = (ARC_W_R(c, 8));
    _t.u16[2] = (ARC_W_R(c, 8));
    _t.u16[3] = (ARC_W_R(c, 8));
    (c)->q[1] = _t; }
  /* c015c: dup v4.2d, x16 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 16));
    _t.u64[1] = (ARC_X_R(c, 16));
    (c)->q[4] = _t; }
  /* c0160: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0164: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c0168: ldr q3, [x16, #0xc10] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 16) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 16) + INT64_C(3088)) + 8));
  /* c016c: adrp x16, #0x52000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(335872)));
  /* c0170: sub x3, x12, x1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 12) - ARC_X_R(c, 1)));
  /* c0174: ldr q5, [x16, #0xa80] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 16) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 16) + INT64_C(2688)) + 8));
  /* c0178: and x16, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* c017c: mov v0.d[0], x13 */
  (c)->q[0].u64[0] = (ARC_X_R(c, 13));
  /* c0180: orr v3.16b, v4.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c0184: bic v1.4h, #0xff, lsl #8 */
  { Arm64Vec _t = (c)->q[1];
    _t.u16[0] = (uint16_t)(_t.u16[0] & UINT64_C(255));
    _t.u16[1] = (uint16_t)(_t.u16[1] & UINT64_C(255));
    _t.u16[2] = (uint16_t)(_t.u16[2] & UINT64_C(255));
    _t.u16[3] = (uint16_t)(_t.u16[3] & UINT64_C(255));
    _t.u64[1] = 0;
    (c)->q[1] = _t; }
  /* c0188: orr v4.16b, v4.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[5].u8[15];
    (c)->q[4] = _t; }
  /* c018c: sub x0, x12, x16 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
  /* c0190: sub x13, x1, x16 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) - ARC_X_R(c, 16)));
  /* c0194: sub x1, x3, #3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 3) - UINT64_C(3)));
L_c0198:;
  /* c0198: ldr s5, [x1], #0xfffffffffffffffc */
  arc_su_w(c, 5, arc_ld32(ARC_X_R(c, 1)));
  ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(-4));
  /* c019c: dup v6.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[6] = _t; }
  /* c01a0: adds x13, x13, #4 */
  ARC_X_W(c, 13, arc_add64(c, ARC_X_R(c, 13), UINT64_C(4), 0));
  /* c01a4: ushll v5.8h, v5.8b, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (uint16_t)((uint16_t)((c)->q[5].u8[0]) << 0);
    _t.u16[1] = (uint16_t)((uint16_t)((c)->q[5].u8[1]) << 0);
    _t.u16[2] = (uint16_t)((uint16_t)((c)->q[5].u8[2]) << 0);
    _t.u16[3] = (uint16_t)((uint16_t)((c)->q[5].u8[3]) << 0);
    _t.u16[4] = (uint16_t)((uint16_t)((c)->q[5].u8[4]) << 0);
    _t.u16[5] = (uint16_t)((uint16_t)((c)->q[5].u8[5]) << 0);
    _t.u16[6] = (uint16_t)((uint16_t)((c)->q[5].u8[6]) << 0);
    _t.u16[7] = (uint16_t)((uint16_t)((c)->q[5].u8[7]) << 0);
    (c)->q[5] = _t; }
  /* c01a8: rev64 v5.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[5].u16[3];
    _t.u16[1] = (c)->q[5].u16[2];
    _t.u16[2] = (c)->q[5].u16[1];
    _t.u16[3] = (c)->q[5].u16[0];
    (c)->q[5] = _t; }
  /* c01ac: cmhi v5.4h, v1.4h, v5.4h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = ((c)->q[1].u16[0] > (c)->q[5].u16[0]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[1] = ((c)->q[1].u16[1] > (c)->q[5].u16[1]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[2] = ((c)->q[1].u16[2] > (c)->q[5].u16[2]) ? (uint16_t)~(uint16_t)0 : 0;
    _t.u16[3] = ((c)->q[1].u16[3] > (c)->q[5].u16[3]) ? (uint16_t)~(uint16_t)0 : 0;
    (c)->q[5] = _t; }
  /* c01b0: ushll v5.4s, v5.4h, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (uint32_t)((uint32_t)((c)->q[5].u16[0]) << 0);
    _t.u32[1] = (uint32_t)((uint32_t)((c)->q[5].u16[1]) << 0);
    _t.u32[2] = (uint32_t)((uint32_t)((c)->q[5].u16[2]) << 0);
    _t.u32[3] = (uint32_t)((uint32_t)((c)->q[5].u16[3]) << 0);
    (c)->q[5] = _t; }
  /* c01b4: ushll2 v7.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c01b8: ushll v5.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[5] = _t; }
  /* c01bc: and v7.16b, v7.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[6].u8[15];
    (c)->q[7] = _t; }
  /* c01c0: and v5.16b, v5.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[6].u8[15];
    (c)->q[5] = _t; }
  /* c01c4: ushl v6.2d, v7.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[6] = _t; }
  /* c01c8: dup v7.2d, x21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 21));
    _t.u64[1] = (ARC_X_R(c, 21));
    (c)->q[7] = _t; }
  /* c01cc: ushl v5.2d, v5.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[4].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[4].u64[1]);
    (c)->q[5] = _t; }
  /* c01d0: orr v2.16b, v6.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c01d4: orr v0.16b, v5.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c01d8: add v3.2d, v3.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[7].u64[1];
    (c)->q[3] = _t; }
  /* c01dc: add v4.2d, v4.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[4].u64[0] + (c)->q[7].u64[0];
    _t.u64[1] = (c)->q[4].u64[1] + (c)->q[7].u64[1];
    (c)->q[4] = _t; }
  /* c01e0: b.ne #0xc0198 */
  if (ARC_COND(c, 1)) goto L_c0198;
  /* c01e4: orr v0.16b, v0.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[0].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[0].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[0].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[0].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[0].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[0].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[0].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[0].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[0].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[0].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[0].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[0].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[0].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[0].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[0].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[0].u8[15] | (c)->q[2].u8[15];
    (c)->q[0] = _t; }
  /* c01e8: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c01ec: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c01f0: orr v0.8b, v0.8b, v1.8b */
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
  /* c01f4: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c01f8: b.ne #0xc0204 */
  if (ARC_COND(c, 1)) goto L_c0204;
  /* c01fc: b #0xc0224 */
  goto L_c0224;
L_c0200:;
  /* c0200: sub x0, x12, x16 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
L_c0204:;
  /* c0204: ldrb w1, [x0], #0xffffffffffffffff */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-1));
    ARC_W_W(c, 1, arc_ld8(_a));
  }
  /* c0208: cmp w1, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 1), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c020c: cset w1, lo */
  ARC_W_W(c, 1, (ARC_COND(c, 3) ? 1 : 0));
  /* c0210: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* c0214: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* c0218: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c021c: orr x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) | ARC_X_R(c, 13)));
  /* c0220: b.ne #0xc0204 */
  if (ARC_COND(c, 1)) goto L_c0204;
L_c0224:;
  /* c0224: cbz x14, #0xc0268 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c0268;
  /* c0228: cbz x13, #0xc0268 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c0268;
L_c022c:;
  /* c022c: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* c0230: rbit x0, x14 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 14)));
  /* c0234: sub x1, x13, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c0238: sub x4, x14, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c023c: and x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) & ARC_X_R(c, 13)));
  /* c0240: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c0244: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* c0248: and x14, x4, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 4) & ARC_X_R(c, 14)));
  /* c024c: sub x16, x12, x16 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ARC_X_R(c, 16)));
  /* c0250: ldrb w5, [x11, x0] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 0))));
  /* c0254: ldrb w3, [x16] */
  ARC_W_W(c, 3, arc_ld8(ARC_X_R(c, 16)));
  /* c0258: strb w3, [x11, x0] */
  arc_st8((ARC_X_R(c, 11) + ARC_X_R(c, 0)), ARC_W_R(c, 3));
  /* c025c: strb w5, [x16] */
  arc_st8(ARC_X_R(c, 16), ARC_W_R(c, 5));
  /* c0260: cbz x13, #0xc0268 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c0268;
  /* c0264: cbnz x14, #0xc022c */
  if ((ARC_X_R(c, 14)) != 0) goto L_c022c;
L_c0268:;
  /* c0268: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c026c: csel x16, x17, xzr, eq */
  ARC_X_W(c, 16, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* c0270: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c0274: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* c0278: add x23, x11, x16 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ARC_X_R(c, 16)));
  /* c027c: sub x11, x12, x15 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 15)));
  /* c0280: cbnz x14, #0xc029c */
  if ((ARC_X_R(c, 14)) != 0) goto L_c029c;
  /* c0284: cbnz x13, #0xc02d4 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c02d4;
  /* c0288: b #0xc0300 */
  goto L_c0300;
L_c028c:;
  /* c028c: lsl x12, x26, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 12)) & 63)));
  /* c0290: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* c0294: bic x14, x14, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 12))));
  /* c0298: cbz x14, #0xc02fc */
  if ((ARC_X_R(c, 14)) == 0) goto L_c02fc;
L_c029c:;
  /* c029c: clz x12, x14 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 14)));
  /* c02a0: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* c02a4: add x13, x23, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 23) + ARC_X_R(c, 12)));
  /* c02a8: cmp x11, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 13));
  /* c02ac: b.eq #0xc028c */
  if (ARC_COND(c, 0)) goto L_c028c;
  /* c02b0: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c02b4: ldrb w16, [x13] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 13)));
  /* c02b8: strb w15, [x13] */
  arc_st8(ARC_X_R(c, 13), ARC_W_R(c, 15));
  /* c02bc: strb w16, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 16));
  /* c02c0: b #0xc028c */
  goto L_c028c;
L_c02c4:;
  /* c02c4: lsl x12, x26, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 26)) << ((ARC_X_R(c, 12)) & 63)));
  /* c02c8: add x23, x23, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* c02cc: bic x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 12))));
  /* c02d0: cbz x13, #0xc0300 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c0300;
L_c02d4:;
  /* c02d4: clz x12, x13 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 13)));
  /* c02d8: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* c02dc: sub x14, x11, x12 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - ARC_X_R(c, 12)));
  /* c02e0: cmp x23, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 14));
  /* c02e4: b.eq #0xc02c4 */
  if (ARC_COND(c, 0)) goto L_c02c4;
  /* c02e8: ldrb w15, [x23] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 23)));
  /* c02ec: ldrb w16, [x14] */
  ARC_W_W(c, 16, arc_ld8(ARC_X_R(c, 14)));
  /* c02f0: strb w15, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c02f4: strb w16, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 16));
  /* c02f8: b #0xc02c4 */
  goto L_c02c4;
L_c02fc:;
  /* c02fc: add x23, x11, #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + UINT64_C(1)));
L_c0300:;
  /* c0300: sub x24, x23, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* c0304: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* c0308: b.eq #0xc0314 */
  if (ARC_COND(c, 0)) goto L_c0314;
  /* c030c: ldrb w11, [x24] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 24)));
  /* c0310: strb w11, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 11));
L_c0314:;
  /* c0314: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c0318: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* c031c: b.lo #0xc0378 */
  if (ARC_COND(c, 3)) goto L_c0378;
  /* c0320: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c0324: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c0328: mov x21, x27 */
  ARC_X_W(c, 21, ARC_X_R(c, 27));
  /* c032c: mov x28, x6 */
  ARC_X_W(c, 28, ARC_X_R(c, 6));
  /* c0330: mov x27, x2 */
  ARC_X_W(c, 27, ARC_X_R(c, 2));
  /* c0334: bl #0xcfd88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(787256));
  fn1_cfd88(c);
  /* c0338: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* c033c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c0340: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c0344: bl #0xcfd88 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(787272));
  fn1_cfd88(c);
  /* c0348: tbnz w0, #0, #0xc0474 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_c0474;
  /* c034c: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0350: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c0354: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0358: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c035c: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c0360: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c0364: mov x27, x21 */
  ARC_X_W(c, 27, ARC_X_R(c, 21));
  /* c0368: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c036c: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c0370: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c0374: tbnz w25, #0, #0xbf4c4 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_bf4c4;
L_c0378:;
  /* c0378: ldr w8, [sp, #0x5c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(92))));
  /* c037c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c0380: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c0384: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* c0388: mov x24, x6 */
  ARC_X_W(c, 24, ARC_X_R(c, 6));
  /* c038c: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c0390: bl #0xbf30c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(787348));
  fn1_bf30c(c);
  /* c0394: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0398: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c039c: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c03a0: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c03a4: ldr q11, [sp, #0x40] */
  arc_q_w(c, 11, arc_ld64(((c)->sp + INT64_C(64))), arc_ld64(((c)->sp + INT64_C(64)) + 8));
  /* c03a8: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c03ac: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c03b0: mov x6, x24 */
  ARC_X_W(c, 6, ARC_X_R(c, 24));
  /* c03b4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* c03b8: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c03bc: b #0xbf4c4 */
  goto L_bf4c4;
L_c03c0:;
  /* c03c0: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c03c4: cmp w9, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c03c8: b.ls #0xc03e0 */
  if (ARC_COND(c, 9)) goto L_c03e0;
  /* c03cc: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c03d0:;
  /* c03d0: ldrb w9, [x23, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(1));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* c03d4: cmp w9, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 9), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c03d8: b.ls #0xc03d0 */
  if (ARC_COND(c, 9)) goto L_c03d0;
  /* c03dc: b #0xc0400 */
  goto L_c0400;
L_c03e0:;
  /* c03e0: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
L_c03e4:;
  /* c03e4: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* c03e8: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c03ec: b.hs #0xc0400 */
  if (ARC_COND(c, 2)) goto L_c0400;
  /* c03f0: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* c03f4: ldrb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* c03f8: cmp w10, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c03fc: b.ls #0xc03e4 */
  if (ARC_COND(c, 9)) goto L_c03e4;
L_c0400:;
  /* c0400: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* c0404: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* c0408: b.hs #0xc041c */
  if (ARC_COND(c, 2)) goto L_c041c;
  /* c040c: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_c0410:;
  /* c0410: ldrb w10, [x9, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* c0414: cmp w10, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c0418: b.hi #0xc0410 */
  if (ARC_COND(c, 8)) goto L_c0410;
L_c041c:;
  /* c041c: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c0420: b.hs #0xc0454 */
  if (ARC_COND(c, 2)) goto L_c0454;
  /* c0424: ldrb w10, [x23] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 23)));
  /* c0428: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
L_c042c:;
  /* c042c: strb w11, [x23] */
  arc_st8(ARC_X_R(c, 23), ARC_W_R(c, 11));
  /* c0430: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c0434:;
  /* c0434: ldrb w10, [x23, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(1));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(1));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* c0438: cmp w10, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c043c: b.ls #0xc0434 */
  if (ARC_COND(c, 9)) goto L_c0434;
L_c0440:;
  /* c0440: ldrb w11, [x9, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-1));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-1));
    ARC_W_W(c, 11, arc_ld8(_a));
  }
  /* c0444: cmp w11, w8, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 11), ((uint64_t)(uint8_t)(ARC_W_R(c, 8))));
  /* c0448: b.hi #0xc0440 */
  if (ARC_COND(c, 8)) goto L_c0440;
  /* c044c: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c0450: b.lo #0xc042c */
  if (ARC_COND(c, 3)) goto L_c042c;
L_c0454:;
  /* c0454: sub x9, x23, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* c0458: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* c045c: b.eq #0xc0468 */
  if (ARC_COND(c, 0)) goto L_c0468;
  /* c0460: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* c0464: strb w10, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 10));
L_c0468:;
  /* c0468: str wzr, [sp, #0x5c] */
  arc_st32(((c)->sp + INT64_C(92)), ARC_W_R(c, 31));
  /* c046c: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c0470: b #0xbf4c4 */
  goto L_bf4c4;
L_c0474:;
  /* c0474: ldp q12, q11, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_q_w(c, 12, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 11, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0478: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* c047c: ldp q14, q13, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 14, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 13, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c0480: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* c0484: ldr q15, [sp] */
  arc_q_w(c, 15, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* c0488: mov x6, x28 */
  ARC_X_W(c, 6, ARC_X_R(c, 28));
  /* c048c: mov x4, #-0x40 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551552));
  /* c0490: mov x27, x21 */
  ARC_X_W(c, 27, ARC_X_R(c, 21));
  /* c0494: mov w5, #1 */
  ARC_W_W(c, 5, UINT64_C(1));
  /* c0498: mov w21, #4 */
  ARC_W_W(c, 21, UINT64_C(4));
  /* c049c: mov w28, #0x10 */
  ARC_W_W(c, 28, UINT64_C(16));
  /* c04a0: tbz w25, #0, #0xbf4c0 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_bf4c0;
  /* c04a4: b #0xc0664 */
  goto L_c0664;
L_c04a8:;
  /* c04a8: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* c04ac: ldrb w9, [x19, #1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c04b0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c04b4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c04b8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c04bc: strb w10, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 10));
  /* c04c0: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c04c4: ldrb w8, [x19, #3] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(3))));
  /* c04c8: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c04cc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c04d0: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c04d4: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c04d8: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c04dc: strb w8, [x19, #3] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(3)), ARC_W_R(c, 8));
  /* c04e0: ldrb w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c04e4: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c04e8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c04ec: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c04f0: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c04f4: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c04f8: ldrb w10, [x19, #3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(3))));
  /* c04fc: ldrb w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c0500: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0504: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c0508: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c050c: strb w9, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
  /* c0510: strb w8, [x19, #3] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(3)), ARC_W_R(c, 8));
  /* c0514: ldrb w8, [x19, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c0518: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c051c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c0520: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c0524: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c0528: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c052c: ldrb w10, [x19, #3] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(3))));
  /* c0530: ldrb w11, [x19] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 19)));
  /* c0534: ldrb w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c0538: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* c053c: csel w12, w10, w11, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c0540: csel w10, w10, w11, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c0544: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c0548: csel w11, w11, w9, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* c054c: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c0550: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c0554: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c0558: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c055c: strb w11, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 11));
  /* c0560: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* c0564: strb w10, [x19, #3] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(3)), ARC_W_R(c, 10));
  /* c0568: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c056c: csel w9, w12, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* c0570: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
  /* c0574: strb w9, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
  /* c0578: b #0xc0664 */
  goto L_c0664;
L_c057c:;
  /* c057c: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c0580: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* c0584: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c0588: b.hs #0xc0664 */
  if (ARC_COND(c, 2)) goto L_c0664;
  /* c058c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c0590: sturb w9, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 9));
  /* c0594: b #0xc0664 */
  goto L_c0664;
L_c0598:;
  /* c0598: ldrb w8, [x19, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c059c: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c05a0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c05a4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c05a8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c05ac: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c05b0: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
  /* c05b4: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* c05b8: ldurb w8, [x20, #-1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c05bc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c05c0: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c05c4: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c05c8: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c05cc: ldrb w10, [x19, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c05d0: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* c05d4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c05d8: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c05dc: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c05e0: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c05e4: b #0xc0660 */
  goto L_c0660;
L_c05e8:;
  /* c05e8: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* c05ec: ldrb w9, [x19, #2] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c05f0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c05f4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c05f8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c05fc: strb w10, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 10));
  /* c0600: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c0604: ldrb w8, [x19, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c0608: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c060c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c0610: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c0614: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c0618: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c061c: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c0620: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c0624: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c0628: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c062c: strb w9, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 9));
  /* c0630: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c0634: ldrb w8, [x19, #2] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(2))));
  /* c0638: ldurb w9, [x20, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(-1))));
  /* c063c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c0640: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c0644: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c0648: sturb w10, [x20, #-1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(-1)), ARC_W_R(c, 10));
  /* c064c: ldrb w10, [x19, #1] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c0650: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c0654: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c0658: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c065c: strb w9, [x19, #2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(2)), ARC_W_R(c, 9));
L_c0660:;
  /* c0660: strb w8, [x19, #1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(1)), ARC_W_R(c, 8));
L_c0664:;
  /* c0664: add sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(496)));
  /* c0668: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c066c: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c0670: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c0674: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c0678: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c067c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c0680: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* c0684: ldp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* c0688: ldp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 13, arc_ld64(_pa));
    arc_du_w(c, 12, arc_ld64((_pa + 8)));
  }
  /* c068c: ldp d15, d14, [sp], #0xa0 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(160);
    arc_du_w(c, 15, arc_ld64(_pa));
    arc_du_w(c, 14, arc_ld64((_pa + 8)));
  }
  /* c0690: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* c0694: ret  */
  return;
L_c0698:;
  /* c0698: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c069c: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* c06a0: ldr w10, [sp, #0x5c] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(92))));
  /* c06a4: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* c06a8: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* c06ac: tbz w10, #0, #0xc08e8 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_c08e8;
  /* c06b0: tbnz w8, #0, #0xc0664 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_c0664;
  /* c06b4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* c06b8: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* c06bc: b #0xc06d8 */
  goto L_c06d8;
L_c06c0:;
  /* c06c0: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c06c4:;
  /* c06c4: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
L_c06c8:;
  /* c06c8: add x9, x10, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* c06cc: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* c06d0: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c06d4: b.eq #0xc0664 */
  if (ARC_COND(c, 0)) goto L_c0664;
L_c06d8:;
  /* c06d8: ldrb w11, [x10, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + INT64_C(1))));
  /* c06dc: ldrb w12, [x10] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 10)));
  /* c06e0: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c06e4: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c06e8: b.hs #0xc06c8 */
  if (ARC_COND(c, 2)) goto L_c06c8;
  /* c06ec: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_c06f0:;
  /* c06f0: subs x9, x13, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(1)));
  /* c06f4: strb w12, [x19, x13] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_W_R(c, 12));
  /* c06f8: b.eq #0xc06c0 */
  if (ARC_COND(c, 0)) goto L_c06c0;
  /* c06fc: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* c0700: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* c0704: ldurb w12, [x12, #-2] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 12) + INT64_C(-2))));
  /* c0708: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c070c: b.lo #0xc06f0 */
  if (ARC_COND(c, 3)) goto L_c06f0;
  /* c0710: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* c0714: b #0xc06c4 */
  goto L_c06c4;
L_c0718:;
  /* c0718: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c071c: b.eq #0xc0664 */
  if (ARC_COND(c, 0)) goto L_c0664;
  /* c0720: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c0724: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c0728: b #0xc073c */
  goto L_c073c;
L_c072c:;
  /* c072c: strb w13, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 13));
L_c0730:;
  /* c0730: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* c0734: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c0738: b.le #0xc080c */
  if (ARC_COND(c, 13)) goto L_c080c;
L_c073c:;
  /* c073c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c0740: b.lo #0xc0730 */
  if (ARC_COND(c, 3)) goto L_c0730;
  /* c0744: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* c0748: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* c074c: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* c0750: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c0754: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* c0758: add x11, x19, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ARC_X_R(c, 12)));
  /* c075c: b.ge #0xc0780 */
  if (ARC_COND(c, 10)) goto L_c0780;
  /* c0760: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c0764: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c0768: ldrb w16, [x14, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(1));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(1));
    ARC_W_W(c, 16, arc_ld8(_a));
  }
  /* c076c: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* c0770: csel w15, w15, w16, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 16)));
  /* c0774: csel x11, x14, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* c0778: csel x12, x13, x12, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* c077c: b #0xc0784 */
  goto L_c0784;
L_c0780:;
  /* c0780: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
L_c0784:;
  /* c0784: add x14, x19, x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c0788: ldrb w13, [x14] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 14)));
  /* c078c: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c0790: b.hs #0xc07bc */
  if (ARC_COND(c, 2)) goto L_c07bc;
  /* c0794: b #0xc0730 */
  goto L_c0730;
L_c0798:;
  /* c0798: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* c079c: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c07a0: ldrb w0, [x17, #1]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(1));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(1));
    ARC_W_W(c, 0, arc_ld8(_a));
  }
  /* c07a4: cmp w15, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 0));
  /* c07a8: csel w15, w15, w0, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 0)));
  /* c07ac: csel x11, x17, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* c07b0: csel x12, x12, x16, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* c07b4: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c07b8: b.lo #0xc072c */
  if (ARC_COND(c, 3)) goto L_c072c;
L_c07bc:;
  /* c07bc: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* c07c0: strb w15, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c07c4: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c07c8: b.lt #0xc072c */
  if (ARC_COND(c, 11)) goto L_c072c;
  /* c07cc: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* c07d0: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c07d4: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* c07d8: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c07dc: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* c07e0: add x11, x19, x16 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ARC_X_R(c, 16)));
  /* c07e4: b.lt #0xc0798 */
  if (ARC_COND(c, 11)) goto L_c0798;
  /* c07e8: ldrb w15, [x11] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 11)));
  /* c07ec: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* c07f0: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c07f4: b.hs #0xc07bc */
  if (ARC_COND(c, 2)) goto L_c07bc;
  /* c07f8: b #0xc072c */
  goto L_c072c;
L_c07fc:;
  /* c07fc: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c0800:;
  /* c0800: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c0804: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* c0808: b.le #0xc0664 */
  if (ARC_COND(c, 13)) goto L_c0664;
L_c080c:;
  /* c080c: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* c0810: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c0814: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c0818: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c081c: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* c0820: b #0xc084c */
  goto L_c084c;
L_c0824:;
  /* c0824: ldrb w13, [x17, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(2));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(2));
    ARC_W_W(c, 13, arc_ld8(_a));
  }
  /* c0828: ldurb w15, [x17, #-1] */
  ARC_W_W(c, 15, arc_ld8((ARC_X_R(c, 17) + INT64_C(-1))));
  /* c082c: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c0830: csel w15, w15, w13, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 13)));
  /* c0834: csel x9, x17, x9, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 9)));
  /* c0838: csel x13, x16, x14, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 14)));
L_c083c:;
  /* c083c: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* c0840: strb w15, [x12] */
  arc_st8(ARC_X_R(c, 12), ARC_W_R(c, 15));
  /* c0844: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* c0848: b.gt #0xc0878 */
  if (ARC_COND(c, 12)) goto L_c0878;
L_c084c:;
  /* c084c: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* c0850: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* c0854: add x17, x12, x13 */
  ARC_X_W(c, 17, (ARC_X_R(c, 12) + ARC_X_R(c, 13)));
  /* c0858: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* c085c: add x16, x9, #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* c0860: add x9, x17, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c0864: cmp x16, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 16), ARC_X_R(c, 8));
  /* c0868: b.lt #0xc0824 */
  if (ARC_COND(c, 11)) goto L_c0824;
  /* c086c: ldrb w15, [x9] */
  ARC_W_W(c, 15, arc_ld8(ARC_X_R(c, 9)));
  /* c0870: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* c0874: b #0xc083c */
  goto L_c083c;
L_c0878:;
  /* c0878: sub x20, x20, #1 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(1)));
  /* c087c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c0880: b.eq #0xc07fc */
  if (ARC_COND(c, 0)) goto L_c07fc;
  /* c0884: ldrb w11, [x20] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 20)));
  /* c0888: sub x12, x9, x19 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* c088c: add x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* c0890: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c0894: subs x11, x12, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2)));
  /* c0898: strb w10, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 10));
  /* c089c: b.lt #0xc0800 */
  if (ARC_COND(c, 11)) goto L_c0800;
  /* c08a0: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* c08a4: ldrb w11, [x9] */
  ARC_W_W(c, 11, arc_ld8(ARC_X_R(c, 9)));
  /* c08a8: add x12, x19, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c08ac: ldrb w13, [x12] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 12)));
  /* c08b0: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c08b4: b.hs #0xc0800 */
  if (ARC_COND(c, 2)) goto L_c0800;
L_c08b8:;
  /* c08b8: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* c08bc: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* c08c0: strb w13, [x14] */
  arc_st8(ARC_X_R(c, 14), ARC_W_R(c, 13));
  /* c08c4: cbz x10, #0xc08e0 */
  if ((ARC_X_R(c, 10)) == 0) goto L_c08e0;
  /* c08c8: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c08cc: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* c08d0: add x12, x19, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 10)));
  /* c08d4: ldrb w13, [x12] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 12)));
  /* c08d8: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c08dc: b.lo #0xc08b8 */
  if (ARC_COND(c, 3)) goto L_c08b8;
L_c08e0:;
  /* c08e0: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c08e4: b #0xc0800 */
  goto L_c0800;
L_c08e8:;
  /* c08e8: tbz w8, #0, #0xc08fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c08fc;
  /* c08ec: b #0xc0664 */
  goto L_c0664;
L_c08f0:;
  /* c08f0: add x9, x19, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* c08f4: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c08f8: b.eq #0xc0664 */
  if (ARC_COND(c, 0)) goto L_c0664;
L_c08fc:;
  /* c08fc: ldrb w8, [x19, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(1))));
  /* c0900: ldrb w10, [x19] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 19)));
  /* c0904: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* c0908: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c090c: b.hs #0xc08f0 */
  if (ARC_COND(c, 2)) goto L_c08f0;
  /* c0910: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c0914:;
  /* c0914: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c0918: ldurb w10, [x9, #-2] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 9) + INT64_C(-2))));
  /* c091c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* c0920: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c0924: b.lo #0xc0914 */
  if (ARC_COND(c, 3)) goto L_c0914;
  /* c0928: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c092c: b #0xc08f0 */
  goto L_c08f0;
}

void fn1_d5d34(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038803764));
  /* d5d34: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d5d38: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* d5d3c: stp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d5d40: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d5d44: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d5d48: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d5d4c: add x29, sp, #0x80 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(128)));
  /* d5d50: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* d5d54: tbnz w8, #0x1f, #0xd5d60 */
  if (((ARC_W_R(c, 8)) >> 31 & 1) != 0) goto L_d5d60;
  /* d5d58: mov w9, w8 */
  ARC_W_W(c, 9, ARC_W_R(c, 8));
  /* d5d5c: b #0xd5d78 */
  goto L_d5d78;
L_d5d60:;
  /* d5d60: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d5d64: b.eq #0xd5de8 */
  if (ARC_COND(c, 0)) goto L_d5de8;
  /* d5d68: fabs s0, s0 */
  arc_s_w(c, 0, (float)(fabsf(ARC_S_R(c, 0))));
  /* d5d6c: mov w9, #0x2d */
  ARC_W_W(c, 9, UINT64_C(45));
  /* d5d70: strb w9, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* d5d74: fmov w9, s0 */
  ARC_W_W(c, 9, ARC_SU_R(c, 0));
L_d5d78:;
  /* d5d78: mov w10, #0x7f800000 */
  ARC_W_W(c, 10, UINT64_C(2139095040));
  /* d5d7c: bics wzr, w10, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & (~ARC_W_R(c, 9)));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 31, _r); }
  /* d5d80: b.ne #0xd5da8 */
  if (ARC_COND(c, 1)) goto L_d5da8;
  /* d5d84: ands w10, w9, #0x7fffff */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 9) & UINT64_C(8388607));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 10, _r); }
  /* d5d88: b.eq #0xd5dd8 */
  if (ARC_COND(c, 0)) goto L_d5dd8;
  /* d5d8c: tbz w8, #0x1f, #0xd5df4 */
  if (((ARC_W_R(c, 8)) >> 31 & 1) == 0) goto L_d5df4;
  /* d5d90: cmp w10, #0x400, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(4194304));
  /* d5d94: b.ne #0xd5df4 */
  if (ARC_COND(c, 1)) goto L_d5df4;
  /* d5d98: adrp x8, #0x4f000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(323584)));
  /* d5d9c: add x8, x8, #0xa91 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2705)));
  /* d5da0: mov w19, #8 */
  ARC_W_W(c, 19, UINT64_C(8));
  /* d5da4: b #0xd5e18 */
  goto L_d5e18;
L_d5da8:;
  /* d5da8: cmp w2, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(3));
  /* d5dac: b.eq #0xd5e78 */
  if (ARC_COND(c, 0)) goto L_d5e78;
  /* d5db0: cmp w2, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(2));
  /* d5db4: b.eq #0xd5e54 */
  if (ARC_COND(c, 0)) goto L_d5e54;
  /* d5db8: cmp w2, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 2), UINT64_C(1));
  /* d5dbc: b.ne #0xd5eb0 */
  if (ARC_COND(c, 1)) goto L_d5eb0;
  /* d5dc0: tbnz w3, #0x1f, #0xd5fac */
  if (((ARC_W_R(c, 3)) >> 31 & 1) != 0) goto L_d5fac;
  /* d5dc4: mov w8, #0xca00 */
  ARC_W_W(c, 8, UINT64_C(51712));
  /* d5dc8: movk w8, #0x3b9a, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* d5dcc: cmp w3, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 8));
  /* d5dd0: b.lo #0xd5fb0 */
  if (ARC_COND(c, 3)) goto L_d5fb0;
  /* d5dd4: b #0xd5e68 */
  goto L_d5e68;
L_d5dd8:;
  /* d5dd8: nop  */
  /* nop: no architectural effect here */
  /* d5ddc: adr x8, #0x50992 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(330130)));
  /* d5de0: mov w19, #3 */
  ARC_W_W(c, 19, UINT64_C(3));
  /* d5de4: b #0xd5e18 */
  goto L_d5e18;
L_d5de8:;
  /* d5de8: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5dec: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d5df0: b #0xd62e8 */
  goto L_d62e8;
L_d5df4:;
  /* d5df4: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* d5df8: add x8, x8, #0xea3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(3747)));
  /* d5dfc: adrp x10, #0x50000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(327680)));
  /* d5e00: add x10, x10, #0xf0d */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(3853)));
  /* d5e04: tst w9, #0x400000 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4194304)));
  /* d5e08: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* d5e0c: mov w11, #9 */
  ARC_W_W(c, 11, UINT64_C(9));
  /* d5e10: csel x8, x10, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* d5e14: csel x19, x11, x9, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
L_d5e18:;
  /* d5e18: sub x9, x1, x0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d5e1c: cmp x9, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 19));
  /* d5e20: b.ge #0xd5e34 */
  if (ARC_COND(c, 10)) goto L_d5e34;
L_d5e24:;
  /* d5e24: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5e28: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d5e2c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d5e30: b #0xd62e8 */
  goto L_d62e8;
L_d5e34:;
  /* d5e34: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* d5e38: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d5e3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d5e40: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(876100));
  fn1_1449d8(c);
  /* d5e44: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5e48: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5e4c: add x0, x20, x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
  /* d5e50: b #0xd62e8 */
  goto L_d62e8;
L_d5e54:;
  /* d5e54: tbnz w3, #0x1f, #0xd5f7c */
  if (((ARC_W_R(c, 3)) >> 31 & 1) != 0) goto L_d5f7c;
  /* d5e58: mov w8, #0xca00 */
  ARC_W_W(c, 8, UINT64_C(51712));
  /* d5e5c: movk w8, #0x3b9a, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* d5e60: cmp w3, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 8));
  /* d5e64: b.lo #0xd5f80 */
  if (ARC_COND(c, 3)) goto L_d5f80;
L_d5e68:;
  /* d5e68: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d5e6c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* d5e70: and x9, x8, #0xffffffff00000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(18446744069414584320)));
  /* d5e74: b #0xd62e8 */
  goto L_d62e8;
L_d5e78:;
  /* d5e78: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* d5e7c: cbz w8, #0xd5f90 */
  if ((ARC_W_R(c, 8)) == 0) goto L_d5f90;
  /* d5e80: tbnz w3, #0x1f, #0xd5fc8 */
  if (((ARC_W_R(c, 3)) >> 31 & 1) != 0) goto L_d5fc8;
  /* d5e84: cbz w3, #0xd5fd0 */
  if ((ARC_W_R(c, 3)) == 0) goto L_d5fd0;
  /* d5e88: mov w9, #0x4240 */
  ARC_W_W(c, 9, UINT64_C(16960));
  /* d5e8c: movk w9, #0xf, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* d5e90: cmp w3, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 9));
  /* d5e94: b.hs #0xd6030 */
  if (ARC_COND(c, 2)) goto L_d6030;
  /* d5e98: cmp w3, #7 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(7));
  /* d5e9c: b.ls #0xd5fd4 */
  if (ARC_COND(c, 9)) goto L_d5fd4;
  /* d5ea0: cmp w3, #0x27 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(39));
  /* d5ea4: mov w9, #0x27 */
  ARC_W_W(c, 9, UINT64_C(39));
  /* d5ea8: csel w10, w3, w9, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 3)) : ARC_W_R(c, 9)));
  /* d5eac: b #0xd603c */
  goto L_d603c;
L_d5eb0:;
  /* d5eb0: fmov w8, s0 */
  ARC_W_W(c, 8, ARC_SU_R(c, 0));
  /* d5eb4: cmp w3, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(0));
  /* d5eb8: and w10, w8, #0x7fffff */
  ARC_W_W(c, 10, (ARC_W_R(c, 8) & UINT64_C(8388607)));
  /* d5ebc: lsr w11, w8, #0x17 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(23)) & 31)));
  /* d5ec0: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* d5ec4: lsl w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) << ((UINT64_C(1)) & 31)));
  /* d5ec8: csel w8, w8, w3, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 3)));
  /* d5ecc: cbnz w11, #0xd5ee0 */
  if ((ARC_W_R(c, 11)) != 0) goto L_d5ee0;
  /* d5ed0: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* d5ed4: mov w10, #-0x7e */
  ARC_W_W(c, 10, UINT64_C(18446744073709551490));
  /* d5ed8: csel w10, wzr, w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 10)));
  /* d5edc: b #0xd5ee8 */
  goto L_d5ee8;
L_d5ee0:;
  /* d5ee0: orr w9, w9, #0x1000000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(16777216)));
  /* d5ee4: sub w10, w11, #0x7f */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) - UINT64_C(127)));
L_d5ee8:;
  /* d5ee8: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* d5eec: mov w11, #0x2b */
  ARC_W_W(c, 11, UINT64_C(43));
  /* d5ef0: mov w12, #0x2d */
  ARC_W_W(c, 12, UINT64_C(45));
  /* d5ef4: sub x13, x1, x0 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d5ef8: cneg w19, w10, mi */
  ARC_W_W(c, 19, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10))) : (ARC_W_R(c, 10))));
  /* d5efc: csel w22, w12, w11, lt */
  ARC_W_W(c, 22, (ARC_COND(c, 11) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* d5f00: subs x10, x13, x8 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8)));
  /* d5f04: b.lt #0xd5e24 */
  if (ARC_COND(c, 11)) goto L_d5e24;
  /* d5f08: cmp w19, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(100));
  /* d5f0c: mov w11, #2 */
  ARC_W_W(c, 11, UINT64_C(2));
  /* d5f10: mov w12, #3 */
  ARC_W_W(c, 12, UINT64_C(3));
  /* d5f14: cinc x11, x11, hs */
  ARC_X_W(c, 11, (ARC_COND(c, 2) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* d5f18: cmp w19, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(10));
  /* d5f1c: csinc x11, x11, xzr, hs */
  ARC_X_W(c, 11, (ARC_COND(c, 2) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 31)) + 1)));
  /* d5f20: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* d5f24: cinc x12, x12, ne */
  ARC_X_W(c, 12, (ARC_COND(c, 1) ? (ARC_X_R(c, 12)) + 1 : (ARC_X_R(c, 12))));
  /* d5f28: add x11, x11, x12 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 12)));
  /* d5f2c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* d5f30: b.lt #0xd5e24 */
  if (ARC_COND(c, 11)) goto L_d5e24;
  /* d5f34: cmp w8, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6));
  /* d5f38: b.hs #0xd5ff8 */
  if (ARC_COND(c, 2)) goto L_d5ff8;
  /* d5f3c: mov w10, #0x18 */
  ARC_W_W(c, 10, UINT64_C(24));
  /* d5f40: lsl w11, w9, #1 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* d5f44: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* d5f48: sub w10, w10, w8, lsl #2 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - ((uint32_t)(ARC_W_R(c, 8)) << 2)));
  /* d5f4c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* d5f50: lsl w10, w12, w10 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 12)) << ((ARC_W_R(c, 10)) & 31)));
  /* d5f54: sub w12, w11, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* d5f58: orr w12, w12, w9 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) | ARC_W_R(c, 9)));
  /* d5f5c: and w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & ARC_W_R(c, 11)));
  /* d5f60: and w10, w10, w12 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & ARC_W_R(c, 12)));
  /* d5f64: add w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) + ARC_W_R(c, 9)));
  /* d5f68: lsr w10, w9, #0x18 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(24)) & 31)));
  /* d5f6c: orr w10, w10, #0x30 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(48)));
  /* d5f70: strb w10, [x20], #1 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* d5f74: cbnz w8, #0xd6004 */
  if ((ARC_W_R(c, 8)) != 0) goto L_d6004;
  /* d5f78: b #0xd627c */
  goto L_d627c;
L_d5f7c:;
  /* d5f7c: mov w3, #6 */
  ARC_W_W(c, 3, UINT64_C(6));
L_d5f80:;
  /* d5f80: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* d5f84: mov w2, w3 */
  ARC_W_W(c, 2, ARC_W_R(c, 3));
  /* d5f88: bl #0xdc610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(876428));
  fn1_dc610(c);
  /* d5f8c: b #0xd5fbc */
  goto L_d5fbc;
L_d5f90:;
  /* d5f90: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* d5f94: b.eq #0xd5e24 */
  if (ARC_COND(c, 0)) goto L_d5e24;
  /* d5f98: mov w10, #0x30 */
  ARC_W_W(c, 10, UINT64_C(48));
  /* d5f9c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d5fa0: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d5fa4: strb w10, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* d5fa8: b #0xd62e8 */
  goto L_d62e8;
L_d5fac:;
  /* d5fac: mov w3, #6 */
  ARC_W_W(c, 3, UINT64_C(6));
L_d5fb0:;
  /* d5fb0: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* d5fb4: mov w2, w3 */
  ARC_W_W(c, 2, ARC_W_R(c, 3));
  /* d5fb8: bl #0xdcf48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(876476));
  fn1_dcf48(c);
L_d5fbc:;
  /* d5fbc: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* d5fc0: and x9, x1, #0xffffffff00000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* d5fc4: b #0xd62e8 */
  goto L_d62e8;
L_d5fc8:;
  /* d5fc8: mov w3, #6 */
  ARC_W_W(c, 3, UINT64_C(6));
  /* d5fcc: b #0xd5fd4 */
  goto L_d5fd4;
L_d5fd0:;
  /* d5fd0: mov w3, #1 */
  ARC_W_W(c, 3, UINT64_C(1));
L_d5fd4:;
  /* d5fd4: sub w9, w3, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 3) - UINT64_C(1)));
  /* d5fd8: add w10, w3, #0xa */
  ARC_W_W(c, 10, (ARC_W_R(c, 3) + UINT64_C(10)));
  /* d5fdc: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* d5fe0: nop  */
  /* nop: no architectural effect here */
  /* d5fe4: adr x10, #0x5465c */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(345692)));
  /* d5fe8: ubfx w9, w9, #1, #7 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 9)) >> 1) & UINT64_C(127)));
  /* d5fec: add x9, x10, w9, uxtw #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 2)));
  /* d5ff0: add x10, x9, w3, uxtw #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 3)))) << 2)));
  /* d5ff4: b #0xd6048 */
  goto L_d6048;
L_d5ff8:;
  /* d5ff8: lsr w10, w9, #0x18 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(24)) & 31)));
  /* d5ffc: orr w10, w10, #0x30 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(48)));
  /* d6000: strb w10, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 10));
L_d6004:;
  /* d6004: mov w10, #0x2e */
  ARC_W_W(c, 10, UINT64_C(46));
  /* d6008: ubfx x11, x9, #0x14, #4 */
  ARC_X_W(c, 11, (((uint64_t)(ARC_X_R(c, 9)) >> 20) & UINT64_C(15)));
  /* d600c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* d6010: strb w10, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 10));
  /* d6014: nop  */
  /* nop: no architectural effect here */
  /* d6018: adr x10, #0x5460d */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(345613)));
  /* d601c: ldrb w11, [x10, x11] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 11))));
  /* d6020: strb w11, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 11));
  /* d6024: b.ne #0xd61a4 */
  if (ARC_COND(c, 1)) goto L_d61a4;
  /* d6028: add x20, x0, #3 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(3)));
  /* d602c: b #0xd627c */
  goto L_d627c;
L_d6030:;
  /* d6030: mov w3, #0x4240 */
  ARC_W_W(c, 3, UINT64_C(16960));
  /* d6034: mov w10, #0x27 */
  ARC_W_W(c, 10, UINT64_C(39));
  /* d6038: movk w3, #0xf, lsl #16 */
  ARC_W_W(c, 3, ((ARC_W_R(c, 3) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
L_d603c:;
  /* d603c: nop  */
  /* nop: no architectural effect here */
  /* d6040: adr x9, #0x54758 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(345944)));
  /* d6044: add x10, x9, x10, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
L_d6048:;
  /* d6048: add x11, x10, #0x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(20)));
  /* d604c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* d6050: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* d6054: b.eq #0xd6078 */
  if (ARC_COND(c, 0)) goto L_d6078;
  /* d6058: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
L_d605c:;
  /* d605c: ldr w12, [x10] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 10)));
  /* d6060: cmp w12, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 8));
  /* d6064: b.hs #0xd6078 */
  if (ARC_COND(c, 2)) goto L_d6078;
  /* d6068: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* d606c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* d6070: b.ne #0xd605c */
  if (ARC_COND(c, 1)) goto L_d605c;
  /* d6074: mov x10, x11 */
  ARC_X_W(c, 10, ARC_X_R(c, 11));
L_d6078:;
  /* d6078: sub x8, x10, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 9)));
  /* d607c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* d6080: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* d6084: lsr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63)));
  /* d6088: sub w9, w8, #5 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(5)));
  /* d608c: cmp w3, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 9));
  /* d6090: ccmn w9, #5, #4, gt */
  if (ARC_COND(c, 12)) { (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(5), 0); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* d6094: cset w24, gt */
  ARC_W_W(c, 24, (ARC_COND(c, 12) ? 1 : 0));
  /* d6098: cmp w24, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 24), UINT64_C(1));
  /* d609c: b.ne #0xd60e0 */
  if (ARC_COND(c, 1)) goto L_d60e0;
  /* d60a0: sub w8, w3, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 3) - ARC_W_R(c, 8)));
  /* d60a4: mov w9, #0x25 */
  ARC_W_W(c, 9, UINT64_C(37));
  /* d60a8: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* d60ac: add w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(4)));
  /* d60b0: cmp w8, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(37));
  /* d60b4: csel w20, w8, w9, lt */
  ARC_W_W(c, 20, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d60b8: cmp w8, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(0));
  /* d60bc: mov w8, #6 */
  ARC_W_W(c, 8, UINT64_C(6));
  /* d60c0: add x9, sp, #0xb */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(11)));
  /* d60c4: csel w2, w8, w20, lt */
  ARC_W_W(c, 2, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 20)));
  /* d60c8: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* d60cc: add x1, x9, #0x75 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(117)));
  /* d60d0: bl #0xdc610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(876756));
  fn1_dc610(c);
  /* d60d4: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* d60d8: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* d60dc: b #0xd6128 */
  goto L_d6128;
L_d60e0:;
  /* d60e0: cmp w3, #0x70 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(112));
  /* d60e4: mov w8, #0x70 */
  ARC_W_W(c, 8, UINT64_C(112));
  /* d60e8: add x21, sp, #0xb */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(11)));
  /* d60ec: csel w8, w3, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 3)) : ARC_W_R(c, 8)));
  /* d60f0: fcvt d0, s0 */
  arc_d_w(c, 0, (double)(ARC_S_R(c, 0)));
  /* d60f4: sub w20, w8, #1 */
  ARC_W_W(c, 20, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* d60f8: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* d60fc: add x1, x21, #0x75 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(117)));
  /* d6100: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* d6104: bl #0xdcf48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(876808));
  fn1_dcf48(c);
  /* d6108: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d610c: sub x2, x0, x21 */
  ARC_X_W(c, 2, (ARC_X_R(c, 0) - ARC_X_R(c, 21)));
  /* d6110: add x0, sp, #0xb */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(11)));
  /* d6114: mov w1, #0x65 */
  ARC_W_W(c, 1, UINT64_C(101));
  /* d6118: bl #0x1428d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(876828));
  fn1_1428d8(c);
  /* d611c: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* d6120: csel x0, x19, x0, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 19)) : ARC_X_R(c, 0)));
  /* d6124: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
L_d6128:;
  /* d6128: mov x10, x23 */
  ARC_X_W(c, 10, ARC_X_R(c, 23));
  /* d612c: cmp w20, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 20), UINT64_C(1));
  /* d6130: b.lt #0xd6148 */
  if (ARC_COND(c, 11)) goto L_d6148;
L_d6134:;
  /* d6134: ldrb w8, [x0, #-1]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(-1));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-1));
    ARC_W_W(c, 8, arc_ld8(_a));
  }
  /* d6138: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* d613c: b.eq #0xd6134 */
  if (ARC_COND(c, 0)) goto L_d6134;
  /* d6140: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* d6144: cinc x0, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 0)) + 1 : (ARC_X_R(c, 0))));
L_d6148:;
  /* d6148: add x8, sp, #0xb */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(11)));
  /* d614c: sub x20, x0, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) - ARC_X_R(c, 8)));
  /* d6150: sub x8, x10, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) - ARC_X_R(c, 22)));
  /* d6154: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* d6158: b.ge #0xd6164 */
  if (ARC_COND(c, 10)) goto L_d6164;
  /* d615c: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d6160: b #0xd61dc */
  goto L_d61dc;
L_d6164:;
  /* d6164: add x1, sp, #0xb */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(11)));
  /* d6168: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d616c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* d6170: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(876916));
  fn1_1449d8(c);
  /* d6174: add x20, x22, x20 */
  ARC_X_W(c, 20, (ARC_X_R(c, 22) + ARC_X_R(c, 20)));
  /* d6178: tbz w24, #0, #0xd6188 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_d6188;
  /* d617c: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d6180: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* d6184: b #0xd61dc */
  goto L_d61dc;
L_d6188:;
  /* d6188: sub x19, x19, x21 */
  ARC_X_W(c, 19, (ARC_X_R(c, 19) - ARC_X_R(c, 21)));
  /* d618c: sub x8, x23, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - ARC_X_R(c, 20)));
  /* d6190: cmp x8, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 19));
  /* d6194: b.ge #0xd61c4 */
  if (ARC_COND(c, 10)) goto L_d61c4;
  /* d6198: mov x10, x23 */
  ARC_X_W(c, 10, ARC_X_R(c, 23));
  /* d619c: mov w8, #0x4b */
  ARC_W_W(c, 8, UINT64_C(75));
  /* d61a0: b #0xd61dc */
  goto L_d61dc;
L_d61a4:;
  /* d61a4: mov w11, w9 */
  ARC_W_W(c, 11, ARC_W_R(c, 9));
  /* d61a8: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* d61ac: ubfx x11, x11, #0x10, #4 */
  ARC_X_W(c, 11, (((uint64_t)(ARC_X_R(c, 11)) >> 16) & UINT64_C(15)));
  /* d61b0: ldrb w11, [x10, x11] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 11))));
  /* d61b4: strb w11, [x0, #3] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(3)), ARC_W_R(c, 11));
  /* d61b8: b.ne #0xd61e8 */
  if (ARC_COND(c, 1)) goto L_d61e8;
  /* d61bc: add x20, x0, #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* d61c0: b #0xd627c */
  goto L_d627c;
L_d61c4:;
  /* d61c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d61c8: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* d61cc: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* d61d0: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877012));
  fn1_1449d8(c);
  /* d61d4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d61d8: add x10, x20, x19 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + ARC_X_R(c, 19)));
L_d61dc:;
  /* d61dc: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* d61e0: mov x0, x10 */
  ARC_X_W(c, 0, ARC_X_R(c, 10));
  /* d61e4: b #0xd62e8 */
  goto L_d62e8;
L_d61e8:;
  /* d61e8: mov w11, w9 */
  ARC_W_W(c, 11, ARC_W_R(c, 9));
  /* d61ec: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* d61f0: ubfx x11, x11, #0xc, #4 */
  ARC_X_W(c, 11, (((uint64_t)(ARC_X_R(c, 11)) >> 12) & UINT64_C(15)));
  /* d61f4: ldrb w11, [x10, x11] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 11))));
  /* d61f8: strb w11, [x0, #4] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 11));
  /* d61fc: b.ne #0xd6208 */
  if (ARC_COND(c, 1)) goto L_d6208;
  /* d6200: add x20, x0, #5 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(5)));
  /* d6204: b #0xd627c */
  goto L_d627c;
L_d6208:;
  /* d6208: mov w11, w9 */
  ARC_W_W(c, 11, ARC_W_R(c, 9));
  /* d620c: cmp w8, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(4));
  /* d6210: ubfx x11, x11, #8, #4 */
  ARC_X_W(c, 11, (((uint64_t)(ARC_X_R(c, 11)) >> 8) & UINT64_C(15)));
  /* d6214: ldrb w11, [x10, x11] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 11))));
  /* d6218: strb w11, [x0, #5] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(5)), ARC_W_R(c, 11));
  /* d621c: b.ne #0xd6228 */
  if (ARC_COND(c, 1)) goto L_d6228;
  /* d6220: add x20, x0, #6 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(6)));
  /* d6224: b #0xd627c */
  goto L_d627c;
L_d6228:;
  /* d6228: mov w11, w9 */
  ARC_W_W(c, 11, ARC_W_R(c, 9));
  /* d622c: cmp w8, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(5));
  /* d6230: ubfx x11, x11, #4, #4 */
  ARC_X_W(c, 11, (((uint64_t)(ARC_X_R(c, 11)) >> 4) & UINT64_C(15)));
  /* d6234: ldrb w11, [x10, x11] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 11))));
  /* d6238: strb w11, [x0, #6] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 11));
  /* d623c: b.ne #0xd6248 */
  if (ARC_COND(c, 1)) goto L_d6248;
  /* d6240: add x20, x0, #7 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(7)));
  /* d6244: b #0xd627c */
  goto L_d627c;
L_d6248:;
  /* d6248: subs w21, w8, #6 */
  ARC_W_W(c, 21, arc_sub32(c, ARC_W_R(c, 8), UINT64_C(6)));
  /* d624c: add x20, x0, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* d6250: and x9, x9, #0xf */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(15)));
  /* d6254: ldrb w9, [x10, x9] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 10) + ARC_X_R(c, 9))));
  /* d6258: strb w9, [x0, #7] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(7)), ARC_W_R(c, 9));
  /* d625c: b.eq #0xd627c */
  if (ARC_COND(c, 0)) goto L_d627c;
  /* d6260: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* d6264: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* d6268: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* d626c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* d6270: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877172));
  fn1_144a20(c);
  /* d6274: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* d6278: add x20, x20, x21 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + ARC_X_R(c, 21)));
L_d627c:;
  /* d627c: add x0, x20, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(2)));
  /* d6280: mov w9, #0x70 */
  ARC_W_W(c, 9, UINT64_C(112));
  /* d6284: strb w22, [x20, #1] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(1)), ARC_W_R(c, 22));
  /* d6288: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d628c: strb w9, [x20] */
  arc_st8(ARC_X_R(c, 20), ARC_W_R(c, 9));
  /* d6290: cmp x8, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(9));
  /* d6294: b.gt #0xd62d8 */
  if (ARC_COND(c, 12)) goto L_d62d8;
  /* d6298: orr w9, w19, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 19) | UINT64_C(1)));
  /* d629c: mov w10, #0x20 */
  ARC_W_W(c, 10, UINT64_C(32));
  /* d62a0: clz w9, w9 */
  ARC_W_W(c, 9, arc_clz32(ARC_W_R(c, 9)));
  /* d62a4: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* d62a8: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* d62ac: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* d62b0: nop  */
  /* nop: no architectural effect here */
  /* d62b4: adr x10, #0x54634 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(345652)));
  /* d62b8: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* d62bc: ldr w10, [x10, w9, uxtw #2] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 2))));
  /* d62c0: cmp w19, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 19), ARC_W_R(c, 10));
  /* d62c4: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* d62c8: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* d62cc: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d62d0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* d62d4: b.lt #0xd5e24 */
  if (ARC_COND(c, 11)) goto L_d5e24;
L_d62d8:;
  /* d62d8: mov w1, w19 */
  ARC_W_W(c, 1, ARC_W_R(c, 19));
  /* d62dc: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877280));
  fn1_d4eb8(c);
  /* d62e0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* d62e4: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
L_d62e8:;
  /* d62e8: mov w8, w8 */
  ARC_W_W(c, 8, ARC_W_R(c, 8));
  /* d62ec: orr x1, x9, x8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) | ARC_X_R(c, 8)));
  /* d62f0: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d62f4: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d62f8: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d62fc: ldp x29, x30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d6300: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* d6304: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d6308: ret  */
  return;
  /* d630c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877328));
  fn1_a1454(c);
  /* d6310: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877332));
  fn1_a1454(c);
  /* d6314: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877336));
  fn1_a1454(c);
  /* d6318: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(877340));
  fn1_a1454(c);
}

void fn1_da020(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038820896));
  /* da020: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* da024: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* da028: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* da02c: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* da030: add x0, x0, #0xbaa */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(2986)));
  /* da034: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(892984));
  fn1_da038(c);
}

void fn1_dc2a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038829736));
  /* dc2a8: bti c */
  /* bti: no architectural effect here */
  /* dc2ac: cmp x1, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 0));
  /* dc2b0: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* dc2b4: ret  */
  return;
}

void fn1_e0f50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038849360));
  /* e0f50: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0f54: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e0f58: str x27, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 27));
  /* e0f5c: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e0f60: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e0f64: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e0f68: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0f6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0f70: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e0f74: cbz x1, #0xe109c */
  if ((ARC_X_R(c, 1)) == 0) goto L_e109c;
  /* e0f78: ldp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* e0f7c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* e0f80: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e0f84: and x11, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e0f88: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e0f8c: mov w9, #0x16 */
  ARC_W_W(c, 9, UINT64_C(22));
  /* e0f90: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* e0f94: ubfx x12, x8, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* e0f98: csel x26, x9, x11, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* e0f9c: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e0fa0: csel x21, x12, x10, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* e0fa4: sub x9, x26, x21 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) - ARC_X_R(c, 21)));
  /* e0fa8: cmp x9, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 1));
  /* e0fac: b.hs #0xe1014 */
  if (ARC_COND(c, 2)) goto L_e1014;
  /* e0fb0: add x25, x21, x20 */
  ARC_X_W(c, 25, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* e0fb4: mov x9, #-9 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551607));
  /* e0fb8: sub x10, x25, x26 */
  ARC_X_W(c, 10, (ARC_X_R(c, 25) - ARC_X_R(c, 26)));
  /* e0fbc: sub x9, x9, x26 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 26)));
  /* e0fc0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e0fc4: b.hi #0xe10c0 */
  if (ARC_COND(c, 8)) goto L_e10c0;
  /* e0fc8: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e0fcc: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e0fd0: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* e0fd4: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* e0fd8: mov w27, w2 */
  ARC_W_W(c, 27, ARC_W_R(c, 2));
  /* e0fdc: csinc x23, x9, x19, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e0fe0: cmp x26, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 8));
  /* e0fe4: b.hi #0xe1028 */
  if (ARC_COND(c, 8)) goto L_e1028;
  /* e0fe8: lsl x8, x26, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(1)) & 63)));
  /* e0fec: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* e0ff0: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* e0ff4: csel x8, x25, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 25)) : ARC_X_R(c, 8)));
  /* e0ff8: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* e0ffc: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* e1000: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* e1004: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e1008: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* e100c: csel x24, x8, x9, lo */
  ARC_X_W(c, 24, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e1010: b #0xe102c */
  goto L_e102c;
L_e1014:;
  /* e1014: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e1018: tst x8, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 8) & UINT64_C(1)));
  /* e101c: add x25, x21, x20 */
  ARC_X_W(c, 25, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* e1020: csinc x22, x9, x19, ne */
  ARC_X_W(c, 22, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e1024: b #0xe1070 */
  goto L_e1070;
L_e1028:;
  /* e1028: mov x24, #-9 */
  ARC_X_W(c, 24, UINT64_C(18446744073709551607));
L_e102c:;
  /* e102c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e1030: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921652));
  fn1_1428f0(c);
  /* e1034: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e1038: cbz x21, #0xe104c */
  if ((ARC_X_R(c, 21)) == 0) goto L_e104c;
  /* e103c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e1040: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* e1044: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* e1048: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921676));
  fn1_1449f0(c);
L_e104c:;
  /* e104c: add x1, x26, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 26) + UINT64_C(1)));
  /* e1050: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* e1054: b.eq #0xe1060 */
  if (ARC_COND(c, 0)) goto L_e1060;
  /* e1058: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e105c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921696));
  fn1_142608(c);
L_e1060:;
  /* e1060: orr x8, x24, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* e1064: stp x21, x22, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* e1068: mov w2, w27 */
  ARC_W_W(c, 2, ARC_W_R(c, 27));
  /* e106c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e1070:;
  /* e1070: add x0, x22, x21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 21)));
  /* e1074: mov w1, w2 */
  ARC_W_W(c, 1, ARC_W_R(c, 2));
  /* e1078: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e107c: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921728));
  fn1_144a20(c);
  /* e1080: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* e1084: tbnz w8, #0, #0xe1094 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e1094;
  /* e1088: lsl w8, w25, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 25)) << ((UINT64_C(1)) & 31)));
  /* e108c: strb w8, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* e1090: b #0xe1098 */
  goto L_e1098;
L_e1094:;
  /* e1094: str x25, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 25));
L_e1098:;
  /* e1098: strb wzr, [x22, x25] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 25)), ARC_W_R(c, 31));
L_e109c:;
  /* e109c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e10a0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e10a4: ldr x27, [sp, #0x10] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(16))));
  /* e10a8: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e10ac: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e10b0: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e10b4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e10b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e10bc: ret  */
  return;
L_e10c0:;
  /* e10c0: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(921796));
  fn1_d7d54(c);
}

void fn1_e3a04(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038860292));
  /* e3a04: bti c */
  /* bti: no architectural effect here */
  /* e3a08: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e3a0c: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e3a10: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e3a14: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3a18: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e3a1c: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* e3a20: b.hs #0xe3a3c */
  if (ARC_COND(c, 2)) goto L_e3a3c;
  /* e3a24: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e3a28: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e3a2c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e3a30: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e3a34: add x0, x8, x1, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 1)) << 2)));
  /* e3a38: ret  */
  return;
L_e3a3c:;
  /* e3a3c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e3a40: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e3a44: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e3a48: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(932428));
  fn1_e1f80(c);
}

void fn1_e7df0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038877680));
  /* e7df0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e7df4: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e7df8: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e7dfc: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e7e00: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e7e04: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e7e08: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* e7e0c: ldrb w8, [x3] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 3)));
  /* e7e10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e7e14: stp x1, x2, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* e7e18: tbnz w8, #0, #0xe7e30 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e7e30;
  /* e7e1c: ldr q0, [x3] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 3)), arc_ld64(ARC_X_R(c, 3) + 8));
  /* e7e20: ldr x8, [x3, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 3) + INT64_C(16))));
  /* e7e24: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* e7e28: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* e7e2c: b #0xe7e3c */
  goto L_e7e3c;
L_e7e30:;
  /* e7e30: ldp x2, x1, [x3, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 3) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* e7e34: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* e7e38: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949820));
  fn1_da588(c);
L_e7e3c:;
  /* e7e3c: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* e7e40: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* e7e44: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* e7e48: add x21, sp, #0x18 */
  ARC_X_W(c, 21, ((c)->sp + UINT64_C(24)));
  /* e7e4c: bl #0xe7f5c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949840));
  fn1_e7f5c(c);
  /* e7e50: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e7e54: ldr x8, [x8, #0x910] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2320))));
  /* e7e58: ldrb w24, [sp, #0x18] */
  ARC_W_W(c, 24, arc_ld8(((c)->sp + INT64_C(24))));
  /* e7e5c: ldr x20, [sp, #0x28] */
  ARC_X_W(c, 20, arc_ld64(((c)->sp + INT64_C(40))));
  /* e7e60: tst w24, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 24) & UINT64_C(1)));
  /* e7e64: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e7e68: csinc x21, x20, x21, ne */
  ARC_X_W(c, 21, (ARC_COND(c, 1) ? (ARC_X_R(c, 20)) : ((ARC_X_R(c, 21)) + 1)));
  /* e7e6c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e7e70: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e7e74: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949880));
  fn1_142860(c);
  /* e7e78: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e7e7c: add x0, x0, #0x19 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(25)));
  /* e7e80: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949892));
  fn1_1428f0(c);
  /* e7e84: add x23, x0, #0x18 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* e7e88: stp x22, x22, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* e7e8c: add x2, x22, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* e7e90: str wzr, [x0, #0x10] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(16)), ARC_W_R(c, 31));
  /* e7e94: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e7e98: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* e7e9c: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949920));
  fn1_1449d8(c);
  /* e7ea0: str x23, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 23));
  /* e7ea4: tbz w24, #0, #0xe7eb8 */
  if (((ARC_W_R(c, 24)) >> 0 & 1) == 0) goto L_e7eb8;
  /* e7ea8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* e7eac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e7eb0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e7eb4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949944));
  fn1_142608(c);
L_e7eb8:;
  /* e7eb8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e7ebc: tbz w8, #0, #0xe7ed0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e7ed0;
  /* e7ec0: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* e7ec4: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* e7ec8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e7ecc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(949968));
  fn1_142608(c);
L_e7ed0:;
  /* e7ed0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* e7ed4: ldr x8, [x8, #0xa50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))));
  /* e7ed8: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* e7edc: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* e7ee0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e7ee4: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* e7ee8: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e7eec: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e7ef0: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e7ef4: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e7ef8: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e7efc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7f00: ret  */
  return;
  /* e7f04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e7f08: tbnz w24, #0, #0xe7f1c */
  if (((ARC_W_R(c, 24)) >> 0 & 1) != 0) goto L_e7f1c;
  /* e7f0c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e7f10: tbnz w8, #0, #0xe7f44 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e7f44;
L_e7f14:;
  /* e7f14: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7f18: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950044));
  fn1_9cc20(c);
L_e7f1c:;
  /* e7f1c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* e7f20: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e7f24: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e7f28: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950060));
  fn1_142608(c);
  /* e7f2c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e7f30: tbz w8, #0, #0xe7f14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e7f14;
  /* e7f34: b #0xe7f44 */
  goto L_e7f44;
  /* e7f38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e7f3c: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* e7f40: tbz w8, #0, #0xe7f14 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_e7f14;
L_e7f44:;
  /* e7f44: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* e7f48: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* e7f4c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* e7f50: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950100));
  fn1_142608(c);
  /* e7f54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7f58: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(950108));
  fn1_9cc20(c);
}

void fn1_ea8ec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038888684));
  /* ea8ec: bti c */
  /* bti: no architectural effect here */
  /* ea8f0: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* ea8f4: cbz x0, #0xea8fc */
  if ((ARC_X_R(c, 0)) == 0) goto L_ea8fc;
  /* ea8f8: b #0x143178 */
  fn1_143178(c); return;
L_ea8fc:;
  /* ea8fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ea900: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ea904: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ea908: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* ea90c: bl #0xe9be0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(960784));
  fn1_e9be0(c);
}

void fn1_ec02c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038894636));
  /* ec02c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec030: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec034: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* ec038: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec03c: mov x3, x1 */
  ARC_X_W(c, 3, ARC_X_R(c, 1));
  /* ec040: ldp x1, x2, [x2] */
  { const uint64_t _pa = ARC_X_R(c, 2);
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* ec044: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec048: bl #0x143028 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(966732));
  fn1_143028(c);
  /* ec04c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ec050: ldr x8, [x8, #0xa80] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2688))));
  /* ec054: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* ec058: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ec05c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* ec060: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec064: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec068: ret  */
  return;
}

void fn1_eda90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038901392));
  /* eda90: bti c */
  /* bti: no architectural effect here */
  /* eda94: ret  */
  return;
}

void fn1_f26a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038920868));
  /* f26a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f26a8: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* f26ac: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f26b0: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* f26b4: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f26b8: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f26bc: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f26c0: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* f26c4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f26c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f26cc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f26d0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f26d4: bl #0x143610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(992984));
  fn1_143610(c);
  /* f26d8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f26dc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f26e0: b.ne #0xf2820 */
  if (ARC_COND(c, 1)) goto L_f2820;
  /* f26e4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f26e8: nop  */
  /* nop: no architectural effect here */
  /* f26ec: adr x26, #0x15dc40 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f26f0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f26f4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f26f8: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f26fc: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f2700: stur x22, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 22));
  /* f2704: b.eq #0xf2714 */
  if (ARC_COND(c, 0)) goto L_f2714;
  /* f2708: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f270c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2710: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993044));
  fn1_db2e0(c);
L_f2714:;
  /* f2714: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f2718: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f271c: ldr x1, [x1, #0xb50] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))));
  /* f2720: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993060));
  fn1_143748(c);
  /* f2724: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f2728: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f272c: b.eq #0xf2750 */
  if (ARC_COND(c, 0)) goto L_f2750;
  /* f2730: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f2734: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2738: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993084));
  fn1_bd950(c);
  /* f273c: cbnz x0, #0xf2750 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2750;
  /* f2740: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f2744: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f2748: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f274c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993104));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f2750:;
  /* f2750: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2754: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2758: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f275c: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f2760: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f2764: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f2768: b.ne #0xf27dc */
  if (ARC_COND(c, 1)) goto L_f27dc;
  /* f276c: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f2770: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f2774: stur x24, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 24));
  /* f2778: b.eq #0xf2788 */
  if (ARC_COND(c, 0)) goto L_f2788;
  /* f277c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f2780: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f2784: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993160));
  fn1_db2e0(c);
L_f2788:;
  /* f2788: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f278c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* f2790: ldr x1, [x1, #0xb40] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2880))));
  /* f2794: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993176));
  fn1_143748(c);
  /* f2798: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f279c: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f27a0: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f27a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993192));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f27a8: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* f27ac: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f27b0: b.eq #0xf27d4 */
  if (ARC_COND(c, 0)) goto L_f27d4;
  /* f27b4: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f27b8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f27bc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993216));
  fn1_bd950(c);
  /* f27c0: cbnz x0, #0xf27d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f27d4;
  /* f27c4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f27c8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f27cc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f27d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993236));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f27d4:;
  /* f27d4: and w3, w25, #0xff */
  ARC_W_W(c, 3, (ARC_W_R(c, 25) & UINT64_C(255)));
  /* f27d8: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f27dc:;
  /* f27dc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f27e0: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f27e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f27e8: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f27ec: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f27f0: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f27f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993272));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f27f8: cbnz x0, #0xf2820 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f2820;
  /* f27fc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f2800: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f2804: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f2808: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f280c: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f2810: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f2814: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f2818: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f281c: b.ne #0xf284c */
  if (ARC_COND(c, 1)) goto L_f284c;
L_f2820:;
  /* f2820: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f2824: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993320));
  fn1_143628(c);
L_f2828:;
  /* f2828: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f282c: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f2830: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f2834: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f2838: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* f283c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f2840: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* f2844: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f2848: ret  */
  return;
L_f284c:;
  /* f284c: nop  */
  /* nop: no architectural effect here */
  /* f2850: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f2854: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993368));
  fn1_ec720(c);
  /* f2858: b #0xf2884 */
  goto L_f2884;
  /* f285c: cmp x24, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 26));
  /* f2860: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2864: b.eq #0xf28b8 */
  if (ARC_COND(c, 0)) goto L_f28b8;
  /* f2868: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f286c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f2870: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993396));
  fn1_bd950(c);
  /* f2874: cbnz x0, #0xf28b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f28b8;
  /* f2878: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f287c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f2880: b #0xf28b0 */
  goto L_f28b0;
L_f2884:;
  /* f2884: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2888: b #0xf28b8 */
  goto L_f28b8;
  /* f288c: cmp x22, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 26));
  /* f2890: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f2894: b.eq #0xf28b8 */
  if (ARC_COND(c, 0)) goto L_f28b8;
  /* f2898: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f289c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f28a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993444));
  fn1_bd950(c);
  /* f28a4: cbnz x0, #0xf28b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f28b8;
  /* f28a8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f28ac: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f28b0:;
  /* f28b0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f28b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993464));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f28b8:;
  /* f28b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f28bc: bl #0x143628 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993472));
  fn1_143628(c);
  /* f28c0: b #0xf28c8 */
  goto L_f28c8;
  /* f28c4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f28c8:;
  /* f28c8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f28cc: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993488));
  fn1_142548(c);
  /* f28d0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f28d4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f28d8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f28dc: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f28e0: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f28e4: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f28e8: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f28ec: tbnz w10, #0, #0xf28f8 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f28f8;
  /* f28f0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993524));
  fn1_142980(c);
  /* f28f4: b #0xf2828 */
  goto L_f2828;
L_f28f8:;
  /* f28f8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993532));
  fn1_1429b0(c);
  /* f28fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f2900: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993540));
  fn1_142980(c);
  /* f2904: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f2908: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993548));
  fn1_9cc20(c);
  /* f290c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(993552));
  fn1_a1454(c);
}

void fn1_f44cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038928588));
  /* f44cc: bti c */
  /* bti: no architectural effect here */
  /* f44d0: ret  */
  return;
}

void fn1_f910c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038948108));
  /* f910c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f9110: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* f9114: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f9118: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* f911c: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* f9120: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f9124: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f9128: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f912c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f9130: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9134: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9138: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f913c: bl #0x143688 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020224));
  fn1_143688(c);
  /* f9140: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* f9144: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f9148: b.ne #0xf9290 */
  if (ARC_COND(c, 1)) goto L_f9290;
  /* f914c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9150: nop  */
  /* nop: no architectural effect here */
  /* f9154: adr x25, #0x15dc40 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f9158: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f915c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f9160: ldr x22, [x8, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f9164: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f9168: str x22, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 22));
  /* f916c: b.eq #0xf917c */
  if (ARC_COND(c, 0)) goto L_f917c;
  /* f9170: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f9174: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f9178: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020284));
  fn1_db2e0(c);
L_f917c:;
  /* f917c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f9180: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f9184: ldr x1, [x1, #0xb68] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2920))));
  /* f9188: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020300));
  fn1_143748(c);
  /* f918c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f9190: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f9194: b.eq #0xf91b8 */
  if (ARC_COND(c, 0)) goto L_f91b8;
  /* f9198: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f919c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f91a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020324));
  fn1_bd950(c);
  /* f91a4: cbnz x0, #0xf91b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f91b8;
  /* f91a8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f91ac: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f91b0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f91b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020344));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f91b8:;
  /* f91b8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f91bc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f91c0: add x22, x19, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f91c4: ldr w3, [x22, #0x90] */
  ARC_W_W(c, 3, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* f91c8: ldr x23, [x22, #0x28] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 22) + INT64_C(40))));
  /* f91cc: cmn w3, #1 */
  (void)arc_add32(c, ARC_W_R(c, 3), UINT64_C(1), 0);
  /* f91d0: b.ne #0xf924c */
  if (ARC_COND(c, 1)) goto L_f924c;
  /* f91d4: ldr x24, [x22, #0x30] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* f91d8: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f91dc: str x24, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 24));
  /* f91e0: b.eq #0xf91f0 */
  if (ARC_COND(c, 0)) goto L_f91f0;
  /* f91e4: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f91e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f91ec: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020400));
  fn1_db2e0(c);
L_f91f0:;
  /* f91f0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f91f4: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* f91f8: ldr x1, [x1, #0xb58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2904))));
  /* f91fc: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020416));
  fn1_143748(c);
  /* f9200: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f9204: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* f9208: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* f920c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020432));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9210: mov w3, w0 */
  ARC_W_W(c, 3, ARC_W_R(c, 0));
  /* f9214: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f9218: b.eq #0xf9248 */
  if (ARC_COND(c, 0)) goto L_f9248;
  /* f921c: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f9220: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9224: mov w25, w3 */
  ARC_W_W(c, 25, ARC_W_R(c, 3));
  /* f9228: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020460));
  fn1_bd950(c);
  /* f922c: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
  /* f9230: cbnz x0, #0xf9248 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9248;
  /* f9234: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f9238: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f923c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f9240: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020484));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9244: mov w3, w25 */
  ARC_W_W(c, 3, ARC_W_R(c, 25));
L_f9248:;
  /* f9248: str w3, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 3));
L_f924c:;
  /* f924c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f9250: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f9254: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f9258: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* f925c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* f9260: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* f9264: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020520));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f9268: cbnz x0, #0xf9290 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9290;
  /* f926c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9270: mov w10, #5 */
  ARC_W_W(c, 10, UINT64_C(5));
  /* f9274: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9278: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f927c: ldp w9, w11, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* f9280: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f9284: tst w11, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 11) & ARC_W_R(c, 9)));
  /* f9288: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f928c: b.ne #0xf92bc */
  if (ARC_COND(c, 1)) goto L_f92bc;
L_f9290:;
  /* f9290: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f9294: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020568));
  fn1_1436a0(c);
L_f9298:;
  /* f9298: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f929c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f92a0: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* f92a4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f92a8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* f92ac: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f92b0: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* f92b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f92b8: ret  */
  return;
L_f92bc:;
  /* f92bc: nop  */
  /* nop: no architectural effect here */
  /* f92c0: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f92c4: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020616));
  fn1_ec720(c);
  /* f92c8: b #0xf92f4 */
  goto L_f92f4;
  /* f92cc: cmp x24, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 25));
  /* f92d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f92d4: b.eq #0xf9328 */
  if (ARC_COND(c, 0)) goto L_f9328;
  /* f92d8: add x1, x24, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + UINT64_C(8)));
  /* f92dc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f92e0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020644));
  fn1_bd950(c);
  /* f92e4: cbnz x0, #0xf9328 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9328;
  /* f92e8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* f92ec: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* f92f0: b #0xf9320 */
  goto L_f9320;
L_f92f4:;
  /* f92f4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f92f8: b #0xf9328 */
  goto L_f9328;
  /* f92fc: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* f9300: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* f9304: b.eq #0xf9328 */
  if (ARC_COND(c, 0)) goto L_f9328;
  /* f9308: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f930c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f9310: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020692));
  fn1_bd950(c);
  /* f9314: cbnz x0, #0xf9328 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f9328;
  /* f9318: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f931c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
L_f9320:;
  /* f9320: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f9324: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020712));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f9328:;
  /* f9328: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f932c: bl #0x1436a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020720));
  fn1_1436a0(c);
  /* f9330: b #0xf9338 */
  goto L_f9338;
  /* f9334: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
L_f9338:;
  /* f9338: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f933c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020736));
  fn1_142548(c);
  /* f9340: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f9344: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f9348: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f934c: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* f9350: ldrb w10, [x8, #0x24] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f9354: orr w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(1)));
  /* f9358: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* f935c: tbnz w10, #0, #0xf9368 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_f9368;
  /* f9360: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020772));
  fn1_142980(c);
  /* f9364: b #0xf9298 */
  goto L_f9298;
L_f9368:;
  /* f9368: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020780));
  fn1_1429b0(c);
  /* f936c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f9370: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020788));
  fn1_142980(c);
  /* f9374: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f9378: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020796));
  fn1_9cc20(c);
  /* f937c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1020800));
  fn1_a1454(c);
}

void fn1_fd83c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038966332));
  /* fd83c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fd840: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fd844: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fd848: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fd84c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fd850: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fd854: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fd858: ldr x8, [x8, #0xb18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2840))));
  /* fd85c: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* fd860: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* fd864: str x9, [x0], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* fd868: str x8, [x20, #0xb8]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(184));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(184));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* fd86c: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038448));
  fn1_1436d0(c);
  /* fd870: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fd874: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1038456));
  fn1_1433b8(c);
  /* fd878: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fd87c: mov w1, #0x150 */
  ARC_W_W(c, 1, UINT64_C(336));
  /* fd880: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fd884: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fd888: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fd88c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_105990(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038999440));
  /* 105990: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 105994: sub sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(480)));
  /* 105998: stp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10599c: stp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 1059a0: stp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 1059a4: stp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1059a8: stp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1059ac: stp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1059b0: add x29, sp, #0x180 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(384)));
  /* 1059b4: ldr w8, [x3, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 3) + INT64_C(8))));
  /* 1059b8: mov w9, #0x4a */
  ARC_W_W(c, 9, UINT64_C(74));
  /* 1059bc: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 1059c0: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 1059c4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1059c8: sub x26, x29, #0xb0 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 1059cc: ands w8, w8, w9 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 8, _r); }
  /* 1059d0: str x5, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 5));
  /* 1059d4: b.eq #0x1059f8 */
  if (ARC_COND(c, 0)) goto L_1059f8;
  /* 1059d8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* 1059dc: b.eq #0x1059f0 */
  if (ARC_COND(c, 0)) goto L_1059f0;
  /* 1059e0: cmp w8, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(8));
  /* 1059e4: b.ne #0x105a00 */
  if (ARC_COND(c, 1)) goto L_105a00;
  /* 1059e8: mov w23, #0x10 */
  ARC_W_W(c, 23, UINT64_C(16));
  /* 1059ec: b #0x105a04 */
  goto L_105a04;
L_1059f0:;
  /* 1059f0: mov w23, #8 */
  ARC_W_W(c, 23, UINT64_C(8));
  /* 1059f4: b #0x105a04 */
  goto L_105a04;
L_1059f8:;
  /* 1059f8: mov w23, wzr */
  ARC_W_W(c, 23, ARC_W_R(c, 31));
  /* 1059fc: b #0x105a04 */
  goto L_105a04;
L_105a00:;
  /* 105a00: mov w23, #0xa */
  ARC_W_W(c, 23, UINT64_C(10));
L_105a04:;
  /* 105a04: sub x1, x29, #0x74 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 105a08: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 105a0c: str x4, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 4));
  /* 105a10: sub x27, x29, #0x74 */
  ARC_X_W(c, 27, (ARC_X_R(c, 29) - UINT64_C(116)));
  /* 105a14: bl #0x136534 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071640));
  fn1_136534(c);
  /* 105a18: sub x8, x29, #0x90 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 105a1c: sub x1, x29, #0xc */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* 105a20: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 105a24: bl #0x1366c4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071656));
  fn1_1366c4(c);
  /* 105a28: stp xzr, xzr, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 105a2c: str xzr, [x26, #0x18] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(24)), ARC_X_R(c, 31));
  /* 105a30: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 105a34: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* 105a38: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 105a3c: sub x20, x29, #0xa8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 105a40: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071684));
  fn1_142d10(c);
  /* 105a44: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105a48: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105a4c: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 105a50: orr x28, x20, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* 105a54: add x22, sp, #0x28 */
  ARC_X_W(c, 22, ((c)->sp + UINT64_C(40)));
  /* 105a58: str x10, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 10));
  /* 105a5c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 105a60: str wzr, [sp, #0x24] */
  arc_st32(((c)->sp + INT64_C(36)), ARC_W_R(c, 31));
  /* 105a64: csinc x24, x9, x20, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 20)) + 1)));
  /* 105a68: mov w20, #0x16 */
  ARC_W_W(c, 20, UINT64_C(22));
  /* 105a6c: str x24, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 24));
  /* 105a70: b #0x105a7c */
  goto L_105a7c;
L_105a74:;
  /* 105a74: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 105a78: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
L_105a7c:;
  /* 105a7c: cbz x19, #0x105a94 */
  if ((ARC_X_R(c, 19)) == 0) goto L_105a94;
  /* 105a80: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105a84: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 105a88: b.eq #0x105aa0 */
  if (ARC_COND(c, 0)) goto L_105aa0;
  /* 105a8c: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105a90: b #0x105ab0 */
  goto L_105ab0;
L_105a94:;
  /* 105a94: cbz x21, #0x105c4c */
  if ((ARC_X_R(c, 21)) == 0) goto L_105c4c;
  /* 105a98: mov w25, #1 */
  ARC_W_W(c, 25, UINT64_C(1));
  /* 105a9c: b #0x105ac4 */
  goto L_105ac4;
L_105aa0:;
  /* 105aa0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 105aa4: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 105aa8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105aac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071792));
  arc_dispatch(c, ARC_X_R(c, 8));
L_105ab0:;
  /* 105ab0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105ab4: cset w25, eq */
  ARC_W_W(c, 25, (ARC_COND(c, 0) ? 1 : 0));
  /* 105ab8: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 105abc: cbz x21, #0x105b00 */
  if ((ARC_X_R(c, 21)) == 0) goto L_105b00;
  /* 105ac0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_105ac4:;
  /* 105ac4: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105ac8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 105acc: b.eq #0x105ad8 */
  if (ARC_COND(c, 0)) goto L_105ad8;
  /* 105ad0: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105ad4: b #0x105ae8 */
  goto L_105ae8;
L_105ad8:;
  /* 105ad8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 105adc: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 105ae0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 105ae4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071848));
  arc_dispatch(c, ARC_X_R(c, 8));
L_105ae8:;
  /* 105ae8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105aec: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 105af0: csel x21, xzr, x21, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 21)));
  /* 105af4: cmp w25, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 25), ARC_W_R(c, 8));
  /* 105af8: b.ne #0x105b08 */
  if (ARC_COND(c, 1)) goto L_105b08;
  /* 105afc: b #0x105c58 */
  goto L_105c58;
L_105b00:;
  /* 105b00: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105b04: b.eq #0x105c54 */
  if (ARC_COND(c, 0)) goto L_105c54;
L_105b08:;
  /* 105b08: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105b0c: ldr x9, [x26, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(16))));
  /* 105b10: ldr x11, [x26] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 26)));
  /* 105b14: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 105b18: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 105b1c: csel x25, x10, x9, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 105b20: add x9, x24, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 105b24: cmp x11, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 9));
  /* 105b28: b.ne #0x105be0 */
  if (ARC_COND(c, 1)) goto L_105be0;
  /* 105b2c: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 105b30: b.lt #0x105b48 */
  if (ARC_COND(c, 11)) goto L_105b48;
  /* 105b34: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 105b38: mov x1, x25 */
  ARC_X_W(c, 1, ARC_X_R(c, 25));
  /* 105b3c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 105b40: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1071940));
  fn1_142d10(c);
  /* 105b44: b #0x105b6c */
  goto L_105b6c;
L_105b48:;
  /* 105b48: lsl x9, x25, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(1)) & 63)));
  /* 105b4c: tbnz w8, #0, #0x105b60 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_105b60;
  /* 105b50: lsl w8, w9, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(1)) & 31)));
  /* 105b54: sturb w8, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 8));
  /* 105b58: mov x8, x28 */
  ARC_X_W(c, 8, ARC_X_R(c, 28));
  /* 105b5c: b #0x105b68 */
  goto L_105b68;
L_105b60:;
  /* 105b60: ldr x8, [x26, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105b64: str x9, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 9));
L_105b68:;
  /* 105b68: strb wzr, [x8, x9] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 9)), ARC_W_R(c, 31));
L_105b6c:;
  /* 105b6c: ldp x9, x10, [x26, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 26) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 105b70: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105b74: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 105b78: and x11, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 105b7c: ubfx x12, x9, #1, #7 */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* 105b80: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* 105b84: csel x8, x20, x11, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 20)) : ARC_X_R(c, 11)));
  /* 105b88: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* 105b8c: csel x10, x12, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* 105b90: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 105b94: b.ls #0x105ba8 */
  if (ARC_COND(c, 9)) goto L_105ba8;
  /* 105b98: sub x0, x29, #0xa8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(168)));
  /* 105b9c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 105ba0: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1072036));
  fn1_142d10(c);
  /* 105ba4: b #0x105bc8 */
  goto L_105bc8;
L_105ba8:;
  /* 105ba8: tbnz w9, #0, #0x105bbc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_105bbc;
  /* 105bac: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* 105bb0: sturb w9, [x29, #-0xa8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-168)), ARC_W_R(c, 9));
  /* 105bb4: mov x9, x28 */
  ARC_X_W(c, 9, ARC_X_R(c, 28));
  /* 105bb8: b #0x105bc4 */
  goto L_105bc4;
L_105bbc:;
  /* 105bbc: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105bc0: str x8, [x26, #0x10] */
  arc_st64((ARC_X_R(c, 26) + INT64_C(16)), ARC_X_R(c, 8));
L_105bc4:;
  /* 105bc4: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_105bc8:;
  /* 105bc8: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105bcc: ldr x9, [x26, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105bd0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 105bd4: csel x24, x28, x9, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 28)) : ARC_X_R(c, 9)));
  /* 105bd8: add x8, x24, x25 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 105bdc: str x8, [x26] */
  arc_st64(ARC_X_R(c, 26), ARC_X_R(c, 8));
L_105be0:;
  /* 105be0: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105be4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 105be8: b.eq #0x105bf4 */
  if (ARC_COND(c, 0)) goto L_105bf4;
  /* 105bec: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105bf0: b #0x105c04 */
  goto L_105c04;
L_105bf4:;
  /* 105bf4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 105bf8: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 105bfc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105c00: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1072132));
  arc_dispatch(c, ARC_X_R(c, 8));
L_105c04:;
  /* 105c04: ldur w5, [x29, #-0xc] */
  ARC_W_W(c, 5, arc_ld32((ARC_X_R(c, 29) + INT64_C(-12))));
  /* 105c08: sub x3, x29, #0xb0 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(176)));
  /* 105c0c: add x4, sp, #0x24 */
  ARC_X_W(c, 4, ((c)->sp + UINT64_C(36)));
  /* 105c10: sub x6, x29, #0x90 */
  ARC_X_W(c, 6, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 105c14: add x7, sp, #0x30 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(48)));
  /* 105c18: mov w1, w23 */
  ARC_W_W(c, 1, ARC_W_R(c, 23));
  /* 105c1c: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 105c20: stp x22, x27, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 105c24: bl #0x143880 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1072168));
  fn1_143880(c);
  /* 105c28: cbnz w0, #0x105c58 */
  if ((ARC_W_R(c, 0)) != 0) goto L_105c58;
  /* 105c2c: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105c30: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 105c34: b.ne #0x105a74 */
  if (ARC_COND(c, 1)) goto L_105a74;
  /* 105c38: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 105c3c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* 105c40: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105c44: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1072200));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 105c48: b #0x105a7c */
  goto L_105a7c;
L_105c4c:;
  /* 105c4c: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* 105c50: b #0x105c58 */
  goto L_105c58;
L_105c54:;
  /* 105c54: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
L_105c58:;
  /* 105c58: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105c5c: ldr x9, [x26, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 105c60: ldr x22, [sp, #0x18] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(24))));
  /* 105c64: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 105c68: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 105c6c: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 105c70: cbz x8, #0x105c94 */
  if ((ARC_X_R(c, 8)) == 0) goto L_105c94;
  /* 105c74: ldr x8, [sp, #0x28] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(40))));
  /* 105c78: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 105c7c: sub x9, x8, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 105c80: cmp x9, #0x9f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(159));
  /* 105c84: b.gt #0x105c94 */
  if (ARC_COND(c, 12)) goto L_105c94;
  /* 105c88: ldr w9, [sp, #0x24] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(36))));
  /* 105c8c: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 105c90: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
L_105c94:;
  /* 105c94: ldr x1, [x26] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 26)));
  /* 105c98: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 105c9c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 105ca0: mov w3, w23 */
  ARC_W_W(c, 3, ARC_W_R(c, 23));
  /* 105ca4: bl #0x135bec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1072296));
  fn1_135bec(c);
  /* 105ca8: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105cac: ldr x12, [sp, #0x28] */
  ARC_X_W(c, 12, arc_ld64(((c)->sp + INT64_C(40))));
  /* 105cb0: add x11, sp, #0x30 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(48)));
  /* 105cb4: ldr x8, [x26, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 105cb8: lsr x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* 105cbc: ands w13, w10, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 13, _r); }
  /* 105cc0: sub x11, x12, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* 105cc4: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* 105cc8: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 105ccc: cmp x11, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(5));
  /* 105cd0: strh w0, [x9] */
  arc_st16(ARC_X_R(c, 9), ARC_W_R(c, 0));
  /* 105cd4: b.lt #0x105e34 */
  if (ARC_COND(c, 11)) goto L_105e34;
  /* 105cd8: cbz x8, #0x105e34 */
  if ((ARC_X_R(c, 8)) == 0) goto L_105e34;
  /* 105cdc: sub x8, x12, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* 105ce0: add x9, sp, #0x30 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(48)));
  /* 105ce4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 105ce8: cset w11, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? 1 : 0));
  /* 105cec: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* 105cf0: b.eq #0x105da0 */
  if (ARC_COND(c, 0)) goto L_105da0;
  /* 105cf4: cbz w11, #0x105da0 */
  if ((ARC_W_R(c, 11)) == 0) goto L_105da0;
  /* 105cf8: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 105cfc: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 105d00: add x11, x10, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 105d04: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 105d08: csel x13, x14, x11, hi */
  ARC_X_W(c, 13, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 105d0c: sub x13, x13, #4 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(4)));
  /* 105d10: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 105d14: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 105d18: cmp x13, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 10));
  /* 105d1c: sub x15, x13, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* 105d20: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 105d24: cinc x13, x15, ne */
  ARC_X_W(c, 13, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 105d28: cmp x13, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(19));
  /* 105d2c: b.lo #0x105d74 */
  if (ARC_COND(c, 3)) goto L_105d74;
  /* 105d30: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 105d34: csel x14, x14, x11, hi */
  ARC_X_W(c, 14, (ARC_COND(c, 8) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* 105d38: sub x14, x14, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(4)));
  /* 105d3c: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 105d40: cinc x15, x10, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) + 1 : (ARC_X_R(c, 10))));
  /* 105d44: cmp x14, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 10));
  /* 105d48: sub x15, x14, x15 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* 105d4c: lsr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63)));
  /* 105d50: cinc x14, x15, ne */
  ARC_X_W(c, 14, (ARC_COND(c, 1) ? (ARC_X_R(c, 15)) + 1 : (ARC_X_R(c, 15))));
  /* 105d54: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 105d58: b.hs #0x105f24 */
  if (ARC_COND(c, 2)) goto L_105f24;
  /* 105d5c: lsl x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 105d60: sub x15, x12, x14 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 14)));
  /* 105d64: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* 105d68: sub x14, x15, #4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* 105d6c: cmp x14, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 11));
  /* 105d70: b.hs #0x105f24 */
  if (ARC_COND(c, 2)) goto L_105f24;
L_105d74:;
  /* 105d74: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
L_105d78:;
  /* 105d78: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
L_105d7c:;
  /* 105d7c: ldr w12, [x11] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 11)));
  /* 105d80: ldur w13, [x10, #-4] */
  ARC_W_W(c, 13, arc_ld32((ARC_X_R(c, 10) + INT64_C(-4))));
  /* 105d84: stur w12, [x10, #-4] */
  arc_st32((ARC_X_R(c, 10) + INT64_C(-4)), ARC_W_R(c, 12));
  /* 105d88: str w13, [x11], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(-4));
    arc_st32(_a, ARC_W_R(c, 13));
  }
  /* 105d8c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 105d90: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 105d94: b.lo #0x105d7c */
  if (ARC_COND(c, 3)) goto L_105d7c;
L_105d98:;
  /* 105d98: ldurb w10, [x29, #-0x90] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105d9c: and w13, w10, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 10) & UINT64_C(1)));
L_105da0:;
  /* 105da0: ldr x11, [x26, #0x30] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 105da4: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 105da8: sub x12, x29, #0x90 */
  ARC_X_W(c, 12, (ARC_X_R(c, 29) - UINT64_C(144)));
  /* 105dac: csinc x11, x11, x12, ne */
  ARC_X_W(c, 11, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 12)) + 1)));
  /* 105db0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 105db4: b.hs #0x105e0c */
  if (ARC_COND(c, 2)) goto L_105e0c;
  /* 105db8: lsr w9, w10, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 10)) >> ((UINT64_C(1)) & 31)));
  /* 105dbc: ldr x10, [x26, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 26) + INT64_C(40))));
  /* 105dc0: cmp w13, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(0));
  /* 105dc4: csel x9, x9, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 105dc8: add x10, sp, #0x30 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(48)));
  /* 105dcc: add x9, x11, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 11) + ARC_X_R(c, 9)));
  /* 105dd0: b #0x105dec */
  goto L_105dec;
L_105dd4:;
  /* 105dd4: sub x12, x9, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) - ARC_X_R(c, 11)));
  /* 105dd8: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* 105ddc: cmp x12, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(1));
  /* 105de0: cinc x11, x11, gt */
  ARC_X_W(c, 11, (ARC_COND(c, 12) ? (ARC_X_R(c, 11)) + 1 : (ARC_X_R(c, 11))));
  /* 105de4: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* 105de8: b.hs #0x105e0c */
  if (ARC_COND(c, 2)) goto L_105e0c;
L_105dec:;
  /* 105dec: ldrb w12, [x11] */
  ARC_W_W(c, 12, arc_ld8(ARC_X_R(c, 11)));
  /* 105df0: cbz w12, #0x105dd4 */
  if ((ARC_W_R(c, 12)) == 0) goto L_105dd4;
  /* 105df4: cmp w12, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(255));
  /* 105df8: b.eq #0x105dd4 */
  if (ARC_COND(c, 0)) goto L_105dd4;
  /* 105dfc: ldr w13, [x10] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 10)));
  /* 105e00: cmp w13, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 12));
  /* 105e04: b.eq #0x105dd4 */
  if (ARC_COND(c, 0)) goto L_105dd4;
  /* 105e08: b #0x105e2c */
  goto L_105e2c;
L_105e0c:;
  /* 105e0c: ldrb w9, [x11] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 11)));
  /* 105e10: cbz w9, #0x105e34 */
  if ((ARC_W_R(c, 9)) == 0) goto L_105e34;
  /* 105e14: cmp w9, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(255));
  /* 105e18: b.eq #0x105e34 */
  if (ARC_COND(c, 0)) goto L_105e34;
  /* 105e1c: ldr w8, [x8] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 8)));
  /* 105e20: sub w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* 105e24: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* 105e28: b.lo #0x105e34 */
  if (ARC_COND(c, 3)) goto L_105e34;
L_105e2c:;
  /* 105e2c: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 105e30: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_105e34:;
  /* 105e34: cbz x19, #0x105e4c */
  if ((ARC_X_R(c, 19)) == 0) goto L_105e4c;
  /* 105e38: ldp x8, x9, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105e3c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 105e40: b.eq #0x105e58 */
  if (ARC_COND(c, 0)) goto L_105e58;
  /* 105e44: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105e48: b #0x105e68 */
  goto L_105e68;
L_105e4c:;
  /* 105e4c: cbz x21, #0x105ec0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_105ec0;
  /* 105e50: mov w20, #1 */
  ARC_W_W(c, 20, UINT64_C(1));
  /* 105e54: b #0x105e7c */
  goto L_105e7c;
L_105e58:;
  /* 105e58: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 105e5c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 105e60: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105e64: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1072744));
  arc_dispatch(c, ARC_X_R(c, 8));
L_105e68:;
  /* 105e68: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105e6c: cset w20, eq */
  ARC_W_W(c, 20, (ARC_COND(c, 0) ? 1 : 0));
  /* 105e70: csel x8, xzr, x19, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
  /* 105e74: cbz x21, #0x105eb4 */
  if ((ARC_X_R(c, 21)) == 0) goto L_105eb4;
  /* 105e78: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
L_105e7c:;
  /* 105e7c: ldp x8, x9, [x21, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 105e80: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 105e84: b.eq #0x105e90 */
  if (ARC_COND(c, 0)) goto L_105e90;
  /* 105e88: ldr w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* 105e8c: b #0x105ea0 */
  goto L_105ea0;
L_105e90:;
  /* 105e90: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 105e94: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 105e98: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 105e9c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1072800));
  arc_dispatch(c, ARC_X_R(c, 8));
L_105ea0:;
  /* 105ea0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105ea4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 105ea8: eor w8, w20, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) ^ ARC_W_R(c, 8)));
  /* 105eac: tbz w8, #0, #0x105ec0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_105ec0;
  /* 105eb0: b #0x105ecc */
  goto L_105ecc;
L_105eb4:;
  /* 105eb4: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 105eb8: b.ne #0x105ecc */
  if (ARC_COND(c, 1)) goto L_105ecc;
  /* 105ebc: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_105ec0:;
  /* 105ec0: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* 105ec4: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 105ec8: str w8, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 8));
L_105ecc:;
  /* 105ecc: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105ed0: tbz w8, #0, #0x105ee4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_105ee4;
  /* 105ed4: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 105ed8: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105edc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105ee0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1072868));
  fn1_142608(c);
L_105ee4:;
  /* 105ee4: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105ee8: tbz w8, #0, #0x105efc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_105efc;
  /* 105eec: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 105ef0: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 105ef4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105ef8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1072892));
  fn1_142608(c);
L_105efc:;
  /* 105efc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105f00: ldp x20, x19, [sp, #0x1d0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(464));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 105f04: ldp x22, x21, [sp, #0x1c0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(448));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 105f08: ldp x24, x23, [sp, #0x1b0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(432));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 105f0c: ldp x26, x25, [sp, #0x1a0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(416));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 105f10: ldp x28, x27, [sp, #0x190] */
  { const uint64_t _pa = ((c)->sp + INT64_C(400));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 105f14: ldp x29, x30, [sp, #0x180] */
  { const uint64_t _pa = ((c)->sp + INT64_C(384));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 105f18: add sp, sp, #0x1e0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(480)));
  /* 105f1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 105f20: ret  */
  return;
L_105f24:;
  /* 105f24: add x13, x13, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(1)));
  /* 105f28: add x15, sp, #0x30 */
  ARC_X_W(c, 15, ((c)->sp + UINT64_C(48)));
  /* 105f2c: sub x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(16)));
  /* 105f30: and x14, x13, #0x7ffffffffffffff8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) & UINT64_C(9223372036854775800)));
  /* 105f34: lsl x10, x14, #2 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 14)) << ((UINT64_C(2)) & 63)));
  /* 105f38: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* 105f3c: sub x11, x8, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 10)));
  /* 105f40: add x10, x15, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 15) + ARC_X_R(c, 10)));
  /* 105f44: add x15, x15, #0x10 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(16)));
L_105f48:;
  /* 105f48: ldp q1, q0, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 105f4c: sub x16, x16, #8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) - UINT64_C(8)));
  /* 105f50: ldp q2, q3, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 105f54: rev64 v0.4s, v0.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[0].u32[1];
    _t.u32[1] = (c)->q[0].u32[0];
    _t.u32[2] = (c)->q[0].u32[3];
    _t.u32[3] = (c)->q[0].u32[2];
    (c)->q[0] = _t; }
  /* 105f58: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* 105f5c: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* 105f60: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* 105f64: ext v0.16b, v0.16b, v0.16b, #8 */
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
  /* 105f68: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* 105f6c: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* 105f70: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* 105f74: stp q0, q1, [x15, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 15) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 105f78: add x15, x15, #0x20 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(32)));
  /* 105f7c: stp q3, q2, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[2].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[2].u64[1]);
  }
  /* 105f80: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* 105f84: cbnz x16, #0x105f48 */
  if ((ARC_X_R(c, 16)) != 0) goto L_105f48;
  /* 105f88: cmp x13, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 14));
  /* 105f8c: b.eq #0x105d98 */
  if (ARC_COND(c, 0)) goto L_105d98;
  /* 105f90: b #0x105d78 */
  goto L_105d78;
  /* 105f94: b #0x105fa0 */
  goto L_105fa0;
  /* 105f98: b #0x105fa0 */
  goto L_105fa0;
  /* 105f9c: b #0x105fa0 */
  goto L_105fa0;
L_105fa0:;
  /* 105fa0: ldurb w8, [x29, #-0xa8] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-168))));
  /* 105fa4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 105fa8: tbnz w8, #0, #0x105fbc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_105fbc;
  /* 105fac: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105fb0: tbnz w8, #0, #0x105fd4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_105fd4;
L_105fb4:;
  /* 105fb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105fb8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073084));
  fn1_9cc20(c);
L_105fbc:;
  /* 105fbc: ldr x8, [x26, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(8))));
  /* 105fc0: ldr x0, [x26, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(24))));
  /* 105fc4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105fc8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073100));
  fn1_142608(c);
  /* 105fcc: ldurb w8, [x29, #-0x90] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-144))));
  /* 105fd0: tbz w8, #0, #0x105fb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_105fb4;
L_105fd4:;
  /* 105fd4: ldr x8, [x26, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 26) + INT64_C(32))));
  /* 105fd8: ldr x0, [x26, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 26) + INT64_C(48))));
  /* 105fdc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 105fe0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073124));
  fn1_142608(c);
  /* 105fe4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 105fe8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1073132));
  fn1_9cc20(c);
}

void fn1_111718(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039047960));
  /* 111718: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11171c: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 111720: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 111724: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 111728: adrp x8, #0x75000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(479232)));
  /* 11172c: add x8, x8, #0xb04 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2820)));
  /* 111730: mov x6, sp */
  ARC_X_W(c, 6, (c)->sp);
  /* 111734: ldp q0, q1, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 111738: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 11173c: add x7, x8, #0x20 */
  ARC_X_W(c, 7, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* 111740: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 111744: bl #0x1439a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1120072));
  fn1_1439a0(c);
  /* 111748: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11174c: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 111750: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 111754: ret  */
  return;
}

void fn1_113dd8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057880));
  /* 113dd8: bti c */
  /* bti: no architectural effect here */
  /* 113ddc: ldrb w0, [x0, #0x10] */
  ARC_W_W(c, 0, arc_ld8((ARC_X_R(c, 0) + INT64_C(16))));
  /* 113de0: ret  */
  return;
}

void fn1_11adb4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039086516));
  /* 11adb4: bti c */
  /* bti: no architectural effect here */
  /* 11adb8: b #0x143fe8 */
  fn1_143fe8(c); return;
}

void fn1_1258dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039130332));
  /* 1258dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1258e0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 1258e4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1258e8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1258ec: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 1258f0: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1258f4: sub x9, x2, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* 1258f8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 1258fc: ldr x8, [x8, #0xc60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3168))));
  /* 125900: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 125904: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 125908: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12590c: stp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 125910: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 125914: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 125918: ldr x9, [x1, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* 12591c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 125920: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 125924: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202472));
  fn1_1441e0(c);
  /* 125928: str x0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 0));
  /* 12592c: cbz x0, #0x125944 */
  if ((ARC_X_R(c, 0)) == 0) goto L_125944;
  /* 125930: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 125934: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 125938: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 12593c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 125940: ret  */
  return;
L_125944:;
  /* 125944: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 125948: add x0, x0, #0x6e1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1761)));
  /* 12594c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 125950: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 125954: add x19, sp, #8 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(8)));
  /* 125958: bl #0x142de8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202524));
  fn1_142de8(c);
  /* 12595c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125960: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125964: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 125968: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 12596c: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202544));
  fn1_142c98(c);
  /* 125970: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 125974: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 125978: tbz w8, #0, #0x12598c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12598c;
  /* 12597c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 125980: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 125984: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 125988: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202572));
  fn1_142608(c);
L_12598c:;
  /* 12598c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 125990: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1202580));
  fn1_9cc20(c);
}

void fn1_127e58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039139928));
  /* 127e58: bti c */
  /* bti: no architectural effect here */
  /* 127e5c: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 127e60: cmp x8, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 4));
  /* 127e64: csel x0, x8, x4, lo */
  ARC_X_W(c, 0, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 4)));
  /* 127e68: ret  */
  return;
}

void fn1_12a174(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039148916));
  /* 12a174: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12a178: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 12a17c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12a180: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12a184: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 12a188: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 12a18c: mov x9, x6 */
  ARC_X_W(c, 9, ARC_X_R(c, 6));
  /* 12a190: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 12a194: ldr x6, [x0, #0x10] */
  ARC_X_W(c, 6, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12a198: ldr w7, [x0, #0x18] */
  ARC_W_W(c, 7, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a19c: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 12a1a0: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 12a1a4: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 12a1a8: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12a1ac: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 12a1b0: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 12a1b4: mov x4, x9 */
  ARC_X_W(c, 4, ARC_X_R(c, 9));
  /* 12a1b8: bl #0x129370 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1221052));
  fn1_129370(c);
  /* 12a1bc: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 12a1c0: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12a1c4: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 12a1c8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12a1cc: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12a1d0: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 12a1d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12a1d8: ret  */
  return;
}

void fn1_12b9bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155132));
  /* 12b9bc: bti c */
  /* bti: no architectural effect here */
  /* 12b9c0: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12b9c4: mov w8, #7 */
  ARC_W_W(c, 8, UINT64_C(7));
  /* 12b9c8: tst w9, #4 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(4)));
  /* 12b9cc: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 12b9d0: csel w0, w9, w8, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12b9d4: ret  */
  return;
}

void fn1_12e4f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039166200));
  /* 12e4f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12e4fc: sub sp, sp, #0x140 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(320)));
  /* 12e500: stp x29, x30, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12e504: stp x28, x27, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 12e508: stp x26, x25, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 12e50c: stp x24, x23, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 12e510: stp x22, x21, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 12e514: stp x20, x19, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12e518: add x29, sp, #0xe0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(224)));
  /* 12e51c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* 12e520: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 12e524: sub x8, x29, #0x50 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 12e528: ldr q0, [x9, #0xad0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2768))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2768)) + 8));
  /* 12e52c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* 12e530: stp xzr, xzr, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12e534: str xzr, [x8, #0x30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(48)), ARC_X_R(c, 31));
  /* 12e538: ldr x4, [x0] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 0)));
  /* 12e53c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 12e540: stur q0, [x29, #-0x50] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-80)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-80)) + 8, (c)->q[0].u64[1]);
  /* 12e544: ldr q0, [x9, #0xbe0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3040))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3040)) + 8));
  /* 12e548: mov w27, w1 */
  ARC_W_W(c, 27, ARC_W_R(c, 1));
  /* 12e54c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 12e550: strb w1, [sp, #0x29] */
  arc_st8(((c)->sp + INT64_C(41)), ARC_W_R(c, 1));
  /* 12e554: add x0, sp, #0x2c */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(44)));
  /* 12e558: str q0, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 12e55c: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
  /* 12e560: add x2, sp, #0x28 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(40)));
  /* 12e564: stur w8, [x29, #-0x30] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-48)), ARC_W_R(c, 8));
  /* 12e568: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 12e56c: sub x3, x29, #0x50 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(80)));
  /* 12e570: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 12e574: strb wzr, [sp, #0x2a] */
  arc_st8(((c)->sp + INT64_C(42)), ARC_W_R(c, 31));
  /* 12e578: strb w8, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 8));
  /* 12e57c: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238400));
  fn1_1444b0(c);
  /* 12e580: stp xzr, xzr, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 12e584: str xzr, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 31));
  /* 12e588: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 12e58c: cbz x0, #0x12ea9c */
  if ((ARC_X_R(c, 0)) == 0) goto L_12ea9c;
  /* 12e590: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12e594: add x8, sp, #0x2c */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(44)));
  /* 12e598: add x24, x21, #8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* 12e59c: add x25, x21, #0x158 */
  ARC_X_W(c, 25, (ARC_X_R(c, 21) + UINT64_C(344)));
  /* 12e5a0: add x26, x21, #0x398 */
  ARC_X_W(c, 26, (ARC_X_R(c, 21) + UINT64_C(920)));
  /* 12e5a4: add x23, x8, x9 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 12e5a8: add x8, x19, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(1)));
  /* 12e5ac: str x8, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 8));
  /* 12e5b0: and w8, w27, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 27) & UINT64_C(255)));
  /* 12e5b4: add x27, sp, #0x2c */
  ARC_X_W(c, 27, ((c)->sp + UINT64_C(44)));
  /* 12e5b8: str w8, [sp, #0xc] */
  arc_st32(((c)->sp + INT64_C(12)), ARC_W_R(c, 8));
  /* 12e5bc: b #0x12e5d0 */
  goto L_12e5d0;
L_12e5c0:;
  /* 12e5c0: ldr x28, [sp, #0x20] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(32))));
L_12e5c4:;
  /* 12e5c4: cmp x28, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 23));
  /* 12e5c8: mov x27, x28 */
  ARC_X_W(c, 27, ARC_X_R(c, 28));
  /* 12e5cc: b.eq #0x12ea9c */
  if (ARC_COND(c, 0)) goto L_12ea9c;
L_12e5d0:;
  /* 12e5d0: ldrsb x8, [x27] */
  ARC_X_W(c, 8, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 27))));
  /* 12e5d4: tbnz x8, #0x3f, #0x12e5e4 */
  if (((ARC_X_R(c, 8)) >> 63 & 1) != 0) goto L_12e5e4;
  /* 12e5d8: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 12e5dc: ldr x8, [x9, x8, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 12e5e0: tbnz w8, #0, #0x12e700 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_12e700;
L_12e5e4:;
  /* 12e5e4: str x27, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 27));
  /* 12e5e8: str wzr, [sp, #0x1c] */
  arc_st32(((c)->sp + INT64_C(28)), ARC_W_R(c, 31));
  /* 12e5ec: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 12e5f0: add x5, sp, #0x1c */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(28)));
  /* 12e5f4: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 12e5f8: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 12e5fc: mov x3, x25 */
  ARC_X_W(c, 3, ARC_X_R(c, 25));
  /* 12e600: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 12e604: bl #0x12eaf0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238536));
  fn1_12eaf0(c);
  /* 12e608: sub x22, x0, x24 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) - ARC_X_R(c, 24)));
  /* 12e60c: cmp x22, #0x14f */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(335));
  /* 12e610: b.gt #0x12e63c */
  if (ARC_COND(c, 12)) goto L_12e63c;
  /* 12e614: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e618: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e61c: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238560));
  fn1_142ba8(c);
  /* 12e620: cmp x22, #0xa8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(168));
  /* 12e624: mov w8, #0x61 */
  ARC_W_W(c, 8, UINT64_C(97));
  /* 12e628: mov w9, #0x41 */
  ARC_W_W(c, 9, UINT64_C(65));
  /* 12e62c: csel w1, w9, w8, lt */
  ARC_W_W(c, 1, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12e630: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e634: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238584));
  fn1_142ba8(c);
  /* 12e638: b #0x12e5c0 */
  goto L_12e5c0;
L_12e63c:;
  /* 12e63c: str x27, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 27));
  /* 12e640: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 12e644: add x5, sp, #0x1c */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(28)));
  /* 12e648: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 12e64c: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* 12e650: mov x3, x26 */
  ARC_X_W(c, 3, ARC_X_R(c, 26));
  /* 12e654: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 12e658: bl #0x12eaf0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238620));
  fn1_12eaf0(c);
  /* 12e65c: sub x22, x0, x25 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) - ARC_X_R(c, 25)));
  /* 12e660: cmp x22, #0x23f */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(575));
  /* 12e664: b.gt #0x12e748 */
  if (ARC_COND(c, 12)) goto L_12e748;
  /* 12e668: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e66c: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e670: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238644));
  fn1_142ba8(c);
  /* 12e674: cmp x22, #0x120 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(288));
  /* 12e678: mov w8, #0x62 */
  ARC_W_W(c, 8, UINT64_C(98));
  /* 12e67c: mov w9, #0x42 */
  ARC_W_W(c, 9, UINT64_C(66));
  /* 12e680: csel w1, w9, w8, lt */
  ARC_W_W(c, 1, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* 12e684: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e688: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238668));
  fn1_142ba8(c);
  /* 12e68c: ldr w8, [sp, #0xc] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(12))));
  /* 12e690: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 12e694: b.ne #0x12e5c0 */
  if (ARC_COND(c, 1)) goto L_12e5c0;
  /* 12e698: asr x8, x22, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(3)) & 63))));
  /* 12e69c: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 12e6a0: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 12e6a4: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 12e6a8: mov w9, #0x18 */
  ARC_W_W(c, 9, UINT64_C(24));
  /* 12e6ac: madd x8, x8, x9, x25 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 25)) + ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9)))));
  /* 12e6b0: ldrb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 12e6b4: ldr x10, [x8, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 12e6b8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 12e6bc: csinc x8, x10, x8, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* 12e6c0: ldrsb x8, [x8] */
  ARC_X_W(c, 8, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 8))));
  /* 12e6c4: tbnz x8, #0x3f, #0x12e5c0 */
  if (((ARC_X_R(c, 8)) >> 63 & 1) != 0) goto L_12e5c0;
  /* 12e6c8: ldr x9, [x20, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 12e6cc: ldr x8, [x9, x8, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 3))));
  /* 12e6d0: tbz w8, #6, #0x12e5c0 */
  if (((ARC_W_R(c, 8)) >> 6 & 1) == 0) goto L_12e5c0;
  /* 12e6d4: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 12e6d8: ldp x10, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 12e6dc: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 12e6e0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12e6e4: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 12e6e8: csel x8, x8, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* 12e6ec: csel x9, x11, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 12e6f0: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* 12e6f4: mov w9, #0x6d */
  ARC_W_W(c, 9, UINT64_C(109));
  /* 12e6f8: sturb w9, [x8, #-1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(-1)), ARC_W_R(c, 9));
  /* 12e6fc: b #0x12e5c0 */
  goto L_12e5c0;
L_12e700:;
  /* 12e700: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e704: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 12e708: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238796));
  fn1_142ba8(c);
  /* 12e70c: ldr x10, [sp, #0x10] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(16))));
  /* 12e710: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 12e714: add x9, sp, #0x2c */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(44)));
  /* 12e718: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* 12e71c: add x10, x27, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 27) + UINT64_C(1)));
L_12e720:;
  /* 12e720: cmp x10, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 23));
  /* 12e724: b.eq #0x12e7f8 */
  if (ARC_COND(c, 0)) goto L_12e7f8;
  /* 12e728: mov x28, x10 */
  ARC_X_W(c, 28, ARC_X_R(c, 10));
  /* 12e72c: ldrsb x10, [x10] */
  ARC_X_W(c, 10, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 10))));
  /* 12e730: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 12e734: tbnz x10, #0x3f, #0x12e800 */
  if (((ARC_X_R(c, 10)) >> 63 & 1) != 0) goto L_12e800;
  /* 12e738: ldr x11, [x8, x10, lsl #3] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* 12e73c: add x10, x28, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* 12e740: tbnz w11, #0, #0x12e720 */
  if (((ARC_W_R(c, 11)) >> 0 & 1) != 0) goto L_12e720;
  /* 12e744: b #0x12e5c4 */
  goto L_12e5c4;
L_12e748:;
  /* 12e748: ldrb w8, [x21, #0x398] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(920))));
  /* 12e74c: ldrb w9, [x21, #0x3b0] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 21) + INT64_C(944))));
  /* 12e750: ldr x10, [x21, #0x3a0] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 21) + INT64_C(928))));
  /* 12e754: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 12e758: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 12e75c: ldr x8, [x21, #0x3b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(952))));
  /* 12e760: lsr x12, x9, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* 12e764: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 12e768: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 12e76c: csel x8, x12, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 8)));
  /* 12e770: cmn x10, x8 */
  (void)arc_add64(c, ARC_X_R(c, 10), ARC_X_R(c, 8), 0);
  /* 12e774: b.eq #0x12e7c0 */
  if (ARC_COND(c, 0)) goto L_12e7c0;
  /* 12e778: str x27, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 27));
  /* 12e77c: add x0, sp, #0x20 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(32)));
  /* 12e780: add x3, x21, #0x3c8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 21) + UINT64_C(968)));
  /* 12e784: add x5, sp, #0x1c */
  ARC_X_W(c, 5, ((c)->sp + UINT64_C(28)));
  /* 12e788: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 12e78c: mov x2, x26 */
  ARC_X_W(c, 2, ARC_X_R(c, 26));
  /* 12e790: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 12e794: bl #0x12eaf0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238936));
  fn1_12eaf0(c);
  /* 12e798: sub x8, x0, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 26)));
  /* 12e79c: cmp x8, #0x2f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(47));
  /* 12e7a0: b.gt #0x12e7c0 */
  if (ARC_COND(c, 12)) goto L_12e7c0;
  /* 12e7a4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e7a8: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e7ac: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238960));
  fn1_142ba8(c);
  /* 12e7b0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e7b4: mov w1, #0x70 */
  ARC_W_W(c, 1, UINT64_C(112));
  /* 12e7b8: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1238972));
  fn1_142ba8(c);
  /* 12e7bc: b #0x12e5c0 */
  goto L_12e5c0;
L_12e7c0:;
  /* 12e7c0: str x27, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 27));
  /* 12e7c4: ldrsb x1, [x27] */
  ARC_X_W(c, 1, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 27))));
  /* 12e7c8: tbnz x1, #0x3f, #0x12e808 */
  if (((ARC_X_R(c, 1)) >> 63 & 1) != 0) goto L_12e808;
  /* 12e7cc: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 12e7d0: ldr x8, [x8, x1, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 1)) << 3))));
  /* 12e7d4: tbnz w8, #6, #0x12e818 */
  if (((ARC_W_R(c, 8)) >> 6 & 1) != 0) goto L_12e818;
  /* 12e7d8: cmp w1, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(37));
  /* 12e7dc: b.ne #0x12e808 */
  if (ARC_COND(c, 1)) goto L_12e808;
  /* 12e7e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e7e4: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239016));
  fn1_142ba8(c);
  /* 12e7e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e7ec: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e7f0: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239028));
  fn1_142ba8(c);
  /* 12e7f4: b #0x12e810 */
  goto L_12e810;
L_12e7f8:;
  /* 12e7f8: mov x28, x9 */
  ARC_X_W(c, 28, ARC_X_R(c, 9));
  /* 12e7fc: b #0x12e5c4 */
  goto L_12e5c4;
L_12e800:;
  /* 12e800: mov x28, x27 */
  ARC_X_W(c, 28, ARC_X_R(c, 27));
  /* 12e804: b #0x12e5c4 */
  goto L_12e5c4;
L_12e808:;
  /* 12e808: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e80c: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239056));
  fn1_142ba8(c);
L_12e810:;
  /* 12e810: add x28, x27, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 12e814: b #0x12e5c4 */
  goto L_12e5c4;
L_12e818:;
  /* 12e818: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12e81c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 12e820: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12e824: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12e828: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239084));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12e82c: add x28, x27, #1 */
  ARC_X_W(c, 28, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 12e830: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 12e834: cmp x28, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 23));
  /* 12e838: sub w22, w8, #0x30 */
  ARC_W_W(c, 22, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 12e83c: b.eq #0x12e904 */
  if (ARC_COND(c, 0)) goto L_12e904;
  /* 12e840: ldrsb x1, [x28] */
  ARC_X_W(c, 1, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 28))));
  /* 12e844: tbnz x1, #0x3f, #0x12e90c */
  if (((ARC_X_R(c, 1)) >> 63 & 1) != 0) goto L_12e90c;
  /* 12e848: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 12e84c: ldr x8, [x8, x1, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 1)) << 3))));
  /* 12e850: tbz w8, #6, #0x12e90c */
  if (((ARC_W_R(c, 8)) >> 6 & 1) == 0) goto L_12e90c;
  /* 12e854: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12e858: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 12e85c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12e860: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12e864: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239144));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12e868: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* 12e86c: add x28, x27, #2 */
  ARC_X_W(c, 28, (ARC_X_R(c, 27) + UINT64_C(2)));
  /* 12e870: mul w8, w22, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 22)) * (uint32_t)(ARC_W_R(c, 8))));
  /* 12e874: cmp x28, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 23));
  /* 12e878: add w8, w8, w0, uxtb */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ((uint64_t)(uint8_t)(ARC_W_R(c, 0)))));
  /* 12e87c: sub w22, w8, #0x30 */
  ARC_W_W(c, 22, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 12e880: b.eq #0x12e904 */
  if (ARC_COND(c, 0)) goto L_12e904;
  /* 12e884: ldrsb x1, [x28] */
  ARC_X_W(c, 1, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 28))));
  /* 12e888: tbnz x1, #0x3f, #0x12e90c */
  if (((ARC_X_R(c, 1)) >> 63 & 1) != 0) goto L_12e90c;
  /* 12e88c: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 12e890: ldr x8, [x8, x1, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 1)) << 3))));
  /* 12e894: tbz w8, #6, #0x12e90c */
  if (((ARC_W_R(c, 8)) >> 6 & 1) == 0) goto L_12e90c;
  /* 12e898: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12e89c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 12e8a0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12e8a4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12e8a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239212));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12e8ac: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* 12e8b0: add x28, x27, #3 */
  ARC_X_W(c, 28, (ARC_X_R(c, 27) + UINT64_C(3)));
  /* 12e8b4: mul w8, w22, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 22)) * (uint32_t)(ARC_W_R(c, 8))));
  /* 12e8b8: cmp x28, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 23));
  /* 12e8bc: add w8, w8, w0, uxtb */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ((uint64_t)(uint8_t)(ARC_W_R(c, 0)))));
  /* 12e8c0: sub w22, w8, #0x30 */
  ARC_W_W(c, 22, (ARC_W_R(c, 8) - UINT64_C(48)));
  /* 12e8c4: b.eq #0x12e904 */
  if (ARC_COND(c, 0)) goto L_12e904;
  /* 12e8c8: ldrsb x1, [x28] */
  ARC_X_W(c, 1, ((int64_t)(int8_t)arc_ld8(ARC_X_R(c, 28))));
  /* 12e8cc: tbnz x1, #0x3f, #0x12e90c */
  if (((ARC_X_R(c, 1)) >> 63 & 1) != 0) goto L_12e90c;
  /* 12e8d0: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 12e8d4: ldr x8, [x8, x1, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 1)) << 3))));
  /* 12e8d8: tbz w8, #6, #0x12e90c */
  if (((ARC_W_R(c, 8)) >> 6 & 1) == 0) goto L_12e90c;
  /* 12e8dc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 12e8e0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 12e8e4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12e8e8: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 12e8ec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239280));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 12e8f0: mov w8, #0xa */
  ARC_W_W(c, 8, UINT64_C(10));
  /* 12e8f4: add x28, x27, #4 */
  ARC_X_W(c, 28, (ARC_X_R(c, 27) + UINT64_C(4)));
  /* 12e8f8: mul w8, w22, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 22)) * (uint32_t)(ARC_W_R(c, 8))));
  /* 12e8fc: add w8, w8, w0, uxtb */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + ((uint64_t)(uint8_t)(ARC_W_R(c, 0)))));
  /* 12e900: sub w22, w8, #0x30 */
  ARC_W_W(c, 22, (ARC_W_R(c, 8) - UINT64_C(48)));
L_12e904:;
  /* 12e904: cmp x28, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 23));
  /* 12e908: b.eq #0x12e974 */
  if (ARC_COND(c, 0)) goto L_12e974;
L_12e90c:;
  /* 12e90c: cmp w22, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(30));
  /* 12e910: b.le #0x12e988 */
  if (ARC_COND(c, 13)) goto L_12e988;
L_12e914:;
  /* 12e914: cmp w22, #0x3c */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(60));
  /* 12e918: b.gt #0x12e948 */
  if (ARC_COND(c, 12)) goto L_12e948;
  /* 12e91c: cmp w22, #0x1f */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(31));
  /* 12e920: b.eq #0x12ea44 */
  if (ARC_COND(c, 0)) goto L_12ea44;
  /* 12e924: cmp w22, #0x37 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(55));
  /* 12e928: b.eq #0x12ea08 */
  if (ARC_COND(c, 0)) goto L_12ea08;
  /* 12e92c: cmp w22, #0x3b */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(59));
  /* 12e930: b.ne #0x12ea74 */
  if (ARC_COND(c, 1)) goto L_12ea74;
  /* 12e934: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e938: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e93c: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239360));
  fn1_142ba8(c);
  /* 12e940: mov w1, #0x53 */
  ARC_W_W(c, 1, UINT64_C(83));
  /* 12e944: b #0x12ea68 */
  goto L_12ea68;
L_12e948:;
  /* 12e948: cmp w22, #0x3d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(61));
  /* 12e94c: b.eq #0x12ea58 */
  if (ARC_COND(c, 0)) goto L_12ea58;
  /* 12e950: cmp w22, #0x16c */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(364));
  /* 12e954: b.eq #0x12ea1c */
  if (ARC_COND(c, 0)) goto L_12ea1c;
  /* 12e958: cmp w22, #0x80d */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(2061));
  /* 12e95c: b.ne #0x12ea74 */
  if (ARC_COND(c, 1)) goto L_12ea74;
  /* 12e960: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e964: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e968: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239404));
  fn1_142ba8(c);
  /* 12e96c: mov w1, #0x59 */
  ARC_W_W(c, 1, UINT64_C(89));
  /* 12e970: b #0x12ea68 */
  goto L_12ea68;
L_12e974:;
  /* 12e974: ldr w8, [sp, #0x1c] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(28))));
  /* 12e978: orr w8, w8, #2 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(2)));
  /* 12e97c: str w8, [sp, #0x1c] */
  arc_st32(((c)->sp + INT64_C(28)), ARC_W_R(c, 8));
  /* 12e980: cmp w22, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(30));
  /* 12e984: b.gt #0x12e914 */
  if (ARC_COND(c, 12)) goto L_12e914;
L_12e988:;
  /* 12e988: cmp w22, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(10));
  /* 12e98c: b.le #0x12e9bc */
  if (ARC_COND(c, 13)) goto L_12e9bc;
  /* 12e990: cmp w22, #0xb */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(11));
  /* 12e994: b.eq #0x12ea30 */
  if (ARC_COND(c, 0)) goto L_12ea30;
  /* 12e998: cmp w22, #0xc */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(12));
  /* 12e99c: b.eq #0x12e9f4 */
  if (ARC_COND(c, 0)) goto L_12e9f4;
  /* 12e9a0: cmp w22, #0x17 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(23));
  /* 12e9a4: b.ne #0x12ea74 */
  if (ARC_COND(c, 1)) goto L_12ea74;
  /* 12e9a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e9ac: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e9b0: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239476));
  fn1_142ba8(c);
  /* 12e9b4: mov w1, #0x48 */
  ARC_W_W(c, 1, UINT64_C(72));
  /* 12e9b8: b #0x12ea68 */
  goto L_12ea68;
L_12e9bc:;
  /* 12e9bc: cmp w22, #6 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(6));
  /* 12e9c0: b.eq #0x12e9e0 */
  if (ARC_COND(c, 0)) goto L_12e9e0;
  /* 12e9c4: cmp w22, #7 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(7));
  /* 12e9c8: b.ne #0x12ea74 */
  if (ARC_COND(c, 1)) goto L_12ea74;
  /* 12e9cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e9d0: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e9d4: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239512));
  fn1_142ba8(c);
  /* 12e9d8: mov w1, #0x75 */
  ARC_W_W(c, 1, UINT64_C(117));
  /* 12e9dc: b #0x12ea68 */
  goto L_12ea68;
L_12e9e0:;
  /* 12e9e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e9e4: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e9e8: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239532));
  fn1_142ba8(c);
  /* 12e9ec: mov w1, #0x77 */
  ARC_W_W(c, 1, UINT64_C(119));
  /* 12e9f0: b #0x12ea68 */
  goto L_12ea68;
L_12e9f4:;
  /* 12e9f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12e9f8: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12e9fc: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239552));
  fn1_142ba8(c);
  /* 12ea00: mov w1, #0x6d */
  ARC_W_W(c, 1, UINT64_C(109));
  /* 12ea04: b #0x12ea68 */
  goto L_12ea68;
L_12ea08:;
  /* 12ea08: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ea0c: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12ea10: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239572));
  fn1_142ba8(c);
  /* 12ea14: mov w1, #0x4d */
  ARC_W_W(c, 1, UINT64_C(77));
  /* 12ea18: b #0x12ea68 */
  goto L_12ea68;
L_12ea1c:;
  /* 12ea1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ea20: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12ea24: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239592));
  fn1_142ba8(c);
  /* 12ea28: mov w1, #0x6a */
  ARC_W_W(c, 1, UINT64_C(106));
  /* 12ea2c: b #0x12ea68 */
  goto L_12ea68;
L_12ea30:;
  /* 12ea30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ea34: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12ea38: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239612));
  fn1_142ba8(c);
  /* 12ea3c: mov w1, #0x49 */
  ARC_W_W(c, 1, UINT64_C(73));
  /* 12ea40: b #0x12ea68 */
  goto L_12ea68;
L_12ea44:;
  /* 12ea44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ea48: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12ea4c: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239632));
  fn1_142ba8(c);
  /* 12ea50: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
  /* 12ea54: b #0x12ea68 */
  goto L_12ea68;
L_12ea58:;
  /* 12ea58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ea5c: mov w1, #0x25 */
  ARC_W_W(c, 1, UINT64_C(37));
  /* 12ea60: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239652));
  fn1_142ba8(c);
  /* 12ea64: mov w1, #0x79 */
  ARC_W_W(c, 1, UINT64_C(121));
L_12ea68:;
  /* 12ea68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ea6c: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239664));
  fn1_142ba8(c);
  /* 12ea70: b #0x12e5c4 */
  goto L_12e5c4;
L_12ea74:;
  /* 12ea74: cmp x27, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 28));
  /* 12ea78: b.eq #0x12e5c4 */
  if (ARC_COND(c, 0)) goto L_12e5c4;
L_12ea7c:;
  /* 12ea7c: ldrb w1, [x27] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 27)));
  /* 12ea80: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12ea84: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239688));
  fn1_142ba8(c);
  /* 12ea88: add x27, x27, #1 */
  ARC_X_W(c, 27, (ARC_X_R(c, 27) + UINT64_C(1)));
  /* 12ea8c: cmp x27, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 28));
  /* 12ea90: str x27, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 27));
  /* 12ea94: b.ne #0x12ea7c */
  if (ARC_COND(c, 1)) goto L_12ea7c;
  /* 12ea98: b #0x12e5c4 */
  goto L_12e5c4;
L_12ea9c:;
  /* 12ea9c: ldp x20, x19, [sp, #0x130] */
  { const uint64_t _pa = ((c)->sp + INT64_C(304));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12eaa0: ldp x22, x21, [sp, #0x120] */
  { const uint64_t _pa = ((c)->sp + INT64_C(288));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 12eaa4: ldp x24, x23, [sp, #0x110] */
  { const uint64_t _pa = ((c)->sp + INT64_C(272));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 12eaa8: ldp x26, x25, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 12eaac: ldp x28, x27, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 12eab0: ldp x29, x30, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12eab4: add sp, sp, #0x140 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(320)));
  /* 12eab8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12eabc: ret  */
  return;
  /* 12eac0: b #0x12eacc */
  goto L_12eacc;
  /* 12eac4: b #0x12eacc */
  goto L_12eacc;
  /* 12eac8: b #0x12eacc */
  goto L_12eacc;
L_12eacc:;
  /* 12eacc: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 12ead0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12ead4: tbz w8, #0, #0x12eae8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_12eae8;
  /* 12ead8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 12eadc: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 12eae0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 12eae4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239784));
  fn1_142608(c);
L_12eae8:;
  /* 12eae8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 12eaec: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1239792));
  fn1_9cc20(c);
}

void fn1_134b24(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192356));
  /* 134b24: bti c */
  /* bti: no architectural effect here */
  /* 134b28: add x0, x0, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(32)));
  /* 134b2c: ret  */
  return;
}

void fn1_136244(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039198276));
  /* 136244: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136248: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13624c: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* 136250: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136254: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136258: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13625c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 136260: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 136264: b.eq #0x1362c4 */
  if (ARC_COND(c, 0)) goto L_1362c4;
  /* 136268: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13626c: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 136270: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270388));
  fn1_142a58(c);
  /* 136274: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* 136278: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* 13627c: nop  */
  /* nop: no architectural effect here */
  /* 136280: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136284: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 136288: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13628c: tbz w8, #0, #0x136308 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_136308;
L_136290:;
  /* 136290: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 136294: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 136298: bl #0x142ef0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270428));
  fn1_142ef0(c);
  /* 13629c: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* 1362a0: cbz w8, #0x1362d0 */
  if ((ARC_W_R(c, 8)) == 0) goto L_1362d0;
  /* 1362a4: movi d1, #0000000000000000 */
  arc_v_clear(c, 1);
  /* 1362a8: ldr x9, [x29, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1362ac: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* 1362b0: b.ne #0x1362e4 */
  if (ARC_COND(c, 1)) goto L_1362e4;
  /* 1362b4: fmov d1, d0 */
  arc_du_w(c, 1, (uint64_t)(ARC_DU_R(c, 0)));
  /* 1362b8: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* 1362bc: b.eq #0x1362e4 */
  if (ARC_COND(c, 0)) goto L_1362e4;
  /* 1362c0: b #0x1362f0 */
  goto L_1362f0;
L_1362c4:;
  /* 1362c4: movi d0, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1362c8: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1362cc: b #0x1362ec */
  goto L_1362ec;
L_1362d0:;
  /* 1362d0: movi d1, #0000000000000000 */
  arc_v_clear(c, 1);
  /* 1362d4: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 1362d8: str w23, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 23));
  /* 1362dc: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* 1362e0: b.eq #0x1362f0 */
  if (ARC_COND(c, 0)) goto L_1362f0;
L_1362e4:;
  /* 1362e4: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 1362e8: fmov d0, d1 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 1)));
L_1362ec:;
  /* 1362ec: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1362f0:;
  /* 1362f0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1362f4: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1362f8: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1362fc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136300: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136304: ret  */
  return;
L_136308:;
  /* 136308: nop  */
  /* nop: no architectural effect here */
  /* 13630c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136310: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270548));
  fn1_1424b8(c);
  /* 136314: cbz w0, #0x136290 */
  if ((ARC_W_R(c, 0)) == 0) goto L_136290;
  /* 136318: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13631c: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 136320: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 136324: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 136328: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270572));
  fn1_1441e0(c);
  /* 13632c: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 136330: str x0, [x8, #0xc30] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 136334: nop  */
  /* nop: no architectural effect here */
  /* 136338: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 13633c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270592));
  fn1_1424d0(c);
  /* 136340: b #0x136290 */
  goto L_136290;
  /* 136344: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 136348: nop  */
  /* nop: no architectural effect here */
  /* 13634c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 136350: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270612));
  fn1_1424e8(c);
  /* 136354: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 136358: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1270620));
  fn1_9cc20(c);
}

void fn1_13935c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039210844));
  /* 13935c: bti c */
  /* bti: no architectural effect here */
  /* 139360: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 139364: add x8, x8, #0x5a8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1448)));
  /* 139368: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 13936c: ret  */
  return;
}

void fn1_13f24c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039235148));
  /* 13f24c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13f250: sub sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(272)));
  /* 13f254: stp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13f258: stp x28, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13f25c: add x29, sp, #0xf0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(240)));
  /* 13f260: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 13f264: mov x8, #-0x28 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551576));
  /* 13f268: mov x9, sp */
  ARC_X_W(c, 9, (c)->sp);
  /* 13f26c: movk x8, #0xff80, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280925220896768)));
  /* 13f270: add x9, x9, #0x80 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(128)));
  /* 13f274: sub x10, x29, #0x68 */
  ARC_X_W(c, 10, (ARC_X_R(c, 29) - UINT64_C(104)));
  /* 13f278: stp x9, x8, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13f27c: add x8, x10, #0x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 10) + UINT64_C(40)));
  /* 13f280: add x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) + UINT64_C(32)));
  /* 13f284: stp x9, x8, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13f288: stp x3, x4, [x29, #-0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-104));
    arc_st64(_pa, ARC_X_R(c, 3));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* 13f28c: stp q0, q1, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 13f290: ldur q0, [x29, #-0x10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-16)) + 8));
  /* 13f294: ldur q1, [x29, #-0x20] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* 13f298: stp x5, x6, [x29, #-0x58] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-88));
    arc_st64(_pa, ARC_X_R(c, 5));
    arc_st64(_pa + 8, ARC_X_R(c, 6));
  }
  /* 13f29c: stur x7, [x29, #-0x48] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-72)), ARC_X_R(c, 7));
  /* 13f2a0: stp q2, q3, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[2].u64[0]);
    arc_st64(_pa + 8, (c)->q[2].u64[1]);
    arc_st64((_pa + 16), (c)->q[3].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[3].u64[1]);
  }
  /* 13f2a4: stp q4, q5, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[5].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[5].u64[1]);
  }
  /* 13f2a8: stp q6, q7, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* 13f2ac: stp q1, q0, [x29, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-64));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13f2b0: sub x3, x29, #0x40 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 13f2b4: bl #0x141ec8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307320));
  fn1_141ec8(c);
  /* 13f2b8: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13f2bc: str xzr, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 31));
  /* 13f2c0: ldp x28, x19, [sp, #0x100] */
  { const uint64_t _pa = ((c)->sp + INT64_C(256));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13f2c4: ldp x29, x30, [sp, #0xf0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(240));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13f2c8: add sp, sp, #0x110 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(272)));
  /* 13f2cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13f2d0: ret  */
  return;
  /* 13f2d4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307352));
  fn1_142548(c);
  /* 13f2d8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307356));
  fn1_1429b0(c);
  /* 13f2dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13f2e0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307364));
  fn1_142980(c);
  /* 13f2e4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13f2e8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307372));
  fn1_9cc20(c);
  /* 13f2ec: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1307376));
  fn1_a1454(c);
}

void fn1_142710(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248656));
  /* 142710: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 142714: ldr x17, [x16, #0xf90] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3984))));
  /* 142718: add x16, x16, #0xf90 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3984)));
  /* 14271c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142720: nop  */
  /* nop: no architectural effect here */
  /* 142724: nop  */
  /* nop: no architectural effect here */
}

void fn1_142d10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250192));
  /* 142d10: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142d14: ldr x17, [x16, #0x190] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(400))));
  /* 142d18: add x16, x16, #0x190 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(400)));
  /* 142d1c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142d20: nop  */
  /* nop: no architectural effect here */
  /* 142d24: nop  */
  /* nop: no architectural effect here */
}

void fn1_143310(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251728));
  /* 143310: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143314: ldr x17, [x16, #0x390] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(912))));
  /* 143318: add x16, x16, #0x390 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(912)));
  /* 14331c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143320: nop  */
  /* nop: no architectural effect here */
  /* 143324: nop  */
  /* nop: no architectural effect here */
}

void fn1_143910(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253264));
  /* 143910: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143914: ldr x17, [x16, #0x590] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1424))));
  /* 143918: add x16, x16, #0x590 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1424)));
  /* 14391c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143920: nop  */
  /* nop: no architectural effect here */
  /* 143924: nop  */
  /* nop: no architectural effect here */
}

void fn1_143f10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254800));
  /* 143f10: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143f14: ldr x17, [x16, #0x790] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1936))));
  /* 143f18: add x16, x16, #0x790 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1936)));
  /* 143f1c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143f20: nop  */
  /* nop: no architectural effect here */
  /* 143f24: nop  */
  /* nop: no architectural effect here */
}

void fn1_144510(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256336));
  /* 144510: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144514: ldr x17, [x16, #0x990] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2448))));
  /* 144518: add x16, x16, #0x990 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2448)));
  /* 14451c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144520: nop  */
  /* nop: no architectural effect here */
  /* 144524: nop  */
  /* nop: no architectural effect here */
}

