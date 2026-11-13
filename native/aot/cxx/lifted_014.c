#include "lifted.h"

void fn1_9ce7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570620));
  /* 9ce7c: bti c */
  /* bti: no architectural effect here */
  /* 9ce80: b #0x9d008 */
  fn1_9d008(c); return;
}

void fn1_a1468(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588520));
  /* a1468: bti c */
  /* bti: no architectural effect here */
  /* a146c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a1470: ldr x8, [x8, #0x8b8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2232))));
  /* a1474: ldar x0, [x8] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 8)));
  /* a1478: ret  */
  return;
}

void fn1_a27a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593440));
  /* a27a0: bti c */
  /* bti: no architectural effect here */
  /* a27a4: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a27a8: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a87ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038618028));
  /* a87ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a87b0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a87b4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* a87b8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a87bc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a87c0: ldp x9, x10, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* a87c4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* a87c8: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* a87cc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* a87d0: add x11, x9, #0x18 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(24)));
  /* a87d4: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* a87d8: b.ls #0xa8808 */
  if (ARC_COND(c, 9)) goto L_a8808;
  /* a87dc: lsl x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* a87e0: add x9, x9, #0x3f8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1016)));
  /* a87e4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* a87e8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a87ec: csel x1, x10, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* a87f0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* a87f4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690168));
  fn1_142878(c);
  /* a87f8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* a87fc: cbz x0, #0xa891c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a891c;
  /* a8800: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a8804: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_a8808:;
  /* a8808: adrp x10, #0x51000 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(331776)));
  /* a880c: add x10, x10, #0xb59 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2905)));
  /* a8810: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* a8814: ldr q0, [x10] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 10)), arc_ld64(ARC_X_R(c, 10) + 8));
  /* a8818: ldr x9, [x10, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 10) + INT64_C(16))));
  /* a881c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8820: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* a8824: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* a8828: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a882c: ldr x21, [x20, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* a8830: add x8, x8, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* a8834: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* a8838: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a883c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* a8840: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* a8844: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690248));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a8848: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* a884c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* a8850: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* a8854: b.eq #0xa886c */
  if (ARC_COND(c, 0)) goto L_a886c;
  /* a8858: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* a885c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* a8860: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8864: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a8868: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690284));
  arc_dispatch(c, ARC_X_R(c, 8));
L_a886c:;
  /* a886c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a8870: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* a8874: add x10, x8, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* a8878: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a887c: b.ls #0xa88a4 */
  if (ARC_COND(c, 9)) goto L_a88a4;
  /* a8880: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* a8884: add x8, x8, #0x3e4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(996)));
  /* a8888: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* a888c: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* a8890: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* a8894: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690328));
  fn1_142878(c);
  /* a8898: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* a889c: cbz x0, #0xa8920 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8920;
  /* a88a0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_a88a4:;
  /* a88a4: mov w9, #0x692d */
  ARC_W_W(c, 9, UINT64_C(26925));
  /* a88a8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a88ac: movk w9, #0x2d6e, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(762183680)));
  /* a88b0: str w9, [x0, x8] */
  arc_st32((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* a88b4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a88b8: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* a88bc: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* a88c0: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* a88c4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a88c8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* a88cc: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* a88d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690388));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* a88d4: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* a88d8: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* a88dc: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* a88e0: b.ne #0xa88f8 */
  if (ARC_COND(c, 1)) goto L_a88f8;
  /* a88e4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a88e8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a88ec: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a88f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a88f4: ret  */
  return;
L_a88f8:;
  /* a88f8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* a88fc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a8900: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* a8904: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* a8908: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a890c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* a8910: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a8914: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8918: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_a891c:;
  /* a891c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690464));
  fn1_1427b8(c);
L_a8920:;
  /* a8920: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(690468));
  fn1_1427b8(c);
}

void fn1_af6dc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038646492));
  /* af6dc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* af6e0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* af6e4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* af6e8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* af6ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* af6f0: ldrb w9, [x0, #0x38] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(56))));
  /* af6f4: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* af6f8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* af6fc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* af700: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* af704: b.ne #0xaf754 */
  if (ARC_COND(c, 1)) goto L_af754;
  /* af708: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* af70c: add x10, x8, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* af710: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af714: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* af718: b.ls #0xaf740 */
  if (ARC_COND(c, 9)) goto L_af740;
  /* af71c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* af720: add x8, x8, #0x3e2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(994)));
  /* af724: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af728: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af72c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af730: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718644));
  fn1_142878(c);
  /* af734: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af738: cbz x0, #0xafa34 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afa34;
  /* af73c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_af740:;
  /* af740: mov w9, #0x3a3a */
  ARC_W_W(c, 9, UINT64_C(14906));
  /* af744: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* af748: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af74c: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* af750: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_af754:;
  /* af754: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* af758: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* af75c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af760: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* af764: b.ls #0xaf78c */
  if (ARC_COND(c, 9)) goto L_af78c;
  /* af768: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* af76c: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* af770: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af774: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af778: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af77c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718720));
  fn1_142878(c);
  /* af780: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af784: cbz x0, #0xafa1c */
  if ((ARC_X_R(c, 0)) == 0) goto L_afa1c;
  /* af788: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_af78c:;
  /* af78c: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* af790: mov w9, #0x77 */
  ARC_W_W(c, 9, UINT64_C(119));
  /* af794: mov w10, #0x656e */
  ARC_W_W(c, 10, UINT64_C(25966));
  /* af798: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* af79c: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* af7a0: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af7a4: ldrb w10, [x20, #0x39] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 20) + INT64_C(57))));
  /* af7a8: add x8, x9, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* af7ac: cmp w10, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(1));
  /* af7b0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* af7b4: b.ne #0xaf804 */
  if (ARC_COND(c, 1)) goto L_af804;
  /* af7b8: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* af7bc: add x11, x9, #5 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(5)));
  /* af7c0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af7c4: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* af7c8: b.ls #0xaf7f0 */
  if (ARC_COND(c, 9)) goto L_af7f0;
  /* af7cc: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af7d0: add x9, x9, #0x3e5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(997)));
  /* af7d4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* af7d8: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* af7dc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af7e0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718820));
  fn1_142878(c);
  /* af7e4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af7e8: cbz x0, #0xafa38 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afa38;
  /* af7ec: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_af7f0:;
  /* af7f0: mov w9, #0x5d5b */
  ARC_W_W(c, 9, UINT64_C(23899));
  /* af7f4: strh w9, [x0, x8] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* af7f8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af7fc: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* af800: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_af804:;
  /* af804: ldr x9, [x20, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* af808: cbz x9, #0xaf8c4 */
  if ((ARC_X_R(c, 9)) == 0) goto L_af8c4;
  /* af80c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af810: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* af814: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af818: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af81c: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* af820: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af824: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af828: b.ls #0xaf854 */
  if (ARC_COND(c, 9)) goto L_af854;
  /* af82c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af830: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af834: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af838: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af83c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af840: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718916));
  fn1_142878(c);
  /* af844: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af848: cbz x0, #0xafa24 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afa24;
  /* af84c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af850: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af854:;
  /* af854: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af858: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* af85c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af860: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* af864: add x0, x20, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* af868: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718956));
  fn1_afa48(c);
  /* af86c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af870: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af874: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af878: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* af87c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af880: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af884: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af888: b.ls #0xaf8b4 */
  if (ARC_COND(c, 9)) goto L_af8b4;
  /* af88c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af890: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af894: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af898: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af89c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af8a0: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719012));
  fn1_142878(c);
  /* af8a4: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af8a8: cbz x0, #0xafa28 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afa28;
  /* af8ac: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af8b0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af8b4:;
  /* af8b4: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af8b8: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* af8bc: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* af8c0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_af8c4:;
  /* af8c4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* af8c8: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af8cc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af8d0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* af8d4: b.ls #0xaf8fc */
  if (ARC_COND(c, 9)) goto L_af8fc;
  /* af8d8: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* af8dc: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af8e0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af8e4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af8e8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af8ec: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719088));
  fn1_142878(c);
  /* af8f0: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af8f4: cbz x0, #0xafa20 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afa20;
  /* af8f8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_af8fc:;
  /* af8fc: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* af900: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* af904: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af908: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af90c: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* af910: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af914: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* af918: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af91c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* af920: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* af924: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719144));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af928: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af92c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* af930: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* af934: b.eq #0xaf94c */
  if (ARC_COND(c, 0)) goto L_af94c;
  /* af938: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af93c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af940: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af944: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* af948: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719180));
  arc_dispatch(c, ARC_X_R(c, 8));
L_af94c:;
  /* af94c: ldr x8, [x20, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* af950: cbz x8, #0xafa08 */
  if ((ARC_X_R(c, 8)) == 0) goto L_afa08;
  /* af954: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af958: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af95c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af960: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* af964: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af968: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af96c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af970: b.ls #0xaf99c */
  if (ARC_COND(c, 9)) goto L_af99c;
  /* af974: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af978: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af97c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af980: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af984: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af988: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719244));
  fn1_142878(c);
  /* af98c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af990: cbz x0, #0xafa2c */
  if ((ARC_X_R(c, 0)) == 0) goto L_afa2c;
  /* af994: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af998: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af99c:;
  /* af99c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af9a0: mov w9, #0x28 */
  ARC_W_W(c, 9, UINT64_C(40));
  /* af9a4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af9a8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* af9ac: add x0, x20, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(40)));
  /* af9b0: bl #0xafa48 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719284));
  fn1_afa48(c);
  /* af9b4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af9b8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af9bc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af9c0: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* af9c4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af9c8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af9cc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af9d0: b.ls #0xaf9fc */
  if (ARC_COND(c, 9)) goto L_af9fc;
  /* af9d4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af9d8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af9dc: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af9e0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af9e4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af9e8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719340));
  fn1_142878(c);
  /* af9ec: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af9f0: cbz x0, #0xafa30 */
  if ((ARC_X_R(c, 0)) == 0) goto L_afa30;
  /* af9f4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af9f8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af9fc:;
  /* af9fc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* afa00: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* afa04: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_afa08:;
  /* afa08: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* afa0c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* afa10: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* afa14: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* afa18: ret  */
  return;
L_afa1c:;
  /* afa1c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719392));
  fn1_1427b8(c);
L_afa20:;
  /* afa20: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719396));
  fn1_1427b8(c);
L_afa24:;
  /* afa24: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719400));
  fn1_1427b8(c);
L_afa28:;
  /* afa28: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719404));
  fn1_1427b8(c);
L_afa2c:;
  /* afa2c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719408));
  fn1_1427b8(c);
L_afa30:;
  /* afa30: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719412));
  fn1_1427b8(c);
L_afa34:;
  /* afa34: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719416));
  fn1_1427b8(c);
L_afa38:;
  /* afa38: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(719420));
  fn1_1427b8(c);
}

void fn1_b41bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038665660));
  /* b41bc: bti c */
  /* bti: no architectural effect here */
  /* b41c0: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b41c4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7b5c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038680412));
  /* b7b5c: bti c */
  /* bti: no architectural effect here */
  /* b7b60: ldr x0, [x0, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* b7b64: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b7b68: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* b7b6c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_baac4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038692548));
  /* baac4: bti c */
  /* bti: no architectural effect here */
  /* baac8: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* baacc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bd8b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704312));
  /* bd8b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bd8bc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bd8c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bd8c4: bl #0x142908 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776392));
  fn1_142908(c);
L_bd8c8:;
  /* bd8c8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bd8cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bd8d0: ret  */
  return;
  /* bd8d4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776408));
  fn1_142548(c);
  /* bd8d8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776412));
  fn1_142980(c);
  /* bd8dc: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* bd8e0: b #0xbd8c8 */
  goto L_bd8c8;
  /* bd8e4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776424));
  fn1_a1454(c);
}

void fn1_cd060(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038767712));
L_cd060:;
  /* cd060: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* cd064: sub sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(160)));
  /* cd068: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* cd06c: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cd070: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* cd074: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* cd078: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* cd07c: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* cd080: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cd084: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* cd088: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd08c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd090: stur w3, [x29, #-0x14] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-20)), ARC_W_R(c, 3));
  /* cd094: ldr q8, [x8, #0xb00] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2816)) + 8));
  /* cd098: ldr q9, [x9, #0xba0] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2976))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2976)) + 8));
  /* cd09c: mov x26, x1 */
  ARC_X_W(c, 26, ARC_X_R(c, 1));
  /* cd0a0: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* cd0a4: adrp x3, #0x52000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd0a8: adrp x4, #0x52000 */
  ARC_X_W(c, 4, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd0ac: adrp x5, #0x52000 */
  ARC_X_W(c, 5, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd0b0: adrp x6, #0x52000 */
  ARC_X_W(c, 6, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd0b4: adrp x7, #0x52000 */
  ARC_X_W(c, 7, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd0b8: adrp x27, #0x52000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd0bc: adrp x28, #0x52000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd0c0: adrp x30, #0x52000 */
  ARC_X_W(c, 30, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd0c4: stp q9, q8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64(_pa + 8, (c)->q[9].u64[1]);
    arc_st64((_pa + 16), (c)->q[8].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[8].u64[1]);
  }
L_cd0c8:;
  /* cd0c8: sub x8, x26, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) - ARC_X_R(c, 23)));
  /* cd0cc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* cd0d0: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* cd0d4: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* cd0d8: b.gt #0xcd0ec */
  if (ARC_COND(c, 12)) goto L_cd0ec;
  /* cd0dc: b.lo #0xce0f0 */
  if (ARC_COND(c, 3)) goto L_ce0f0;
  /* cd0e0: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* cd0e4: b.ne #0xcd104 */
  if (ARC_COND(c, 1)) goto L_cd104;
  /* cd0e8: b #0xcdf5c */
  goto L_cdf5c;
L_cd0ec:;
  /* cd0ec: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* cd0f0: b.eq #0xce030 */
  if (ARC_COND(c, 0)) goto L_ce030;
  /* cd0f4: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* cd0f8: b.eq #0xce07c */
  if (ARC_COND(c, 0)) goto L_ce07c;
  /* cd0fc: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* cd100: b.eq #0xcdf78 */
  if (ARC_COND(c, 0)) goto L_cdf78;
L_cd104:;
  /* cd104: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* cd108: b.le #0xce118 */
  if (ARC_COND(c, 13)) goto L_ce118;
  /* cd10c: cbz x2, #0xce194 */
  if ((ARC_X_R(c, 2)) == 0) goto L_ce194;
  /* cd110: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* cd114: ldur s0, [x26, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* cd118: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* cd11c: add x9, x0, x9, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* cd120: b.lo #0xcd258 */
  if (ARC_COND(c, 3)) goto L_cd258;
  /* cd124: ldr s1, [x9] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 9)));
  /* cd128: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* cd12c: fcsel s2, s1, s0, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cd130: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd134: stur s2, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* cd138: str s0, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[0].u32[0]);
  /* cd13c: ldur s0, [x26, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* cd140: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* cd144: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd148: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd14c: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cd150: stur s2, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* cd154: ldr s1, [x9] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 9)));
  /* cd158: ldr s2, [x0] */
  arc_su_w(c, 2, arc_ld32(ARC_X_R(c, 0)));
  /* cd15c: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd160: fcsel s1, s1, s2, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* cd164: str s1, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[1].u32[0]);
  /* cd168: ldp s2, s1, [x9, #-4] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(-4));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* cd16c: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd170: str s0, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[0].u32[0]);
  /* cd174: ldur s0, [x26, #-8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-8))));
  /* cd178: fcmp s2, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 0)));
  /* cd17c: fcsel s1, s2, s0, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 2) : ARC_S_R(c, 0))));
  /* cd180: fcsel s0, s0, s2, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 2))));
  /* cd184: stur s1, [x26, #-8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-8)), (c)->q[1].u32[0]);
  /* cd188: stur s0, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), (c)->q[0].u32[0]);
  /* cd18c: ldur s0, [x26, #-8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-8))));
  /* cd190: ldr s1, [x0, #4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* cd194: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd198: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd19c: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cd1a0: stur s2, [x26, #-8] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-8)), (c)->q[2].u32[0]);
  /* cd1a4: ldur s1, [x9, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* cd1a8: ldr s2, [x0, #4] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* cd1ac: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd1b0: fcsel s1, s1, s2, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* cd1b4: str s1, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), (c)->q[1].u32[0]);
  /* cd1b8: ldur s1, [x9, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* cd1bc: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd1c0: stur s0, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), (c)->q[0].u32[0]);
  /* cd1c4: ldr s0, [x9, #4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 9) + INT64_C(4))));
  /* cd1c8: ldur s1, [x26, #-0xc] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 26) + INT64_C(-12))));
  /* cd1cc: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd1d0: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd1d4: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cd1d8: stur s2, [x26, #-0xc] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-12)), (c)->q[2].u32[0]);
  /* cd1dc: str s0, [x9, #4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(4)), (c)->q[0].u32[0]);
  /* cd1e0: ldur s0, [x26, #-0xc] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-12))));
  /* cd1e4: ldr s1, [x0, #8] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* cd1e8: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd1ec: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd1f0: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cd1f4: stur s2, [x26, #-0xc] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-12)), (c)->q[2].u32[0]);
  /* cd1f8: ldr s1, [x9, #4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 9) + INT64_C(4))));
  /* cd1fc: ldr s2, [x0, #8] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* cd200: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd204: fcsel s1, s1, s2, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* cd208: str s1, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), (c)->q[1].u32[0]);
  /* cd20c: ldp s1, s2, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_su_w(c, 1, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* cd210: fcsel s0, s0, s2, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 2))));
  /* cd214: ldur s2, [x9, #-4] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* cd218: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* cd21c: fcsel s3, s1, s0, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cd220: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd224: fcmp s3, s2 */
  arc_fcmp(c, (double)(ARC_S_R(c, 3)), (double)(ARC_S_R(c, 2)));
  /* cd228: fcsel s1, s2, s3, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 2) : ARC_S_R(c, 3))));
  /* cd22c: fcsel s3, s3, s2, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 3) : ARC_S_R(c, 2))));
  /* cd230: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* cd234: fcsel s2, s0, s2, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 2))));
  /* cd238: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cd23c: stp s0, s3, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[3].u32[0]);
  }
  /* cd240: stur s2, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* cd244: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* cd248: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* cd24c: str s1, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[1].u32[0]);
  /* cd250: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* cd254: b #0xcd2a8 */
  goto L_cd2a8;
L_cd258:;
  /* cd258: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* cd25c: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* cd260: fcsel s2, s1, s0, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cd264: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd268: stur s2, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* cd26c: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* cd270: ldur s0, [x26, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* cd274: ldr s1, [x9] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 9)));
  /* cd278: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd27c: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd280: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cd284: stur s2, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* cd288: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* cd28c: ldr s2, [x9] */
  arc_su_w(c, 2, arc_ld32(ARC_X_R(c, 9)));
  /* cd290: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd294: fcsel s1, s1, s2, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* cd298: str s1, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[1].u32[0]);
  /* cd29c: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* cd2a0: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cd2a4: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
L_cd2a8:;
  /* cd2a8: ldur w8, [x29, #-0x14] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
  /* cd2ac: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd2b0: adrp x19, #0x52000 */
  ARC_X_W(c, 19, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd2b4: adrp x20, #0x52000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd2b8: adrp x21, #0x52000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd2bc: adrp x22, #0x52000 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd2c0: adrp x23, #0x52000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd2c4: adrp x24, #0x52000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd2c8: adrp x25, #0x52000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd2cc: sub x2, x2, #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) - UINT64_C(1)));
  /* cd2d0: tbnz w8, #0, #0xcd2e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_cd2e0;
  /* cd2d4: ldur s1, [x0, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(-4))));
  /* cd2d8: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* cd2dc: b.pl #0xcdea8 */
  if (ARC_COND(c, 5)) goto L_cdea8;
L_cd2e0:;
  /* cd2e0: ldur s1, [x26, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* cd2e4: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd2e8: b.pl #0xcd300 */
  if (ARC_COND(c, 5)) goto L_cd300;
  /* cd2ec: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_cd2f0:;
  /* cd2f0: ldr s1, [x8, #4]! */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 8) + INT64_C(4))));
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
  /* cd2f4: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd2f8: b.pl #0xcd2f0 */
  if (ARC_COND(c, 5)) goto L_cd2f0;
  /* cd2fc: b #0xcd320 */
  goto L_cd320;
L_cd300:;
  /* cd300: add x9, x0, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(4)));
L_cd304:;
  /* cd304: mov x8, x9 */
  ARC_X_W(c, 8, ARC_X_R(c, 9));
  /* cd308: cmp x9, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 26));
  /* cd30c: b.hs #0xcd320 */
  if (ARC_COND(c, 2)) goto L_cd320;
  /* cd310: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
  /* cd314: ldr s1, [x9], #4 */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 9)));
  ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
  /* cd318: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd31c: b.pl #0xcd304 */
  if (ARC_COND(c, 5)) goto L_cd304;
L_cd320:;
  /* cd320: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* cd324: mov x9, x26 */
  ARC_X_W(c, 9, ARC_X_R(c, 26));
  /* cd328: b.hs #0xcd33c */
  if (ARC_COND(c, 2)) goto L_cd33c;
  /* cd32c: mov x9, x26 */
  ARC_X_W(c, 9, ARC_X_R(c, 26));
L_cd330:;
  /* cd330: ldr s1, [x9, #-4]! */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
  /* cd334: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cd338: b.mi #0xcd330 */
  if (ARC_COND(c, 4)) goto L_cd330;
L_cd33c:;
  /* cd33c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cd340: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
  /* cd344: b.hs #0xcd35c */
  if (ARC_COND(c, 2)) goto L_cd35c;
  /* cd348: ldr s1, [x9] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 9)));
  /* cd34c: ldr s2, [x8] */
  arc_su_w(c, 2, arc_ld32(ARC_X_R(c, 8)));
  /* cd350: mov x10, x8 */
  ARC_X_W(c, 10, ARC_X_R(c, 8));
  /* cd354: str s1, [x10], #4 */
  arc_st32(ARC_X_R(c, 10), (c)->q[1].u32[0]);
  ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(4));
  /* cd358: str s2, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[2].u32[0]);
L_cd35c:;
  /* cd35c: sub x11, x9, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - UINT64_C(4)));
  /* cd360: sub x13, x11, x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) - ARC_X_R(c, 10)));
  /* cd364: cmp x13, #0x1f9 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(505));
  /* cd368: b.lt #0xcda14 */
  if (ARC_COND(c, 11)) goto L_cda14;
  /* cd36c: dup v1.4s, v0.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0]);
    _t.u32[1] = ((c)->q[0].u32[0]);
    _t.u32[2] = ((c)->q[0].u32[0]);
    _t.u32[3] = ((c)->q[0].u32[0]);
    (c)->q[1] = _t; }
  /* cd370: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* cd374: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cd378: b #0xcd3a8 */
  goto L_cd3a8;
L_cd37c:;
  /* cd37c: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* cd380: cset w14, eq */
  ARC_W_W(c, 14, (ARC_COND(c, 0) ? 1 : 0));
  /* cd384: cmp x12, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(0));
  /* cd388: add x10, x10, x14, lsl #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 14)) << 8)));
  /* cd38c: mov x14, #-0x100 */
  ARC_X_W(c, 14, UINT64_C(18446744073709551360));
  /* cd390: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* cd394: csel x14, x14, xzr, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 31)));
  /* cd398: add x11, x11, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ARC_X_R(c, 14)));
  /* cd39c: sub x14, x11, x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - ARC_X_R(c, 10)));
  /* cd3a0: cmp x14, #0x1f8 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(504));
  /* cd3a4: b.le #0xcda24 */
  if (ARC_COND(c, 13)) goto L_cda24;
L_cd3a8:;
  /* cd3a8: cbz x13, #0xcd3b8 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cd3b8;
  /* cd3ac: cbz x12, #0xcd694 */
  if ((ARC_X_R(c, 12)) == 0) goto L_cd694;
L_cd3b0:;
  /* cd3b0: cbnz x13, #0xcd9d0 */
  if ((ARC_X_R(c, 13)) != 0) goto L_cd9d0;
  /* cd3b4: b #0xcd37c */
  goto L_cd37c;
L_cd3b8:;
  /* cd3b8: ldp q2, q3, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    arc_q_w(c, 2, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 3, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cd3bc: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd3c0: ldp q4, q5, [x10, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(32));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cd3c4: ldr q7, [x4, #0xa50] */
  arc_q_w(c, 7, arc_ld64((ARC_X_R(c, 4) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 4) + INT64_C(2640)) + 8));
  /* cd3c8: ldp q19, q20, [x10, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(64));
    arc_q_w(c, 19, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 20, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cd3cc: ldr q16, [x5, #0x990] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 5) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 5) + INT64_C(2448)) + 8));
  /* cd3d0: fcmgt v3.4s, v1.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[3].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[3].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[3].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[3].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[3] = _t; }
  /* cd3d4: fcmgt v2.4s, v1.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[2].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[2].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[2].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[2].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[2] = _t; }
  /* cd3d8: ldr q17, [x6, #0x9d0] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 6) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 6) + INT64_C(2512)) + 8));
  /* cd3dc: fcmgt v4.4s, v1.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[4].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[4].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[4].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[4].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[4] = _t; }
  /* cd3e0: fcmgt v5.4s, v1.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[5].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[5].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[5].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[5].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* cd3e4: ldr q21, [x27, #0xaa0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 27) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2720)) + 8));
  /* cd3e8: fcmgt v19.4s, v1.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[19].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[19].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[19].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[19].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* cd3ec: fcmgt v20.4s, v1.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[20].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[20].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[20].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[20].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[20] = _t; }
  /* cd3f0: ldr q6, [x3, #0xcf0] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 3) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 3) + INT64_C(3312)) + 8));
  /* cd3f4: ldr q18, [x7, #0xb90] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 7) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 7) + INT64_C(2960)) + 8));
  /* cd3f8: mvn v3.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[3].u8[0];
    _t.u8[1] = ~(c)->q[3].u8[1];
    _t.u8[2] = ~(c)->q[3].u8[2];
    _t.u8[3] = ~(c)->q[3].u8[3];
    _t.u8[4] = ~(c)->q[3].u8[4];
    _t.u8[5] = ~(c)->q[3].u8[5];
    _t.u8[6] = ~(c)->q[3].u8[6];
    _t.u8[7] = ~(c)->q[3].u8[7];
    _t.u8[8] = ~(c)->q[3].u8[8];
    _t.u8[9] = ~(c)->q[3].u8[9];
    _t.u8[10] = ~(c)->q[3].u8[10];
    _t.u8[11] = ~(c)->q[3].u8[11];
    _t.u8[12] = ~(c)->q[3].u8[12];
    _t.u8[13] = ~(c)->q[3].u8[13];
    _t.u8[14] = ~(c)->q[3].u8[14];
    _t.u8[15] = ~(c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* cd3fc: mvn v2.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[2].u8[0];
    _t.u8[1] = ~(c)->q[2].u8[1];
    _t.u8[2] = ~(c)->q[2].u8[2];
    _t.u8[3] = ~(c)->q[2].u8[3];
    _t.u8[4] = ~(c)->q[2].u8[4];
    _t.u8[5] = ~(c)->q[2].u8[5];
    _t.u8[6] = ~(c)->q[2].u8[6];
    _t.u8[7] = ~(c)->q[2].u8[7];
    _t.u8[8] = ~(c)->q[2].u8[8];
    _t.u8[9] = ~(c)->q[2].u8[9];
    _t.u8[10] = ~(c)->q[2].u8[10];
    _t.u8[11] = ~(c)->q[2].u8[11];
    _t.u8[12] = ~(c)->q[2].u8[12];
    _t.u8[13] = ~(c)->q[2].u8[13];
    _t.u8[14] = ~(c)->q[2].u8[14];
    _t.u8[15] = ~(c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* cd400: mvn v4.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[4].u8[0];
    _t.u8[1] = ~(c)->q[4].u8[1];
    _t.u8[2] = ~(c)->q[4].u8[2];
    _t.u8[3] = ~(c)->q[4].u8[3];
    _t.u8[4] = ~(c)->q[4].u8[4];
    _t.u8[5] = ~(c)->q[4].u8[5];
    _t.u8[6] = ~(c)->q[4].u8[6];
    _t.u8[7] = ~(c)->q[4].u8[7];
    _t.u8[8] = ~(c)->q[4].u8[8];
    _t.u8[9] = ~(c)->q[4].u8[9];
    _t.u8[10] = ~(c)->q[4].u8[10];
    _t.u8[11] = ~(c)->q[4].u8[11];
    _t.u8[12] = ~(c)->q[4].u8[12];
    _t.u8[13] = ~(c)->q[4].u8[13];
    _t.u8[14] = ~(c)->q[4].u8[14];
    _t.u8[15] = ~(c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* cd404: mvn v5.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[5].u8[0];
    _t.u8[1] = ~(c)->q[5].u8[1];
    _t.u8[2] = ~(c)->q[5].u8[2];
    _t.u8[3] = ~(c)->q[5].u8[3];
    _t.u8[4] = ~(c)->q[5].u8[4];
    _t.u8[5] = ~(c)->q[5].u8[5];
    _t.u8[6] = ~(c)->q[5].u8[6];
    _t.u8[7] = ~(c)->q[5].u8[7];
    _t.u8[8] = ~(c)->q[5].u8[8];
    _t.u8[9] = ~(c)->q[5].u8[9];
    _t.u8[10] = ~(c)->q[5].u8[10];
    _t.u8[11] = ~(c)->q[5].u8[11];
    _t.u8[12] = ~(c)->q[5].u8[12];
    _t.u8[13] = ~(c)->q[5].u8[13];
    _t.u8[14] = ~(c)->q[5].u8[14];
    _t.u8[15] = ~(c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* cd408: mvn v19.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[19].u8[0];
    _t.u8[1] = ~(c)->q[19].u8[1];
    _t.u8[2] = ~(c)->q[19].u8[2];
    _t.u8[3] = ~(c)->q[19].u8[3];
    _t.u8[4] = ~(c)->q[19].u8[4];
    _t.u8[5] = ~(c)->q[19].u8[5];
    _t.u8[6] = ~(c)->q[19].u8[6];
    _t.u8[7] = ~(c)->q[19].u8[7];
    _t.u8[8] = ~(c)->q[19].u8[8];
    _t.u8[9] = ~(c)->q[19].u8[9];
    _t.u8[10] = ~(c)->q[19].u8[10];
    _t.u8[11] = ~(c)->q[19].u8[11];
    _t.u8[12] = ~(c)->q[19].u8[12];
    _t.u8[13] = ~(c)->q[19].u8[13];
    _t.u8[14] = ~(c)->q[19].u8[14];
    _t.u8[15] = ~(c)->q[19].u8[15];
    (c)->q[19] = _t; }
  /* cd40c: mvn v20.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[20].u8[0];
    _t.u8[1] = ~(c)->q[20].u8[1];
    _t.u8[2] = ~(c)->q[20].u8[2];
    _t.u8[3] = ~(c)->q[20].u8[3];
    _t.u8[4] = ~(c)->q[20].u8[4];
    _t.u8[5] = ~(c)->q[20].u8[5];
    _t.u8[6] = ~(c)->q[20].u8[6];
    _t.u8[7] = ~(c)->q[20].u8[7];
    _t.u8[8] = ~(c)->q[20].u8[8];
    _t.u8[9] = ~(c)->q[20].u8[9];
    _t.u8[10] = ~(c)->q[20].u8[10];
    _t.u8[11] = ~(c)->q[20].u8[11];
    _t.u8[12] = ~(c)->q[20].u8[12];
    _t.u8[13] = ~(c)->q[20].u8[13];
    _t.u8[14] = ~(c)->q[20].u8[14];
    _t.u8[15] = ~(c)->q[20].u8[15];
    (c)->q[20] = _t; }
  /* cd410: ushll v23.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[23] = _t; }
  /* cd414: ushll2 v22.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[22] = _t; }
  /* cd418: ushll v2.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[2] = _t; }
  /* cd41c: ushll v24.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* cd420: ushll2 v4.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* cd424: ushll v25.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* cd428: ushll2 v3.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[3] = _t; }
  /* cd42c: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* cd430: and v7.16b, v23.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[7].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[7].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[7].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[7].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[7].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[7].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[7].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[7].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[7].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[7].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[7].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[7].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[7].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[7].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[7].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[7].u8[15];
    (c)->q[7] = _t; }
  /* cd434: and v22.16b, v22.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[8].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[8].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[8].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[8].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[8].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[8].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[8].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[8].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[8].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[8].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[8].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[8].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[8].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[8].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[8].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[8].u8[15];
    (c)->q[22] = _t; }
  /* cd438: and v2.16b, v2.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] & (c)->q[9].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] & (c)->q[9].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] & (c)->q[9].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] & (c)->q[9].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] & (c)->q[9].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] & (c)->q[9].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] & (c)->q[9].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] & (c)->q[9].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] & (c)->q[9].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] & (c)->q[9].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] & (c)->q[9].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] & (c)->q[9].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] & (c)->q[9].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] & (c)->q[9].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] & (c)->q[9].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] & (c)->q[9].u8[15];
    (c)->q[2] = _t; }
  /* cd43c: and v4.16b, v4.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[16].u8[15];
    (c)->q[4] = _t; }
  /* cd440: and v16.16b, v24.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[17].u8[15];
    (c)->q[16] = _t; }
  /* cd444: and v17.16b, v25.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[21].u8[15];
    (c)->q[17] = _t; }
  /* cd448: ldp q23, q21, [x10, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(96));
    arc_q_w(c, 23, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 21, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cd44c: and v3.16b, v3.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] & (c)->q[6].u8[15];
    (c)->q[3] = _t; }
  /* cd450: and v18.16b, v5.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* cd454: ldp q24, q25, [x10, #0x80] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(128));
    arc_q_w(c, 24, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 25, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cd458: orr v5.16b, v16.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[2].u8[15];
    (c)->q[5] = _t; }
  /* cd45c: orr v6.16b, v4.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[22].u8[15];
    (c)->q[6] = _t; }
  /* cd460: orr v2.16b, v17.16b, v7.16b */
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
    (c)->q[2] = _t; }
  /* cd464: fcmgt v23.4s, v1.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[23].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[23].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[23].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[23].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* cd468: ushll2 v4.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* cd46c: ushll v7.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[19].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[19].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* cd470: fcmgt v16.4s, v1.4s, v21.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[21].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[21].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[21].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[21].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* cd474: ldr q17, [x28, #0xd10] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 28) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 28) + INT64_C(3344)) + 8));
  /* cd478: ldr q19, [x30, #0x9e0] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 30) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 30) + INT64_C(2528)) + 8));
  /* cd47c: orr v3.16b, v18.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* cd480: ushll2 v18.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[20].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[20].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* cd484: ushll v20.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[20].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[20].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* cd488: and v7.16b, v7.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[17].u8[15];
    (c)->q[7] = _t; }
  /* cd48c: and v17.16b, v4.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[19].u8[15];
    (c)->q[17] = _t; }
  /* cd490: ldr q4, [x1, #0xb50] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 1) + INT64_C(2896)) + 8));
  /* cd494: mvn v21.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[23].u8[0];
    _t.u8[1] = ~(c)->q[23].u8[1];
    _t.u8[2] = ~(c)->q[23].u8[2];
    _t.u8[3] = ~(c)->q[23].u8[3];
    _t.u8[4] = ~(c)->q[23].u8[4];
    _t.u8[5] = ~(c)->q[23].u8[5];
    _t.u8[6] = ~(c)->q[23].u8[6];
    _t.u8[7] = ~(c)->q[23].u8[7];
    _t.u8[8] = ~(c)->q[23].u8[8];
    _t.u8[9] = ~(c)->q[23].u8[9];
    _t.u8[10] = ~(c)->q[23].u8[10];
    _t.u8[11] = ~(c)->q[23].u8[11];
    _t.u8[12] = ~(c)->q[23].u8[12];
    _t.u8[13] = ~(c)->q[23].u8[13];
    _t.u8[14] = ~(c)->q[23].u8[14];
    _t.u8[15] = ~(c)->q[23].u8[15];
    (c)->q[21] = _t; }
  /* cd498: ldr q22, [x20, #0xbc0] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 20) + INT64_C(3008)) + 8));
  /* cd49c: ldr q23, [x21, #0x970] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 21) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 21) + INT64_C(2416)) + 8));
  /* cd4a0: mvn v16.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[16].u8[0];
    _t.u8[1] = ~(c)->q[16].u8[1];
    _t.u8[2] = ~(c)->q[16].u8[2];
    _t.u8[3] = ~(c)->q[16].u8[3];
    _t.u8[4] = ~(c)->q[16].u8[4];
    _t.u8[5] = ~(c)->q[16].u8[5];
    _t.u8[6] = ~(c)->q[16].u8[6];
    _t.u8[7] = ~(c)->q[16].u8[7];
    _t.u8[8] = ~(c)->q[16].u8[8];
    _t.u8[9] = ~(c)->q[16].u8[9];
    _t.u8[10] = ~(c)->q[16].u8[10];
    _t.u8[11] = ~(c)->q[16].u8[11];
    _t.u8[12] = ~(c)->q[16].u8[12];
    _t.u8[13] = ~(c)->q[16].u8[13];
    _t.u8[14] = ~(c)->q[16].u8[14];
    _t.u8[15] = ~(c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* cd4a4: and v20.16b, v20.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[4].u8[15];
    (c)->q[20] = _t; }
  /* cd4a8: ldr q4, [x19, #0xd60] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 19) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 19) + INT64_C(3424)) + 8));
  /* cd4ac: ushll v19.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* cd4b0: ushll2 v21.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[21].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[21].u32[3]) << 0);
    (c)->q[21] = _t; }
  /* cd4b4: and v4.16b, v18.16b, v4.16b */
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
    (c)->q[4] = _t; }
  /* cd4b8: ushll v18.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[18] = _t; }
  /* cd4bc: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* cd4c0: and v21.16b, v21.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[22].u8[15];
    (c)->q[21] = _t; }
  /* cd4c4: and v19.16b, v19.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[23].u8[15];
    (c)->q[19] = _t; }
  /* cd4c8: fcmgt v22.4s, v1.4s, v24.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[24].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[24].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[24].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[24].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* cd4cc: fcmgt v23.4s, v1.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[25].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[25].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[25].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[25].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* cd4d0: ldr q25, [x23, #0x9f0] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 23) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 23) + INT64_C(2544)) + 8));
  /* cd4d4: ldr q24, [x22, #0xb40] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 22) + INT64_C(2880)) + 8));
  /* cd4d8: orr v19.16b, v19.16b, v7.16b */
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
    (c)->q[19] = _t; }
  /* cd4dc: orr v17.16b, v21.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* cd4e0: and v18.16b, v18.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[25].u8[15];
    (c)->q[18] = _t; }
  /* cd4e4: mvn v22.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[22].u8[0];
    _t.u8[1] = ~(c)->q[22].u8[1];
    _t.u8[2] = ~(c)->q[22].u8[2];
    _t.u8[3] = ~(c)->q[22].u8[3];
    _t.u8[4] = ~(c)->q[22].u8[4];
    _t.u8[5] = ~(c)->q[22].u8[5];
    _t.u8[6] = ~(c)->q[22].u8[6];
    _t.u8[7] = ~(c)->q[22].u8[7];
    _t.u8[8] = ~(c)->q[22].u8[8];
    _t.u8[9] = ~(c)->q[22].u8[9];
    _t.u8[10] = ~(c)->q[22].u8[10];
    _t.u8[11] = ~(c)->q[22].u8[11];
    _t.u8[12] = ~(c)->q[22].u8[12];
    _t.u8[13] = ~(c)->q[22].u8[13];
    _t.u8[14] = ~(c)->q[22].u8[14];
    _t.u8[15] = ~(c)->q[22].u8[15];
    (c)->q[22] = _t; }
  /* cd4e8: ldp q21, q25, [x10, #0xa0] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(160));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 25, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cd4ec: mvn v23.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[23].u8[0];
    _t.u8[1] = ~(c)->q[23].u8[1];
    _t.u8[2] = ~(c)->q[23].u8[2];
    _t.u8[3] = ~(c)->q[23].u8[3];
    _t.u8[4] = ~(c)->q[23].u8[4];
    _t.u8[5] = ~(c)->q[23].u8[5];
    _t.u8[6] = ~(c)->q[23].u8[6];
    _t.u8[7] = ~(c)->q[23].u8[7];
    _t.u8[8] = ~(c)->q[23].u8[8];
    _t.u8[9] = ~(c)->q[23].u8[9];
    _t.u8[10] = ~(c)->q[23].u8[10];
    _t.u8[11] = ~(c)->q[23].u8[11];
    _t.u8[12] = ~(c)->q[23].u8[12];
    _t.u8[13] = ~(c)->q[23].u8[13];
    _t.u8[14] = ~(c)->q[23].u8[14];
    _t.u8[15] = ~(c)->q[23].u8[15];
    (c)->q[23] = _t; }
  /* cd4f0: and v7.16b, v16.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[24].u8[15];
    (c)->q[7] = _t; }
  /* cd4f4: ldr q24, [x24, #0x980] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 24) + INT64_C(2432)) + 8));
  /* cd4f8: orr v5.16b, v19.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* cd4fc: orr v16.16b, v18.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[20].u8[15];
    (c)->q[16] = _t; }
  /* cd500: orr v6.16b, v17.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* cd504: fcmgt v21.4s, v1.4s, v21.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[21].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[21].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[21].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[21].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* cd508: sshll2 v18.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* cd50c: sshll v19.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* cd510: sshll2 v20.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[20] = _t; }
  /* cd514: sshll v22.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[22] = _t; }
  /* cd518: fcmgt v17.4s, v1.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[25].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[25].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[25].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[25].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[17] = _t; }
  /* cd51c: ldp q23, q26, [x10, #0xc0] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(192));
    arc_q_w(c, 23, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cd520: ldr q25, [x25, #0xd30] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 25) + INT64_C(3376)) + 8));
  /* cd524: and v19.16b, v19.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[24].u8[15];
    (c)->q[19] = _t; }
  /* cd528: ldr q24, [x13, #0xb10] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 13) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2832)) + 8));
  /* cd52c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd530: mvn v21.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[21].u8[0];
    _t.u8[1] = ~(c)->q[21].u8[1];
    _t.u8[2] = ~(c)->q[21].u8[2];
    _t.u8[3] = ~(c)->q[21].u8[3];
    _t.u8[4] = ~(c)->q[21].u8[4];
    _t.u8[5] = ~(c)->q[21].u8[5];
    _t.u8[6] = ~(c)->q[21].u8[6];
    _t.u8[7] = ~(c)->q[21].u8[7];
    _t.u8[8] = ~(c)->q[21].u8[8];
    _t.u8[9] = ~(c)->q[21].u8[9];
    _t.u8[10] = ~(c)->q[21].u8[10];
    _t.u8[11] = ~(c)->q[21].u8[11];
    _t.u8[12] = ~(c)->q[21].u8[12];
    _t.u8[13] = ~(c)->q[21].u8[13];
    _t.u8[14] = ~(c)->q[21].u8[14];
    _t.u8[15] = ~(c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* cd534: and v18.16b, v18.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[25].u8[15];
    (c)->q[18] = _t; }
  /* cd538: ldr q25, [x13, #0xc30] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 13) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3120)) + 8));
  /* cd53c: fcmgt v23.4s, v1.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[23].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[23].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[23].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[23].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* cd540: mvn v17.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[17].u8[0];
    _t.u8[1] = ~(c)->q[17].u8[1];
    _t.u8[2] = ~(c)->q[17].u8[2];
    _t.u8[3] = ~(c)->q[17].u8[3];
    _t.u8[4] = ~(c)->q[17].u8[4];
    _t.u8[5] = ~(c)->q[17].u8[5];
    _t.u8[6] = ~(c)->q[17].u8[6];
    _t.u8[7] = ~(c)->q[17].u8[7];
    _t.u8[8] = ~(c)->q[17].u8[8];
    _t.u8[9] = ~(c)->q[17].u8[9];
    _t.u8[10] = ~(c)->q[17].u8[10];
    _t.u8[11] = ~(c)->q[17].u8[11];
    _t.u8[12] = ~(c)->q[17].u8[12];
    _t.u8[13] = ~(c)->q[17].u8[13];
    _t.u8[14] = ~(c)->q[17].u8[14];
    _t.u8[15] = ~(c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* cd544: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd548: ldr q29, [x13, #0xd70] */
  arc_q_w(c, 29, arc_ld64((ARC_X_R(c, 13) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3440)) + 8));
  /* cd54c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd550: fcmgt v26.4s, v1.4s, v26.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[26].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[26].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[26].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[26].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[26] = _t; }
  /* cd554: sshll v27.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[27] = _t; }
  /* cd558: sshll2 v21.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* cd55c: ldr q30, [x13, #0xa60] */
  arc_q_w(c, 30, arc_ld64((ARC_X_R(c, 13) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2656)) + 8));
  /* cd560: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd564: sshll v28.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[1]) << 0);
    (c)->q[28] = _t; }
  /* cd568: sshll2 v17.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[3]) << 0);
    (c)->q[17] = _t; }
  /* cd56c: mvn v23.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[23].u8[0];
    _t.u8[1] = ~(c)->q[23].u8[1];
    _t.u8[2] = ~(c)->q[23].u8[2];
    _t.u8[3] = ~(c)->q[23].u8[3];
    _t.u8[4] = ~(c)->q[23].u8[4];
    _t.u8[5] = ~(c)->q[23].u8[5];
    _t.u8[6] = ~(c)->q[23].u8[6];
    _t.u8[7] = ~(c)->q[23].u8[7];
    _t.u8[8] = ~(c)->q[23].u8[8];
    _t.u8[9] = ~(c)->q[23].u8[9];
    _t.u8[10] = ~(c)->q[23].u8[10];
    _t.u8[11] = ~(c)->q[23].u8[11];
    _t.u8[12] = ~(c)->q[23].u8[12];
    _t.u8[13] = ~(c)->q[23].u8[13];
    _t.u8[14] = ~(c)->q[23].u8[14];
    _t.u8[15] = ~(c)->q[23].u8[15];
    (c)->q[23] = _t; }
  /* cd570: and v22.16b, v22.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[24].u8[15];
    (c)->q[22] = _t; }
  /* cd574: ldr q24, [x13, #0x9a0] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 13) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2464)) + 8));
  /* cd578: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd57c: and v20.16b, v20.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[25].u8[15];
    (c)->q[20] = _t; }
  /* cd580: and v21.16b, v21.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[29].u8[15];
    (c)->q[21] = _t; }
  /* cd584: ldr q31, [x13, #0xbf0] */
  arc_q_w(c, 31, arc_ld64((ARC_X_R(c, 13) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3056)) + 8));
  /* cd588: and v25.16b, v27.16b, v30.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[30].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[30].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[30].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[30].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[30].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[30].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[30].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[30].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[30].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[30].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[30].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[30].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[30].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[30].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[30].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[30].u8[15];
    (c)->q[25] = _t; }
  /* cd58c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd590: sshll v27.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[27] = _t; }
  /* cd594: and v17.16b, v17.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[24].u8[15];
    (c)->q[17] = _t; }
  /* cd598: mvn v26.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[26].u8[0];
    _t.u8[1] = ~(c)->q[26].u8[1];
    _t.u8[2] = ~(c)->q[26].u8[2];
    _t.u8[3] = ~(c)->q[26].u8[3];
    _t.u8[4] = ~(c)->q[26].u8[4];
    _t.u8[5] = ~(c)->q[26].u8[5];
    _t.u8[6] = ~(c)->q[26].u8[6];
    _t.u8[7] = ~(c)->q[26].u8[7];
    _t.u8[8] = ~(c)->q[26].u8[8];
    _t.u8[9] = ~(c)->q[26].u8[9];
    _t.u8[10] = ~(c)->q[26].u8[10];
    _t.u8[11] = ~(c)->q[26].u8[11];
    _t.u8[12] = ~(c)->q[26].u8[12];
    _t.u8[13] = ~(c)->q[26].u8[13];
    _t.u8[14] = ~(c)->q[26].u8[14];
    _t.u8[15] = ~(c)->q[26].u8[15];
    (c)->q[26] = _t; }
  /* cd59c: and v24.16b, v28.16b, v31.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] & (c)->q[31].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] & (c)->q[31].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] & (c)->q[31].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] & (c)->q[31].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] & (c)->q[31].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] & (c)->q[31].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] & (c)->q[31].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] & (c)->q[31].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] & (c)->q[31].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] & (c)->q[31].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] & (c)->q[31].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] & (c)->q[31].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] & (c)->q[31].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] & (c)->q[31].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] & (c)->q[31].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] & (c)->q[31].u8[15];
    (c)->q[24] = _t; }
  /* cd5a0: ldr q28, [x13, #0xbb0] */
  arc_q_w(c, 28, arc_ld64((ARC_X_R(c, 13) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2992)) + 8));
  /* cd5a4: sshll2 v23.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[23] = _t; }
  /* cd5a8: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd5ac: orr v18.16b, v21.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* cd5b0: orr v19.16b, v25.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[19].u8[15];
    (c)->q[19] = _t; }
  /* cd5b4: and v21.16b, v27.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[28].u8[15];
    (c)->q[21] = _t; }
  /* cd5b8: ldp q29, q27, [x10, #0xe0] */
  { const uint64_t _pa = (ARC_X_R(c, 10) + INT64_C(224));
    arc_q_w(c, 29, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 27, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cd5bc: ldr q25, [x13, #0x9b0] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 13) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2480)) + 8));
  /* cd5c0: sshll2 v28.2d, v26.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* cd5c4: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd5c8: sshll v26.2d, v26.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[26].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[26].i32[1]) << 0);
    (c)->q[26] = _t; }
  /* cd5cc: orr v4.16b, v7.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* cd5d0: orr v7.16b, v17.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[20].u8[15];
    (c)->q[7] = _t; }
  /* cd5d4: and v23.16b, v23.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[25].u8[15];
    (c)->q[23] = _t; }
  /* cd5d8: fcmgt v25.4s, v1.4s, v29.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[29].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[29].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[29].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[29].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[25] = _t; }
  /* cd5dc: ldr q29, [x13, #0xb60] */
  arc_q_w(c, 29, arc_ld64((ARC_X_R(c, 13) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2912)) + 8));
  /* cd5e0: fcmgt v27.4s, v1.4s, v27.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[27].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[27].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[27].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[27].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[27] = _t; }
  /* cd5e4: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd5e8: orr v19.16b, v21.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[19].u8[15];
    (c)->q[19] = _t; }
  /* cd5ec: ldr q17, [x13, #0xcb0] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 13) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3248)) + 8));
  /* cd5f0: and v20.16b, v28.16b, v29.16b */
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
    (c)->q[20] = _t; }
  /* cd5f4: orr v21.16b, v24.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[22].u8[15];
    (c)->q[21] = _t; }
  /* cd5f8: orr v18.16b, v23.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* cd5fc: orr v3.16b, v4.16b, v3.16b */
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
  /* cd600: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd604: and v17.16b, v26.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* cd608: mvn v22.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[25].u8[0];
    _t.u8[1] = ~(c)->q[25].u8[1];
    _t.u8[2] = ~(c)->q[25].u8[2];
    _t.u8[3] = ~(c)->q[25].u8[3];
    _t.u8[4] = ~(c)->q[25].u8[4];
    _t.u8[5] = ~(c)->q[25].u8[5];
    _t.u8[6] = ~(c)->q[25].u8[6];
    _t.u8[7] = ~(c)->q[25].u8[7];
    _t.u8[8] = ~(c)->q[25].u8[8];
    _t.u8[9] = ~(c)->q[25].u8[9];
    _t.u8[10] = ~(c)->q[25].u8[10];
    _t.u8[11] = ~(c)->q[25].u8[11];
    _t.u8[12] = ~(c)->q[25].u8[12];
    _t.u8[13] = ~(c)->q[25].u8[13];
    _t.u8[14] = ~(c)->q[25].u8[14];
    _t.u8[15] = ~(c)->q[25].u8[15];
    (c)->q[22] = _t; }
  /* cd60c: orr v2.16b, v16.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* cd610: mvn v4.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[27].u8[0];
    _t.u8[1] = ~(c)->q[27].u8[1];
    _t.u8[2] = ~(c)->q[27].u8[2];
    _t.u8[3] = ~(c)->q[27].u8[3];
    _t.u8[4] = ~(c)->q[27].u8[4];
    _t.u8[5] = ~(c)->q[27].u8[5];
    _t.u8[6] = ~(c)->q[27].u8[6];
    _t.u8[7] = ~(c)->q[27].u8[7];
    _t.u8[8] = ~(c)->q[27].u8[8];
    _t.u8[9] = ~(c)->q[27].u8[9];
    _t.u8[10] = ~(c)->q[27].u8[10];
    _t.u8[11] = ~(c)->q[27].u8[11];
    _t.u8[12] = ~(c)->q[27].u8[12];
    _t.u8[13] = ~(c)->q[27].u8[13];
    _t.u8[14] = ~(c)->q[27].u8[14];
    _t.u8[15] = ~(c)->q[27].u8[15];
    (c)->q[4] = _t; }
  /* cd614: orr v7.16b, v20.16b, v7.16b */
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
  /* cd618: ldr q20, [x13, #0xc80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 13) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3200)) + 8));
  /* cd61c: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd620: orr v6.16b, v18.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* cd624: orr v5.16b, v19.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* cd628: orr v16.16b, v17.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[21].u8[15];
    (c)->q[16] = _t; }
  /* cd62c: ldr q21, [x13, #0xb20] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 13) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2848)) + 8));
  /* cd630: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd634: sshll v17.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* cd638: sshll2 v18.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* cd63c: sshll v19.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[4].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[4].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* cd640: sshll2 v4.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[4].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[4].i32[3]) << 0);
    (c)->q[4] = _t; }
  /* cd644: ldr q22, [x13, #0xa00] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 13) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2560)) + 8));
  /* cd648: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd64c: ldr q23, [x13, #0xc40] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 13) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3136)) + 8));
  /* cd650: orr v3.16b, v7.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* cd654: orr v2.16b, v16.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* cd658: and v7.16b, v17.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[20].u8[15];
    (c)->q[7] = _t; }
  /* cd65c: and v16.16b, v18.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[21].u8[15];
    (c)->q[16] = _t; }
  /* cd660: and v4.16b, v4.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[22].u8[15];
    (c)->q[4] = _t; }
  /* cd664: and v17.16b, v19.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[23].u8[15];
    (c)->q[17] = _t; }
  /* cd668: orr v5.16b, v7.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* cd66c: orr v6.16b, v16.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* cd670: orr v2.16b, v17.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* cd674: orr v3.16b, v4.16b, v3.16b */
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
  /* cd678: orr v3.16b, v3.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[6].u8[15];
    (c)->q[3] = _t; }
  /* cd67c: orr v2.16b, v2.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[5].u8[15];
    (c)->q[2] = _t; }
  /* cd680: orr v2.16b, v2.16b, v3.16b */
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
  /* cd684: ext v3.16b, v2.16b, v2.16b, #8 */
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
    (c)->q[3] = _t; }
  /* cd688: orr v2.8b, v2.8b, v3.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    (c)->q[2] = _t; }
  /* cd68c: fmov x13, d2 */
  ARC_X_W(c, 13, ARC_DU_R(c, 2));
  /* cd690: cbnz x12, #0xcd3b0 */
  if ((ARC_X_R(c, 12)) != 0) goto L_cd3b0;
L_cd694:;
  /* cd694: ldur q3, [x11, #-0x1c] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 11) + INT64_C(-28))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-28)) + 8));
  /* cd698: ldur q5, [x11, #-0x3c] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 11) + INT64_C(-60))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-60)) + 8));
  /* cd69c: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd6a0: ldur q2, [x11, #-0xc] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 11) + INT64_C(-12))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-12)) + 8));
  /* cd6a4: ldur q4, [x11, #-0x2c] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 11) + INT64_C(-44))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-44)) + 8));
  /* cd6a8: ldur q6, [x11, #-0x4c] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 11) + INT64_C(-76))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-76)) + 8));
  /* cd6ac: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* cd6b0: rev64 v5.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[1];
    _t.u32[1] = (c)->q[5].u32[0];
    _t.u32[2] = (c)->q[5].u32[3];
    _t.u32[3] = (c)->q[5].u32[2];
    (c)->q[5] = _t; }
  /* cd6b4: ldur q7, [x11, #-0x5c] */
  arc_q_w(c, 7, arc_ld64((ARC_X_R(c, 11) + INT64_C(-92))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-92)) + 8));
  /* cd6b8: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* cd6bc: rev64 v4.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[4].u32[1];
    _t.u32[1] = (c)->q[4].u32[0];
    _t.u32[2] = (c)->q[4].u32[3];
    _t.u32[3] = (c)->q[4].u32[2];
    (c)->q[4] = _t; }
  /* cd6c0: rev64 v6.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[6].u32[1];
    _t.u32[1] = (c)->q[6].u32[0];
    _t.u32[2] = (c)->q[6].u32[3];
    _t.u32[3] = (c)->q[6].u32[2];
    (c)->q[6] = _t; }
  /* cd6c4: ldur q16, [x11, #-0x6c] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 11) + INT64_C(-108))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-108)) + 8));
  /* cd6c8: rev64 v7.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[7].u32[1];
    _t.u32[1] = (c)->q[7].u32[0];
    _t.u32[2] = (c)->q[7].u32[3];
    _t.u32[3] = (c)->q[7].u32[2];
    (c)->q[7] = _t; }
  /* cd6cc: ldr q18, [x4, #0xa50] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 4) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 4) + INT64_C(2640)) + 8));
  /* cd6d0: ldr q21, [x7, #0xb90] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 7) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 7) + INT64_C(2960)) + 8));
  /* cd6d4: ldur q23, [x11, #-0x7c] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 11) + INT64_C(-124))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-124)) + 8));
  /* cd6d8: ldr q17, [x3, #0xcf0] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 3) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 3) + INT64_C(3312)) + 8));
  /* cd6dc: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* cd6e0: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* cd6e4: rev64 v16.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[16].u32[1];
    _t.u32[1] = (c)->q[16].u32[0];
    _t.u32[2] = (c)->q[16].u32[3];
    _t.u32[3] = (c)->q[16].u32[2];
    (c)->q[16] = _t; }
  /* cd6e8: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* cd6ec: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* cd6f0: ext v6.16b, v6.16b, v6.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[8];
    _t.u8[1] = (c)->q[6].u8[9];
    _t.u8[2] = (c)->q[6].u8[10];
    _t.u8[3] = (c)->q[6].u8[11];
    _t.u8[4] = (c)->q[6].u8[12];
    _t.u8[5] = (c)->q[6].u8[13];
    _t.u8[6] = (c)->q[6].u8[14];
    _t.u8[7] = (c)->q[6].u8[15];
    _t.u8[8] = (c)->q[6].u8[0];
    _t.u8[9] = (c)->q[6].u8[1];
    _t.u8[10] = (c)->q[6].u8[2];
    _t.u8[11] = (c)->q[6].u8[3];
    _t.u8[12] = (c)->q[6].u8[4];
    _t.u8[13] = (c)->q[6].u8[5];
    _t.u8[14] = (c)->q[6].u8[6];
    _t.u8[15] = (c)->q[6].u8[7];
    (c)->q[6] = _t; }
  /* cd6f4: ext v7.16b, v7.16b, v7.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[8];
    _t.u8[1] = (c)->q[7].u8[9];
    _t.u8[2] = (c)->q[7].u8[10];
    _t.u8[3] = (c)->q[7].u8[11];
    _t.u8[4] = (c)->q[7].u8[12];
    _t.u8[5] = (c)->q[7].u8[13];
    _t.u8[6] = (c)->q[7].u8[14];
    _t.u8[7] = (c)->q[7].u8[15];
    _t.u8[8] = (c)->q[7].u8[0];
    _t.u8[9] = (c)->q[7].u8[1];
    _t.u8[10] = (c)->q[7].u8[2];
    _t.u8[11] = (c)->q[7].u8[3];
    _t.u8[12] = (c)->q[7].u8[4];
    _t.u8[13] = (c)->q[7].u8[5];
    _t.u8[14] = (c)->q[7].u8[6];
    _t.u8[15] = (c)->q[7].u8[7];
    (c)->q[7] = _t; }
  /* cd6f8: ldr q19, [x5, #0x990] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 5) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 5) + INT64_C(2448)) + 8));
  /* cd6fc: ldr q20, [x6, #0x9d0] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 6) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 6) + INT64_C(2512)) + 8));
  /* cd700: ldr q22, [x27, #0xaa0] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 27) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 27) + INT64_C(2720)) + 8));
  /* cd704: ldur q29, [x11, #-0xec] */
  arc_q_w(c, 29, arc_ld64((ARC_X_R(c, 11) + INT64_C(-236))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-236)) + 8));
  /* cd708: ldur q30, [x11, #-0xfc] */
  arc_q_w(c, 30, arc_ld64((ARC_X_R(c, 11) + INT64_C(-252))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-252)) + 8));
  /* cd70c: fcmgt v3.4s, v1.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[3].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[3].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[3].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[3].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[3] = _t; }
  /* cd710: fcmgt v5.4s, v1.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[5].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[5].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[5].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[5].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* cd714: ext v16.16b, v16.16b, v16.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[8];
    _t.u8[1] = (c)->q[16].u8[9];
    _t.u8[2] = (c)->q[16].u8[10];
    _t.u8[3] = (c)->q[16].u8[11];
    _t.u8[4] = (c)->q[16].u8[12];
    _t.u8[5] = (c)->q[16].u8[13];
    _t.u8[6] = (c)->q[16].u8[14];
    _t.u8[7] = (c)->q[16].u8[15];
    _t.u8[8] = (c)->q[16].u8[0];
    _t.u8[9] = (c)->q[16].u8[1];
    _t.u8[10] = (c)->q[16].u8[2];
    _t.u8[11] = (c)->q[16].u8[3];
    _t.u8[12] = (c)->q[16].u8[4];
    _t.u8[13] = (c)->q[16].u8[5];
    _t.u8[14] = (c)->q[16].u8[6];
    _t.u8[15] = (c)->q[16].u8[7];
    (c)->q[16] = _t; }
  /* cd718: fcmgt v2.4s, v1.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[2].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[2].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[2].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[2].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[2] = _t; }
  /* cd71c: fcmgt v4.4s, v1.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[4].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[4].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[4].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[4].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[4] = _t; }
  /* cd720: fcmgt v6.4s, v1.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[6].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[6].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[6].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[6].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[6] = _t; }
  /* cd724: fcmgt v7.4s, v1.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[7].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[7].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[7].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[7].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* cd728: ushll2 v25.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[25] = _t; }
  /* cd72c: ushll v3.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* cd730: ushll v27.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[27] = _t; }
  /* cd734: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* cd738: ushll v24.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* cd73c: ushll2 v2.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* cd740: ushll v26.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[26] = _t; }
  /* cd744: ushll2 v4.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* cd748: fcmgt v16.4s, v1.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[16].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[16].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[16].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[16].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* cd74c: and v3.16b, v3.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] & (c)->q[18].u8[15];
    (c)->q[3] = _t; }
  /* cd750: and v17.16b, v25.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* cd754: and v18.16b, v5.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[21].u8[15];
    (c)->q[18] = _t; }
  /* cd758: rev64 v21.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[23].u32[1];
    _t.u32[1] = (c)->q[23].u32[0];
    _t.u32[2] = (c)->q[23].u32[3];
    _t.u32[3] = (c)->q[23].u32[2];
    (c)->q[21] = _t; }
  /* cd75c: and v2.16b, v2.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] & (c)->q[8].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] & (c)->q[8].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] & (c)->q[8].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] & (c)->q[8].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] & (c)->q[8].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] & (c)->q[8].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] & (c)->q[8].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] & (c)->q[8].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] & (c)->q[8].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] & (c)->q[8].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] & (c)->q[8].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] & (c)->q[8].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] & (c)->q[8].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] & (c)->q[8].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] & (c)->q[8].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] & (c)->q[8].u8[15];
    (c)->q[2] = _t; }
  /* cd760: and v24.16b, v24.16b, v9.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[9].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[9].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[9].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[9].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[9].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[9].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[9].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[9].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[9].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[9].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[9].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[9].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[9].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[9].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[9].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[9].u8[15];
    (c)->q[24] = _t; }
  /* cd764: and v4.16b, v4.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[19].u8[15];
    (c)->q[4] = _t; }
  /* cd768: and v19.16b, v26.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[20].u8[15];
    (c)->q[19] = _t; }
  /* cd76c: and v20.16b, v27.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[22].u8[15];
    (c)->q[20] = _t; }
  /* cd770: ushll2 v22.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[22] = _t; }
  /* cd774: ushll v6.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[6] = _t; }
  /* cd778: ldr q23, [x19, #0xd60] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 19) + INT64_C(3424)) + 8));
  /* cd77c: ldr q26, [x21, #0x970] */
  arc_q_w(c, 26, arc_ld64((ARC_X_R(c, 21) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 21) + INT64_C(2416)) + 8));
  /* cd780: ldr q27, [x12, #0xc30] */
  arc_q_w(c, 27, arc_ld64((ARC_X_R(c, 12) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3120)) + 8));
  /* cd784: orr v5.16b, v19.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[24].u8[15];
    (c)->q[5] = _t; }
  /* cd788: orr v4.16b, v4.16b, v2.16b */
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
    (c)->q[4] = _t; }
  /* cd78c: ldr q19, [x30, #0x9e0] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 30) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 30) + INT64_C(2528)) + 8));
  /* cd790: orr v2.16b, v20.16b, v3.16b */
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
    (c)->q[2] = _t; }
  /* cd794: orr v3.16b, v18.16b, v17.16b */
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
    (c)->q[3] = _t; }
  /* cd798: ldr q18, [x28, #0xd10] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 28) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 28) + INT64_C(3344)) + 8));
  /* cd79c: ext v20.16b, v21.16b, v21.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[8];
    _t.u8[1] = (c)->q[21].u8[9];
    _t.u8[2] = (c)->q[21].u8[10];
    _t.u8[3] = (c)->q[21].u8[11];
    _t.u8[4] = (c)->q[21].u8[12];
    _t.u8[5] = (c)->q[21].u8[13];
    _t.u8[6] = (c)->q[21].u8[14];
    _t.u8[7] = (c)->q[21].u8[15];
    _t.u8[8] = (c)->q[21].u8[0];
    _t.u8[9] = (c)->q[21].u8[1];
    _t.u8[10] = (c)->q[21].u8[2];
    _t.u8[11] = (c)->q[21].u8[3];
    _t.u8[12] = (c)->q[21].u8[4];
    _t.u8[13] = (c)->q[21].u8[5];
    _t.u8[14] = (c)->q[21].u8[6];
    _t.u8[15] = (c)->q[21].u8[7];
    (c)->q[20] = _t; }
  /* cd7a0: ushll2 v17.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[17] = _t; }
  /* cd7a4: ldur q21, [x11, #-0x8c] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 11) + INT64_C(-140))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-140)) + 8));
  /* cd7a8: ushll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* cd7ac: ushll v24.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[24] = _t; }
  /* cd7b0: and v18.16b, v6.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] & (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* cd7b4: ldur q6, [x11, #-0x9c] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 11) + INT64_C(-156))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-156)) + 8));
  /* cd7b8: and v19.16b, v22.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[19].u8[15];
    (c)->q[19] = _t; }
  /* cd7bc: ldr q22, [x1, #0xb50] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 1) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 1) + INT64_C(2896)) + 8));
  /* cd7c0: rev64 v21.4s, v21.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[21].u32[1];
    _t.u32[1] = (c)->q[21].u32[0];
    _t.u32[2] = (c)->q[21].u32[3];
    _t.u32[3] = (c)->q[21].u32[2];
    (c)->q[21] = _t; }
  /* cd7c4: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* cd7c8: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd7cc: rev64 v25.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[6].u32[1];
    _t.u32[1] = (c)->q[6].u32[0];
    _t.u32[2] = (c)->q[6].u32[3];
    _t.u32[3] = (c)->q[6].u32[2];
    (c)->q[25] = _t; }
  /* cd7d0: fcmgt v20.4s, v1.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[20].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[20].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[20].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[20].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[20] = _t; }
  /* cd7d4: and v6.16b, v7.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[22].u8[15];
    (c)->q[6] = _t; }
  /* cd7d8: and v7.16b, v17.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[23].u8[15];
    (c)->q[7] = _t; }
  /* cd7dc: and v22.16b, v24.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[26].u8[15];
    (c)->q[22] = _t; }
  /* cd7e0: ldur q23, [x11, #-0xac] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 11) + INT64_C(-172))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-172)) + 8));
  /* cd7e4: ldr q17, [x20, #0xbc0] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 20) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 20) + INT64_C(3008)) + 8));
  /* cd7e8: ldur q24, [x11, #-0xbc] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 11) + INT64_C(-188))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-188)) + 8));
  /* cd7ec: ldr q26, [x23, #0x9f0] */
  arc_q_w(c, 26, arc_ld64((ARC_X_R(c, 23) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 23) + INT64_C(2544)) + 8));
  /* cd7f0: rev64 v23.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[23].u32[1];
    _t.u32[1] = (c)->q[23].u32[0];
    _t.u32[2] = (c)->q[23].u32[3];
    _t.u32[3] = (c)->q[23].u32[2];
    (c)->q[23] = _t; }
  /* cd7f4: ext v21.16b, v21.16b, v21.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[8];
    _t.u8[1] = (c)->q[21].u8[9];
    _t.u8[2] = (c)->q[21].u8[10];
    _t.u8[3] = (c)->q[21].u8[11];
    _t.u8[4] = (c)->q[21].u8[12];
    _t.u8[5] = (c)->q[21].u8[13];
    _t.u8[6] = (c)->q[21].u8[14];
    _t.u8[7] = (c)->q[21].u8[15];
    _t.u8[8] = (c)->q[21].u8[0];
    _t.u8[9] = (c)->q[21].u8[1];
    _t.u8[10] = (c)->q[21].u8[2];
    _t.u8[11] = (c)->q[21].u8[3];
    _t.u8[12] = (c)->q[21].u8[4];
    _t.u8[13] = (c)->q[21].u8[5];
    _t.u8[14] = (c)->q[21].u8[6];
    _t.u8[15] = (c)->q[21].u8[7];
    (c)->q[21] = _t; }
  /* cd7f8: and v16.16b, v16.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[17].u8[15];
    (c)->q[16] = _t; }
  /* cd7fc: orr v18.16b, v22.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* cd800: ext v17.16b, v25.16b, v25.16b, #8 */
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
    (c)->q[17] = _t; }
  /* cd804: ushll v25.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[20].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[20].u32[1]) << 0);
    (c)->q[25] = _t; }
  /* cd808: rev64 v22.4s, v24.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[24].u32[1];
    _t.u32[1] = (c)->q[24].u32[0];
    _t.u32[2] = (c)->q[24].u32[3];
    _t.u32[3] = (c)->q[24].u32[2];
    (c)->q[22] = _t; }
  /* cd80c: ushll2 v20.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[20].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[20].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* cd810: ldr q24, [x22, #0xb40] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 22) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 22) + INT64_C(2880)) + 8));
  /* cd814: orr v16.16b, v16.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[19].u8[15];
    (c)->q[16] = _t; }
  /* cd818: orr v5.16b, v18.16b, v5.16b */
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
  /* cd81c: ext v18.16b, v23.16b, v23.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[8];
    _t.u8[1] = (c)->q[23].u8[9];
    _t.u8[2] = (c)->q[23].u8[10];
    _t.u8[3] = (c)->q[23].u8[11];
    _t.u8[4] = (c)->q[23].u8[12];
    _t.u8[5] = (c)->q[23].u8[13];
    _t.u8[6] = (c)->q[23].u8[14];
    _t.u8[7] = (c)->q[23].u8[15];
    _t.u8[8] = (c)->q[23].u8[0];
    _t.u8[9] = (c)->q[23].u8[1];
    _t.u8[10] = (c)->q[23].u8[2];
    _t.u8[11] = (c)->q[23].u8[3];
    _t.u8[12] = (c)->q[23].u8[4];
    _t.u8[13] = (c)->q[23].u8[5];
    _t.u8[14] = (c)->q[23].u8[6];
    _t.u8[15] = (c)->q[23].u8[7];
    (c)->q[18] = _t; }
  /* cd820: fcmgt v19.4s, v1.4s, v21.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[21].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[21].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[21].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[21].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* cd824: and v21.16b, v25.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[26].u8[15];
    (c)->q[21] = _t; }
  /* cd828: ldur q25, [x11, #-0xcc] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 11) + INT64_C(-204))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-204)) + 8));
  /* cd82c: fcmgt v17.4s, v1.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[17].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[17].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[17].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[17].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[17] = _t; }
  /* cd830: and v20.16b, v20.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[24].u8[15];
    (c)->q[20] = _t; }
  /* cd834: ldur q23, [x11, #-0xdc] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 11) + INT64_C(-220))), arc_ld64((ARC_X_R(c, 11) + INT64_C(-220)) + 8));
  /* cd838: orr v4.16b, v16.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* cd83c: ext v16.16b, v22.16b, v22.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[8];
    _t.u8[1] = (c)->q[22].u8[9];
    _t.u8[2] = (c)->q[22].u8[10];
    _t.u8[3] = (c)->q[22].u8[11];
    _t.u8[4] = (c)->q[22].u8[12];
    _t.u8[5] = (c)->q[22].u8[13];
    _t.u8[6] = (c)->q[22].u8[14];
    _t.u8[7] = (c)->q[22].u8[15];
    _t.u8[8] = (c)->q[22].u8[0];
    _t.u8[9] = (c)->q[22].u8[1];
    _t.u8[10] = (c)->q[22].u8[2];
    _t.u8[11] = (c)->q[22].u8[3];
    _t.u8[12] = (c)->q[22].u8[4];
    _t.u8[13] = (c)->q[22].u8[5];
    _t.u8[14] = (c)->q[22].u8[6];
    _t.u8[15] = (c)->q[22].u8[7];
    (c)->q[16] = _t; }
  /* cd840: rev64 v22.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[25].u32[1];
    _t.u32[1] = (c)->q[25].u32[0];
    _t.u32[2] = (c)->q[25].u32[3];
    _t.u32[3] = (c)->q[25].u32[2];
    (c)->q[22] = _t; }
  /* cd844: fcmgt v18.4s, v1.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[18].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[18].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[18].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[18].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[18] = _t; }
  /* cd848: orr v6.16b, v21.16b, v6.16b */
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
  /* cd84c: ldr q25, [x24, #0x980] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 24) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 24) + INT64_C(2432)) + 8));
  /* cd850: sshll2 v21.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* cd854: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* cd858: ldr q26, [x25, #0xd30] */
  arc_q_w(c, 26, arc_ld64((ARC_X_R(c, 25) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 25) + INT64_C(3376)) + 8));
  /* cd85c: sshll2 v24.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* cd860: rev64 v23.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[23].u32[1];
    _t.u32[1] = (c)->q[23].u32[0];
    _t.u32[2] = (c)->q[23].u32[3];
    _t.u32[3] = (c)->q[23].u32[2];
    (c)->q[23] = _t; }
  /* cd864: orr v7.16b, v20.16b, v7.16b */
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
  /* cd868: ext v22.16b, v22.16b, v22.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[8];
    _t.u8[1] = (c)->q[22].u8[9];
    _t.u8[2] = (c)->q[22].u8[10];
    _t.u8[3] = (c)->q[22].u8[11];
    _t.u8[4] = (c)->q[22].u8[12];
    _t.u8[5] = (c)->q[22].u8[13];
    _t.u8[6] = (c)->q[22].u8[14];
    _t.u8[7] = (c)->q[22].u8[15];
    _t.u8[8] = (c)->q[22].u8[0];
    _t.u8[9] = (c)->q[22].u8[1];
    _t.u8[10] = (c)->q[22].u8[2];
    _t.u8[11] = (c)->q[22].u8[3];
    _t.u8[12] = (c)->q[22].u8[4];
    _t.u8[13] = (c)->q[22].u8[5];
    _t.u8[14] = (c)->q[22].u8[6];
    _t.u8[15] = (c)->q[22].u8[7];
    (c)->q[22] = _t; }
  /* cd86c: fcmgt v16.4s, v1.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[16].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[16].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[16].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[16].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* cd870: sshll v17.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* cd874: and v19.16b, v19.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[25].u8[15];
    (c)->q[19] = _t; }
  /* cd878: and v20.16b, v21.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[26].u8[15];
    (c)->q[20] = _t; }
  /* cd87c: ldr q21, [x12, #0xb10] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 12) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2832)) + 8));
  /* cd880: sshll v25.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[25] = _t; }
  /* cd884: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd888: and v24.16b, v24.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[27].u8[15];
    (c)->q[24] = _t; }
  /* cd88c: ldr q27, [x12, #0xa60] */
  arc_q_w(c, 27, arc_ld64((ARC_X_R(c, 12) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2656)) + 8));
  /* cd890: sshll2 v18.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* cd894: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd898: ext v23.16b, v23.16b, v23.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[8];
    _t.u8[1] = (c)->q[23].u8[9];
    _t.u8[2] = (c)->q[23].u8[10];
    _t.u8[3] = (c)->q[23].u8[11];
    _t.u8[4] = (c)->q[23].u8[12];
    _t.u8[5] = (c)->q[23].u8[13];
    _t.u8[6] = (c)->q[23].u8[14];
    _t.u8[7] = (c)->q[23].u8[15];
    _t.u8[8] = (c)->q[23].u8[0];
    _t.u8[9] = (c)->q[23].u8[1];
    _t.u8[10] = (c)->q[23].u8[2];
    _t.u8[11] = (c)->q[23].u8[3];
    _t.u8[12] = (c)->q[23].u8[4];
    _t.u8[13] = (c)->q[23].u8[5];
    _t.u8[14] = (c)->q[23].u8[6];
    _t.u8[15] = (c)->q[23].u8[7];
    (c)->q[23] = _t; }
  /* cd89c: fcmgt v22.4s, v1.4s, v22.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[22].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[22].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[22].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[22].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* cd8a0: ldr q28, [x12, #0xd70] */
  arc_q_w(c, 28, arc_ld64((ARC_X_R(c, 12) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3440)) + 8));
  /* cd8a4: and v25.16b, v25.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] & (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] & (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] & (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] & (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] & (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] & (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] & (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] & (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] & (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] & (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] & (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] & (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] & (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] & (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] & (c)->q[27].u8[15];
    (c)->q[25] = _t; }
  /* cd8a8: sshll v26.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[16].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[16].i32[1]) << 0);
    (c)->q[26] = _t; }
  /* cd8ac: sshll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[16].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[16].i32[3]) << 0);
    (c)->q[16] = _t; }
  /* cd8b0: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd8b4: and v18.16b, v18.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[28].u8[15];
    (c)->q[18] = _t; }
  /* cd8b8: rev64 v28.4s, v29.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[29].u32[1];
    _t.u32[1] = (c)->q[29].u32[0];
    _t.u32[2] = (c)->q[29].u32[3];
    _t.u32[3] = (c)->q[29].u32[2];
    (c)->q[28] = _t; }
  /* cd8bc: ldr q27, [x12, #0x9a0] */
  arc_q_w(c, 27, arc_ld64((ARC_X_R(c, 12) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2464)) + 8));
  /* cd8c0: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd8c4: rev64 v29.4s, v30.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[30].u32[1];
    _t.u32[1] = (c)->q[30].u32[0];
    _t.u32[2] = (c)->q[30].u32[3];
    _t.u32[3] = (c)->q[30].u32[2];
    (c)->q[29] = _t; }
  /* cd8c8: orr v19.16b, v25.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[19].u8[15];
    (c)->q[19] = _t; }
  /* cd8cc: ldr q25, [x12, #0xbb0] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 12) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2992)) + 8));
  /* cd8d0: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd8d4: fcmgt v23.4s, v1.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[23].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[23].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[23].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[23].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* cd8d8: and v16.16b, v16.16b, v27.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[27].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[27].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[27].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[27].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[27].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[27].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[27].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[27].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[27].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[27].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[27].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[27].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[27].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[27].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[27].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[27].u8[15];
    (c)->q[16] = _t; }
  /* cd8dc: sshll v27.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[27] = _t; }
  /* cd8e0: sshll2 v22.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* cd8e4: ldr q30, [x12, #0xbf0] */
  arc_q_w(c, 30, arc_ld64((ARC_X_R(c, 12) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3056)) + 8));
  /* cd8e8: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd8ec: orr v18.16b, v18.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[20].u8[15];
    (c)->q[18] = _t; }
  /* cd8f0: ldr q20, [x12, #0x9b0] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 12) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2480)) + 8));
  /* cd8f4: ext v28.16b, v28.16b, v28.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[8];
    _t.u8[1] = (c)->q[28].u8[9];
    _t.u8[2] = (c)->q[28].u8[10];
    _t.u8[3] = (c)->q[28].u8[11];
    _t.u8[4] = (c)->q[28].u8[12];
    _t.u8[5] = (c)->q[28].u8[13];
    _t.u8[6] = (c)->q[28].u8[14];
    _t.u8[7] = (c)->q[28].u8[15];
    _t.u8[8] = (c)->q[28].u8[0];
    _t.u8[9] = (c)->q[28].u8[1];
    _t.u8[10] = (c)->q[28].u8[2];
    _t.u8[11] = (c)->q[28].u8[3];
    _t.u8[12] = (c)->q[28].u8[4];
    _t.u8[13] = (c)->q[28].u8[5];
    _t.u8[14] = (c)->q[28].u8[6];
    _t.u8[15] = (c)->q[28].u8[7];
    (c)->q[28] = _t; }
  /* cd8f8: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd8fc: and v25.16b, v27.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[25].u8[15];
    (c)->q[25] = _t; }
  /* cd900: ext v29.16b, v29.16b, v29.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[29].u8[8];
    _t.u8[1] = (c)->q[29].u8[9];
    _t.u8[2] = (c)->q[29].u8[10];
    _t.u8[3] = (c)->q[29].u8[11];
    _t.u8[4] = (c)->q[29].u8[12];
    _t.u8[5] = (c)->q[29].u8[13];
    _t.u8[6] = (c)->q[29].u8[14];
    _t.u8[7] = (c)->q[29].u8[15];
    _t.u8[8] = (c)->q[29].u8[0];
    _t.u8[9] = (c)->q[29].u8[1];
    _t.u8[10] = (c)->q[29].u8[2];
    _t.u8[11] = (c)->q[29].u8[3];
    _t.u8[12] = (c)->q[29].u8[4];
    _t.u8[13] = (c)->q[29].u8[5];
    _t.u8[14] = (c)->q[29].u8[6];
    _t.u8[15] = (c)->q[29].u8[7];
    (c)->q[29] = _t; }
  /* cd904: and v20.16b, v22.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[20].u8[15];
    (c)->q[20] = _t; }
  /* cd908: sshll2 v27.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* cd90c: ldr q22, [x12, #0xb60] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 12) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2912)) + 8));
  /* cd910: and v17.16b, v17.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[21].u8[15];
    (c)->q[17] = _t; }
  /* cd914: and v21.16b, v26.16b, v30.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[0] & (c)->q[30].u8[0];
    _t.u8[1] = (c)->q[26].u8[1] & (c)->q[30].u8[1];
    _t.u8[2] = (c)->q[26].u8[2] & (c)->q[30].u8[2];
    _t.u8[3] = (c)->q[26].u8[3] & (c)->q[30].u8[3];
    _t.u8[4] = (c)->q[26].u8[4] & (c)->q[30].u8[4];
    _t.u8[5] = (c)->q[26].u8[5] & (c)->q[30].u8[5];
    _t.u8[6] = (c)->q[26].u8[6] & (c)->q[30].u8[6];
    _t.u8[7] = (c)->q[26].u8[7] & (c)->q[30].u8[7];
    _t.u8[8] = (c)->q[26].u8[8] & (c)->q[30].u8[8];
    _t.u8[9] = (c)->q[26].u8[9] & (c)->q[30].u8[9];
    _t.u8[10] = (c)->q[26].u8[10] & (c)->q[30].u8[10];
    _t.u8[11] = (c)->q[26].u8[11] & (c)->q[30].u8[11];
    _t.u8[12] = (c)->q[26].u8[12] & (c)->q[30].u8[12];
    _t.u8[13] = (c)->q[26].u8[13] & (c)->q[30].u8[13];
    _t.u8[14] = (c)->q[26].u8[14] & (c)->q[30].u8[14];
    _t.u8[15] = (c)->q[26].u8[15] & (c)->q[30].u8[15];
    (c)->q[21] = _t; }
  /* cd918: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* cd91c: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd920: orr v16.16b, v16.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[24].u8[15];
    (c)->q[16] = _t; }
  /* cd924: orr v19.16b, v25.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[25].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[25].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[25].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[25].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[25].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[25].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[25].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[25].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[25].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[25].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[25].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[25].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[25].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[25].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[25].u8[15] | (c)->q[19].u8[15];
    (c)->q[19] = _t; }
  /* cd928: ldr q24, [x12, #0xcb0] */
  arc_q_w(c, 24, arc_ld64((ARC_X_R(c, 12) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3248)) + 8));
  /* cd92c: orr v18.16b, v20.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[18].u8[15];
    (c)->q[18] = _t; }
  /* cd930: fcmgt v20.4s, v1.4s, v28.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[28].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[28].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[28].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[28].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[20] = _t; }
  /* cd934: and v22.16b, v27.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] & (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] & (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] & (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] & (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] & (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] & (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] & (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] & (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] & (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] & (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] & (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] & (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] & (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] & (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] & (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] & (c)->q[22].u8[15];
    (c)->q[22] = _t; }
  /* cd938: orr v17.16b, v21.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* cd93c: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd940: and v21.16b, v23.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[24].u8[15];
    (c)->q[21] = _t; }
  /* cd944: fcmgt v23.4s, v1.4s, v29.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[1].f32[0] > (c)->q[29].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[1].f32[1] > (c)->q[29].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[1].f32[2] > (c)->q[29].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[1].f32[3] > (c)->q[29].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* cd948: orr v2.16b, v6.16b, v2.16b */
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
  /* cd94c: orr v3.16b, v7.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* cd950: orr v4.16b, v18.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* cd954: orr v5.16b, v19.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* cd958: orr v6.16b, v22.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[16].u8[15];
    (c)->q[6] = _t; }
  /* cd95c: sshll v16.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[16] = _t; }
  /* cd960: orr v7.16b, v21.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[17].u8[15];
    (c)->q[7] = _t; }
  /* cd964: sshll2 v17.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[17] = _t; }
  /* cd968: ldr q20, [x12, #0xc80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 12) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3200)) + 8));
  /* cd96c: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd970: sshll v18.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[18] = _t; }
  /* cd974: sshll2 v19.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[19] = _t; }
  /* cd978: ldr q21, [x12, #0xb20] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 12) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2848)) + 8));
  /* cd97c: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd980: orr v3.16b, v6.16b, v3.16b */
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
  /* cd984: ldr q22, [x12, #0xa00] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 12) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2560)) + 8));
  /* cd988: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cd98c: orr v2.16b, v7.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* cd990: ldr q23, [x12, #0xc40] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 12) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3136)) + 8));
  /* cd994: and v6.16b, v16.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[20].u8[15];
    (c)->q[6] = _t; }
  /* cd998: and v7.16b, v17.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[21].u8[15];
    (c)->q[7] = _t; }
  /* cd99c: and v16.16b, v19.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[22].u8[15];
    (c)->q[16] = _t; }
  /* cd9a0: and v17.16b, v18.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[23].u8[15];
    (c)->q[17] = _t; }
  /* cd9a4: orr v5.16b, v6.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* cd9a8: orr v4.16b, v7.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* cd9ac: orr v3.16b, v16.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* cd9b0: orr v2.16b, v17.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* cd9b4: orr v3.16b, v3.16b, v4.16b */
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
    (c)->q[3] = _t; }
  /* cd9b8: orr v2.16b, v2.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[5].u8[15];
    (c)->q[2] = _t; }
  /* cd9bc: orr v2.16b, v2.16b, v3.16b */
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
  /* cd9c0: ext v3.16b, v2.16b, v2.16b, #8 */
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
    (c)->q[3] = _t; }
  /* cd9c4: orr v2.8b, v2.8b, v3.8b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[3].u8[7];
    (c)->q[2] = _t; }
  /* cd9c8: fmov x12, d2 */
  ARC_X_W(c, 12, ARC_DU_R(c, 2));
  /* cd9cc: cbz x13, #0xcd37c */
  if ((ARC_X_R(c, 13)) == 0) goto L_cd37c;
L_cd9d0:;
  /* cd9d0: cbz x12, #0xcd37c */
  if ((ARC_X_R(c, 12)) == 0) goto L_cd37c;
L_cd9d4:;
  /* cd9d4: rbit x14, x12 */
  ARC_X_W(c, 14, arc_rbit64(ARC_X_R(c, 12)));
  /* cd9d8: rbit x15, x13 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 13)));
  /* cd9dc: sub x16, x12, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* cd9e0: sub x17, x13, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* cd9e4: and x12, x16, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 16) & ARC_X_R(c, 12)));
  /* cd9e8: clz x14, x14 */
  ARC_X_W(c, 14, arc_clz64(ARC_X_R(c, 14)));
  /* cd9ec: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* cd9f0: and x13, x17, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) & ARC_X_R(c, 13)));
  /* cd9f4: sub x14, x11, x14, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* cd9f8: ldr s2, [x10, x15, lsl #2] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 15)) << 2))));
  /* cd9fc: ldr s3, [x14] */
  arc_su_w(c, 3, arc_ld32(ARC_X_R(c, 14)));
  /* cda00: str s3, [x10, x15, lsl #2] */
  arc_st32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 15)) << 2)), (c)->q[3].u32[0]);
  /* cda04: str s2, [x14] */
  arc_st32(ARC_X_R(c, 14), (c)->q[2].u32[0]);
  /* cda08: cbz x12, #0xcd37c */
  if ((ARC_X_R(c, 12)) == 0) goto L_cd37c;
  /* cda0c: cbnz x13, #0xcd9d4 */
  if ((ARC_X_R(c, 13)) != 0) goto L_cd9d4;
  /* cda10: b #0xcd37c */
  goto L_cd37c;
L_cda14:;
  /* cda14: asr x14, x13, #2 */
  ARC_X_W(c, 14, ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(2)) & 63))));
  /* cda18: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* cda1c: mov w15, #1 */
  ARC_W_W(c, 15, UINT64_C(1));
  /* cda20: b #0xcda58 */
  goto L_cda58;
L_cda24:;
  /* cda24: asr x14, x14, #2 */
  ARC_X_W(c, 14, ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(2)) & 63))));
  /* cda28: orr x16, x12, x13 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) | ARC_X_R(c, 13)));
  /* cda2c: cbz x16, #0xcda58 */
  if ((ARC_X_R(c, 16)) == 0) goto L_cda58;
  /* cda30: sub x14, x14, #0x3f */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(63)));
  /* cda34: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* cda38: mov w16, #0x40 */
  ARC_W_W(c, 16, UINT64_C(64));
  /* cda3c: mov w20, #4 */
  ARC_W_W(c, 20, UINT64_C(4));
  /* cda40: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* cda44: mov w22, #8 */
  ARC_W_W(c, 22, UINT64_C(8));
  /* cda48: mov x24, #-1 */
  ARC_X_W(c, 24, UINT64_C(18446744073709551615));
  /* cda4c: cbz x13, #0xcda78 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cda78;
  /* cda50: cbnz w15, #0xcdb9c */
  if ((ARC_W_R(c, 15)) != 0) goto L_cdb9c;
  /* cda54: b #0xcdcc8 */
  goto L_cdcc8;
L_cda58:;
  /* cda58: add x13, x14, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 14) + UINT64_C(1)));
  /* cda5c: mov w20, #4 */
  ARC_W_W(c, 20, UINT64_C(4));
  /* cda60: mov w21, #1 */
  ARC_W_W(c, 21, UINT64_C(1));
  /* cda64: add x14, x13, x13, lsr #63 */
  ARC_X_W(c, 14, (ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 13)) >> 63)));
  /* cda68: mov w22, #8 */
  ARC_W_W(c, 22, UINT64_C(8));
  /* cda6c: mov x24, #-1 */
  ARC_X_W(c, 24, UINT64_C(18446744073709551615));
  /* cda70: asr x14, x14, #1 */
  ARC_X_W(c, 14, ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(1)) & 63))));
  /* cda74: sub x17, x13, x14 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - ARC_X_R(c, 14)));
L_cda78:;
  /* cda78: cmp x14, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1));
  /* cda7c: b.lt #0xcda98 */
  if (ARC_COND(c, 11)) goto L_cda98;
  /* cda80: cmp x14, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8));
  /* cda84: b.hs #0xcdaa0 */
  if (ARC_COND(c, 2)) goto L_cdaa0;
  /* cda88: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* cda8c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cda90: mov x19, x10 */
  ARC_X_W(c, 19, ARC_X_R(c, 10));
  /* cda94: b #0xcdb70 */
  goto L_cdb70;
L_cda98:;
  /* cda98: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cda9c: b #0xcdb90 */
  goto L_cdb90;
L_cdaa0:;
  /* cdaa0: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cdaa4: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* cdaa8: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cdaac: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* cdab0: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* cdab4: and x16, x14, #0x7ffffffffffffff8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 14) & UINT64_C(9223372036854775800)));
  /* cdab8: dup v5.4s, v0.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0]);
    _t.u32[1] = ((c)->q[0].u32[0]);
    _t.u32[2] = ((c)->q[0].u32[0]);
    _t.u32[3] = ((c)->q[0].u32[0]);
    (c)->q[5] = _t; }
  /* cdabc: ldr q6, [x13, #0xc10] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 13) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3088)) + 8));
  /* cdac0: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* cdac4: add x19, x10, x16, lsl #2 */
  ARC_X_W(c, 19, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* cdac8: ldr q7, [x13, #0xa80] */
  arc_q_w(c, 7, arc_ld64((ARC_X_R(c, 13) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2688)) + 8));
  /* cdacc: add x13, x10, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 10) + UINT64_C(16)));
  /* cdad0: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
L_cdad4:;
  /* cdad4: ldp q16, q17, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 16, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cdad8: dup v18.2d, x20 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 20));
    _t.u64[1] = (ARC_X_R(c, 20));
    (c)->q[18] = _t; }
  /* cdadc: dup v19.2d, x21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 21));
    _t.u64[1] = (ARC_X_R(c, 21));
    (c)->q[19] = _t; }
  /* cdae0: subs x1, x1, #8 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 1), UINT64_C(8)));
  /* cdae4: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* cdae8: fcmgt v16.4s, v5.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[5].f32[0] > (c)->q[16].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[5].f32[1] > (c)->q[16].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[5].f32[2] > (c)->q[16].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[5].f32[3] > (c)->q[16].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* cdaec: fcmgt v17.4s, v5.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[5].f32[0] > (c)->q[17].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[5].f32[1] > (c)->q[17].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[5].f32[2] > (c)->q[17].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[5].f32[3] > (c)->q[17].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[17] = _t; }
  /* cdaf0: add v22.2d, v6.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[18].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[18].u64[1];
    (c)->q[22] = _t; }
  /* cdaf4: add v18.2d, v7.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[7].u64[0] + (c)->q[18].u64[0];
    _t.u64[1] = (c)->q[7].u64[1] + (c)->q[18].u64[1];
    (c)->q[18] = _t; }
  /* cdaf8: mvn v16.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[16].u8[0];
    _t.u8[1] = ~(c)->q[16].u8[1];
    _t.u8[2] = ~(c)->q[16].u8[2];
    _t.u8[3] = ~(c)->q[16].u8[3];
    _t.u8[4] = ~(c)->q[16].u8[4];
    _t.u8[5] = ~(c)->q[16].u8[5];
    _t.u8[6] = ~(c)->q[16].u8[6];
    _t.u8[7] = ~(c)->q[16].u8[7];
    _t.u8[8] = ~(c)->q[16].u8[8];
    _t.u8[9] = ~(c)->q[16].u8[9];
    _t.u8[10] = ~(c)->q[16].u8[10];
    _t.u8[11] = ~(c)->q[16].u8[11];
    _t.u8[12] = ~(c)->q[16].u8[12];
    _t.u8[13] = ~(c)->q[16].u8[13];
    _t.u8[14] = ~(c)->q[16].u8[14];
    _t.u8[15] = ~(c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* cdafc: mvn v17.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ~(c)->q[17].u8[0];
    _t.u8[1] = ~(c)->q[17].u8[1];
    _t.u8[2] = ~(c)->q[17].u8[2];
    _t.u8[3] = ~(c)->q[17].u8[3];
    _t.u8[4] = ~(c)->q[17].u8[4];
    _t.u8[5] = ~(c)->q[17].u8[5];
    _t.u8[6] = ~(c)->q[17].u8[6];
    _t.u8[7] = ~(c)->q[17].u8[7];
    _t.u8[8] = ~(c)->q[17].u8[8];
    _t.u8[9] = ~(c)->q[17].u8[9];
    _t.u8[10] = ~(c)->q[17].u8[10];
    _t.u8[11] = ~(c)->q[17].u8[11];
    _t.u8[12] = ~(c)->q[17].u8[12];
    _t.u8[13] = ~(c)->q[17].u8[13];
    _t.u8[14] = ~(c)->q[17].u8[14];
    _t.u8[15] = ~(c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* cdb00: ushll2 v20.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* cdb04: ushll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* cdb08: ushll2 v21.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[21] = _t; }
  /* cdb0c: ushll v17.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[17] = _t; }
  /* cdb10: and v20.16b, v20.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[19].u8[15];
    (c)->q[20] = _t; }
  /* cdb14: and v16.16b, v16.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[19].u8[15];
    (c)->q[16] = _t; }
  /* cdb18: and v21.16b, v21.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[19].u8[15];
    (c)->q[21] = _t; }
  /* cdb1c: and v17.16b, v17.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[19].u8[15];
    (c)->q[17] = _t; }
  /* cdb20: ushl v16.2d, v16.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[16].u64[0], (int8_t)(c)->q[7].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[16].u64[1], (int8_t)(c)->q[7].u64[1]);
    (c)->q[16] = _t; }
  /* cdb24: ushl v19.2d, v20.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[20].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[20].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[19] = _t; }
  /* cdb28: ushl v20.2d, v21.2d, v22.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[21].u64[0], (int8_t)(c)->q[22].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[21].u64[1], (int8_t)(c)->q[22].u64[1]);
    (c)->q[20] = _t; }
  /* cdb2c: dup v21.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[21] = _t; }
  /* cdb30: ushl v17.2d, v17.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[17].u64[0], (int8_t)(c)->q[18].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[17].u64[1], (int8_t)(c)->q[18].u64[1]);
    (c)->q[17] = _t; }
  /* cdb34: orr v2.16b, v19.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* cdb38: orr v1.16b, v16.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* cdb3c: orr v4.16b, v20.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* cdb40: orr v3.16b, v17.16b, v3.16b */
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
  /* cdb44: add v6.2d, v6.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[21].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[21].u64[1];
    (c)->q[6] = _t; }
  /* cdb48: add v7.2d, v7.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[7].u64[0] + (c)->q[21].u64[0];
    _t.u64[1] = (c)->q[7].u64[1] + (c)->q[21].u64[1];
    (c)->q[7] = _t; }
  /* cdb4c: b.ne #0xcdad4 */
  if (ARC_COND(c, 1)) goto L_cdad4;
  /* cdb50: orr v1.16b, v3.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* cdb54: orr v2.16b, v4.16b, v2.16b */
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
  /* cdb58: cmp x14, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 16));
  /* cdb5c: orr v1.16b, v1.16b, v2.16b */
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
  /* cdb60: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* cdb64: orr v1.8b, v1.8b, v2.8b */
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
  /* cdb68: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* cdb6c: b.eq #0xcdb90 */
  if (ARC_COND(c, 0)) goto L_cdb90;
L_cdb70:;
  /* cdb70: ldr s1, [x19], #4 */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 19)));
  ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(4));
  /* cdb74: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* cdb78: cset w1, pl */
  ARC_W_W(c, 1, (ARC_COND(c, 5) ? 1 : 0));
  /* cdb7c: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* cdb80: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* cdb84: cmp x14, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 16));
  /* cdb88: orr x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) | ARC_X_R(c, 13)));
  /* cdb8c: b.ne #0xcdb70 */
  if (ARC_COND(c, 1)) goto L_cdb70;
L_cdb90:;
  /* cdb90: mov x16, x14 */
  ARC_X_W(c, 16, ARC_X_R(c, 14));
  /* cdb94: mov x14, x17 */
  ARC_X_W(c, 14, ARC_X_R(c, 17));
  /* cdb98: cbz w15, #0xcdcc8 */
  if ((ARC_W_R(c, 15)) == 0) goto L_cdcc8;
L_cdb9c:;
  /* cdb9c: cmp x14, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1));
  /* cdba0: b.lt #0xcdbbc */
  if (ARC_COND(c, 11)) goto L_cdbbc;
  /* cdba4: cmp x14, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8));
  /* cdba8: b.hs #0xcdbd0 */
  if (ARC_COND(c, 2)) goto L_cdbd0;
  /* cdbac: mov x15, xzr */
  ARC_X_W(c, 15, ARC_X_R(c, 31));
  /* cdbb0: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* cdbb4: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* cdbb8: b #0xcdca8 */
  goto L_cdca8;
L_cdbbc:;
  /* cdbbc: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* cdbc0: csel x12, x16, xzr, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 31)));
  /* cdbc4: cbz x13, #0xcde6c */
  if ((ARC_X_R(c, 13)) == 0) goto L_cde6c;
  /* cdbc8: sub x11, x11, x14, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* cdbcc: b #0xcdd38 */
  goto L_cdd38;
L_cdbd0:;
  /* cdbd0: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cdbd4: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* cdbd8: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cdbdc: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* cdbe0: movi v4.2d, #0000000000000000 */
  arc_v_clear(c, 4);
  /* cdbe4: and x15, x14, #0x7ffffffffffffff8 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) & UINT64_C(9223372036854775800)));
  /* cdbe8: dup v5.4s, v0.s[0] */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0]);
    _t.u32[1] = ((c)->q[0].u32[0]);
    _t.u32[2] = ((c)->q[0].u32[0]);
    _t.u32[3] = ((c)->q[0].u32[0]);
    (c)->q[5] = _t; }
  /* cdbec: ldr q6, [x12, #0xc10] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 12) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3088)) + 8));
  /* cdbf0: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* cdbf4: sub x17, x11, x15, lsl #2 */
  ARC_X_W(c, 17, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* cdbf8: ldr q7, [x12, #0xa80] */
  arc_q_w(c, 7, arc_ld64((ARC_X_R(c, 12) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 12) + INT64_C(2688)) + 8));
  /* cdbfc: sub x12, x11, #0xc */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) - UINT64_C(12)));
  /* cdc00: mov x1, x15 */
  ARC_X_W(c, 1, ARC_X_R(c, 15));
L_cdc04:;
  /* cdc04: ldp q17, q16, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 17, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cdc08: dup v18.2d, x20 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 20));
    _t.u64[1] = (ARC_X_R(c, 20));
    (c)->q[18] = _t; }
  /* cdc0c: dup v19.2d, x21 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 21));
    _t.u64[1] = (ARC_X_R(c, 21));
    (c)->q[19] = _t; }
  /* cdc10: sub x1, x1, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - UINT64_C(8)));
  /* cdc14: sub x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(32)));
  /* cdc18: rev64 v16.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[16].u32[1];
    _t.u32[1] = (c)->q[16].u32[0];
    _t.u32[2] = (c)->q[16].u32[3];
    _t.u32[3] = (c)->q[16].u32[2];
    (c)->q[16] = _t; }
  /* cdc1c: rev64 v17.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[17].u32[1];
    _t.u32[1] = (c)->q[17].u32[0];
    _t.u32[2] = (c)->q[17].u32[3];
    _t.u32[3] = (c)->q[17].u32[2];
    (c)->q[17] = _t; }
  /* cdc20: add v22.2d, v6.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[18].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[18].u64[1];
    (c)->q[22] = _t; }
  /* cdc24: add v18.2d, v7.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[7].u64[0] + (c)->q[18].u64[0];
    _t.u64[1] = (c)->q[7].u64[1] + (c)->q[18].u64[1];
    (c)->q[18] = _t; }
  /* cdc28: ext v16.16b, v16.16b, v16.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[8];
    _t.u8[1] = (c)->q[16].u8[9];
    _t.u8[2] = (c)->q[16].u8[10];
    _t.u8[3] = (c)->q[16].u8[11];
    _t.u8[4] = (c)->q[16].u8[12];
    _t.u8[5] = (c)->q[16].u8[13];
    _t.u8[6] = (c)->q[16].u8[14];
    _t.u8[7] = (c)->q[16].u8[15];
    _t.u8[8] = (c)->q[16].u8[0];
    _t.u8[9] = (c)->q[16].u8[1];
    _t.u8[10] = (c)->q[16].u8[2];
    _t.u8[11] = (c)->q[16].u8[3];
    _t.u8[12] = (c)->q[16].u8[4];
    _t.u8[13] = (c)->q[16].u8[5];
    _t.u8[14] = (c)->q[16].u8[6];
    _t.u8[15] = (c)->q[16].u8[7];
    (c)->q[16] = _t; }
  /* cdc2c: ext v17.16b, v17.16b, v17.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[8];
    _t.u8[1] = (c)->q[17].u8[9];
    _t.u8[2] = (c)->q[17].u8[10];
    _t.u8[3] = (c)->q[17].u8[11];
    _t.u8[4] = (c)->q[17].u8[12];
    _t.u8[5] = (c)->q[17].u8[13];
    _t.u8[6] = (c)->q[17].u8[14];
    _t.u8[7] = (c)->q[17].u8[15];
    _t.u8[8] = (c)->q[17].u8[0];
    _t.u8[9] = (c)->q[17].u8[1];
    _t.u8[10] = (c)->q[17].u8[2];
    _t.u8[11] = (c)->q[17].u8[3];
    _t.u8[12] = (c)->q[17].u8[4];
    _t.u8[13] = (c)->q[17].u8[5];
    _t.u8[14] = (c)->q[17].u8[6];
    _t.u8[15] = (c)->q[17].u8[7];
    (c)->q[17] = _t; }
  /* cdc30: fcmgt v16.4s, v5.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[5].f32[0] > (c)->q[16].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[5].f32[1] > (c)->q[16].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[5].f32[2] > (c)->q[16].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[5].f32[3] > (c)->q[16].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* cdc34: fcmgt v17.4s, v5.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[5].f32[0] > (c)->q[17].f32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[5].f32[1] > (c)->q[17].f32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[5].f32[2] > (c)->q[17].f32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[5].f32[3] > (c)->q[17].f32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[17] = _t; }
  /* cdc38: ushll2 v20.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* cdc3c: ushll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* cdc40: ushll2 v21.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[3]) << 0);
    (c)->q[21] = _t; }
  /* cdc44: ushll v17.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[17].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[17].u32[1]) << 0);
    (c)->q[17] = _t; }
  /* cdc48: and v20.16b, v20.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[19].u8[15];
    (c)->q[20] = _t; }
  /* cdc4c: and v16.16b, v16.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[19].u8[15];
    (c)->q[16] = _t; }
  /* cdc50: and v21.16b, v21.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[19].u8[15];
    (c)->q[21] = _t; }
  /* cdc54: and v17.16b, v17.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[19].u8[15];
    (c)->q[17] = _t; }
  /* cdc58: ushl v16.2d, v16.2d, v7.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[16].u64[0], (int8_t)(c)->q[7].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[16].u64[1], (int8_t)(c)->q[7].u64[1]);
    (c)->q[16] = _t; }
  /* cdc5c: ushl v19.2d, v20.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[20].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[20].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[19] = _t; }
  /* cdc60: ushl v20.2d, v21.2d, v22.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[21].u64[0], (int8_t)(c)->q[22].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[21].u64[1], (int8_t)(c)->q[22].u64[1]);
    (c)->q[20] = _t; }
  /* cdc64: dup v21.2d, x22 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 22));
    _t.u64[1] = (ARC_X_R(c, 22));
    (c)->q[21] = _t; }
  /* cdc68: ushl v17.2d, v17.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[17].u64[0], (int8_t)(c)->q[18].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[17].u64[1], (int8_t)(c)->q[18].u64[1]);
    (c)->q[17] = _t; }
  /* cdc6c: orr v2.16b, v19.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* cdc70: orr v1.16b, v16.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* cdc74: orr v4.16b, v20.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* cdc78: orr v3.16b, v17.16b, v3.16b */
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
  /* cdc7c: add v6.2d, v6.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[21].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[21].u64[1];
    (c)->q[6] = _t; }
  /* cdc80: add v7.2d, v7.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[7].u64[0] + (c)->q[21].u64[0];
    _t.u64[1] = (c)->q[7].u64[1] + (c)->q[21].u64[1];
    (c)->q[7] = _t; }
  /* cdc84: cbnz x1, #0xcdc04 */
  if ((ARC_X_R(c, 1)) != 0) goto L_cdc04;
  /* cdc88: orr v1.16b, v3.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* cdc8c: orr v2.16b, v4.16b, v2.16b */
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
  /* cdc90: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* cdc94: orr v1.16b, v1.16b, v2.16b */
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
  /* cdc98: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* cdc9c: orr v1.8b, v1.8b, v2.8b */
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
  /* cdca0: fmov x12, d1 */
  ARC_X_W(c, 12, ARC_DU_R(c, 1));
  /* cdca4: b.eq #0xcdcc8 */
  if (ARC_COND(c, 0)) goto L_cdcc8;
L_cdca8:;
  /* cdca8: ldr s1, [x17], #0xfffffffffffffffc */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 17)));
  ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(-4));
  /* cdcac: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* cdcb0: cset w1, mi */
  ARC_W_W(c, 1, (ARC_COND(c, 4) ? 1 : 0));
  /* cdcb4: lsl x1, x1, x15 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 15)) & 63)));
  /* cdcb8: add x15, x15, #1 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* cdcbc: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* cdcc0: orr x12, x1, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 1) | ARC_X_R(c, 12)));
  /* cdcc4: b.ne #0xcdca8 */
  if (ARC_COND(c, 1)) goto L_cdca8;
L_cdcc8:;
  /* cdcc8: cbz x13, #0xcdd0c */
  if ((ARC_X_R(c, 13)) == 0) goto L_cdd0c;
  /* cdccc: cbz x12, #0xcdd0c */
  if ((ARC_X_R(c, 12)) == 0) goto L_cdd0c;
L_cdcd0:;
  /* cdcd0: rbit x15, x12 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 12)));
  /* cdcd4: rbit x17, x13 */
  ARC_X_W(c, 17, arc_rbit64(ARC_X_R(c, 13)));
  /* cdcd8: sub x19, x12, #1 */
  ARC_X_W(c, 19, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* cdcdc: sub x1, x13, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* cdce0: and x12, x19, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) & ARC_X_R(c, 12)));
  /* cdce4: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* cdce8: clz x17, x17 */
  ARC_X_W(c, 17, arc_clz64(ARC_X_R(c, 17)));
  /* cdcec: and x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) & ARC_X_R(c, 13)));
  /* cdcf0: sub x15, x11, x15, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* cdcf4: ldr s1, [x10, x17, lsl #2] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 17)) << 2))));
  /* cdcf8: ldr s2, [x15] */
  arc_su_w(c, 2, arc_ld32(ARC_X_R(c, 15)));
  /* cdcfc: str s2, [x10, x17, lsl #2] */
  arc_st32((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 17)) << 2)), (c)->q[2].u32[0]);
  /* cdd00: str s1, [x15] */
  arc_st32(ARC_X_R(c, 15), (c)->q[1].u32[0]);
  /* cdd04: cbz x12, #0xcdd0c */
  if ((ARC_X_R(c, 12)) == 0) goto L_cdd0c;
  /* cdd08: cbnz x13, #0xcdcd0 */
  if ((ARC_X_R(c, 13)) != 0) goto L_cdcd0;
L_cdd0c:;
  /* cdd0c: cmp x12, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(0));
  /* cdd10: csel x14, x14, xzr, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 31)));
  /* cdd14: sub x11, x11, x14, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* cdd18: cbnz x13, #0xcdd38 */
  if ((ARC_X_R(c, 13)) != 0) goto L_cdd38;
  /* cdd1c: add x23, x10, x16, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* cdd20: cbnz x12, #0xcdd70 */
  if ((ARC_X_R(c, 12)) != 0) goto L_cdd70;
  /* cdd24: b #0xcdd9c */
  goto L_cdd9c;
L_cdd28:;
  /* cdd28: lsl x12, x24, x12 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 24)) << ((ARC_X_R(c, 12)) & 63)));
  /* cdd2c: sub x11, x11, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(4)));
  /* cdd30: bic x13, x13, x12 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 12))));
  /* cdd34: cbz x13, #0xcdd98 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cdd98;
L_cdd38:;
  /* cdd38: clz x12, x13 */
  ARC_X_W(c, 12, arc_clz64(ARC_X_R(c, 13)));
  /* cdd3c: eor x12, x12, #0x3f */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) ^ UINT64_C(63)));
  /* cdd40: add x14, x10, x12, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* cdd44: cmp x11, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 14));
  /* cdd48: b.eq #0xcdd28 */
  if (ARC_COND(c, 0)) goto L_cdd28;
  /* cdd4c: ldr s1, [x11] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 11)));
  /* cdd50: ldr s2, [x14] */
  arc_su_w(c, 2, arc_ld32(ARC_X_R(c, 14)));
  /* cdd54: str s1, [x14] */
  arc_st32(ARC_X_R(c, 14), (c)->q[1].u32[0]);
  /* cdd58: str s2, [x11] */
  arc_st32(ARC_X_R(c, 11), (c)->q[2].u32[0]);
  /* cdd5c: b #0xcdd28 */
  goto L_cdd28;
L_cdd60:;
  /* cdd60: lsl x10, x24, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 24)) << ((ARC_X_R(c, 10)) & 63)));
  /* cdd64: add x23, x23, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(4)));
  /* cdd68: bic x12, x12, x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & (~ARC_X_R(c, 10))));
  /* cdd6c: cbz x12, #0xcdd9c */
  if ((ARC_X_R(c, 12)) == 0) goto L_cdd9c;
L_cdd70:;
  /* cdd70: clz x10, x12 */
  ARC_X_W(c, 10, arc_clz64(ARC_X_R(c, 12)));
  /* cdd74: eor x10, x10, #0x3f */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ UINT64_C(63)));
  /* cdd78: sub x13, x11, x10, lsl #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) - ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* cdd7c: cmp x23, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 13));
  /* cdd80: b.eq #0xcdd60 */
  if (ARC_COND(c, 0)) goto L_cdd60;
  /* cdd84: ldr s1, [x23] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 23)));
  /* cdd88: ldr s2, [x13] */
  arc_su_w(c, 2, arc_ld32(ARC_X_R(c, 13)));
  /* cdd8c: str s1, [x13] */
  arc_st32(ARC_X_R(c, 13), (c)->q[1].u32[0]);
  /* cdd90: str s2, [x23] */
  arc_st32(ARC_X_R(c, 23), (c)->q[2].u32[0]);
  /* cdd94: b #0xcdd60 */
  goto L_cdd60;
L_cdd98:;
  /* cdd98: add x23, x11, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + UINT64_C(4)));
L_cdd9c:;
  /* cdd9c: sub x1, x23, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) - UINT64_C(4)));
  /* cdda0: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* cdda4: b.eq #0xcddb0 */
  if (ARC_COND(c, 0)) goto L_cddb0;
  /* cdda8: ldr s1, [x1] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 1)));
  /* cddac: str s1, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[1].u32[0]);
L_cddb0:;
  /* cddb0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cddb4: str s0, [x1] */
  arc_st32(ARC_X_R(c, 1), (c)->q[0].u32[0]);
  /* cddb8: b.lo #0xcde20 */
  if (ARC_COND(c, 3)) goto L_cde20;
  /* cddbc: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* cddc0: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* cddc4: mov x28, x3 */
  ARC_X_W(c, 28, ARC_X_R(c, 3));
  /* cddc8: mov x27, x2 */
  ARC_X_W(c, 27, ARC_X_R(c, 2));
  /* cddcc: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* cddd0: mov x24, x1 */
  ARC_X_W(c, 24, ARC_X_R(c, 1));
  /* cddd4: bl #0xd1e7c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(843224));
  fn1_d1e7c(c);
  /* cddd8: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* cdddc: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* cdde0: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* cdde4: bl #0xd1e7c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(843240));
  fn1_d1e7c(c);
  /* cdde8: mov x2, x27 */
  ARC_X_W(c, 2, ARC_X_R(c, 27));
  /* cddec: tbnz w0, #0, #0xcde74 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_cde74;
  /* cddf0: ldp q9, q8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cddf4: mov x3, x28 */
  ARC_X_W(c, 3, ARC_X_R(c, 28));
  /* cddf8: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* cddfc: adrp x5, #0x52000 */
  ARC_X_W(c, 5, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde00: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* cde04: adrp x7, #0x52000 */
  ARC_X_W(c, 7, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde08: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* cde0c: adrp x27, #0x52000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde10: adrp x28, #0x52000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde14: adrp x30, #0x52000 */
  ARC_X_W(c, 30, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde18: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* cde1c: tbnz w25, #0, #0xcd0c8 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_cd0c8;
L_cde20:;
  /* cde20: ldur w8, [x29, #-0x14] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
  /* cde24: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* cde28: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* cde2c: mov x24, x5 */
  ARC_X_W(c, 24, ARC_X_R(c, 5));
  /* cde30: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* cde34: mov x20, x7 */
  ARC_X_W(c, 20, ARC_X_R(c, 7));
  /* cde38: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* cde3c: mov x25, x30 */
  ARC_X_W(c, 25, ARC_X_R(c, 30));
  /* cde40: bl #0xcd060 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(843332));
  fn1_cd060(c);
  /* cde44: ldp q9, q8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cde48: mov x30, x25 */
  ARC_X_W(c, 30, ARC_X_R(c, 25));
  /* cde4c: mov x7, x20 */
  ARC_X_W(c, 7, ARC_X_R(c, 20));
  /* cde50: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* cde54: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* cde58: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* cde5c: adrp x3, #0x52000 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde60: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* cde64: stur wzr, [x29, #-0x14] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-20)), ARC_W_R(c, 31));
  /* cde68: b #0xcd0c8 */
  goto L_cd0c8;
L_cde6c:;
  /* cde6c: add x23, x10, x12, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* cde70: b #0xcdd9c */
  goto L_cdd9c;
L_cde74:;
  /* cde74: ldp q9, q8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cde78: mov x3, x28 */
  ARC_X_W(c, 3, ARC_X_R(c, 28));
  /* cde7c: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* cde80: adrp x5, #0x52000 */
  ARC_X_W(c, 5, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde84: mov x26, x24 */
  ARC_X_W(c, 26, ARC_X_R(c, 24));
  /* cde88: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* cde8c: adrp x7, #0x52000 */
  ARC_X_W(c, 7, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde90: mov x23, x20 */
  ARC_X_W(c, 23, ARC_X_R(c, 20));
  /* cde94: adrp x27, #0x52000 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde98: adrp x28, #0x52000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(335872)));
  /* cde9c: adrp x30, #0x52000 */
  ARC_X_W(c, 30, (arc_image_bases[1] + UINT64_C(335872)));
  /* cdea0: tbz w25, #0, #0xcd0c8 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_cd0c8;
  /* cdea4: b #0xce0f0 */
  goto L_ce0f0;
L_cdea8:;
  /* cdea8: ldur s1, [x26, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* cdeac: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdeb0: b.pl #0xcdec8 */
  if (ARC_COND(c, 5)) goto L_cdec8;
  /* cdeb4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
L_cdeb8:;
  /* cdeb8: ldr s1, [x23, #4]! */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 23) + INT64_C(4))));
  ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
  /* cdebc: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdec0: b.pl #0xcdeb8 */
  if (ARC_COND(c, 5)) goto L_cdeb8;
  /* cdec4: b #0xcdee8 */
  goto L_cdee8;
L_cdec8:;
  /* cdec8: add x8, x0, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(4)));
L_cdecc:;
  /* cdecc: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* cded0: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* cded4: b.hs #0xcdee8 */
  if (ARC_COND(c, 2)) goto L_cdee8;
  /* cded8: mov x8, x23 */
  ARC_X_W(c, 8, ARC_X_R(c, 23));
  /* cdedc: ldr s1, [x8], #4 */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 8)));
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
  /* cdee0: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdee4: b.pl #0xcdecc */
  if (ARC_COND(c, 5)) goto L_cdecc;
L_cdee8:;
  /* cdee8: cmp x23, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 26));
  /* cdeec: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
  /* cdef0: b.hs #0xcdf04 */
  if (ARC_COND(c, 2)) goto L_cdf04;
  /* cdef4: mov x8, x26 */
  ARC_X_W(c, 8, ARC_X_R(c, 26));
L_cdef8:;
  /* cdef8: ldr s1, [x8, #-4]! */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 8) + INT64_C(-4))));
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-4));
  /* cdefc: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdf00: b.mi #0xcdef8 */
  if (ARC_COND(c, 4)) goto L_cdef8;
L_cdf04:;
  /* cdf04: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* cdf08: b.hs #0xcdf3c */
  if (ARC_COND(c, 2)) goto L_cdf3c;
  /* cdf0c: ldr s1, [x23] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 23)));
  /* cdf10: ldr s2, [x8] */
  arc_su_w(c, 2, arc_ld32(ARC_X_R(c, 8)));
L_cdf14:;
  /* cdf14: str s2, [x23] */
  arc_st32(ARC_X_R(c, 23), (c)->q[2].u32[0]);
  /* cdf18: str s1, [x8] */
  arc_st32(ARC_X_R(c, 8), (c)->q[1].u32[0]);
L_cdf1c:;
  /* cdf1c: ldr s1, [x23, #4]! */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 23) + INT64_C(4))));
  ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
  /* cdf20: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdf24: b.pl #0xcdf1c */
  if (ARC_COND(c, 5)) goto L_cdf1c;
L_cdf28:;
  /* cdf28: ldr s2, [x8, #-4]! */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 8) + INT64_C(-4))));
  ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-4));
  /* cdf2c: fcmp s0, s2 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 2)));
  /* cdf30: b.mi #0xcdf28 */
  if (ARC_COND(c, 4)) goto L_cdf28;
  /* cdf34: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* cdf38: b.lo #0xcdf14 */
  if (ARC_COND(c, 3)) goto L_cdf14;
L_cdf3c:;
  /* cdf3c: sub x8, x23, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(4)));
  /* cdf40: cmp x0, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* cdf44: b.eq #0xcdf50 */
  if (ARC_COND(c, 0)) goto L_cdf50;
  /* cdf48: ldr s1, [x8] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 8)));
  /* cdf4c: str s1, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[1].u32[0]);
L_cdf50:;
  /* cdf50: stur wzr, [x29, #-0x14] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-20)), ARC_W_R(c, 31));
  /* cdf54: str s0, [x8] */
  arc_st32(ARC_X_R(c, 8), (c)->q[0].u32[0]);
  /* cdf58: b #0xcd0c8 */
  goto L_cd0c8;
L_cdf5c:;
  /* cdf5c: ldur s0, [x26, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* cdf60: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* cdf64: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdf68: b.pl #0xce0f0 */
  if (ARC_COND(c, 5)) goto L_ce0f0;
  /* cdf6c: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* cdf70: stur s1, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[1].u32[0]);
  /* cdf74: b #0xce0f0 */
  goto L_ce0f0;
L_cdf78:;
  /* cdf78: ldp s0, s1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 0, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* cdf7c: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdf80: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cdf84: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cdf88: stp s0, s2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* cdf8c: ldr s0, [x0, #0xc] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(12))));
  /* cdf90: ldur s1, [x26, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* cdf94: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdf98: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cdf9c: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cdfa0: stur s2, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* cdfa4: str s0, [x0, #0xc] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(12)), (c)->q[0].u32[0]);
  /* cdfa8: ldr s1, [x0, #8] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* cdfac: ldur s0, [x26, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* cdfb0: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdfb4: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cdfb8: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* cdfbc: stur s2, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* cdfc0: ldp s2, s1, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* cdfc4: ldr s3, [x0, #4] */
  arc_su_w(c, 3, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* cdfc8: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* cdfcc: fcsel s2, s1, s2, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* cdfd0: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* cdfd4: stp s2, s0, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, (c)->q[2].u32[0]);
    arc_st32((_pa + 4), (c)->q[0].u32[0]);
  }
  /* cdfd8: ldur s0, [x26, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* cdfdc: fcmp s3, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 3)), (double)(ARC_S_R(c, 0)));
  /* cdfe0: fcsel s1, s3, s0, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 3) : ARC_S_R(c, 0))));
  /* cdfe4: fcsel s0, s0, s3, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 3))));
  /* cdfe8: stur s1, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[1].u32[0]);
  /* cdfec: ldp s3, s2, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_su_w(c, 3, arc_ld32(_pa));
    arc_su_w(c, 2, arc_ld32((_pa + 4)));
  }
  /* cdff0: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* cdff4: fcmp s2, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 1)));
  /* cdff8: fcsel s4, s1, s2, pl */
  arc_s_w(c, 4, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* cdffc: fcsel s2, s2, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 2) : ARC_S_R(c, 1))));
  /* ce000: fcmp s4, s3 */
  arc_fcmp(c, (double)(ARC_S_R(c, 4)), (double)(ARC_S_R(c, 3)));
  /* ce004: fcsel s1, s3, s1, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 3) : ARC_S_R(c, 1))));
  /* ce008: fcsel s3, s4, s3, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 4) : ARC_S_R(c, 3))));
  /* ce00c: fcmp s2, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 0)));
  /* ce010: fcsel s4, s0, s2, pl */
  arc_s_w(c, 4, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 2))));
  /* ce014: fcsel s2, s2, s0, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 2) : ARC_S_R(c, 0))));
  /* ce018: fcmp s4, s3 */
  arc_fcmp(c, (double)(ARC_S_R(c, 4)), (double)(ARC_S_R(c, 3)));
  /* ce01c: fcsel s0, s3, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 3) : ARC_S_R(c, 0))));
  /* ce020: fcsel s3, s4, s3, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 4) : ARC_S_R(c, 3))));
  /* ce024: stp s1, s0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, (c)->q[1].u32[0]);
    arc_st32((_pa + 4), (c)->q[0].u32[0]);
  }
  /* ce028: stp s3, s2, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st32(_pa, (c)->q[3].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* ce02c: b #0xce0f0 */
  goto L_ce0f0;
L_ce030:;
  /* ce030: ldr s0, [x0, #4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* ce034: ldur s1, [x26, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* ce038: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* ce03c: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* ce040: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* ce044: stur s2, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* ce048: str s0, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), (c)->q[0].u32[0]);
  /* ce04c: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* ce050: ldur s0, [x26, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* ce054: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* ce058: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* ce05c: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* ce060: stur s2, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* ce064: ldp s2, s1, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 1, arc_ld32((_pa + 4)));
  }
  /* ce068: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* ce06c: fcsel s2, s1, s2, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 2))));
  /* ce070: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* ce074: str s2, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[2].u32[0]);
  /* ce078: b #0xce0ec */
  goto L_ce0ec;
L_ce07c:;
  /* ce07c: ldp s2, s0, [x0, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(4));
    arc_su_w(c, 2, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* ce080: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* ce084: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* ce088: fcsel s3, s1, s0, pl */
  arc_s_w(c, 3, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* ce08c: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* ce090: str s3, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), (c)->q[3].u32[0]);
  /* ce094: str s0, [x0] */
  arc_st32(ARC_X_R(c, 0), (c)->q[0].u32[0]);
  /* ce098: ldur s0, [x26, #-4] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* ce09c: fcmp s2, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 0)));
  /* ce0a0: fcsel s1, s2, s0, pl */
  arc_s_w(c, 1, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 2) : ARC_S_R(c, 0))));
  /* ce0a4: fcsel s0, s0, s2, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 2))));
  /* ce0a8: stur s1, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[1].u32[0]);
  /* ce0ac: ldr s1, [x0] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 0)));
  /* ce0b0: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* ce0b4: fcsel s2, s1, s0, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* ce0b8: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* ce0bc: stp s0, s2, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st32(_pa, (c)->q[0].u32[0]);
    arc_st32((_pa + 4), (c)->q[2].u32[0]);
  }
  /* ce0c0: ldr s0, [x0, #8] */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* ce0c4: ldur s1, [x26, #-4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 26) + INT64_C(-4))));
  /* ce0c8: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* ce0cc: fcsel s2, s0, s1, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* ce0d0: fcsel s0, s1, s0, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* ce0d4: stur s2, [x26, #-4] */
  arc_st32((ARC_X_R(c, 26) + INT64_C(-4)), (c)->q[2].u32[0]);
  /* ce0d8: ldr s1, [x0, #4] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 0) + INT64_C(4))));
  /* ce0dc: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* ce0e0: fcsel s2, s1, s0, pl */
  arc_s_w(c, 2, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 1) : ARC_S_R(c, 0))));
  /* ce0e4: fcsel s0, s0, s1, pl */
  arc_s_w(c, 0, (float)((ARC_COND(c, 5) ? ARC_S_R(c, 0) : ARC_S_R(c, 1))));
  /* ce0e8: str s2, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), (c)->q[2].u32[0]);
L_ce0ec:;
  /* ce0ec: str s0, [x0, #4] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(4)), (c)->q[0].u32[0]);
L_ce0f0:;
  /* ce0f0: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ce0f4: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ce0f8: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ce0fc: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ce100: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ce104: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ce108: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* ce10c: add sp, sp, #0xa0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(160)));
  /* ce110: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ce114: ret  */
  return;
L_ce118:;
  /* ce118: cmp x0, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 26));
  /* ce11c: add x9, x0, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* ce120: ldur w10, [x29, #-0x14] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-20))));
  /* ce124: ccmp x9, x26, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 26)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* ce128: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* ce12c: tbz w10, #0, #0xce354 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_ce354;
  /* ce130: tbnz w8, #0, #0xce0f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ce0f0;
  /* ce134: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* ce138: mov x10, x0 */
  ARC_X_W(c, 10, ARC_X_R(c, 0));
  /* ce13c: b #0xce158 */
  goto L_ce158;
L_ce140:;
  /* ce140: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
L_ce144:;
  /* ce144: str s0, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[0].u32[0]);
L_ce148:;
  /* ce148: add x9, x10, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* ce14c: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* ce150: cmp x9, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 26));
  /* ce154: b.eq #0xce0f0 */
  if (ARC_COND(c, 0)) goto L_ce0f0;
L_ce158:;
  /* ce158: ldp s1, s0, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    arc_su_w(c, 1, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* ce15c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* ce160: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* ce164: b.pl #0xce148 */
  if (ARC_COND(c, 5)) goto L_ce148;
  /* ce168: mov x9, x8 */
  ARC_X_W(c, 9, ARC_X_R(c, 8));
L_ce16c:;
  /* ce16c: subs x11, x9, #4 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(4)));
  /* ce170: str s1, [x0, x9] */
  arc_st32((ARC_X_R(c, 0) + ARC_X_R(c, 9)), (c)->q[1].u32[0]);
  /* ce174: b.eq #0xce140 */
  if (ARC_COND(c, 0)) goto L_ce140;
  /* ce178: add x9, x0, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 9)));
  /* ce17c: ldur s1, [x9, #-8] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 9) + INT64_C(-8))));
  /* ce180: mov x9, x11 */
  ARC_X_W(c, 9, ARC_X_R(c, 11));
  /* ce184: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* ce188: b.mi #0xce16c */
  if (ARC_COND(c, 4)) goto L_ce16c;
  /* ce18c: add x9, x0, x11 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 11)));
  /* ce190: b #0xce144 */
  goto L_ce144;
L_ce194:;
  /* ce194: cmp x0, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 26));
  /* ce198: b.eq #0xce0f0 */
  if (ARC_COND(c, 0)) goto L_ce0f0;
  /* ce19c: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* ce1a0: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* ce1a4: b #0xce1b8 */
  goto L_ce1b8;
L_ce1a8:;
  /* ce1a8: str s0, [x13] */
  arc_st32(ARC_X_R(c, 13), (c)->q[0].u32[0]);
L_ce1ac:;
  /* ce1ac: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* ce1b0: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* ce1b4: b.le #0xce27c */
  if (ARC_COND(c, 13)) goto L_ce27c;
L_ce1b8:;
  /* ce1b8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ce1bc: b.lo #0xce1ac */
  if (ARC_COND(c, 3)) goto L_ce1ac;
  /* ce1c0: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
  /* ce1c4: lsl x12, x10, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* ce1c8: bfi x11, x10, #1, #0x3e */
  ARC_X_W(c, 11, (((uint64_t)(ARC_X_R(c, 11)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* ce1cc: add x13, x12, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) + UINT64_C(2)));
  /* ce1d0: add x12, x0, x11, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* ce1d4: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* ce1d8: b.ge #0xce1f8 */
  if (ARC_COND(c, 10)) goto L_ce1f8;
  /* ce1dc: mov x14, x12 */
  ARC_X_W(c, 14, ARC_X_R(c, 12));
  /* ce1e0: ldr s1, [x12] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 12)));
  /* ce1e4: ldr s0, [x14, #4]! */
  arc_su_w(c, 0, arc_ld32((ARC_X_R(c, 14) + INT64_C(4))));
  ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(4));
  /* ce1e8: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* ce1ec: b.pl #0xce1f8 */
  if (ARC_COND(c, 5)) goto L_ce1f8;
  /* ce1f0: mov x12, x14 */
  ARC_X_W(c, 12, ARC_X_R(c, 14));
  /* ce1f4: mov x11, x13 */
  ARC_X_W(c, 11, ARC_X_R(c, 13));
L_ce1f8:;
  /* ce1f8: add x13, x0, x10, lsl #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* ce1fc: ldr s1, [x12] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 12)));
  /* ce200: ldr s0, [x13] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 13)));
  /* ce204: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* ce208: b.pl #0xce21c */
  if (ARC_COND(c, 5)) goto L_ce21c;
  /* ce20c: b #0xce1ac */
  goto L_ce1ac;
L_ce210:;
  /* ce210: ldr s1, [x12] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 12)));
  /* ce214: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* ce218: b.mi #0xce1a8 */
  if (ARC_COND(c, 4)) goto L_ce1a8;
L_ce21c:;
  /* ce21c: cmp x9, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* ce220: str s1, [x13] */
  arc_st32(ARC_X_R(c, 13), (c)->q[1].u32[0]);
  /* ce224: mov x13, x12 */
  ARC_X_W(c, 13, ARC_X_R(c, 12));
  /* ce228: b.lt #0xce1a8 */
  if (ARC_COND(c, 11)) goto L_ce1a8;
  /* ce22c: mov w15, #1 */
  ARC_W_W(c, 15, UINT64_C(1));
  /* ce230: lsl x12, x11, #1 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* ce234: bfi x15, x11, #1, #0x3e */
  ARC_X_W(c, 15, (((uint64_t)(ARC_X_R(c, 15)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 11))) & UINT64_C(4611686018427387903)) << 1)));
  /* ce238: add x14, x12, #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) + UINT64_C(2)));
  /* ce23c: add x12, x0, x15, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* ce240: cmp x14, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 8));
  /* ce244: mov x11, x15 */
  ARC_X_W(c, 11, ARC_X_R(c, 15));
  /* ce248: b.ge #0xce210 */
  if (ARC_COND(c, 10)) goto L_ce210;
  /* ce24c: mov x15, x12 */
  ARC_X_W(c, 15, ARC_X_R(c, 12));
  /* ce250: ldr s2, [x12] */
  arc_su_w(c, 2, arc_ld32(ARC_X_R(c, 12)));
  /* ce254: ldr s1, [x15, #4]! */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 15) + INT64_C(4))));
  ARC_X_W(c, 15, ARC_X_R(c, 15) + INT64_C(4));
  /* ce258: fcmp s2, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 1)));
  /* ce25c: b.pl #0xce210 */
  if (ARC_COND(c, 5)) goto L_ce210;
  /* ce260: mov x12, x15 */
  ARC_X_W(c, 12, ARC_X_R(c, 15));
  /* ce264: mov x11, x14 */
  ARC_X_W(c, 11, ARC_X_R(c, 14));
  /* ce268: b #0xce210 */
  goto L_ce210;
L_ce26c:;
  /* ce26c: str s0, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[0].u32[0]);
L_ce270:;
  /* ce270: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* ce274: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* ce278: b.le #0xce0f0 */
  if (ARC_COND(c, 13)) goto L_ce0f0;
L_ce27c:;
  /* ce27c: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* ce280: ldr s0, [x0] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* ce284: mov x12, xzr */
  ARC_X_W(c, 12, ARC_X_R(c, 31));
  /* ce288: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* ce28c: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* ce290: b #0xce2bc */
  goto L_ce2bc;
L_ce294:;
  /* ce294: ldr s1, [x14, #8]! */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 14) + INT64_C(8))));
  ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(8));
  /* ce298: ldur s2, [x14, #-4] */
  arc_su_w(c, 2, arc_ld32((ARC_X_R(c, 14) + INT64_C(-4))));
  /* ce29c: fcmp s2, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 2)), (double)(ARC_S_R(c, 1)));
  /* ce2a0: csel x9, x9, x14, pl */
  ARC_X_W(c, 9, (ARC_COND(c, 5) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 14)));
  /* ce2a4: csel x12, x13, x15, pl */
  ARC_X_W(c, 12, (ARC_COND(c, 5) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 15)));
L_ce2a8:;
  /* ce2a8: ldr s1, [x9] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 9)));
  /* ce2ac: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* ce2b0: str s1, [x11] */
  arc_st32(ARC_X_R(c, 11), (c)->q[1].u32[0]);
  /* ce2b4: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* ce2b8: b.gt #0xce2e4 */
  if (ARC_COND(c, 12)) goto L_ce2e4;
L_ce2bc:;
  /* ce2bc: lsl x9, x12, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* ce2c0: add x14, x11, x12, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* ce2c4: mov w13, #1 */
  ARC_W_W(c, 13, UINT64_C(1));
  /* ce2c8: bfi x13, x12, #1, #0x3f */
  ARC_X_W(c, 13, (((uint64_t)(ARC_X_R(c, 13)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(9223372036854775807)) << 1)));
  /* ce2cc: add x15, x9, #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ce2d0: add x9, x14, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 14) + UINT64_C(4)));
  /* ce2d4: cmp x15, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 8));
  /* ce2d8: b.lt #0xce294 */
  if (ARC_COND(c, 11)) goto L_ce294;
  /* ce2dc: mov x12, x13 */
  ARC_X_W(c, 12, ARC_X_R(c, 13));
  /* ce2e0: b #0xce2a8 */
  goto L_ce2a8;
L_ce2e4:;
  /* ce2e4: sub x26, x26, #4 */
  ARC_X_W(c, 26, (ARC_X_R(c, 26) - UINT64_C(4)));
  /* ce2e8: cmp x9, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 26));
  /* ce2ec: b.eq #0xce26c */
  if (ARC_COND(c, 0)) goto L_ce26c;
  /* ce2f0: sub x10, x9, x0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) - ARC_X_R(c, 0)));
  /* ce2f4: ldr s1, [x26] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 26)));
  /* ce2f8: add x10, x10, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* ce2fc: asr x10, x10, #2 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(2)) & 63))));
  /* ce300: str s1, [x9] */
  arc_st32(ARC_X_R(c, 9), (c)->q[1].u32[0]);
  /* ce304: str s0, [x26] */
  arc_st32(ARC_X_R(c, 26), (c)->q[0].u32[0]);
  /* ce308: subs x10, x10, #2 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2)));
  /* ce30c: b.lt #0xce270 */
  if (ARC_COND(c, 11)) goto L_ce270;
  /* ce310: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* ce314: ldr s0, [x9] */
  arc_su_w(c, 0, arc_ld32(ARC_X_R(c, 9)));
  /* ce318: add x11, x0, x10, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* ce31c: ldr s1, [x11] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 11)));
  /* ce320: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* ce324: b.pl #0xce270 */
  if (ARC_COND(c, 5)) goto L_ce270;
L_ce328:;
  /* ce328: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* ce32c: mov x9, x11 */
  ARC_X_W(c, 9, ARC_X_R(c, 11));
  /* ce330: str s1, [x12] */
  arc_st32(ARC_X_R(c, 12), (c)->q[1].u32[0]);
  /* ce334: cbz x10, #0xce26c */
  if ((ARC_X_R(c, 10)) == 0) goto L_ce26c;
  /* ce338: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* ce33c: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* ce340: add x11, x0, x10, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* ce344: ldr s1, [x11] */
  arc_su_w(c, 1, arc_ld32(ARC_X_R(c, 11)));
  /* ce348: fcmp s1, s0 */
  arc_fcmp(c, (double)(ARC_S_R(c, 1)), (double)(ARC_S_R(c, 0)));
  /* ce34c: b.mi #0xce328 */
  if (ARC_COND(c, 4)) goto L_ce328;
  /* ce350: b #0xce26c */
  goto L_ce26c;
L_ce354:;
  /* ce354: tbz w8, #0, #0xce368 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ce368;
  /* ce358: b #0xce0f0 */
  goto L_ce0f0;
L_ce35c:;
  /* ce35c: add x9, x0, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* ce360: cmp x9, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 26));
  /* ce364: b.eq #0xce0f0 */
  if (ARC_COND(c, 0)) goto L_ce0f0;
L_ce368:;
  /* ce368: ldp s1, s0, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_su_w(c, 1, arc_ld32(_pa));
    arc_su_w(c, 0, arc_ld32((_pa + 4)));
  }
  /* ce36c: mov x0, x9 */
  ARC_X_W(c, 0, ARC_X_R(c, 9));
  /* ce370: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* ce374: b.pl #0xce35c */
  if (ARC_COND(c, 5)) goto L_ce35c;
  /* ce378: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
L_ce37c:;
  /* ce37c: str s1, [x8] */
  arc_st32(ARC_X_R(c, 8), (c)->q[1].u32[0]);
  /* ce380: ldur s1, [x8, #-8] */
  arc_su_w(c, 1, arc_ld32((ARC_X_R(c, 8) + INT64_C(-8))));
  /* ce384: sub x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(4)));
  /* ce388: fcmp s0, s1 */
  arc_fcmp(c, (double)(ARC_S_R(c, 0)), (double)(ARC_S_R(c, 1)));
  /* ce38c: b.mi #0xce37c */
  if (ARC_COND(c, 4)) goto L_ce37c;
  /* ce390: str s0, [x8] */
  arc_st32(ARC_X_R(c, 8), (c)->q[0].u32[0]);
  /* ce394: b #0xce35c */
  goto L_ce35c;
}

void fn1_d75c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810056));
  /* d75c8: bti c */
  /* bti: no architectural effect here */
  /* d75cc: str x0, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 0));
  /* d75d0: cbz x0, #0xd75f4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_d75f4;
  /* d75d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d75d8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d75dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d75e0: sub x1, x0, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) - UINT64_C(120)));
  /* d75e4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d75e8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882156));
  fn1_bd950(c);
  /* d75ec: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d75f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_d75f4:;
  /* d75f4: ret  */
  return;
}

void fn1_db460(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826080));
  /* db460: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db464: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db468: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db46c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db470: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db474: add x1, x0, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* db478: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* db47c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898176));
  fn1_bd950(c);
  /* db480: cbz x0, #0xdb494 */
  if ((ARC_X_R(c, 0)) == 0) goto L_db494;
L_db484:;
  /* db484: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db488: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db48c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db490: ret  */
  return;
L_db494:;
  /* db494: mov x20, x19 */
  ARC_X_W(c, 20, ARC_X_R(c, 19));
  /* db498: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db49c: ldr x8, [x20], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* db4a0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* db4a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898216));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* db4a8: ldar x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* db4ac: cbz x8, #0xdb4c0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_db4c0;
  /* db4b0: add x1, x19, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* db4b4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* db4b8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898236));
  fn1_bd950(c);
  /* db4bc: cbnz x0, #0xdb484 */
  if ((ARC_X_R(c, 0)) != 0) goto L_db484;
L_db4c0:;
  /* db4c0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* db4c4: ldr x16, [x8, #0x20] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* db4c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* db4cc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* db4d0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db4d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db4d8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_ded60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038840672));
  /* ded60: bti c */
  /* bti: no architectural effect here */
  /* ded64: mov w8, #-0x97 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551465));
  /* ded68: sub w10, w1, #0x98 */
  ARC_W_W(c, 10, (ARC_W_R(c, 1) - UINT64_C(152)));
  /* ded6c: orr w9, w0, #0x800000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) | UINT64_C(8388608)));
  /* ded70: cmp w1, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(0));
  /* ded74: mov w16, #2 */
  ARC_W_W(c, 16, UINT64_C(2));
  /* ded78: csel w9, w0, w9, eq */
  ARC_W_W(c, 9, (ARC_COND(c, 0) ? (ARC_W_R(c, 0)) : ARC_W_R(c, 9)));
  /* ded7c: csel w10, w8, w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* ded80: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* ded84: ccmp w1, #2, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(2)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* ded88: lsl w14, w9, #2 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(2)) & 31)));
  /* ded8c: bfi w16, w9, #2, #0x1e */
  ARC_W_W(c, 16, (((uint32_t)(ARC_W_R(c, 16)) & UINT64_C(3)) | ((((uint32_t)(ARC_W_R(c, 9))) & UINT64_C(1073741823)) << 2)));
  /* ded90: cset w17, lo */
  ARC_W_W(c, 17, (ARC_COND(c, 3) ? 1 : 0));
  /* ded94: mvn w8, w17 */
  ARC_W_W(c, 8, (~(uint32_t)(ARC_W_R(c, 17))));
  /* ded98: add w15, w8, w14 */
  ARC_W_W(c, 15, (ARC_W_R(c, 8) + ARC_W_R(c, 14)));
  /* ded9c: tbnz w10, #0x1f, #0xdee64 */
  if (((ARC_W_R(c, 10)) >> 31 & 1) != 0) goto L_dee64;
  /* deda0: mov w8, #0x3441 */
  ARC_W_W(c, 8, UINT64_C(13377));
  /* deda4: nop  */
  /* nop: no architectural effect here */
  /* deda8: adr x0, #0x74c80 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(478336)));
  /* dedac: movk w8, #1, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(65536)));
  /* dedb0: mov w11, #0x934f */
  ARC_W_W(c, 11, UINT64_C(37711));
  /* dedb4: mul w17, w10, w8 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 8))));
  /* dedb8: movk w11, #0x12, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(1179648)));
  /* dedbc: lsr w8, w17, #0x12 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(18)) & 31)));
  /* dedc0: ldr x12, [x0, w8, uxtw #3] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 3))));
  /* dedc4: sub w1, w8, w10 */
  ARC_W_W(c, 1, (ARC_W_R(c, 8) - ARC_W_R(c, 10)));
  /* dedc8: mul w13, w8, w11 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11))));
  /* dedcc: lsr x2, x12, #0x20 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(32)) & 63)));
  /* dedd0: umull x3, w12, w14 */
  ARC_X_W(c, 3, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* dedd4: umull x4, w12, w16 */
  ARC_X_W(c, 4, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* dedd8: add w13, w1, w13, lsr #19 */
  ARC_W_W(c, 13, (ARC_W_R(c, 1) + ((uint32_t)(ARC_W_R(c, 13)) >> 19)));
  /* deddc: umull x5, w2, w14 */
  ARC_X_W(c, 5, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* dede0: umull x6, w2, w16 */
  ARC_X_W(c, 6, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* dede4: lsr x10, x3, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(32)) & 63)));
  /* dede8: add w13, w13, #0x1b */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(27)));
  /* dedec: umull x12, w12, w15 */
  ARC_X_W(c, 12, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* dedf0: lsr x4, x4, #0x20 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 4)) >> ((UINT64_C(32)) & 63)));
  /* dedf4: umull x2, w2, w15 */
  ARC_X_W(c, 2, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* dedf8: lsr x3, x5, #0x20 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 5)) >> ((UINT64_C(32)) & 63)));
  /* dedfc: adds w10, w10, w5 */
  ARC_W_W(c, 10, arc_add32(c, ARC_W_R(c, 10), ARC_W_R(c, 5), 0));
  /* dee00: lsr x5, x6, #0x20 */
  ARC_X_W(c, 5, ((uint64_t)(ARC_X_R(c, 6)) >> ((UINT64_C(32)) & 63)));
  /* dee04: lsr w10, w10, w13 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) >> ((ARC_W_R(c, 13)) & 31)));
  /* dee08: lsr x12, x12, #0x20 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(32)) & 63)));
  /* dee0c: cinc w3, w3, hs */
  ARC_W_W(c, 3, (ARC_COND(c, 2) ? (ARC_W_R(c, 3)) + 1 : (ARC_W_R(c, 3))));
  /* dee10: adds w4, w4, w6 */
  ARC_W_W(c, 4, arc_add32(c, ARC_W_R(c, 4), ARC_W_R(c, 6), 0));
  /* dee14: lsr x6, x2, #0x20 */
  ARC_X_W(c, 6, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(32)) & 63)));
  /* dee18: cinc w5, w5, hs */
  ARC_W_W(c, 5, (ARC_COND(c, 2) ? (ARC_W_R(c, 5)) + 1 : (ARC_W_R(c, 5))));
  /* dee1c: lsr w4, w4, w13 */
  ARC_W_W(c, 4, ((uint32_t)(ARC_W_R(c, 4)) >> ((ARC_W_R(c, 13)) & 31)));
  /* dee20: adds w12, w12, w2 */
  ARC_W_W(c, 12, arc_add32(c, ARC_W_R(c, 12), ARC_W_R(c, 2), 0));
  /* dee24: lsl w2, w3, #1 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 3)) << ((UINT64_C(1)) & 31)));
  /* dee28: lsl w5, w5, #1 */
  ARC_W_W(c, 5, ((uint32_t)(ARC_W_R(c, 5)) << ((UINT64_C(1)) & 31)));
  /* dee2c: cinc w3, w6, hs */
  ARC_W_W(c, 3, (ARC_COND(c, 2) ? (ARC_W_R(c, 6)) + 1 : (ARC_W_R(c, 6))));
  /* dee30: mvn w6, w13 */
  ARC_W_W(c, 6, (~(uint32_t)(ARC_W_R(c, 13))));
  /* dee34: lsr w7, w12, w13 */
  ARC_W_W(c, 7, ((uint32_t)(ARC_W_R(c, 12)) >> ((ARC_W_R(c, 13)) & 31)));
  /* dee38: lsl w3, w3, #1 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 3)) << ((UINT64_C(1)) & 31)));
  /* dee3c: lsl w2, w2, w6 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 2)) << ((ARC_W_R(c, 6)) & 31)));
  /* dee40: lsl w5, w5, w6 */
  ARC_W_W(c, 5, ((uint32_t)(ARC_W_R(c, 5)) << ((ARC_W_R(c, 6)) & 31)));
  /* dee44: cmp w17, #0x40, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(262144));
  /* dee48: lsl w3, w3, w6 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 3)) << ((ARC_W_R(c, 6)) & 31)));
  /* dee4c: orr w12, w2, w10 */
  ARC_W_W(c, 12, (ARC_W_R(c, 2) | ARC_W_R(c, 10)));
  /* dee50: orr w13, w5, w4 */
  ARC_W_W(c, 13, (ARC_W_R(c, 5) | ARC_W_R(c, 4)));
  /* dee54: orr w10, w3, w7 */
  ARC_W_W(c, 10, (ARC_W_R(c, 3) | ARC_W_R(c, 7)));
  /* dee58: b.hs #0xdef3c */
  if (ARC_COND(c, 2)) goto L_def3c;
  /* dee5c: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* dee60: b #0xdeffc */
  goto L_deffc;
L_dee64:;
  /* dee64: mov w8, #0xd105 */
  ARC_W_W(c, 8, UINT64_C(53509));
  /* dee68: nop  */
  /* nop: no architectural effect here */
  /* dee6c: adr x2, #0x74d78 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(478584)));
  /* dee70: movk w8, #0xfff4, lsl #16 */
  ARC_W_W(c, 8, ((ARC_W_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(4294180864)));
  /* dee74: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* dee78: mul w1, w10, w8 */
  ARC_W_W(c, 1, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 8))));
  /* dee7c: lsr w0, w1, #0x14 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 1)) >> ((UINT64_C(20)) & 31)));
  /* dee80: add w8, w0, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + ARC_W_R(c, 10)));
  /* dee84: mov w10, #0x6cb1 */
  ARC_W_W(c, 10, UINT64_C(27825));
  /* dee88: neg w12, w8 */
  ARC_W_W(c, 12, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 8))));
  /* dee8c: movk w10, #0xffed, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(4293722112)));
  /* dee90: ldr x12, [x2, w12, uxtw #3] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 12)))) << 3))));
  /* dee94: mul w10, w8, w10 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 10))));
  /* dee98: lsr x13, x12, #0x20 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(32)) & 63)));
  /* dee9c: umull x3, w12, w14 */
  ARC_X_W(c, 3, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* deea0: umull x4, w12, w16 */
  ARC_X_W(c, 4, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* deea4: sub w10, w0, w10, lsr #19 */
  ARC_W_W(c, 10, (ARC_W_R(c, 0) - ((uint32_t)(ARC_W_R(c, 10)) >> 19)));
  /* deea8: umull x5, w13, w14 */
  ARC_X_W(c, 5, (((uint64_t)(uint32_t)(ARC_W_R(c, 13))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* deeac: umull x16, w13, w16 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 13))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* deeb0: lsr x3, x3, #0x20 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(32)) & 63)));
  /* deeb4: add w10, w10, #0x1c */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(28)));
  /* deeb8: umull x12, w12, w15 */
  ARC_X_W(c, 12, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* deebc: lsr x4, x4, #0x20 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 4)) >> ((UINT64_C(32)) & 63)));
  /* deec0: umull x13, w13, w15 */
  ARC_X_W(c, 13, (((uint64_t)(uint32_t)(ARC_W_R(c, 13))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* deec4: lsr x15, x5, #0x20 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 5)) >> ((UINT64_C(32)) & 63)));
  /* deec8: adds w3, w3, w5 */
  ARC_W_W(c, 3, arc_add32(c, ARC_W_R(c, 3), ARC_W_R(c, 5), 0));
  /* deecc: lsr x5, x16, #0x20 */
  ARC_X_W(c, 5, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(32)) & 63)));
  /* deed0: lsr w3, w3, w10 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 3)) >> ((ARC_W_R(c, 10)) & 31)));
  /* deed4: lsr x12, x12, #0x20 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(32)) & 63)));
  /* deed8: cinc w15, w15, hs */
  ARC_W_W(c, 15, (ARC_COND(c, 2) ? (ARC_W_R(c, 15)) + 1 : (ARC_W_R(c, 15))));
  /* deedc: adds w16, w4, w16 */
  ARC_W_W(c, 16, arc_add32(c, ARC_W_R(c, 4), ARC_W_R(c, 16), 0));
  /* deee0: lsr x4, x13, #0x20 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(32)) & 63)));
  /* deee4: cinc w5, w5, hs */
  ARC_W_W(c, 5, (ARC_COND(c, 2) ? (ARC_W_R(c, 5)) + 1 : (ARC_W_R(c, 5))));
  /* deee8: lsr w16, w16, w10 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 16)) >> ((ARC_W_R(c, 10)) & 31)));
  /* deeec: adds w12, w12, w13 */
  ARC_W_W(c, 12, arc_add32(c, ARC_W_R(c, 12), ARC_W_R(c, 13), 0));
  /* deef0: lsl w13, w15, #1 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 15)) << ((UINT64_C(1)) & 31)));
  /* deef4: lsl w5, w5, #1 */
  ARC_W_W(c, 5, ((uint32_t)(ARC_W_R(c, 5)) << ((UINT64_C(1)) & 31)));
  /* deef8: cinc w15, w4, hs */
  ARC_W_W(c, 15, (ARC_COND(c, 2) ? (ARC_W_R(c, 4)) + 1 : (ARC_W_R(c, 4))));
  /* deefc: mvn w4, w10 */
  ARC_W_W(c, 4, (~(uint32_t)(ARC_W_R(c, 10))));
  /* def00: lsr w10, w12, w10 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 12)) >> ((ARC_W_R(c, 10)) & 31)));
  /* def04: lsl w15, w15, #1 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 15)) << ((UINT64_C(1)) & 31)));
  /* def08: lsl w13, w13, w4 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 13)) << ((ARC_W_R(c, 4)) & 31)));
  /* def0c: lsl w5, w5, w4 */
  ARC_W_W(c, 5, ((uint32_t)(ARC_W_R(c, 5)) << ((ARC_W_R(c, 4)) & 31)));
  /* def10: cmp w1, #0x100, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 1), UINT64_C(1048576));
  /* def14: lsl w15, w15, w4 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 15)) << ((ARC_W_R(c, 4)) & 31)));
  /* def18: orr w12, w13, w3 */
  ARC_W_W(c, 12, (ARC_W_R(c, 13) | ARC_W_R(c, 3)));
  /* def1c: orr w13, w5, w16 */
  ARC_W_W(c, 13, (ARC_W_R(c, 5) | ARC_W_R(c, 16)));
  /* def20: orr w10, w15, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 15) | ARC_W_R(c, 10)));
  /* def24: b.hs #0xdef68 */
  if (ARC_COND(c, 2)) goto L_def68;
L_def28:;
  /* def28: ands w14, w9, #1 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 14, _r); }
  /* def2c: csel w15, wzr, w17, ne */
  ARC_W_W(c, 15, (ARC_COND(c, 1) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 17)));
  /* def30: sub w13, w13, w14 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - ARC_W_R(c, 14)));
  /* def34: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* def38: b #0xdf208 */
  goto L_df208;
L_def3c:;
  /* def3c: mov w2, #0xcccd */
  ARC_W_W(c, 2, UINT64_C(52429));
  /* def40: sub w3, w13, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 13) - UINT64_C(1)));
  /* def44: movk w2, #0xcccc, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* def48: umull x3, w3, w2 */
  ARC_X_W(c, 3, (((uint64_t)(uint32_t)(ARC_W_R(c, 3))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 2)))));
  /* def4c: umull x4, w10, w2 */
  ARC_X_W(c, 4, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 2)))));
  /* def50: lsr x3, x3, #0x23 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(35)) & 63)));
  /* def54: lsr x4, x4, #0x23 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 4)) >> ((UINT64_C(35)) & 63)));
  /* def58: cmp w3, w4 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 4));
  /* def5c: b.ls #0xdef9c */
  if (ARC_COND(c, 9)) goto L_def9c;
  /* def60: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* def64: b #0xdeff0 */
  goto L_deff0;
L_def68:;
  /* def68: mov w11, #0xcccd */
  ARC_W_W(c, 11, UINT64_C(52429));
  /* def6c: sub w15, w13, #1 */
  ARC_W_W(c, 15, (ARC_W_R(c, 13) - UINT64_C(1)));
  /* def70: movk w11, #0xcccc, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* def74: umull x15, w15, w11 */
  ARC_X_W(c, 15, (((uint64_t)(uint32_t)(ARC_W_R(c, 15))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* def78: umull x16, w10, w11 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* def7c: lsr x15, x15, #0x23 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(35)) & 63)));
  /* def80: lsr x16, x16, #0x23 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(35)) & 63)));
  /* def84: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* def88: b.ls #0xdf088 */
  if (ARC_COND(c, 9)) goto L_df088;
  /* def8c: mov w11, wzr */
  ARC_W_W(c, 11, ARC_W_R(c, 31));
  /* def90: lsr w15, w1, #0x15 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 1)) >> ((UINT64_C(21)) & 31)));
  /* def94: cbz w15, #0xdef28 */
  if ((ARC_W_R(c, 15)) == 0) goto L_def28;
  /* def98: b #0xdf0f8 */
  goto L_df0f8;
L_def9c:;
  /* def9c: sub w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* defa0: ldr x0, [x0, w3, uxtw #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 3)))) << 3))));
  /* defa4: mul w11, w3, w11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 3)) * (uint32_t)(ARC_W_R(c, 11))));
  /* defa8: lsr x4, x0, #0x20 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* defac: umull x0, w0, w14 */
  ARC_X_W(c, 0, (((uint64_t)(uint32_t)(ARC_W_R(c, 0))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* defb0: add w11, w1, w11, lsr #19 */
  ARC_W_W(c, 11, (ARC_W_R(c, 1) + ((uint32_t)(ARC_W_R(c, 11)) >> 19)));
  /* defb4: umull x4, w4, w14 */
  ARC_X_W(c, 4, (((uint64_t)(uint32_t)(ARC_W_R(c, 4))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* defb8: lsr x0, x0, #0x20 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* defbc: add w11, w11, #0x1a */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(26)));
  /* defc0: lsr x3, x4, #0x20 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 4)) >> ((UINT64_C(32)) & 63)));
  /* defc4: adds w0, w0, w4 */
  ARC_W_W(c, 0, arc_add32(c, ARC_W_R(c, 0), ARC_W_R(c, 4), 0));
  /* defc8: cinc w1, w3, hs */
  ARC_W_W(c, 1, (ARC_COND(c, 2) ? (ARC_W_R(c, 3)) + 1 : (ARC_W_R(c, 3))));
  /* defcc: mvn w3, w11 */
  ARC_W_W(c, 3, (~(uint32_t)(ARC_W_R(c, 11))));
  /* defd0: lsr w11, w0, w11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 0)) >> ((ARC_W_R(c, 11)) & 31)));
  /* defd4: lsl w1, w1, #1 */
  ARC_W_W(c, 1, ((uint32_t)(ARC_W_R(c, 1)) << ((UINT64_C(1)) & 31)));
  /* defd8: lsl w0, w1, w3 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 1)) << ((ARC_W_R(c, 3)) & 31)));
  /* defdc: mov w1, #0xa */
  ARC_W_W(c, 1, UINT64_C(10));
  /* defe0: orr w11, w0, w11 */
  ARC_W_W(c, 11, (ARC_W_R(c, 0) | ARC_W_R(c, 11)));
  /* defe4: umull x0, w11, w2 */
  ARC_X_W(c, 0, (((uint64_t)(uint32_t)(ARC_W_R(c, 11))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 2)))));
  /* defe8: lsr x0, x0, #0x23 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(35)) & 63)));
  /* defec: msub w11, w0, w1, w11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) - ((uint32_t)(ARC_W_R(c, 0)) * (uint32_t)(ARC_W_R(c, 1)))));
L_deff0:;
  /* deff0: lsr w17, w17, #0x13 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(19)) & 31)));
  /* deff4: cmp w17, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 17), UINT64_C(4));
  /* deff8: b.hi #0xdf120 */
  if (ARC_COND(c, 8)) goto L_df120;
L_deffc:;
  /* deffc: mov w17, #0xcccd */
  ARC_W_W(c, 17, UINT64_C(52429));
  /* df000: mov w1, #0x33333333 */
  ARC_W_W(c, 1, UINT64_C(858993459));
  /* df004: movk w17, #0xcccc, lsl #16 */
  ARC_W_W(c, 17, ((ARC_W_R(c, 17) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* df008: mul w0, w14, w17 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 14)) * (uint32_t)(ARC_W_R(c, 17))));
  /* df00c: cmp w0, w1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 1));
  /* df010: b.ls #0xdf038 */
  if (ARC_COND(c, 9)) goto L_df038;
  /* df014: mov w14, #0xcccd */
  ARC_W_W(c, 14, UINT64_C(52429));
  /* df018: movk w14, #0xcccc, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* df01c: tbnz w9, #0, #0xdf070 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_df070;
  /* df020: mul w16, w15, w14 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 15)) * (uint32_t)(ARC_W_R(c, 14))));
  /* df024: mov w17, #0x33333333 */
  ARC_W_W(c, 17, UINT64_C(858993459));
  /* df028: cmp w16, w17 */
  (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 17));
  /* df02c: b.ls #0xdf130 */
  if (ARC_COND(c, 9)) goto L_df130;
  /* df030: mov w16, wzr */
  ARC_W_W(c, 16, ARC_W_R(c, 31));
  /* df034: b #0xdf154 */
  goto L_df154;
L_df038:;
  /* df038: mov w15, #0x3334 */
  ARC_W_W(c, 15, UINT64_C(13108));
  /* df03c: mov w16, wzr */
  ARC_W_W(c, 16, ARC_W_R(c, 31));
  /* df040: movk w15, #0x3333, lsl #16 */
  ARC_W_W(c, 15, ((ARC_W_R(c, 15) & UINT64_C(18446744069414649855)) | UINT64_C(858980352)));
L_df044:;
  /* df044: umull x14, w14, w17 */
  ARC_X_W(c, 14, (((uint64_t)(uint32_t)(ARC_W_R(c, 14))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 17)))));
  /* df048: add w16, w16, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) + UINT64_C(1)));
  /* df04c: lsr x14, x14, #0x22 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(34)) & 63)));
  /* df050: mul w0, w14, w17 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 14)) * (uint32_t)(ARC_W_R(c, 17))));
  /* df054: cmp w0, w15 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 15));
  /* df058: b.lo #0xdf044 */
  if (ARC_COND(c, 3)) goto L_df044;
  /* df05c: cmp w16, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 8));
  /* df060: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* df064: cset w14, hs */
  ARC_W_W(c, 14, (ARC_COND(c, 2) ? 1 : 0));
  /* df068: tbz w14, #0, #0xdf1a4 */
  if (((ARC_W_R(c, 14)) >> 0 & 1) == 0) goto L_df1a4;
  /* df06c: b #0xdf208 */
  goto L_df208;
L_df070:;
  /* df070: mul w15, w16, w14 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 14))));
  /* df074: mov w17, #0x33333333 */
  ARC_W_W(c, 17, UINT64_C(858993459));
  /* df078: cmp w15, w17 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 17));
  /* df07c: b.ls #0xdf168 */
  if (ARC_COND(c, 9)) goto L_df168;
  /* df080: mov w17, wzr */
  ARC_W_W(c, 17, ARC_W_R(c, 31));
  /* df084: b #0xdf18c */
  goto L_df18c;
L_df088:;
  /* df088: mov w15, #1 */
  ARC_W_W(c, 15, UINT64_C(1));
  /* df08c: mov w3, #-1 */
  ARC_W_W(c, 3, UINT64_C(18446744073709551615));
  /* df090: sub w15, w15, w8 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) - ARC_W_R(c, 8)));
  /* df094: ldr x16, [x2, w15, uxtw #3] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 15)))) << 3))));
  /* df098: mov w2, #0x934f */
  ARC_W_W(c, 2, UINT64_C(37711));
  /* df09c: movk w2, #0x12, lsl #16 */
  ARC_W_W(c, 2, ((ARC_W_R(c, 2) & UINT64_C(18446744069414649855)) | UINT64_C(1179648)));
  /* df0a0: mul w15, w15, w2 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 15)) * (uint32_t)(ARC_W_R(c, 2))));
  /* df0a4: lsr x2, x16, #0x20 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(32)) & 63)));
  /* df0a8: umull x16, w16, w14 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 16))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* df0ac: umull x2, w2, w14 */
  ARC_X_W(c, 2, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* df0b0: eor w15, w3, w15, lsr #19 */
  ARC_W_W(c, 15, (ARC_W_R(c, 3) ^ ((uint32_t)(ARC_W_R(c, 15)) >> 19)));
  /* df0b4: lsr x16, x16, #0x20 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(32)) & 63)));
  /* df0b8: lsr x3, x2, #0x20 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(32)) & 63)));
  /* df0bc: add w15, w0, w15 */
  ARC_W_W(c, 15, (ARC_W_R(c, 0) + ARC_W_R(c, 15)));
  /* df0c0: adds w16, w16, w2 */
  ARC_W_W(c, 16, arc_add32(c, ARC_W_R(c, 16), ARC_W_R(c, 2), 0));
  /* df0c4: add w15, w15, #0x1c */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) + UINT64_C(28)));
  /* df0c8: cinc w2, w3, hs */
  ARC_W_W(c, 2, (ARC_COND(c, 2) ? (ARC_W_R(c, 3)) + 1 : (ARC_W_R(c, 3))));
  /* df0cc: mvn w3, w15 */
  ARC_W_W(c, 3, (~(uint32_t)(ARC_W_R(c, 15))));
  /* df0d0: lsr w15, w16, w15 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 16)) >> ((ARC_W_R(c, 15)) & 31)));
  /* df0d4: lsl w2, w2, #1 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 2)) << ((UINT64_C(1)) & 31)));
  /* df0d8: lsl w16, w2, w3 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 2)) << ((ARC_W_R(c, 3)) & 31)));
  /* df0dc: orr w15, w16, w15 */
  ARC_W_W(c, 15, (ARC_W_R(c, 16) | ARC_W_R(c, 15)));
  /* df0e0: mov w16, #0xa */
  ARC_W_W(c, 16, UINT64_C(10));
  /* df0e4: umull x11, w15, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 15))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* df0e8: lsr x11, x11, #0x23 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(35)) & 63)));
  /* df0ec: msub w11, w11, w16, w15 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 15)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* df0f0: lsr w15, w1, #0x15 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 1)) >> ((UINT64_C(21)) & 31)));
  /* df0f4: cbz w15, #0xdef28 */
  if ((ARC_W_R(c, 15)) == 0) goto L_def28;
L_df0f8:;
  /* df0f8: cmp w0, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(30));
  /* df0fc: b.hi #0xdf120 */
  if (ARC_COND(c, 8)) goto L_df120;
  /* df100: sub w16, w0, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 0) - UINT64_C(1)));
  /* df104: mov w17, #-1 */
  ARC_W_W(c, 17, UINT64_C(18446744073709551615));
  /* df108: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* df10c: lsl w16, w17, w16 */
  ARC_W_W(c, 16, ((uint32_t)(ARC_W_R(c, 17)) << ((ARC_W_R(c, 16)) & 31)));
  /* df110: bics wzr, w14, w16 */
  { uint32_t _r = (uint32_t)(ARC_W_R(c, 14) & (~ARC_W_R(c, 16)));
    arc_flags_logical32(c, _r);
    ARC_W_W(c, 31, _r); }
  /* df114: cset w14, eq */
  ARC_W_W(c, 14, (ARC_COND(c, 0) ? 1 : 0));
  /* df118: tbz w14, #0, #0xdf1a4 */
  if (((ARC_W_R(c, 14)) >> 0 & 1) == 0) goto L_df1a4;
  /* df11c: b #0xdf208 */
  goto L_df208;
L_df120:;
  /* df120: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* df124: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* df128: tbz w14, #0, #0xdf1a4 */
  if (((ARC_W_R(c, 14)) >> 0 & 1) == 0) goto L_df1a4;
  /* df12c: b #0xdf208 */
  goto L_df208;
L_df130:;
  /* df130: mov w17, #0x3334 */
  ARC_W_W(c, 17, UINT64_C(13108));
  /* df134: mov w16, wzr */
  ARC_W_W(c, 16, ARC_W_R(c, 31));
  /* df138: movk w17, #0x3333, lsl #16 */
  ARC_W_W(c, 17, ((ARC_W_R(c, 17) & UINT64_C(18446744069414649855)) | UINT64_C(858980352)));
L_df13c:;
  /* df13c: umull x15, w15, w14 */
  ARC_X_W(c, 15, (((uint64_t)(uint32_t)(ARC_W_R(c, 15))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* df140: add w16, w16, #1 */
  ARC_W_W(c, 16, (ARC_W_R(c, 16) + UINT64_C(1)));
  /* df144: lsr x15, x15, #0x22 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(34)) & 63)));
  /* df148: mul w0, w15, w14 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 15)) * (uint32_t)(ARC_W_R(c, 14))));
  /* df14c: cmp w0, w17 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 17));
  /* df150: b.lo #0xdf13c */
  if (ARC_COND(c, 3)) goto L_df13c;
L_df154:;
  /* df154: cmp w16, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 16), ARC_W_R(c, 8));
  /* df158: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* df15c: cset w15, hs */
  ARC_W_W(c, 15, (ARC_COND(c, 2) ? 1 : 0));
  /* df160: tbz w14, #0, #0xdf1a4 */
  if (((ARC_W_R(c, 14)) >> 0 & 1) == 0) goto L_df1a4;
  /* df164: b #0xdf208 */
  goto L_df208;
L_df168:;
  /* df168: mov w15, #0x3334 */
  ARC_W_W(c, 15, UINT64_C(13108));
  /* df16c: mov w17, wzr */
  ARC_W_W(c, 17, ARC_W_R(c, 31));
  /* df170: movk w15, #0x3333, lsl #16 */
  ARC_W_W(c, 15, ((ARC_W_R(c, 15) & UINT64_C(18446744069414649855)) | UINT64_C(858980352)));
L_df174:;
  /* df174: umull x16, w16, w14 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 16))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* df178: add w17, w17, #1 */
  ARC_W_W(c, 17, (ARC_W_R(c, 17) + UINT64_C(1)));
  /* df17c: lsr x16, x16, #0x22 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(34)) & 63)));
  /* df180: mul w0, w16, w14 */
  ARC_W_W(c, 0, ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 14))));
  /* df184: cmp w0, w15 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 15));
  /* df188: b.lo #0xdf174 */
  if (ARC_COND(c, 3)) goto L_df174;
L_df18c:;
  /* df18c: cmp w17, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 17), ARC_W_R(c, 8));
  /* df190: mov w14, wzr */
  ARC_W_W(c, 14, ARC_W_R(c, 31));
  /* df194: mov w15, wzr */
  ARC_W_W(c, 15, ARC_W_R(c, 31));
  /* df198: cset w16, hs */
  ARC_W_W(c, 16, (ARC_COND(c, 2) ? 1 : 0));
  /* df19c: sub w13, w13, w16 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) - ARC_W_R(c, 16)));
  /* df1a0: tbnz w14, #0, #0xdf208 */
  if (((ARC_W_R(c, 14)) >> 0 & 1) != 0) goto L_df208;
L_df1a4:;
  /* df1a4: tbnz w15, #0, #0xdf208 */
  if (((ARC_W_R(c, 15)) >> 0 & 1) != 0) goto L_df208;
  /* df1a8: mov w9, #0xcccd */
  ARC_W_W(c, 9, UINT64_C(52429));
  /* df1ac: movk w9, #0xcccc, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* df1b0: umull x13, w13, w9 */
  ARC_X_W(c, 13, (((uint64_t)(uint32_t)(ARC_W_R(c, 13))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* df1b4: umull x14, w10, w9 */
  ARC_X_W(c, 14, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* df1b8: lsr x13, x13, #0x23 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(35)) & 63)));
  /* df1bc: lsr x15, x14, #0x23 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(35)) & 63)));
  /* df1c0: cmp w13, w15 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 15));
  /* df1c4: b.ls #0xdf338 */
  if (ARC_COND(c, 9)) goto L_df338;
  /* df1c8: mov w14, w13 */
  ARC_W_W(c, 14, ARC_W_R(c, 13));
  /* df1cc: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
L_df1d0:;
  /* df1d0: mov w10, w15 */
  ARC_W_W(c, 10, ARC_W_R(c, 15));
  /* df1d4: umull x14, w14, w9 */
  ARC_X_W(c, 14, (((uint64_t)(uint32_t)(ARC_W_R(c, 14))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* df1d8: mov w11, w12 */
  ARC_W_W(c, 11, ARC_W_R(c, 12));
  /* df1dc: umull x15, w15, w9 */
  ARC_X_W(c, 15, (((uint64_t)(uint32_t)(ARC_W_R(c, 15))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* df1e0: add w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* df1e4: umull x12, w12, w9 */
  ARC_X_W(c, 12, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* df1e8: lsr x14, x14, #0x23 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(35)) & 63)));
  /* df1ec: lsr x15, x15, #0x23 */
  ARC_X_W(c, 15, ((uint64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(35)) & 63)));
  /* df1f0: lsr x12, x12, #0x23 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(35)) & 63)));
  /* df1f4: cmp w14, w15 */
  (void)arc_sub32(c, ARC_W_R(c, 14), ARC_W_R(c, 15));
  /* df1f8: b.hi #0xdf1d0 */
  if (ARC_COND(c, 8)) goto L_df1d0;
  /* df1fc: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* df200: msub w11, w12, w9, w11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) - ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* df204: b #0xdf33c */
  goto L_df33c;
L_df208:;
  /* df208: mov w16, #0xcccd */
  ARC_W_W(c, 16, UINT64_C(52429));
  /* df20c: movk w16, #0xcccc, lsl #16 */
  ARC_W_W(c, 16, ((ARC_W_R(c, 16) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* df210: umull x13, w13, w16 */
  ARC_X_W(c, 13, (((uint64_t)(uint32_t)(ARC_W_R(c, 13))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* df214: umull x17, w10, w16 */
  ARC_X_W(c, 17, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* df218: lsr x0, x13, #0x23 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(35)) & 63)));
  /* df21c: lsr x3, x17, #0x23 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(35)) & 63)));
  /* df220: cmp w0, w3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 3));
  /* df224: b.ls #0xdf290 */
  if (ARC_COND(c, 9)) goto L_df290;
  /* df228: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* df22c: mov w1, #-0xa */
  ARC_W_W(c, 1, UINT64_C(18446744073709551606));
  /* df230: mov w2, #0xa */
  ARC_W_W(c, 2, UINT64_C(10));
  /* df234: mov w4, w10 */
  ARC_W_W(c, 4, ARC_W_R(c, 10));
L_df238:;
  /* df238: umull x17, w12, w16 */
  ARC_X_W(c, 17, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* df23c: mov w10, w3 */
  ARC_W_W(c, 10, ARC_W_R(c, 3));
  /* df240: add w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* df244: mul w3, w3, w1 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 3)) * (uint32_t)(ARC_W_R(c, 1))));
  /* df248: umull x0, w0, w16 */
  ARC_X_W(c, 0, (((uint64_t)(uint32_t)(ARC_W_R(c, 0))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* df24c: umull x5, w10, w16 */
  ARC_X_W(c, 5, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* df250: lsr x17, x17, #0x23 */
  ARC_X_W(c, 17, ((uint64_t)(ARC_X_R(c, 17)) >> ((UINT64_C(35)) & 63)));
  /* df254: cmn w3, w4 */
  (void)arc_add32(c, ARC_W_R(c, 3), ARC_W_R(c, 4), 0);
  /* df258: lsr x0, x0, #0x23 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(35)) & 63)));
  /* df25c: cset w4, eq */
  ARC_W_W(c, 4, (ARC_COND(c, 0) ? 1 : 0));
  /* df260: cmp w11, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(0));
  /* df264: lsr x3, x5, #0x23 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 5)) >> ((UINT64_C(35)) & 63)));
  /* df268: msub w11, w17, w2, w12 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 12)) - ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 2)))));
  /* df26c: cset w12, eq */
  ARC_W_W(c, 12, (ARC_COND(c, 0) ? 1 : 0));
  /* df270: and w15, w15, w4 */
  ARC_W_W(c, 15, (ARC_W_R(c, 15) & ARC_W_R(c, 4)));
  /* df274: and w14, w14, w12 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) & ARC_W_R(c, 12)));
  /* df278: mov w12, w17 */
  ARC_W_W(c, 12, ARC_W_R(c, 17));
  /* df27c: cmp w0, w3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 3));
  /* df280: mov w4, w10 */
  ARC_W_W(c, 4, ARC_W_R(c, 10));
  /* df284: b.hi #0xdf238 */
  if (ARC_COND(c, 8)) goto L_df238;
  /* df288: cbnz w15, #0xdf29c */
  if ((ARC_W_R(c, 15)) != 0) goto L_df29c;
  /* df28c: b #0xdf300 */
  goto L_df300;
L_df290:;
  /* df290: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
  /* df294: mov w17, w12 */
  ARC_W_W(c, 17, ARC_W_R(c, 12));
  /* df298: cbz w15, #0xdf300 */
  if ((ARC_W_R(c, 15)) == 0) goto L_df300;
L_df29c:;
  /* df29c: umull x12, w10, w16 */
  ARC_X_W(c, 12, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* df2a0: mov w16, #0xa */
  ARC_W_W(c, 16, UINT64_C(10));
  /* df2a4: lsr x12, x12, #0x23 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(35)) & 63)));
  /* df2a8: msub w12, w12, w16, w10 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 10)) - ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* df2ac: cbnz w12, #0xdf300 */
  if ((ARC_W_R(c, 12)) != 0) goto L_df300;
  /* df2b0: mov w16, #0xcccd */
  ARC_W_W(c, 16, UINT64_C(52429));
  /* df2b4: mov w1, #0x999a */
  ARC_W_W(c, 1, UINT64_C(39322));
  /* df2b8: mov w0, #0xa */
  ARC_W_W(c, 0, UINT64_C(10));
  /* df2bc: movk w16, #0xcccc, lsl #16 */
  ARC_W_W(c, 16, ((ARC_W_R(c, 16) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* df2c0: movk w1, #0x1999, lsl #16 */
  ARC_W_W(c, 1, ((ARC_W_R(c, 1) & UINT64_C(18446744069414649855)) | UINT64_C(429457408)));
L_df2c4:;
  /* df2c4: umull x10, w10, w16 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 10))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* df2c8: cmp w11, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(0));
  /* df2cc: add w13, w13, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) + UINT64_C(1)));
  /* df2d0: umull x12, w17, w16 */
  ARC_X_W(c, 12, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* df2d4: lsr x10, x10, #0x23 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(35)) & 63)));
  /* df2d8: lsr x12, x12, #0x23 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(35)) & 63)));
  /* df2dc: mul w2, w10, w16 */
  ARC_W_W(c, 2, ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 16))));
  /* df2e0: msub w11, w12, w0, w17 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 17)) - ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 0)))));
  /* df2e4: cset w17, eq */
  ARC_W_W(c, 17, (ARC_COND(c, 0) ? 1 : 0));
  /* df2e8: and w14, w14, w17 */
  ARC_W_W(c, 14, (ARC_W_R(c, 14) & ARC_W_R(c, 17)));
  /* df2ec: mov w17, w12 */
  ARC_W_W(c, 17, ARC_W_R(c, 12));
  /* df2f0: ror w2, w2, #1 */
  ARC_W_W(c, 2, arc_ror32(ARC_W_R(c, 2), ((UINT64_C(1)) & 31)));
  /* df2f4: cmp w2, w1 */
  (void)arc_sub32(c, ARC_W_R(c, 2), ARC_W_R(c, 1));
  /* df2f8: b.lo #0xdf2c4 */
  if (ARC_COND(c, 3)) goto L_df2c4;
  /* df2fc: b #0xdf304 */
  goto L_df304;
L_df300:;
  /* df300: mov w12, w17 */
  ARC_W_W(c, 12, ARC_W_R(c, 17));
L_df304:;
  /* df304: cmp w11, #5 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(5));
  /* df308: orn w9, w9, w15 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | (~ARC_W_R(c, 15))));
  /* df30c: cset w16, ne */
  ARC_W_W(c, 16, (ARC_COND(c, 1) ? 1 : 0));
  /* df310: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* df314: orn w10, w16, w14 */
  ARC_W_W(c, 10, (ARC_W_R(c, 16) | (~ARC_W_R(c, 14))));
  /* df318: cset w14, eq */
  ARC_W_W(c, 14, (ARC_COND(c, 0) ? 1 : 0));
  /* df31c: cmp w11, #4 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(4));
  /* df320: cset w11, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? 1 : 0));
  /* df324: orr w10, w10, w12 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 12)));
  /* df328: and w9, w9, w14 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & ARC_W_R(c, 14)));
  /* df32c: and w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & ARC_W_R(c, 11)));
  /* df330: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* df334: b #0xdf348 */
  goto L_df348;
L_df338:;
  /* df338: mov w13, wzr */
  ARC_W_W(c, 13, ARC_W_R(c, 31));
L_df33c:;
  /* df33c: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* df340: ccmp w11, #4, #2, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(4)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* df344: cset w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? 1 : 0));
L_df348:;
  /* df348: add w9, w12, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 12) + ARC_W_R(c, 9)));
  /* df34c: add w8, w13, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 13) + ARC_W_R(c, 8)));
  /* df350: orr x0, x9, x8, lsl #32 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | ((uint64_t)(ARC_X_R(c, 8)) << 32)));
  /* df354: ret  */
  return;
}

void fn1_e1f98(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038853528));
  /* e1f98: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1f9c: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* e1fa0: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1fa4: stp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* e1fa8: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e1fac: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e1fb0: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1fb4: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1fb8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* e1fbc: mov x8, #-0xa */
  ARC_X_W(c, 8, UINT64_C(18446744073709551606));
  /* e1fc0: movk x8, #0x3fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(4611404543450677248)));
  /* e1fc4: sub x9, x8, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* e1fc8: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* e1fcc: b.hi #0xe20fc */
  if (ARC_COND(c, 8)) goto L_e20fc;
  /* e1fd0: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e1fd4: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e1fd8: add x11, x0, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e1fdc: mov x19, x6 */
  ARC_X_W(c, 19, ARC_X_R(c, 6));
  /* e1fe0: mov x23, x5 */
  ARC_X_W(c, 23, ARC_X_R(c, 5));
  /* e1fe4: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* e1fe8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e1fec: mov x9, #-0xe */
  ARC_X_W(c, 9, UINT64_C(18446744073709551602));
  /* e1ff0: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* e1ff4: movk x9, #0x1fff, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(2305561534236983296)));
  /* e1ff8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e1ffc: csel x24, x11, x10, eq */
  ARC_X_W(c, 24, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e2000: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* e2004: mov x25, x3 */
  ARC_X_W(c, 25, ARC_X_R(c, 3));
  /* e2008: str x7, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 7));
  /* e200c: b.hi #0xe2048 */
  if (ARC_COND(c, 8)) goto L_e2048;
  /* e2010: lsl x8, x22, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 22)) << ((UINT64_C(1)) & 63)));
  /* e2014: add x9, x2, x22 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) + ARC_X_R(c, 22)));
  /* e2018: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* e201c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* e2020: csel x8, x9, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* e2024: orr x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* e2028: cmp x9, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(5));
  /* e202c: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* e2030: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e2034: mov w8, #5 */
  ARC_W_W(c, 8, UINT64_C(5));
  /* e2038: csel x26, x8, x9, lo */
  ARC_X_W(c, 26, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e203c: lsr x8, x26, #0x3e */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 26)) >> ((UINT64_C(62)) & 63)));
  /* e2040: cbz x8, #0xe204c */
  if ((ARC_X_R(c, 8)) == 0) goto L_e204c;
  /* e2044: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925768));
  fn1_d9fe8(c);
L_e2048:;
  /* e2048: add x26, x8, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) + UINT64_C(1)));
L_e204c:;
  /* e204c: lsl x0, x26, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(2)) & 63)));
  /* e2050: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925780));
  fn1_1428f0(c);
  /* e2054: lsl x28, x20, #2 */
  ARC_X_W(c, 28, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(2)) & 63)));
  /* e2058: mov x27, x0 */
  ARC_X_W(c, 27, ARC_X_R(c, 0));
  /* e205c: cbz x20, #0xe2070 */
  if ((ARC_X_R(c, 20)) == 0) goto L_e2070;
  /* e2060: mov x0, x27 */
  ARC_X_W(c, 0, ARC_X_R(c, 27));
  /* e2064: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* e2068: mov x2, x28 */
  ARC_X_W(c, 2, ARC_X_R(c, 28));
  /* e206c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925808));
  fn1_1449f0(c);
L_e2070:;
  /* e2070: cbz x19, #0xe2084 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e2084;
  /* e2074: add x0, x27, x20, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 27) + ((uint64_t)(ARC_X_R(c, 20)) << 2)));
  /* e2078: lsl x2, x19, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 19)) << ((UINT64_C(2)) & 63)));
  /* e207c: ldr x1, [sp, #8] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(8))));
  /* e2080: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925828));
  fn1_1449d8(c);
L_e2084:;
  /* e2084: add x8, x23, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 20)));
  /* e2088: subs x25, x25, x8 */
  ARC_X_W(c, 25, arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8)));
  /* e208c: b.eq #0xe20a8 */
  if (ARC_COND(c, 0)) goto L_e20a8;
  /* e2090: add x8, x27, x28 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + ARC_X_R(c, 28)));
  /* e2094: add x9, x24, x28 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) + ARC_X_R(c, 28)));
  /* e2098: lsl x2, x25, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(2)) & 63)));
  /* e209c: add x0, x8, x19, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 19)) << 2)));
  /* e20a0: add x1, x9, x23, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* e20a4: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925864));
  fn1_1449f0(c);
L_e20a8:;
  /* e20a8: add x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* e20ac: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* e20b0: b.eq #0xe20c0 */
  if (ARC_COND(c, 0)) goto L_e20c0;
  /* e20b4: lsl x1, x8, #2 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* e20b8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e20bc: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925888));
  fn1_142608(c);
L_e20c0:;
  /* e20c0: add x9, x19, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 20)));
  /* e20c4: orr x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(1)));
  /* e20c8: add x9, x9, x25 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 25)));
  /* e20cc: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e20d0: stp x9, x27, [x21, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* e20d4: str wzr, [x27, x9, lsl #2] */
  arc_st32((ARC_X_R(c, 27) + ((uint64_t)(ARC_X_R(c, 9)) << 2)), ARC_W_R(c, 31));
  /* e20d8: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e20dc: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e20e0: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e20e4: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e20e8: ldp x28, x27, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* e20ec: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e20f0: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* e20f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e20f8: ret  */
  return;
L_e20fc:;
  /* e20fc: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925952));
  fn1_e2274(c);
}

void fn1_e4d7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038865276));
  /* e4d7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e4d80: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e4d84: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e4d88: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e4d8c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e4d90: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e4d94: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* e4d98: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* e4d9c: mov w23, #0x7473 */
  ARC_W_W(c, 23, UINT64_C(29811));
  /* e4da0: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e4da4: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* e4da8: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e4dac: movk w23, #0x696f, lsl #16 */
  ARC_W_W(c, 23, ((ARC_W_R(c, 23) & UINT64_C(18446744069414649855)) | UINT64_C(1768882176)));
  /* e4db0: add x10, x0, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* e4db4: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* e4db8: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e4dbc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e4dc0: stur w23, [sp, #9] */
  arc_st32(((c)->sp + INT64_C(9)), ARC_W_R(c, 23));
  /* e4dc4: strb wzr, [sp, #0xd] */
  arc_st8(((c)->sp + INT64_C(13)), ARC_W_R(c, 31));
  /* e4dc8: csel x21, x10, x9, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e4dcc: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* e4dd0: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937428));
  fn1_142a58(c);
  /* e4dd4: ldr w24, [x0] */
  ARC_W_W(c, 24, arc_ld32(ARC_X_R(c, 0)));
  /* e4dd8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* e4ddc: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e4de0: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* e4de4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* e4de8: mov w2, w20 */
  ARC_W_W(c, 2, ARC_W_R(c, 20));
  /* e4dec: bl #0x142f20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937456));
  fn1_142f20(c);
  /* e4df0: ldr w8, [x22] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 22)));
  /* e4df4: str w24, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 24));
  /* e4df8: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e4dfc: b.eq #0xe4e4c */
  if (ARC_COND(c, 0)) goto L_e4e4c;
  /* e4e00: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e4e04: subs x8, x8, x21 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21)));
  /* e4e08: b.eq #0xe4e78 */
  if (ARC_COND(c, 0)) goto L_e4e78;
  /* e4e0c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e4e10: cbz x19, #0xe4e1c */
  if ((ARC_X_R(c, 19)) == 0) goto L_e4e1c;
  /* e4e14: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* e4e18: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e4e1c:;
  /* e4e1c: cmp x20, w20, sxtw */
  (void)arc_sub64(c, ARC_X_R(c, 20), ((uint64_t)(int64_t)(int32_t)(ARC_W_R(c, 20))));
  /* e4e20: b.ne #0xe4e80 */
  if (ARC_COND(c, 1)) goto L_e4e80;
  /* e4e24: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4e28: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937516));
  fn1_142e00(c);
  /* e4e2c: mov w0, w20 */
  ARC_W_W(c, 0, ARC_W_R(c, 20));
  /* e4e30: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4e34: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e4e38: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e4e3c: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4e40: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e4e44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e4e48: ret  */
  return;
L_e4e4c:;
  /* e4e4c: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* e4e50: add x1, x1, #0xa7d */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(2685)));
  /* e4e54: sub x8, x29, #0x18 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4e58: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4e5c: sub x19, x29, #0x18 */
  ARC_X_W(c, 19, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4e60: bl #0xe7974 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937572));
  fn1_e7974(c);
  /* e4e64: ldurb w8, [x29, #-0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-24))));
  /* e4e68: ldur x9, [x29, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* e4e6c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e4e70: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e4e74: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937592));
  fn1_da038(c);
L_e4e78:;
  /* e4e78: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4e7c: bl #0xe779c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937600));
  fn1_e779c(c);
L_e4e80:;
  /* e4e80: mov w8, #0x24 */
  ARC_W_W(c, 8, UINT64_C(36));
  /* e4e84: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e4e88: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e4e8c: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e4e90: sturb w8, [x29, #-0x18] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-24)), ARC_W_R(c, 8));
  /* e4e94: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e4e98: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* e4e9c: sub x9, x29, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4ea0: stur w23, [x29, #-0x17] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-23)), ARC_W_R(c, 23));
  /* e4ea4: stur x10, [x29, #-0x13] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-19)), ARC_X_R(c, 10));
  /* e4ea8: stur x8, [x29, #-0xd] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-13)), ARC_X_R(c, 8));
  /* e4eac: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4eb0: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937652));
  fn1_da038(c);
  /* e4eb4: b #0xe4eb8 */
  goto L_e4eb8;
L_e4eb8:;
  /* e4eb8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e4ebc: sub x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(24)));
  /* e4ec0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937668));
  fn1_142e00(c);
  /* e4ec4: b #0xe4ecc */
  goto L_e4ecc;
  /* e4ec8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e4ecc:;
  /* e4ecc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4ed0: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937684));
  fn1_142e00(c);
  /* e4ed4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4ed8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(937692));
  fn1_9cc20(c);
}

void fn1_e8fd0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038882256));
  /* e8fd0: bti c */
  /* bti: no architectural effect here */
  /* e8fd4: mov x8, #0x2d69 */
  ARC_X_W(c, 8, UINT64_C(11625));
  /* e8fd8: lsl w9, w0, #3 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 0)) << ((UINT64_C(3)) & 31)));
  /* e8fdc: lsr x10, x0, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e8fe0: movk x8, #0xeb38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3946315776)));
  /* e8fe4: movk x8, #0xea08, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(257320080637952)));
  /* e8fe8: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* e8fec: movk x8, #0x9ddf, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(11375811183761162240)));
  /* e8ff0: eor x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ARC_X_R(c, 10)));
  /* e8ff4: mul x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e8ff8: eor x10, x10, x9, lsr #47 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* e8ffc: eor x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) ^ ARC_X_R(c, 9)));
  /* e9000: mul x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e9004: lsr x9, x8, #0x2f */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(47)) & 63)));
  /* e9008: eor w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) ^ ARC_W_R(c, 8)));
  /* e900c: mov w9, #0x69 */
  ARC_W_W(c, 9, UINT64_C(105));
  /* e9010: mul w8, w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9))));
  /* e9014: nop  */
  /* nop: no architectural effect here */
  /* e9018: adr x9, #0x159240 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413696)));
  /* e901c: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* e9020: add x8, x9, x8, lsl #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 6)));
  /* e9024: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* e9028: ldar w0, [x8] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 8)));
  /* e902c: ret  */
  return;
}

void fn1_eb004(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890500));
  /* eb004: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb008: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb00c: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eb010: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb014: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb018: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962588));
  fn1_142518(c);
  /* eb01c: cbnz w0, #0xeb048 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb048;
  /* eb020: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb024: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962600));
  fn1_142560(c);
  /* eb028: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eb02c: bl #0x1430d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962608));
  fn1_1430d0(c);
  /* eb030: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb034: bl #0x143220 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962616));
  fn1_143220(c);
  /* eb038: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eb03c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb040: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb044: ret  */
  return;
L_eb048:;
  /* eb048: nop  */
  /* nop: no architectural effect here */
  /* eb04c: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb050: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962644));
  fn1_142a40(c);
  /* eb054: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962648));
  fn1_a1454(c);
  /* eb058: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962652));
  fn1_a1454(c);
  /* eb05c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962656));
  fn1_a1454(c);
  /* eb060: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962660));
  fn1_a1454(c);
}

void fn1_ecf7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898556));
  /* ecf7c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ecf80: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ecf84: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ecf88: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ecf8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ecf90: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ecf94: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* ecf98: b.eq #0xed040 */
  if (ARC_COND(c, 0)) goto L_ed040;
  /* ecf9c: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* ecfa0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ecfa4: cbz x8, #0xecfd0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_ecfd0;
  /* ecfa8: sub x21, x8, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - UINT64_C(1)));
L_ecfac:;
  /* ecfac: ldp x8, x9, [x19, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(56));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ecfb0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* ecfb4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ecfb8: ldr x8, [x8, x21, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* ecfbc: ldr w2, [x9, x21, lsl #2] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 21)) << 2))));
  /* ecfc0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970692));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ecfc4: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* ecfc8: cmn x21, #1 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(1), 0);
  /* ecfcc: b.ne #0xecfac */
  if (ARC_COND(c, 1)) goto L_ecfac;
L_ecfd0:;
  /* ecfd0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ecfd4: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ecfd8: bl #0x1433e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970716));
  fn1_1433e8(c);
  /* ecfdc: ldr x9, [x20, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(136))));
  /* ecfe0: ldr w10, [x20, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(144))));
  /* ecfe4: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* ecfe8: str x9, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 9));
  /* ecfec: str w10, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 10));
  /* ecff0: cbz x8, #0xed01c */
  if ((ARC_X_R(c, 8)) == 0) goto L_ed01c;
  /* ecff4: sub x21, x8, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - UINT64_C(1)));
L_ecff8:;
  /* ecff8: ldp x8, x9, [x19, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(56));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ecffc: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* ed000: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ed004: ldr x8, [x8, x21, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* ed008: ldr w2, [x9, x21, lsl #2] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 21)) << 2))));
  /* ed00c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970768));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ed010: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* ed014: cmn x21, #1 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(1), 0);
  /* ed018: b.ne #0xecff8 */
  if (ARC_COND(c, 1)) goto L_ecff8;
L_ed01c:;
  /* ed01c: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* ed020: ldr w9, [x19, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* ed024: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* ed028: ldr w8, [x20, #0x24] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(36))));
  /* ed02c: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* ed030: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* ed034: tst w9, w8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* ed038: stp w9, w8, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* ed03c: b.ne #0xed058 */
  if (ARC_COND(c, 1)) goto L_ed058;
L_ed040:;
  /* ed040: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ed044: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed048: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed04c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed050: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed054: ret  */
  return;
L_ed058:;
  /* ed058: nop  */
  /* nop: no architectural effect here */
  /* ed05c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ed060: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(970852));
  fn1_ec720(c);
}

void fn1_ef660(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038908512));
  /* ef660: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ef664: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ef668: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ef66c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ef670: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ef674: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ef678: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef67c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ef680: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ef684: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ef688: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ef68c: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ef690: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980628));
  fn1_1435f8(c);
  /* ef694: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* ef698: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ef69c: b.ne #0xef764 */
  if (ARC_COND(c, 1)) goto L_ef764;
  /* ef6a0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef6a4: nop  */
  /* nop: no architectural effect here */
  /* ef6a8: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ef6ac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef6b0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef6b4: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ef6b8: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef6bc: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* ef6c0: b.eq #0xef6d0 */
  if (ARC_COND(c, 0)) goto L_ef6d0;
  /* ef6c4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef6c8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ef6cc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980688));
  fn1_db2e0(c);
L_ef6d0:;
  /* ef6d0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ef6d4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ef6d8: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ef6dc: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980704));
  fn1_143748(c);
  /* ef6e0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef6e4: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ef6e8: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef6ec: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef6f0: ldr x8, [x9, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(104))));
  /* ef6f4: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ef6f8: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ef6fc: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ef700: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* ef704: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980744));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ef708: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef70c: b.eq #0xef730 */
  if (ARC_COND(c, 0)) goto L_ef730;
  /* ef710: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef714: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef718: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980764));
  fn1_bd950(c);
  /* ef71c: cbnz x0, #0xef730 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef730;
  /* ef720: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef724: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef728: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef72c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980784));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef730:;
  /* ef730: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef734: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef738: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef73c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef740: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ef744: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ef748: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ef74c: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef750: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ef754: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ef758: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ef75c: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ef760: b.ne #0xef780 */
  if (ARC_COND(c, 1)) goto L_ef780;
L_ef764:;
  /* ef764: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef768: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ef76c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ef770: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ef774: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ef778: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ef77c: ret  */
  return;
L_ef780:;
  /* ef780: nop  */
  /* nop: no architectural effect here */
  /* ef784: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ef788: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980876));
  fn1_ec720(c);
  /* ef78c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef790: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ef794: b.eq #0xef7b8 */
  if (ARC_COND(c, 0)) goto L_ef7b8;
  /* ef798: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef79c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef7a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980900));
  fn1_bd950(c);
  /* ef7a4: cbnz x0, #0xef7b8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef7b8;
  /* ef7a8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef7ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef7b0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef7b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980920));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef7b8:;
  /* ef7b8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ef7bc: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980928));
  fn1_142548(c);
  /* ef7c0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef7c4: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef7c8: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef7cc: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ef7d0: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* ef7d4: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ef7d8: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ef7dc: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef7e0: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ef7e4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef7e8: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef7ec: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ef7f0: tbnz w8, #0, #0xef7fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ef7fc;
  /* ef7f4: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980984));
  fn1_142980(c);
  /* ef7f8: b #0xef730 */
  goto L_ef730;
L_ef7fc:;
  /* ef7fc: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980992));
  fn1_1429b0(c);
  /* ef800: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef804: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981000));
  fn1_142980(c);
  /* ef808: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef80c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981008));
  fn1_9cc20(c);
  /* ef810: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(981012));
  fn1_a1454(c);
}

void fn1_f39a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925728));
  /* f39a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f39a4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f39a8: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* f39ac: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f39b0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f39b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f39b8: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* f39bc: b.eq #0xf3a64 */
  if (ARC_COND(c, 0)) goto L_f3a64;
  /* f39c0: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* f39c4: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f39c8: cbz x8, #0xf39f4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_f39f4;
  /* f39cc: sub x21, x8, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - UINT64_C(1)));
L_f39d0:;
  /* f39d0: ldp x8, x9, [x19, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(56));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f39d4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* f39d8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f39dc: ldr x8, [x8, x21, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* f39e0: ldr w2, [x9, x21, lsl #2] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 21)) << 2))));
  /* f39e4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997864));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f39e8: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* f39ec: cmn x21, #1 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(1), 0);
  /* f39f0: b.ne #0xf39d0 */
  if (ARC_COND(c, 1)) goto L_f39d0;
L_f39f4:;
  /* f39f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f39f8: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* f39fc: bl #0x1433e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997888));
  fn1_1433e8(c);
  /* f3a00: ldr x9, [x20, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(136))));
  /* f3a04: ldr w10, [x20, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(144))));
  /* f3a08: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* f3a0c: str x9, [x19, #0x88] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(136)), ARC_X_R(c, 9));
  /* f3a10: str w10, [x19, #0x90] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(144)), ARC_W_R(c, 10));
  /* f3a14: cbz x8, #0xf3a40 */
  if ((ARC_X_R(c, 8)) == 0) goto L_f3a40;
  /* f3a18: sub x21, x8, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - UINT64_C(1)));
L_f3a1c:;
  /* f3a1c: ldp x8, x9, [x19, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(56));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f3a20: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* f3a24: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f3a28: ldr x8, [x8, x21, lsl #3] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 3))));
  /* f3a2c: ldr w2, [x9, x21, lsl #2] */
  ARC_W_W(c, 2, arc_ld32((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 21)) << 2))));
  /* f3a30: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(997940));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f3a34: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* f3a38: cmn x21, #1 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(1), 0);
  /* f3a3c: b.ne #0xf3a1c */
  if (ARC_COND(c, 1)) goto L_f3a1c;
L_f3a40:;
  /* f3a40: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* f3a44: ldr w9, [x19, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* f3a48: cmp x8, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(0));
  /* f3a4c: ldr w8, [x20, #0x24] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(36))));
  /* f3a50: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* f3a54: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* f3a58: tst w9, w8 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 8)));
  /* f3a5c: stp w9, w8, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* f3a60: b.ne #0xf3a7c */
  if (ARC_COND(c, 1)) goto L_f3a7c;
L_f3a64:;
  /* f3a64: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f3a68: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f3a6c: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* f3a70: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f3a74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f3a78: ret  */
  return;
L_f3a7c:;
  /* f3a7c: nop  */
  /* nop: no architectural effect here */
  /* f3a80: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f3a84: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(998024));
  fn1_ec720(c);
}

void fn1_f6094(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038935700));
  /* f6094: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f6098: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f609c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f60a0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f60a4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f60a8: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f60ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f60b0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f60b4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f60b8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f60bc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f60c0: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f60c4: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007816));
  fn1_143670(c);
  /* f60c8: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f60cc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f60d0: b.ne #0xf6198 */
  if (ARC_COND(c, 1)) goto L_f6198;
  /* f60d4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f60d8: nop  */
  /* nop: no architectural effect here */
  /* f60dc: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f60e0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f60e4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f60e8: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f60ec: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f60f0: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f60f4: b.eq #0xf6104 */
  if (ARC_COND(c, 0)) goto L_f6104;
  /* f60f8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f60fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f6100: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007876));
  fn1_db2e0(c);
L_f6104:;
  /* f6104: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f6108: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f610c: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f6110: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007892));
  fn1_143748(c);
  /* f6114: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6118: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f611c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6120: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6124: ldr x8, [x9, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(104))));
  /* f6128: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f612c: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f6130: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f6134: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f6138: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007932));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f613c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f6140: b.eq #0xf6164 */
  if (ARC_COND(c, 0)) goto L_f6164;
  /* f6144: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f6148: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f614c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007952));
  fn1_bd950(c);
  /* f6150: cbnz x0, #0xf6164 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f6164;
  /* f6154: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f6158: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f615c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f6160: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007972));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f6164:;
  /* f6164: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6168: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f616c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6170: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6174: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f6178: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f617c: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f6180: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f6184: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f6188: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f618c: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f6190: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f6194: b.ne #0xf61b4 */
  if (ARC_COND(c, 1)) goto L_f61b4;
L_f6198:;
  /* f6198: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f619c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f61a0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f61a4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f61a8: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f61ac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f61b0: ret  */
  return;
L_f61b4:;
  /* f61b4: nop  */
  /* nop: no architectural effect here */
  /* f61b8: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f61bc: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008064));
  fn1_ec720(c);
  /* f61c0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f61c4: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f61c8: b.eq #0xf61ec */
  if (ARC_COND(c, 0)) goto L_f61ec;
  /* f61cc: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f61d0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f61d4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008088));
  fn1_bd950(c);
  /* f61d8: cbnz x0, #0xf61ec */
  if ((ARC_X_R(c, 0)) != 0) goto L_f61ec;
  /* f61dc: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f61e0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f61e4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f61e8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008108));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f61ec:;
  /* f61ec: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f61f0: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008116));
  fn1_142548(c);
  /* f61f4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f61f8: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f61fc: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6200: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f6204: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f6208: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f620c: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f6210: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f6214: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f6218: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f621c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6220: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f6224: tbnz w8, #0, #0xf6230 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f6230;
  /* f6228: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008172));
  fn1_142980(c);
  /* f622c: b #0xf6164 */
  goto L_f6164;
L_f6230:;
  /* f6230: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008180));
  fn1_1429b0(c);
  /* f6234: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6238: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008188));
  fn1_142980(c);
  /* f623c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6240: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008196));
  fn1_9cc20(c);
  /* f6244: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1008200));
  fn1_a1454(c);
}

void fn1_fb388(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038956936));
  /* fb388: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb38c: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb390: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fb394: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb398: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fb39c: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* fb3a0: orr w2, w2, #8 */
  ARC_W_W(c, 2, (ARC_W_R(c, 2) | UINT64_C(8)));
  /* fb3a4: bl #0x143598 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029032));
  fn1_143598(c);
  /* fb3a8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* fb3ac: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fb3b0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* fb3b4: cbz x0, #0xfb3c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fb3c0;
  /* fb3b8: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* fb3bc: b #0xfb3c8 */
  goto L_fb3c8;
L_fb3c0:;
  /* fb3c0: ldr w9, [x8, #0x20] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 8) + INT64_C(32))));
  /* fb3c4: orr w9, w9, #4 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(4)));
L_fb3c8:;
  /* fb3c8: ldr x10, [x8, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* fb3cc: ldr w11, [x8, #0x24] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 8) + INT64_C(36))));
  /* fb3d0: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* fb3d4: cset w10, eq */
  ARC_W_W(c, 10, (ARC_COND(c, 0) ? 1 : 0));
  /* fb3d8: orr w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 10)));
  /* fb3dc: tst w9, w11 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & ARC_W_R(c, 11)));
  /* fb3e0: str w9, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 9));
  /* fb3e4: b.ne #0xfb3f8 */
  if (ARC_COND(c, 1)) goto L_fb3f8;
  /* fb3e8: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fb3ec: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb3f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb3f4: ret  */
  return;
L_fb3f8:;
  /* fb3f8: nop  */
  /* nop: no architectural effect here */
  /* fb3fc: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* fb400: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1029124));
  fn1_ec720(c);
}

void fn1_feab0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038971056));
  /* feab0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* feab4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* feab8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* feabc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* feac0: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* feac4: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* feac8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* feacc: ldr x1, [x1, #0xbc0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3008))));
  /* fead0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* fead4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043160));
  fn1_143748(c);
  /* fead8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* feadc: str x0, [x19, #0x48] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(72)), ARC_X_R(c, 0));
  /* feae0: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* feae4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043176));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* feae8: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* feaec: str w0, [x19, #0x58] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(88)), ARC_W_R(c, 0));
  /* feaf0: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* feaf4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* feaf8: ldr x9, [x9, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(56))));
  /* feafc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043200));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* feb00: ldr w8, [x19, #0x58] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(88))));
  /* feb04: and w9, w0, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* feb08: strb w9, [x19, #0x61] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(97)), ARC_W_R(c, 9));
  /* feb0c: cmp w8, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(9));
  /* feb10: b.ge #0xfeb24 */
  if (ARC_COND(c, 10)) goto L_feb24;
  /* feb14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* feb18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* feb1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* feb20: ret  */
  return;
L_feb24:;
  /* feb24: nop  */
  /* nop: no architectural effect here */
  /* feb28: adr x0, #0x51538 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(333112)));
  /* feb2c: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1043248));
  fn1_142c98(c);
}

void fn1_10b5d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039023064));
  /* 10b5d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10b5dc: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 10b5e0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10b5e4: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10b5e8: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10b5ec: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10b5f0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10b5f4: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 10b5f8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b5fc: cbz x0, #0x10b72c */
  if ((ARC_X_R(c, 0)) == 0) goto L_10b72c;
  /* 10b600: ldr x8, [x4, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 4) + INT64_C(24))));
  /* 10b604: sub x9, x3, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) - ARC_X_R(c, 1)));
  /* 10b608: sub x25, x2, x1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 10b60c: mov w24, w5 */
  ARC_W_W(c, 24, ARC_W_R(c, 5));
  /* 10b610: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 10b614: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 10b618: subs x8, x8, x9 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 10b61c: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10b620: csel x23, x8, xzr, gt */
  ARC_X_W(c, 23, (ARC_COND(c, 12) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* 10b624: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 10b628: b.lt #0x10b648 */
  if (ARC_COND(c, 11)) goto L_10b648;
  /* 10b62c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10b630: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b634: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* 10b638: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 10b63c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095232));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10b640: cmp x0, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 25));
  /* 10b644: b.ne #0x10b728 */
  if (ARC_COND(c, 1)) goto L_10b728;
L_10b648:;
  /* 10b648: cmp x23, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(1));
  /* 10b64c: b.lt #0x10b6f4 */
  if (ARC_COND(c, 11)) goto L_10b6f4;
  /* 10b650: cmp x23, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(23));
  /* 10b654: b.hs #0x10b66c */
  if (ARC_COND(c, 2)) goto L_10b66c;
  /* 10b658: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 10b65c: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 10b660: orr x25, x9, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* 10b664: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 10b668: b #0x10b694 */
  goto L_10b694;
L_10b66c:;
  /* 10b66c: orr x8, x23, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(7)));
  /* 10b670: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* 10b674: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* 10b678: csinc x26, x9, x8, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 10b67c: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 10b680: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095300));
  fn1_1428f0(c);
  /* 10b684: orr x8, x26, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) | UINT64_C(1)));
  /* 10b688: mov x25, x0 */
  ARC_X_W(c, 25, ARC_X_R(c, 0));
  /* 10b68c: stp x23, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 10b690: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_10b694:;
  /* 10b694: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* 10b698: mov w1, w24 */
  ARC_W_W(c, 1, ARC_W_R(c, 24));
  /* 10b69c: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 10b6a0: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095332));
  fn1_144a20(c);
  /* 10b6a4: strb wzr, [x25, x23] */
  arc_st8((ARC_X_R(c, 25) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
  /* 10b6a8: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 10b6ac: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 10b6b0: ldr x10, [sp, #0x18] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10b6b4: ldr x9, [x9, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(96))));
  /* 10b6b8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10b6bc: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 10b6c0: csinc x1, x10, x8, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 8)) + 1)));
  /* 10b6c4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b6c8: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 10b6cc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095376));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 10b6d0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 10b6d4: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 10b6d8: tbz w8, #0, #0x10b6ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10b6ec;
  /* 10b6dc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10b6e0: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10b6e4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10b6e8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095404));
  fn1_142608(c);
L_10b6ec:;
  /* 10b6ec: cmp x24, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 23));
  /* 10b6f0: b.ne #0x10b728 */
  if (ARC_COND(c, 1)) goto L_10b728;
L_10b6f4:;
  /* 10b6f4: sub x22, x22, x21 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* 10b6f8: cmp x22, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(1));
  /* 10b6fc: b.lt #0x10b720 */
  if (ARC_COND(c, 11)) goto L_10b720;
  /* 10b700: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10b704: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b708: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 10b70c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10b710: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 10b714: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095448));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10b718: cmp x0, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22));
  /* 10b71c: b.ne #0x10b728 */
  if (ARC_COND(c, 1)) goto L_10b728;
L_10b720:;
  /* 10b720: str xzr, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 31));
  /* 10b724: b #0x10b72c */
  goto L_10b72c;
L_10b728:;
  /* 10b728: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_10b72c:;
  /* 10b72c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b730: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10b734: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10b738: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10b73c: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10b740: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10b744: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 10b748: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10b74c: ret  */
  return;
  /* 10b750: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 10b754: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b758: tbz w8, #0, #0x10b76c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10b76c;
  /* 10b75c: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10b760: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10b764: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 10b768: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095532));
  fn1_142608(c);
L_10b76c:;
  /* 10b76c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b770: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095540));
  fn1_9cc20(c);
}

void fn1_113630(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039055920));
  /* 113630: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 113634: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 113638: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11363c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 113640: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 113644: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* 113648: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 11364c: mov w8, #0x25 */
  ARC_W_W(c, 8, UINT64_C(37));
  /* 113650: tst w5, #0xff */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 5) & UINT64_C(255)));
  /* 113654: sturb w8, [x29, #-4] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 8));
  /* 113658: sturb w4, [x29, #-3] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-3)), ARC_W_R(c, 4));
  /* 11365c: sturb w5, [x29, #-2] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-2)), ARC_W_R(c, 5));
  /* 113660: sturb wzr, [x29, #-1] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-1)), ARC_W_R(c, 31));
  /* 113664: b.eq #0x113670 */
  if (ARC_COND(c, 0)) goto L_113670;
  /* 113668: sturb w5, [x29, #-3] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-3)), ARC_W_R(c, 5));
  /* 11366c: sturb w4, [x29, #-2] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-2)), ARC_W_R(c, 4));
L_113670:;
  /* 113670: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 113674: ldr x4, [x0] */
  ARC_X_W(c, 4, arc_ld64(ARC_X_R(c, 0)));
  /* 113678: sub x2, x29, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* 11367c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 113680: sub x1, x8, x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 20)));
  /* 113684: bl #0x1444b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1128072));
  fn1_1444b0(c);
  /* 113688: add x8, x20, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 0)));
  /* 11368c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* 113690: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 113694: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 113698: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 11369c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1136a0: ret  */
  return;
}

void fn1_1140a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058600));
  /* 1140a8: bti c */
  /* bti: no architectural effect here */
  /* 1140ac: ldr w0, [x0, #0x78] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(120))));
  /* 1140b0: ret  */
  return;
}

void fn1_11f9ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039105964));
  /* 11f9ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11f9b0: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11f9b4: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11f9b8: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11f9bc: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11f9c0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11f9c4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11f9c8: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f9cc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11f9d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f9d4: ldr x23, [x23, #0xcb8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3256))));
  /* 11f9d8: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f9dc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11f9e0: b.eq #0x11fa9c */
  if (ARC_COND(c, 0)) goto L_11fa9c;
  /* 11f9e4: nop  */
  /* nop: no architectural effect here */
  /* 11f9e8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f9ec: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178096));
  fn1_142518(c);
  /* 11f9f0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f9f4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f9f8: b.ne #0x11fa24 */
  if (ARC_COND(c, 1)) goto L_11fa24;
  /* 11f9fc: nop  */
  /* nop: no architectural effect here */
  /* 11fa00: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11fa04: nop  */
  /* nop: no architectural effect here */
  /* 11fa08: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11fa0c:;
  /* 11fa0c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11fa10: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11fa14: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178136));
  fn1_142530(c);
  /* 11fa18: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11fa1c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11fa20: b.eq #0x11fa0c */
  if (ARC_COND(c, 0)) goto L_11fa0c;
L_11fa24:;
  /* 11fa24: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11fa28: cbz x8, #0x11fa3c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11fa3c;
  /* 11fa2c: nop  */
  /* nop: no architectural effect here */
  /* 11fa30: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fa34: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178168));
  fn1_142560(c);
  /* 11fa38: b #0x11fa9c */
  goto L_11fa9c;
L_11fa3c:;
  /* 11fa3c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11fa40: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11fa44: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11fa48: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11fa4c: nop  */
  /* nop: no architectural effect here */
  /* 11fa50: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fa54: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178200));
  fn1_142560(c);
  /* 11fa58: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11fa5c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11fa60: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11fa64: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178216));
  fn1_a2030(c);
  /* 11fa68: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11fa6c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11fa70: nop  */
  /* nop: no architectural effect here */
  /* 11fa74: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fa78: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178236));
  fn1_142518(c);
  /* 11fa7c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11fa80: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11fa84: nop  */
  /* nop: no architectural effect here */
  /* 11fa88: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11fa8c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178256));
  fn1_142560(c);
  /* 11fa90: nop  */
  /* nop: no architectural effect here */
  /* 11fa94: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11fa98: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178268));
  fn1_142578(c);
L_11fa9c:;
  /* 11fa9c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11faa0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11faa4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11faa8: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11faac: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178288));
  fn1_db2e0(c);
  /* 11fab0: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11fab4: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11fab8: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11fabc: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11fac0: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11fac4: b.hi #0x11faf0 */
  if (ARC_COND(c, 8)) goto L_11faf0;
  /* 11fac8: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11facc: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11fad0: b.ls #0x11fae4 */
  if (ARC_COND(c, 9)) goto L_11fae4;
  /* 11fad4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11fad8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178332));
  fn1_1352bc(c);
  /* 11fadc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11fae0: b #0x11faf0 */
  goto L_11faf0;
L_11fae4:;
  /* 11fae4: b.hs #0x11faf0 */
  if (ARC_COND(c, 2)) goto L_11faf0;
  /* 11fae8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11faec: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11faf0:;
  /* 11faf0: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11faf4: cbz x20, #0x11fb18 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11fb18;
  /* 11faf8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11fafc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11fb00: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178372));
  fn1_bd950(c);
  /* 11fb04: cbnz x0, #0x11fb18 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11fb18;
  /* 11fb08: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11fb0c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11fb10: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11fb14: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178392));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11fb18:;
  /* 11fb18: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11fb1c: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11fb20: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11fb24: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11fb28: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11fb2c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11fb30: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11fb34: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11fb38: ret  */
  return;
  /* 11fb3c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11fb40: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11fb44: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11fb48: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178444));
  fn1_bd950(c);
  /* 11fb4c: cbnz x0, #0x11fb74 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11fb74;
  /* 11fb50: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11fb54: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11fb58: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11fb5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178464));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11fb60: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11fb64: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178472));
  fn1_9cc20(c);
  /* 11fb68: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11fb6c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11fb70: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178484));
  fn1_d2a78(c);
L_11fb74:;
  /* 11fb74: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11fb78: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1178492));
  fn1_9cc20(c);
}

void fn1_1268e0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039134432));
  /* 1268e0: bti c */
  /* bti: no architectural effect here */
  /* 1268e4: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 1268e8: b.eq #0x126944 */
  if (ARC_COND(c, 0)) goto L_126944;
  /* 1268ec: sub x8, x2, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 1268f0: sub x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(4)));
  /* 1268f4: cmp x8, #0x7c */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(124));
  /* 1268f8: b.lo #0x126920 */
  if (ARC_COND(c, 3)) goto L_126920;
  /* 1268fc: and x9, x8, #0xfffffffffffffffc */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(18446744073709551612)));
  /* 126900: add x9, x1, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* 126904: add x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* 126908: cmp x4, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 4), ARC_X_R(c, 9));
  /* 12690c: b.hs #0x12694c */
  if (ARC_COND(c, 2)) goto L_12694c;
  /* 126910: add x9, x4, x8, lsr #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 4) + ((uint64_t)(ARC_X_R(c, 8)) >> 2)));
  /* 126914: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 126918: cmp x1, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 9));
  /* 12691c: b.hs #0x12694c */
  if (ARC_COND(c, 2)) goto L_12694c;
L_126920:;
  /* 126920: mov x8, x4 */
  ARC_X_W(c, 8, ARC_X_R(c, 4));
  /* 126924: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
L_126928:;
  /* 126928: ldr w9, [x0], #4 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(4));
    ARC_W_W(c, 9, arc_ld32(_a));
  }
  /* 12692c: cmp w9, #0x80 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(128));
  /* 126930: csel w9, w9, w3, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 3)));
  /* 126934: cmp x0, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 2));
  /* 126938: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 12693c: b.ne #0x126928 */
  if (ARC_COND(c, 1)) goto L_126928;
L_126940:;
  /* 126940: ret  */
  return;
L_126944:;
  /* 126944: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 126948: ret  */
  return;
L_12694c:;
  /* 12694c: lsr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63)));
  /* 126950: movi v0.4s, #0x80 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = UINT64_C(128);
    _t.u32[1] = UINT64_C(128);
    _t.u32[2] = UINT64_C(128);
    _t.u32[3] = UINT64_C(128);
    (c)->q[0] = _t; }
  /* 126954: dup v1.16b, w3 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (ARC_W_R(c, 3));
    _t.u8[1] = (ARC_W_R(c, 3));
    _t.u8[2] = (ARC_W_R(c, 3));
    _t.u8[3] = (ARC_W_R(c, 3));
    _t.u8[4] = (ARC_W_R(c, 3));
    _t.u8[5] = (ARC_W_R(c, 3));
    _t.u8[6] = (ARC_W_R(c, 3));
    _t.u8[7] = (ARC_W_R(c, 3));
    _t.u8[8] = (ARC_W_R(c, 3));
    _t.u8[9] = (ARC_W_R(c, 3));
    _t.u8[10] = (ARC_W_R(c, 3));
    _t.u8[11] = (ARC_W_R(c, 3));
    _t.u8[12] = (ARC_W_R(c, 3));
    _t.u8[13] = (ARC_W_R(c, 3));
    _t.u8[14] = (ARC_W_R(c, 3));
    _t.u8[15] = (ARC_W_R(c, 3));
    (c)->q[1] = _t; }
  /* 126958: adrp x11, #0x52000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(335872)));
  /* 12695c: add x12, x4, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 4) + UINT64_C(16)));
  /* 126960: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 126964: ldr q2, [x11, #0xc20] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 11) + INT64_C(3104))), arc_ld64((ARC_X_R(c, 11) + INT64_C(3104)) + 8));
  /* 126968: add x11, x1, #0x40 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(64)));
  /* 12696c: and x10, x9, #0x7fffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(9223372036854775776)));
  /* 126970: add x0, x1, x10, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* 126974: add x8, x4, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 4) + ARC_X_R(c, 10)));
  /* 126978: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_12697c:;
  /* 12697c: ldp q3, q4, [x11, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-64));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 126980: subs x13, x13, #0x20 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(32)));
  /* 126984: ldp q16, q17, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    arc_q_w(c, 16, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 126988: ldp q5, q6, [x11, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-32));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 6, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 12698c: ldp q18, q19, [x11, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(32));
    arc_q_w(c, 18, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 19, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 126990: cmhi v21.4s, v0.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[4].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[4].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* 126994: cmhi v22.4s, v0.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[3].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[3].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[3].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[3].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* 126998: cmhi v25.4s, v0.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[17].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[17].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[17].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[17].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[25] = _t; }
  /* 12699c: cmhi v26.4s, v0.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[16].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[16].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[16].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[16].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[26] = _t; }
  /* 1269a0: cmhi v7.4s, v0.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[6].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[6].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[6].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[6].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* 1269a4: cmhi v20.4s, v0.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[5].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[5].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[5].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[5].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[20] = _t; }
  /* 1269a8: tbl v3.16b, {v3.16b, v4.16b, v5.16b, v6.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 3, 4, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 3, 4, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 3, 4, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 3, 4, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 3, 4, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 3, 4, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 3, 4, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 3, 4, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 3, 4, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 3, 4, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 3, 4, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 3, 4, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 3, 4, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 3, 4, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 3, 4, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 3, 4, (c)->q[2].u8[15]);
    (c)->q[3] = _t; }
  /* 1269ac: cmhi v23.4s, v0.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[19].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[19].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[19].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[19].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* 1269b0: cmhi v24.4s, v0.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[18].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[18].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[18].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[18].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[24] = _t; }
  /* 1269b4: tbl v5.16b, {v16.16b, v17.16b, v18.16b, v19.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 16, 4, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 16, 4, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 16, 4, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 16, 4, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 16, 4, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 16, 4, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 16, 4, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 16, 4, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 16, 4, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 16, 4, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 16, 4, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 16, 4, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 16, 4, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 16, 4, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 16, 4, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 16, 4, (c)->q[2].u8[15]);
    (c)->q[5] = _t; }
  /* 1269b8: add x11, x11, #0x80 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(128)));
  /* 1269bc: uzp1 v7.8h, v20.8h, v7.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[20].u16[0];
    _t.u16[1] = (c)->q[20].u16[2];
    _t.u16[2] = (c)->q[20].u16[4];
    _t.u16[3] = (c)->q[20].u16[6];
    _t.u16[4] = (c)->q[7].u16[0];
    _t.u16[5] = (c)->q[7].u16[2];
    _t.u16[6] = (c)->q[7].u16[4];
    _t.u16[7] = (c)->q[7].u16[6];
    (c)->q[7] = _t; }
  /* 1269c0: uzp1 v20.8h, v22.8h, v21.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[22].u16[0];
    _t.u16[1] = (c)->q[22].u16[2];
    _t.u16[2] = (c)->q[22].u16[4];
    _t.u16[3] = (c)->q[22].u16[6];
    _t.u16[4] = (c)->q[21].u16[0];
    _t.u16[5] = (c)->q[21].u16[2];
    _t.u16[6] = (c)->q[21].u16[4];
    _t.u16[7] = (c)->q[21].u16[6];
    (c)->q[20] = _t; }
  /* 1269c4: uzp1 v22.8h, v26.8h, v25.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[26].u16[0];
    _t.u16[1] = (c)->q[26].u16[2];
    _t.u16[2] = (c)->q[26].u16[4];
    _t.u16[3] = (c)->q[26].u16[6];
    _t.u16[4] = (c)->q[25].u16[0];
    _t.u16[5] = (c)->q[25].u16[2];
    _t.u16[6] = (c)->q[25].u16[4];
    _t.u16[7] = (c)->q[25].u16[6];
    (c)->q[22] = _t; }
  /* 1269c8: uzp1 v21.8h, v24.8h, v23.8h */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u16[0] = (c)->q[24].u16[0];
    _t.u16[1] = (c)->q[24].u16[2];
    _t.u16[2] = (c)->q[24].u16[4];
    _t.u16[3] = (c)->q[24].u16[6];
    _t.u16[4] = (c)->q[23].u16[0];
    _t.u16[5] = (c)->q[23].u16[2];
    _t.u16[6] = (c)->q[23].u16[4];
    _t.u16[7] = (c)->q[23].u16[6];
    (c)->q[21] = _t; }
  /* 1269cc: uzp1 v7.16b, v20.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[20].u8[2];
    _t.u8[2] = (c)->q[20].u8[4];
    _t.u8[3] = (c)->q[20].u8[6];
    _t.u8[4] = (c)->q[20].u8[8];
    _t.u8[5] = (c)->q[20].u8[10];
    _t.u8[6] = (c)->q[20].u8[12];
    _t.u8[7] = (c)->q[20].u8[14];
    _t.u8[8] = (c)->q[7].u8[0];
    _t.u8[9] = (c)->q[7].u8[2];
    _t.u8[10] = (c)->q[7].u8[4];
    _t.u8[11] = (c)->q[7].u8[6];
    _t.u8[12] = (c)->q[7].u8[8];
    _t.u8[13] = (c)->q[7].u8[10];
    _t.u8[14] = (c)->q[7].u8[12];
    _t.u8[15] = (c)->q[7].u8[14];
    (c)->q[7] = _t; }
  /* 1269d0: uzp1 v4.16b, v22.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[22].u8[2];
    _t.u8[2] = (c)->q[22].u8[4];
    _t.u8[3] = (c)->q[22].u8[6];
    _t.u8[4] = (c)->q[22].u8[8];
    _t.u8[5] = (c)->q[22].u8[10];
    _t.u8[6] = (c)->q[22].u8[12];
    _t.u8[7] = (c)->q[22].u8[14];
    _t.u8[8] = (c)->q[21].u8[0];
    _t.u8[9] = (c)->q[21].u8[2];
    _t.u8[10] = (c)->q[21].u8[4];
    _t.u8[11] = (c)->q[21].u8[6];
    _t.u8[12] = (c)->q[21].u8[8];
    _t.u8[13] = (c)->q[21].u8[10];
    _t.u8[14] = (c)->q[21].u8[12];
    _t.u8[15] = (c)->q[21].u8[14];
    (c)->q[4] = _t; }
  /* 1269d4: bif v3.16b, v1.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = ((c)->q[3].u8[0] ^ (((c)->q[1].u8[0] ^ (c)->q[3].u8[0]) & ~(c)->q[7].u8[0]));
    _t.u8[1] = ((c)->q[3].u8[1] ^ (((c)->q[1].u8[1] ^ (c)->q[3].u8[1]) & ~(c)->q[7].u8[1]));
    _t.u8[2] = ((c)->q[3].u8[2] ^ (((c)->q[1].u8[2] ^ (c)->q[3].u8[2]) & ~(c)->q[7].u8[2]));
    _t.u8[3] = ((c)->q[3].u8[3] ^ (((c)->q[1].u8[3] ^ (c)->q[3].u8[3]) & ~(c)->q[7].u8[3]));
    _t.u8[4] = ((c)->q[3].u8[4] ^ (((c)->q[1].u8[4] ^ (c)->q[3].u8[4]) & ~(c)->q[7].u8[4]));
    _t.u8[5] = ((c)->q[3].u8[5] ^ (((c)->q[1].u8[5] ^ (c)->q[3].u8[5]) & ~(c)->q[7].u8[5]));
    _t.u8[6] = ((c)->q[3].u8[6] ^ (((c)->q[1].u8[6] ^ (c)->q[3].u8[6]) & ~(c)->q[7].u8[6]));
    _t.u8[7] = ((c)->q[3].u8[7] ^ (((c)->q[1].u8[7] ^ (c)->q[3].u8[7]) & ~(c)->q[7].u8[7]));
    _t.u8[8] = ((c)->q[3].u8[8] ^ (((c)->q[1].u8[8] ^ (c)->q[3].u8[8]) & ~(c)->q[7].u8[8]));
    _t.u8[9] = ((c)->q[3].u8[9] ^ (((c)->q[1].u8[9] ^ (c)->q[3].u8[9]) & ~(c)->q[7].u8[9]));
    _t.u8[10] = ((c)->q[3].u8[10] ^ (((c)->q[1].u8[10] ^ (c)->q[3].u8[10]) & ~(c)->q[7].u8[10]));
    _t.u8[11] = ((c)->q[3].u8[11] ^ (((c)->q[1].u8[11] ^ (c)->q[3].u8[11]) & ~(c)->q[7].u8[11]));
    _t.u8[12] = ((c)->q[3].u8[12] ^ (((c)->q[1].u8[12] ^ (c)->q[3].u8[12]) & ~(c)->q[7].u8[12]));
    _t.u8[13] = ((c)->q[3].u8[13] ^ (((c)->q[1].u8[13] ^ (c)->q[3].u8[13]) & ~(c)->q[7].u8[13]));
    _t.u8[14] = ((c)->q[3].u8[14] ^ (((c)->q[1].u8[14] ^ (c)->q[3].u8[14]) & ~(c)->q[7].u8[14]));
    _t.u8[15] = ((c)->q[3].u8[15] ^ (((c)->q[1].u8[15] ^ (c)->q[3].u8[15]) & ~(c)->q[7].u8[15]));
    (c)->q[3] = _t; }
  /* 1269d8: bsl v4.16b, v5.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (((c)->q[4].u8[0] & (c)->q[5].u8[0]) | (~(c)->q[4].u8[0] & (c)->q[1].u8[0]));
    _t.u8[1] = (((c)->q[4].u8[1] & (c)->q[5].u8[1]) | (~(c)->q[4].u8[1] & (c)->q[1].u8[1]));
    _t.u8[2] = (((c)->q[4].u8[2] & (c)->q[5].u8[2]) | (~(c)->q[4].u8[2] & (c)->q[1].u8[2]));
    _t.u8[3] = (((c)->q[4].u8[3] & (c)->q[5].u8[3]) | (~(c)->q[4].u8[3] & (c)->q[1].u8[3]));
    _t.u8[4] = (((c)->q[4].u8[4] & (c)->q[5].u8[4]) | (~(c)->q[4].u8[4] & (c)->q[1].u8[4]));
    _t.u8[5] = (((c)->q[4].u8[5] & (c)->q[5].u8[5]) | (~(c)->q[4].u8[5] & (c)->q[1].u8[5]));
    _t.u8[6] = (((c)->q[4].u8[6] & (c)->q[5].u8[6]) | (~(c)->q[4].u8[6] & (c)->q[1].u8[6]));
    _t.u8[7] = (((c)->q[4].u8[7] & (c)->q[5].u8[7]) | (~(c)->q[4].u8[7] & (c)->q[1].u8[7]));
    _t.u8[8] = (((c)->q[4].u8[8] & (c)->q[5].u8[8]) | (~(c)->q[4].u8[8] & (c)->q[1].u8[8]));
    _t.u8[9] = (((c)->q[4].u8[9] & (c)->q[5].u8[9]) | (~(c)->q[4].u8[9] & (c)->q[1].u8[9]));
    _t.u8[10] = (((c)->q[4].u8[10] & (c)->q[5].u8[10]) | (~(c)->q[4].u8[10] & (c)->q[1].u8[10]));
    _t.u8[11] = (((c)->q[4].u8[11] & (c)->q[5].u8[11]) | (~(c)->q[4].u8[11] & (c)->q[1].u8[11]));
    _t.u8[12] = (((c)->q[4].u8[12] & (c)->q[5].u8[12]) | (~(c)->q[4].u8[12] & (c)->q[1].u8[12]));
    _t.u8[13] = (((c)->q[4].u8[13] & (c)->q[5].u8[13]) | (~(c)->q[4].u8[13] & (c)->q[1].u8[13]));
    _t.u8[14] = (((c)->q[4].u8[14] & (c)->q[5].u8[14]) | (~(c)->q[4].u8[14] & (c)->q[1].u8[14]));
    _t.u8[15] = (((c)->q[4].u8[15] & (c)->q[5].u8[15]) | (~(c)->q[4].u8[15] & (c)->q[1].u8[15]));
    (c)->q[4] = _t; }
  /* 1269dc: stp q3, q4, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[3].u64[0]);
    arc_st64(_pa + 8, (c)->q[3].u64[1]);
    arc_st64((_pa + 16), (c)->q[4].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[4].u64[1]);
  }
  /* 1269e0: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 1269e4: b.ne #0x12697c */
  if (ARC_COND(c, 1)) goto L_12697c;
  /* 1269e8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 1269ec: b.ne #0x126928 */
  if (ARC_COND(c, 1)) goto L_126928;
  /* 1269f0: b #0x126940 */
  goto L_126940;
}

void fn1_129100(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144704));
  /* 129100: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 129104: sub sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(48)));
  /* 129108: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12910c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 129110: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 129114: mov x8, x5 */
  ARC_X_W(c, 8, ARC_X_R(c, 5));
  /* 129118: mov x19, x7 */
  ARC_X_W(c, 19, ARC_X_R(c, 7));
  /* 12911c: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 129120: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 129124: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 129128: add x2, sp, #8 */
  ARC_X_W(c, 2, ((c)->sp + UINT64_C(8)));
  /* 12912c: mov x5, sp */
  ARC_X_W(c, 5, (c)->sp);
  /* 129130: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 129134: mov x4, x6 */
  ARC_X_W(c, 4, ARC_X_R(c, 6));
  /* 129138: mov w6, #0x10ffff */
  ARC_W_W(c, 6, UINT64_C(1114111));
  /* 12913c: mov w7, wzr */
  ARC_W_W(c, 7, ARC_W_R(c, 31));
  /* 129140: bl #0x128950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1216836));
  fn1_128950(c);
  /* 129144: ldp x9, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* 129148: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 12914c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* 129150: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 129154: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 129158: add sp, sp, #0x30 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(48)));
  /* 12915c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 129160: ret  */
  return;
}

void fn1_12aa00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151104));
  /* 12aa00: bti c */
  /* bti: no architectural effect here */
  /* 12aa04: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12aa08: ret  */
  return;
}

void fn1_12bd80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039156096));
  /* 12bd80: bti c */
  /* bti: no architectural effect here */
  /* 12bd84: mov w10, #0x7274 */
  ARC_W_W(c, 10, UINT64_C(29300));
  /* 12bd88: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 12bd8c: strb wzr, [x8, #5] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(5)), ARC_W_R(c, 31));
  /* 12bd90: movk w10, #0x6575, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1702166528)));
  /* 12bd94: strb w9, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 12bd98: stur w10, [x8, #1] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(1)), ARC_W_R(c, 10));
  /* 12bd9c: ret  */
  return;
}

void fn1_1346c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191232));
  /* 1346c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1346c4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1346c8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1346cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1346d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1346d4: bl #0x143fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263320));
  fn1_143fe8(c);
  /* 1346d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1346dc: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* 1346e0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1346e4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1346e8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1346ec: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_134ce4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192804));
  /* 134ce4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134ce8: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134cec: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134cf0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134cf4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 134cf8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134cfc: ldr x8, [x8, #0xda8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3496))));
  /* 134d00: ldrb w9, [x0, #0x60] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(96))));
  /* 134d04: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 134d08: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 134d0c: tbnz w9, #0, #0x134d38 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_134d38;
  /* 134d10: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134d14: tbnz w8, #0, #0x134d50 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134d50;
L_134d18:;
  /* 134d18: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134d1c: tbnz w8, #0, #0x134d68 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134d68;
L_134d20:;
  /* 134d20: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134d24: tbnz w8, #0, #0x134d80 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134d80;
L_134d28:;
  /* 134d28: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134d2c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134d30: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134d34: ret  */
  return;
L_134d38:;
  /* 134d38: ldr x8, [x19, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* 134d3c: ldr x0, [x19, #0x70] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(112))));
  /* 134d40: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134d44: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1264968));
  fn1_142608(c);
  /* 134d48: ldrb w8, [x19, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134d4c: tbz w8, #0, #0x134d18 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134d18;
L_134d50:;
  /* 134d50: ldr x8, [x19, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(72))));
  /* 134d54: ldr x0, [x19, #0x58] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* 134d58: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134d5c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1264992));
  fn1_142608(c);
  /* 134d60: ldrb w8, [x19, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134d64: tbz w8, #0, #0x134d20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134d20;
L_134d68:;
  /* 134d68: ldr x8, [x19, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* 134d6c: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* 134d70: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134d74: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1265016));
  fn1_142608(c);
  /* 134d78: ldrb w8, [x19, #0x18] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134d7c: tbz w8, #0, #0x134d28 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134d28;
L_134d80:;
  /* 134d80: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 134d84: ldr x0, [x19, #0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 134d88: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134d8c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134d90: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134d94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134d98: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1377e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039203812));
  /* 1377e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1377e8: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1377ec: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 1377f0: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1377f4: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 1377f8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1377fc: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137800: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 137804: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 137808: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 13780c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 137810: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 137814: adrp x24, #0x15d000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 137818: nop  */
  /* nop: no architectural effect here */
  /* 13781c: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 137820: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 137824: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 137828: nop  */
  /* nop: no architectural effect here */
  /* 13782c: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137830: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 137834: tbz w8, #0, #0x1378d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1378d4;
L_137838:;
  /* 137838: ldr x8, [x24, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(3464))));
  /* 13783c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 137840: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* 137844: b.eq #0x137854 */
  if (ARC_COND(c, 0)) goto L_137854;
  /* 137848: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 13784c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137850: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275988));
  fn1_db2e0(c);
L_137854:;
  /* 137854: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137858: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 13785c: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 137860: str wzr, [x20, #0x40] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(64)), ARC_W_R(c, 31));
  /* 137864: stp xzr, xzr, [x20, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 137868: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 13786c: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 137870: mov w8, #0x1000 */
  ARC_W_W(c, 8, UINT64_C(4096));
  /* 137874: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 137878: str q0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 13787c: str x8, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), ARC_X_R(c, 8));
  /* 137880: cbz x22, #0x1378a4 */
  if ((ARC_X_R(c, 22)) == 0) goto L_1378a4;
  /* 137884: cmp x22, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(0));
  /* 137888: mov w8, #0x7fffffff */
  ARC_W_W(c, 8, UINT64_C(2147483647));
  /* 13788c: csel x0, x8, x22, lt */
  ARC_X_W(c, 0, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 22)));
  /* 137890: cbz x19, #0x1378b0 */
  if ((ARC_X_R(c, 19)) == 0) goto L_1378b0;
L_137894:;
  /* 137894: add x8, x19, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 0)));
  /* 137898: stp x19, x19, [x20, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13789c: str x8, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 8));
  /* 1378a0: b #0x1378b4 */
  goto L_1378b4;
L_1378a4:;
  /* 1378a4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 1378a8: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276076));
  fn1_142860(c);
  /* 1378ac: cbnz x19, #0x137894 */
  if ((ARC_X_R(c, 19)) != 0) goto L_137894;
L_1378b0:;
  /* 1378b0: add x19, x21, x0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) + ARC_X_R(c, 0)));
L_1378b4:;
  /* 1378b4: stp x21, x21, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 1378b8: str x19, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 19));
  /* 1378bc: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1378c0: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 1378c4: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 1378c8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1378cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1378d0: ret  */
  return;
L_1378d4:;
  /* 1378d4: nop  */
  /* nop: no architectural effect here */
  /* 1378d8: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1378dc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276128));
  fn1_1424b8(c);
  /* 1378e0: cbz w0, #0x137838 */
  if ((ARC_W_R(c, 0)) == 0) goto L_137838;
  /* 1378e4: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276136));
  fn1_143ac0(c);
  /* 1378e8: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 1378ec: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 1378f0: str x8, [x24, #0xd88] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 1378f4: b.eq #0x137904 */
  if (ARC_COND(c, 0)) goto L_137904;
  /* 1378f8: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 1378fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137900: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276164));
  fn1_db2e0(c);
L_137904:;
  /* 137904: nop  */
  /* nop: no architectural effect here */
  /* 137908: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 13790c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276176));
  fn1_1424d0(c);
  /* 137910: b #0x137838 */
  goto L_137838;
  /* 137914: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 137918: nop  */
  /* nop: no architectural effect here */
  /* 13791c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137920: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276196));
  fn1_1424e8(c);
  /* 137924: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 137928: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1276204));
  fn1_a1454(c);
}

void fn1_13b0f4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039218420));
  /* 13b0f4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13b0f8: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 13b0fc: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13b100: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13b104: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 13b108: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 13b10c: ldp x10, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13b110: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b114: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13b118: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13b11c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13b120: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13b124: stp xzr, xzr, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13b128: csinc x9, x9, x1, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* 13b12c: csel x8, x8, x10, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 13b130: stp x9, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13b134: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 13b138: strb w9, [sp, #0x28] */
  arc_st8(((c)->sp + INT64_C(40)), ARC_W_R(c, 9));
  /* 13b13c: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290560));
  fn1_da18c(c);
  /* 13b140: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
  /* 13b144: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 13b148: b.ne #0x13b158 */
  if (ARC_COND(c, 1)) goto L_13b158;
  /* 13b14c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13b150: bl #0xda18c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290580));
  fn1_da18c(c);
  /* 13b154: ldrb w8, [sp, #0x28] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(40))));
L_13b158:;
  /* 13b158: cmp w8, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(3));
  /* 13b15c: b.ne #0x13b190 */
  if (ARC_COND(c, 1)) goto L_13b190;
  /* 13b160: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* 13b164: b.eq #0x13b1e8 */
  if (ARC_COND(c, 0)) goto L_13b1e8;
  /* 13b168: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* 13b16c: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 13b170: tbnz w9, #0, #0x13b1b8 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_13b1b8;
  /* 13b174: tbnz w8, #0, #0x13b1dc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13b1dc;
  /* 13b178: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 13b17c: ldr q0, [x20] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 20)), arc_ld64(ARC_X_R(c, 20) + 8));
  /* 13b180: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b184: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 13b188: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 13b18c: b #0x13b1ec */
  goto L_13b1ec;
L_13b190:;
  /* 13b190: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b194: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290648));
  fn1_142b30(c);
  /* 13b198: cbz x1, #0x13b1a8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_13b1a8;
  /* 13b19c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b1a0: mov w1, #0x2f */
  ARC_W_W(c, 1, UINT64_C(47));
  /* 13b1a4: bl #0x142ba8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290664));
  fn1_142ba8(c);
L_13b1a8:;
  /* 13b1a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b1ac: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 13b1b0: bl #0xd8234 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290676));
  fn1_d8234(c);
  /* 13b1b4: b #0x13b1e8 */
  goto L_13b1e8;
L_13b1b8:;
  /* 13b1b8: ldp x10, x9, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13b1bc: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13b1c0: add x12, x20, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 20) + UINT64_C(1)));
  /* 13b1c4: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13b1c8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b1cc: csel x1, x12, x9, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 9)));
  /* 13b1d0: csel x2, x11, x10, eq */
  ARC_X_W(c, 2, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 13b1d4: bl #0xe1938 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290712));
  fn1_e1938(c);
  /* 13b1d8: b #0x13b1e8 */
  goto L_13b1e8;
L_13b1dc:;
  /* 13b1dc: ldp x2, x1, [x20, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13b1e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b1e4: bl #0xe1888 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290728));
  fn1_e1888(c);
L_13b1e8:;
  /* 13b1e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_13b1ec:;
  /* 13b1ec: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13b1f0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13b1f4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 13b1f8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13b1fc: ret  */
  return;
}

void fn1_142148(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247176));
  /* 142148: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 14214c: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 142150: str x25, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 25));
  /* 142154: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 142158: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 14215c: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 142160: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 142164: eor x8, x1, #0x8000000000000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) ^ UINT64_C(9223372036854775808)));
  /* 142168: str wzr, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 31));
  /* 14216c: orr x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) | ARC_X_R(c, 8)));
  /* 142170: cbnz x8, #0x142188 */
  if ((ARC_X_R(c, 8)) != 0) goto L_142188;
  /* 142174: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 142178: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* 14217c: ngcs xzr, x3 */
  ARC_X_W(c, 31, arc_add64(c, 0, ((uint64_t)~(uint64_t)(ARC_X_R(c, 3))), (c)->cf));
  /* 142180: b.lo #0x142248 */
  if (ARC_COND(c, 3)) goto L_142248;
  /* 142184: b #0x142250 */
  goto L_142250;
L_142188:;
  /* 142188: eor x8, x3, #0x8000000000000000 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) ^ UINT64_C(9223372036854775808)));
  /* 14218c: orr x8, x2, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) | ARC_X_R(c, 8)));
  /* 142190: cbnz x8, #0x1421a8 */
  if ((ARC_X_R(c, 8)) != 0) goto L_1421a8;
  /* 142194: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 142198: cmp x8, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0));
  /* 14219c: ngcs xzr, x1 */
  ARC_X_W(c, 31, arc_add64(c, 0, ((uint64_t)~(uint64_t)(ARC_X_R(c, 1))), (c)->cf));
  /* 1421a0: b.lo #0x142248 */
  if (ARC_COND(c, 3)) goto L_142248;
  /* 1421a4: b #0x142250 */
  goto L_142250;
L_1421a8:;
  /* 1421a8: asr x10, x1, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 1)) >> ((UINT64_C(63)) & 63))));
  /* 1421ac: asr x11, x3, #0x3f */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 3)) >> ((UINT64_C(63)) & 63))));
  /* 1421b0: eor x8, x0, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) ^ ARC_X_R(c, 10)));
  /* 1421b4: eor x9, x1, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) ^ ARC_X_R(c, 10)));
  /* 1421b8: eor x12, x3, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 3) ^ ARC_X_R(c, 11)));
  /* 1421bc: subs x19, x8, x10 */
  ARC_X_W(c, 19, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* 1421c0: eor x8, x2, x11 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) ^ ARC_X_R(c, 11)));
  /* 1421c4: sbc x20, x9, x10 */
  ARC_X_W(c, 20, ((uint64_t)(ARC_X_R(c, 9)) + (uint64_t)(((uint64_t)~(uint64_t)(ARC_X_R(c, 10)))) + (c)->cf));
  /* 1421c8: subs x9, x8, x11 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11)));
  /* 1421cc: sbc x8, x12, x11 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 12)) + (uint64_t)(((uint64_t)~(uint64_t)(ARC_X_R(c, 11)))) + (c)->cf));
  /* 1421d0: cmp x19, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(2));
  /* 1421d4: sbcs xzr, x20, xzr */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 20), ((uint64_t)~(uint64_t)(ARC_X_R(c, 31))), (c)->cf));
  /* 1421d8: b.lt #0x142250 */
  if (ARC_COND(c, 11)) goto L_142250;
  /* 1421dc: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 1421e0: sbcs xzr, x8, xzr */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 8), ((uint64_t)~(uint64_t)(ARC_X_R(c, 31))), (c)->cf));
  /* 1421e4: b.lt #0x142250 */
  if (ARC_COND(c, 11)) goto L_142250;
  /* 1421e8: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1421ec: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 1421f0: mov x22, x1 */
  ARC_X_W(c, 22, ARC_X_R(c, 1));
  /* 1421f4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 1421f8: mov x24, x3 */
  ARC_X_W(c, 24, ARC_X_R(c, 3));
  /* 1421fc: mov x25, x2 */
  ARC_X_W(c, 25, ARC_X_R(c, 2));
  /* 142200: ccmp x10, x11, #0, eq */
  if (ARC_COND(c, 0)) { (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 142204: b.ne #0x142214 */
  if (ARC_COND(c, 1)) goto L_142214;
  /* 142208: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 14220c: mov x1, #0x7fffffffffffffff */
  ARC_X_W(c, 1, UINT64_C(9223372036854775807));
  /* 142210: b #0x14221c */
  goto L_14221c;
L_142214:;
  /* 142214: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* 142218: mov x1, #-0x8000000000000000 */
  ARC_X_W(c, 1, UINT64_C(9223372036854775808));
L_14221c:;
  /* 14221c: mov x2, x9 */
  ARC_X_W(c, 2, ARC_X_R(c, 9));
  /* 142220: mov x3, x8 */
  ARC_X_W(c, 3, ARC_X_R(c, 8));
  /* 142224: bl #0x14213c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319464));
  fn1_14213c(c);
  /* 142228: cmp x0, x19 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 19));
  /* 14222c: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* 142230: mov x3, x24 */
  ARC_X_W(c, 3, ARC_X_R(c, 24));
  /* 142234: sbcs xzr, x1, x20 */
  ARC_X_W(c, 31, arc_add64(c, ARC_X_R(c, 1), ((uint64_t)~(uint64_t)(ARC_X_R(c, 20))), (c)->cf));
  /* 142238: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 14223c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 142240: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* 142244: b.hs #0x142250 */
  if (ARC_COND(c, 2)) goto L_142250;
L_142248:;
  /* 142248: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 14224c: str w8, [x4] */
  arc_st32(ARC_X_R(c, 4), ARC_W_R(c, 8));
L_142250:;
  /* 142250: umulh x8, x2, x0 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 2), ARC_X_R(c, 0)));
  /* 142254: madd x8, x2, x1, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) + ((uint64_t)(ARC_X_R(c, 2)) * (uint64_t)(ARC_X_R(c, 1)))));
  /* 142258: madd x1, x3, x0, x8 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 8)) + ((uint64_t)(ARC_X_R(c, 3)) * (uint64_t)(ARC_X_R(c, 0)))));
  /* 14225c: mul x0, x2, x0 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 2)) * (uint64_t)(ARC_X_R(c, 0))));
  /* 142260: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 142264: ldr x25, [sp, #0x10] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(16))));
  /* 142268: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 14226c: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 142270: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 142274: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 142278: ret  */
  return;
}

void fn1_142950(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249232));
  /* 142950: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142954: ldr x17, [x16, #0x50] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(80))));
  /* 142958: add x16, x16, #0x50 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(80)));
  /* 14295c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142960: nop  */
  /* nop: no architectural effect here */
  /* 142964: nop  */
  /* nop: no architectural effect here */
}

void fn1_142f50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250768));
  /* 142f50: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142f54: ldr x17, [x16, #0x250] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(592))));
  /* 142f58: add x16, x16, #0x250 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(592)));
  /* 142f5c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142f60: nop  */
  /* nop: no architectural effect here */
  /* 142f64: nop  */
  /* nop: no architectural effect here */
}

void fn1_143550(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252304));
  /* 143550: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143554: ldr x17, [x16, #0x450] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1104))));
  /* 143558: add x16, x16, #0x450 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1104)));
  /* 14355c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143560: nop  */
  /* nop: no architectural effect here */
  /* 143564: nop  */
  /* nop: no architectural effect here */
}

void fn1_143b50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253840));
  /* 143b50: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143b54: ldr x17, [x16, #0x650] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1616))));
  /* 143b58: add x16, x16, #0x650 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1616)));
  /* 143b5c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143b60: nop  */
  /* nop: no architectural effect here */
  /* 143b64: nop  */
  /* nop: no architectural effect here */
}

void fn1_144150(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255376));
  /* 144150: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144154: ldr x17, [x16, #0x850] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2128))));
  /* 144158: add x16, x16, #0x850 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2128)));
  /* 14415c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144160: nop  */
  /* nop: no architectural effect here */
  /* 144164: nop  */
  /* nop: no architectural effect here */
}

void fn1_144750(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256912));
  /* 144750: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144754: ldr x17, [x16, #0xa50] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2640))));
  /* 144758: add x16, x16, #0xa50 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2640)));
  /* 14475c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144760: nop  */
  /* nop: no architectural effect here */
  /* 144764: nop  */
  /* nop: no architectural effect here */
}

