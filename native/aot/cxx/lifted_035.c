#include "lifted.h"

void fn1_9d7fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038573052));
  /* 9d7fc: bti c */
  /* bti: no architectural effect here */
  /* 9d800: ldrb w8, [x0, #0x268] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(616))));
  /* 9d804: tbz w8, #0, #0x9d810 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_9d810;
  /* 9d808: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 9d80c: ret  */
  return;
L_9d810:;
  /* 9d810: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9d814: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9d818: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 9d81c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 9d820: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 9d824: ldrb w8, [x0, #0x26a] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(618))));
  /* 9d828: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 9d82c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 9d830: b.ne #0x9d880 */
  if (ARC_COND(c, 1)) goto L_9d880;
  /* 9d834: ldr x8, [x19, #0x108] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(264))));
  /* 9d838: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 9d83c: add x10, x19, #0x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 9d840: add x11, x8, #0x138 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) + UINT64_C(312)));
  /* 9d844: b #0x9d85c */
  goto L_9d85c;
L_9d848:;
  /* 9d848: str x12, [x19, #0x100] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(256)), ARC_X_R(c, 12));
L_9d84c:;
  /* 9d84c: add x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 9d850: add x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(8)));
  /* 9d854: cmp x9, #0x1f */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(31));
  /* 9d858: b.eq #0x9d8d0 */
  if (ARC_COND(c, 0)) goto L_9d8d0;
L_9d85c:;
  /* 9d85c: ldr x12, [x11] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 11)));
  /* 9d860: cmp w9, #0x1e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(30));
  /* 9d864: b.eq #0x9d848 */
  if (ARC_COND(c, 0)) goto L_9d848;
  /* 9d868: cmp w9, #0x1d */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(29));
  /* 9d86c: b.ne #0x9d878 */
  if (ARC_COND(c, 1)) goto L_9d878;
  /* 9d870: str x12, [x19, #0xf8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(248)), ARC_X_R(c, 12));
  /* 9d874: b #0x9d84c */
  goto L_9d84c;
L_9d878:;
  /* 9d878: str x12, [x10, x9, lsl #3] */
  arc_st64((ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 9)) << 3)), ARC_X_R(c, 12));
  /* 9d87c: b #0x9d84c */
  goto L_9d84c;
L_9d880:;
  /* 9d880: ldp x8, x20, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 20, arc_ld64(_pa + 8));
  }
  /* 9d884: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9d888: mov w21, w1 */
  ARC_W_W(c, 21, ARC_W_R(c, 1));
  /* 9d88c: mov w1, #-1 */
  ARC_W_W(c, 1, UINT64_C(18446744073709551615));
  /* 9d890: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 9d894: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645272));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d898: ldr x2, [x19, #0x258] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 19) + INT64_C(600))));
  /* 9d89c: mov x1, x0 */
  ARC_X_W(c, 1, ARC_X_R(c, 0));
  /* 9d8a0: add x3, x19, #0x10 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + UINT64_C(16)));
  /* 9d8a4: add x4, x19, #0x269 */
  ARC_X_W(c, 4, (ARC_X_R(c, 19) + UINT64_C(617)));
  /* 9d8a8: and w5, w21, #1 */
  ARC_W_W(c, 5, (ARC_W_R(c, 21) & UINT64_C(1)));
  /* 9d8ac: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 9d8b0: bl #0x9dc00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645300));
  fn1_9dc00(c);
  /* 9d8b4: cmp w0, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(1));
  /* 9d8b8: b.eq #0x9d8e8 */
  if (ARC_COND(c, 0)) goto L_9d8e8;
  /* 9d8bc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9d8c0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9d8c4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d8c8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9d8cc: ret  */
  return;
L_9d8d0:;
  /* 9d8d0: ldr x9, [x8, #0x230] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(560))));
  /* 9d8d4: str x9, [x19, #0x108] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(264)), ARC_X_R(c, 9));
  /* 9d8d8: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 9d8dc: ldr x8, [x8, #0x238] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(568))));
  /* 9d8e0: strb w9, [x19, #0x269] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(617)), ARC_W_R(c, 9));
  /* 9d8e4: str x8, [x19, #0x110] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(272)), ARC_X_R(c, 8));
L_9d8e8:;
  /* 9d8e8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 9d8ec: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 9d8f0: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* 9d8f4: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 9d8f8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(645372));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 9d8fc: ldrb w8, [x19, #0x268] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(616))));
  /* 9d900: eor w0, w8, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) ^ UINT64_C(1)));
  /* 9d904: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 9d908: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* 9d90c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9d910: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9d914: ret  */
  return;
}

void fn1_a1eec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038591212));
  /* a1eec: bti c */
  /* bti: no architectural effect here */
  /* a1ef0: ret  */
  return;
}

void fn1_a337c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038596476));
  /* a337c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a3380: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a3384: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a3388: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a338c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a3390: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3394: ldr x21, [x1, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 1) + INT64_C(8))));
  /* a3398: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a339c: ldr x8, [x8, #0x9e0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2528))));
  /* a33a0: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* a33a4: b.eq #0xa33d8 */
  if (ARC_COND(c, 0)) goto L_a33d8;
  /* a33a8: ldr w22, [x19, #0x10] */
  ARC_W_W(c, 22, arc_ld32((ARC_X_R(c, 19) + INT64_C(16))));
  /* a33ac: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a33b0: tst w22, #0x18 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 22) & UINT64_C(24)));
  /* a33b4: b.eq #0xa3414 */
  if (ARC_COND(c, 0)) goto L_a3414;
L_a33b8:;
  /* a33b8: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* a33bc: b.eq #0xa33d0 */
  if (ARC_COND(c, 0)) goto L_a33d0;
  /* a33c0: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a33c4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* a33c8: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668620));
  fn1_142848(c);
  /* a33cc: cbnz w0, #0xa344c */
  if ((ARC_W_R(c, 0)) != 0) goto L_a344c;
L_a33d0:;
  /* a33d0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* a33d4: b #0xa34b8 */
  goto L_a34b8;
L_a33d8:;
  /* a33d8: ldr x0, [x19, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* a33dc: cbz x0, #0xa34a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a34a8;
  /* a33e0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a33e4: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a33e8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* a33ec: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a33f0: ldr x8, [x8, #0x9c8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2504))));
  /* a33f4: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a33f8: mov x2, x8 */
  ARC_X_W(c, 2, ARC_X_R(c, 8));
  /* a33fc: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668672));
  fn1_142830(c);
  /* a3400: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* a3404: cbz x0, #0xa34a8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a34a8;
  /* a3408: nop  */
  /* nop: no architectural effect here */
  /* a340c: adr x8, #0x52f90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339856)));
  /* a3410: b #0xa34b0 */
  goto L_a34b0;
L_a3414:;
  /* a3414: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3418: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a341c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a3420: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a3424: ldr x2, [x2, #0x9b8] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2488))));
  /* a3428: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a342c: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668720));
  fn1_142830(c);
  /* a3430: cbz x0, #0xa344c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a344c;
  /* a3434: ldrb w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(16))));
  /* a3438: tst w8, #0x18 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(24)));
  /* a343c: b.ne #0xa33b8 */
  if (ARC_COND(c, 1)) goto L_a33b8;
  /* a3440: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* a3444: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* a3448: b.eq #0xa33d0 */
  if (ARC_COND(c, 0)) goto L_a33d0;
L_a344c:;
  /* a344c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3450: adrp x2, #0x151000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a3454: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* a3458: ldr x1, [x1, #0x9a8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2472))));
  /* a345c: ldr x2, [x2, #0x9d0] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 2) + INT64_C(2512))));
  /* a3460: mov x3, xzr */
  ARC_X_W(c, 3, ARC_X_R(c, 31));
  /* a3464: bl #0x142830 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(668776));
  fn1_142830(c);
  /* a3468: cbz x0, #0xa34b8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a34b8;
  /* a346c: ldr w8, [x0, #0x10] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(16))));
  /* a3470: bic w9, w8, w22 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & (~ARC_W_R(c, 22))));
  /* a3474: tst w9, #7 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(7)));
  /* a3478: b.ne #0xa34a0 */
  if (ARC_COND(c, 1)) goto L_a34a0;
  /* a347c: bic w8, w22, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 22) & (~ARC_W_R(c, 8))));
  /* a3480: tst w8, #0x60 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(96)));
  /* a3484: b.ne #0xa34a0 */
  if (ARC_COND(c, 1)) goto L_a34a0;
  /* a3488: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* a348c: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* a3490: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a3494: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* a3498: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a349c: b.eq #0xa34cc */
  if (ARC_COND(c, 0)) goto L_a34cc;
L_a34a0:;
  /* a34a0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a34a4: b #0xa34b8 */
  goto L_a34b8;
L_a34a8:;
  /* a34a8: nop  */
  /* nop: no architectural effect here */
  /* a34ac: adr x8, #0x52fa0 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(339872)));
L_a34b0:;
  /* a34b0: str x8, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* a34b4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_a34b8:;
  /* a34b8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a34bc: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a34c0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a34c4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a34c8: ret  */
  return;
L_a34cc:;
  /* a34cc: ldr x8, [x19, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* a34d0: ldr x9, [x0, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(32))));
  /* a34d4: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* a34d8: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* a34dc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a34e0: cset w0, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? 1 : 0));
  /* a34e4: b #0xa34b8 */
  goto L_a34b8;
}

void fn1_aa494(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038625428));
  /* aa494: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* aa498: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* aa49c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* aa4a0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* aa4a4: ldrb w19, [x0, #0x20] */
  ARC_W_W(c, 19, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* aa4a8: tbz w19, #0, #0xaa4b4 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_aa4b4;
  /* aa4ac: mov w8, wzr */
  ARC_W_W(c, 8, ARC_W_R(c, 31));
  /* aa4b0: b #0xaa4fc */
  goto L_aa4fc;
L_aa4b4:;
  /* aa4b4: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* aa4b8: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* aa4bc: strb w9, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 9));
  /* aa4c0: ldrb w9, [x8, #0xa] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(10))));
  /* aa4c4: and w9, w9, #3 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(3)));
  /* aa4c8: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* aa4cc: b.ne #0xaa4f0 */
  if (ARC_COND(c, 1)) goto L_aa4f0;
  /* aa4d0: ldr x9, [x8] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 8)));
  /* aa4d4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* aa4d8: ldr x9, [x9, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* aa4dc: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* aa4e0: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697572));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* aa4e4: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* aa4e8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* aa4ec: b #0xaa4f8 */
  goto L_aa4f8;
L_aa4f0:;
  /* aa4f0: cmp w9, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(0));
  /* aa4f4: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
L_aa4f8:;
  /* aa4f8: strb w19, [x0, #0x20] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(32)), ARC_W_R(c, 19));
L_aa4fc:;
  /* aa4fc: and w0, w8, #1 */
  ARC_W_W(c, 0, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* aa500: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* aa504: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* aa508: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* aa50c: ret  */
  return;
  /* aa510: strb w19, [x20, #0x20] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(32)), ARC_W_R(c, 19));
  /* aa514: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(697624));
  fn1_9cc20(c);
}

void fn1_b1790(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038654864));
  /* b1790: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b1794: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b1798: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* b179c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b17a0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b17a4: ldr x22, [x0, #0x1330] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b17a8: mov x19, x2 */
  ARC_X_W(c, 19, ARC_X_R(c, 2));
  /* b17ac: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* b17b0: ldr x8, [x22, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(8))));
  /* b17b4: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* b17b8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b17bc: b.hi #0xb17e0 */
  if (ARC_COND(c, 8)) goto L_b17e0;
  /* b17c0: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b17c4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b17c8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(726988));
  fn1_1428a8(c);
  /* b17cc: cbz x0, #0xb1838 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b1838;
  /* b17d0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b17d4: stp x22, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b17d8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* b17dc: str x0, [x21, #0x1330] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(4912)), ARC_X_R(c, 0));
L_b17e0:;
  /* b17e0: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* b17e4: add x0, x22, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* b17e8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* b17ec: str x9, [x22, #8] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(8)), ARC_X_R(c, 9));
  /* b17f0: adrp x9, #0x14a000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1351680)));
  /* b17f4: add x9, x9, #0xe10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3600)));
  /* b17f8: mov w10, #0x4c */
  ARC_W_W(c, 10, UINT64_C(76));
  /* b17fc: str x9, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b1800: ldurh w9, [x0, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* b1804: strb w10, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 10));
  /* b1808: mov w10, #0x540 */
  ARC_W_W(c, 10, UINT64_C(1344));
  /* b180c: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* b1810: and w8, w9, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* b1814: ldr q0, [x19] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 19)), arc_ld64(ARC_X_R(c, 19) + 8));
  /* b1818: orr w8, w8, w10 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 10)));
  /* b181c: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* b1820: stur q0, [x0, #0x18] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(24)) + 8, (c)->q[0].u64[1]);
  /* b1824: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b1828: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* b182c: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b1830: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b1834: ret  */
  return;
L_b1838:;
  /* b1838: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(727100));
  fn1_142488(c);
}

void fn1_b5a00(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038671872));
  /* b5a00: bti c */
  /* bti: no architectural effect here */
  /* b5a04: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b5a08: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b8410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038682640));
  /* b8410: bti c */
  /* bti: no architectural effect here */
  /* b8414: mov w1, #0x28 */
  ARC_W_W(c, 1, UINT64_C(40));
  /* b8418: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bb7c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038695880));
  /* bb7c8: bti c */
  /* bti: no architectural effect here */
  /* bb7cc: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* bb7d0: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_bdedc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038705884));
  /* bdedc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* bdee0: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* bdee4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* bdee8: nop  */
  /* nop: no architectural effect here */
  /* bdeec: adr x0, #0x156bb8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1403832)));
  /* bdef0: bl #0x144ac8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(777972));
  fn1_144ac8(c);
  /* bdef4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* bdef8: cbz x8, #0xbdf20 */
  if ((ARC_X_R(c, 8)) == 0) goto L_bdf20;
  /* bdefc: mov x10, #0x2b2b */
  ARC_X_W(c, 10, UINT64_C(11051));
  /* bdf00: ldr x9, [x8, #0x60] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* bdf04: movk x10, #0x4743, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1195573248)));
  /* bdf08: movk x10, #0x4c4e, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(83897891160064)));
  /* bdf0c: movk x10, #0x43, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(18858823439613952)));
  /* bdf10: cmp x10, x9, lsr #8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ((uint64_t)(ARC_X_R(c, 9)) >> 8));
  /* bdf14: b.ne #0xbdf20 */
  if (ARC_COND(c, 1)) goto L_bdf20;
  /* bdf18: ldr x0, [x8, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* bdf1c: b #0xbdf24 */
  goto L_bdf24;
L_bdf20:;
  /* bdf20: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_bdf24:;
  /* bdf24: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* bdf28: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* bdf2c: ret  */
  return;
}

void fn1_d293c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038790460));
  /* d293c: bti c */
  /* bti: no architectural effect here */
  /* d2940: nop  */
  /* nop: no architectural effect here */
  /* d2944: adr x0, #0x5080d */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(329741)));
  /* d2948: ret  */
  return;
}

void fn1_d8014(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038812692));
  /* d8014: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d8018: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* d801c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d8020: str x25, [sp, #0x30] */
  arc_st64(((c)->sp + INT64_C(48)), ARC_X_R(c, 25));
  /* d8024: stp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* d8028: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* d802c: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* d8030: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* d8034: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* d8038: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d803c: bl #0x142b30 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(884800));
  fn1_142b30(c);
  /* d8040: cbz x1, #0xd80ac */
  if ((ARC_X_R(c, 1)) == 0) goto L_d80ac;
  /* d8044: cmp x1, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(2));
  /* d8048: b.eq #0xd8064 */
  if (ARC_COND(c, 0)) goto L_d8064;
  /* d804c: cmp x1, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(1));
  /* d8050: b.ne #0xd8074 */
  if (ARC_COND(c, 1)) goto L_d8074;
  /* d8054: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* d8058: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* d805c: b.ne #0xd8074 */
  if (ARC_COND(c, 1)) goto L_d8074;
  /* d8060: b #0xd80ac */
  goto L_d80ac;
L_d8064:;
  /* d8064: ldrh w8, [x0] */
  ARC_W_W(c, 8, arc_ld16(ARC_X_R(c, 0)));
  /* d8068: mov w9, #0x2e2e */
  ARC_W_W(c, 9, UINT64_C(11822));
  /* d806c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* d8070: b.eq #0xd80ac */
  if (ARC_COND(c, 0)) goto L_d80ac;
L_d8074:;
  /* d8074: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* d8078: add x25, x0, x1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + ARC_X_R(c, 1)));
  /* d807c: neg x8, x1 */
  ARC_X_W(c, 8, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 1))));
L_d8080:;
  /* d8080: cmp x8, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 24));
  /* d8084: b.eq #0xd80ac */
  if (ARC_COND(c, 0)) goto L_d80ac;
  /* d8088: add x9, x25, x24 */
  ARC_X_W(c, 9, (ARC_X_R(c, 25) + ARC_X_R(c, 24)));
  /* d808c: sub x24, x24, #1 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) - UINT64_C(1)));
  /* d8090: ldurb w9, [x9, #-1] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 9) + INT64_C(-1))));
  /* d8094: cmp w9, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(46));
  /* d8098: b.ne #0xd8080 */
  if (ARC_COND(c, 1)) goto L_d8080;
  /* d809c: add x8, x1, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 1) + ARC_X_R(c, 24)));
  /* d80a0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* d80a4: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* d80a8: b.hs #0xd8190 */
  if (ARC_COND(c, 2)) goto L_d8190;
L_d80ac:;
  /* d80ac: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* d80b0: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* d80b4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* d80b8: orr x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) | UINT64_C(1)));
L_d80bc:;
  /* d80bc: strb wzr, [x22, x21] */
  arc_st8((ARC_X_R(c, 22) + ARC_X_R(c, 21)), ARC_W_R(c, 31));
  /* d80c0: ldp x22, x8, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* d80c4: ldr x21, [sp, #0x18] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(24))));
  /* d80c8: ubfx x9, x22, #1, #7 */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 22)) >> 1) & UINT64_C(127)));
  /* d80cc: tst x22, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 22) & UINT64_C(1)));
  /* d80d0: csel x8, x9, x8, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* d80d4: cbz x8, #0xd8114 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d8114;
  /* d80d8: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* d80dc: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* d80e0: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* d80e4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* d80e8: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* d80ec: subs x8, x10, x8 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8)));
  /* d80f0: b.lo #0xd8204 */
  if (ARC_COND(c, 3)) goto L_d8204;
  /* d80f4: tbnz w9, #0, #0xd8108 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_d8108;
  /* d80f8: lsl w10, w8, #1 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* d80fc: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
  /* d8100: strb w10, [x9], #1 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 10));
  }
  /* d8104: b #0xd8110 */
  goto L_d8110;
L_d8108:;
  /* d8108: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* d810c: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_d8110:;
  /* d8110: strb wzr, [x9, x8] */
  arc_st8((ARC_X_R(c, 9) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_d8114:;
  /* d8114: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* d8118: ldr x9, [x20, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* d811c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* d8120: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* d8124: csel x8, x10, x9, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* d8128: cbz x8, #0xd815c */
  if ((ARC_X_R(c, 8)) == 0) goto L_d815c;
  /* d812c: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* d8130: csinc x8, x8, x20, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : ((ARC_X_R(c, 20)) + 1)));
  /* d8134: ldrb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* d8138: cmp w8, #0x2e */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(46));
  /* d813c: b.eq #0xd8150 */
  if (ARC_COND(c, 0)) goto L_d8150;
  /* d8140: nop  */
  /* nop: no architectural effect here */
  /* d8144: adr x1, #0x501d9 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(328153)));
  /* d8148: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d814c: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885072));
  fn1_142b78(c);
L_d8150:;
  /* d8150: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d8154: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* d8158: bl #0xd8234 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885084));
  fn1_d8234(c);
L_d815c:;
  /* d815c: tbz w22, #0, #0xd816c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_d816c;
  /* d8160: and x1, x22, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) & UINT64_C(18446744073709551614)));
  /* d8164: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d8168: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885100));
  fn1_142608(c);
L_d816c:;
  /* d816c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d8170: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* d8174: ldr x25, [sp, #0x30] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(48))));
  /* d8178: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* d817c: ldp x24, x23, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* d8180: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d8184: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* d8188: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* d818c: ret  */
  return;
L_d8190:;
  /* d8190: cmp x8, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 1));
  /* d8194: b.hi #0xd8208 */
  if (ARC_COND(c, 8)) goto L_d8208;
  /* d8198: neg x21, x24 */
  ARC_X_W(c, 21, ((uint64_t)0 - (uint64_t)(ARC_X_R(c, 24))));
  /* d819c: cmn x21, #8 */
  (void)arc_add64(c, ARC_X_R(c, 21), UINT64_C(8), 0);
  /* d81a0: b.hs #0xd8214 */
  if (ARC_COND(c, 2)) goto L_d8214;
  /* d81a4: cmp x21, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 21), UINT64_C(23));
  /* d81a8: b.hs #0xd81c8 */
  if (ARC_COND(c, 2)) goto L_d81c8;
  /* d81ac: lsl w8, w21, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 21)) << ((UINT64_C(1)) & 31)));
  /* d81b0: add x9, sp, #8 */
  ARC_X_W(c, 9, ((c)->sp + UINT64_C(8)));
  /* d81b4: orr x22, x9, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* d81b8: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* d81bc: cbnz x24, #0xd81f0 */
  if ((ARC_X_R(c, 24)) != 0) goto L_d81f0;
  /* d81c0: mov x21, xzr */
  ARC_X_W(c, 21, ARC_X_R(c, 31));
  /* d81c4: b #0xd80bc */
  goto L_d80bc;
L_d81c8:;
  /* d81c8: orr x8, x21, #7 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) | UINT64_C(7)));
  /* d81cc: mov w9, #0x1a */
  ARC_W_W(c, 9, UINT64_C(26));
  /* d81d0: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* d81d4: csinc x23, x9, x8, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* d81d8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* d81dc: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885216));
  fn1_1428f0(c);
  /* d81e0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* d81e4: orr x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) | UINT64_C(1)));
  /* d81e8: stp x21, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* d81ec: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
L_d81f0:;
  /* d81f0: add x1, x25, x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + ARC_X_R(c, 24)));
  /* d81f4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* d81f8: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* d81fc: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885248));
  fn1_1449f0(c);
  /* d8200: b #0xd80bc */
  goto L_d80bc;
L_d8204:;
  /* d8204: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885256));
  fn1_da020(c);
L_d8208:;
  /* d8208: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* d820c: add x0, x0, #0xc97 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3223)));
  /* d8210: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885268));
  fn1_da038(c);
L_d8214:;
  /* d8214: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885272));
  fn1_d7d54(c);
  /* d8218: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* d821c: tbz w22, #0, #0xd822c */
  if (((ARC_W_R(c, 22)) >> 0 & 1) == 0) goto L_d822c;
  /* d8220: and x1, x22, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) & UINT64_C(18446744073709551614)));
  /* d8224: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* d8228: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885292));
  fn1_142608(c);
L_d822c:;
  /* d822c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* d8230: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(885300));
  fn1_9cc20(c);
}

void fn1_db978(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038827384));
  /* db978: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db97c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db980: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* db984: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* db988: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* db98c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db990: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* db994: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* db998: cbz x8, #0xdb9cc */
  if ((ARC_X_R(c, 8)) == 0) goto L_db9cc;
  /* db99c: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_db9a0:;
  /* db9a0: ldp x21, x1, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    ARC_X_W(c, 21, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* db9a4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* db9a8: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* db9ac: ldr x3, [x8, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* db9b0: ldr x9, [x9, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* db9b4: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* db9b8: add x2, x8, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* db9bc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(899520));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* db9c0: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* db9c4: str x21, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 21));
  /* db9c8: cbnz x21, #0xdb9a0 */
  if ((ARC_X_R(c, 21)) != 0) goto L_db9a0;
L_db9cc:;
  /* db9cc: ldr x1, [x19, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* db9d0: cbz x1, #0xdba64 */
  if ((ARC_X_R(c, 1)) == 0) goto L_dba64;
  /* db9d4: ldr w21, [x19, #0x20] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* db9d8: cmp w21, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 21), UINT64_C(1));
  /* db9dc: b.lt #0xdba48 */
  if (ARC_COND(c, 11)) goto L_dba48;
  /* db9e0: mov x22, xzr */
  ARC_X_W(c, 22, ARC_X_R(c, 31));
  /* db9e4: b #0xdb9f4 */
  goto L_db9f4;
L_db9e8:;
  /* db9e8: add x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* db9ec: cmp x22, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 21));
  /* db9f0: b.eq #0xdba3c */
  if (ARC_COND(c, 0)) goto L_dba3c;
L_db9f4:;
  /* db9f4: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* db9f8: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* db9fc: add x23, x8, x22, lsl #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 4)));
  /* dba00: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* dba04: str xzr, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 31));
  /* dba08: cbz x8, #0xdb9e8 */
  if ((ARC_X_R(c, 8)) == 0) goto L_db9e8;
L_dba0c:;
  /* dba0c: ldp x24, x1, [x8] */
  { const uint64_t _pa = ARC_X_R(c, 8);
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* dba10: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* dba14: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* dba18: ldr x3, [x8, #0x10] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* dba1c: ldr x9, [x9, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(24))));
  /* dba20: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* dba24: add x2, x8, #0x18 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* dba28: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(899628));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* dba2c: mov x8, x24 */
  ARC_X_W(c, 8, ARC_X_R(c, 24));
  /* dba30: str x24, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 24));
  /* dba34: cbnz x24, #0xdba0c */
  if ((ARC_X_R(c, 24)) != 0) goto L_dba0c;
  /* dba38: b #0xdb9e8 */
  goto L_db9e8;
L_dba3c:;
  /* dba3c: ldr x1, [x19, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* dba40: ldr w21, [x19, #0x20] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* dba44: b #0xdba48 */
  goto L_dba48;
L_dba48:;
  /* dba48: ldr x0, [x19, #8] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* dba4c: sbfiz x2, x21, #4, #0x20 */
  ARC_X_W(c, 2, ((uint64_t)(arc_sext64((((uint64_t)(ARC_X_R(c, 21))) & UINT64_C(4294967295)), 32)) << 4));
  /* dba50: mov w3, #8 */
  ARC_W_W(c, 3, UINT64_C(8));
  /* dba54: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* dba58: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* dba5c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(899680));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* dba60: str xzr, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 31));
L_dba64:;
  /* dba64: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* dba68: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* dba6c: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* dba70: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* dba74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* dba78: ret  */
  return;
}

void fn1_e0214(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038845972));
  /* e0214: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e0218: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e021c: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* e0220: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e0224: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e0228: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e022c: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e0230: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e0234: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e0238: ldr x9, [x0, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e023c: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e0240: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e0244: csel x26, x10, x9, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e0248: cmp x26, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 1));
  /* e024c: b.lo #0xe03c0 */
  if (ARC_COND(c, 3)) goto L_e03c0;
  /* e0250: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e0254: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* e0258: cbz x2, #0xe039c */
  if ((ARC_X_R(c, 2)) == 0) goto L_e039c;
  /* e025c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* e0260: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e0264: mov w8, #0x16 */
  ARC_W_W(c, 8, UINT64_C(22));
  /* e0268: mov w20, w3 */
  ARC_W_W(c, 20, ARC_W_R(c, 3));
  /* e026c: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* e0270: and x10, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e0274: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* e0278: csel x28, x8, x10, eq */
  ARC_X_W(c, 28, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* e027c: sub x8, x28, x26 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) - ARC_X_R(c, 26)));
  /* e0280: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* e0284: and w8, w9, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) & UINT64_C(255)));
  /* e0288: b.hs #0xe02ec */
  if (ARC_COND(c, 2)) goto L_e02ec;
  /* e028c: add x27, x26, x22 */
  ARC_X_W(c, 27, (ARC_X_R(c, 26) + ARC_X_R(c, 22)));
  /* e0290: mov x9, #-9 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551607));
  /* e0294: sub x10, x27, x28 */
  ARC_X_W(c, 10, (ARC_X_R(c, 27) - ARC_X_R(c, 28)));
  /* e0298: sub x9, x9, x28 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 28)));
  /* e029c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* e02a0: b.hi #0xe03c4 */
  if (ARC_COND(c, 8)) goto L_e03c4;
  /* e02a4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e02a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e02ac: mov x8, #-0xe */
  ARC_X_W(c, 8, UINT64_C(18446744073709551602));
  /* e02b0: movk x8, #0x7fff, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(9223090561878065152)));
  /* e02b4: csinc x24, x9, x19, ne */
  ARC_X_W(c, 24, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e02b8: cmp x28, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* e02bc: b.hi #0xe0310 */
  if (ARC_COND(c, 8)) goto L_e0310;
  /* e02c0: lsl x8, x28, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 28)) << ((UINT64_C(1)) & 63)));
  /* e02c4: mov w10, #0x1a */
  ARC_W_W(c, 10, UINT64_C(26));
  /* e02c8: cmp x27, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 27), ARC_X_R(c, 8));
  /* e02cc: csel x8, x27, x8, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 27)) : ARC_X_R(c, 8)));
  /* e02d0: orr x9, x8, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) | UINT64_C(7)));
  /* e02d4: cmp x9, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(23));
  /* e02d8: csinc x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ((ARC_X_R(c, 9)) + 1)));
  /* e02dc: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* e02e0: mov w8, #0x17 */
  ARC_W_W(c, 8, UINT64_C(23));
  /* e02e4: csel x25, x8, x9, lo */
  ARC_X_W(c, 25, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* e02e8: b #0xe0314 */
  goto L_e0314;
L_e02ec:;
  /* e02ec: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e02f0: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e02f4: csinc x23, x9, x19, ne */
  ARC_X_W(c, 23, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* e02f8: subs x2, x26, x21 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 21)));
  /* e02fc: b.eq #0xe036c */
  if (ARC_COND(c, 0)) goto L_e036c;
  /* e0300: add x1, x23, x21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + ARC_X_R(c, 21)));
  /* e0304: add x0, x1, x22 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ARC_X_R(c, 22)));
  /* e0308: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918284));
  fn1_1449f0(c);
  /* e030c: b #0xe036c */
  goto L_e036c;
L_e0310:;
  /* e0310: mov x25, #-9 */
  ARC_X_W(c, 25, UINT64_C(18446744073709551607));
L_e0314:;
  /* e0314: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* e0318: bl #0x1428f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918300));
  fn1_1428f0(c);
  /* e031c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* e0320: cbz x21, #0xe0334 */
  if ((ARC_X_R(c, 21)) == 0) goto L_e0334;
  /* e0324: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* e0328: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* e032c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* e0330: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918324));
  fn1_1449f0(c);
L_e0334:;
  /* e0334: subs x2, x26, x21 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 21)));
  /* e0338: b.eq #0xe034c */
  if (ARC_COND(c, 0)) goto L_e034c;
  /* e033c: add x8, x23, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) + ARC_X_R(c, 21)));
  /* e0340: add x1, x24, x21 */
  ARC_X_W(c, 1, (ARC_X_R(c, 24) + ARC_X_R(c, 21)));
  /* e0344: add x0, x8, x22 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ARC_X_R(c, 22)));
  /* e0348: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918348));
  fn1_1449f0(c);
L_e034c:;
  /* e034c: add x1, x28, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 28) + UINT64_C(1)));
  /* e0350: cmp x1, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(23));
  /* e0354: b.eq #0xe0360 */
  if (ARC_COND(c, 0)) goto L_e0360;
  /* e0358: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* e035c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918368));
  fn1_142608(c);
L_e0360:;
  /* e0360: orr x8, x25, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) | UINT64_C(1)));
  /* e0364: stp x27, x23, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 27));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e0368: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e036c:;
  /* e036c: add x0, x23, x21 */
  ARC_X_W(c, 0, (ARC_X_R(c, 23) + ARC_X_R(c, 21)));
  /* e0370: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* e0374: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* e0378: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918396));
  fn1_144a20(c);
  /* e037c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e0380: add x8, x26, x22 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + ARC_X_R(c, 22)));
  /* e0384: tbnz w9, #0, #0xe0394 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e0394;
  /* e0388: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e038c: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e0390: b #0xe0398 */
  goto L_e0398;
L_e0394:;
  /* e0394: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e0398:;
  /* e0398: strb wzr, [x23, x8] */
  arc_st8((ARC_X_R(c, 23) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_e039c:;
  /* e039c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e03a0: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e03a4: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e03a8: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e03ac: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e03b0: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* e03b4: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e03b8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e03bc: ret  */
  return;
L_e03c0:;
  /* e03c0: bl #0xda020 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918468));
  fn1_da020(c);
L_e03c4:;
  /* e03c4: bl #0xd7d54 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(918472));
  fn1_d7d54(c);
}

void fn1_e2cec(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038856940));
  /* e2cec: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e2cf0: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e2cf4: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e2cf8: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e2cfc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e2d00: ldp x9, x11, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* e2d04: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* e2d08: ldrb w10, [x0] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 0)));
  /* e2d0c: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* e2d10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e2d14: mov x7, x1 */
  ARC_X_W(c, 7, ARC_X_R(c, 1));
  /* e2d18: and x12, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* e2d1c: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* e2d20: ubfx x10, x9, #1, #7 */
  ARC_X_W(c, 10, (((uint64_t)(ARC_X_R(c, 9)) >> 1) & UINT64_C(127)));
  /* e2d24: sub x12, x12, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(1)));
  /* e2d28: csel x8, x8, x12, eq */
  ARC_X_W(c, 8, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 12)));
  /* e2d2c: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* e2d30: csel x21, x10, x11, eq */
  ARC_X_W(c, 21, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* e2d34: sub x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) - ARC_X_R(c, 21)));
  /* e2d38: cmp x10, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 2));
  /* e2d3c: b.hs #0xe2d68 */
  if (ARC_COND(c, 2)) goto L_e2d68;
  /* e2d40: sub x9, x20, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 20) - ARC_X_R(c, 8)));
  /* e2d44: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e2d48: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e2d4c: add x2, x9, x21 */
  ARC_X_W(c, 2, (ARC_X_R(c, 9) + ARC_X_R(c, 21)));
  /* e2d50: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* e2d54: mov x4, x21 */
  ARC_X_W(c, 4, ARC_X_R(c, 21));
  /* e2d58: mov x5, xzr */
  ARC_X_W(c, 5, ARC_X_R(c, 31));
  /* e2d5c: mov x6, x20 */
  ARC_X_W(c, 6, ARC_X_R(c, 20));
  /* e2d60: bl #0x142d40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929124));
  fn1_142d40(c);
  /* e2d64: b #0xe2dac */
  goto L_e2dac;
L_e2d68:;
  /* e2d68: cbz x20, #0xe2dac */
  if ((ARC_X_R(c, 20)) == 0) goto L_e2dac;
  /* e2d6c: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e2d70: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e2d74: tst x9, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 9) & UINT64_C(1)));
  /* e2d78: lsl x2, x20, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 20)) << ((UINT64_C(2)) & 63)));
  /* e2d7c: mov x1, x7 */
  ARC_X_W(c, 1, ARC_X_R(c, 7));
  /* e2d80: csel x22, x10, x8, eq */
  ARC_X_W(c, 22, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e2d84: add x0, x22, x21, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* e2d88: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(929164));
  fn1_1449f0(c);
  /* e2d8c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e2d90: add x8, x21, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) + ARC_X_R(c, 20)));
  /* e2d94: tbnz w9, #0, #0xe2da4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e2da4;
  /* e2d98: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e2d9c: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* e2da0: b #0xe2da8 */
  goto L_e2da8;
L_e2da4:;
  /* e2da4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e2da8:;
  /* e2da8: str wzr, [x22, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
L_e2dac:;
  /* e2dac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e2db0: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e2db4: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e2db8: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e2dbc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e2dc0: ret  */
  return;
}

void fn1_e70ac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038874284));
  /* e70ac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e70b0: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* e70b4: str d8, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), (c)->q[8].u64[0]);
  /* e70b8: stp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e70bc: str x23, [sp, #0x38] */
  arc_st64(((c)->sp + INT64_C(56)), ARC_X_R(c, 23));
  /* e70c0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e70c4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e70c8: add x29, sp, #0x28 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(40)));
  /* e70cc: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* e70d0: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* e70d4: stp xzr, xzr, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e70d8: str xzr, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 31));
  /* e70dc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e70e0: mov w1, #0x16 */
  ARC_W_W(c, 1, UINT64_C(22));
  /* e70e4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e70e8: add x20, sp, #8 */
  ARC_X_W(c, 20, ((c)->sp + UINT64_C(8)));
  /* e70ec: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946416));
  fn1_142d10(c);
  /* e70f0: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e70f4: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* e70f8: orr x21, x20, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 20) | UINT64_C(1)));
  /* e70fc: adrp x20, #0x4f000 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(323584)));
  /* e7100: add x20, x20, #0x918 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) + UINT64_C(2328)));
  /* e7104: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* e7108: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e710c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e7110: csel x23, x10, x9, eq */
  ARC_X_W(c, 23, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e7114: b #0xe7128 */
  goto L_e7128;
L_e7118:;
  /* e7118: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e711c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e7120: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946468));
  fn1_142d10(c);
L_e7124:;
  /* e7124: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
L_e7128:;
  /* e7128: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e712c: ldr x9, [sp, #0x18] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(24))));
  /* e7130: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e7134: add x1, x23, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 23) + UINT64_C(1)));
  /* e7138: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* e713c: csel x0, x21, x9, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 21)) : ARC_X_R(c, 9)));
  /* e7140: bl #0x1428c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946500));
  fn1_1428c0(c);
  /* e7144: tbnz w0, #0x1f, #0xe715c */
  if (((ARC_W_R(c, 0)) >> 31 & 1) != 0) goto L_e715c;
  /* e7148: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* e714c: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* e7150: b.hs #0xe71a0 */
  if (ARC_COND(c, 2)) goto L_e71a0;
  /* e7154: mov x23, x8 */
  ARC_X_W(c, 23, ARC_X_R(c, 8));
  /* e7158: b #0xe7160 */
  goto L_e7160;
L_e715c:;
  /* e715c: orr x23, x22, x23, lsl #1 */
  ARC_X_W(c, 23, (ARC_X_R(c, 22) | ((uint64_t)(ARC_X_R(c, 23)) << 1)));
L_e7160:;
  /* e7160: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* e7164: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* e7168: lsr x10, x8, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e716c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e7170: csel x9, x10, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* e7174: subs x1, x23, x9 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9)));
  /* e7178: b.hi #0xe7118 */
  if (ARC_COND(c, 8)) goto L_e7118;
  /* e717c: tbnz w8, #0, #0xe7190 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e7190;
  /* e7180: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* e7184: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* e7188: mov x8, x21 */
  ARC_X_W(c, 8, ARC_X_R(c, 21));
  /* e718c: b #0xe7198 */
  goto L_e7198;
L_e7190:;
  /* e7190: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* e7194: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
L_e7198:;
  /* e7198: strb wzr, [x8, x23] */
  arc_st8((ARC_X_R(c, 8) + ARC_X_R(c, 23)), ARC_W_R(c, 31));
  /* e719c: b #0xe7124 */
  goto L_e7124;
L_e71a0:;
  /* e71a0: ldrb w9, [sp, #8] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(8))));
  /* e71a4: ldr x10, [sp, #0x10] */
  ARC_X_W(c, 10, arc_ld64(((c)->sp + INT64_C(16))));
  /* e71a8: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e71ac: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e71b0: csel x10, x11, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e71b4: subs x1, x8, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10)));
  /* e71b8: b.ls #0xe71cc */
  if (ARC_COND(c, 9)) goto L_e71cc;
  /* e71bc: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e71c0: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* e71c4: bl #0x142d10 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946632));
  fn1_142d10(c);
  /* e71c8: b #0xe71e8 */
  goto L_e71e8;
L_e71cc:;
  /* e71cc: tbnz w9, #0, #0xe71dc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e71dc;
  /* e71d0: lsl w9, w0, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 0)) << ((UINT64_C(1)) & 31)));
  /* e71d4: strb w9, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 9));
  /* e71d8: b #0xe71e4 */
  goto L_e71e4;
L_e71dc:;
  /* e71dc: ldr x21, [sp, #0x18] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(24))));
  /* e71e0: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
L_e71e4:;
  /* e71e4: strb wzr, [x21, x8] */
  arc_st8((ARC_X_R(c, 21) + ARC_X_R(c, 8)), ARC_W_R(c, 31));
L_e71e8:;
  /* e71e8: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* e71ec: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* e71f0: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e71f4: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e71f8: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* e71fc: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* e7200: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* e7204: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946696));
  fn1_142e00(c);
  /* e7208: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e720c: ldr x23, [sp, #0x38] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(56))));
  /* e7210: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e7214: ldr d8, [sp, #0x20] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e7218: ldp x29, x30, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e721c: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* e7220: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e7224: ret  */
  return;
  /* e7228: b #0xe7230 */
  goto L_e7230;
  /* e722c: b #0xe7230 */
  goto L_e7230;
L_e7230:;
  /* e7230: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e7234: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e7238: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946748));
  fn1_142e00(c);
  /* e723c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e7240: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(946756));
  fn1_9cc20(c);
}

void fn1_e9b40(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038885184));
  /* e9b40: bti c */
  /* bti: no architectural effect here */
  /* e9b44: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* e9b48: ldr x16, [x8, #8] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* e9b4c: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
}

void fn1_eb878(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038892664));
  /* eb878: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eb87c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eb880: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eb884: mov w0, #0x61 */
  ARC_W_W(c, 0, UINT64_C(97));
  /* eb888: bl #0x1432f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964748));
  fn1_1432f8(c);
  /* eb88c: asr x8, x0, #0x3f */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(63)) & 63))));
  /* eb890: bic w0, w0, w8 */
  ARC_W_W(c, 0, (ARC_W_R(c, 0) & (~ARC_W_R(c, 8))));
  /* eb894: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eb898: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eb89c: ret  */
  return;
  /* eb8a0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(964772));
  fn1_a1454(c);
}

void fn1_ed5d8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038900184));
  /* ed5d8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ed5dc: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ed5e0: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* ed5e4: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ed5e8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ed5ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ed5f0: ldr x21, [x0, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* ed5f4: nop  */
  /* nop: no architectural effect here */
  /* ed5f8: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ed5fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ed600: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* ed604: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* ed608: b.eq #0xed618 */
  if (ARC_COND(c, 0)) goto L_ed618;
  /* ed60c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ed610: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed614: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972312));
  fn1_db2e0(c);
L_ed618:;
  /* ed618: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ed61c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* ed620: b.eq #0xed630 */
  if (ARC_COND(c, 0)) goto L_ed630;
  /* ed624: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ed628: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed62c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972336));
  fn1_db2e0(c);
L_ed630:;
  /* ed630: ldr x22, [x19, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ed634: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* ed638: b.eq #0xed65c */
  if (ARC_COND(c, 0)) goto L_ed65c;
  /* ed63c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* ed640: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ed644: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972360));
  fn1_bd950(c);
  /* ed648: cbnz x0, #0xed65c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ed65c;
  /* ed64c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* ed650: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ed654: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ed658: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972380));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ed65c:;
  /* ed65c: ldr x22, [x20, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* ed660: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* ed664: str x22, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 22));
  /* ed668: b.eq #0xed67c */
  if (ARC_COND(c, 0)) goto L_ed67c;
  /* ed66c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ed670: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ed674: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972408));
  fn1_db2e0(c);
  /* ed678: ldr x22, [x20, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
L_ed67c:;
  /* ed67c: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* ed680: b.eq #0xed6a4 */
  if (ARC_COND(c, 0)) goto L_ed6a4;
  /* ed684: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* ed688: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ed68c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972432));
  fn1_bd950(c);
  /* ed690: cbnz x0, #0xed6a4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ed6a4;
  /* ed694: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* ed698: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* ed69c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ed6a0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972452));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ed6a4:;
  /* ed6a4: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* ed6a8: str x21, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 21));
  /* ed6ac: b.eq #0xed6d0 */
  if (ARC_COND(c, 0)) goto L_ed6d0;
  /* ed6b0: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* ed6b4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ed6b8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972476));
  fn1_bd950(c);
  /* ed6bc: cbnz x0, #0xed6d0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ed6d0;
  /* ed6c0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* ed6c4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ed6c8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ed6cc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(972496));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ed6d0:;
  /* ed6d0: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* ed6d4: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ed6d8: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* ed6dc: str x9, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 9));
  /* ed6e0: ldr x8, [x20, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* ed6e4: ldr x9, [x19, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* ed6e8: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* ed6ec: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
  /* ed6f0: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* ed6f4: ldr x9, [x19, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* ed6f8: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
  /* ed6fc: str x9, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 9));
  /* ed700: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* ed704: ldr x9, [x19, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* ed708: str x8, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 8));
  /* ed70c: str x9, [x20, #0x28] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)), ARC_X_R(c, 9));
  /* ed710: ldr x8, [x20, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* ed714: ldr x9, [x19, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* ed718: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* ed71c: str x9, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 9));
  /* ed720: ldr x8, [x20, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* ed724: ldr x9, [x19, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* ed728: str x8, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 8));
  /* ed72c: str x9, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 9));
  /* ed730: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ed734: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* ed738: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ed73c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ed740: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ed744: ret  */
  return;
}

void fn1_f1048(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038915144));
  /* f1048: bti c */
  /* bti: no architectural effect here */
  /* f104c: ret  */
  return;
}

void fn1_f4008(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038927368));
  /* f4008: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f400c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4010: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* f4014: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f4018: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f401c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* f4020: ldr x21, [x0, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* f4024: nop  */
  /* nop: no architectural effect here */
  /* f4028: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f402c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4030: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* f4034: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* f4038: b.eq #0xf4048 */
  if (ARC_COND(c, 0)) goto L_f4048;
  /* f403c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f4040: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f4044: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999496));
  fn1_db2e0(c);
L_f4048:;
  /* f4048: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* f404c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* f4050: b.eq #0xf4060 */
  if (ARC_COND(c, 0)) goto L_f4060;
  /* f4054: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* f4058: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f405c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999520));
  fn1_db2e0(c);
L_f4060:;
  /* f4060: ldr x22, [x19, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* f4064: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* f4068: b.eq #0xf408c */
  if (ARC_COND(c, 0)) goto L_f408c;
  /* f406c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f4070: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f4074: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999544));
  fn1_bd950(c);
  /* f4078: cbnz x0, #0xf408c */
  if ((ARC_X_R(c, 0)) != 0) goto L_f408c;
  /* f407c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f4080: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f4084: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f4088: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999564));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f408c:;
  /* f408c: ldr x22, [x20, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* f4090: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* f4094: str x22, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 22));
  /* f4098: b.eq #0xf40ac */
  if (ARC_COND(c, 0)) goto L_f40ac;
  /* f409c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f40a0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f40a4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999592));
  fn1_db2e0(c);
  /* f40a8: ldr x22, [x20, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
L_f40ac:;
  /* f40ac: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* f40b0: b.eq #0xf40d4 */
  if (ARC_COND(c, 0)) goto L_f40d4;
  /* f40b4: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* f40b8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f40bc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999616));
  fn1_bd950(c);
  /* f40c0: cbnz x0, #0xf40d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f40d4;
  /* f40c4: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* f40c8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* f40cc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f40d0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999636));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f40d4:;
  /* f40d4: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* f40d8: str x21, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 21));
  /* f40dc: b.eq #0xf4100 */
  if (ARC_COND(c, 0)) goto L_f4100;
  /* f40e0: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* f40e4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f40e8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999660));
  fn1_bd950(c);
  /* f40ec: cbnz x0, #0xf4100 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f4100;
  /* f40f0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* f40f4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f40f8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f40fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(999680));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f4100:;
  /* f4100: ldr x8, [x20, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* f4104: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* f4108: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* f410c: str x9, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 9));
  /* f4110: ldr x8, [x20, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* f4114: ldr x9, [x19, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* f4118: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* f411c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
  /* f4120: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* f4124: ldr x9, [x19, #0x20] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(32))));
  /* f4128: str x8, [x19, #0x20] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(32)), ARC_X_R(c, 8));
  /* f412c: str x9, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 9));
  /* f4130: ldr x8, [x20, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* f4134: ldr x9, [x19, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* f4138: str x8, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 8));
  /* f413c: str x9, [x20, #0x28] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(40)), ARC_X_R(c, 9));
  /* f4140: ldr x8, [x20, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* f4144: ldr x9, [x19, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(48))));
  /* f4148: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* f414c: str x9, [x20, #0x30] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(48)), ARC_X_R(c, 9));
  /* f4150: ldr x8, [x20, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* f4154: ldr x9, [x19, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(56))));
  /* f4158: str x8, [x19, #0x38] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(56)), ARC_X_R(c, 8));
  /* f415c: str x9, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 9));
  /* f4160: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f4164: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* f4168: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f416c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f4170: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f4174: ret  */
  return;
}

void fn1_f7a80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038942336));
  /* f7a80: bti c */
  /* bti: no architectural effect here */
  /* f7a84: ret  */
  return;
}

void fn1_fcb14(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038962964));
  /* fcb14: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fcb18: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fcb1c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fcb20: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fcb24: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fcb28: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fcb2c: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fcb30: ldr x8, [x8, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* fcb34: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035064));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fcb38: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* fcb3c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fcb40: ldr x1, [x1, #0xb70] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2928))));
  /* fcb44: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035080));
  fn1_143748(c);
  /* fcb48: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fcb4c: str x0, [x19, #0x80] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(128)), ARC_X_R(c, 0));
  /* fcb50: ldrb w20, [x19, #0xa2] */
  ARC_W_W(c, 20, arc_ld8((ARC_X_R(c, 19) + INT64_C(162))));
  /* fcb54: ldr x8, [x8, #0x38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* fcb58: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035100));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fcb5c: and w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(1)));
  /* fcb60: cmp w20, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 20), ARC_W_R(c, 8));
  /* fcb64: strb w8, [x19, #0xa2] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(162)), ARC_W_R(c, 8));
  /* fcb68: b.eq #0xfcbfc */
  if (ARC_COND(c, 0)) goto L_fcbfc;
  /* fcb6c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* fcb70: ldrb w8, [x19, #0xa0] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(160))));
  /* fcb74: stp q0, q0, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* fcb78: str q0, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* fcb7c: tbz w0, #0, #0xfcbb0 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_fcbb0;
  /* fcb80: cbz w8, #0xfcb90 */
  if ((ARC_W_R(c, 8)) == 0) goto L_fcb90;
  /* fcb84: ldr x0, [x19, #0x40] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fcb88: cbz x0, #0xfcb90 */
  if ((ARC_X_R(c, 0)) == 0) goto L_fcb90;
  /* fcb8c: bl #0x1425a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035152));
  fn1_1425a8(c);
L_fcb90:;
  /* fcb90: ldrb w8, [x19, #0xa1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 19) + INT64_C(161))));
  /* fcb94: strb wzr, [x19, #0xa1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(161)), ARC_W_R(c, 31));
  /* fcb98: strb w8, [x19, #0xa0] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 8));
  /* fcb9c: ldp x9, x8, [x19, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(104));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* fcba0: stp xzr, xzr, [x19, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(104));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* fcba4: str x9, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 9));
  /* fcba8: str x8, [x19, #0x60] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(96)), ARC_X_R(c, 8));
  /* fcbac: b #0xfcbfc */
  goto L_fcbfc;
L_fcbb0:;
  /* fcbb0: tbnz w8, #0, #0xfcbe4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_fcbe4;
  /* fcbb4: ldr x8, [x19, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(64))));
  /* fcbb8: add x9, x19, #0x58 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(88)));
  /* fcbbc: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* fcbc0: b.eq #0xfcbe4 */
  if (ARC_COND(c, 0)) goto L_fcbe4;
  /* fcbc4: ldr x0, [x19, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* fcbc8: strb wzr, [x19, #0xa1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(161)), ARC_W_R(c, 31));
  /* fcbcc: stp x8, x0, [x19, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(104));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* fcbd0: bl #0x142590 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035220));
  fn1_142590(c);
  /* fcbd4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* fcbd8: str x0, [x19, #0x40] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(64)), ARC_X_R(c, 0));
  /* fcbdc: strb w8, [x19, #0xa0] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(160)), ARC_W_R(c, 8));
  /* fcbe0: b #0xfcbfc */
  goto L_fcbfc;
L_fcbe4:;
  /* fcbe4: ldr x0, [x19, #0x60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(96))));
  /* fcbe8: str x0, [x19, #0x70] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(112)), ARC_X_R(c, 0));
  /* fcbec: bl #0x142590 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1035248));
  fn1_142590(c);
  /* fcbf0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* fcbf4: str x0, [x19, #0x68] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(104)), ARC_X_R(c, 0));
  /* fcbf8: strb w8, [x19, #0xa1] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(161)), ARC_W_R(c, 8));
L_fcbfc:;
  /* fcbfc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fcc00: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fcc04: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fcc08: ret  */
  return;
}

void fn1_ff678(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038974072));
  /* ff678: bti c */
  /* bti: no architectural effect here */
  /* ff67c: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* ff680: b.eq #0xff6a8 */
  if (ARC_COND(c, 0)) goto L_ff6a8;
  /* ff684: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
L_ff688:;
  /* ff688: ldr w8, [x1], #4 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(4));
    ARC_W_W(c, 8, arc_ld32(_a));
  }
  /* ff68c: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* ff690: add x8, x8, x0, lsl #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 0)) << 4)));
  /* ff694: and x9, x8, #0xf000000000000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(17293822569102704640)));
  /* ff698: bfxil x9, x9, #0x38, #8 */
  ARC_X_W(c, 9, (((uint64_t)(ARC_X_R(c, 9)) & UINT64_C(18446744073709551360)) | ((((uint64_t)(ARC_X_R(c, 9))) >> 56) & UINT64_C(255))));
  /* ff69c: eor x0, x9, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) ^ ARC_X_R(c, 8)));
  /* ff6a0: b.ne #0xff688 */
  if (ARC_COND(c, 1)) goto L_ff688;
  /* ff6a4: ret  */
  return;
L_ff6a8:;
  /* ff6a8: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* ff6ac: ret  */
  return;
}

void fn1_10fb58(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039040856));
  /* 10fb58: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10fb5c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10fb60: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10fb64: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10fb68: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10fb6c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 10fb70: ldr x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 10fb74: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 10fb78: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* 10fb7c: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* 10fb80: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 10fb84: ldr x8, [x8, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 10fb88: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 10fb8c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1112976));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10fb90: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 10fb94: add x3, x0, #0x240 */
  ARC_X_W(c, 3, (ARC_X_R(c, 0) + UINT64_C(576)));
  /* 10fb98: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10fb9c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 10fba0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 10fba4: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10fba8: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* 10fbac: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* 10fbb0: bl #0xffa98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1113012));
  fn1_ffa98(c);
  /* 10fbb4: sub x8, x0, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) - ARC_X_R(c, 24)));
  /* 10fbb8: cmp x8, #0x23f */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(575));
  /* 10fbbc: b.gt #0x10fbf0 */
  if (ARC_COND(c, 12)) goto L_10fbf0;
  /* 10fbc0: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* 10fbc4: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 10fbc8: movk x9, #0xaaab */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744073709486080)) | UINT64_C(43691)));
  /* 10fbcc: mul x8, x8, x9 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) * (uint64_t)(ARC_X_R(c, 9))));
  /* 10fbd0: mov x9, #-0x5555555555555556 */
  ARC_X_W(c, 9, UINT64_C(12297829382473034410));
  /* 10fbd4: eor x9, x9, #0x8000000000000001 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ UINT64_C(9223372036854775809)));
  /* 10fbd8: smulh x9, x8, x9 */
  ARC_X_W(c, 9, arc_smulh(ARC_X_R(c, 8), ARC_X_R(c, 9)));
  /* 10fbdc: lsr x10, x9, #0x3f */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(63)) & 63)));
  /* 10fbe0: add w9, w10, w9, lsr #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 10) + ((uint32_t)(ARC_W_R(c, 9)) >> 1)));
  /* 10fbe4: mov w10, #0xc */
  ARC_W_W(c, 10, UINT64_C(12));
  /* 10fbe8: msub w8, w9, w10, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) - ((uint32_t)(ARC_W_R(c, 9)) * (uint32_t)(ARC_W_R(c, 10)))));
  /* 10fbec: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_10fbf0:;
  /* 10fbf0: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10fbf4: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10fbf8: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10fbfc: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10fc00: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10fc04: ret  */
  return;
}

void fn1_113ca8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039057576));
  /* 113ca8: bti c */
  /* bti: no architectural effect here */
  /* 113cac: mov w0, #0x302 */
  ARC_W_W(c, 0, UINT64_C(770));
  /* 113cb0: movk w0, #0x400, lsl #16 */
  ARC_W_W(c, 0, ((ARC_W_R(c, 0) & UINT64_C(18446744069414649855)) | UINT64_C(67108864)));
  /* 113cb4: ret  */
  return;
}

void fn1_118410(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039075856));
  /* 118410: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 118414: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 118418: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11841c: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 118420: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 118424: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 118428: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11842c: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 118430: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 118434: ldr x27, [x29, #0x60] */
  ARC_X_W(c, 27, arc_ld64((ARC_X_R(c, 29) + INT64_C(96))));
  /* 118438: ldr x28, [x1] */
  ARC_X_W(c, 28, arc_ld64(ARC_X_R(c, 1)));
  /* 11843c: mov x23, x7 */
  ARC_X_W(c, 23, ARC_X_R(c, 7));
  /* 118440: mov x19, x6 */
  ARC_X_W(c, 19, ARC_X_R(c, 6));
  /* 118444: mov x20, x5 */
  ARC_X_W(c, 20, ARC_X_R(c, 5));
  /* 118448: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 11844c: mov x25, x2 */
  ARC_X_W(c, 25, ARC_X_R(c, 2));
  /* 118450: str x3, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 3));
  /* 118454: tbz w0, #0, #0x118518 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_118518;
  /* 118458: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11845c: ldr x21, [x21, #0xc20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(3104))));
  /* 118460: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118464: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 118468: b.eq #0x1185e4 */
  if (ARC_COND(c, 0)) goto L_1185e4;
  /* 11846c: nop  */
  /* nop: no architectural effect here */
  /* 118470: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118474: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148024));
  fn1_142518(c);
  /* 118478: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11847c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 118480: b.ne #0x1184ac */
  if (ARC_COND(c, 1)) goto L_1184ac;
  /* 118484: nop  */
  /* nop: no architectural effect here */
  /* 118488: adr x24, #0x15791c */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11848c: nop  */
  /* nop: no architectural effect here */
  /* 118490: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_118494:;
  /* 118494: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 118498: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 11849c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148064));
  fn1_142530(c);
  /* 1184a0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1184a4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1184a8: b.eq #0x118494 */
  if (ARC_COND(c, 0)) goto L_118494;
L_1184ac:;
  /* 1184ac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1184b0: cbnz x8, #0x118574 */
  if ((ARC_X_R(c, 8)) != 0) goto L_118574;
  /* 1184b4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1184b8: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 1184bc: strb wzr, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 1184c0: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 1184c4: nop  */
  /* nop: no architectural effect here */
  /* 1184c8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1184cc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148112));
  fn1_142560(c);
  /* 1184d0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1184d4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1184d8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1184dc: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148128));
  fn1_a2030(c);
  /* 1184e0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1184e4: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1184e8: nop  */
  /* nop: no architectural effect here */
  /* 1184ec: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1184f0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148148));
  fn1_142518(c);
  /* 1184f4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1184f8: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 1184fc: nop  */
  /* nop: no architectural effect here */
  /* 118500: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118504: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148168));
  fn1_142560(c);
  /* 118508: nop  */
  /* nop: no architectural effect here */
  /* 11850c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 118510: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148180));
  fn1_142578(c);
  /* 118514: b #0x1185e4 */
  goto L_1185e4;
L_118518:;
  /* 118518: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11851c: ldr x21, [x21, #0xc18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(3096))));
  /* 118520: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118524: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 118528: b.eq #0x1185e4 */
  if (ARC_COND(c, 0)) goto L_1185e4;
  /* 11852c: nop  */
  /* nop: no architectural effect here */
  /* 118530: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 118534: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148216));
  fn1_142518(c);
  /* 118538: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11853c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 118540: b.ne #0x11856c */
  if (ARC_COND(c, 1)) goto L_11856c;
  /* 118544: nop  */
  /* nop: no architectural effect here */
  /* 118548: adr x24, #0x15791c */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11854c: nop  */
  /* nop: no architectural effect here */
  /* 118550: adr x26, #0x1578f4 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407220)));
L_118554:;
  /* 118554: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 118558: mov x1, x26 */
  ARC_X_W(c, 1, ARC_X_R(c, 26));
  /* 11855c: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148256));
  fn1_142530(c);
  /* 118560: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118564: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 118568: b.eq #0x118554 */
  if (ARC_COND(c, 0)) goto L_118554;
L_11856c:;
  /* 11856c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 118570: cbz x8, #0x118584 */
  if ((ARC_X_R(c, 8)) == 0) goto L_118584;
L_118574:;
  /* 118574: nop  */
  /* nop: no architectural effect here */
  /* 118578: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11857c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148288));
  fn1_142560(c);
  /* 118580: b #0x1185e4 */
  goto L_1185e4;
L_118584:;
  /* 118584: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 118588: str x21, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 21));
  /* 11858c: strb wzr, [sp, #0x10] */
  arc_st8(((c)->sp + INT64_C(16)), ARC_W_R(c, 31));
  /* 118590: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 118594: nop  */
  /* nop: no architectural effect here */
  /* 118598: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11859c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148320));
  fn1_142560(c);
  /* 1185a0: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1185a4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1185a8: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 1185ac: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148336));
  fn1_a2030(c);
  /* 1185b0: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 1185b4: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 1185b8: nop  */
  /* nop: no architectural effect here */
  /* 1185bc: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1185c0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148356));
  fn1_142518(c);
  /* 1185c4: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 1185c8: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 1185cc: nop  */
  /* nop: no architectural effect here */
  /* 1185d0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1185d4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148376));
  fn1_142560(c);
  /* 1185d8: nop  */
  /* nop: no architectural effect here */
  /* 1185dc: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1185e0: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148388));
  fn1_142578(c);
L_1185e4:;
  /* 1185e4: ldp x8, x10, [x28, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 1185e8: ldrsw x9, [x21, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 21) + INT64_C(8)))));
  /* 1185ec: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 1185f0: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 1185f4: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 1185f8: b.hs #0x11877c */
  if (ARC_COND(c, 2)) goto L_11877c;
  /* 1185fc: ldr x24, [x8, x9, lsl #3] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 118600: cbz x24, #0x11877c */
  if ((ARC_X_R(c, 24)) == 0) goto L_11877c;
  /* 118604: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 118608: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 11860c: ldr x8, [x8, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(88))));
  /* 118610: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148436));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 118614: str w0, [x25] */
  arc_st32(ARC_X_R(c, 25), ARC_W_R(c, 0));
  /* 118618: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 11861c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 118620: ldr x9, [x8, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 118624: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 118628: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148460));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 11862c: ldrb w8, [x27] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 27)));
  /* 118630: tbz w8, #0, #0x118648 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118648;
  /* 118634: ldr x8, [x27] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 27)));
  /* 118638: ldr x0, [x27, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 27) + INT64_C(16))));
  /* 11863c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 118640: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 118644: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148488));
  fn1_142608(c);
L_118648:;
  /* 118648: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 11864c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 118650: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 118654: str q0, [x27] */
  arc_st64(ARC_X_R(c, 27), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 27) + 8, (c)->q[0].u64[1]);
  /* 118658: str x8, [x27, #0x10] */
  arc_st64((ARC_X_R(c, 27) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11865c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 118660: ldr x9, [x8, #0x38] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(56))));
  /* 118664: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 118668: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148524));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 11866c: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 118670: tbz w8, #0, #0x118688 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118688;
  /* 118674: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 118678: ldr x0, [x23, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 11867c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 118680: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 118684: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148552));
  fn1_142608(c);
L_118688:;
  /* 118688: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 11868c: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 118690: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 118694: str q0, [x23] */
  arc_st64(ARC_X_R(c, 23), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 23) + 8, (c)->q[0].u64[1]);
  /* 118698: str x8, [x23, #0x10] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(16)), ARC_X_R(c, 8));
  /* 11869c: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1186a0: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 1186a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148584));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1186a8: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 1186ac: str w0, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 0));
  /* 1186b0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1186b4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1186b8: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 1186bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148608));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1186c0: str w0, [x22] */
  arc_st32(ARC_X_R(c, 22), ARC_W_R(c, 0));
  /* 1186c4: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1186c8: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 1186cc: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 1186d0: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 1186d4: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148632));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 1186d8: ldrb w8, [x20] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 20)));
  /* 1186dc: tbz w8, #0, #0x1186f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1186f0;
  /* 1186e0: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 1186e4: ldr x0, [x20, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(16))));
  /* 1186e8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1186ec: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148656));
  fn1_142608(c);
L_1186f0:;
  /* 1186f0: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 1186f4: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1186f8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1186fc: str q0, [x20] */
  arc_st64(ARC_X_R(c, 20), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 20) + 8, (c)->q[0].u64[1]);
  /* 118700: str x8, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), ARC_X_R(c, 8));
  /* 118704: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 118708: ldr x9, [x8, #0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* 11870c: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 118710: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148692));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 118714: ldrb w8, [x19] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 19)));
  /* 118718: tbz w8, #0, #0x118730 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_118730;
  /* 11871c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 118720: ldr x0, [x19, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* 118724: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 118728: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 11872c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148720));
  fn1_142608(c);
L_118730:;
  /* 118730: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 118734: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 118738: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 11873c: str q0, [x19] */
  arc_st64(ARC_X_R(c, 19), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 19) + 8, (c)->q[0].u64[1]);
  /* 118740: str x8, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 8));
  /* 118744: ldr x19, [x29, #0x68] */
  ARC_X_W(c, 19, arc_ld64((ARC_X_R(c, 29) + INT64_C(104))));
  /* 118748: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 11874c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 118750: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148756));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 118754: str w0, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 0));
  /* 118758: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11875c: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 118760: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 118764: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 118768: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 11876c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 118770: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 118774: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 118778: ret  */
  return;
L_11877c:;
  /* 11877c: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148800));
  fn1_fc3b8(c);
  /* 118780: b #0x118784 */
  goto L_118784;
L_118784:;
  /* 118784: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 118788: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 11878c: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148816));
  fn1_d2a78(c);
  /* 118790: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 118794: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1148824));
  fn1_9cc20(c);
}

void fn1_1248b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039126200));
  /* 1248b8: bti c */
  /* bti: no architectural effect here */
  /* 1248bc: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* 1248c0: nop  */
  /* nop: no architectural effect here */
  /* 1248c4: adr x9, #0x15dc40 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 1248c8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1248cc: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1248d0: b.eq #0x1248f4 */
  if (ARC_COND(c, 0)) goto L_1248f4;
  /* 1248d4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1248d8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1248dc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 1248e0: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 1248e4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1248e8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1198316));
  fn1_db2e0(c);
  /* 1248ec: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1248f0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_1248f4:;
  /* 1248f4: ret  */
  return;
}

void fn1_127540(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039137600));
  /* 127540: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 127544: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 127548: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 12754c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 127550: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 127554: bl #0x143f70 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1209688));
  fn1_143f70(c);
  /* 127558: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 12755c: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 127560: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 127564: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 127568: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12756c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_129b8c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039147404));
  /* 129b8c: bti c */
  /* bti: no architectural effect here */
  /* 129b90: mov w0, #3 */
  ARC_W_W(c, 0, UINT64_C(3));
  /* 129b94: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 129b98: ret  */
  return;
}

void fn1_12b1c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039153088));
  /* 12b1c0: bti c */
  /* bti: no architectural effect here */
  /* 12b1c4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12b1c8: ret  */
  return;
}

void fn1_12cfa4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039160740));
  /* 12cfa4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 12cfa8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 12cfac: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 12cfb0: nop  */
  /* nop: no architectural effect here */
  /* 12cfb4: adr x8, #0x15de68 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1433192)));
  /* 12cfb8: ldarb w9, [x8] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 8)));
  /* 12cfbc: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12cfc0: tbz w9, #0, #0x12cfd4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_12cfd4;
L_12cfc4:;
  /* 12cfc4: ldr x0, [x8, #0xe60] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3680))));
  /* 12cfc8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 12cfcc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 12cfd0: ret  */
  return;
L_12cfd4:;
  /* 12cfd4: nop  */
  /* nop: no architectural effect here */
  /* 12cfd8: adr x0, #0x15de68 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433192)));
  /* 12cfdc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232864));
  fn1_1424b8(c);
  /* 12cfe0: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12cfe4: cbz w0, #0x12cfc4 */
  if ((ARC_W_R(c, 0)) == 0) goto L_12cfc4;
  /* 12cfe8: bl #0x12d010 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232876));
  fn1_12d010(c);
  /* 12cfec: nop  */
  /* nop: no architectural effect here */
  /* 12cff0: adr x9, #0x15e1f0 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1434096)));
  /* 12cff4: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12cff8: nop  */
  /* nop: no architectural effect here */
  /* 12cffc: adr x0, #0x15de68 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1433192)));
  /* 12d000: str x9, [x8, #0xe60] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(3680)), ARC_X_R(c, 9));
  /* 12d004: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1232904));
  fn1_1424d0(c);
  /* 12d008: adrp x8, #0x15d000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 12d00c: b #0x12cfc4 */
  goto L_12cfc4;
}

void fn1_1349f0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192048));
  /* 1349f0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 1349f4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 1349f8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 1349fc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134a00: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134a04: add x0, x0, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(24)));
  /* 134a08: bl #0x1369ec */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1264140));
  fn1_1369ec(c);
  /* 134a0c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134a10: mov w1, #0x440 */
  ARC_W_W(c, 1, UINT64_C(1088));
  /* 134a14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134a18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134a1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134a20: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_135428(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039194664));
  /* 135428: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13542c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 135430: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 135434: ldr x0, [x0] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 0)));
  /* 135438: cbz x0, #0x135440 */
  if ((ARC_X_R(c, 0)) == 0) goto L_135440;
  /* 13543c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266752));
  fn1_1443c0(c);
L_135440:;
  /* 135440: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 135444: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 135448: ret  */
  return;
  /* 13544c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1266768));
  fn1_a1454(c);
}

void fn1_138304(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039206660));
  /* 138304: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 138308: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13830c: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 138310: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 138314: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 138318: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13831c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 138320: ldr x8, [x8, #0xe50] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3664))));
  /* 138324: add x9, x8, #0x18 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(24)));
  /* 138328: add x8, x8, #0x40 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(64)));
  /* 13832c: str x9, [x0], #8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 138330: str x8, [x20, #0x68]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(104));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(104));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* 138334: bl #0x144558 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278776));
  fn1_144558(c);
  /* 138338: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13833c: bl #0x1433b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1278784));
  fn1_1433b8(c);
  /* 138340: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 138344: mov w1, #0x100 */
  ARC_W_W(c, 1, UINT64_C(256));
  /* 138348: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13834c: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 138350: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 138354: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_13cadc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039225052));
  /* 13cadc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13cae0: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* 13cae4: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13cae8: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13caec: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 13caf0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 13caf4: add x8, sp, #8 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(8)));
  /* 13caf8: mov x1, x2 */
  ARC_X_W(c, 1, ARC_X_R(c, 2));
  /* 13cafc: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 13cb00: bl #0x144720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297156));
  fn1_144720(c);
  /* 13cb04: cbz x20, #0x13cb10 */
  if ((ARC_X_R(c, 20)) == 0) goto L_13cb10;
  /* 13cb08: ldr w8, [x20] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 20)));
  /* 13cb0c: cbnz w8, #0x13cb20 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13cb20;
L_13cb10:;
  /* 13cb10: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 13cb14: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13cb18: mov x2, x20 */
  ARC_X_W(c, 2, ARC_X_R(c, 20));
  /* 13cb1c: bl #0x1446c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297184));
  fn1_1446c0(c);
L_13cb20:;
  /* 13cb20: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13cb24: tbz w8, #0, #0x13cb38 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13cb38;
  /* 13cb28: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13cb2c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cb30: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13cb34: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297208));
  fn1_142608(c);
L_13cb38:;
  /* 13cb38: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13cb3c: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13cb40: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* 13cb44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13cb48: ret  */
  return;
  /* 13cb4c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13cb50: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13cb54: tbz w8, #0, #0x13cb68 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13cb68;
  /* 13cb58: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13cb5c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13cb60: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13cb64: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297256));
  fn1_142608(c);
L_13cb68:;
  /* 13cb68: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13cb6c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1297264));
  fn1_9cc20(c);
}

void fn1_142548(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248200));
  /* 142548: adrp x16, #0x151000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 14254c: ldr x17, [x16, #0xef8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(3832))));
  /* 142550: add x16, x16, #0xef8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(3832)));
  /* 142554: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142558: nop  */
  /* nop: no architectural effect here */
  /* 14255c: nop  */
  /* nop: no architectural effect here */
}

void fn1_142b48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249736));
  /* 142b48: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142b4c: ldr x17, [x16, #0xf8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(248))));
  /* 142b50: add x16, x16, #0xf8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(248)));
  /* 142b54: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142b58: nop  */
  /* nop: no architectural effect here */
  /* 142b5c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143148(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039251272));
  /* 143148: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14314c: ldr x17, [x16, #0x2f8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(760))));
  /* 143150: add x16, x16, #0x2f8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(760)));
  /* 143154: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143158: nop  */
  /* nop: no architectural effect here */
  /* 14315c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143748(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252808));
  /* 143748: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14374c: ldr x17, [x16, #0x4f8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1272))));
  /* 143750: add x16, x16, #0x4f8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1272)));
  /* 143754: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143758: nop  */
  /* nop: no architectural effect here */
  /* 14375c: nop  */
  /* nop: no architectural effect here */
}

void fn1_143d48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039254344));
  /* 143d48: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143d4c: ldr x17, [x16, #0x6f8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1784))));
  /* 143d50: add x16, x16, #0x6f8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1784)));
  /* 143d54: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143d58: nop  */
  /* nop: no architectural effect here */
  /* 143d5c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144348(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255880));
  /* 144348: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14434c: ldr x17, [x16, #0x8f8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2296))));
  /* 144350: add x16, x16, #0x8f8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2296)));
  /* 144354: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144358: nop  */
  /* nop: no architectural effect here */
  /* 14435c: nop  */
  /* nop: no architectural effect here */
}

void fn1_144948(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039257416));
  /* 144948: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 14494c: ldr x17, [x16, #0xaf8] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2808))));
  /* 144950: add x16, x16, #0xaf8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2808)));
  /* 144954: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144958: nop  */
  /* nop: no architectural effect here */
  /* 14495c: nop  */
  /* nop: no architectural effect here */
}

