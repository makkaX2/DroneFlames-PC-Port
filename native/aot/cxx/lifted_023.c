#include "lifted.h"

void fn1_9d108(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038571272));
  /* 9d108: bti c */
  /* bti: no architectural effect here */
  /* 9d10c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 9d110: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 9d114: ldr x16, [x8, #0x40] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 9d118: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_a17c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038589376));
  /* a17c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a17c4: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* a17c8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a17cc: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a17d0: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a17d4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* a17d8: cbz x3, #0xa1828 */
  if ((ARC_X_R(c, 3)) == 0) goto L_a1828;
  /* a17dc: sub x8, x29, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* a17e0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* a17e4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* a17e8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* a17ec: stp x0, x8, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* a17f0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* a17f4: stp x2, x4, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 2));
    arc_st64(_pa + 8, ARC_X_R(c, 4));
  }
  /* a17f8: strb w8, [sp, #0x20] */
  arc_st8(((c)->sp + INT64_C(32)), ARC_W_R(c, 8));
  /* a17fc: stur xzr, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 31));
  /* a1800: cbz x1, #0xa1828 */
  if ((ARC_X_R(c, 1)) == 0) goto L_a1828;
  /* a1804: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
L_a1808:;
  /* a1808: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a180c: blr x19 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661520));
  arc_dispatch(c, ARC_X_R(c, 19));
  /* a1810: ldur x8, [x29, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-8))));
  /* a1814: add x22, x22, x20 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ARC_X_R(c, 20)));
  /* a1818: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a181c: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* a1820: stur x8, [x29, #-8] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-8)), ARC_X_R(c, 8));
  /* a1824: b.lo #0xa1808 */
  if (ARC_COND(c, 3)) goto L_a1808;
L_a1828:;
  /* a1828: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a182c: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a1830: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1834: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* a1838: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a183c: ret  */
  return;
  /* a1840: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a1844: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* a1848: bl #0xa1a0c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661580));
  fn1_a1a0c(c);
  /* a184c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a1850: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(661588));
  fn1_9cc20(c);
}

void fn1_a2818(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593560));
  /* a2818: bti c */
  /* bti: no architectural effect here */
  /* a281c: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a2820: ret  */
  return;
}

void fn1_a8e0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038619660));
  /* a8e0c: bti c */
  /* bti: no architectural effect here */
  /* a8e10: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* a8e14: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b023c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038649404));
  /* b023c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b0240: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b0244: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b0248: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b024c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b0250: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b0254: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b0258: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b025c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b0260: ldurh w9, [x21, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b0264: ubfiz w8, w8, #0xa, #6 */
  ARC_W_W(c, 8, ((uint32_t)((((uint32_t)(ARC_W_R(c, 8))) & UINT64_C(63))) << 10));
  /* b0268: ubfiz w9, w9, #0xa, #6 */
  ARC_W_W(c, 9, ((uint32_t)((((uint32_t)(ARC_W_R(c, 9))) & UINT64_C(63))) << 10));
  /* b026c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* b0270: b.ls #0xb02b0 */
  if (ARC_COND(c, 9)) goto L_b02b0;
  /* b0274: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b0278: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b027c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0280: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b0284: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721544));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0288: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b028c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b0290: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b0294: b.eq #0xb0390 */
  if (ARC_COND(c, 0)) goto L_b0390;
  /* b0298: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b029c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b02a0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b02a4: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b02a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721580));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b02ac: b #0xb0390 */
  goto L_b0390;
L_b02b0:;
  /* b02b0: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b02b4: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b02b8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b02bc: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* b02c0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b02c4: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b02c8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b02cc: b.ls #0xb02f8 */
  if (ARC_COND(c, 9)) goto L_b02f8;
  /* b02d0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b02d4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b02d8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b02dc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b02e0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b02e4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721640));
  fn1_142878(c);
  /* b02e8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b02ec: cbz x0, #0xb06c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b06c8;
  /* b02f0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b02f4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b02f8:;
  /* b02f8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b02fc: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* b0300: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* b0304: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* b0308: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b030c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0310: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b0314: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721688));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0318: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b031c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b0320: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b0324: b.eq #0xb033c */
  if (ARC_COND(c, 0)) goto L_b033c;
  /* b0328: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b032c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b0330: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0334: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b0338: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721724));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b033c:;
  /* b033c: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b0340: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b0344: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0348: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b034c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b0350: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b0354: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0358: b.ls #0xb0384 */
  if (ARC_COND(c, 9)) goto L_b0384;
  /* b035c: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b0360: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b0364: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0368: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b036c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0370: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721780));
  fn1_142878(c);
  /* b0374: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0378: cbz x0, #0xb06cc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b06cc;
  /* b037c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0380: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b0384:;
  /* b0384: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0388: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b038c: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_b0390:;
  /* b0390: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b0394: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0398: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b039c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b03a0: b.ls #0xb03c8 */
  if (ARC_COND(c, 9)) goto L_b03c8;
  /* b03a4: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b03a8: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* b03ac: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b03b0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b03b4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b03b8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721852));
  fn1_142878(c);
  /* b03bc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b03c0: cbz x0, #0xb06c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b06c0;
  /* b03c4: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b03c8:;
  /* b03c8: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b03cc: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b03d0: mov w10, #0x3f20 */
  ARC_W_W(c, 10, UINT64_C(16160));
  /* b03d4: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* b03d8: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b03dc: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b03e0: ldr x21, [x20, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b03e4: add x8, x9, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* b03e8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b03ec: ldurh w10, [x21, #9] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b03f0: and w10, w10, #0x3f */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) & UINT64_C(63)));
  /* b03f4: cmp w10, #0x13 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(19));
  /* b03f8: b.hs #0xb0438 */
  if (ARC_COND(c, 2)) goto L_b0438;
  /* b03fc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b0400: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b0404: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0408: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b040c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721936));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0410: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b0414: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b0418: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b041c: b.eq #0xb0518 */
  if (ARC_COND(c, 0)) goto L_b0518;
  /* b0420: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b0424: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b0428: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b042c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b0430: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(721972));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0434: b #0xb0518 */
  goto L_b0518;
L_b0438:;
  /* b0438: ldr w12, [x19, #0x20] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b043c: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b0440: add x10, x9, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* b0444: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0448: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* b044c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* b0450: str w12, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 12));
  /* b0454: b.ls #0xb0480 */
  if (ARC_COND(c, 9)) goto L_b0480;
  /* b0458: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b045c: add x9, x9, #0x3e4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(996)));
  /* b0460: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b0464: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b0468: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b046c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722032));
  fn1_142878(c);
  /* b0470: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0474: cbz x0, #0xb06d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b06d0;
  /* b0478: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b047c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b0480:;
  /* b0480: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* b0484: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* b0488: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* b048c: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* b0490: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b0494: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0498: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b049c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722080));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b04a0: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* b04a4: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b04a8: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b04ac: b.eq #0xb04c4 */
  if (ARC_COND(c, 0)) goto L_b04c4;
  /* b04b0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* b04b4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* b04b8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b04bc: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b04c0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722116));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b04c4:;
  /* b04c4: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b04c8: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b04cc: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b04d0: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b04d4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b04d8: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b04dc: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b04e0: b.ls #0xb050c */
  if (ARC_COND(c, 9)) goto L_b050c;
  /* b04e4: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b04e8: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b04ec: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b04f0: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b04f4: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b04f8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722172));
  fn1_142878(c);
  /* b04fc: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0500: cbz x0, #0xb06d4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b06d4;
  /* b0504: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0508: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b050c:;
  /* b050c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b0510: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b0514: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_b0518:;
  /* b0518: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b051c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0520: add x10, x8, #3 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* b0524: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b0528: b.ls #0xb0550 */
  if (ARC_COND(c, 9)) goto L_b0550;
  /* b052c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b0530: add x8, x8, #0x3e3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(995)));
  /* b0534: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0538: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b053c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0540: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722244));
  fn1_142878(c);
  /* b0544: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0548: cbz x0, #0xb06c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b06c4;
  /* b054c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b0550:;
  /* b0550: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b0554: mov w9, #0x20 */
  ARC_W_W(c, 9, UINT64_C(32));
  /* b0558: mov w10, #0x3a20 */
  ARC_W_W(c, 10, UINT64_C(14880));
  /* b055c: strb w9, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 9));
  /* b0560: strh w10, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b0564: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0568: ldr x20, [x20, #0x20] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b056c: add x8, x9, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(3)));
  /* b0570: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b0574: ldurh w10, [x20, #9] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b0578: ubfx w10, w10, #1, #5 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) >> 1) & UINT64_C(31)));
  /* b057c: cmp w10, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(9));
  /* b0580: b.hs #0xb05cc */
  if (ARC_COND(c, 2)) goto L_b05cc;
  /* b0584: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b0588: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b058c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0590: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b0594: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722328));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0598: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b059c: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b05a0: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b05a4: b.eq #0xb06ac */
  if (ARC_COND(c, 0)) goto L_b06ac;
  /* b05a8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b05ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b05b0: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b05b4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b05b8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b05bc: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b05c0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b05c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b05c8: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_b05cc:;
  /* b05cc: ldr w12, [x19, #0x20] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b05d0: ldr x11, [x19, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b05d4: add x10, x9, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(4)));
  /* b05d8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b05dc: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* b05e0: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* b05e4: str w12, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 12));
  /* b05e8: b.ls #0xb0614 */
  if (ARC_COND(c, 9)) goto L_b0614;
  /* b05ec: lsl x8, x11, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(1)) & 63)));
  /* b05f0: add x9, x9, #0x3e4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(996)));
  /* b05f4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b05f8: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b05fc: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b0600: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722436));
  fn1_142878(c);
  /* b0604: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0608: cbz x0, #0xb06d8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b06d8;
  /* b060c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b0610: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b0614:;
  /* b0614: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* b0618: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* b061c: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* b0620: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* b0624: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b0628: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b062c: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* b0630: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722484));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b0634: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b0638: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* b063c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* b0640: b.eq #0xb0658 */
  if (ARC_COND(c, 0)) goto L_b0658;
  /* b0644: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b0648: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b064c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* b0650: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* b0654: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722520));
  arc_dispatch(c, ARC_X_R(c, 8));
L_b0658:;
  /* b0658: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* b065c: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* b0660: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b0664: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* b0668: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b066c: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* b0670: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b0674: b.ls #0xb06a0 */
  if (ARC_COND(c, 9)) goto L_b06a0;
  /* b0678: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b067c: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b0680: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b0684: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b0688: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b068c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722576));
  fn1_142878(c);
  /* b0690: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b0694: cbz x0, #0xb06dc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b06dc;
  /* b0698: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b069c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_b06a0:;
  /* b06a0: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* b06a4: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* b06a8: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_b06ac:;
  /* b06ac: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b06b0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b06b4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b06b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b06bc: ret  */
  return;
L_b06c0:;
  /* b06c0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722628));
  fn1_1427b8(c);
L_b06c4:;
  /* b06c4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722632));
  fn1_1427b8(c);
L_b06c8:;
  /* b06c8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722636));
  fn1_1427b8(c);
L_b06cc:;
  /* b06cc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722640));
  fn1_1427b8(c);
L_b06d0:;
  /* b06d0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722644));
  fn1_1427b8(c);
L_b06d4:;
  /* b06d4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722648));
  fn1_1427b8(c);
L_b06d8:;
  /* b06d8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722652));
  fn1_1427b8(c);
L_b06dc:;
  /* b06dc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(722656));
  fn1_1427b8(c);
}

void fn1_b4f00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038669056));
  /* b4f00: bti c */
  /* bti: no architectural effect here */
  /* b4f04: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b4f08: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7e88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038681224));
  /* b7e88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b7e8c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7e90: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b7e94: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7e98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7e9c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b7ea0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b7ea4: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b7ea8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b7eac: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b7eb0: b.hi #0xb7ed4 */
  if (ARC_COND(c, 8)) goto L_b7ed4;
  /* b7eb4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b7eb8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b7ebc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753344));
  fn1_1428a8(c);
  /* b7ec0: cbz x0, #0xb7f30 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b7f30;
  /* b7ec4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b7ec8: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b7ecc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b7ed0: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b7ed4:;
  /* b7ed4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b7ed8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b7edc: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b7ee0: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b7ee4: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753384));
  fn1_142860(c);
  /* b7ee8: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b7eec: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b7ef0: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b7ef4: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b7ef8: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b7efc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* b7f00: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* b7f04: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b7f08: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* b7f0c: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* b7f10: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* b7f14: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* b7f18: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* b7f1c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b7f20: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b7f24: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b7f28: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b7f2c: ret  */
  return;
L_b7f30:;
  /* b7f30: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(753460));
  fn1_142488(c);
}

void fn1_bb1cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038694348));
  /* bb1cc: bti c */
  /* bti: no architectural effect here */
  /* bb1d0: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* bb1d4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bd9fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704636));
  /* bd9fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bda00: stp x30, x19, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 30));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* bda04: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* bda08: nop  */
  /* nop: no architectural effect here */
  /* bda0c: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* bda10: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776724));
  fn1_144ac8(c);
  /* bda14: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* bda18: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* bda1c: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* bda20: ldr x9, [x8], #0xffffffffffffffa0 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-96));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* bda24: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* bda28: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* bda2c: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* bda30: b.ne #0xbda70 */
  if (ARC_COND(c, 1)) goto L_bda70;
  /* bda34: ldur w10, [x19, #-0x28] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(-40))));
  /* bda38: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* bda3c: cmp w10, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(0));
  /* bda40: cneg w10, w10, mi */
  ARC_W_W(c, 10, (ARC_COND(c, 4) ? ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 10))) : (ARC_W_R(c, 10))));
  /* bda44: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* bda48: add w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) + UINT64_C(1)));
  /* bda4c: stur w10, [x19, #-0x28] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(-40)), ARC_W_R(c, 10));
  /* bda50: b.eq #0xbda5c */
  if (ARC_COND(c, 0)) goto L_bda5c;
  /* bda54: stur x9, [x19, #-0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(-48)), ARC_X_R(c, 9));
  /* bda58: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
L_bda5c:;
  /* bda5c: ldr w8, [x0, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(8))));
  /* bda60: sub w9, w8, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(1)));
  /* bda64: ldur x8, [x19, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(-8))));
  /* bda68: str w9, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* bda6c: b #0xbda80 */
  goto L_bda80;
L_bda70:;
  /* bda70: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* bda74: cbnz x9, #0xbda90 */
  if ((ARC_X_R(c, 9)) != 0) goto L_bda90;
  /* bda78: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* bda7c: add x8, x19, #0x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + UINT64_C(32)));
L_bda80:;
  /* bda80: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* bda84: ldp x30, x19, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 30, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* bda88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bda8c: ret  */
  return;
L_bda90:;
  /* bda90: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(776852));
  fn1_142488(c);
}

void fn1_d08bc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038782140));
  /* d08bc: bti c */
  /* bti: no architectural effect here */
  /* d08c0: sub x8, x1, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* d08c4: asr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63))));
  /* d08c8: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d08cc: b.gt #0xd08dc */
  if (ARC_COND(c, 12)) goto L_d08dc;
  /* d08d0: b.hs #0xd09cc */
  if (ARC_COND(c, 2)) goto L_d09cc;
L_d08d4:;
  /* d08d4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d08d8: ret  */
  return;
L_d08dc:;
  /* d08dc: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* d08e0: b.eq #0xd09f4 */
  if (ARC_COND(c, 0)) goto L_d09f4;
  /* d08e4: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* d08e8: b.eq #0xd0b04 */
  if (ARC_COND(c, 0)) goto L_d0b04;
  /* d08ec: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* d08f0: b.ne #0xd0a44 */
  if (ARC_COND(c, 1)) goto L_d0a44;
  /* d08f4: ldrsh w8, [x0] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 0))));
  /* d08f8: ldrsh w9, [x0, #2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d08fc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0900: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0904: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0908: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* d090c: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0910: ldrsh w8, [x0, #6] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(6)))));
  /* d0914: ldursh w9, [x1, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 1) + INT64_C(-2)))));
  /* d0918: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d091c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0920: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0924: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0928: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* d092c: ldrsh w9, [x0, #4] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(4)))));
  /* d0930: ldursh w8, [x1, #-2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 1) + INT64_C(-2)))));
  /* d0934: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0938: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d093c: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0940: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0944: ldrsh w10, [x0, #6] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(6)))));
  /* d0948: ldrh w9, [x0, #4] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(4))));
  /* d094c: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d0950: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d0954: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d0958: strh w9, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 9));
  /* d095c: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* d0960: ldrsh w8, [x0, #2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d0964: ldursh w9, [x1, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 1) + INT64_C(-2)))));
  /* d0968: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d096c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0970: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0974: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0978: ldrsh w10, [x0, #6] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(6)))));
  /* d097c: ldrsh w11, [x0] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 0))));
  /* d0980: ldrsh w9, [x0, #4] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(4)))));
  /* d0984: cmp w10, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 11));
  /* d0988: csel w12, w10, w11, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* d098c: csel w10, w10, w11, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* d0990: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* d0994: csel w11, w11, w9, lt */
  ARC_W_W(c, 11, (ARC_COND(c, 11) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 9)));
  /* d0998: csel w9, w12, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* d099c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d09a0: csel w12, w10, w8, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d09a4: csel w10, w10, w8, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d09a8: strh w11, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 11));
  /* d09ac: cmp w12, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 9));
  /* d09b0: strh w10, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 10));
  /* d09b4: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d09b8: csel w9, w12, w9, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 9)));
  /* d09bc: strh w8, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* d09c0: strh w9, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 9));
  /* d09c4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d09c8: ret  */
  return;
L_d09cc:;
  /* d09cc: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* d09d0: b.ne #0xd0a44 */
  if (ARC_COND(c, 1)) goto L_d0a44;
  /* d09d4: ldursh w9, [x1, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 1) + INT64_C(-2)))));
  /* d09d8: ldrsh w8, [x0] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 0))));
  /* d09dc: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* d09e0: b.ge #0xd08d4 */
  if (ARC_COND(c, 10)) goto L_d08d4;
  /* d09e4: strh w9, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d09e8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d09ec: sturh w8, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 8));
  /* d09f0: ret  */
  return;
L_d09f4:;
  /* d09f4: ldrsh w8, [x0, #2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d09f8: ldursh w9, [x1, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 1) + INT64_C(-2)))));
  /* d09fc: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0a00: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0a04: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0a08: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0a0c: strh w8, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* d0a10: ldrsh w9, [x0] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 0))));
  /* d0a14: ldursh w8, [x1, #-2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 1) + INT64_C(-2)))));
  /* d0a18: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0a1c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0a20: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0a24: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0a28: ldrsh w10, [x0, #2] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d0a2c: ldrh w9, [x0] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 0)));
  /* d0a30: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* d0a34: csel w9, w9, w10, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* d0a38: csel w8, w8, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* d0a3c: strh w9, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 9));
  /* d0a40: b #0xd0b7c */
  goto L_d0b7c;
L_d0a44:;
  /* d0a44: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
  /* d0a48: ldrsh w8, [x0, #2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d0a4c: ldrsh w10, [x0] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 0))));
  /* d0a50: ldrsh w9, [x11, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 11) + INT64_C(4));
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16(_a)));
  }
  /* d0a54: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0a58: csel w12, w8, w9, gt */
  ARC_W_W(c, 12, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0a5c: csel w9, w8, w9, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0a60: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* d0a64: csel w8, w12, w10, gt */
  ARC_W_W(c, 8, (ARC_COND(c, 12) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d0a68: csel w13, w12, w10, lt */
  ARC_W_W(c, 13, (ARC_COND(c, 11) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* d0a6c: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* d0a70: strh w8, [x11] */
  arc_st16(ARC_X_R(c, 11), ARC_W_R(c, 8));
  /* d0a74: add x8, x0, #6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + UINT64_C(6)));
  /* d0a78: csel w10, w10, w9, lt */
  ARC_W_W(c, 10, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* d0a7c: csel w9, w9, w13, lt */
  ARC_W_W(c, 9, (ARC_COND(c, 11) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 13)));
  /* d0a80: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d0a84: strh w10, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 10));
  /* d0a88: strh w9, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d0a8c: b.eq #0xd08d4 */
  if (ARC_COND(c, 0)) goto L_d08d4;
  /* d0a90: mov w9, wzr */
  ARC_W_W(c, 9, ARC_W_R(c, 31));
  /* d0a94: mov w10, #6 */
  ARC_W_W(c, 10, UINT64_C(6));
  /* d0a98: b #0xd0ac8 */
  goto L_d0ac8;
L_d0a9c:;
  /* d0a9c: mov x11, x0 */
  ARC_X_W(c, 11, ARC_X_R(c, 0));
L_d0aa0:;
  /* d0aa0: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* d0aa4: strh w12, [x11] */
  arc_st16(ARC_X_R(c, 11), ARC_W_R(c, 12));
  /* d0aa8: cmp w9, #8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(8));
  /* d0aac: b.eq #0xd0b88 */
  if (ARC_COND(c, 0)) goto L_d0b88;
L_d0ab0:;
  /* d0ab0: add x12, x8, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* d0ab4: mov x11, x8 */
  ARC_X_W(c, 11, ARC_X_R(c, 8));
  /* d0ab8: add x10, x10, #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + UINT64_C(2)));
  /* d0abc: cmp x12, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 1));
  /* d0ac0: mov x8, x12 */
  ARC_X_W(c, 8, ARC_X_R(c, 12));
  /* d0ac4: b.eq #0xd08d4 */
  if (ARC_COND(c, 0)) goto L_d08d4;
L_d0ac8:;
  /* d0ac8: ldrsh w12, [x8] */
  ARC_W_W(c, 12, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 8))));
  /* d0acc: ldrsh w11, [x11] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 11))));
  /* d0ad0: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0ad4: b.ge #0xd0ab0 */
  if (ARC_COND(c, 10)) goto L_d0ab0;
  /* d0ad8: mov x14, x10 */
  ARC_X_W(c, 14, ARC_X_R(c, 10));
L_d0adc:;
  /* d0adc: subs x13, x14, #2 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(2)));
  /* d0ae0: strh w11, [x0, x14] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 14)), ARC_W_R(c, 11));
  /* d0ae4: b.eq #0xd0a9c */
  if (ARC_COND(c, 0)) goto L_d0a9c;
  /* d0ae8: add x11, x0, x14 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 14)));
  /* d0aec: mov x14, x13 */
  ARC_X_W(c, 14, ARC_X_R(c, 13));
  /* d0af0: ldursh w11, [x11, #-4] */
  ARC_W_W(c, 11, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 11) + INT64_C(-4)))));
  /* d0af4: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* d0af8: b.lt #0xd0adc */
  if (ARC_COND(c, 11)) goto L_d0adc;
  /* d0afc: add x11, x0, x13 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* d0b00: b #0xd0aa0 */
  goto L_d0aa0;
L_d0b04:;
  /* d0b04: ldrsh w8, [x0] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 0))));
  /* d0b08: ldrsh w9, [x0, #4] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(4)))));
  /* d0b0c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0b10: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0b14: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0b18: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* d0b1c: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0b20: ldrsh w8, [x0, #2] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d0b24: ldursh w9, [x1, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 1) + INT64_C(-2)))));
  /* d0b28: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0b2c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0b30: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0b34: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0b38: ldrsh w10, [x0] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16(ARC_X_R(c, 0))));
  /* d0b3c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0b40: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0b44: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0b48: strh w9, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 9));
  /* d0b4c: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* d0b50: ldrsh w8, [x0, #4] */
  ARC_W_W(c, 8, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(4)))));
  /* d0b54: ldursh w9, [x1, #-2] */
  ARC_W_W(c, 9, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 1) + INT64_C(-2)))));
  /* d0b58: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d0b5c: csel w10, w8, w9, gt */
  ARC_W_W(c, 10, (ARC_COND(c, 12) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0b60: csel w8, w8, w9, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* d0b64: sturh w10, [x1, #-2] */
  arc_st16((ARC_X_R(c, 1) + INT64_C(-2)), ARC_W_R(c, 10));
  /* d0b68: ldrsh w10, [x0, #2] */
  ARC_W_W(c, 10, ((int32_t)(int16_t)arc_ld16((ARC_X_R(c, 0) + INT64_C(2)))));
  /* d0b6c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* d0b70: csel w9, w10, w8, gt */
  ARC_W_W(c, 9, (ARC_COND(c, 12) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0b74: csel w8, w10, w8, lt */
  ARC_W_W(c, 8, (ARC_COND(c, 11) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* d0b78: strh w9, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 9));
L_d0b7c:;
  /* d0b7c: strh w8, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 8));
  /* d0b80: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d0b84: ret  */
  return;
L_d0b88:;
  /* d0b88: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* d0b8c: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d0b90: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* d0b94: ret  */
  return;
}

void fn1_d77e4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038810596));
  /* d77e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d77e8: sub sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(32)));
  /* d77ec: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d77f0: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* d77f4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* d77f8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* d77fc: bl #0x142a28 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882688));
  fn1_142a28(c);
  /* d7800: cbnz w0, #0xd7834 */
  if ((ARC_W_R(c, 0)) != 0) goto L_d7834;
  /* d7804: ldp x8, x10, [sp] */
  { const uint64_t _pa = (c)->sp;
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* d7808: mov w9, #0xca00 */
  ARC_W_W(c, 9, UINT64_C(51712));
  /* d780c: movk w9, #0x3b9a, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* d7810: mul x11, x8, x9 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* d7814: smulh x8, x8, x9 */
  ARC_X_W(c, 8, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* d7818: asr x9, x10, #0x3f */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(63)) & 63))));
  /* d781c: adds x0, x11, x10 */
  ARC_X_W(c, 0, arc_add64(c, ARC_X_R(c, 11), ARC_X_R(c, 10), 0));
  /* d7820: adc x1, x8, x9 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 8)) + (uint64_t)(ARC_X_R(c, 9)) + (c)->cf));
  /* d7824: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7828: add sp, sp, #0x20 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(32)));
  /* d782c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d7830: ret  */
  return;
L_d7834:;
  /* d7834: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882744));
  fn1_142a58(c);
  /* d7838: ldr w0, [x0] */
  ARC_W_W(c, 0, arc_ld32(ARC_X_R(c, 0)));
  /* d783c: nop  */
  /* nop: no architectural effect here */
  /* d7840: adr x1, #0x513f2 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(332786)));
  /* d7844: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882760));
  fn1_142a40(c);
  /* d7848: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(882764));
  fn1_a1454(c);
}

void fn1_db694(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826644));
  /* db694: bti c */
  /* bti: no architectural effect here */
  /* db698: nop  */
  /* nop: no architectural effect here */
  /* db69c: adr x0, #0x156d20 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404192)));
  /* db6a0: ret  */
  return;
}

void fn1_dfa8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038844044));
  /* dfa8c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* dfa90: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* dfa94: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* dfa98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* dfa9c: ldr x8, [x1, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* dfaa0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* dfaa4: ldr x20, [x0, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* dfaa8: str x8, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 8));
  /* dfaac: sub x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(8)));
  /* dfab0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* dfab4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916152));
  fn1_a2030(c);
  /* dfab8: sub x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* dfabc: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* dfac0: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916164));
  fn1_a2030(c);
  /* dfac4: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* dfac8: b.pl #0xdfad4 */
  if (ARC_COND(c, 5)) goto L_dfad4;
  /* dfacc: sub x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) - UINT64_C(24)));
  /* dfad0: bl #0x1426f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(916180));
  fn1_1426f8(c);
L_dfad4:;
  /* dfad4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* dfad8: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dfadc: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dfae0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dfae4: ret  */
  return;
}

void fn1_e2450(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038854736));
  /* e2450: bti c */
  /* bti: no architectural effect here */
  /* e2454: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e2458: tbnz w8, #0, #0xe2460 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e2460;
  /* e245c: ret  */
  return;
L_e2460:;
  /* e2460: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e2464: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e2468: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* e246c: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* e2470: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_e59a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038868392));
  /* e59a8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e59ac: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* e59b0: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e59b4: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e59b8: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e59bc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* e59c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* e59c4: add x0, sp, #0xc */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(12)));
  /* e59c8: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e59cc: add x21, x0, #0x14 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(20)));
  /* e59d0: tbz x20, #0x3f, #0xe59e4 */
  if (((ARC_X_R(c, 20)) >> 63 & 1) == 0) goto L_e59e4;
  /* e59d4: mov w8, #0x2d */
  ARC_W_W(c, 8, UINT64_C(45));
  /* e59d8: orr x0, x0, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) | UINT64_C(1)));
  /* e59dc: neg x20, x20 */
  ARC_X_W(c, 20, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 20))));
  /* e59e0: strb w8, [sp, #0xc] */
  arc_st8(((c)->sp + INT64_C(12)), ARC_W_R(c, 8));
L_e59e4:;
  /* e59e4: sub x8, x21, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 0)));
  /* e59e8: cmp x8, #0x13 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(19));
  /* e59ec: b.gt #0xe5a30 */
  if (ARC_COND(c, 12)) goto L_e5a30;
  /* e59f0: orr x9, x20, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* e59f4: mov w10, #0x40 */
  ARC_W_W(c, 10, UINT64_C(64));
  /* e59f8: clz x9, x9 */
  ARC_X_W(c, 9, arc_clz64(ARC_X_R(c, 9)));
  /* e59fc: sub w9, w10, w9 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* e5a00: mov w10, #0x4d1 */
  ARC_W_W(c, 10, UINT64_C(1233));
  /* e5a04: mul w9, w9, w10 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10))));
  /* e5a08: nop  */
  /* nop: no architectural effect here */
  /* e5a0c: adr x10, #0x75298 */
  ARC_X_W(c, 10, (arc_image_bases[1] + UINT64_C(479896)));
  /* e5a10: lsr w9, w9, #0xc */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* e5a14: ldr x10, [x10, w9, uxtw #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 10) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 9)))) << 3))));
  /* e5a18: cmp x20, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* e5a1c: cset w10, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? 1 : 0));
  /* e5a20: sub w9, w9, w10 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) - ARC_W_R(c, 10)));
  /* e5a24: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* e5a28: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* e5a2c: b.lt #0xe5b2c */
  if (ARC_COND(c, 11)) goto L_e5b2c;
L_e5a30:;
  /* e5a30: lsr x8, x20, #0x20 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 20)) >> ((UINT64_C(32)) & 63)));
  /* e5a34: cbnz x8, #0xe5a48 */
  if ((ARC_X_R(c, 8)) != 0) goto L_e5a48;
  /* e5a38: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e5a3c: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940608));
  fn1_d4eb8(c);
  /* e5a40: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e5a44: b #0xe5b2c */
  goto L_e5b2c;
L_e5a48:;
  /* e5a48: mov x22, #0xe3ff */
  ARC_X_W(c, 22, UINT64_C(58367));
  /* e5a4c: movk x22, #0x540b, lsl #16 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* e5a50: movk x22, #2, lsl #32 */
  ARC_X_W(c, 22, ((ARC_X_R(c, 22) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* e5a54: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* e5a58: b.ls #0xe5a84 */
  if (ARC_COND(c, 9)) goto L_e5a84;
  /* e5a5c: mov x8, #0xd5bf */
  ARC_X_W(c, 8, UINT64_C(54719));
  /* e5a60: movk x8, #0xbded, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3186425856)));
  /* e5a64: movk x8, #0xfece, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(280160716718080)));
  /* e5a68: movk x8, #0xdbe6, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(15845352338949668864)));
  /* e5a6c: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e5a70: lsr x21, x8, #0x21 */
  ARC_X_W(c, 21, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(33)) & 63)));
  /* e5a74: mov w1, w21 */
  ARC_W_W(c, 1, ARC_W_R(c, 21));
  /* e5a78: bl #0xd4eb8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940668));
  fn1_d4eb8(c);
  /* e5a7c: madd x8, x21, x22, x21 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 21)) + ((uint64_t)(ARC_X_R(c, 21)) * (uint64_t)(ARC_X_R(c, 22)))));
  /* e5a80: sub x20, x20, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
L_e5a84:;
  /* e5a84: mov x8, #0xcefd */
  ARC_X_W(c, 8, UINT64_C(52989));
  /* e5a88: mov w9, #0xe100 */
  ARC_W_W(c, 9, UINT64_C(57600));
  /* e5a8c: mov w10, #0xde83 */
  ARC_W_W(c, 10, UINT64_C(56963));
  /* e5a90: movk x8, #0x8461, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* e5a94: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* e5a98: movk w10, #0x431b, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1125842944)));
  /* e5a9c: movk x8, #0x7711, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* e5aa0: mov w11, #0x4240 */
  ARC_W_W(c, 11, UINT64_C(16960));
  /* e5aa4: mov w12, #0x2710 */
  ARC_W_W(c, 12, UINT64_C(10000));
  /* e5aa8: movk x8, #0xabcc, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* e5aac: movk w11, #0xf, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* e5ab0: add x21, x0, #0xa */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + UINT64_C(10)));
  /* e5ab4: umulh x8, x20, x8 */
  ARC_X_W(c, 8, arc_umulh(ARC_X_R(c, 20), ARC_X_R(c, 8)));
  /* e5ab8: lsr x8, x8, #0x1a */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(26)) & 63)));
  /* e5abc: msub w9, w8, w9, w20 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 20)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9)))));
  /* e5ac0: umull x10, w9, w10 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 10)))));
  /* e5ac4: lsr x10, x10, #0x32 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(50)) & 63)));
  /* e5ac8: msub w9, w10, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e5acc: mov w11, #0x1759 */
  ARC_W_W(c, 11, UINT64_C(5977));
  /* e5ad0: movk w11, #0xd1b7, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* e5ad4: umull x11, w9, w11 */
  ARC_X_W(c, 11, (((uint64_t)(uint32_t)(ARC_W_R(c, 9))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 11)))));
  /* e5ad8: lsr x11, x11, #0x2d */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(45)) & 63)));
  /* e5adc: msub w9, w11, w12, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* e5ae0: nop  */
  /* nop: no architectural effect here */
  /* e5ae4: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* e5ae8: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e5aec: ubfx w13, w9, #2, #0xe */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(16383)));
  /* e5af0: strh w8, [x0] */
  arc_st16(ARC_X_R(c, 0), ARC_W_R(c, 8));
  /* e5af4: mov w8, #0x147b */
  ARC_W_W(c, 8, UINT64_C(5243));
  /* e5af8: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* e5afc: mul w8, w13, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 8))));
  /* e5b00: strh w10, [x0, #2] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 10));
  /* e5b04: ldrh w10, [x12, x11, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* e5b08: mov w11, #0x64 */
  ARC_W_W(c, 11, UINT64_C(100));
  /* e5b0c: lsr w8, w8, #0x11 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(17)) & 31)));
  /* e5b10: strh w10, [x0, #4] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(4)), ARC_W_R(c, 10));
  /* e5b14: msub w9, w8, w11, w9 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) - ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 11)))));
  /* e5b18: ldrh w8, [x12, w8, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1))));
  /* e5b1c: strh w8, [x0, #6] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(6)), ARC_W_R(c, 8));
  /* e5b20: and x8, x9, #0xffff */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) & UINT64_C(65535)));
  /* e5b24: ldrh w8, [x12, x8, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 8)) << 1))));
  /* e5b28: strh w8, [x0, #8] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
L_e5b2c:;
  /* e5b2c: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* e5b30: sub x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) - ARC_X_R(c, 8)));
  /* e5b34: cmn x20, #8 */
  (void)arc_add64(c, ARC_X_R(c, 20), UINT64_C(8), 0);
  /* e5b38: b.hs #0xe5bb0 */
  if (ARC_COND(c, 2)) goto L_e5bb0;
  /* e5b3c: cmp x20, #0x16 */
  (void)arc_sub64(c, ARC_X_R(c, 20), UINT64_C(22));
  /* e5b40: b.hi #0xe5b50 */
  if (ARC_COND(c, 8)) goto L_e5b50;
  /* e5b44: lsl w8, w20, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 20)) << ((UINT64_C(1)) & 31)));
  /* e5b48: strb w8, [x19], #1 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 8));
  }
  /* e5b4c: b #0xe5b78 */
  goto L_e5b78;
L_e5b50:;
  /* e5b50: orr x8, x20, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) | UINT64_C(7)));
  /* e5b54: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* e5b58: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e5b5c: csinc x22, x9, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* e5b60: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* e5b64: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940904));
  fn1_1428f0(c);
  /* e5b68: orr x8, x22, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) | UINT64_C(1)));
  /* e5b6c: stp x20, x0, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* e5b70: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* e5b74: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_e5b78:;
  /* e5b78: add x8, sp, #0xc */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(12)));
  /* e5b7c: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* e5b80: b.eq #0xe5b94 */
  if (ARC_COND(c, 0)) goto L_e5b94;
  /* e5b84: add x1, sp, #0xc */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(12)));
  /* e5b88: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e5b8c: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e5b90: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940948));
  fn1_1449d8(c);
L_e5b94:;
  /* e5b94: strb wzr, [x19, x20] */
  arc_st8((ARC_X_R(c, 19) + ARC_X_R(c, 20)), ARC_W_R(c, 31));
  /* e5b98: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e5b9c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e5ba0: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e5ba4: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* e5ba8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e5bac: ret  */
  return;
L_e5bb0:;
  /* e5bb0: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(940980));
  fn1_d7d54(c);
}

void fn1_e952c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038883628));
  /* e952c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e9530: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e9534: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e9538: bl #0x1430d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955708));
  fn1_1430d0(c);
  /* e953c: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e9540: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e9544: ret  */
  return;
  /* e9548: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(955724));
  fn1_a1454(c);
}

void fn1_eb450(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038891600));
  /* eb450: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb454: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb458: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* eb45c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb460: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eb464: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963688));
  fn1_142518(c);
  /* eb468: cbnz w0, #0xeb4a8 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eb4a8;
  /* eb46c: ldr w20, [x19, #0x88] */
  ARC_W_W(c, 20, arc_ld32((ARC_X_R(c, 19) + INT64_C(136))));
  /* eb470: mov w8, #0x7ffffffe */
  ARC_W_W(c, 8, UINT64_C(2147483646));
  /* eb474: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* eb478: b.hi #0xeb484 */
  if (ARC_COND(c, 8)) goto L_eb484;
  /* eb47c: add w8, w20, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 20) + UINT64_C(1)));
  /* eb480: str w8, [x19, #0x88] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(136)), ARC_W_R(c, 8));
L_eb484:;
  /* eb484: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eb488: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963724));
  fn1_142560(c);
  /* eb48c: mov w8, #0x7fffffff */
  ARC_W_W(c, 8, UINT64_C(2147483647));
  /* eb490: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* eb494: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
  /* eb498: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* eb49c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb4a0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb4a4: ret  */
  return;
L_eb4a8:;
  /* eb4a8: nop  */
  /* nop: no architectural effect here */
  /* eb4ac: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eb4b0: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963764));
  fn1_142a40(c);
  /* eb4b4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(963768));
  fn1_a1454(c);
}

void fn1_ed234(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038899252));
  /* ed234: bti c */
  /* bti: no architectural effect here */
  /* ed238: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ed23c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ed240: b.hs #0xed24c */
  if (ARC_COND(c, 2)) goto L_ed24c;
  /* ed244: sub x0, x9, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* ed248: ret  */
  return;
L_ed24c:;
  /* ed24c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ed250: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* ed254: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f0290(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038911632));
  /* f0290: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f0294: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f0298: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* f029c: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f02a0: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f02a4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f02a8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f02ac: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* f02b0: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f02b4: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f02b8: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f02bc: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f02c0: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f02c4: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983752));
  fn1_1435f8(c);
  /* f02c8: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f02cc: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f02d0: b.ne #0xf03e8 */
  if (ARC_COND(c, 1)) goto L_f03e8;
  /* f02d4: mov x22, #0x7fffffffffffffff */
  ARC_X_W(c, 22, UINT64_C(9223372036854775807));
  /* f02d8: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f02dc: b.ne #0xf0344 */
  if (ARC_COND(c, 1)) goto L_f0344;
  /* f02e0: add x21, x19, #0x28 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* f02e4: b #0xf02f0 */
  goto L_f02f0;
L_f02e8:;
  /* f02e8: cmp w0, w20 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 20));
  /* f02ec: b.eq #0xf03b4 */
  if (ARC_COND(c, 0)) goto L_f03b4;
L_f02f0:;
  /* f02f0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f02f4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f02f8: ldr x0, [x21, x8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 21) + ARC_X_R(c, 8))));
  /* f02fc: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f0300: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f0304: b.eq #0xf0318 */
  if (ARC_COND(c, 0)) goto L_f0318;
  /* f0308: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f030c: str x9, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 9));
  /* f0310: ldrb w0, [x8] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 8)));
  /* f0314: b #0xf032c */
  goto L_f032c;
L_f0318:;
  /* f0318: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f031c: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f0320: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983844));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f0324: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f0328: b.eq #0xf0404 */
  if (ARC_COND(c, 0)) goto L_f0404;
L_f032c:;
  /* f032c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f0330: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* f0334: b.eq #0xf02e8 */
  if (ARC_COND(c, 0)) goto L_f02e8;
  /* f0338: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f033c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f0340: b #0xf02e8 */
  goto L_f02e8;
L_f0344:;
  /* f0344: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f0348: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* f034c: b.ge #0xf03b4 */
  if (ARC_COND(c, 10)) goto L_f03b4;
  /* f0350: add x22, x19, #0x28 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* f0354: mov x23, #0x7fffffffffffffff */
  ARC_X_W(c, 23, UINT64_C(9223372036854775807));
  /* f0358: b #0xf037c */
  goto L_f037c;
L_f035c:;
  /* f035c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* f0360: str x10, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), ARC_X_R(c, 10));
  /* f0364: ldrb w0, [x9] */
  ARC_W_W(c, 0, arc_ld8(ARC_X_R(c, 9)));
L_f0368:;
  /* f0368: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f036c: cmp w0, w20 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 20));
  /* f0370: ccmp x8, x21, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* f0374: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f0378: b.ge #0xf03b4 */
  if (ARC_COND(c, 10)) goto L_f03b4;
L_f037c:;
  /* f037c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f0380: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f0384: ldr x0, [x22, x9] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 22) + ARC_X_R(c, 9))));
  /* f0388: ldp x9, x10, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f038c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* f0390: b.ne #0xf035c */
  if (ARC_COND(c, 1)) goto L_f035c;
  /* f0394: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f0398: ldr x8, [x8, #0x50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(80))));
  /* f039c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(983968));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f03a0: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f03a4: b.eq #0xf0404 */
  if (ARC_COND(c, 0)) goto L_f0404;
  /* f03a8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f03ac: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* f03b0: b.ne #0xf0368 */
  if (ARC_COND(c, 1)) goto L_f0368;
L_f03b4:;
  /* f03b4: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
L_f03b8:;
  /* f03b8: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f03bc: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f03c0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f03c4: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f03c8: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f03cc: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f03d0: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f03d4: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f03d8: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f03dc: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f03e0: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f03e4: b.ne #0xf040c */
  if (ARC_COND(c, 1)) goto L_f040c;
L_f03e8:;
  /* f03e8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f03ec: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f03f0: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* f03f4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f03f8: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f03fc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f0400: ret  */
  return;
L_f0404:;
  /* f0404: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
  /* f0408: b #0xf03b8 */
  goto L_f03b8;
L_f040c:;
  /* f040c: nop  */
  /* nop: no architectural effect here */
  /* f0410: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f0414: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984088));
  fn1_ec720(c);
  /* f0418: b #0xf041c */
  goto L_f041c;
L_f041c:;
  /* f041c: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984096));
  fn1_142548(c);
  /* f0420: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f0424: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f0428: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f042c: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f0430: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f0434: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f0438: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f043c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f0440: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f0444: tbnz w8, #0, #0xf0454 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f0454;
  /* f0448: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984140));
  fn1_142980(c);
  /* f044c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f0450: b #0xf03b8 */
  goto L_f03b8;
L_f0454:;
  /* f0454: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984152));
  fn1_1429b0(c);
  /* f0458: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f045c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984160));
  fn1_142980(c);
  /* f0460: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f0464: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984168));
  fn1_9cc20(c);
  /* f0468: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(984172));
  fn1_a1454(c);
}

void fn1_f3c58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038926424));
  /* f3c58: bti c */
  /* bti: no architectural effect here */
  /* f3c5c: ldp x8, x9, [x0, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(24));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* f3c60: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* f3c64: b.hs #0xf3c74 */
  if (ARC_COND(c, 2)) goto L_f3c74;
  /* f3c68: sub x8, x9, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* f3c6c: asr x0, x8, #2 */
  ARC_X_W(c, 0, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* f3c70: ret  */
  return;
L_f3c74:;
  /* f3c74: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* f3c78: ldr x16, [x8, #0x38] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* f3c7c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_f6cac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038938796));
  /* f6cac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f6cb0: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f6cb4: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* f6cb8: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f6cbc: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f6cc0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f6cc4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6cc8: mov w20, w2 */
  ARC_W_W(c, 20, ARC_W_R(c, 2));
  /* f6ccc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f6cd0: str xzr, [x0, #8] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(8)), ARC_X_R(c, 31));
  /* f6cd4: add x0, x29, #0x1c */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(28)));
  /* f6cd8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f6cdc: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* f6ce0: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1010916));
  fn1_143670(c);
  /* f6ce4: ldrb w8, [x29, #0x1c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(28))));
  /* f6ce8: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f6cec: b.ne #0xf6e0c */
  if (ARC_COND(c, 1)) goto L_f6e0c;
  /* f6cf0: mov x22, #0x7fffffffffffffff */
  ARC_X_W(c, 22, UINT64_C(9223372036854775807));
  /* f6cf4: cmp x21, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 22));
  /* f6cf8: b.ne #0xf6d60 */
  if (ARC_COND(c, 1)) goto L_f6d60;
  /* f6cfc: add x21, x19, #0x28 */
  ARC_X_W(c, 21, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* f6d00: b #0xf6d0c */
  goto L_f6d0c;
L_f6d04:;
  /* f6d04: cmp w0, w20 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 20));
  /* f6d08: b.eq #0xf6dd0 */
  if (ARC_COND(c, 0)) goto L_f6dd0;
L_f6d0c:;
  /* f6d0c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6d10: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6d14: ldr x8, [x21, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + ARC_X_R(c, 8))));
  /* f6d18: ldp x9, x10, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f6d1c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* f6d20: b.eq #0xf6d30 */
  if (ARC_COND(c, 0)) goto L_f6d30;
  /* f6d24: ldr w0, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* f6d28: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* f6d2c: b #0xf6d40 */
  goto L_f6d40;
L_f6d30:;
  /* f6d30: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f6d34: ldr x9, [x9, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(80))));
  /* f6d38: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f6d3c: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011008));
  arc_dispatch(c, ARC_X_R(c, 9));
L_f6d40:;
  /* f6d40: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f6d44: b.eq #0xf6dd8 */
  if (ARC_COND(c, 0)) goto L_f6dd8;
  /* f6d48: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6d4c: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* f6d50: b.eq #0xf6d04 */
  if (ARC_COND(c, 0)) goto L_f6d04;
  /* f6d54: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f6d58: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f6d5c: b #0xf6d04 */
  goto L_f6d04;
L_f6d60:;
  /* f6d60: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6d64: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* f6d68: b.ge #0xf6dd0 */
  if (ARC_COND(c, 10)) goto L_f6dd0;
  /* f6d6c: add x22, x19, #0x28 */
  ARC_X_W(c, 22, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* f6d70: mov x23, #0x7fffffffffffffff */
  ARC_X_W(c, 23, UINT64_C(9223372036854775807));
L_f6d74:;
  /* f6d74: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6d78: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6d7c: ldr x8, [x22, x8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + ARC_X_R(c, 8))));
  /* f6d80: ldp x9, x10, [x8, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* f6d84: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* f6d88: b.eq #0xf6d98 */
  if (ARC_COND(c, 0)) goto L_f6d98;
  /* f6d8c: ldr w0, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* f6d90: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* f6d94: b #0xf6da8 */
  goto L_f6da8;
L_f6d98:;
  /* f6d98: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* f6d9c: ldr x9, [x9, #0x50] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(80))));
  /* f6da0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* f6da4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011112));
  arc_dispatch(c, ARC_X_R(c, 9));
L_f6da8:;
  /* f6da8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* f6dac: b.eq #0xf6dd8 */
  if (ARC_COND(c, 0)) goto L_f6dd8;
  /* f6db0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f6db4: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* f6db8: b.eq #0xf6dd0 */
  if (ARC_COND(c, 0)) goto L_f6dd0;
  /* f6dbc: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* f6dc0: cmp w0, w20 */
  (void)arc_sub32(c, ARC_W_R(c, 0), ARC_W_R(c, 20));
  /* f6dc4: ccmp x8, x21, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* f6dc8: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* f6dcc: b.lt #0xf6d74 */
  if (ARC_COND(c, 11)) goto L_f6d74;
L_f6dd0:;
  /* f6dd0: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* f6dd4: b #0xf6ddc */
  goto L_f6ddc;
L_f6dd8:;
  /* f6dd8: mov w8, #2 */
  ARC_W_W(c, 8, UINT64_C(2));
L_f6ddc:;
  /* f6ddc: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* f6de0: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* f6de4: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f6de8: ldr x10, [x9, #0x28] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(40))));
  /* f6dec: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* f6df0: ldp w11, w10, [x9, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* f6df4: orr w8, w11, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | ARC_W_R(c, 8)));
  /* f6df8: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f6dfc: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* f6e00: tst w8, w10 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 10)));
  /* f6e04: str w8, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 8));
  /* f6e08: b.ne #0xf6e28 */
  if (ARC_COND(c, 1)) goto L_f6e28;
L_f6e0c:;
  /* f6e0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6e10: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f6e14: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* f6e18: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f6e1c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f6e20: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f6e24: ret  */
  return;
L_f6e28:;
  /* f6e28: nop  */
  /* nop: no architectural effect here */
  /* f6e2c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f6e30: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011252));
  fn1_ec720(c);
  /* f6e34: b #0xf6e38 */
  goto L_f6e38;
L_f6e38:;
  /* f6e38: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011260));
  fn1_142548(c);
  /* f6e3c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f6e40: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6e44: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f6e48: ldr w10, [x9, #0x20] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f6e4c: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f6e50: str w10, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 10));
  /* f6e54: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f6e58: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f6e5c: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f6e60: tbnz w8, #0, #0xf6e70 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f6e70;
  /* f6e64: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011304));
  fn1_142980(c);
  /* f6e68: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* f6e6c: b #0xf6ddc */
  goto L_f6ddc;
L_f6e70:;
  /* f6e70: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011316));
  fn1_1429b0(c);
  /* f6e74: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f6e78: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011324));
  fn1_142980(c);
  /* f6e7c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f6e80: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011332));
  fn1_9cc20(c);
  /* f6e84: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1011336));
  fn1_a1454(c);
}

void fn1_fbd30(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038959408));
  /* fbd30: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fbd34: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fbd38: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* fbd3c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fbd40: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fbd44: bl #0x1436d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1031496));
  fn1_1436d0(c);
  /* fbd48: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fbd4c: mov w1, #0xa8 */
  ARC_W_W(c, 1, UINT64_C(168));
  /* fbd50: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* fbd54: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fbd58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fbd5c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_ff1a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038972832));
  /* ff1a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ff1a4: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ff1a8: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ff1ac: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ff1b0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ff1b4: ldrb w8, [x0, #0x58] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(88))));
  /* ff1b8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* ff1bc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ff1c0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ff1c4: tbz w8, #0, #0xff1ec */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ff1ec;
  /* ff1c8: ldr x3, [x21, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 21) + INT64_C(64))));
  /* ff1cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ff1d0: mov w1, #4 */
  ARC_W_W(c, 1, UINT64_C(4));
  /* ff1d4: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* ff1d8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ff1dc: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ff1e0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff1e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff1e8: b #0x1427d0 */
  fn1_1427d0(c); return;
L_ff1ec:;
  /* ff1ec: cmp x19, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 19), UINT64_C(1));
  /* ff1f0: b.lt #0xff228 */
  if (ARC_COND(c, 11)) goto L_ff228;
  /* ff1f4: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_ff1f8:;
  /* ff1f8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ff1fc: ldr w1, [x20, x22, lsl #2] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 20) + ((uint64_t)(ARC_X_R(c, 22)) << 2))));
  /* ff200: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ff204: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* ff208: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1045004));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ff20c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* ff210: b.eq #0xff22c */
  if (ARC_COND(c, 0)) goto L_ff22c;
  /* ff214: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* ff218: cmp x19, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 22));
  /* ff21c: b.ne #0xff1f8 */
  if (ARC_COND(c, 1)) goto L_ff1f8;
  /* ff220: mov x22, x19 */
  ARC_X_W(c, 22, ARC_X_R(c, 19));
  /* ff224: b #0xff22c */
  goto L_ff22c;
L_ff228:;
  /* ff228: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
L_ff22c:;
  /* ff22c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ff230: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ff234: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ff238: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ff23c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ff240: ret  */
  return;
}

void fn1_10cdc0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039029184));
  /* 10cdc0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10cdc4: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* 10cdc8: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10cdcc: stp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10cdd0: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10cdd4: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10cdd8: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10cddc: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 10cde0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10cde4: cbz x0, #0x10cf6c */
  if ((ARC_X_R(c, 0)) == 0) goto L_10cf6c;
  /* 10cde8: sub x8, x3, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 1)));
  /* 10cdec: ldr x9, [x4, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 4) + INT64_C(24))));
  /* 10cdf0: sub x10, x2, x1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 10cdf4: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 10cdf8: asr x25, x10, #2 */
  ARC_X_W(c, 25, ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(2)) & 63))));
  /* 10cdfc: mov w24, w5 */
  ARC_W_W(c, 24, ARC_W_R(c, 5));
  /* 10ce00: mov x20, x4 */
  ARC_X_W(c, 20, ARC_X_R(c, 4));
  /* 10ce04: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 10ce08: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* 10ce0c: subs x26, x9, x8 */
  ARC_X_W(c, 26, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8)));
  /* 10ce10: csel x23, x26, xzr, gt */
  ARC_X_W(c, 23, (ARC_COND(c, 12) ? (ARC_X_R(c, 26)) : ARC_X_R(c, 31)));
  /* 10ce14: cmp x25, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 25), UINT64_C(1));
  /* 10ce18: b.lt #0x10ce38 */
  if (ARC_COND(c, 11)) goto L_10ce38;
  /* 10ce1c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10ce20: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10ce24: mov x2, x25 */
  ARC_X_W(c, 2, ARC_X_R(c, 25));
  /* 10ce28: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 10ce2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101360));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10ce30: cmp x0, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 25));
  /* 10ce34: b.ne #0x10cf68 */
  if (ARC_COND(c, 1)) goto L_10cf68;
L_10ce38:;
  /* 10ce38: cmp x23, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(1));
  /* 10ce3c: b.lt #0x10cf30 */
  if (ARC_COND(c, 11)) goto L_10cf30;
  /* 10ce40: mov x8, #0x3ffffffffffffff8 */
  ARC_X_W(c, 8, UINT64_C(4611686018427387896));
  /* 10ce44: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 10ce48: b.hs #0x10cf90 */
  if (ARC_COND(c, 2)) goto L_10cf90;
  /* 10ce4c: cmp x23, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 23), UINT64_C(5));
  /* 10ce50: b.hs #0x10ce68 */
  if (ARC_COND(c, 2)) goto L_10ce68;
  /* 10ce54: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 10ce58: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* 10ce5c: orr x0, x9, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(4)));
  /* 10ce60: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* 10ce64: b #0x10ce8c */
  goto L_10ce8c;
L_10ce68:;
  /* 10ce68: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* 10ce6c: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* 10ce70: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* 10ce74: csinc x25, x9, x8, eq */
  ARC_X_W(c, 25, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 10ce78: lsl x0, x25, #2 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 25)) << ((UINT64_C(2)) & 63)));
  /* 10ce7c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101440));
  fn1_1428f0(c);
  /* 10ce80: orr x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) | UINT64_C(1)));
  /* 10ce84: stp x23, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 10ce88: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_10ce8c:;
  /* 10ce8c: cmp x26, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 26), UINT64_C(8));
  /* 10ce90: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 10ce94: mov x9, x26 */
  ARC_X_W(c, 9, ARC_X_R(c, 26));
  /* 10ce98: b.lo #0x10cecc */
  if (ARC_COND(c, 3)) goto L_10cecc;
  /* 10ce9c: and x10, x26, #0xfffffffffffffff8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 26) & UINT64_C(18446744073709551608)));
  /* 10cea0: dup v0.4s, w24 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 24));
    _t.u32[1] = (ARC_W_R(c, 24));
    _t.u32[2] = (ARC_W_R(c, 24));
    _t.u32[3] = (ARC_W_R(c, 24));
    (c)->q[0] = _t; }
  /* 10cea4: and x9, x26, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 26) & UINT64_C(7)));
  /* 10cea8: add x8, x0, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* 10ceac: add x11, x0, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 10ceb0: mov x12, x10 */
  ARC_X_W(c, 12, ARC_X_R(c, 10));
L_10ceb4:;
  /* 10ceb4: subs x12, x12, #8 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 12), UINT64_C(8)));
  /* 10ceb8: stp q0, q0, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 10cebc: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* 10cec0: b.ne #0x10ceb4 */
  if (ARC_COND(c, 1)) goto L_10ceb4;
  /* 10cec4: cmp x26, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 10));
  /* 10cec8: b.eq #0x10ced8 */
  if (ARC_COND(c, 0)) goto L_10ced8;
L_10cecc:;
  /* 10cecc: subs x9, x9, #1 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 9), UINT64_C(1)));
  /* 10ced0: str w24, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 24));
  }
  /* 10ced4: b.ne #0x10cecc */
  if (ARC_COND(c, 1)) goto L_10cecc;
L_10ced8:;
  /* 10ced8: str wzr, [x0, x23, lsl #2] */
  arc_st32((ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 23)) << 2)), ARC_W_R(c, 31));
  /* 10cedc: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* 10cee0: add x11, sp, #8 */
  ARC_X_W(c, 11, ((c)->sp + UINT64_C(8)));
  /* 10cee4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 10cee8: ldr x10, [sp, #0x18] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10ceec: orr x11, x11, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) | UINT64_C(4)));
  /* 10cef0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 10cef4: ldr x8, [x9, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(96))));
  /* 10cef8: csel x1, x11, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* 10cefc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10cf00: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 10cf04: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101576));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10cf08: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 10cf0c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 10cf10: tbz w8, #0, #0x10cf28 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10cf28;
  /* 10cf14: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10cf18: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10cf1c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 10cf20: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 10cf24: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101608));
  fn1_142608(c);
L_10cf28:;
  /* 10cf28: cmp x24, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 24), ARC_X_R(c, 23));
  /* 10cf2c: b.ne #0x10cf68 */
  if (ARC_COND(c, 1)) goto L_10cf68;
L_10cf30:;
  /* 10cf30: sub x8, x22, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) - ARC_X_R(c, 21)));
  /* 10cf34: asr x22, x8, #2 */
  ARC_X_W(c, 22, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* 10cf38: cmp x22, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(1));
  /* 10cf3c: b.lt #0x10cf60 */
  if (ARC_COND(c, 11)) goto L_10cf60;
  /* 10cf40: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 10cf44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10cf48: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 10cf4c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10cf50: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 10cf54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101656));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10cf58: cmp x0, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 22));
  /* 10cf5c: b.ne #0x10cf68 */
  if (ARC_COND(c, 1)) goto L_10cf68;
L_10cf60:;
  /* 10cf60: str xzr, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 31));
  /* 10cf64: b #0x10cf6c */
  goto L_10cf6c;
L_10cf68:;
  /* 10cf68: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
L_10cf6c:;
  /* 10cf6c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10cf70: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10cf74: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10cf78: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10cf7c: ldp x26, x25, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10cf80: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10cf84: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* 10cf88: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10cf8c: ret  */
  return;
L_10cf90:;
  /* 10cf90: bl #0xe2274 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101716));
  fn1_e2274(c);
  /* 10cf94: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 10cf98: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10cf9c: tbz w8, #0, #0x10cfb4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10cfb4;
  /* 10cfa0: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10cfa4: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 10cfa8: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 10cfac: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 10cfb0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101748));
  fn1_142608(c);
L_10cfb4:;
  /* 10cfb4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10cfb8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1101756));
  fn1_9cc20(c);
}

void fn1_113bf0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057392));
  /* 113bf0: bti c */
  /* bti: no architectural effect here */
  /* 113bf4: mov w9, #0x2d02 */
  ARC_W_W(c, 9, UINT64_C(11522));
  /* 113bf8: strb wzr, [x8, #2] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 31));
  /* 113bfc: strh w9, [x8] */
  arc_st16(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* 113c00: ret  */
  return;
}

void fn1_1141a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058852));
  /* 1141a4: bti c */
  /* bti: no architectural effect here */
  /* 1141a8: ldr w0, [x0, #0x78] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 0) + INT64_C(120))));
  /* 1141ac: ret  */
  return;
}

void fn1_120604(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039109124));
  /* 120604: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 120608: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 12060c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 120610: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 120614: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 120618: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 12061c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 120620: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 120624: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 120628: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 12062c: ldr x23, [x23, #0xbe8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3048))));
  /* 120630: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120634: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 120638: b.eq #0x1206f4 */
  if (ARC_COND(c, 0)) goto L_1206f4;
  /* 12063c: nop  */
  /* nop: no architectural effect here */
  /* 120640: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 120644: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181256));
  fn1_142518(c);
  /* 120648: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 12064c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120650: b.ne #0x12067c */
  if (ARC_COND(c, 1)) goto L_12067c;
  /* 120654: nop  */
  /* nop: no architectural effect here */
  /* 120658: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 12065c: nop  */
  /* nop: no architectural effect here */
  /* 120660: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_120664:;
  /* 120664: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120668: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 12066c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181296));
  fn1_142530(c);
  /* 120670: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120674: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 120678: b.eq #0x120664 */
  if (ARC_COND(c, 0)) goto L_120664;
L_12067c:;
  /* 12067c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 120680: cbz x8, #0x120694 */
  if ((ARC_X_R(c, 8)) == 0) goto L_120694;
  /* 120684: nop  */
  /* nop: no architectural effect here */
  /* 120688: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 12068c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181328));
  fn1_142560(c);
  /* 120690: b #0x1206f4 */
  goto L_1206f4;
L_120694:;
  /* 120694: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 120698: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 12069c: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 1206a0: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1206a4: nop  */
  /* nop: no architectural effect here */
  /* 1206a8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1206ac: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181360));
  fn1_142560(c);
  /* 1206b0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1206b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1206b8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1206bc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181376));
  fn1_a2030(c);
  /* 1206c0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1206c4: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1206c8: nop  */
  /* nop: no architectural effect here */
  /* 1206cc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1206d0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181396));
  fn1_142518(c);
  /* 1206d4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1206d8: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 1206dc: nop  */
  /* nop: no architectural effect here */
  /* 1206e0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1206e4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181416));
  fn1_142560(c);
  /* 1206e8: nop  */
  /* nop: no architectural effect here */
  /* 1206ec: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1206f0: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181428));
  fn1_142578(c);
L_1206f4:;
  /* 1206f4: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 1206f8: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 1206fc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 120700: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 120704: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181448));
  fn1_db2e0(c);
  /* 120708: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 12070c: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 120710: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 120714: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 120718: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 12071c: b.hi #0x120748 */
  if (ARC_COND(c, 8)) goto L_120748;
  /* 120720: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 120724: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 120728: b.ls #0x12073c */
  if (ARC_COND(c, 9)) goto L_12073c;
  /* 12072c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 120730: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181492));
  fn1_1352bc(c);
  /* 120734: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120738: b #0x120748 */
  goto L_120748;
L_12073c:;
  /* 12073c: b.hs #0x120748 */
  if (ARC_COND(c, 2)) goto L_120748;
  /* 120740: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 120744: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_120748:;
  /* 120748: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 12074c: cbz x20, #0x120770 */
  if ((ARC_X_R(c, 20)) == 0) goto L_120770;
  /* 120750: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 120754: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 120758: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181532));
  fn1_bd950(c);
  /* 12075c: cbnz x0, #0x120770 */
  if ((ARC_X_R(c, 0)) != 0) goto L_120770;
  /* 120760: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 120764: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 120768: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 12076c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181552));
  arc_dispatch(c, ARC_X_R(c, 8));
L_120770:;
  /* 120770: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 120774: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 120778: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 12077c: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 120780: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 120784: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 120788: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 12078c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 120790: ret  */
  return;
  /* 120794: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 120798: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 12079c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 1207a0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181604));
  fn1_bd950(c);
  /* 1207a4: cbnz x0, #0x1207cc */
  if ((ARC_X_R(c, 0)) != 0) goto L_1207cc;
  /* 1207a8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1207ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1207b0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 1207b4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181624));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1207b8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1207bc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181632));
  fn1_9cc20(c);
  /* 1207c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 1207c4: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 1207c8: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181644));
  fn1_d2a78(c);
L_1207cc:;
  /* 1207cc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 1207d0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1181652));
  fn1_9cc20(c);
}

void fn1_126d80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039135616));
  /* 126d80: bti c */
  /* bti: no architectural effect here */
  /* 126d84: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 126d88: b.eq #0x126de0 */
  if (ARC_COND(c, 0)) goto L_126de0;
  /* 126d8c: sub x9, x2, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 126d90: cmp x9, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(32));
  /* 126d94: b.lo #0x126de8 */
  if (ARC_COND(c, 3)) goto L_126de8;
  /* 126d98: sub x8, x3, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 1)));
  /* 126d9c: cmp x8, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(32));
  /* 126da0: b.lo #0x126de8 */
  if (ARC_COND(c, 3)) goto L_126de8;
  /* 126da4: and x10, x9, #0xffffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551584)));
  /* 126da8: add x11, x1, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 126dac: add x12, x3, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 3) + UINT64_C(16)));
  /* 126db0: add x8, x3, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) + ARC_X_R(c, 10)));
  /* 126db4: add x0, x1, x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ARC_X_R(c, 10)));
  /* 126db8: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_126dbc:;
  /* 126dbc: ldp q0, q1, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 126dc0: subs x13, x13, #0x20 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(32)));
  /* 126dc4: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* 126dc8: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 126dcc: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 126dd0: b.ne #0x126dbc */
  if (ARC_COND(c, 1)) goto L_126dbc;
  /* 126dd4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 126dd8: b.ne #0x126df0 */
  if (ARC_COND(c, 1)) goto L_126df0;
L_126ddc:;
  /* 126ddc: ret  */
  return;
L_126de0:;
  /* 126de0: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 126de4: ret  */
  return;
L_126de8:;
  /* 126de8: mov x8, x3 */
  ARC_X_W(c, 8, ARC_X_R(c, 3));
  /* 126dec: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
L_126df0:;
  /* 126df0: ldrb w9, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* 126df4: cmp x0, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 2));
  /* 126df8: strb w9, [x8], #1 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 9));
  }
  /* 126dfc: b.ne #0x126df0 */
  if (ARC_COND(c, 1)) goto L_126df0;
  /* 126e00: b #0x126ddc */
  goto L_126ddc;
}

void fn1_129370(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039145328));
  /* 129370: bti c */
  /* bti: no architectural effect here */
  /* 129374: str x3, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 3));
  /* 129378: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 12937c: tbz w7, #1, #0x1293d0 */
  if (((ARC_W_R(c, 7)) >> 1 & 1) == 0) goto L_1293d0;
  /* 129380: sub x8, x4, x3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 4) - ARC_X_R(c, 3)));
  /* 129384: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 129388: b.ge #0x129394 */
  if (ARC_COND(c, 10)) goto L_129394;
L_12938c:;
  /* 12938c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 129390: ret  */
  return;
L_129394:;
  /* 129394: add x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) + UINT64_C(1)));
  /* 129398: mov w9, #0xef */
  ARC_W_W(c, 9, UINT64_C(239));
  /* 12939c: mov w10, #0xbb */
  ARC_W_W(c, 10, UINT64_C(187));
  /* 1293a0: str x8, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 8));
  /* 1293a4: strb w9, [x3] */
  arc_st8(ARC_X_R(c, 3), ARC_W_R(c, 9));
  /* 1293a8: ldr x8, [x5] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 5)));
  /* 1293ac: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1293b0: str x9, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 9));
  /* 1293b4: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 1293b8: mov w10, #0xbf */
  ARC_W_W(c, 10, UINT64_C(191));
  /* 1293bc: ldr x8, [x5] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 5)));
  /* 1293c0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1293c4: str x9, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 9));
  /* 1293c8: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 1293cc: ldr x0, [x2] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 2)));
L_1293d0:;
  /* 1293d0: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 1293d4: b.lo #0x129428 */
  if (ARC_COND(c, 3)) goto L_129428;
L_1293d8:;
  /* 1293d8: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 1293dc: ret  */
  return;
L_1293e0:;
  /* 1293e0: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* 1293e4: mov w10, #0x80 */
  ARC_W_W(c, 10, UINT64_C(128));
  /* 1293e8: ldr x9, [x5] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 5)));
  /* 1293ec: bfxil w10, w8, #6, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 8))) >> 6) & UINT64_C(63))));
  /* 1293f0: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1293f4: str x11, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 11));
L_1293f8:;
  /* 1293f8: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* 1293fc: mov w10, #0x80 */
  ARC_W_W(c, 10, UINT64_C(128));
  /* 129400: ldr x9, [x5] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 5)));
  /* 129404: bfxil w10, w8, #0, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 8))) >> 0) & UINT64_C(63))));
  /* 129408: add x8, x9, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 12940c: str x8, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 8));
  /* 129410: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_129414:;
  /* 129414: ldr x8, [x2] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 2)));
  /* 129418: add x0, x8, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* 12941c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 129420: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 129424: b.hs #0x1293d8 */
  if (ARC_COND(c, 2)) goto L_1293d8;
L_129428:;
  /* 129428: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 12942c: lsr w9, w8, #0xb */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(11)) & 31)));
  /* 129430: cmp w9, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(27));
  /* 129434: ccmp x6, x8, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 8)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 129438: b.lo #0x1294f0 */
  if (ARC_COND(c, 3)) goto L_1294f0;
  /* 12943c: cmp w8, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(127));
  /* 129440: b.hi #0x129464 */
  if (ARC_COND(c, 8)) goto L_129464;
  /* 129444: ldr x9, [x5] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 5)));
  /* 129448: sub x10, x4, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 4) - ARC_X_R(c, 9)));
  /* 12944c: cmp x10, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(1));
  /* 129450: b.lt #0x12938c */
  if (ARC_COND(c, 11)) goto L_12938c;
  /* 129454: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 129458: str x10, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 10));
  /* 12945c: strb w8, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* 129460: b #0x129414 */
  goto L_129414;
L_129464:;
  /* 129464: cmp w8, #0x7ff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2047));
  /* 129468: b.hi #0x129490 */
  if (ARC_COND(c, 8)) goto L_129490;
  /* 12946c: ldr x9, [x5] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 5)));
  /* 129470: sub x10, x4, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 4) - ARC_X_R(c, 9)));
  /* 129474: cmp x10, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(2));
  /* 129478: b.lt #0x12938c */
  if (ARC_COND(c, 11)) goto L_12938c;
  /* 12947c: lsr w10, w8, #6 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(6)) & 31)));
  /* 129480: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 129484: str x11, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 11));
  /* 129488: orr w10, w10, #0xc0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(192)));
  /* 12948c: b #0x1293f8 */
  goto L_1293f8;
L_129490:;
  /* 129490: ldr x9, [x5] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 5)));
  /* 129494: lsr w11, w8, #0x10 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(16)) & 31)));
  /* 129498: sub x10, x4, x9 */
  ARC_X_W(c, 10, (ARC_X_R(c, 4) - ARC_X_R(c, 9)));
  /* 12949c: cbnz w11, #0x1294bc */
  if ((ARC_W_R(c, 11)) != 0) goto L_1294bc;
  /* 1294a0: cmp x10, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(3));
  /* 1294a4: b.lt #0x12938c */
  if (ARC_COND(c, 11)) goto L_12938c;
  /* 1294a8: lsr w10, w8, #0xc */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(12)) & 31)));
  /* 1294ac: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1294b0: str x11, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 11));
  /* 1294b4: orr w10, w10, #0xe0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(224)));
  /* 1294b8: b #0x1293e0 */
  goto L_1293e0;
L_1294bc:;
  /* 1294bc: cmp x10, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(4));
  /* 1294c0: b.lt #0x12938c */
  if (ARC_COND(c, 11)) goto L_12938c;
  /* 1294c4: lsr w10, w8, #0x12 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 8)) >> ((UINT64_C(18)) & 31)));
  /* 1294c8: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1294cc: str x11, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 11));
  /* 1294d0: orr w10, w10, #0xf0 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(240)));
  /* 1294d4: strb w10, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* 1294d8: mov w10, #0x80 */
  ARC_W_W(c, 10, UINT64_C(128));
  /* 1294dc: ldr x9, [x5] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 5)));
  /* 1294e0: bfxil w10, w8, #0xc, #6 */
  ARC_W_W(c, 10, (((uint32_t)(ARC_W_R(c, 10)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 8))) >> 12) & UINT64_C(63))));
  /* 1294e4: add x11, x9, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1294e8: str x11, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 11));
  /* 1294ec: b #0x1293e0 */
  goto L_1293e0;
L_1294f0:;
  /* 1294f0: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 1294f4: ret  */
  return;
}

void fn1_12ac20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039151648));
  /* 12ac20: bti c */
  /* bti: no architectural effect here */
  /* 12ac24: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12ac28: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12ac2c: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12ac30: b.lt #0x12ac60 */
  if (ARC_COND(c, 11)) goto L_12ac60;
  /* 12ac34: ldr w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12ac38: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12ac3c: tbz w9, #2, #0x12ac60 */
  if (((ARC_W_R(c, 9)) >> 2 & 1) == 0) goto L_12ac60;
  /* 12ac40: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12ac44: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12ac48: mov x8, x2 */
  ARC_X_W(c, 8, ARC_X_R(c, 2));
  /* 12ac4c: b.ne #0x12ac60 */
  if (ARC_COND(c, 1)) goto L_12ac60;
  /* 12ac50: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12ac54: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12ac58: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12ac5c: add x8, x2, w8, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12ac60:;
  /* 12ac60: cbz x4, #0x12acac */
  if ((ARC_X_R(c, 4)) == 0) goto L_12acac;
  /* 12ac64: sub x9, x3, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12ac68: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 12ac6c: b.hs #0x12acac */
  if (ARC_COND(c, 2)) goto L_12acac;
  /* 12ac70: ldr x10, [x0, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12ac74: mov w11, #1 */
  ARC_W_W(c, 11, UINT64_C(1));
L_12ac78:;
  /* 12ac78: ldrb w12, [x8, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + INT64_C(1))));
  /* 12ac7c: and w13, w12, #0xf8 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) & UINT64_C(248)));
  /* 12ac80: cmp w13, #0xd8 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(216));
  /* 12ac84: b.eq #0x12acac */
  if (ARC_COND(c, 0)) goto L_12acac;
  /* 12ac88: ldrb w13, [x8] */
  ARC_W_W(c, 13, arc_ld8(ARC_X_R(c, 8)));
  /* 12ac8c: orr w12, w13, w12, lsl #8 */
  ARC_W_W(c, 12, (ARC_W_R(c, 13) | ((uint32_t)(ARC_W_R(c, 12)) << 8)));
  /* 12ac90: cmp x10, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 12));
  /* 12ac94: cset w12, hs */
  ARC_W_W(c, 12, (ARC_COND(c, 2) ? 1 : 0));
  /* 12ac98: add x8, x8, w12, uxtw #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 12)))) << 1)));
  /* 12ac9c: ccmp x8, x9, #2, hs */
  if (ARC_COND(c, 2)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* 12aca0: ccmp x11, x4, #2, lo */
  if (ARC_COND(c, 3)) { (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 4)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 1; (c)->vf = 0; }
  /* 12aca4: add x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 12aca8: b.lo #0x12ac78 */
  if (ARC_COND(c, 3)) goto L_12ac78;
L_12acac:;
  /* 12acac: sub w0, w8, w2 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) - ARC_W_R(c, 2)));
  /* 12acb0: ret  */
  return;
}

void fn1_12c2c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039157440));
  /* 12c2c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12c2c4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12c2c8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12c2cc: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 12c2d0: cbz x0, #0x12c2d8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_12c2d8;
  /* 12c2d4: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229528));
  fn1_144210(c);
L_12c2d8:;
  /* 12c2d8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12c2dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12c2e0: ret  */
  return;
  /* 12c2e4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1229544));
  fn1_a1454(c);
}

void fn1_1348fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039191804));
  /* 1348fc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134900: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134904: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134908: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 13490c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134910: bl #0x143d78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263892));
  fn1_143d78(c);
  /* 134914: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134918: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* 13491c: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134920: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134924: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134928: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_1350a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039193768));
  /* 1350a8: bti c */
  /* bti: no architectural effect here */
  /* 1350ac: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 1350b0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137eb8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039205560));
  /* 137eb8: bti c */
  /* bti: no architectural effect here */
  /* 137ebc: ldp x10, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 137ec0: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 137ec4: b.eq #0x137f14 */
  if (ARC_COND(c, 0)) goto L_137f14;
  /* 137ec8: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 137ecc: mov w0, w1 */
  ARC_W_W(c, 0, ARC_W_R(c, 1));
  /* 137ed0: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* 137ed4: b.eq #0x137ef0 */
  if (ARC_COND(c, 0)) goto L_137ef0;
  /* 137ed8: ldrb w10, [x8, #0x40] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 8) + INT64_C(64))));
  /* 137edc: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 137ee0: tbnz w10, #1, #0x137f00 */
  if (((ARC_W_R(c, 10)) >> 1 & 1) != 0) goto L_137f00;
  /* 137ee4: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* 137ee8: strb w0, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 0));
  /* 137eec: ret  */
  return;
L_137ef0:;
  /* 137ef0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 137ef4: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 137ef8: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* 137efc: ret  */
  return;
L_137f00:;
  /* 137f00: ldrb w10, [x9] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 9)));
  /* 137f04: cmp w10, w0, uxtb */
  (void)arc_sub32(c, ARC_W_R(c, 10), ((uint64_t)(uint8_t)(ARC_W_R(c, 0))));
  /* 137f08: b.ne #0x137f14 */
  if (ARC_COND(c, 1)) goto L_137f14;
  /* 137f0c: str x9, [x8, #0x18] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(24)), ARC_X_R(c, 9));
  /* 137f10: ret  */
  return;
L_137f14:;
  /* 137f14: mov w0, #-1 */
  ARC_W_W(c, 0, UINT64_C(18446744073709551615));
  /* 137f18: ret  */
  return;
}

void fn1_13b4b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039219376));
  /* 13b4b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13b4b4: sub sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(144)));
  /* 13b4b8: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13b4bc: stp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 13b4c0: stp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 13b4c4: stp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13b4c8: stp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13b4cc: stp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13b4d0: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 13b4d4: ldr x8, [x0, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* 13b4d8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b4dc: subs x8, x8, #0x24 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(36)));
  /* 13b4e0: b.lo #0x13b508 */
  if (ARC_COND(c, 3)) goto L_13b508;
  /* 13b4e4: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13b4e8: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
  /* 13b4ec: ldr x8, [x9], #8 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13b4f0: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_13b4f4:;
  /* 13b4f4: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 13b4f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b4fc: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* 13b500: bl #0x13b8c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291524));
  fn1_13b8c8(c);
  /* 13b504: b #0x13b614 */
  goto L_13b614;
L_13b508:;
  /* 13b508: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 13b50c: ldp x27, x25, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 27, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13b510: ldr x21, [x8, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(24));
    ARC_X_W(c, 21, arc_ld64(_a));
  }
  /* 13b514: ldr x20, [x19] */
  ARC_X_W(c, 20, arc_ld64(ARC_X_R(c, 19)));
  /* 13b518: sub x22, x25, x27 */
  ARC_X_W(c, 22, (ARC_X_R(c, 25) - ARC_X_R(c, 27)));
  /* 13b51c: sub x9, x21, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) - ARC_X_R(c, 20)));
  /* 13b520: cmp x22, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 9));
  /* 13b524: b.hs #0x13b544 */
  if (ARC_COND(c, 2)) goto L_13b544;
  /* 13b528: mov w0, #0xfc0 */
  ARC_W_W(c, 0, UINT64_C(4032));
  /* 13b52c: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291568));
  fn1_1428f0(c);
  /* 13b530: cmp x21, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 25));
  /* 13b534: b.eq #0x13b5b0 */
  if (ARC_COND(c, 0)) goto L_13b5b0;
  /* 13b538: str x0, [x25], #8 */
  { const uint64_t _a = ARC_X_R(c, 25);
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 0));
  }
  /* 13b53c: str x25, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 25));
  /* 13b540: b #0x13b614 */
  goto L_13b614;
L_13b544:;
  /* 13b544: asr x9, x9, #2 */
  ARC_X_W(c, 9, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63))));
  /* 13b548: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 13b54c: str x8, [sp, #0x28] */
  arc_st64(((c)->sp + INT64_C(40)), ARC_X_R(c, 8));
  /* 13b550: csinc x9, x9, xzr, ne */
  ARC_X_W(c, 9, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 31)) + 1)));
  /* 13b554: lsr x10, x9, #0x3d */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(61)) & 63)));
  /* 13b558: cbnz x10, #0x13b884 */
  if ((ARC_X_R(c, 10)) != 0) goto L_13b884;
  /* 13b55c: lsl x24, x9, #3 */
  ARC_X_W(c, 24, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(3)) & 63)));
  /* 13b560: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13b564: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291624));
  fn1_1428f0(c);
  /* 13b568: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13b56c: add x21, x0, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 0) + ARC_X_R(c, 22)));
  /* 13b570: add x28, x0, x24 */
  ARC_X_W(c, 28, (ARC_X_R(c, 0) + ARC_X_R(c, 24)));
  /* 13b574: stp x0, x21, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13b578: stp x21, x28, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* 13b57c: mov w0, #0xfc0 */
  ARC_W_W(c, 0, UINT64_C(4032));
  /* 13b580: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291652));
  fn1_1428f0(c);
  /* 13b584: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 13b588: cmp x22, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 24));
  /* 13b58c: b.ne #0x13b5e4 */
  if (ARC_COND(c, 1)) goto L_13b5e4;
  /* 13b590: cmp x25, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 27));
  /* 13b594: b.eq #0x13b5c0 */
  if (ARC_COND(c, 0)) goto L_13b5c0;
  /* 13b598: asr x8, x22, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(3)) & 63))));
  /* 13b59c: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 13b5a0: add x8, x8, x8, lsr #63 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 8)) >> 63)));
  /* 13b5a4: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13b5a8: sub x21, x21, x8, lsl #3 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* 13b5ac: b #0x13b5e4 */
  goto L_13b5e4;
L_13b5b0:;
  /* 13b5b0: cmp x27, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 20));
  /* 13b5b4: b.eq #0x13b778 */
  if (ARC_COND(c, 0)) goto L_13b778;
  /* 13b5b8: mov x9, x27 */
  ARC_X_W(c, 9, ARC_X_R(c, 27));
  /* 13b5bc: b #0x13b86c */
  goto L_13b86c;
L_13b5c0:;
  /* 13b5c0: mov w0, #8 */
  ARC_W_W(c, 0, UINT64_C(8));
  /* 13b5c4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291720));
  fn1_1428f0(c);
  /* 13b5c8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 13b5cc: add x28, x0, #8 */
  ARC_X_W(c, 28, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* 13b5d0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13b5d4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 13b5d8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291740));
  fn1_142608(c);
  /* 13b5dc: ldp x27, x25, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 27, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13b5e0: mov x20, x21 */
  ARC_X_W(c, 20, ARC_X_R(c, 21));
L_13b5e4:;
  /* 13b5e4: mov x26, x21 */
  ARC_X_W(c, 26, ARC_X_R(c, 21));
  /* 13b5e8: cmp x25, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 27));
  /* 13b5ec: str x23, [x26], #8 */
  { const uint64_t _a = ARC_X_R(c, 26);
    ARC_X_W(c, 26, ARC_X_R(c, 26) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 23));
  }
  /* 13b5f0: b.ne #0x13b654 */
  if (ARC_COND(c, 1)) goto L_13b654;
  /* 13b5f4: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
L_13b5f8:;
  /* 13b5f8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* 13b5fc: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* 13b600: stp x20, x22, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 22));
  }
  /* 13b604: stp x26, x28, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* 13b608: cbz x0, #0x13b614 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13b614;
  /* 13b60c: sub x1, x8, x0 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* 13b610: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291796));
  fn1_142608(c);
L_13b614:;
  /* 13b614: ldp x20, x19, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13b618: ldp x22, x21, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13b61c: ldp x24, x23, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13b620: ldp x26, x25, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 13b624: ldp x28, x27, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 13b628: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13b62c: add sp, sp, #0x90 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(144)));
  /* 13b630: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13b634: ret  */
  return;
L_13b638:;
  /* 13b638: mov x22, x21 */
  ARC_X_W(c, 22, ARC_X_R(c, 21));
L_13b63c:;
  /* 13b63c: ldr x8, [x25, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 25) + INT64_C(-8));
    ARC_X_W(c, 25, ARC_X_R(c, 25) + INT64_C(-8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13b640: str x8, [x22, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 22) + INT64_C(-8));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(-8));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 13b644: mov x21, x22 */
  ARC_X_W(c, 21, ARC_X_R(c, 22));
  /* 13b648: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13b64c: cmp x25, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 13b650: b.eq #0x13b5f8 */
  if (ARC_COND(c, 0)) goto L_13b5f8;
L_13b654:;
  /* 13b654: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 13b658: b.ne #0x13b638 */
  if (ARC_COND(c, 1)) goto L_13b638;
  /* 13b65c: cmp x26, x28 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 28));
  /* 13b660: b.hs #0x13b6a0 */
  if (ARC_COND(c, 2)) goto L_13b6a0;
  /* 13b664: sub x8, x28, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) - ARC_X_R(c, 26)));
  /* 13b668: subs x9, x26, x21 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 21)));
  /* 13b66c: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 13b670: subs x2, x26, x21 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 21)));
  /* 13b674: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 13b678: add x8, x8, x8, lsr #63 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 8)) >> 63)));
  /* 13b67c: lsr x8, x8, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* 13b680: add x8, x26, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* 13b684: sub x22, x8, x9 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - ARC_X_R(c, 9)));
  /* 13b688: mov x26, x8 */
  ARC_X_W(c, 26, ARC_X_R(c, 8));
  /* 13b68c: b.eq #0x13b63c */
  if (ARC_COND(c, 0)) goto L_13b63c;
  /* 13b690: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13b694: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13b698: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291932));
  fn1_1449f0(c);
  /* 13b69c: b #0x13b63c */
  goto L_13b63c;
L_13b6a0:;
  /* 13b6a0: subs x23, x28, x21 */
  ARC_X_W(c, 23, arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 21)));
  /* 13b6a4: asr x8, x23, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 23)) >> ((UINT64_C(2)) & 63))));
  /* 13b6a8: csinc x27, x8, xzr, ne */
  ARC_X_W(c, 27, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 31)) + 1)));
  /* 13b6ac: lsr x8, x27, #0x3d */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 27)) >> ((UINT64_C(61)) & 63)));
  /* 13b6b0: cbnz x8, #0x13b878 */
  if ((ARC_X_R(c, 8)) != 0) goto L_13b878;
  /* 13b6b4: lsl x0, x27, #3 */
  ARC_X_W(c, 0, ((uint64_t)(ARC_X_R(c, 27)) << ((UINT64_C(3)) & 63)));
  /* 13b6b8: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1291964));
  fn1_1428f0(c);
  /* 13b6bc: add x8, x27, #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 27) + UINT64_C(3)));
  /* 13b6c0: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 13b6c4: subs x10, x26, x21 */
  ARC_X_W(c, 10, arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 21)));
  /* 13b6c8: lsr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63)));
  /* 13b6cc: add x22, x0, x8, lsl #3 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* 13b6d0: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 13b6d4: b.eq #0x13b714 */
  if (ARC_COND(c, 0)) goto L_13b714;
  /* 13b6d8: sub x9, x10, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - UINT64_C(8)));
  /* 13b6dc: add x26, x22, x10 */
  ARC_X_W(c, 26, (ARC_X_R(c, 22) + ARC_X_R(c, 10)));
  /* 13b6e0: cmp x9, #0x18 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(24));
  /* 13b6e4: b.lo #0x13b6fc */
  if (ARC_COND(c, 3)) goto L_13b6fc;
  /* 13b6e8: lsl x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 13b6ec: add x10, x8, x24 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 24)));
  /* 13b6f0: sub x10, x10, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 21)));
  /* 13b6f4: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 13b6f8: b.hs #0x13b72c */
  if (ARC_COND(c, 2)) goto L_13b72c;
L_13b6fc:;
  /* 13b6fc: mov x8, x22 */
  ARC_X_W(c, 8, ARC_X_R(c, 22));
  /* 13b700: mov x9, x21 */
  ARC_X_W(c, 9, ARC_X_R(c, 21));
L_13b704:;
  /* 13b704: ldr x10, [x9], #8 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* 13b708: str x10, [x8], #8 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 10));
  }
  /* 13b70c: cmp x8, x26 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 26));
  /* 13b710: b.ne #0x13b704 */
  if (ARC_COND(c, 1)) goto L_13b704;
L_13b714:;
  /* 13b714: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13b718: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 13b71c: add x28, x24, x27, lsl #3 */
  ARC_X_W(c, 28, (ARC_X_R(c, 24) + ((uint64_t)(ARC_X_R(c, 27)) << 3)));
  /* 13b720: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292068));
  fn1_142608(c);
  /* 13b724: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* 13b728: b #0x13b63c */
  goto L_13b63c;
L_13b72c:;
  /* 13b72c: lsr x9, x9, #3 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63)));
  /* 13b730: add x13, x24, x8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* 13b734: add x12, x21, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 21) + UINT64_C(16)));
  /* 13b738: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* 13b73c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 13b740: and x11, x10, #0x3ffffffffffffffc */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(4611686018427387900)));
  /* 13b744: lsl x9, x11, #3 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(3)) & 63)));
  /* 13b748: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* 13b74c: add x8, x22, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 9)));
  /* 13b750: add x9, x21, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 9)));
L_13b754:;
  /* 13b754: ldp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 13b758: subs x14, x14, #4 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(4)));
  /* 13b75c: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 13b760: stp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 13b764: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 13b768: b.ne #0x13b754 */
  if (ARC_COND(c, 1)) goto L_13b754;
  /* 13b76c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 13b770: b.ne #0x13b704 */
  if (ARC_COND(c, 1)) goto L_13b704;
  /* 13b774: b #0x13b714 */
  goto L_13b714;
L_13b778:;
  /* 13b778: sub x21, x21, x27 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - ARC_X_R(c, 27)));
  /* 13b77c: cmp x25, x27 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 27));
  /* 13b780: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* 13b784: csinc x8, x8, xzr, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 31)) + 1)));
  /* 13b788: lsr x9, x8, #0x3d */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(61)) & 63)));
  /* 13b78c: cbnz x9, #0x13b884 */
  if ((ARC_X_R(c, 9)) != 0) goto L_13b884;
  /* 13b790: lsl x23, x8, #3 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(3)) & 63)));
  /* 13b794: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 13b798: add x9, x8, #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(3)));
  /* 13b79c: lsr x26, x9, #2 */
  ARC_X_W(c, 26, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(2)) & 63)));
  /* 13b7a0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 13b7a4: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292200));
  fn1_1428f0(c);
  /* 13b7a8: add x9, x0, x26, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 26)) << 3)));
  /* 13b7ac: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* 13b7b0: subs x12, x25, x27 */
  ARC_X_W(c, 12, arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 27)));
  /* 13b7b4: add x10, x0, x23 */
  ARC_X_W(c, 10, (ARC_X_R(c, 0) + ARC_X_R(c, 23)));
  /* 13b7b8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 13b7bc: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* 13b7c0: b.eq #0x13b84c */
  if (ARC_COND(c, 0)) goto L_13b84c;
  /* 13b7c4: sub x14, x12, #8 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* 13b7c8: add x11, x9, x22 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + ARC_X_R(c, 22)));
  /* 13b7cc: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* 13b7d0: cmp x14, #0x38 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(56));
  /* 13b7d4: mov x13, x27 */
  ARC_X_W(c, 13, ARC_X_R(c, 27));
  /* 13b7d8: b.lo #0x13b83c */
  if (ARC_COND(c, 3)) goto L_13b83c;
  /* 13b7dc: lsl x12, x26, #3 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 26)) << ((UINT64_C(3)) & 63)));
  /* 13b7e0: mov x13, x27 */
  ARC_X_W(c, 13, ARC_X_R(c, 27));
  /* 13b7e4: add x17, x12, x8 */
  ARC_X_W(c, 17, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 13b7e8: sub x12, x17, x27 */
  ARC_X_W(c, 12, (ARC_X_R(c, 17) - ARC_X_R(c, 27)));
  /* 13b7ec: cmp x12, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(32));
  /* 13b7f0: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* 13b7f4: b.lo #0x13b83c */
  if (ARC_COND(c, 3)) goto L_13b83c;
  /* 13b7f8: lsr x12, x14, #3 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(3)) & 63)));
  /* 13b7fc: add x16, x27, #0x10 */
  ARC_X_W(c, 16, (ARC_X_R(c, 27) + UINT64_C(16)));
  /* 13b800: add x17, x17, #0x10 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(16)));
  /* 13b804: add x14, x12, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) + UINT64_C(1)));
  /* 13b808: and x15, x14, #0x3ffffffffffffffc */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) & UINT64_C(4611686018427387900)));
  /* 13b80c: lsl x13, x15, #3 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 15)) << ((UINT64_C(3)) & 63)));
  /* 13b810: mov x1, x15 */
  ARC_X_W(c, 1, ARC_X_R(c, 15));
  /* 13b814: add x12, x9, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) + ARC_X_R(c, 13)));
  /* 13b818: add x13, x27, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 27) + ARC_X_R(c, 13)));
L_13b81c:;
  /* 13b81c: ldp q0, q1, [x16, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 16) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 13b820: subs x1, x1, #4 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 1), UINT64_C(4)));
  /* 13b824: add x16, x16, #0x20 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(32)));
  /* 13b828: stp q0, q1, [x17, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 17) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 13b82c: add x17, x17, #0x20 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(32)));
  /* 13b830: b.ne #0x13b81c */
  if (ARC_COND(c, 1)) goto L_13b81c;
  /* 13b834: cmp x14, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* 13b838: b.eq #0x13b84c */
  if (ARC_COND(c, 0)) goto L_13b84c;
L_13b83c:;
  /* 13b83c: ldr x14, [x13], #8 */
  { const uint64_t _a = ARC_X_R(c, 13);
    ARC_X_W(c, 13, ARC_X_R(c, 13) + INT64_C(8));
    ARC_X_W(c, 14, arc_ld64(_a));
  }
  /* 13b840: str x14, [x12], #8 */
  { const uint64_t _a = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 14));
  }
  /* 13b844: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* 13b848: b.ne #0x13b83c */
  if (ARC_COND(c, 1)) goto L_13b83c;
L_13b84c:;
  /* 13b84c: stp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13b850: stp x11, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* 13b854: cbz x27, #0x13b86c */
  if ((ARC_X_R(c, 27)) == 0) goto L_13b86c;
  /* 13b858: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13b85c: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 13b860: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292388));
  fn1_142608(c);
  /* 13b864: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13b868: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
L_13b86c:;
  /* 13b86c: stur x0, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 0));
  /* 13b870: str x0, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 0));
  /* 13b874: b #0x13b4f4 */
  goto L_13b4f4;
L_13b878:;
  /* 13b878: stp x20, x21, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13b87c: stp x26, x28, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
  /* 13b880: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292420));
  fn1_d9fe8(c);
L_13b884:;
  /* 13b884: bl #0xd9fe8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292424));
  fn1_d9fe8(c);
  /* 13b888: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b88c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 13b890: mov w1, #0xfc0 */
  ARC_W_W(c, 1, UINT64_C(4032));
  /* 13b894: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292440));
  fn1_142608(c);
  /* 13b898: b #0x13b8b8 */
  goto L_13b8b8;
  /* 13b89c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b8a0: b #0x13b8b8 */
  goto L_13b8b8;
  /* 13b8a4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b8a8: b #0x13b8b8 */
  goto L_13b8b8;
  /* 13b8ac: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b8b0: stp x20, x21, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13b8b4: stp x26, x28, [sp, #0x18] */
  { const uint64_t _pa = ((c)->sp + INT64_C(24));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 28));
  }
L_13b8b8:;
  /* 13b8b8: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13b8bc: bl #0x13ba50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292480));
  fn1_13ba50(c);
  /* 13b8c0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b8c4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1292488));
  fn1_9cc20(c);
}

void fn1_142428(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039247912));
  /* 142428: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14242c: ldr x17, [x16, #0xe98] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3736))));
  /* 142430: add x16, x16, #0xe98 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3736)));
  /* 142434: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142438: nop  */
  /* nop: no architectural effect here */
  /* 14243c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142a28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249448));
  /* 142a28: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142a2c: ldr x17, [x16, #0x98] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(152))));
  /* 142a30: add x16, x16, #0x98 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(152)));
  /* 142a34: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142a38: nop  */
  /* nop: no architectural effect here */
  /* 142a3c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143028(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250984));
  /* 143028: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14302c: ldr x17, [x16, #0x298] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(664))));
  /* 143030: add x16, x16, #0x298 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(664)));
  /* 143034: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143038: nop  */
  /* nop: no architectural effect here */
  /* 14303c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143628(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252520));
  /* 143628: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14362c: ldr x17, [x16, #0x498] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1176))));
  /* 143630: add x16, x16, #0x498 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1176)));
  /* 143634: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143638: nop  */
  /* nop: no architectural effect here */
  /* 14363c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143c28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254056));
  /* 143c28: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143c2c: ldr x17, [x16, #0x698] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1688))));
  /* 143c30: add x16, x16, #0x698 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1688)));
  /* 143c34: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143c38: nop  */
  /* nop: no architectural effect here */
  /* 143c3c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144228(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255592));
  /* 144228: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14422c: ldr x17, [x16, #0x898] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2200))));
  /* 144230: add x16, x16, #0x898 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2200)));
  /* 144234: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144238: nop  */
  /* nop: no architectural effect here */
  /* 14423c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144828(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257128));
  /* 144828: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14482c: ldr x17, [x16, #0xa98] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2712))));
  /* 144830: add x16, x16, #0xa98 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2712)));
  /* 144834: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144838: nop  */
  /* nop: no architectural effect here */
  /* 14483c: nop  */
  /* nop: no architectural effect here */
}

