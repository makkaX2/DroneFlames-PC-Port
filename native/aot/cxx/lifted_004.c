#include "lifted.h"

void fn1_9c880(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038569088));
  /* 9c880: bti c */
  /* bti: no architectural effect here */
  /* 9c884: nop  */
  /* nop: no architectural effect here */
  /* 9c888: adr x0, #0x148af8 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1346296)));
  /* 9c88c: b #0x1423e0 */
  fn1_1423e0(c); return;
}

void fn1_a10b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038587568));
  /* a10b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a10b4: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a10b8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a10bc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* a10c0: cmp x0, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(0));
  /* a10c4: nop  */
  /* nop: no architectural effect here */
  /* a10c8: adr x8, #0xa1090 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(659600)));
  /* a10cc: ldr x1, [x1, #0x8b8] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2232))));
  /* a10d0: csel x0, x8, x0, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 0)));
  /* a10d4: bl #0xa0c40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(659672));
  fn1_a0c40(c);
  /* a10d8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a10dc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a10e0: ret  */
  return;
}

void fn1_a23c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038592456));
  /* a23c8: bti c */
  /* bti: no architectural effect here */
  /* a23cc: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* a23d0: add x0, x0, #0xf69 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(3945)));
  /* a23d4: ret  */
  return;
}

void fn1_a84b0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038617264));
  /* a84b0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a84b4: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a84b8: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* a84bc: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* a84c0: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* a84c4: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a84c8: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* a84cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a84d0: ldp x8, x9, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a84d4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a84d8: b.eq #0xa8638 */
  if (ARC_COND(c, 0)) goto L_a8638;
  /* a84dc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a84e0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* a84e4: adrp x24, #0x149000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1347584)));
  /* a84e8: add x24, x24, #0xc88 */
  ARC_X_W(c, 24, (ARC_X_R(c, 24) + UINT64_C(3208)));
  /* a84ec: add x25, x0, #0x140 */
  ARC_X_W(c, 25, (ARC_X_R(c, 0) + UINT64_C(320)));
  /* a84f0: mov w26, #0x1b */
  ARC_W_W(c, 26, UINT64_C(27));
  /* a84f4: mov w27, #0x540 */
  ARC_W_W(c, 27, UINT64_C(1344));
  /* a84f8: b #0xa8550 */
  goto L_a8550;
L_a84fc:;
  /* a84fc: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* a8500: add x28, x23, x8 */
  ARC_X_W(c, 28, (ARC_X_R(c, 23) + ARC_X_R(c, 8)));
  /* a8504: str x9, [x23, #8] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(8)), ARC_X_R(c, 9));
  /* a8508: ldr x9, [x20] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 20)));
  /* a850c: str x24, [x28, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 28) + INT64_C(16));
    ARC_X_W(c, 28, ARC_X_R(c, 28) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 24));
  }
  /* a8510: ldurh w8, [x28, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 28) + INT64_C(9))));
  /* a8514: strb w26, [x28, #8] */
  arc_st8((ARC_X_R(c, 28) + INT64_C(8)), ARC_W_R(c, 26));
  /* a8518: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* a851c: stp x9, x21, [x28, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* a8520: orr w8, w8, w27 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 27)));
  /* a8524: strb w22, [x28, #0x20] */
  arc_st8((ARC_X_R(c, 28) + INT64_C(32)), ARC_W_R(c, 22));
  /* a8528: sturh w8, [x28, #9] */
  arc_st16((ARC_X_R(c, 28) + INT64_C(9)), ARC_W_R(c, 8));
  /* a852c: ldp x23, x8, [x19, #0x130] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(304));
    ARC_X_W(c, 23, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* a8530: str x28, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 28));
  /* a8534: cmp x23, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* a8538: b.eq #0xa85d0 */
  if (ARC_COND(c, 0)) goto L_a85d0;
L_a853c:;
  /* a853c: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* a8540: str x28, [x23], #8 */
  { const uint64_t _a = ARC_X_R(c, 23);
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 28));
  }
  /* a8544: str x23, [x19, #0x130] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(304)), ARC_X_R(c, 23));
  /* a8548: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* a854c: b.eq #0xa8638 */
  if (ARC_COND(c, 0)) goto L_a8638;
L_a8550:;
  /* a8550: ldrb w10, [x8] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 8)));
  /* a8554: cmp w10, #0x57 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(87));
  /* a8558: b.ne #0xa8638 */
  if (ARC_COND(c, 1)) goto L_a8638;
  /* a855c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* a8560: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* a8564: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* a8568: b.eq #0xa8588 */
  if (ARC_COND(c, 0)) goto L_a8588;
  /* a856c: ldrb w9, [x10] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 10)));
  /* a8570: cmp w9, #0x50 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(80));
  /* a8574: b.ne #0xa8588 */
  if (ARC_COND(c, 1)) goto L_a8588;
  /* a8578: add x8, x8, #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(2)));
  /* a857c: mov w22, #1 */
  ARC_W_W(c, 22, UINT64_C(1));
  /* a8580: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* a8584: b #0xa858c */
  goto L_a858c;
L_a8588:;
  /* a8588: mov w22, wzr */
  ARC_W_W(c, 22, ARC_W_R(c, 31));
L_a858c:;
  /* a858c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* a8590: bl #0xa8930 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689556));
  fn1_a8930(c);
  /* a8594: cbz x0, #0xa8640 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8640;
  /* a8598: ldr x23, [x19, #0x1330] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 19) + INT64_C(4912))));
  /* a859c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* a85a0: ldr x8, [x23, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(8))));
  /* a85a4: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* a85a8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* a85ac: b.hi #0xa84fc */
  if (ARC_COND(c, 8)) goto L_a84fc;
  /* a85b0: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* a85b4: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689592));
  fn1_1428a8(c);
  /* a85b8: cbz x0, #0xa8664 */
  if ((ARC_X_R(c, 0)) == 0) goto L_a8664;
  /* a85bc: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* a85c0: stp x23, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 23));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* a85c4: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a85c8: str x0, [x19, #0x1330] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(4912)), ARC_X_R(c, 0));
  /* a85cc: b #0xa84fc */
  goto L_a84fc;
L_a85d0:;
  /* a85d0: ldr x22, [x19, #0x128] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 19) + INT64_C(296))));
  /* a85d4: sub x21, x23, x22 */
  ARC_X_W(c, 21, (ARC_X_R(c, 23) - ARC_X_R(c, 22)));
  /* a85d8: cmp x22, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 25));
  /* a85dc: lsl x1, x21, #1 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(1)) & 63)));
  /* a85e0: b.eq #0xa85f8 */
  if (ARC_COND(c, 0)) goto L_a85f8;
  /* a85e4: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* a85e8: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689644));
  fn1_142878(c);
  /* a85ec: str x0, [x19, #0x128] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(296)), ARC_X_R(c, 0));
  /* a85f0: cbnz x0, #0xa8624 */
  if ((ARC_X_R(c, 0)) != 0) goto L_a8624;
  /* a85f4: b #0xa8668 */
  goto L_a8668;
L_a85f8:;
  /* a85f8: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* a85fc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689664));
  fn1_1428a8(c);
  /* a8600: cbz x0, #0xa866c */
  if ((ARC_X_R(c, 0)) == 0) goto L_a866c;
  /* a8604: cmp x23, x25 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 25));
  /* a8608: b.eq #0xa8620 */
  if (ARC_COND(c, 0)) goto L_a8620;
  /* a860c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* a8610: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* a8614: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* a8618: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689692));
  fn1_1449f0(c);
  /* a861c: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
L_a8620:;
  /* a8620: str x0, [x19, #0x128] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(296)), ARC_X_R(c, 0));
L_a8624:;
  /* a8624: asr x8, x21, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 21)) >> ((UINT64_C(2)) & 63))));
  /* a8628: add x23, x0, x21 */
  ARC_X_W(c, 23, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
  /* a862c: add x8, x0, x8, lsl #3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(ARC_X_R(c, 8)) << 3)));
  /* a8630: str x8, [x19, #0x138] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(312)), ARC_X_R(c, 8));
  /* a8634: b #0xa853c */
  goto L_a853c;
L_a8638:;
  /* a8638: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* a863c: b #0xa8644 */
  goto L_a8644;
L_a8640:;
  /* a8640: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
L_a8644:;
  /* a8644: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* a8648: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* a864c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* a8650: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* a8654: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* a8658: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a865c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a8660: ret  */
  return;
L_a8664:;
  /* a8664: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689768));
  fn1_142488(c);
L_a8668:;
  /* a8668: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689772));
  fn1_1427b8(c);
L_a866c:;
  /* a866c: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(689776));
  fn1_1427b8(c);
}

void fn1_aeb9c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038643612));
  /* aeb9c: bti c */
  /* bti: no architectural effect here */
  /* aeba0: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* aeba4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b3900(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038663424));
  /* b3900: bti c */
  /* bti: no architectural effect here */
  /* b3904: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* b3908: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7580(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038678912));
  /* b7580: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b7584: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b7588: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b758c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b7590: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b7594: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b7598: ldr x0, [x0, #0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* b759c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b75a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* b75a4: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* b75a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751020));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* b75ac: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* b75b0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b75b4: add x10, x8, #5 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* b75b8: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b75bc: b.ls #0xb75e4 */
  if (ARC_COND(c, 9)) goto L_b75e4;
  /* b75c0: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b75c4: add x8, x8, #0x3e5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(997)));
  /* b75c8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b75cc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b75d0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b75d4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751064));
  fn1_142878(c);
  /* b75d8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b75dc: cbz x0, #0xb76c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b76c8;
  /* b75e0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b75e4:;
  /* b75e4: mov w10, #0x615b */
  ARC_W_W(c, 10, UINT64_C(24923));
  /* b75e8: add x8, x0, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b75ec: mov w9, #0x3a */
  ARC_W_W(c, 9, UINT64_C(58));
  /* b75f0: movk w10, #0x6962, lsl #16 */
  ARC_W_W(c, 10, ((ARC_W_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(1768030208)));
  /* b75f4: strb w9, [x8, #4] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 9));
  /* b75f8: str w10, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* b75fc: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b7600: add x8, x8, #5 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(5)));
  /* b7604: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b7608: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* b760c: cbz x21, #0xb7668 */
  if ((ARC_X_R(c, 21)) == 0) goto L_b7668;
  /* b7610: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b7614: add x9, x21, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b7618: ldr x20, [x20, #0x18] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* b761c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b7620: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* b7624: b.ls #0xb764c */
  if (ARC_COND(c, 9)) goto L_b764c;
  /* b7628: lsl x8, x10, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* b762c: add x9, x9, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(992)));
  /* b7630: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* b7634: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* b7638: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b763c: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751168));
  fn1_142878(c);
  /* b7640: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b7644: cbz x0, #0xb76d0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_b76d0;
  /* b7648: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b764c:;
  /* b764c: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* b7650: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* b7654: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* b7658: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751196));
  fn1_1449d8(c);
  /* b765c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b7660: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* b7664: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_b7668:;
  /* b7668: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* b766c: add x10, x8, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b7670: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* b7674: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* b7678: b.ls #0xb76a0 */
  if (ARC_COND(c, 9)) goto L_b76a0;
  /* b767c: lsl x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* b7680: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* b7684: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* b7688: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* b768c: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* b7690: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751252));
  fn1_142878(c);
  /* b7694: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* b7698: cbz x0, #0xb76cc */
  if ((ARC_X_R(c, 0)) == 0) goto L_b76cc;
  /* b769c: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_b76a0:;
  /* b76a0: mov w9, #0x5d */
  ARC_W_W(c, 9, UINT64_C(93));
  /* b76a4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* b76a8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* b76ac: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* b76b0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* b76b4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* b76b8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* b76bc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* b76c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* b76c4: ret  */
  return;
L_b76c8:;
  /* b76c8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751308));
  fn1_1427b8(c);
L_b76cc:;
  /* b76cc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751312));
  fn1_1427b8(c);
L_b76d0:;
  /* b76d0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(751316));
  fn1_1427b8(c);
}

void fn1_b9f88(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038689672));
  /* b9f88: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* b9f8c: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* b9f90: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* b9f94: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* b9f98: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* b9f9c: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* b9fa0: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* b9fa4: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* b9fa8: sub x9, x8, #0xfd0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4048)));
  /* b9fac: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* b9fb0: b.hi #0xb9fd4 */
  if (ARC_COND(c, 8)) goto L_b9fd4;
  /* b9fb4: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* b9fb8: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* b9fbc: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761792));
  fn1_1428a8(c);
  /* b9fc0: cbz x0, #0xba030 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba030;
  /* b9fc4: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* b9fc8: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* b9fcc: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* b9fd0: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_b9fd4:;
  /* b9fd4: add x9, x8, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(32)));
  /* b9fd8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* b9fdc: add x20, x21, x8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* b9fe0: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* b9fe4: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761832));
  fn1_142860(c);
  /* b9fe8: adrp x9, #0x149000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1347584)));
  /* b9fec: add x9, x9, #0xc10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(3088)));
  /* b9ff0: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* b9ff4: str x9, [x20, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 20) + INT64_C(16));
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* b9ff8: ldurh w9, [x20, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* b9ffc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* ba000: mov w10, #8 */
  ARC_W_W(c, 10, UINT64_C(8));
  /* ba004: and w9, w9, #0xf000 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) & UINT64_C(61440)));
  /* ba008: strb w10, [x20, #8] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(8)), ARC_W_R(c, 10));
  /* ba00c: orr w9, w9, w11 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | ARC_W_R(c, 11)));
  /* ba010: stp x19, x8, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* ba014: sturh w9, [x20, #9] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(9)), ARC_W_R(c, 9));
  /* ba018: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ba01c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba020: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ba024: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba028: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba02c: ret  */
  return;
L_ba030:;
  /* ba030: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(761908));
  fn1_142488(c);
}

void fn1_bd674(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038703732));
  /* bd674: bti c */
  /* bti: no architectural effect here */
  /* bd678: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* bd67c: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_c89a0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038749600));
L_c89a0:;
  /* c89a0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* c89a4: stp d15, d14, [sp, #-0xa0]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-160));
    (c)->sp = (c)->sp + INT64_C(-160);
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64((_pa + 8), (c)->q[14].u64[0]);
  }
  /* c89a8: stp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64((_pa + 8), (c)->q[12].u64[0]);
  }
  /* c89ac: stp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64((_pa + 8), (c)->q[10].u64[0]);
  }
  /* c89b0: stp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64((_pa + 8), (c)->q[8].u64[0]);
  }
  /* c89b4: stp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* c89b8: stp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* c89bc: stp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* c89c0: stp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* c89c4: stp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* c89c8: stp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* c89cc: add x29, sp, #0x40 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(64)));
  /* c89d0: sub sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(496)));
  /* c89d4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c89d8: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c89dc: mov x21, x2 */
  ARC_X_W(c, 21, ARC_X_R(c, 2));
  /* c89e0: ldr q0, [x8, #0xb00] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2816))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2816)) + 8));
  /* c89e4: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c89e8: ldr q30, [x9, #0xba0] */
  arc_q_w(c, 30, arc_ld64((ARC_X_R(c, 9) + INT64_C(2976))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2976)) + 8));
  /* c89ec: ldr q31, [x8, #0xcf0] */
  arc_q_w(c, 31, arc_ld64((ARC_X_R(c, 8) + INT64_C(3312))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3312)) + 8));
  /* c89f0: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c89f4: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c89f8: ldr q8, [x8, #0xa50] */
  arc_q_w(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2640))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2640)) + 8));
  /* c89fc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a00: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* c8a04: ldr q10, [x8, #0x9d0] */
  arc_q_w(c, 10, arc_ld64((ARC_X_R(c, 8) + INT64_C(2512))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2512)) + 8));
  /* c8a08: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a0c: ldr q9, [x9, #0x990] */
  arc_q_w(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(2448))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2448)) + 8));
  /* c8a10: ldr q11, [x8, #0xb90] */
  arc_q_w(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(2960))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2960)) + 8));
  /* c8a14: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a18: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a1c: ldr q13, [x8, #0xd10] */
  arc_q_w(c, 13, arc_ld64((ARC_X_R(c, 8) + INT64_C(3344))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3344)) + 8));
  /* c8a20: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a24: ldr q12, [x9, #0xaa0] */
  arc_q_w(c, 12, arc_ld64((ARC_X_R(c, 9) + INT64_C(2720))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2720)) + 8));
  /* c8a28: ldr q14, [x8, #0x9e0] */
  arc_q_w(c, 14, arc_ld64((ARC_X_R(c, 8) + INT64_C(2528))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2528)) + 8));
  /* c8a2c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a30: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a34: ldr q0, [x8, #0xd60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3424))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3424)) + 8));
  /* c8a38: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a3c: ldr q15, [x9, #0xb50] */
  arc_q_w(c, 15, arc_ld64((ARC_X_R(c, 9) + INT64_C(2896))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2896)) + 8));
  /* c8a40: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a44: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* c8a48: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* c8a4c: stur q0, [x29, #-0x70] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-112)) + 8, (c)->q[0].u64[1]);
  /* c8a50: ldr q0, [x8, #0xbc0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3008))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3008)) + 8));
  /* c8a54: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a58: adrp x6, #0x52000 */
  ARC_X_W(c, 6, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a5c: adrp x7, #0x52000 */
  ARC_X_W(c, 7, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a60: adrp x26, #0x52000 */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a64: stur q0, [x29, #-0x80] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-128)) + 8, (c)->q[0].u64[1]);
  /* c8a68: ldr q0, [x9, #0x970] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2416))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2416)) + 8));
  /* c8a6c: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a70: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c8a74: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c8a78: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c8a7c: stur q0, [x29, #-0x90] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-144)) + 8, (c)->q[0].u64[1]);
  /* c8a80: ldr q0, [x8, #0xb40] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2880))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2880)) + 8));
  /* c8a84: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8a88: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c8a8c: mov x28, #-1 */
  ARC_X_W(c, 28, UINT64_C(18446744073709551615));
  /* c8a90: str w3, [sp, #0xac] */
  arc_st32(((c)->sp + INT64_C(172)), ARC_W_R(c, 3));
  /* c8a94: stur q0, [x29, #-0xa0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-160)) + 8, (c)->q[0].u64[1]);
  /* c8a98: ldr q0, [x8, #0x9f0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2544))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2544)) + 8));
  /* c8a9c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8aa0: stp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, (c)->q[15].u64[0]);
    arc_st64(_pa + 8, (c)->q[15].u64[1]);
    arc_st64((_pa + 16), (c)->q[14].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[14].u64[1]);
  }
  /* c8aa4: stur q0, [x29, #-0xb0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-176)) + 8, (c)->q[0].u64[1]);
  /* c8aa8: ldr q0, [x9, #0x980] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2432))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2432)) + 8));
  /* c8aac: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8ab0: stp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[13].u64[0]);
    arc_st64(_pa + 8, (c)->q[13].u64[1]);
    arc_st64((_pa + 16), (c)->q[12].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[12].u64[1]);
  }
  /* c8ab4: stur q0, [x29, #-0xc0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-192)) + 8, (c)->q[0].u64[1]);
  /* c8ab8: ldr q0, [x8, #0xd30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3376))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3376)) + 8));
  /* c8abc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8ac0: stp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, (c)->q[11].u64[0]);
    arc_st64(_pa + 8, (c)->q[11].u64[1]);
    arc_st64((_pa + 16), (c)->q[10].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[10].u64[1]);
  }
  /* c8ac4: stur q0, [x29, #-0xd0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-208)) + 8, (c)->q[0].u64[1]);
  /* c8ac8: ldr q0, [x8, #0xb10] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2832))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2832)) + 8));
  /* c8acc: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8ad0: stp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, (c)->q[9].u64[0]);
    arc_st64(_pa + 8, (c)->q[9].u64[1]);
    arc_st64((_pa + 16), (c)->q[8].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[8].u64[1]);
  }
  /* c8ad4: stur q0, [x29, #-0xe0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-224)) + 8, (c)->q[0].u64[1]);
  /* c8ad8: ldr q0, [x9, #0xc30] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(3120))), arc_ld64((ARC_X_R(c, 9) + INT64_C(3120)) + 8));
  /* c8adc: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8ae0: stp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, (c)->q[31].u64[0]);
    arc_st64(_pa + 8, (c)->q[31].u64[1]);
    arc_st64((_pa + 16), (c)->q[30].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[30].u64[1]);
  }
  /* c8ae4: stur q0, [x29, #-0xf0] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-240)) + 8, (c)->q[0].u64[1]);
  /* c8ae8: ldr q0, [x8, #0xd70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3440))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3440)) + 8));
  /* c8aec: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8af0: stur q0, [x29, #-0x100] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-256)) + 8, (c)->q[0].u64[1]);
  /* c8af4: ldr q0, [x8, #0xa60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2656))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2656)) + 8));
  /* c8af8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8afc: str q0, [sp, #0x120] */
  arc_st64(((c)->sp + INT64_C(288)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(288)) + 8, (c)->q[0].u64[1]);
  /* c8b00: ldr q0, [x9, #0x9a0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2464))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2464)) + 8));
  /* c8b04: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8b08: str q0, [sp, #0x110] */
  arc_st64(((c)->sp + INT64_C(272)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(272)) + 8, (c)->q[0].u64[1]);
  /* c8b0c: ldr q0, [x8, #0xbf0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3056))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3056)) + 8));
  /* c8b10: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8b14: str q0, [sp, #0x100] */
  arc_st64(((c)->sp + INT64_C(256)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(256)) + 8, (c)->q[0].u64[1]);
  /* c8b18: ldr q0, [x8, #0xbb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2992))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2992)) + 8));
  /* c8b1c: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8b20: str q0, [sp, #0xf0] */
  arc_st64(((c)->sp + INT64_C(240)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(240)) + 8, (c)->q[0].u64[1]);
  /* c8b24: ldr q0, [x9, #0x9b0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2480))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2480)) + 8));
  /* c8b28: adrp x9, #0x52000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8b2c: str q0, [sp, #0xe0] */
  arc_st64(((c)->sp + INT64_C(224)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(224)) + 8, (c)->q[0].u64[1]);
  /* c8b30: ldr q0, [x8, #0xcb0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3248))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3248)) + 8));
  /* c8b34: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* c8b38: str q0, [sp, #0xd0] */
  arc_st64(((c)->sp + INT64_C(208)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(208)) + 8, (c)->q[0].u64[1]);
  /* c8b3c: ldr q0, [x8, #0xb60] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(2912))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2912)) + 8));
  /* c8b40: str q0, [sp, #0xc0] */
  arc_st64(((c)->sp + INT64_C(192)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(192)) + 8, (c)->q[0].u64[1]);
  /* c8b44: ldr q0, [x9, #0xb20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 9) + INT64_C(2848))), arc_ld64((ARC_X_R(c, 9) + INT64_C(2848)) + 8));
  /* c8b48: str q0, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), (c)->q[0].u64[0]);
  arc_st64(((c)->sp + INT64_C(176)) + 8, (c)->q[0].u64[1]);
L_c8b4c:;
  /* c8b4c: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c8b50:;
  /* c8b50: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* c8b54: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* c8b58: asr x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(2)) & 63))));
  /* c8b5c: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* c8b60: b.gt #0xc8b74 */
  if (ARC_COND(c, 12)) goto L_c8b74;
  /* c8b64: b.lo #0xc9a40 */
  if (ARC_COND(c, 3)) goto L_c9a40;
  /* c8b68: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c8b6c: b.ne #0xc8b8c */
  if (ARC_COND(c, 1)) goto L_c8b8c;
  /* c8b70: b #0xc9964 */
  goto L_c9964;
L_c8b74:;
  /* c8b74: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* c8b78: b.eq #0xc9980 */
  if (ARC_COND(c, 0)) goto L_c9980;
  /* c8b7c: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* c8b80: b.eq #0xc99cc */
  if (ARC_COND(c, 0)) goto L_c99cc;
  /* c8b84: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* c8b88: b.eq #0xc98ac */
  if (ARC_COND(c, 0)) goto L_c98ac;
L_c8b8c:;
  /* c8b8c: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* c8b90: b.le #0xc9a74 */
  if (ARC_COND(c, 13)) goto L_c9a74;
  /* c8b94: cbz x21, #0xc9af0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_c9af0;
  /* c8b98: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* c8b9c: ldur w10, [x20, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8ba0: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* c8ba4: add x9, x19, x9, lsl #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* c8ba8: b.lo #0xc8ce4 */
  if (ARC_COND(c, 3)) goto L_c8ce4;
  /* c8bac: ldr w8, [x9] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 9)));
  /* c8bb0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8bb4: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8bb8: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8bbc: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c8bc0: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c8bc4: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8bc8: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c8bcc: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8bd0: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8bd4: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8bd8: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c8bdc: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
  /* c8be0: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c8be4: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c8be8: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c8bec: str w10, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 10));
  /* c8bf0: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c8bf4: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c8bf8: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c8bfc: ldur w8, [x9, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c8c00: ldur w10, [x20, #-8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c8c04: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8c08: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8c0c: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8c10: stur w11, [x20, #-8] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-8)), ARC_W_R(c, 11));
  /* c8c14: stur w8, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 8));
  /* c8c18: ldur w8, [x20, #-8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-8))));
  /* c8c1c: ldr w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c8c20: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8c24: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8c28: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8c2c: stur w11, [x20, #-8] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-8)), ARC_W_R(c, 11));
  /* c8c30: ldur w11, [x9, #-4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c8c34: ldr w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c8c38: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c8c3c: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c8c40: str w10, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 10));
  /* c8c44: ldur w10, [x9, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c8c48: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c8c4c: stur w8, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 8));
  /* c8c50: ldr w8, [x9, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 9) + INT64_C(4))));
  /* c8c54: ldur w10, [x20, #-0xc] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 20) + INT64_C(-12))));
  /* c8c58: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8c5c: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8c60: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8c64: stur w11, [x20, #-0xc] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-12)), ARC_W_R(c, 11));
  /* c8c68: str w8, [x9, #4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(4)), ARC_W_R(c, 8));
  /* c8c6c: ldur w8, [x20, #-0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-12))));
  /* c8c70: ldr w10, [x19, #8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c8c74: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8c78: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8c7c: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8c80: stur w11, [x20, #-0xc] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-12)), ARC_W_R(c, 11));
  /* c8c84: ldr w11, [x9, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(4))));
  /* c8c88: ldr w10, [x19, #8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c8c8c: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c8c90: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c8c94: str w10, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 10));
  /* c8c98: ldp w11, w10, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c8c9c: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c8ca0: ldur w10, [x9, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(-4))));
  /* c8ca4: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* c8ca8: csel w12, w11, w8, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c8cac: csel w8, w11, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c8cb0: cmp w12, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 10));
  /* c8cb4: csel w11, w12, w10, lo */
  ARC_W_W(c, 11, (ARC_COND(c, 3) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c8cb8: csel w12, w12, w10, hi */
  ARC_W_W(c, 12, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 10)));
  /* c8cbc: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c8cc0: csel w10, w10, w8, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c8cc4: csel w8, w8, w11, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* c8cc8: stur w10, [x9, #-4] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c8ccc: stp w8, w12, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 12));
  }
  /* c8cd0: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c8cd4: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c8cd8: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c8cdc: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* c8ce0: b #0xc8d34 */
  goto L_c8d34;
L_c8ce4:;
  /* c8ce4: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* c8ce8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8cec: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8cf0: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8cf4: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c8cf8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c8cfc: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8d00: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c8d04: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8d08: csel w11, w8, w10, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8d0c: csel w8, w8, w10, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c8d10: stur w11, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 11));
  /* c8d14: ldr w11, [x19] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 19)));
  /* c8d18: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c8d1c: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c8d20: csel w10, w10, w11, lo */
  ARC_W_W(c, 10, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* c8d24: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c8d28: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c8d2c: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c8d30: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_c8d34:;
  /* c8d34: ldr w9, [sp, #0xac] */
  ARC_W_W(c, 9, arc_ld32(((c)->sp + INT64_C(172))));
  /* c8d38: sub x21, x21, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 21) - UINT64_C(1)));
  /* c8d3c: tbnz w9, #0, #0xc8d4c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_c8d4c;
  /* c8d40: ldur w9, [x19, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(-4))));
  /* c8d44: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* c8d48: b.hs #0xc97bc */
  if (ARC_COND(c, 2)) goto L_c97bc;
L_c8d4c:;
  /* c8d4c: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c8d50: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c8d54: b.hs #0xc8d6c */
  if (ARC_COND(c, 2)) goto L_c8d6c;
  /* c8d58: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c8d5c:;
  /* c8d5c: ldr w10, [x9, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c8d60: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c8d64: b.hs #0xc8d5c */
  if (ARC_COND(c, 2)) goto L_c8d5c;
  /* c8d68: b #0xc8d8c */
  goto L_c8d8c;
L_c8d6c:;
  /* c8d6c: add x10, x19, #4 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(4)));
L_c8d70:;
  /* c8d70: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* c8d74: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* c8d78: b.hs #0xc8d8c */
  if (ARC_COND(c, 2)) goto L_c8d8c;
  /* c8d7c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c8d80: ldr w11, [x10], #4 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* c8d84: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c8d88: b.hs #0xc8d70 */
  if (ARC_COND(c, 2)) goto L_c8d70;
L_c8d8c:;
  /* c8d8c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c8d90: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* c8d94: b.hs #0xc8da8 */
  if (ARC_COND(c, 2)) goto L_c8da8;
  /* c8d98: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_c8d9c:;
  /* c8d9c: ldr w11, [x10, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-4));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* c8da0: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c8da4: b.lo #0xc8d9c */
  if (ARC_COND(c, 3)) goto L_c8d9c;
L_c8da8:;
  /* c8da8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c8dac: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c8db0: b.hs #0xc8dc8 */
  if (ARC_COND(c, 2)) goto L_c8dc8;
  /* c8db4: ldr w12, [x10] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 10)));
  /* c8db8: ldr w13, [x9] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 9)));
  /* c8dbc: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* c8dc0: str w12, [x11], #4 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 12));
  }
  /* c8dc4: str w13, [x10] */
  arc_st32(ARC_X_R(c, 10), ARC_W_R(c, 13));
L_c8dc8:;
  /* c8dc8: sub x12, x10, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(4)));
  /* c8dcc: sub x13, x12, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c8dd0: cmp x13, #0x1f9 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(505));
  /* c8dd4: b.lt #0xc9378 */
  if (ARC_COND(c, 11)) goto L_c9378;
  /* c8dd8: dup v0.4s, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 8));
    _t.u32[1] = (ARC_W_R(c, 8));
    _t.u32[2] = (ARC_W_R(c, 8));
    _t.u32[3] = (ARC_W_R(c, 8));
    (c)->q[0] = _t; }
  /* c8ddc: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c8de0: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c8de4: b #0xc8e10 */
  goto L_c8e10;
L_c8de8:;
  /* c8de8: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c8dec: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* c8df0: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c8df4: add x11, x11, x15, lsl #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 8)));
  /* c8df8: csel x15, x22, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 22)) : ARC_X_R(c, 31)));
  /* c8dfc: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* c8e00: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* c8e04: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* c8e08: cmp x15, #0x1f8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(504));
  /* c8e0c: b.le #0xc9388 */
  if (ARC_COND(c, 13)) goto L_c9388;
L_c8e10:;
  /* c8e10: cbz x13, #0xc8e20 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c8e20;
  /* c8e14: cbz x14, #0xc9060 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c9060;
L_c8e18:;
  /* c8e18: cbnz x13, #0xc9334 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c9334;
  /* c8e1c: b #0xc8de8 */
  goto L_c8de8;
L_c8e20:;
  /* c8e20: ldp q1, q2, [x11] */
  { const uint64_t _pa = ARC_X_R(c, 11);
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 2, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8e24: ldur q21, [x29, #-0x60] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c8e28: ldp q3, q4, [x11, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(32));
    arc_q_w(c, 3, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8e2c: ldur q25, [x29, #-0x100] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c8e30: ldp q5, q6, [x11, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(64));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 6, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8e34: cmhi v1.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[1].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[1].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[1].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[1].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[1] = _t; }
  /* c8e38: cmhi v2.4s, v0.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[2].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[2].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[2].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[2].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[2] = _t; }
  /* c8e3c: cmhi v3.4s, v0.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[3].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[3].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[3].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[3].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[3] = _t; }
  /* c8e40: cmhi v4.4s, v0.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[4].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[4].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[4] = _t; }
  /* c8e44: ldp q7, q16, [x11, #0x60] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(96));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8e48: cmhi v5.4s, v0.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[5].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[5].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[5].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[5].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c8e4c: ushll v17.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[17] = _t; }
  /* c8e50: ushll2 v1.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[1] = _t; }
  /* c8e54: ushll2 v18.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c8e58: ushll v2.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[2] = _t; }
  /* c8e5c: ushll2 v19.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[19] = _t; }
  /* c8e60: ushll v3.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[3] = _t; }
  /* c8e64: ushll v20.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c8e68: ushll2 v4.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* c8e6c: cmhi v7.4s, v0.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[7].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[7].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[7].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[7].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c8e70: bic v1.16b, v21.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[1].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[1].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[1].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[1].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[1].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[1].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[1].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[1].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[1].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[1].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[1].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[1].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[1].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[1].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[1].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[1].u8[15]);
    (c)->q[1] = _t; }
  /* c8e74: bic v17.16b, v30.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[30].u8[0] & (~(c)->q[17].u8[0]);
    _t.u8[1] = (c)->q[30].u8[1] & (~(c)->q[17].u8[1]);
    _t.u8[2] = (c)->q[30].u8[2] & (~(c)->q[17].u8[2]);
    _t.u8[3] = (c)->q[30].u8[3] & (~(c)->q[17].u8[3]);
    _t.u8[4] = (c)->q[30].u8[4] & (~(c)->q[17].u8[4]);
    _t.u8[5] = (c)->q[30].u8[5] & (~(c)->q[17].u8[5]);
    _t.u8[6] = (c)->q[30].u8[6] & (~(c)->q[17].u8[6]);
    _t.u8[7] = (c)->q[30].u8[7] & (~(c)->q[17].u8[7]);
    _t.u8[8] = (c)->q[30].u8[8] & (~(c)->q[17].u8[8]);
    _t.u8[9] = (c)->q[30].u8[9] & (~(c)->q[17].u8[9]);
    _t.u8[10] = (c)->q[30].u8[10] & (~(c)->q[17].u8[10]);
    _t.u8[11] = (c)->q[30].u8[11] & (~(c)->q[17].u8[11]);
    _t.u8[12] = (c)->q[30].u8[12] & (~(c)->q[17].u8[12]);
    _t.u8[13] = (c)->q[30].u8[13] & (~(c)->q[17].u8[13]);
    _t.u8[14] = (c)->q[30].u8[14] & (~(c)->q[17].u8[14]);
    _t.u8[15] = (c)->q[30].u8[15] & (~(c)->q[17].u8[15]);
    (c)->q[17] = _t; }
  /* c8e78: ushll v21.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c8e7c: bic v2.16b, v8.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[8].u8[0] & (~(c)->q[2].u8[0]);
    _t.u8[1] = (c)->q[8].u8[1] & (~(c)->q[2].u8[1]);
    _t.u8[2] = (c)->q[8].u8[2] & (~(c)->q[2].u8[2]);
    _t.u8[3] = (c)->q[8].u8[3] & (~(c)->q[2].u8[3]);
    _t.u8[4] = (c)->q[8].u8[4] & (~(c)->q[2].u8[4]);
    _t.u8[5] = (c)->q[8].u8[5] & (~(c)->q[2].u8[5]);
    _t.u8[6] = (c)->q[8].u8[6] & (~(c)->q[2].u8[6]);
    _t.u8[7] = (c)->q[8].u8[7] & (~(c)->q[2].u8[7]);
    _t.u8[8] = (c)->q[8].u8[8] & (~(c)->q[2].u8[8]);
    _t.u8[9] = (c)->q[8].u8[9] & (~(c)->q[2].u8[9]);
    _t.u8[10] = (c)->q[8].u8[10] & (~(c)->q[2].u8[10]);
    _t.u8[11] = (c)->q[8].u8[11] & (~(c)->q[2].u8[11]);
    _t.u8[12] = (c)->q[8].u8[12] & (~(c)->q[2].u8[12]);
    _t.u8[13] = (c)->q[8].u8[13] & (~(c)->q[2].u8[13]);
    _t.u8[14] = (c)->q[8].u8[14] & (~(c)->q[2].u8[14]);
    _t.u8[15] = (c)->q[8].u8[15] & (~(c)->q[2].u8[15]);
    (c)->q[2] = _t; }
  /* c8e80: bic v19.16b, v9.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[9].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[9].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[9].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[9].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[9].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[9].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[9].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[9].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[9].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[9].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[9].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[9].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[9].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[9].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[9].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[9].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c8e84: bic v3.16b, v10.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[10].u8[0] & (~(c)->q[3].u8[0]);
    _t.u8[1] = (c)->q[10].u8[1] & (~(c)->q[3].u8[1]);
    _t.u8[2] = (c)->q[10].u8[2] & (~(c)->q[3].u8[2]);
    _t.u8[3] = (c)->q[10].u8[3] & (~(c)->q[3].u8[3]);
    _t.u8[4] = (c)->q[10].u8[4] & (~(c)->q[3].u8[4]);
    _t.u8[5] = (c)->q[10].u8[5] & (~(c)->q[3].u8[5]);
    _t.u8[6] = (c)->q[10].u8[6] & (~(c)->q[3].u8[6]);
    _t.u8[7] = (c)->q[10].u8[7] & (~(c)->q[3].u8[7]);
    _t.u8[8] = (c)->q[10].u8[8] & (~(c)->q[3].u8[8]);
    _t.u8[9] = (c)->q[10].u8[9] & (~(c)->q[3].u8[9]);
    _t.u8[10] = (c)->q[10].u8[10] & (~(c)->q[3].u8[10]);
    _t.u8[11] = (c)->q[10].u8[11] & (~(c)->q[3].u8[11]);
    _t.u8[12] = (c)->q[10].u8[12] & (~(c)->q[3].u8[12]);
    _t.u8[13] = (c)->q[10].u8[13] & (~(c)->q[3].u8[13]);
    _t.u8[14] = (c)->q[10].u8[14] & (~(c)->q[3].u8[14]);
    _t.u8[15] = (c)->q[10].u8[15] & (~(c)->q[3].u8[15]);
    (c)->q[3] = _t; }
  /* c8e88: bic v20.16b, v12.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[12].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[12].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[12].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[12].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[12].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[12].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[12].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[12].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[12].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[12].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[12].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[12].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[12].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[12].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[12].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[12].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* c8e8c: cmhi v6.4s, v0.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[6].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[6].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[6].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[6].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[6] = _t; }
  /* c8e90: bic v18.16b, v31.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[31].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[31].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[31].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[31].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[31].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[31].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[31].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[31].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[31].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[31].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[31].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[31].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[31].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[31].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[31].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[31].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* c8e94: bic v4.16b, v11.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[11].u8[0] & (~(c)->q[4].u8[0]);
    _t.u8[1] = (c)->q[11].u8[1] & (~(c)->q[4].u8[1]);
    _t.u8[2] = (c)->q[11].u8[2] & (~(c)->q[4].u8[2]);
    _t.u8[3] = (c)->q[11].u8[3] & (~(c)->q[4].u8[3]);
    _t.u8[4] = (c)->q[11].u8[4] & (~(c)->q[4].u8[4]);
    _t.u8[5] = (c)->q[11].u8[5] & (~(c)->q[4].u8[5]);
    _t.u8[6] = (c)->q[11].u8[6] & (~(c)->q[4].u8[6]);
    _t.u8[7] = (c)->q[11].u8[7] & (~(c)->q[4].u8[7]);
    _t.u8[8] = (c)->q[11].u8[8] & (~(c)->q[4].u8[8]);
    _t.u8[9] = (c)->q[11].u8[9] & (~(c)->q[4].u8[9]);
    _t.u8[10] = (c)->q[11].u8[10] & (~(c)->q[4].u8[10]);
    _t.u8[11] = (c)->q[11].u8[11] & (~(c)->q[4].u8[11]);
    _t.u8[12] = (c)->q[11].u8[12] & (~(c)->q[4].u8[12]);
    _t.u8[13] = (c)->q[11].u8[13] & (~(c)->q[4].u8[13]);
    _t.u8[14] = (c)->q[11].u8[14] & (~(c)->q[4].u8[14]);
    _t.u8[15] = (c)->q[11].u8[15] & (~(c)->q[4].u8[15]);
    (c)->q[4] = _t; }
  /* c8e98: cmhi v16.4s, v0.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[16].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[16].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[16].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[16].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c8e9c: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* c8ea0: ushll v22.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c8ea4: ushll2 v7.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c8ea8: orr v3.16b, v3.16b, v17.16b */
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
    (c)->q[3] = _t; }
  /* c8eac: orr v17.16b, v19.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[1].u8[15];
    (c)->q[17] = _t; }
  /* c8eb0: orr v1.16b, v20.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[2].u8[15];
    (c)->q[1] = _t; }
  /* c8eb4: bic v2.16b, v13.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[13].u8[0] & (~(c)->q[21].u8[0]);
    _t.u8[1] = (c)->q[13].u8[1] & (~(c)->q[21].u8[1]);
    _t.u8[2] = (c)->q[13].u8[2] & (~(c)->q[21].u8[2]);
    _t.u8[3] = (c)->q[13].u8[3] & (~(c)->q[21].u8[3]);
    _t.u8[4] = (c)->q[13].u8[4] & (~(c)->q[21].u8[4]);
    _t.u8[5] = (c)->q[13].u8[5] & (~(c)->q[21].u8[5]);
    _t.u8[6] = (c)->q[13].u8[6] & (~(c)->q[21].u8[6]);
    _t.u8[7] = (c)->q[13].u8[7] & (~(c)->q[21].u8[7]);
    _t.u8[8] = (c)->q[13].u8[8] & (~(c)->q[21].u8[8]);
    _t.u8[9] = (c)->q[13].u8[9] & (~(c)->q[21].u8[9]);
    _t.u8[10] = (c)->q[13].u8[10] & (~(c)->q[21].u8[10]);
    _t.u8[11] = (c)->q[13].u8[11] & (~(c)->q[21].u8[11]);
    _t.u8[12] = (c)->q[13].u8[12] & (~(c)->q[21].u8[12]);
    _t.u8[13] = (c)->q[13].u8[13] & (~(c)->q[21].u8[13]);
    _t.u8[14] = (c)->q[13].u8[14] & (~(c)->q[21].u8[14]);
    _t.u8[15] = (c)->q[13].u8[15] & (~(c)->q[21].u8[15]);
    (c)->q[2] = _t; }
  /* c8eb8: ldp q21, q23, [x29, #-0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-144));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 23, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8ebc: ushll v19.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c8ec0: ushll2 v6.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[6] = _t; }
  /* c8ec4: ushll v20.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c8ec8: bic v5.16b, v14.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[14].u8[0] & (~(c)->q[5].u8[0]);
    _t.u8[1] = (c)->q[14].u8[1] & (~(c)->q[5].u8[1]);
    _t.u8[2] = (c)->q[14].u8[2] & (~(c)->q[5].u8[2]);
    _t.u8[3] = (c)->q[14].u8[3] & (~(c)->q[5].u8[3]);
    _t.u8[4] = (c)->q[14].u8[4] & (~(c)->q[5].u8[4]);
    _t.u8[5] = (c)->q[14].u8[5] & (~(c)->q[5].u8[5]);
    _t.u8[6] = (c)->q[14].u8[6] & (~(c)->q[5].u8[6]);
    _t.u8[7] = (c)->q[14].u8[7] & (~(c)->q[5].u8[7]);
    _t.u8[8] = (c)->q[14].u8[8] & (~(c)->q[5].u8[8]);
    _t.u8[9] = (c)->q[14].u8[9] & (~(c)->q[5].u8[9]);
    _t.u8[10] = (c)->q[14].u8[10] & (~(c)->q[5].u8[10]);
    _t.u8[11] = (c)->q[14].u8[11] & (~(c)->q[5].u8[11]);
    _t.u8[12] = (c)->q[14].u8[12] & (~(c)->q[5].u8[12]);
    _t.u8[13] = (c)->q[14].u8[13] & (~(c)->q[5].u8[13]);
    _t.u8[14] = (c)->q[14].u8[14] & (~(c)->q[5].u8[14]);
    _t.u8[15] = (c)->q[14].u8[15] & (~(c)->q[5].u8[15]);
    (c)->q[5] = _t; }
  /* c8ecc: orr v4.16b, v4.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] | (c)->q[18].u8[15];
    (c)->q[4] = _t; }
  /* c8ed0: ldur q18, [x29, #-0x70] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c8ed4: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c8ed8: bic v7.16b, v23.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (~(c)->q[7].u8[0]);
    _t.u8[1] = (c)->q[23].u8[1] & (~(c)->q[7].u8[1]);
    _t.u8[2] = (c)->q[23].u8[2] & (~(c)->q[7].u8[2]);
    _t.u8[3] = (c)->q[23].u8[3] & (~(c)->q[7].u8[3]);
    _t.u8[4] = (c)->q[23].u8[4] & (~(c)->q[7].u8[4]);
    _t.u8[5] = (c)->q[23].u8[5] & (~(c)->q[7].u8[5]);
    _t.u8[6] = (c)->q[23].u8[6] & (~(c)->q[7].u8[6]);
    _t.u8[7] = (c)->q[23].u8[7] & (~(c)->q[7].u8[7]);
    _t.u8[8] = (c)->q[23].u8[8] & (~(c)->q[7].u8[8]);
    _t.u8[9] = (c)->q[23].u8[9] & (~(c)->q[7].u8[9]);
    _t.u8[10] = (c)->q[23].u8[10] & (~(c)->q[7].u8[10]);
    _t.u8[11] = (c)->q[23].u8[11] & (~(c)->q[7].u8[11]);
    _t.u8[12] = (c)->q[23].u8[12] & (~(c)->q[7].u8[12]);
    _t.u8[13] = (c)->q[23].u8[13] & (~(c)->q[7].u8[13]);
    _t.u8[14] = (c)->q[23].u8[14] & (~(c)->q[7].u8[14]);
    _t.u8[15] = (c)->q[23].u8[15] & (~(c)->q[7].u8[15]);
    (c)->q[7] = _t; }
  /* c8edc: ldr q23, [x11, #0x80] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 11) + INT64_C(128))), arc_ld64((ARC_X_R(c, 11) + INT64_C(128)) + 8));
  /* c8ee0: bic v21.16b, v21.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[21] = _t; }
  /* c8ee4: ldur q22, [x29, #-0xb0] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-176))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-176)) + 8));
  /* c8ee8: bic v6.16b, v18.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (~(c)->q[6].u8[0]);
    _t.u8[1] = (c)->q[18].u8[1] & (~(c)->q[6].u8[1]);
    _t.u8[2] = (c)->q[18].u8[2] & (~(c)->q[6].u8[2]);
    _t.u8[3] = (c)->q[18].u8[3] & (~(c)->q[6].u8[3]);
    _t.u8[4] = (c)->q[18].u8[4] & (~(c)->q[6].u8[4]);
    _t.u8[5] = (c)->q[18].u8[5] & (~(c)->q[6].u8[5]);
    _t.u8[6] = (c)->q[18].u8[6] & (~(c)->q[6].u8[6]);
    _t.u8[7] = (c)->q[18].u8[7] & (~(c)->q[6].u8[7]);
    _t.u8[8] = (c)->q[18].u8[8] & (~(c)->q[6].u8[8]);
    _t.u8[9] = (c)->q[18].u8[9] & (~(c)->q[6].u8[9]);
    _t.u8[10] = (c)->q[18].u8[10] & (~(c)->q[6].u8[10]);
    _t.u8[11] = (c)->q[18].u8[11] & (~(c)->q[6].u8[11]);
    _t.u8[12] = (c)->q[18].u8[12] & (~(c)->q[6].u8[12]);
    _t.u8[13] = (c)->q[18].u8[13] & (~(c)->q[6].u8[13]);
    _t.u8[14] = (c)->q[18].u8[14] & (~(c)->q[6].u8[14]);
    _t.u8[15] = (c)->q[18].u8[15] & (~(c)->q[6].u8[15]);
    (c)->q[6] = _t; }
  /* c8eec: ldur q18, [x29, #-0xa0] */
  arc_q_w(c, 18, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c8ef0: bic v19.16b, v15.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[15].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[15].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[15].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[15].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[15].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[15].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[15].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[15].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[15].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[15].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[15].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[15].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[15].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[15].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[15].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[15].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c8ef4: bic v20.16b, v22.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (~(c)->q[20].u8[0]);
    _t.u8[1] = (c)->q[22].u8[1] & (~(c)->q[20].u8[1]);
    _t.u8[2] = (c)->q[22].u8[2] & (~(c)->q[20].u8[2]);
    _t.u8[3] = (c)->q[22].u8[3] & (~(c)->q[20].u8[3]);
    _t.u8[4] = (c)->q[22].u8[4] & (~(c)->q[20].u8[4]);
    _t.u8[5] = (c)->q[22].u8[5] & (~(c)->q[20].u8[5]);
    _t.u8[6] = (c)->q[22].u8[6] & (~(c)->q[20].u8[6]);
    _t.u8[7] = (c)->q[22].u8[7] & (~(c)->q[20].u8[7]);
    _t.u8[8] = (c)->q[22].u8[8] & (~(c)->q[20].u8[8]);
    _t.u8[9] = (c)->q[22].u8[9] & (~(c)->q[20].u8[9]);
    _t.u8[10] = (c)->q[22].u8[10] & (~(c)->q[20].u8[10]);
    _t.u8[11] = (c)->q[22].u8[11] & (~(c)->q[20].u8[11]);
    _t.u8[12] = (c)->q[22].u8[12] & (~(c)->q[20].u8[12]);
    _t.u8[13] = (c)->q[22].u8[13] & (~(c)->q[20].u8[13]);
    _t.u8[14] = (c)->q[22].u8[14] & (~(c)->q[20].u8[14]);
    _t.u8[15] = (c)->q[22].u8[15] & (~(c)->q[20].u8[15]);
    (c)->q[20] = _t; }
  /* c8ef8: orr v5.16b, v7.16b, v5.16b */
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
  /* c8efc: orr v2.16b, v21.16b, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[2].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[2].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[2].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[2].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[2].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[2].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[2].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[2].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[2].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[2].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[2].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[2].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[2].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[2].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[2].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[2].u8[15];
    (c)->q[2] = _t; }
  /* c8f00: ldp q7, q22, [x11, #0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(144));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 22, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8f04: cmhi v21.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* c8f08: bic v16.16b, v18.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (~(c)->q[16].u8[0]);
    _t.u8[1] = (c)->q[18].u8[1] & (~(c)->q[16].u8[1]);
    _t.u8[2] = (c)->q[18].u8[2] & (~(c)->q[16].u8[2]);
    _t.u8[3] = (c)->q[18].u8[3] & (~(c)->q[16].u8[3]);
    _t.u8[4] = (c)->q[18].u8[4] & (~(c)->q[16].u8[4]);
    _t.u8[5] = (c)->q[18].u8[5] & (~(c)->q[16].u8[5]);
    _t.u8[6] = (c)->q[18].u8[6] & (~(c)->q[16].u8[6]);
    _t.u8[7] = (c)->q[18].u8[7] & (~(c)->q[16].u8[7]);
    _t.u8[8] = (c)->q[18].u8[8] & (~(c)->q[16].u8[8]);
    _t.u8[9] = (c)->q[18].u8[9] & (~(c)->q[16].u8[9]);
    _t.u8[10] = (c)->q[18].u8[10] & (~(c)->q[16].u8[10]);
    _t.u8[11] = (c)->q[18].u8[11] & (~(c)->q[16].u8[11]);
    _t.u8[12] = (c)->q[18].u8[12] & (~(c)->q[16].u8[12]);
    _t.u8[13] = (c)->q[18].u8[13] & (~(c)->q[16].u8[13]);
    _t.u8[14] = (c)->q[18].u8[14] & (~(c)->q[16].u8[14]);
    _t.u8[15] = (c)->q[18].u8[15] & (~(c)->q[16].u8[15]);
    (c)->q[16] = _t; }
  /* c8f0c: orr v2.16b, v2.16b, v3.16b */
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
  /* c8f10: orr v3.16b, v5.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[17].u8[15];
    (c)->q[3] = _t; }
  /* c8f14: orr v5.16b, v20.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] | (c)->q[19].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] | (c)->q[19].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] | (c)->q[19].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] | (c)->q[19].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] | (c)->q[19].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] | (c)->q[19].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] | (c)->q[19].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] | (c)->q[19].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] | (c)->q[19].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] | (c)->q[19].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] | (c)->q[19].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] | (c)->q[19].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] | (c)->q[19].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] | (c)->q[19].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] | (c)->q[19].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] | (c)->q[19].u8[15];
    (c)->q[5] = _t; }
  /* c8f18: cmhi v22.4s, v0.4s, v22.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[22].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[22].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[22].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[22].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* c8f1c: sshll v17.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c8f20: cmhi v7.4s, v0.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[7].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[7].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[7].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[7].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c8f24: orr v6.16b, v16.16b, v6.16b */
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
  /* c8f28: ldp q24, q16, [x29, #-0xd0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-208));
    arc_q_w(c, 24, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8f2c: ldp q23, q19, [x11, #0xb0] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(176));
    arc_q_w(c, 23, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 19, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8f30: sshll2 v20.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[20] = _t; }
  /* c8f34: sshll v18.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[18] = _t; }
  /* c8f38: sshll2 v22.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c8f3c: orr v1.16b, v5.16b, v1.16b */
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
  /* c8f40: bic v16.16b, v16.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (~(c)->q[17].u8[0]);
    _t.u8[1] = (c)->q[16].u8[1] & (~(c)->q[17].u8[1]);
    _t.u8[2] = (c)->q[16].u8[2] & (~(c)->q[17].u8[2]);
    _t.u8[3] = (c)->q[16].u8[3] & (~(c)->q[17].u8[3]);
    _t.u8[4] = (c)->q[16].u8[4] & (~(c)->q[17].u8[4]);
    _t.u8[5] = (c)->q[16].u8[5] & (~(c)->q[17].u8[5]);
    _t.u8[6] = (c)->q[16].u8[6] & (~(c)->q[17].u8[6]);
    _t.u8[7] = (c)->q[16].u8[7] & (~(c)->q[17].u8[7]);
    _t.u8[8] = (c)->q[16].u8[8] & (~(c)->q[17].u8[8]);
    _t.u8[9] = (c)->q[16].u8[9] & (~(c)->q[17].u8[9]);
    _t.u8[10] = (c)->q[16].u8[10] & (~(c)->q[17].u8[10]);
    _t.u8[11] = (c)->q[16].u8[11] & (~(c)->q[17].u8[11]);
    _t.u8[12] = (c)->q[16].u8[12] & (~(c)->q[17].u8[12]);
    _t.u8[13] = (c)->q[16].u8[13] & (~(c)->q[17].u8[13]);
    _t.u8[14] = (c)->q[16].u8[14] & (~(c)->q[17].u8[14]);
    _t.u8[15] = (c)->q[16].u8[15] & (~(c)->q[17].u8[15]);
    (c)->q[16] = _t; }
  /* c8f44: ldr q17, [sp, #0x120] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c8f48: orr v4.16b, v6.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c8f4c: cmhi v21.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* c8f50: cmhi v19.4s, v0.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[19].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[19].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[19].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[19].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* c8f54: ldr q23, [x11, #0xd0] */
  arc_q_w(c, 23, arc_ld64((ARC_X_R(c, 11) + INT64_C(208))), arc_ld64((ARC_X_R(c, 11) + INT64_C(208)) + 8));
  /* c8f58: bic v17.16b, v17.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[17].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[17].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[17].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[17].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[17].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[17].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[17].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[17].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[17].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[17].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[17].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[17].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[17].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[17].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[17].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[17] = _t; }
  /* c8f5c: sshll2 v18.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[7].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[7].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c8f60: bic v20.16b, v24.16b, v20.16b */
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
  /* c8f64: bic v22.16b, v25.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[25].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[25].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[25].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[25].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[25].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[25].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[25].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[25].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[25].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[25].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[25].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[25].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[25].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[25].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[25].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* c8f68: sshll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[7].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[7].i32[1]) << 0);
    (c)->q[7] = _t; }
  /* c8f6c: cmhi v23.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* c8f70: sshll2 v24.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c8f74: sshll2 v25.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[25] = _t; }
  /* c8f78: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c8f7c: orr v16.16b, v17.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c8f80: sshll v17.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c8f84: ldur q21, [x29, #-0xf0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-240))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-240)) + 8));
  /* c8f88: orr v20.16b, v22.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] | (c)->q[20].u8[15];
    (c)->q[20] = _t; }
  /* c8f8c: sshll2 v22.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[22] = _t; }
  /* c8f90: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c8f94: bic v18.16b, v21.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[18] = _t; }
  /* c8f98: ldr q21, [sp, #0x110] */
  arc_q_w(c, 21, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c8f9c: bic v21.16b, v21.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[24].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[24].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[24].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[24].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[24].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[24].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[24].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[24].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[24].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[24].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[24].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[24].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[24].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[24].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[24].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[24].u8[15]);
    (c)->q[21] = _t; }
  /* c8fa0: ldr q24, [sp, #0xe0] */
  arc_q_w(c, 24, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c8fa4: bic v24.16b, v24.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (~(c)->q[25].u8[0]);
    _t.u8[1] = (c)->q[24].u8[1] & (~(c)->q[25].u8[1]);
    _t.u8[2] = (c)->q[24].u8[2] & (~(c)->q[25].u8[2]);
    _t.u8[3] = (c)->q[24].u8[3] & (~(c)->q[25].u8[3]);
    _t.u8[4] = (c)->q[24].u8[4] & (~(c)->q[25].u8[4]);
    _t.u8[5] = (c)->q[24].u8[5] & (~(c)->q[25].u8[5]);
    _t.u8[6] = (c)->q[24].u8[6] & (~(c)->q[25].u8[6]);
    _t.u8[7] = (c)->q[24].u8[7] & (~(c)->q[25].u8[7]);
    _t.u8[8] = (c)->q[24].u8[8] & (~(c)->q[25].u8[8]);
    _t.u8[9] = (c)->q[24].u8[9] & (~(c)->q[25].u8[9]);
    _t.u8[10] = (c)->q[24].u8[10] & (~(c)->q[25].u8[10]);
    _t.u8[11] = (c)->q[24].u8[11] & (~(c)->q[25].u8[11]);
    _t.u8[12] = (c)->q[24].u8[12] & (~(c)->q[25].u8[12]);
    _t.u8[13] = (c)->q[24].u8[13] & (~(c)->q[25].u8[13]);
    _t.u8[14] = (c)->q[24].u8[14] & (~(c)->q[25].u8[14]);
    _t.u8[15] = (c)->q[24].u8[15] & (~(c)->q[25].u8[15]);
    (c)->q[24] = _t; }
  /* c8fa8: ldur q25, [x29, #-0xe0] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 29) + INT64_C(-224))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-224)) + 8));
  /* c8fac: orr v18.16b, v21.16b, v18.16b */
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
  /* c8fb0: ldr q21, [sp, #0xf0] */
  arc_q_w(c, 21, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c8fb4: bic v7.16b, v25.16b, v7.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (~(c)->q[7].u8[0]);
    _t.u8[1] = (c)->q[25].u8[1] & (~(c)->q[7].u8[1]);
    _t.u8[2] = (c)->q[25].u8[2] & (~(c)->q[7].u8[2]);
    _t.u8[3] = (c)->q[25].u8[3] & (~(c)->q[7].u8[3]);
    _t.u8[4] = (c)->q[25].u8[4] & (~(c)->q[7].u8[4]);
    _t.u8[5] = (c)->q[25].u8[5] & (~(c)->q[7].u8[5]);
    _t.u8[6] = (c)->q[25].u8[6] & (~(c)->q[7].u8[6]);
    _t.u8[7] = (c)->q[25].u8[7] & (~(c)->q[7].u8[7]);
    _t.u8[8] = (c)->q[25].u8[8] & (~(c)->q[7].u8[8]);
    _t.u8[9] = (c)->q[25].u8[9] & (~(c)->q[7].u8[9]);
    _t.u8[10] = (c)->q[25].u8[10] & (~(c)->q[7].u8[10]);
    _t.u8[11] = (c)->q[25].u8[11] & (~(c)->q[7].u8[11]);
    _t.u8[12] = (c)->q[25].u8[12] & (~(c)->q[7].u8[12]);
    _t.u8[13] = (c)->q[25].u8[13] & (~(c)->q[7].u8[13]);
    _t.u8[14] = (c)->q[25].u8[14] & (~(c)->q[7].u8[14]);
    _t.u8[15] = (c)->q[25].u8[15] & (~(c)->q[7].u8[15]);
    (c)->q[7] = _t; }
  /* c8fb8: ldr q25, [sp, #0x100] */
  arc_q_w(c, 25, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c8fbc: bic v19.16b, v21.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[19] = _t; }
  /* c8fc0: orr v20.16b, v24.16b, v20.16b */
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
    (c)->q[20] = _t; }
  /* c8fc4: bic v17.16b, v25.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (~(c)->q[17].u8[0]);
    _t.u8[1] = (c)->q[25].u8[1] & (~(c)->q[17].u8[1]);
    _t.u8[2] = (c)->q[25].u8[2] & (~(c)->q[17].u8[2]);
    _t.u8[3] = (c)->q[25].u8[3] & (~(c)->q[17].u8[3]);
    _t.u8[4] = (c)->q[25].u8[4] & (~(c)->q[17].u8[4]);
    _t.u8[5] = (c)->q[25].u8[5] & (~(c)->q[17].u8[5]);
    _t.u8[6] = (c)->q[25].u8[6] & (~(c)->q[17].u8[6]);
    _t.u8[7] = (c)->q[25].u8[7] & (~(c)->q[17].u8[7]);
    _t.u8[8] = (c)->q[25].u8[8] & (~(c)->q[17].u8[8]);
    _t.u8[9] = (c)->q[25].u8[9] & (~(c)->q[17].u8[9]);
    _t.u8[10] = (c)->q[25].u8[10] & (~(c)->q[17].u8[10]);
    _t.u8[11] = (c)->q[25].u8[11] & (~(c)->q[17].u8[11]);
    _t.u8[12] = (c)->q[25].u8[12] & (~(c)->q[17].u8[12]);
    _t.u8[13] = (c)->q[25].u8[13] & (~(c)->q[17].u8[13]);
    _t.u8[14] = (c)->q[25].u8[14] & (~(c)->q[17].u8[14]);
    _t.u8[15] = (c)->q[25].u8[15] & (~(c)->q[17].u8[15]);
    (c)->q[17] = _t; }
  /* c8fc8: ldr q25, [sp, #0xc0] */
  arc_q_w(c, 25, arc_ld64(((c)->sp + INT64_C(192))), arc_ld64(((c)->sp + INT64_C(192)) + 8));
  /* c8fcc: ldp q21, q24, [x11, #0xe0] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(224));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 24, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c8fd0: bic v22.16b, v25.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[25].u8[0] & (~(c)->q[22].u8[0]);
    _t.u8[1] = (c)->q[25].u8[1] & (~(c)->q[22].u8[1]);
    _t.u8[2] = (c)->q[25].u8[2] & (~(c)->q[22].u8[2]);
    _t.u8[3] = (c)->q[25].u8[3] & (~(c)->q[22].u8[3]);
    _t.u8[4] = (c)->q[25].u8[4] & (~(c)->q[22].u8[4]);
    _t.u8[5] = (c)->q[25].u8[5] & (~(c)->q[22].u8[5]);
    _t.u8[6] = (c)->q[25].u8[6] & (~(c)->q[22].u8[6]);
    _t.u8[7] = (c)->q[25].u8[7] & (~(c)->q[22].u8[7]);
    _t.u8[8] = (c)->q[25].u8[8] & (~(c)->q[22].u8[8]);
    _t.u8[9] = (c)->q[25].u8[9] & (~(c)->q[22].u8[9]);
    _t.u8[10] = (c)->q[25].u8[10] & (~(c)->q[22].u8[10]);
    _t.u8[11] = (c)->q[25].u8[11] & (~(c)->q[22].u8[11]);
    _t.u8[12] = (c)->q[25].u8[12] & (~(c)->q[22].u8[12]);
    _t.u8[13] = (c)->q[25].u8[13] & (~(c)->q[22].u8[13]);
    _t.u8[14] = (c)->q[25].u8[14] & (~(c)->q[22].u8[14]);
    _t.u8[15] = (c)->q[25].u8[15] & (~(c)->q[22].u8[15]);
    (c)->q[22] = _t; }
  /* c8fd4: orr v6.16b, v19.16b, v16.16b */
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
    (c)->q[6] = _t; }
  /* c8fd8: orr v3.16b, v20.16b, v3.16b */
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
  /* c8fdc: orr v7.16b, v17.16b, v7.16b */
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
  /* c8fe0: ldr q17, [sp, #0xd0] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(208))), arc_ld64(((c)->sp + INT64_C(208)) + 8));
  /* c8fe4: ldr q20, [x6, #0xc80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c8fe8: cmhi v21.4s, v0.4s, v21.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[21].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[21].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[21].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[21].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[21] = _t; }
  /* c8fec: cmhi v5.4s, v0.4s, v24.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[24].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[24].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[24].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[24].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c8ff0: bic v17.16b, v17.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (~(c)->q[23].u8[0]);
    _t.u8[1] = (c)->q[17].u8[1] & (~(c)->q[23].u8[1]);
    _t.u8[2] = (c)->q[17].u8[2] & (~(c)->q[23].u8[2]);
    _t.u8[3] = (c)->q[17].u8[3] & (~(c)->q[23].u8[3]);
    _t.u8[4] = (c)->q[17].u8[4] & (~(c)->q[23].u8[4]);
    _t.u8[5] = (c)->q[17].u8[5] & (~(c)->q[23].u8[5]);
    _t.u8[6] = (c)->q[17].u8[6] & (~(c)->q[23].u8[6]);
    _t.u8[7] = (c)->q[17].u8[7] & (~(c)->q[23].u8[7]);
    _t.u8[8] = (c)->q[17].u8[8] & (~(c)->q[23].u8[8]);
    _t.u8[9] = (c)->q[17].u8[9] & (~(c)->q[23].u8[9]);
    _t.u8[10] = (c)->q[17].u8[10] & (~(c)->q[23].u8[10]);
    _t.u8[11] = (c)->q[17].u8[11] & (~(c)->q[23].u8[11]);
    _t.u8[12] = (c)->q[17].u8[12] & (~(c)->q[23].u8[12]);
    _t.u8[13] = (c)->q[17].u8[13] & (~(c)->q[23].u8[13]);
    _t.u8[14] = (c)->q[17].u8[14] & (~(c)->q[23].u8[14]);
    _t.u8[15] = (c)->q[17].u8[15] & (~(c)->q[23].u8[15]);
    (c)->q[17] = _t; }
  /* c8ff4: orr v16.16b, v22.16b, v18.16b */
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
    (c)->q[16] = _t; }
  /* c8ff8: orr v2.16b, v6.16b, v2.16b */
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
  /* c8ffc: ldr q6, [x7, #0xa00] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 7) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 7) + INT64_C(2560)) + 8));
  /* c9000: sshll2 v18.2d, v21.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c9004: sshll v19.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c9008: sshll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[3]) << 0);
    (c)->q[5] = _t; }
  /* c900c: orr v7.16b, v17.16b, v7.16b */
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
  /* c9010: sshll v17.2d, v21.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[21].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[21].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c9014: ldr q21, [x26, #0xc40] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 26) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 26) + INT64_C(3136)) + 8));
  /* c9018: orr v4.16b, v16.16b, v4.16b */
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
  /* c901c: ldr q16, [sp, #0xb0] */
  arc_q_w(c, 16, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c9020: bic v5.16b, v6.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (~(c)->q[5].u8[0]);
    _t.u8[1] = (c)->q[6].u8[1] & (~(c)->q[5].u8[1]);
    _t.u8[2] = (c)->q[6].u8[2] & (~(c)->q[5].u8[2]);
    _t.u8[3] = (c)->q[6].u8[3] & (~(c)->q[5].u8[3]);
    _t.u8[4] = (c)->q[6].u8[4] & (~(c)->q[5].u8[4]);
    _t.u8[5] = (c)->q[6].u8[5] & (~(c)->q[5].u8[5]);
    _t.u8[6] = (c)->q[6].u8[6] & (~(c)->q[5].u8[6]);
    _t.u8[7] = (c)->q[6].u8[7] & (~(c)->q[5].u8[7]);
    _t.u8[8] = (c)->q[6].u8[8] & (~(c)->q[5].u8[8]);
    _t.u8[9] = (c)->q[6].u8[9] & (~(c)->q[5].u8[9]);
    _t.u8[10] = (c)->q[6].u8[10] & (~(c)->q[5].u8[10]);
    _t.u8[11] = (c)->q[6].u8[11] & (~(c)->q[5].u8[11]);
    _t.u8[12] = (c)->q[6].u8[12] & (~(c)->q[5].u8[12]);
    _t.u8[13] = (c)->q[6].u8[13] & (~(c)->q[5].u8[13]);
    _t.u8[14] = (c)->q[6].u8[14] & (~(c)->q[5].u8[14]);
    _t.u8[15] = (c)->q[6].u8[15] & (~(c)->q[5].u8[15]);
    (c)->q[5] = _t; }
  /* c9024: bic v6.16b, v21.16b, v19.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (~(c)->q[19].u8[0]);
    _t.u8[1] = (c)->q[21].u8[1] & (~(c)->q[19].u8[1]);
    _t.u8[2] = (c)->q[21].u8[2] & (~(c)->q[19].u8[2]);
    _t.u8[3] = (c)->q[21].u8[3] & (~(c)->q[19].u8[3]);
    _t.u8[4] = (c)->q[21].u8[4] & (~(c)->q[19].u8[4]);
    _t.u8[5] = (c)->q[21].u8[5] & (~(c)->q[19].u8[5]);
    _t.u8[6] = (c)->q[21].u8[6] & (~(c)->q[19].u8[6]);
    _t.u8[7] = (c)->q[21].u8[7] & (~(c)->q[19].u8[7]);
    _t.u8[8] = (c)->q[21].u8[8] & (~(c)->q[19].u8[8]);
    _t.u8[9] = (c)->q[21].u8[9] & (~(c)->q[19].u8[9]);
    _t.u8[10] = (c)->q[21].u8[10] & (~(c)->q[19].u8[10]);
    _t.u8[11] = (c)->q[21].u8[11] & (~(c)->q[19].u8[11]);
    _t.u8[12] = (c)->q[21].u8[12] & (~(c)->q[19].u8[12]);
    _t.u8[13] = (c)->q[21].u8[13] & (~(c)->q[19].u8[13]);
    _t.u8[14] = (c)->q[21].u8[14] & (~(c)->q[19].u8[14]);
    _t.u8[15] = (c)->q[21].u8[15] & (~(c)->q[19].u8[15]);
    (c)->q[6] = _t; }
  /* c9028: orr v1.16b, v7.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c902c: bic v7.16b, v20.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (~(c)->q[17].u8[0]);
    _t.u8[1] = (c)->q[20].u8[1] & (~(c)->q[17].u8[1]);
    _t.u8[2] = (c)->q[20].u8[2] & (~(c)->q[17].u8[2]);
    _t.u8[3] = (c)->q[20].u8[3] & (~(c)->q[17].u8[3]);
    _t.u8[4] = (c)->q[20].u8[4] & (~(c)->q[17].u8[4]);
    _t.u8[5] = (c)->q[20].u8[5] & (~(c)->q[17].u8[5]);
    _t.u8[6] = (c)->q[20].u8[6] & (~(c)->q[17].u8[6]);
    _t.u8[7] = (c)->q[20].u8[7] & (~(c)->q[17].u8[7]);
    _t.u8[8] = (c)->q[20].u8[8] & (~(c)->q[17].u8[8]);
    _t.u8[9] = (c)->q[20].u8[9] & (~(c)->q[17].u8[9]);
    _t.u8[10] = (c)->q[20].u8[10] & (~(c)->q[17].u8[10]);
    _t.u8[11] = (c)->q[20].u8[11] & (~(c)->q[17].u8[11]);
    _t.u8[12] = (c)->q[20].u8[12] & (~(c)->q[17].u8[12]);
    _t.u8[13] = (c)->q[20].u8[13] & (~(c)->q[17].u8[13]);
    _t.u8[14] = (c)->q[20].u8[14] & (~(c)->q[17].u8[14]);
    _t.u8[15] = (c)->q[20].u8[15] & (~(c)->q[17].u8[15]);
    (c)->q[7] = _t; }
  /* c9030: bic v16.16b, v16.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (~(c)->q[18].u8[0]);
    _t.u8[1] = (c)->q[16].u8[1] & (~(c)->q[18].u8[1]);
    _t.u8[2] = (c)->q[16].u8[2] & (~(c)->q[18].u8[2]);
    _t.u8[3] = (c)->q[16].u8[3] & (~(c)->q[18].u8[3]);
    _t.u8[4] = (c)->q[16].u8[4] & (~(c)->q[18].u8[4]);
    _t.u8[5] = (c)->q[16].u8[5] & (~(c)->q[18].u8[5]);
    _t.u8[6] = (c)->q[16].u8[6] & (~(c)->q[18].u8[6]);
    _t.u8[7] = (c)->q[16].u8[7] & (~(c)->q[18].u8[7]);
    _t.u8[8] = (c)->q[16].u8[8] & (~(c)->q[18].u8[8]);
    _t.u8[9] = (c)->q[16].u8[9] & (~(c)->q[18].u8[9]);
    _t.u8[10] = (c)->q[16].u8[10] & (~(c)->q[18].u8[10]);
    _t.u8[11] = (c)->q[16].u8[11] & (~(c)->q[18].u8[11]);
    _t.u8[12] = (c)->q[16].u8[12] & (~(c)->q[18].u8[12]);
    _t.u8[13] = (c)->q[16].u8[13] & (~(c)->q[18].u8[13]);
    _t.u8[14] = (c)->q[16].u8[14] & (~(c)->q[18].u8[14]);
    _t.u8[15] = (c)->q[16].u8[15] & (~(c)->q[18].u8[15]);
    (c)->q[16] = _t; }
  /* c9034: orr v4.16b, v5.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c9038: orr v2.16b, v7.16b, v2.16b */
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
  /* c903c: orr v3.16b, v16.16b, v3.16b */
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
  /* c9040: orr v1.16b, v6.16b, v1.16b */
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
  /* c9044: orr v3.16b, v4.16b, v3.16b */
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
  /* c9048: orr v1.16b, v1.16b, v2.16b */
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
  /* c904c: orr v1.16b, v1.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* c9050: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c9054: orr v1.8b, v1.8b, v2.8b */
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
  /* c9058: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* c905c: cbnz x14, #0xc8e18 */
  if ((ARC_X_R(c, 14)) != 0) goto L_c8e18;
L_c9060:;
  /* c9060: ldur q1, [x12, #-0xc] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 12) + INT64_C(-12))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-12)) + 8));
  /* c9064: ldur q2, [x12, #-0x2c] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 12) + INT64_C(-44))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-44)) + 8));
  /* c9068: ldur q3, [x12, #-0x1c] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 12) + INT64_C(-28))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-28)) + 8));
  /* c906c: ldur q4, [x12, #-0x3c] */
  arc_q_w(c, 4, arc_ld64((ARC_X_R(c, 12) + INT64_C(-60))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-60)) + 8));
  /* c9070: ldur q5, [x12, #-0x4c] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-76))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-76)) + 8));
  /* c9074: ldur q6, [x12, #-0x5c] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 12) + INT64_C(-92))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-92)) + 8));
  /* c9078: rev64 v1.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[1].u32[1];
    _t.u32[1] = (c)->q[1].u32[0];
    _t.u32[2] = (c)->q[1].u32[3];
    _t.u32[3] = (c)->q[1].u32[2];
    (c)->q[1] = _t; }
  /* c907c: rev64 v2.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[2].u32[1];
    _t.u32[1] = (c)->q[2].u32[0];
    _t.u32[2] = (c)->q[2].u32[3];
    _t.u32[3] = (c)->q[2].u32[2];
    (c)->q[2] = _t; }
  /* c9080: rev64 v3.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[3].u32[1];
    _t.u32[1] = (c)->q[3].u32[0];
    _t.u32[2] = (c)->q[3].u32[3];
    _t.u32[3] = (c)->q[3].u32[2];
    (c)->q[3] = _t; }
  /* c9084: rev64 v4.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[4].u32[1];
    _t.u32[1] = (c)->q[4].u32[0];
    _t.u32[2] = (c)->q[4].u32[3];
    _t.u32[3] = (c)->q[4].u32[2];
    (c)->q[4] = _t; }
  /* c9088: rev64 v5.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[1];
    _t.u32[1] = (c)->q[5].u32[0];
    _t.u32[2] = (c)->q[5].u32[3];
    _t.u32[3] = (c)->q[5].u32[2];
    (c)->q[5] = _t; }
  /* c908c: ldur q7, [x12, #-0x6c] */
  arc_q_w(c, 7, arc_ld64((ARC_X_R(c, 12) + INT64_C(-108))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-108)) + 8));
  /* c9090: rev64 v6.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[6].u32[1];
    _t.u32[1] = (c)->q[6].u32[0];
    _t.u32[2] = (c)->q[6].u32[3];
    _t.u32[3] = (c)->q[6].u32[2];
    (c)->q[6] = _t; }
  /* c9094: ldur q16, [x12, #-0x7c] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 12) + INT64_C(-124))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-124)) + 8));
  /* c9098: ldur q22, [x29, #-0x60] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-96)) + 8));
  /* c909c: rev64 v7.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[7].u32[1];
    _t.u32[1] = (c)->q[7].u32[0];
    _t.u32[2] = (c)->q[7].u32[3];
    _t.u32[3] = (c)->q[7].u32[2];
    (c)->q[7] = _t; }
  /* c90a0: ldur q17, [x12, #-0x8c] */
  arc_q_w(c, 17, arc_ld64((ARC_X_R(c, 12) + INT64_C(-140))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-140)) + 8));
  /* c90a4: ldur q28, [x29, #-0x100] */
  arc_q_w(c, 28, arc_ld64((ARC_X_R(c, 29) + INT64_C(-256))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-256)) + 8));
  /* c90a8: ext v1.16b, v1.16b, v1.16b, #8 */
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
  /* c90ac: ext v2.16b, v2.16b, v2.16b, #8 */
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
  /* c90b0: ext v3.16b, v3.16b, v3.16b, #8 */
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
  /* c90b4: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* c90b8: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* c90bc: rev64 v16.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[16].u32[1];
    _t.u32[1] = (c)->q[16].u32[0];
    _t.u32[2] = (c)->q[16].u32[3];
    _t.u32[3] = (c)->q[16].u32[2];
    (c)->q[16] = _t; }
  /* c90c0: ext v6.16b, v6.16b, v6.16b, #8 */
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
  /* c90c4: ldp q25, q26, [x29, #-0x90] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-144));
    arc_q_w(c, 25, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c90c8: ext v7.16b, v7.16b, v7.16b, #8 */
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
  /* c90cc: rev64 v17.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[17].u32[1];
    _t.u32[1] = (c)->q[17].u32[0];
    _t.u32[2] = (c)->q[17].u32[3];
    _t.u32[3] = (c)->q[17].u32[2];
    (c)->q[17] = _t; }
  /* c90d0: cmhi v1.4s, v0.4s, v1.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[1].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[1].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[1].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[1].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[1] = _t; }
  /* c90d4: cmhi v2.4s, v0.4s, v2.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[2].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[2].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[2].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[2].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[2] = _t; }
  /* c90d8: cmhi v3.4s, v0.4s, v3.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[3].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[3].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[3].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[3].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[3] = _t; }
  /* c90dc: cmhi v4.4s, v0.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[4].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[4].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[4] = _t; }
  /* c90e0: cmhi v5.4s, v0.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[5].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[5].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[5].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[5].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c90e4: ext v16.16b, v16.16b, v16.16b, #8 */
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
  /* c90e8: cmhi v6.4s, v0.4s, v6.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[6].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[6].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[6].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[6].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[6] = _t; }
  /* c90ec: ushll2 v18.2d, v1.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c90f0: ushll v19.2d, v2.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[1]) << 0);
    (c)->q[19] = _t; }
  /* c90f4: ushll2 v2.2d, v2.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[2].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[2].u32[3]) << 0);
    (c)->q[2] = _t; }
  /* c90f8: ushll v1.2d, v1.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[1].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[1].u32[1]) << 0);
    (c)->q[1] = _t; }
  /* c90fc: ushll v20.2d, v3.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[1]) << 0);
    (c)->q[20] = _t; }
  /* c9100: ushll v21.2d, v4.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c9104: ushll2 v3.2d, v3.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[3].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[3].u32[3]) << 0);
    (c)->q[3] = _t; }
  /* c9108: ushll2 v4.2d, v4.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[4].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[4].u32[3]) << 0);
    (c)->q[4] = _t; }
  /* c910c: cmhi v7.4s, v0.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[7].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[7].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[7].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[7].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c9110: and v18.16b, v18.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[22].u8[15];
    (c)->q[18] = _t; }
  /* c9114: and v2.16b, v2.16b, v9.16b */
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
  /* c9118: and v19.16b, v19.16b, v10.16b */
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
  /* c911c: and v1.16b, v1.16b, v30.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] & (c)->q[30].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] & (c)->q[30].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] & (c)->q[30].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] & (c)->q[30].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] & (c)->q[30].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] & (c)->q[30].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] & (c)->q[30].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] & (c)->q[30].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] & (c)->q[30].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] & (c)->q[30].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] & (c)->q[30].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] & (c)->q[30].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] & (c)->q[30].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] & (c)->q[30].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] & (c)->q[30].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] & (c)->q[30].u8[15];
    (c)->q[1] = _t; }
  /* c9120: ushll v22.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c9124: and v20.16b, v20.16b, v8.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[8].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[8].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[8].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[8].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[8].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[8].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[8].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[8].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[8].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[8].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[8].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[8].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[8].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[8].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[8].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[8].u8[15];
    (c)->q[20] = _t; }
  /* c9128: and v21.16b, v21.16b, v12.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[12].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[12].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[12].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[12].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[12].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[12].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[12].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[12].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[12].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[12].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[12].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[12].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[12].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[12].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[12].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[12].u8[15];
    (c)->q[21] = _t; }
  /* c912c: and v23.16b, v3.16b, v31.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[3].u8[0] & (c)->q[31].u8[0];
    _t.u8[1] = (c)->q[3].u8[1] & (c)->q[31].u8[1];
    _t.u8[2] = (c)->q[3].u8[2] & (c)->q[31].u8[2];
    _t.u8[3] = (c)->q[3].u8[3] & (c)->q[31].u8[3];
    _t.u8[4] = (c)->q[3].u8[4] & (c)->q[31].u8[4];
    _t.u8[5] = (c)->q[3].u8[5] & (c)->q[31].u8[5];
    _t.u8[6] = (c)->q[3].u8[6] & (c)->q[31].u8[6];
    _t.u8[7] = (c)->q[3].u8[7] & (c)->q[31].u8[7];
    _t.u8[8] = (c)->q[3].u8[8] & (c)->q[31].u8[8];
    _t.u8[9] = (c)->q[3].u8[9] & (c)->q[31].u8[9];
    _t.u8[10] = (c)->q[3].u8[10] & (c)->q[31].u8[10];
    _t.u8[11] = (c)->q[3].u8[11] & (c)->q[31].u8[11];
    _t.u8[12] = (c)->q[3].u8[12] & (c)->q[31].u8[12];
    _t.u8[13] = (c)->q[3].u8[13] & (c)->q[31].u8[13];
    _t.u8[14] = (c)->q[3].u8[14] & (c)->q[31].u8[14];
    _t.u8[15] = (c)->q[3].u8[15] & (c)->q[31].u8[15];
    (c)->q[23] = _t; }
  /* c9130: and v24.16b, v4.16b, v11.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[4].u8[0] & (c)->q[11].u8[0];
    _t.u8[1] = (c)->q[4].u8[1] & (c)->q[11].u8[1];
    _t.u8[2] = (c)->q[4].u8[2] & (c)->q[11].u8[2];
    _t.u8[3] = (c)->q[4].u8[3] & (c)->q[11].u8[3];
    _t.u8[4] = (c)->q[4].u8[4] & (c)->q[11].u8[4];
    _t.u8[5] = (c)->q[4].u8[5] & (c)->q[11].u8[5];
    _t.u8[6] = (c)->q[4].u8[6] & (c)->q[11].u8[6];
    _t.u8[7] = (c)->q[4].u8[7] & (c)->q[11].u8[7];
    _t.u8[8] = (c)->q[4].u8[8] & (c)->q[11].u8[8];
    _t.u8[9] = (c)->q[4].u8[9] & (c)->q[11].u8[9];
    _t.u8[10] = (c)->q[4].u8[10] & (c)->q[11].u8[10];
    _t.u8[11] = (c)->q[4].u8[11] & (c)->q[11].u8[11];
    _t.u8[12] = (c)->q[4].u8[12] & (c)->q[11].u8[12];
    _t.u8[13] = (c)->q[4].u8[13] & (c)->q[11].u8[13];
    _t.u8[14] = (c)->q[4].u8[14] & (c)->q[11].u8[14];
    _t.u8[15] = (c)->q[4].u8[15] & (c)->q[11].u8[15];
    (c)->q[24] = _t; }
  /* c9134: orr v4.16b, v2.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[18].u8[15];
    (c)->q[4] = _t; }
  /* c9138: ushll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[5].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[5].u32[3]) << 0);
    (c)->q[5] = _t; }
  /* c913c: ushll2 v18.2d, v6.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[3]) << 0);
    (c)->q[18] = _t; }
  /* c9140: ushll v6.2d, v6.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[6].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[6].u32[1]) << 0);
    (c)->q[6] = _t; }
  /* c9144: orr v3.16b, v19.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[1].u8[15];
    (c)->q[3] = _t; }
  /* c9148: and v19.16b, v22.16b, v13.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[13].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[13].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[13].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[13].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[13].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[13].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[13].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[13].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[13].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[13].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[13].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[13].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[13].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[13].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[13].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[13].u8[15];
    (c)->q[19] = _t; }
  /* c914c: ldur q22, [x12, #-0xac] */
  arc_q_w(c, 22, arc_ld64((ARC_X_R(c, 12) + INT64_C(-172))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-172)) + 8));
  /* c9150: orr v1.16b, v21.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[20].u8[15];
    (c)->q[1] = _t; }
  /* c9154: ldur q20, [x12, #-0x9c] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 12) + INT64_C(-156))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-156)) + 8));
  /* c9158: ushll v21.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[21] = _t; }
  /* c915c: ushll2 v7.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[7] = _t; }
  /* c9160: orr v2.16b, v24.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[23].u8[15];
    (c)->q[2] = _t; }
  /* c9164: cmhi v16.4s, v0.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[16].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[16].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[16].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[16].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c9168: and v23.16b, v5.16b, v14.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[5].u8[0] & (c)->q[14].u8[0];
    _t.u8[1] = (c)->q[5].u8[1] & (c)->q[14].u8[1];
    _t.u8[2] = (c)->q[5].u8[2] & (c)->q[14].u8[2];
    _t.u8[3] = (c)->q[5].u8[3] & (c)->q[14].u8[3];
    _t.u8[4] = (c)->q[5].u8[4] & (c)->q[14].u8[4];
    _t.u8[5] = (c)->q[5].u8[5] & (c)->q[14].u8[5];
    _t.u8[6] = (c)->q[5].u8[6] & (c)->q[14].u8[6];
    _t.u8[7] = (c)->q[5].u8[7] & (c)->q[14].u8[7];
    _t.u8[8] = (c)->q[5].u8[8] & (c)->q[14].u8[8];
    _t.u8[9] = (c)->q[5].u8[9] & (c)->q[14].u8[9];
    _t.u8[10] = (c)->q[5].u8[10] & (c)->q[14].u8[10];
    _t.u8[11] = (c)->q[5].u8[11] & (c)->q[14].u8[11];
    _t.u8[12] = (c)->q[5].u8[12] & (c)->q[14].u8[12];
    _t.u8[13] = (c)->q[5].u8[13] & (c)->q[14].u8[13];
    _t.u8[14] = (c)->q[5].u8[14] & (c)->q[14].u8[14];
    _t.u8[15] = (c)->q[5].u8[15] & (c)->q[14].u8[15];
    (c)->q[23] = _t; }
  /* c916c: ldur q5, [x12, #-0xbc] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 12) + INT64_C(-188))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-188)) + 8));
  /* c9170: and v24.16b, v6.16b, v15.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[6].u8[0] & (c)->q[15].u8[0];
    _t.u8[1] = (c)->q[6].u8[1] & (c)->q[15].u8[1];
    _t.u8[2] = (c)->q[6].u8[2] & (c)->q[15].u8[2];
    _t.u8[3] = (c)->q[6].u8[3] & (c)->q[15].u8[3];
    _t.u8[4] = (c)->q[6].u8[4] & (c)->q[15].u8[4];
    _t.u8[5] = (c)->q[6].u8[5] & (c)->q[15].u8[5];
    _t.u8[6] = (c)->q[6].u8[6] & (c)->q[15].u8[6];
    _t.u8[7] = (c)->q[6].u8[7] & (c)->q[15].u8[7];
    _t.u8[8] = (c)->q[6].u8[8] & (c)->q[15].u8[8];
    _t.u8[9] = (c)->q[6].u8[9] & (c)->q[15].u8[9];
    _t.u8[10] = (c)->q[6].u8[10] & (c)->q[15].u8[10];
    _t.u8[11] = (c)->q[6].u8[11] & (c)->q[15].u8[11];
    _t.u8[12] = (c)->q[6].u8[12] & (c)->q[15].u8[12];
    _t.u8[13] = (c)->q[6].u8[13] & (c)->q[15].u8[13];
    _t.u8[14] = (c)->q[6].u8[14] & (c)->q[15].u8[14];
    _t.u8[15] = (c)->q[6].u8[15] & (c)->q[15].u8[15];
    (c)->q[24] = _t; }
  /* c9174: rev64 v6.4s, v22.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[22].u32[1];
    _t.u32[1] = (c)->q[22].u32[0];
    _t.u32[2] = (c)->q[22].u32[3];
    _t.u32[3] = (c)->q[22].u32[2];
    (c)->q[6] = _t; }
  /* c9178: rev64 v20.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[20].u32[1];
    _t.u32[1] = (c)->q[20].u32[0];
    _t.u32[2] = (c)->q[20].u32[3];
    _t.u32[3] = (c)->q[20].u32[2];
    (c)->q[20] = _t; }
  /* c917c: and v7.16b, v7.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[26].u8[15];
    (c)->q[7] = _t; }
  /* c9180: rev64 v26.4s, v5.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[5].u32[1];
    _t.u32[1] = (c)->q[5].u32[0];
    _t.u32[2] = (c)->q[5].u32[3];
    _t.u32[3] = (c)->q[5].u32[2];
    (c)->q[26] = _t; }
  /* c9184: ldur q5, [x29, #-0x70] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 29) + INT64_C(-112))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-112)) + 8));
  /* c9188: ushll v22.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[22] = _t; }
  /* c918c: ushll2 v16.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[16] = _t; }
  /* c9190: and v21.16b, v21.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] & (c)->q[25].u8[15];
    (c)->q[21] = _t; }
  /* c9194: ldur q25, [x12, #-0xcc] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 12) + INT64_C(-204))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-204)) + 8));
  /* c9198: ext v17.16b, v17.16b, v17.16b, #8 */
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
  /* c919c: and v5.16b, v18.16b, v5.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[5].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[5].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[5].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[5].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[5].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[5].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[5].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[5].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[5].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[5].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[5].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[5].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[5].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[5].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[5].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[5].u8[15];
    (c)->q[5] = _t; }
  /* c91a0: ext v18.16b, v6.16b, v6.16b, #8 */
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
    (c)->q[18] = _t; }
  /* c91a4: ldur q6, [x29, #-0xa0] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 29) + INT64_C(-160))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-160)) + 8));
  /* c91a8: ext v20.16b, v20.16b, v20.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[8];
    _t.u8[1] = (c)->q[20].u8[9];
    _t.u8[2] = (c)->q[20].u8[10];
    _t.u8[3] = (c)->q[20].u8[11];
    _t.u8[4] = (c)->q[20].u8[12];
    _t.u8[5] = (c)->q[20].u8[13];
    _t.u8[6] = (c)->q[20].u8[14];
    _t.u8[7] = (c)->q[20].u8[15];
    _t.u8[8] = (c)->q[20].u8[0];
    _t.u8[9] = (c)->q[20].u8[1];
    _t.u8[10] = (c)->q[20].u8[2];
    _t.u8[11] = (c)->q[20].u8[3];
    _t.u8[12] = (c)->q[20].u8[4];
    _t.u8[13] = (c)->q[20].u8[5];
    _t.u8[14] = (c)->q[20].u8[6];
    _t.u8[15] = (c)->q[20].u8[7];
    (c)->q[20] = _t; }
  /* c91ac: rev64 v25.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[25].u32[1];
    _t.u32[1] = (c)->q[25].u32[0];
    _t.u32[2] = (c)->q[25].u32[3];
    _t.u32[3] = (c)->q[25].u32[2];
    (c)->q[25] = _t; }
  /* c91b0: orr v7.16b, v7.16b, v23.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[23].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[23].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[23].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[23].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[23].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[23].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[23].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[23].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[23].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[23].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[23].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[23].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[23].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[23].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[23].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[23].u8[15];
    (c)->q[7] = _t; }
  /* c91b4: ext v23.16b, v26.16b, v26.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[8];
    _t.u8[1] = (c)->q[26].u8[9];
    _t.u8[2] = (c)->q[26].u8[10];
    _t.u8[3] = (c)->q[26].u8[11];
    _t.u8[4] = (c)->q[26].u8[12];
    _t.u8[5] = (c)->q[26].u8[13];
    _t.u8[6] = (c)->q[26].u8[14];
    _t.u8[7] = (c)->q[26].u8[15];
    _t.u8[8] = (c)->q[26].u8[0];
    _t.u8[9] = (c)->q[26].u8[1];
    _t.u8[10] = (c)->q[26].u8[2];
    _t.u8[11] = (c)->q[26].u8[3];
    _t.u8[12] = (c)->q[26].u8[4];
    _t.u8[13] = (c)->q[26].u8[5];
    _t.u8[14] = (c)->q[26].u8[6];
    _t.u8[15] = (c)->q[26].u8[7];
    (c)->q[23] = _t; }
  /* c91b8: ldp q29, q26, [x29, #-0xf0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-240));
    arc_q_w(c, 29, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 26, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c91bc: and v6.16b, v16.16b, v6.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[6].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[6].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[6].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[6].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[6].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[6].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[6].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[6].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[6].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[6].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[6].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[6].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[6].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[6].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[6].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[6].u8[15];
    (c)->q[6] = _t; }
  /* c91c0: orr v16.16b, v21.16b, v19.16b */
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
    (c)->q[16] = _t; }
  /* c91c4: ldur q21, [x29, #-0xb0] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(-176))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-176)) + 8));
  /* c91c8: ldur q19, [x12, #-0xdc] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 12) + INT64_C(-220))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-220)) + 8));
  /* c91cc: cmhi v17.4s, v0.4s, v17.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[17].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[17].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[17].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[17].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[17] = _t; }
  /* c91d0: cmhi v20.4s, v0.4s, v20.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[20].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[20].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[20].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[20].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[20] = _t; }
  /* c91d4: orr v4.16b, v7.16b, v4.16b */
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
  /* c91d8: and v21.16b, v22.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[22].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[22].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[22].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[22].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[22].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[22].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[22].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[22].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[22].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[22].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[22].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[22].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[22].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[22].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[22].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[22].u8[15] & (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* c91dc: rev64 v19.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[19].u32[1];
    _t.u32[1] = (c)->q[19].u32[0];
    _t.u32[2] = (c)->q[19].u32[3];
    _t.u32[3] = (c)->q[19].u32[2];
    (c)->q[19] = _t; }
  /* c91e0: cmhi v23.4s, v0.4s, v23.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[23].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[23].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[23].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[23].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[23] = _t; }
  /* c91e4: orr v3.16b, v16.16b, v3.16b */
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
  /* c91e8: cmhi v16.4s, v0.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[18].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[18].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[18].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[18].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c91ec: ext v18.16b, v25.16b, v25.16b, #8 */
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
    (c)->q[18] = _t; }
  /* c91f0: sshll v22.2d, v17.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[1]) << 0);
    (c)->q[22] = _t; }
  /* c91f4: sshll2 v17.2d, v17.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[17].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[17].i32[3]) << 0);
    (c)->q[17] = _t; }
  /* c91f8: orr v5.16b, v6.16b, v5.16b */
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
  /* c91fc: orr v7.16b, v21.16b, v24.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[24].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[24].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[24].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[24].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[24].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[24].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[24].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[24].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[24].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[24].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[24].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[24].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[24].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[24].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[24].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[24].u8[15];
    (c)->q[7] = _t; }
  /* c9200: ldp q25, q24, [x29, #-0xd0] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-208));
    arc_q_w(c, 25, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 24, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9204: sshll2 v21.2d, v20.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[3]) << 0);
    (c)->q[21] = _t; }
  /* c9208: sshll v20.2d, v20.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[20].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[20].i32[1]) << 0);
    (c)->q[20] = _t; }
  /* c920c: sshll2 v27.2d, v23.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[3]) << 0);
    (c)->q[27] = _t; }
  /* c9210: cmhi v18.4s, v0.4s, v18.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[18].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[18].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[18].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[18].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[18] = _t; }
  /* c9214: ext v19.16b, v19.16b, v19.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[8];
    _t.u8[1] = (c)->q[19].u8[9];
    _t.u8[2] = (c)->q[19].u8[10];
    _t.u8[3] = (c)->q[19].u8[11];
    _t.u8[4] = (c)->q[19].u8[12];
    _t.u8[5] = (c)->q[19].u8[13];
    _t.u8[6] = (c)->q[19].u8[14];
    _t.u8[7] = (c)->q[19].u8[15];
    _t.u8[8] = (c)->q[19].u8[0];
    _t.u8[9] = (c)->q[19].u8[1];
    _t.u8[10] = (c)->q[19].u8[2];
    _t.u8[11] = (c)->q[19].u8[3];
    _t.u8[12] = (c)->q[19].u8[4];
    _t.u8[13] = (c)->q[19].u8[5];
    _t.u8[14] = (c)->q[19].u8[6];
    _t.u8[15] = (c)->q[19].u8[7];
    (c)->q[19] = _t; }
  /* c9218: sshll v23.2d, v23.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[23].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[23].i32[1]) << 0);
    (c)->q[23] = _t; }
  /* c921c: and v22.16b, v22.16b, v24.16b */
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
  /* c9220: sshll2 v24.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[16].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[16].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c9224: sshll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[16].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[16].i32[1]) << 0);
    (c)->q[16] = _t; }
  /* c9228: and v21.16b, v21.16b, v29.16b */
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
  /* c922c: ldr q29, [sp, #0x120] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(288))), arc_ld64(((c)->sp + INT64_C(288)) + 8));
  /* c9230: and v17.16b, v17.16b, v25.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] & (c)->q[25].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] & (c)->q[25].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] & (c)->q[25].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] & (c)->q[25].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] & (c)->q[25].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] & (c)->q[25].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] & (c)->q[25].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] & (c)->q[25].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] & (c)->q[25].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] & (c)->q[25].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] & (c)->q[25].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] & (c)->q[25].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] & (c)->q[25].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] & (c)->q[25].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] & (c)->q[25].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] & (c)->q[25].u8[15];
    (c)->q[17] = _t; }
  /* c9234: ldur q25, [x12, #-0xec] */
  arc_q_w(c, 25, arc_ld64((ARC_X_R(c, 12) + INT64_C(-236))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-236)) + 8));
  /* c9238: and v20.16b, v20.16b, v26.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[26].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[26].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[26].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[26].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[26].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[26].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[26].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[26].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[26].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[26].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[26].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[26].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[26].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[26].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[26].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[26].u8[15];
    (c)->q[20] = _t; }
  /* c923c: ldur q26, [x12, #-0xfc] */
  arc_q_w(c, 26, arc_ld64((ARC_X_R(c, 12) + INT64_C(-252))), arc_ld64((ARC_X_R(c, 12) + INT64_C(-252)) + 8));
  /* c9240: and v16.16b, v16.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[29].u8[15];
    (c)->q[16] = _t; }
  /* c9244: ldr q29, [sp, #0x110] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(272))), arc_ld64(((c)->sp + INT64_C(272)) + 8));
  /* c9248: and v24.16b, v24.16b, v28.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[28].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[28].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[28].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[28].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[28].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[28].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[28].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[28].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[28].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[28].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[28].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[28].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[28].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[28].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[28].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[28].u8[15];
    (c)->q[24] = _t; }
  /* c924c: sshll2 v28.2d, v18.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[3]) << 0);
    (c)->q[28] = _t; }
  /* c9250: rev64 v25.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[25].u32[1];
    _t.u32[1] = (c)->q[25].u32[0];
    _t.u32[2] = (c)->q[25].u32[3];
    _t.u32[3] = (c)->q[25].u32[2];
    (c)->q[25] = _t; }
  /* c9254: cmhi v19.4s, v0.4s, v19.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[19].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[19].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[19].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[19].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[19] = _t; }
  /* c9258: and v27.16b, v27.16b, v29.16b */
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
  /* c925c: ldr q29, [sp, #0xe0] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(224))), arc_ld64(((c)->sp + INT64_C(224)) + 8));
  /* c9260: rev64 v26.4s, v26.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[26].u32[1];
    _t.u32[1] = (c)->q[26].u32[0];
    _t.u32[2] = (c)->q[26].u32[3];
    _t.u32[3] = (c)->q[26].u32[2];
    (c)->q[26] = _t; }
  /* c9264: sshll v18.2d, v18.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[18].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[18].i32[1]) << 0);
    (c)->q[18] = _t; }
  /* c9268: orr v6.16b, v16.16b, v22.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] | (c)->q[22].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] | (c)->q[22].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] | (c)->q[22].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] | (c)->q[22].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] | (c)->q[22].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] | (c)->q[22].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] | (c)->q[22].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] | (c)->q[22].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] | (c)->q[22].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] | (c)->q[22].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] | (c)->q[22].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] | (c)->q[22].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] | (c)->q[22].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] | (c)->q[22].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] | (c)->q[22].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] | (c)->q[22].u8[15];
    (c)->q[6] = _t; }
  /* c926c: orr v17.16b, v24.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* c9270: and v28.16b, v28.16b, v29.16b */
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
  /* c9274: ldr q29, [sp, #0x100] */
  arc_q_w(c, 29, arc_ld64(((c)->sp + INT64_C(256))), arc_ld64(((c)->sp + INT64_C(256)) + 8));
  /* c9278: sshll2 v24.2d, v19.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[3]) << 0);
    (c)->q[24] = _t; }
  /* c927c: orr v16.16b, v27.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[27].u8[0] | (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[27].u8[1] | (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[27].u8[2] | (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[27].u8[3] | (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[27].u8[4] | (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[27].u8[5] | (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[27].u8[6] | (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[27].u8[7] | (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[27].u8[8] | (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[27].u8[9] | (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[27].u8[10] | (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[27].u8[11] | (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[27].u8[12] | (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[27].u8[13] | (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[27].u8[14] | (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[27].u8[15] | (c)->q[21].u8[15];
    (c)->q[16] = _t; }
  /* c9280: ldr q21, [sp, #0xf0] */
  arc_q_w(c, 21, arc_ld64(((c)->sp + INT64_C(240))), arc_ld64(((c)->sp + INT64_C(240)) + 8));
  /* c9284: sshll v19.2d, v19.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[19].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[19].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c9288: and v23.16b, v23.16b, v29.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] & (c)->q[29].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] & (c)->q[29].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] & (c)->q[29].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] & (c)->q[29].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] & (c)->q[29].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] & (c)->q[29].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] & (c)->q[29].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] & (c)->q[29].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] & (c)->q[29].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] & (c)->q[29].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] & (c)->q[29].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] & (c)->q[29].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] & (c)->q[29].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] & (c)->q[29].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] & (c)->q[29].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] & (c)->q[29].u8[15];
    (c)->q[23] = _t; }
  /* c928c: ext v25.16b, v25.16b, v25.16b, #8 */
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
  /* c9290: ext v26.16b, v26.16b, v26.16b, #8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[26].u8[8];
    _t.u8[1] = (c)->q[26].u8[9];
    _t.u8[2] = (c)->q[26].u8[10];
    _t.u8[3] = (c)->q[26].u8[11];
    _t.u8[4] = (c)->q[26].u8[12];
    _t.u8[5] = (c)->q[26].u8[13];
    _t.u8[6] = (c)->q[26].u8[14];
    _t.u8[7] = (c)->q[26].u8[15];
    _t.u8[8] = (c)->q[26].u8[0];
    _t.u8[9] = (c)->q[26].u8[1];
    _t.u8[10] = (c)->q[26].u8[2];
    _t.u8[11] = (c)->q[26].u8[3];
    _t.u8[12] = (c)->q[26].u8[4];
    _t.u8[13] = (c)->q[26].u8[5];
    _t.u8[14] = (c)->q[26].u8[6];
    _t.u8[15] = (c)->q[26].u8[7];
    (c)->q[26] = _t; }
  /* c9294: and v18.16b, v18.16b, v21.16b */
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
    (c)->q[18] = _t; }
  /* c9298: ldp q21, q22, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_q_w(c, 21, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 22, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c929c: orr v17.16b, v28.16b, v17.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[28].u8[0] | (c)->q[17].u8[0];
    _t.u8[1] = (c)->q[28].u8[1] | (c)->q[17].u8[1];
    _t.u8[2] = (c)->q[28].u8[2] | (c)->q[17].u8[2];
    _t.u8[3] = (c)->q[28].u8[3] | (c)->q[17].u8[3];
    _t.u8[4] = (c)->q[28].u8[4] | (c)->q[17].u8[4];
    _t.u8[5] = (c)->q[28].u8[5] | (c)->q[17].u8[5];
    _t.u8[6] = (c)->q[28].u8[6] | (c)->q[17].u8[6];
    _t.u8[7] = (c)->q[28].u8[7] | (c)->q[17].u8[7];
    _t.u8[8] = (c)->q[28].u8[8] | (c)->q[17].u8[8];
    _t.u8[9] = (c)->q[28].u8[9] | (c)->q[17].u8[9];
    _t.u8[10] = (c)->q[28].u8[10] | (c)->q[17].u8[10];
    _t.u8[11] = (c)->q[28].u8[11] | (c)->q[17].u8[11];
    _t.u8[12] = (c)->q[28].u8[12] | (c)->q[17].u8[12];
    _t.u8[13] = (c)->q[28].u8[13] | (c)->q[17].u8[13];
    _t.u8[14] = (c)->q[28].u8[14] | (c)->q[17].u8[14];
    _t.u8[15] = (c)->q[28].u8[15] | (c)->q[17].u8[15];
    (c)->q[17] = _t; }
  /* c92a0: orr v2.16b, v5.16b, v2.16b */
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
  /* c92a4: orr v1.16b, v7.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c92a8: orr v20.16b, v23.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[23].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[23].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[23].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[23].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[23].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[23].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[23].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[23].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[23].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[23].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[23].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[23].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[23].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[23].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[23].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[23].u8[15] | (c)->q[20].u8[15];
    (c)->q[20] = _t; }
  /* c92ac: and v21.16b, v24.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[24].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[24].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[24].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[24].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[24].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[24].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[24].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[24].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[24].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[24].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[24].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[24].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[24].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[24].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[24].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[24].u8[15] & (c)->q[21].u8[15];
    (c)->q[21] = _t; }
  /* c92b0: and v19.16b, v19.16b, v22.16b */
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
    (c)->q[19] = _t; }
  /* c92b4: cmhi v22.4s, v0.4s, v25.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[25].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[25].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[25].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[25].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[22] = _t; }
  /* c92b8: cmhi v5.4s, v0.4s, v26.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[0].u32[0] > (c)->q[26].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[0].u32[1] > (c)->q[26].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[0].u32[2] > (c)->q[26].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[0].u32[3] > (c)->q[26].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[5] = _t; }
  /* c92bc: orr v6.16b, v18.16b, v6.16b */
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
  /* c92c0: orr v4.16b, v17.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[17].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[17].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[17].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[17].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[17].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[17].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[17].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[17].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[17].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[17].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[17].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[17].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[17].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[17].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[17].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[17].u8[15] | (c)->q[4].u8[15];
    (c)->q[4] = _t; }
  /* c92c4: orr v7.16b, v21.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[21].u8[0] | (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[21].u8[1] | (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[21].u8[2] | (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[21].u8[3] | (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[21].u8[4] | (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[21].u8[5] | (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[21].u8[6] | (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[21].u8[7] | (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[21].u8[8] | (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[21].u8[9] | (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[21].u8[10] | (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[21].u8[11] | (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[21].u8[12] | (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[21].u8[13] | (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[21].u8[14] | (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[21].u8[15] | (c)->q[16].u8[15];
    (c)->q[7] = _t; }
  /* c92c8: ldr q21, [x26, #0xc40] */
  arc_q_w(c, 21, arc_ld64((ARC_X_R(c, 26) + INT64_C(3136))), arc_ld64((ARC_X_R(c, 26) + INT64_C(3136)) + 8));
  /* c92cc: orr v16.16b, v19.16b, v20.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[20].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[20].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[20].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[20].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[20].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[20].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[20].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[20].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[20].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[20].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[20].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[20].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[20].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[20].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[20].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[20].u8[15];
    (c)->q[16] = _t; }
  /* c92d0: ldr q20, [x6, #0xc80] */
  arc_q_w(c, 20, arc_ld64((ARC_X_R(c, 6) + INT64_C(3200))), arc_ld64((ARC_X_R(c, 6) + INT64_C(3200)) + 8));
  /* c92d4: sshll v17.2d, v22.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[1]) << 0);
    (c)->q[17] = _t; }
  /* c92d8: sshll2 v18.2d, v22.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[22].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[22].i32[3]) << 0);
    (c)->q[18] = _t; }
  /* c92dc: sshll v19.2d, v5.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[0]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[1]) << 0);
    (c)->q[19] = _t; }
  /* c92e0: sshll2 v5.2d, v5.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((int64_t)((c)->q[5].i32[2]) << 0);
    _t.u64[1] = (uint64_t)((int64_t)((c)->q[5].i32[3]) << 0);
    (c)->q[5] = _t; }
  /* c92e4: orr v3.16b, v6.16b, v3.16b */
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
  /* c92e8: ldr q6, [x7, #0xa00] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 7) + INT64_C(2560))), arc_ld64((ARC_X_R(c, 7) + INT64_C(2560)) + 8));
  /* c92ec: orr v1.16b, v16.16b, v1.16b */
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
  /* c92f0: ldr q16, [sp, #0xb0] */
  arc_q_w(c, 16, arc_ld64(((c)->sp + INT64_C(176))), arc_ld64(((c)->sp + INT64_C(176)) + 8));
  /* c92f4: orr v2.16b, v7.16b, v2.16b */
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
  /* c92f8: and v7.16b, v17.16b, v20.16b */
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
  /* c92fc: and v5.16b, v5.16b, v6.16b */
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
  /* c9300: and v6.16b, v19.16b, v21.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[21].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[21].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[21].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[21].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[21].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[21].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[21].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[21].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[21].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[21].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[21].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[21].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[21].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[21].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[21].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[21].u8[15];
    (c)->q[6] = _t; }
  /* c9304: and v16.16b, v18.16b, v16.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] & (c)->q[16].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] & (c)->q[16].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] & (c)->q[16].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] & (c)->q[16].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] & (c)->q[16].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] & (c)->q[16].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] & (c)->q[16].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] & (c)->q[16].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] & (c)->q[16].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] & (c)->q[16].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] & (c)->q[16].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] & (c)->q[16].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] & (c)->q[16].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] & (c)->q[16].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] & (c)->q[16].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] & (c)->q[16].u8[15];
    (c)->q[16] = _t; }
  /* c9308: orr v3.16b, v7.16b, v3.16b */
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
  /* c930c: orr v4.16b, v16.16b, v4.16b */
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
  /* c9310: orr v1.16b, v6.16b, v1.16b */
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
  /* c9314: orr v2.16b, v5.16b, v2.16b */
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
  /* c9318: orr v2.16b, v2.16b, v4.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[4].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[4].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[4].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[4].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[4].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[4].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[4].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[4].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[4].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[4].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[4].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[4].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[4].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[4].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[4].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[4].u8[15];
    (c)->q[2] = _t; }
  /* c931c: orr v1.16b, v1.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[1].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[1].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[1].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[1].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[1].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[1].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[1].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[1].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[1].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[1].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[1].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[1].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[1].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[1].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[1].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[1].u8[15] | (c)->q[3].u8[15];
    (c)->q[1] = _t; }
  /* c9320: orr v1.16b, v1.16b, v2.16b */
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
  /* c9324: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* c9328: orr v1.8b, v1.8b, v2.8b */
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
  /* c932c: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* c9330: cbz x13, #0xc8de8 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c8de8;
L_c9334:;
  /* c9334: cbz x14, #0xc8de8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c8de8;
L_c9338:;
  /* c9338: rbit x15, x14 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 14)));
  /* c933c: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* c9340: sub x17, x14, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c9344: sub x3, x13, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c9348: and x14, x17, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 17) & ARC_X_R(c, 14)));
  /* c934c: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* c9350: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c9354: and x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) & ARC_X_R(c, 13)));
  /* c9358: sub x15, x12, x15, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* c935c: ldr w0, [x11, x16, lsl #2] */
  ARC_W_W(c, 0, arc_ld32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 2))));
  /* c9360: ldr w1, [x15] */
  ARC_W_W(c, 1, arc_ld32(ARC_X_R(c, 15)));
  /* c9364: str w1, [x11, x16, lsl #2] */
  arc_st32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 2)), ARC_W_R(c, 1));
  /* c9368: str w0, [x15] */
  arc_st32(ARC_X_R(c, 15), ARC_W_R(c, 0));
  /* c936c: cbz x14, #0xc8de8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c8de8;
  /* c9370: cbnz x13, #0xc9338 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c9338;
  /* c9374: b #0xc8de8 */
  goto L_c8de8;
L_c9378:;
  /* c9378: asr x15, x13, #2 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(2)) & 63))));
  /* c937c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c9380: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c9384: b #0xc93ac */
  goto L_c93ac;
L_c9388:;
  /* c9388: asr x15, x15, #2 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(2)) & 63))));
  /* c938c: orr x17, x14, x13 */
  ARC_X_W(c, 17, (ARC_X_R(c, 14) | ARC_X_R(c, 13)));
  /* c9390: cbz x17, #0xc93ac */
  if ((ARC_X_R(c, 17)) == 0) goto L_c93ac;
  /* c9394: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* c9398: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* c939c: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* c93a0: cbz x13, #0xc93bc */
  if ((ARC_X_R(c, 13)) == 0) goto L_c93bc;
  /* c93a4: cbnz w16, #0xc94d8 */
  if ((ARC_W_R(c, 16)) != 0) goto L_c94d8;
  /* c93a8: b #0xc9604 */
  goto L_c9604;
L_c93ac:;
  /* c93ac: add x13, x15, #1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* c93b0: add x15, x13, x13, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 13) + ((uint64_t)(ARC_X_R(c, 13)) >> 63)));
  /* c93b4: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* c93b8: sub x0, x13, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
L_c93bc:;
  /* c93bc: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c93c0: b.lt #0xc93dc */
  if (ARC_COND(c, 11)) goto L_c93dc;
  /* c93c4: cmp x15, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(8));
  /* c93c8: b.hs #0xc93e4 */
  if (ARC_COND(c, 2)) goto L_c93e4;
  /* c93cc: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* c93d0: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c93d4: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* c93d8: b #0xc94ac */
  goto L_c94ac;
L_c93dc:;
  /* c93dc: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c93e0: b #0xc94cc */
  goto L_c94cc;
L_c93e4:;
  /* c93e4: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c93e8: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c93ec: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c93f0: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c93f4: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c93f8: and x17, x15, #0x7ffffffffffffff8 */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775800)));
  /* c93fc: dup v4.4s, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 8));
    _t.u32[1] = (ARC_W_R(c, 8));
    _t.u32[2] = (ARC_W_R(c, 8));
    _t.u32[3] = (ARC_W_R(c, 8));
    (c)->q[4] = _t; }
  /* c9400: ldr q5, [x13, #0xc10] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 13) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 13) + INT64_C(3088)) + 8));
  /* c9404: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* c9408: add x1, x11, x17, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 2)));
  /* c940c: ldr q6, [x13, #0xa80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 13) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2688)) + 8));
  /* c9410: add x13, x11, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* c9414: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
L_c9418:;
  /* c9418: ldp q7, q16, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 7, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 16, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c941c: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* c9420: dup v18.2d, x4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 4));
    _t.u64[1] = (ARC_X_R(c, 4));
    (c)->q[18] = _t; }
  /* c9424: subs x3, x3, #8 */
  ARC_X_W(c, 3, arc_sub64(c, ARC_X_R(c, 3), UINT64_C(8)));
  /* c9428: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* c942c: cmhs v7.4s, v7.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[7].u32[0] >= (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[7].u32[1] >= (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[7].u32[2] >= (c)->q[4].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[7].u32[3] >= (c)->q[4].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c9430: cmhs v16.4s, v16.4s, v4.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[16].u32[0] >= (c)->q[4].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[16].u32[1] >= (c)->q[4].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[16].u32[2] >= (c)->q[4].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[16].u32[3] >= (c)->q[4].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c9434: add v21.2d, v5.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[17].u64[1];
    (c)->q[21] = _t; }
  /* c9438: add v17.2d, v6.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[17].u64[1];
    (c)->q[17] = _t; }
  /* c943c: ushll2 v19.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[19] = _t; }
  /* c9440: ushll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* c9444: ushll2 v20.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c9448: ushll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* c944c: and v19.16b, v19.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[18].u8[15];
    (c)->q[19] = _t; }
  /* c9450: and v7.16b, v7.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[18].u8[15];
    (c)->q[7] = _t; }
  /* c9454: and v20.16b, v20.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[18].u8[15];
    (c)->q[20] = _t; }
  /* c9458: and v16.16b, v16.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[18].u8[15];
    (c)->q[16] = _t; }
  /* c945c: ushl v7.2d, v7.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[7] = _t; }
  /* c9460: ushl v18.2d, v19.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[19].u64[0], (int8_t)(c)->q[5].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[19].u64[1], (int8_t)(c)->q[5].u64[1]);
    (c)->q[18] = _t; }
  /* c9464: ushl v19.2d, v20.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[20].u64[0], (int8_t)(c)->q[21].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[20].u64[1], (int8_t)(c)->q[21].u64[1]);
    (c)->q[19] = _t; }
  /* c9468: dup v20.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[20] = _t; }
  /* c946c: ushl v16.2d, v16.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[16].u64[0], (int8_t)(c)->q[17].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[16].u64[1], (int8_t)(c)->q[17].u64[1]);
    (c)->q[16] = _t; }
  /* c9470: orr v1.16b, v18.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c9474: orr v0.16b, v7.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c9478: orr v3.16b, v19.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c947c: orr v2.16b, v16.16b, v2.16b */
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
  /* c9480: add v5.2d, v5.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[20].u64[1];
    (c)->q[5] = _t; }
  /* c9484: add v6.2d, v6.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[20].u64[1];
    (c)->q[6] = _t; }
  /* c9488: b.ne #0xc9418 */
  if (ARC_COND(c, 1)) goto L_c9418;
  /* c948c: orr v0.16b, v2.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c9490: orr v1.16b, v3.16b, v1.16b */
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
  /* c9494: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c9498: orr v0.16b, v0.16b, v1.16b */
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
  /* c949c: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c94a0: orr v0.8b, v0.8b, v1.8b */
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
  /* c94a4: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* c94a8: b.eq #0xc94cc */
  if (ARC_COND(c, 0)) goto L_c94cc;
L_c94ac:;
  /* c94ac: ldr w3, [x1], #4 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(4));
    ARC_W_W(c, 3, arc_ld32(_a));
  }
  /* c94b0: cmp w3, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 3), ARC_W_R(c, 8));
  /* c94b4: cset w3, hs */
  ARC_W_W(c, 3, (ARC_COND(c, 2) ? 1 : 0));
  /* c94b8: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* c94bc: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* c94c0: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* c94c4: orr x13, x3, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 3) | ARC_X_R(c, 13)));
  /* c94c8: b.ne #0xc94ac */
  if (ARC_COND(c, 1)) goto L_c94ac;
L_c94cc:;
  /* c94cc: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* c94d0: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* c94d4: cbz w16, #0xc9604 */
  if ((ARC_W_R(c, 16)) == 0) goto L_c9604;
L_c94d8:;
  /* c94d8: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* c94dc: b.lt #0xc94f8 */
  if (ARC_COND(c, 11)) goto L_c94f8;
  /* c94e0: cmp x15, #8 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(8));
  /* c94e4: b.hs #0xc950c */
  if (ARC_COND(c, 2)) goto L_c950c;
  /* c94e8: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* c94ec: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* c94f0: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* c94f4: b #0xc95e4 */
  goto L_c95e4;
L_c94f8:;
  /* c94f8: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* c94fc: csel x14, x17, xzr, eq */
  ARC_X_W(c, 14, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* c9500: cbz x13, #0xc97b4 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c97b4;
  /* c9504: sub x12, x12, x15, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* c9508: b #0xc9674 */
  goto L_c9674;
L_c950c:;
  /* c950c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* c9510: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* c9514: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c9518: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* c951c: movi v3.2d, #0000000000000000 */
  arc_v_clear(c, 3);
  /* c9520: and x16, x15, #0x7ffffffffffffff8 */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775800)));
  /* c9524: dup v4.4s, w8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (ARC_W_R(c, 8));
    _t.u32[1] = (ARC_W_R(c, 8));
    _t.u32[2] = (ARC_W_R(c, 8));
    _t.u32[3] = (ARC_W_R(c, 8));
    (c)->q[4] = _t; }
  /* c9528: ldr q5, [x14, #0xc10] */
  arc_q_w(c, 5, arc_ld64((ARC_X_R(c, 14) + INT64_C(3088))), arc_ld64((ARC_X_R(c, 14) + INT64_C(3088)) + 8));
  /* c952c: adrp x14, #0x52000 */
  ARC_X_W(c, 14, (arc_image_bases[1] + UINT64_C(335872)));
  /* c9530: sub x0, x12, x16, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* c9534: ldr q6, [x14, #0xa80] */
  arc_q_w(c, 6, arc_ld64((ARC_X_R(c, 14) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 14) + INT64_C(2688)) + 8));
  /* c9538: sub x14, x12, #0xc */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - UINT64_C(12)));
  /* c953c: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
L_c9540:;
  /* c9540: ldp q16, q7, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 16, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 7, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9544: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* c9548: dup v18.2d, x4 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 4));
    _t.u64[1] = (ARC_X_R(c, 4));
    (c)->q[18] = _t; }
  /* c954c: sub x1, x1, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - UINT64_C(8)));
  /* c9550: sub x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - UINT64_C(32)));
  /* c9554: rev64 v7.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[7].u32[1];
    _t.u32[1] = (c)->q[7].u32[0];
    _t.u32[2] = (c)->q[7].u32[3];
    _t.u32[3] = (c)->q[7].u32[2];
    (c)->q[7] = _t; }
  /* c9558: rev64 v16.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = (c)->q[16].u32[1];
    _t.u32[1] = (c)->q[16].u32[0];
    _t.u32[2] = (c)->q[16].u32[3];
    _t.u32[3] = (c)->q[16].u32[2];
    (c)->q[16] = _t; }
  /* c955c: add v21.2d, v5.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[17].u64[1];
    (c)->q[21] = _t; }
  /* c9560: add v17.2d, v6.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[17].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[17].u64[1];
    (c)->q[17] = _t; }
  /* c9564: ext v7.16b, v7.16b, v7.16b, #8 */
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
  /* c9568: ext v16.16b, v16.16b, v16.16b, #8 */
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
  /* c956c: cmhi v7.4s, v4.4s, v7.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[4].u32[0] > (c)->q[7].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[4].u32[1] > (c)->q[7].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[4].u32[2] > (c)->q[7].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[4].u32[3] > (c)->q[7].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[7] = _t; }
  /* c9570: cmhi v16.4s, v4.4s, v16.4s */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u32[0] = ((c)->q[4].u32[0] > (c)->q[16].u32[0]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[1] = ((c)->q[4].u32[1] > (c)->q[16].u32[1]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[2] = ((c)->q[4].u32[2] > (c)->q[16].u32[2]) ? (uint32_t)~(uint32_t)0 : 0;
    _t.u32[3] = ((c)->q[4].u32[3] > (c)->q[16].u32[3]) ? (uint32_t)~(uint32_t)0 : 0;
    (c)->q[16] = _t; }
  /* c9574: ushll2 v19.2d, v7.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[3]) << 0);
    (c)->q[19] = _t; }
  /* c9578: ushll v7.2d, v7.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[7].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[7].u32[1]) << 0);
    (c)->q[7] = _t; }
  /* c957c: ushll2 v20.2d, v16.4s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[2]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[3]) << 0);
    (c)->q[20] = _t; }
  /* c9580: ushll v16.2d, v16.2s, #0 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (uint64_t)((uint64_t)((c)->q[16].u32[0]) << 0);
    _t.u64[1] = (uint64_t)((uint64_t)((c)->q[16].u32[1]) << 0);
    (c)->q[16] = _t; }
  /* c9584: and v19.16b, v19.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] & (c)->q[18].u8[15];
    (c)->q[19] = _t; }
  /* c9588: and v7.16b, v7.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] & (c)->q[18].u8[15];
    (c)->q[7] = _t; }
  /* c958c: and v20.16b, v20.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[20].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[20].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[20].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[20].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[20].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[20].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[20].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[20].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[20].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[20].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[20].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[20].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[20].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[20].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[20].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[20].u8[15] & (c)->q[18].u8[15];
    (c)->q[20] = _t; }
  /* c9590: and v16.16b, v16.16b, v18.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[16].u8[0] & (c)->q[18].u8[0];
    _t.u8[1] = (c)->q[16].u8[1] & (c)->q[18].u8[1];
    _t.u8[2] = (c)->q[16].u8[2] & (c)->q[18].u8[2];
    _t.u8[3] = (c)->q[16].u8[3] & (c)->q[18].u8[3];
    _t.u8[4] = (c)->q[16].u8[4] & (c)->q[18].u8[4];
    _t.u8[5] = (c)->q[16].u8[5] & (c)->q[18].u8[5];
    _t.u8[6] = (c)->q[16].u8[6] & (c)->q[18].u8[6];
    _t.u8[7] = (c)->q[16].u8[7] & (c)->q[18].u8[7];
    _t.u8[8] = (c)->q[16].u8[8] & (c)->q[18].u8[8];
    _t.u8[9] = (c)->q[16].u8[9] & (c)->q[18].u8[9];
    _t.u8[10] = (c)->q[16].u8[10] & (c)->q[18].u8[10];
    _t.u8[11] = (c)->q[16].u8[11] & (c)->q[18].u8[11];
    _t.u8[12] = (c)->q[16].u8[12] & (c)->q[18].u8[12];
    _t.u8[13] = (c)->q[16].u8[13] & (c)->q[18].u8[13];
    _t.u8[14] = (c)->q[16].u8[14] & (c)->q[18].u8[14];
    _t.u8[15] = (c)->q[16].u8[15] & (c)->q[18].u8[15];
    (c)->q[16] = _t; }
  /* c9594: ushl v7.2d, v7.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[7].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[7].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[7] = _t; }
  /* c9598: ushl v18.2d, v19.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[19].u64[0], (int8_t)(c)->q[5].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[19].u64[1], (int8_t)(c)->q[5].u64[1]);
    (c)->q[18] = _t; }
  /* c959c: ushl v19.2d, v20.2d, v21.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[20].u64[0], (int8_t)(c)->q[21].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[20].u64[1], (int8_t)(c)->q[21].u64[1]);
    (c)->q[19] = _t; }
  /* c95a0: dup v20.2d, x5 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 5));
    _t.u64[1] = (ARC_X_R(c, 5));
    (c)->q[20] = _t; }
  /* c95a4: ushl v16.2d, v16.2d, v17.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[16].u64[0], (int8_t)(c)->q[17].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[16].u64[1], (int8_t)(c)->q[17].u64[1]);
    (c)->q[16] = _t; }
  /* c95a8: orr v1.16b, v18.16b, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[18].u8[0] | (c)->q[1].u8[0];
    _t.u8[1] = (c)->q[18].u8[1] | (c)->q[1].u8[1];
    _t.u8[2] = (c)->q[18].u8[2] | (c)->q[1].u8[2];
    _t.u8[3] = (c)->q[18].u8[3] | (c)->q[1].u8[3];
    _t.u8[4] = (c)->q[18].u8[4] | (c)->q[1].u8[4];
    _t.u8[5] = (c)->q[18].u8[5] | (c)->q[1].u8[5];
    _t.u8[6] = (c)->q[18].u8[6] | (c)->q[1].u8[6];
    _t.u8[7] = (c)->q[18].u8[7] | (c)->q[1].u8[7];
    _t.u8[8] = (c)->q[18].u8[8] | (c)->q[1].u8[8];
    _t.u8[9] = (c)->q[18].u8[9] | (c)->q[1].u8[9];
    _t.u8[10] = (c)->q[18].u8[10] | (c)->q[1].u8[10];
    _t.u8[11] = (c)->q[18].u8[11] | (c)->q[1].u8[11];
    _t.u8[12] = (c)->q[18].u8[12] | (c)->q[1].u8[12];
    _t.u8[13] = (c)->q[18].u8[13] | (c)->q[1].u8[13];
    _t.u8[14] = (c)->q[18].u8[14] | (c)->q[1].u8[14];
    _t.u8[15] = (c)->q[18].u8[15] | (c)->q[1].u8[15];
    (c)->q[1] = _t; }
  /* c95ac: orr v0.16b, v7.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[7].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[7].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[7].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[7].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[7].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[7].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[7].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[7].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[7].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[7].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[7].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[7].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[7].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[7].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[7].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[7].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c95b0: orr v3.16b, v19.16b, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[19].u8[0] | (c)->q[3].u8[0];
    _t.u8[1] = (c)->q[19].u8[1] | (c)->q[3].u8[1];
    _t.u8[2] = (c)->q[19].u8[2] | (c)->q[3].u8[2];
    _t.u8[3] = (c)->q[19].u8[3] | (c)->q[3].u8[3];
    _t.u8[4] = (c)->q[19].u8[4] | (c)->q[3].u8[4];
    _t.u8[5] = (c)->q[19].u8[5] | (c)->q[3].u8[5];
    _t.u8[6] = (c)->q[19].u8[6] | (c)->q[3].u8[6];
    _t.u8[7] = (c)->q[19].u8[7] | (c)->q[3].u8[7];
    _t.u8[8] = (c)->q[19].u8[8] | (c)->q[3].u8[8];
    _t.u8[9] = (c)->q[19].u8[9] | (c)->q[3].u8[9];
    _t.u8[10] = (c)->q[19].u8[10] | (c)->q[3].u8[10];
    _t.u8[11] = (c)->q[19].u8[11] | (c)->q[3].u8[11];
    _t.u8[12] = (c)->q[19].u8[12] | (c)->q[3].u8[12];
    _t.u8[13] = (c)->q[19].u8[13] | (c)->q[3].u8[13];
    _t.u8[14] = (c)->q[19].u8[14] | (c)->q[3].u8[14];
    _t.u8[15] = (c)->q[19].u8[15] | (c)->q[3].u8[15];
    (c)->q[3] = _t; }
  /* c95b4: orr v2.16b, v16.16b, v2.16b */
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
  /* c95b8: add v5.2d, v5.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[5].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[5].u64[1] + (c)->q[20].u64[1];
    (c)->q[5] = _t; }
  /* c95bc: add v6.2d, v6.2d, v20.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[6].u64[0] + (c)->q[20].u64[0];
    _t.u64[1] = (c)->q[6].u64[1] + (c)->q[20].u64[1];
    (c)->q[6] = _t; }
  /* c95c0: cbnz x1, #0xc9540 */
  if ((ARC_X_R(c, 1)) != 0) goto L_c9540;
  /* c95c4: orr v0.16b, v2.16b, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = (c)->q[2].u8[0] | (c)->q[0].u8[0];
    _t.u8[1] = (c)->q[2].u8[1] | (c)->q[0].u8[1];
    _t.u8[2] = (c)->q[2].u8[2] | (c)->q[0].u8[2];
    _t.u8[3] = (c)->q[2].u8[3] | (c)->q[0].u8[3];
    _t.u8[4] = (c)->q[2].u8[4] | (c)->q[0].u8[4];
    _t.u8[5] = (c)->q[2].u8[5] | (c)->q[0].u8[5];
    _t.u8[6] = (c)->q[2].u8[6] | (c)->q[0].u8[6];
    _t.u8[7] = (c)->q[2].u8[7] | (c)->q[0].u8[7];
    _t.u8[8] = (c)->q[2].u8[8] | (c)->q[0].u8[8];
    _t.u8[9] = (c)->q[2].u8[9] | (c)->q[0].u8[9];
    _t.u8[10] = (c)->q[2].u8[10] | (c)->q[0].u8[10];
    _t.u8[11] = (c)->q[2].u8[11] | (c)->q[0].u8[11];
    _t.u8[12] = (c)->q[2].u8[12] | (c)->q[0].u8[12];
    _t.u8[13] = (c)->q[2].u8[13] | (c)->q[0].u8[13];
    _t.u8[14] = (c)->q[2].u8[14] | (c)->q[0].u8[14];
    _t.u8[15] = (c)->q[2].u8[15] | (c)->q[0].u8[15];
    (c)->q[0] = _t; }
  /* c95c8: orr v1.16b, v3.16b, v1.16b */
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
  /* c95cc: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c95d0: orr v0.16b, v0.16b, v1.16b */
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
  /* c95d4: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* c95d8: orr v0.8b, v0.8b, v1.8b */
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
  /* c95dc: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* c95e0: b.eq #0xc9604 */
  if (ARC_COND(c, 0)) goto L_c9604;
L_c95e4:;
  /* c95e4: ldr w1, [x0], #0xfffffffffffffffc */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-4));
    ARC_W_W(c, 1, arc_ld32(_a));
  }
  /* c95e8: cmp w1, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 1), ARC_W_R(c, 8));
  /* c95ec: cset w1, lo */
  ARC_W_W(c, 1, (ARC_COND(c, 3) ? 1 : 0));
  /* c95f0: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* c95f4: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* c95f8: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* c95fc: orr x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) | ARC_X_R(c, 14)));
  /* c9600: b.ne #0xc95e4 */
  if (ARC_COND(c, 1)) goto L_c95e4;
L_c9604:;
  /* c9604: cbz x13, #0xc9648 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c9648;
  /* c9608: cbz x14, #0xc9648 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c9648;
L_c960c:;
  /* c960c: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* c9610: rbit x0, x13 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 13)));
  /* c9614: sub x1, x14, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* c9618: sub x4, x13, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* c961c: and x14, x1, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 1) & ARC_X_R(c, 14)));
  /* c9620: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* c9624: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* c9628: and x13, x4, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 4) & ARC_X_R(c, 13)));
  /* c962c: sub x16, x12, x16, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* c9630: ldr w5, [x11, x0, lsl #2] */
  ARC_W_W(c, 5, arc_ld32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 2))));
  /* c9634: ldr w3, [x16] */
  ARC_W_W(c, 3, arc_ld32(ARC_X_R(c, 16)));
  /* c9638: str w3, [x11, x0, lsl #2] */
  arc_st32((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 2)), ARC_W_R(c, 3));
  /* c963c: str w5, [x16] */
  arc_st32(ARC_X_R(c, 16), ARC_W_R(c, 5));
  /* c9640: cbz x14, #0xc9648 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c9648;
  /* c9644: cbnz x13, #0xc960c */
  if ((ARC_X_R(c, 13)) != 0) goto L_c960c;
L_c9648:;
  /* c9648: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* c964c: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* c9650: sub x12, x12, x15, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 2)));
  /* c9654: cbnz x13, #0xc9674 */
  if ((ARC_X_R(c, 13)) != 0) goto L_c9674;
  /* c9658: add x23, x11, x17, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 2)));
  /* c965c: cbnz x14, #0xc96ac */
  if ((ARC_X_R(c, 14)) != 0) goto L_c96ac;
  /* c9660: b #0xc96d8 */
  goto L_c96d8;
L_c9664:;
  /* c9664: lsl x14, x28, x14 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 28)) << ((ARC_X_R(c, 14)) & 63)));
  /* c9668: sub x12, x12, #4 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(4)));
  /* c966c: bic x13, x13, x14 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 14))));
  /* c9670: cbz x13, #0xc96d4 */
  if ((ARC_X_R(c, 13)) == 0) goto L_c96d4;
L_c9674:;
  /* c9674: clz x14, x13 */
  ARC_X_W(c, 14, arc_clz64(ARC_X_R(c, 13)));
  /* c9678: eor x14, x14, #0x3f */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) ^ UINT64_C(63)));
  /* c967c: add x15, x11, x14, lsl #2 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* c9680: cmp x12, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* c9684: b.eq #0xc9664 */
  if (ARC_COND(c, 0)) goto L_c9664;
  /* c9688: ldr w16, [x12] */
  ARC_W_W(c, 16, arc_ld32(ARC_X_R(c, 12)));
  /* c968c: ldr w17, [x15] */
  ARC_W_W(c, 17, arc_ld32(ARC_X_R(c, 15)));
  /* c9690: str w16, [x15] */
  arc_st32(ARC_X_R(c, 15), ARC_W_R(c, 16));
  /* c9694: str w17, [x12] */
  arc_st32(ARC_X_R(c, 12), ARC_W_R(c, 17));
  /* c9698: b #0xc9664 */
  goto L_c9664;
L_c969c:;
  /* c969c: lsl x11, x28, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 28)) << ((ARC_X_R(c, 11)) & 63)));
  /* c96a0: add x23, x23, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(4)));
  /* c96a4: bic x14, x14, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 11))));
  /* c96a8: cbz x14, #0xc96d8 */
  if ((ARC_X_R(c, 14)) == 0) goto L_c96d8;
L_c96ac:;
  /* c96ac: clz x11, x14 */
  ARC_X_W(c, 11, arc_clz64(ARC_X_R(c, 14)));
  /* c96b0: eor x11, x11, #0x3f */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) ^ UINT64_C(63)));
  /* c96b4: sub x13, x12, x11, lsl #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 11)) << 2)));
  /* c96b8: cmp x23, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 13));
  /* c96bc: b.eq #0xc969c */
  if (ARC_COND(c, 0)) goto L_c969c;
  /* c96c0: ldr w15, [x23] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 23)));
  /* c96c4: ldr w16, [x13] */
  ARC_W_W(c, 16, arc_ld32(ARC_X_R(c, 13)));
  /* c96c8: str w15, [x13] */
  arc_st32(ARC_X_R(c, 13), ARC_W_R(c, 15));
  /* c96cc: str w16, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 16));
  /* c96d0: b #0xc969c */
  goto L_c969c;
L_c96d4:;
  /* c96d4: add x23, x12, #4 */
  ARC_X_W(c, 23, (ARC_X_R(c, 12) + UINT64_C(4)));
L_c96d8:;
  /* c96d8: sub x24, x23, #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(4)));
  /* c96dc: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* c96e0: b.eq #0xc96ec */
  if (ARC_COND(c, 0)) goto L_c96ec;
  /* c96e4: ldr w11, [x24] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 24)));
  /* c96e8: str w11, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 11));
L_c96ec:;
  /* c96ec: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c96f0: str w8, [x24] */
  arc_st32(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* c96f4: b.lo #0xc9758 */
  if (ARC_COND(c, 3)) goto L_c9758;
  /* c96f8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c96fc: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c9700: mov x22, x26 */
  ARC_X_W(c, 22, ARC_X_R(c, 26));
  /* c9704: mov x27, x7 */
  ARC_X_W(c, 27, ARC_X_R(c, 7));
  /* c9708: mov x26, x6 */
  ARC_X_W(c, 26, ARC_X_R(c, 6));
  /* c970c: bl #0xd1120 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(825104));
  fn1_d1120(c);
  /* c9710: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* c9714: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* c9718: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* c971c: bl #0xd1120 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(825120));
  fn1_d1120(c);
  /* c9720: tbnz w0, #0, #0xc9870 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_c9870;
  /* c9724: ldp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_q_w(c, 31, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9728: mov x6, x26 */
  ARC_X_W(c, 6, ARC_X_R(c, 26));
  /* c972c: ldp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9730: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c9734: ldp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_q_w(c, 11, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 10, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9738: mov x7, x27 */
  ARC_X_W(c, 7, ARC_X_R(c, 27));
  /* c973c: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9740: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c9744: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9748: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* c974c: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c9750: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c9754: tbnz w25, #0, #0xc8b50 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_c8b50;
L_c9758:;
  /* c9758: ldr w8, [sp, #0xac] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(172))));
  /* c975c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* c9760: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* c9764: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* c9768: mov x19, x21 */
  ARC_X_W(c, 19, ARC_X_R(c, 21));
  /* c976c: mov x21, x6 */
  ARC_X_W(c, 21, ARC_X_R(c, 6));
  /* c9770: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* c9774: mov x24, x7 */
  ARC_X_W(c, 24, ARC_X_R(c, 7));
  /* c9778: bl #0xc89a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(825212));
  fn1_c89a0(c);
  /* c977c: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9780: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c9784: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9788: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c978c: ldp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_q_w(c, 11, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 10, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9790: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c9794: ldp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9798: mov x7, x24 */
  ARC_X_W(c, 7, ARC_X_R(c, 24));
  /* c979c: ldp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_q_w(c, 31, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c97a0: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c97a4: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* c97a8: mov x21, x19 */
  ARC_X_W(c, 21, ARC_X_R(c, 19));
  /* c97ac: str wzr, [sp, #0xac] */
  arc_st32(((c)->sp + INT64_C(172)), ARC_W_R(c, 31));
  /* c97b0: b #0xc8b50 */
  goto L_c8b50;
L_c97b4:;
  /* c97b4: add x23, x11, x14, lsl #2 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 14)) << 2)));
  /* c97b8: b #0xc96d8 */
  goto L_c96d8;
L_c97bc:;
  /* c97bc: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c97c0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c97c4: b.hs #0xc97dc */
  if (ARC_COND(c, 2)) goto L_c97dc;
  /* c97c8: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_c97cc:;
  /* c97cc: ldr w9, [x23, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(4));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
    ARC_W_W(c, 9, arc_ld32(_a));
  }
  /* c97d0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c97d4: b.hs #0xc97cc */
  if (ARC_COND(c, 2)) goto L_c97cc;
  /* c97d8: b #0xc97fc */
  goto L_c97fc;
L_c97dc:;
  /* c97dc: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
L_c97e0:;
  /* c97e0: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* c97e4: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c97e8: b.hs #0xc97fc */
  if (ARC_COND(c, 2)) goto L_c97fc;
  /* c97ec: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* c97f0: ldr w10, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c97f4: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c97f8: b.hs #0xc97e0 */
  if (ARC_COND(c, 2)) goto L_c97e0;
L_c97fc:;
  /* c97fc: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* c9800: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* c9804: b.hs #0xc9818 */
  if (ARC_COND(c, 2)) goto L_c9818;
  /* c9808: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_c980c:;
  /* c980c: ldr w10, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c9810: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c9814: b.lo #0xc980c */
  if (ARC_COND(c, 3)) goto L_c980c;
L_c9818:;
  /* c9818: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c981c: b.hs #0xc9850 */
  if (ARC_COND(c, 2)) goto L_c9850;
  /* c9820: ldr w10, [x23] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 23)));
  /* c9824: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
L_c9828:;
  /* c9828: str w11, [x23] */
  arc_st32(ARC_X_R(c, 23), ARC_W_R(c, 11));
  /* c982c: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c9830:;
  /* c9830: ldr w10, [x23, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(4));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_a));
  }
  /* c9834: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c9838: b.hs #0xc9830 */
  if (ARC_COND(c, 2)) goto L_c9830;
L_c983c:;
  /* c983c: ldr w11, [x9, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-4));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* c9840: cmp w8, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 11));
  /* c9844: b.lo #0xc983c */
  if (ARC_COND(c, 3)) goto L_c983c;
  /* c9848: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* c984c: b.lo #0xc9828 */
  if (ARC_COND(c, 3)) goto L_c9828;
L_c9850:;
  /* c9850: sub x9, x23, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(4)));
  /* c9854: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* c9858: b.eq #0xc9864 */
  if (ARC_COND(c, 0)) goto L_c9864;
  /* c985c: ldr w10, [x9] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 9)));
  /* c9860: str w10, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 10));
L_c9864:;
  /* c9864: str wzr, [sp, #0xac] */
  arc_st32(((c)->sp + INT64_C(172)), ARC_W_R(c, 31));
  /* c9868: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c986c: b #0xc8b50 */
  goto L_c8b50;
L_c9870:;
  /* c9870: ldp q31, q30, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_q_w(c, 31, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 30, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9874: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* c9878: ldp q9, q8, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_q_w(c, 9, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 8, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c987c: mov x6, x26 */
  ARC_X_W(c, 6, ARC_X_R(c, 26));
  /* c9880: ldp q11, q10, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_q_w(c, 11, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 10, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9884: mov w4, #1 */
  ARC_W_W(c, 4, UINT64_C(1));
  /* c9888: ldp q13, q12, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_q_w(c, 13, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 12, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c988c: mov x7, x27 */
  ARC_X_W(c, 7, ARC_X_R(c, 27));
  /* c9890: ldp q15, q14, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 15, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 14, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* c9894: mov w5, #8 */
  ARC_W_W(c, 5, UINT64_C(8));
  /* c9898: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* c989c: mov x22, #-0x100 */
  ARC_X_W(c, 22, UINT64_C(18446744073709551360));
  /* c98a0: mov w27, #4 */
  ARC_W_W(c, 27, UINT64_C(4));
  /* c98a4: tbz w25, #0, #0xc8b4c */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_c8b4c;
  /* c98a8: b #0xc9a40 */
  goto L_c9a40;
L_c98ac:;
  /* c98ac: ldp w8, w9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_W_W(c, 8, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* c98b0: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c98b4: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c98b8: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c98bc: stp w8, w10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* c98c0: ldr w8, [x19, #0xc] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(12))));
  /* c98c4: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c98c8: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c98cc: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c98d0: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c98d4: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c98d8: str w8, [x19, #0xc] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(12)), ARC_W_R(c, 8));
  /* c98dc: ldr w9, [x19, #8] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c98e0: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c98e4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c98e8: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c98ec: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c98f0: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c98f4: ldp w9, w10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c98f8: ldr w11, [x19, #4] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c98fc: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c9900: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c9904: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c9908: stp w9, w8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* c990c: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c9910: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* c9914: csel w9, w11, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c9918: csel w8, w11, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 11)) : ARC_W_R(c, 8)));
  /* c991c: stur w9, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 9));
  /* c9920: ldp w11, w10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c9924: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c9928: cmp w10, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 9));
  /* c992c: csel w12, w10, w9, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c9930: csel w10, w10, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 9)));
  /* c9934: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* c9938: csel w9, w9, w11, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 11)));
  /* c993c: csel w11, w12, w11, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c9940: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c9944: csel w12, w10, w8, lo */
  ARC_W_W(c, 12, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c9948: csel w10, w10, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c994c: cmp w12, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 12), ARC_W_R(c, 11));
  /* c9950: csel w8, w8, w11, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 11)));
  /* c9954: stp w9, w8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 9));
    arc_st32(_pa + 4, ARC_W_R(c, 8));
  }
  /* c9958: csel w8, w12, w11, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* c995c: stp w8, w10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* c9960: b #0xc9a40 */
  goto L_c9a40;
L_c9964:;
  /* c9964: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c9968: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c996c: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c9970: b.hs #0xc9a40 */
  if (ARC_COND(c, 2)) goto L_c9a40;
  /* c9974: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c9978: stur w9, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 9));
  /* c997c: b #0xc9a40 */
  goto L_c9a40;
L_c9980:;
  /* c9980: ldr w8, [x19, #4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c9984: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c9988: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c998c: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c9990: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c9994: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c9998: str w8, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 8));
  /* c999c: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c99a0: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c99a4: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c99a8: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c99ac: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c99b0: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c99b4: ldp w9, w10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_W_W(c, 9, arc_ld32(_pa));
    ARC_W_W(c, 10, arc_ld32(_pa + 4));
  }
  /* c99b8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c99bc: csel w9, w9, w10, lo */
  ARC_W_W(c, 9, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 10)));
  /* c99c0: csel w8, w8, w10, hi */
  ARC_W_W(c, 8, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 10)));
  /* c99c4: str w9, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 9));
  /* c99c8: b #0xc9a3c */
  goto L_c9a3c;
L_c99cc:;
  /* c99cc: ldp w10, w8, [x19, #4] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(4));
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* c99d0: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c99d4: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* c99d8: csel w11, w9, w8, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c99dc: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c99e0: str w11, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 11));
  /* c99e4: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
  /* c99e8: ldur w8, [x20, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c99ec: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c99f0: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c99f4: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c99f8: stur w9, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 9));
  /* c99fc: ldr w9, [x19] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 19)));
  /* c9a00: cmp w9, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 9), ARC_W_R(c, 8));
  /* c9a04: csel w10, w9, w8, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c9a08: csel w8, w9, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 9)) : ARC_W_R(c, 8)));
  /* c9a0c: stp w8, w10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 10));
  }
  /* c9a10: ldr w8, [x19, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 19) + INT64_C(8))));
  /* c9a14: ldur w9, [x20, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 20) + INT64_C(-4))));
  /* c9a18: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* c9a1c: csel w10, w8, w9, hi */
  ARC_W_W(c, 10, (ARC_COND(c, 8) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c9a20: csel w8, w8, w9, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* c9a24: stur w10, [x20, #-4] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(-4)), ARC_W_R(c, 10));
  /* c9a28: ldr w10, [x19, #4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 19) + INT64_C(4))));
  /* c9a2c: cmp w10, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 8));
  /* c9a30: csel w9, w10, w8, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c9a34: csel w8, w10, w8, lo */
  ARC_W_W(c, 8, (ARC_COND(c, 3) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 8)));
  /* c9a38: str w9, [x19, #8] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(8)), ARC_W_R(c, 9));
L_c9a3c:;
  /* c9a3c: str w8, [x19, #4] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(4)), ARC_W_R(c, 8));
L_c9a40:;
  /* c9a40: add sp, sp, #0x1f0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(496)));
  /* c9a44: ldp x20, x19, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* c9a48: ldp x22, x21, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* c9a4c: ldp x24, x23, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* c9a50: ldp x26, x25, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* c9a54: ldp x28, x27, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* c9a58: ldp x29, x30, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* c9a5c: ldp d9, d8, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_du_w(c, 9, arc_ld64(_pa));
    arc_du_w(c, 8, arc_ld64((_pa + 8)));
  }
  /* c9a60: ldp d11, d10, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_du_w(c, 11, arc_ld64(_pa));
    arc_du_w(c, 10, arc_ld64((_pa + 8)));
  }
  /* c9a64: ldp d13, d12, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_du_w(c, 13, arc_ld64(_pa));
    arc_du_w(c, 12, arc_ld64((_pa + 8)));
  }
  /* c9a68: ldp d15, d14, [sp], #0xa0 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(160);
    arc_du_w(c, 15, arc_ld64(_pa));
    arc_du_w(c, 14, arc_ld64((_pa + 8)));
  }
  /* c9a6c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* c9a70: ret  */
  return;
L_c9a74:;
  /* c9a74: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c9a78: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* c9a7c: ldr w10, [sp, #0xac] */
  ARC_W_W(c, 10, arc_ld32(((c)->sp + INT64_C(172))));
  /* c9a80: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* c9a84: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* c9a88: tbz w10, #0, #0xc9cc4 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_c9cc4;
  /* c9a8c: tbnz w8, #0, #0xc9a40 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_c9a40;
  /* c9a90: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* c9a94: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* c9a98: b #0xc9ab4 */
  goto L_c9ab4;
L_c9a9c:;
  /* c9a9c: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c9aa0:;
  /* c9aa0: str w11, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 11));
L_c9aa4:;
  /* c9aa4: add x9, x10, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(4)));
  /* c9aa8: add x8, x8, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(4)));
  /* c9aac: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c9ab0: b.eq #0xc9a40 */
  if (ARC_COND(c, 0)) goto L_c9a40;
L_c9ab4:;
  /* c9ab4: ldp w12, w11, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    ARC_W_W(c, 12, arc_ld32(_pa));
    ARC_W_W(c, 11, arc_ld32(_pa + 4));
  }
  /* c9ab8: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c9abc: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c9ac0: b.hs #0xc9aa4 */
  if (ARC_COND(c, 2)) goto L_c9aa4;
  /* c9ac4: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_c9ac8:;
  /* c9ac8: subs x9, x13, #4 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(4)));
  /* c9acc: str w12, [x19, x13] */
  arc_st32((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_W_R(c, 12));
  /* c9ad0: b.eq #0xc9a9c */
  if (ARC_COND(c, 0)) goto L_c9a9c;
  /* c9ad4: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* c9ad8: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* c9adc: ldur w12, [x12, #-8] */
  ARC_W_W(c, 12, arc_ld32((ARC_X_R(c, 12) + INT64_C(-8))));
  /* c9ae0: cmp w11, w12 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 12));
  /* c9ae4: b.lo #0xc9ac8 */
  if (ARC_COND(c, 3)) goto L_c9ac8;
  /* c9ae8: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* c9aec: b #0xc9aa0 */
  goto L_c9aa0;
L_c9af0:;
  /* c9af0: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* c9af4: b.eq #0xc9a40 */
  if (ARC_COND(c, 0)) goto L_c9a40;
  /* c9af8: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c9afc: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* c9b00: b #0xc9b14 */
  goto L_c9b14;
L_c9b04:;
  /* c9b04: str w13, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 13));
L_c9b08:;
  /* c9b08: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* c9b0c: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c9b10: b.le #0xc9be4 */
  if (ARC_COND(c, 13)) goto L_c9be4;
L_c9b14:;
  /* c9b14: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* c9b18: b.lo #0xc9b08 */
  if (ARC_COND(c, 3)) goto L_c9b08;
  /* c9b1c: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* c9b20: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* c9b24: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* c9b28: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c9b2c: add x11, x19, x12, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 12)) << 2)));
  /* c9b30: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* c9b34: b.ge #0xc9b58 */
  if (ARC_COND(c, 10)) goto L_c9b58;
  /* c9b38: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c9b3c: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
  /* c9b40: ldr w16, [x14, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(4));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(4));
    ARC_W_W(c, 16, arc_ld32(_a));
  }
  /* c9b44: cmp w15, w16 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 16));
  /* c9b48: csel w15, w15, w16, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 16)));
  /* c9b4c: csel x11, x14, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* c9b50: csel x12, x13, x12, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* c9b54: b #0xc9b5c */
  goto L_c9b5c;
L_c9b58:;
  /* c9b58: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
L_c9b5c:;
  /* c9b5c: add x14, x19, x10, lsl #2 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* c9b60: ldr w13, [x14] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 14)));
  /* c9b64: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c9b68: b.hs #0xc9b94 */
  if (ARC_COND(c, 2)) goto L_c9b94;
  /* c9b6c: b #0xc9b08 */
  goto L_c9b08;
L_c9b70:;
  /* c9b70: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* c9b74: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
  /* c9b78: ldr w0, [x17, #4]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(4));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(4));
    ARC_W_W(c, 0, arc_ld32(_a));
  }
  /* c9b7c: cmp w15, w0 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 0));
  /* c9b80: csel w15, w15, w0, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 0)));
  /* c9b84: csel x11, x17, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* c9b88: csel x12, x12, x16, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* c9b8c: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c9b90: b.lo #0xc9b04 */
  if (ARC_COND(c, 3)) goto L_c9b04;
L_c9b94:;
  /* c9b94: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* c9b98: str w15, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 15));
  /* c9b9c: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* c9ba0: b.lt #0xc9b04 */
  if (ARC_COND(c, 11)) goto L_c9b04;
  /* c9ba4: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* c9ba8: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* c9bac: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* c9bb0: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* c9bb4: add x11, x19, x16, lsl #2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 16)) << 2)));
  /* c9bb8: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* c9bbc: b.lt #0xc9b70 */
  if (ARC_COND(c, 11)) goto L_c9b70;
  /* c9bc0: ldr w15, [x11] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 11)));
  /* c9bc4: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* c9bc8: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c9bcc: b.hs #0xc9b94 */
  if (ARC_COND(c, 2)) goto L_c9b94;
  /* c9bd0: b #0xc9b04 */
  goto L_c9b04;
L_c9bd4:;
  /* c9bd4: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
L_c9bd8:;
  /* c9bd8: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* c9bdc: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* c9be0: b.le #0xc9a40 */
  if (ARC_COND(c, 13)) goto L_c9a40;
L_c9be4:;
  /* c9be4: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* c9be8: ldr w10, [x19] */
  ARC_W_W(c, 10, arc_ld32(ARC_X_R(c, 19)));
  /* c9bec: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* c9bf0: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* c9bf4: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* c9bf8: b #0xc9c24 */
  goto L_c9c24;
L_c9bfc:;
  /* c9bfc: ldr w13, [x16, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 16) + INT64_C(8));
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(8));
    ARC_W_W(c, 13, arc_ld32(_a));
  }
  /* c9c00: ldur w15, [x16, #-4] */
  ARC_W_W(c, 15, arc_ld32((ARC_X_R(c, 16) + INT64_C(-4))));
  /* c9c04: cmp w15, w13 */
  (void)arc_sub32(c, ARC_W_R(c, 15), ARC_W_R(c, 13));
  /* c9c08: csel w15, w15, w13, hi */
  ARC_W_W(c, 15, (ARC_COND(c, 8) ? (ARC_W_R(c, 15)) : ARC_W_R(c, 13)));
  /* c9c0c: csel x9, x16, x9, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 9)));
  /* c9c10: csel x13, x17, x14, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 14)));
L_c9c14:;
  /* c9c14: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* c9c18: str w15, [x12] */
  arc_st32(ARC_X_R(c, 12), ARC_W_R(c, 15));
  /* c9c1c: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* c9c20: b.gt #0xc9c50 */
  if (ARC_COND(c, 12)) goto L_c9c50;
L_c9c24:;
  /* c9c24: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* c9c28: add x16, x12, x13, lsl #2 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 13)) << 2)));
  /* c9c2c: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* c9c30: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* c9c34: add x17, x9, #2 */
  ARC_X_W(c, 17, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* c9c38: add x9, x16, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + UINT64_C(4)));
  /* c9c3c: cmp x17, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 8));
  /* c9c40: b.lt #0xc9bfc */
  if (ARC_COND(c, 11)) goto L_c9bfc;
  /* c9c44: ldr w15, [x9] */
  ARC_W_W(c, 15, arc_ld32(ARC_X_R(c, 9)));
  /* c9c48: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* c9c4c: b #0xc9c14 */
  goto L_c9c14;
L_c9c50:;
  /* c9c50: sub x20, x20, #4 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(4)));
  /* c9c54: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c9c58: b.eq #0xc9bd4 */
  if (ARC_COND(c, 0)) goto L_c9bd4;
  /* c9c5c: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* c9c60: ldr w12, [x20] */
  ARC_W_W(c, 12, arc_ld32(ARC_X_R(c, 20)));
  /* c9c64: add x11, x11, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(4)));
  /* c9c68: asr x11, x11, #2 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(2)) & 63))));
  /* c9c6c: str w12, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 12));
  /* c9c70: str w10, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 10));
  /* c9c74: subs x11, x11, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2)));
  /* c9c78: b.lt #0xc9bd8 */
  if (ARC_COND(c, 11)) goto L_c9bd8;
  /* c9c7c: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* c9c80: ldr w11, [x9] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 9)));
  /* c9c84: add x12, x19, x10, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* c9c88: ldr w13, [x12] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 12)));
  /* c9c8c: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c9c90: b.hs #0xc9bd8 */
  if (ARC_COND(c, 2)) goto L_c9bd8;
L_c9c94:;
  /* c9c94: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* c9c98: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* c9c9c: str w13, [x14] */
  arc_st32(ARC_X_R(c, 14), ARC_W_R(c, 13));
  /* c9ca0: cbz x10, #0xc9cbc */
  if ((ARC_X_R(c, 10)) == 0) goto L_c9cbc;
  /* c9ca4: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* c9ca8: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* c9cac: add x12, x19, x10, lsl #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* c9cb0: ldr w13, [x12] */
  ARC_W_W(c, 13, arc_ld32(ARC_X_R(c, 12)));
  /* c9cb4: cmp w13, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 13), ARC_W_R(c, 11));
  /* c9cb8: b.lo #0xc9c94 */
  if (ARC_COND(c, 3)) goto L_c9c94;
L_c9cbc:;
  /* c9cbc: str w11, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* c9cc0: b #0xc9bd8 */
  goto L_c9bd8;
L_c9cc4:;
  /* c9cc4: tbz w8, #0, #0xc9cd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_c9cd8;
  /* c9cc8: b #0xc9a40 */
  goto L_c9a40;
L_c9ccc:;
  /* c9ccc: add x9, x19, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* c9cd0: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* c9cd4: b.eq #0xc9a40 */
  if (ARC_COND(c, 0)) goto L_c9a40;
L_c9cd8:;
  /* c9cd8: ldp w10, w8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_W_W(c, 10, arc_ld32(_pa));
    ARC_W_W(c, 8, arc_ld32(_pa + 4));
  }
  /* c9cdc: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* c9ce0: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c9ce4: b.hs #0xc9ccc */
  if (ARC_COND(c, 2)) goto L_c9ccc;
  /* c9ce8: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_c9cec:;
  /* c9cec: str w10, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 10));
  /* c9cf0: ldur w10, [x9, #-8] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 9) + INT64_C(-8))));
  /* c9cf4: sub x9, x9, #4 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(4)));
  /* c9cf8: cmp w8, w10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 10));
  /* c9cfc: b.lo #0xc9cec */
  if (ARC_COND(c, 3)) goto L_c9cec;
  /* c9d00: str w8, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 8));
  /* c9d04: b #0xc9ccc */
  goto L_c9ccc;
}

void fn1_d736c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809452));
  /* d736c: bti c */
  /* bti: no architectural effect here */
  /* d7370: ret  */
  return;
}

void fn1_db344(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038825796));
  /* db344: bti c */
  /* bti: no architectural effect here */
  /* db348: ret  */
  return;
}

void fn1_dc45c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038830172));
  /* dc45c: bti c */
  /* bti: no architectural effect here */
  /* dc460: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* dc464: ldr x8, [x8, #0xa38] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2616))));
  /* dc468: ldr w9, [x8] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 8)));
  /* dc46c: add w9, w9, #1 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* dc470: str w9, [x8] */
  arc_st32(ARC_X_R(c, 8), ARC_W_R(c, 9));
  /* dc474: ret  */
  return;
}

void fn1_e1834(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038851636));
  /* e1834: bti c */
  /* bti: no architectural effect here */
  /* e1838: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* e183c: b.eq #0xe1860 */
  if (ARC_COND(c, 0)) goto L_e1860;
  /* e1840: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e1844: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* e1848: tbnz w9, #0, #0xe1864 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e1864;
  /* e184c: tbnz w8, #0, #0xe187c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_e187c;
  /* e1850: ldr x8, [x1, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 1) + INT64_C(16))));
  /* e1854: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* e1858: str x8, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), ARC_X_R(c, 8));
  /* e185c: str q0, [x0] */
  arc_st64(ARC_X_R(c, 0), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 0) + 8, (c)->q[0].u64[1]);
L_e1860:;
  /* e1860: ret  */
  return;
L_e1864:;
  /* e1864: ldp x10, x9, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* e1868: lsr x11, x8, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* e186c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e1870: csinc x1, x9, x1, ne */
  ARC_X_W(c, 1, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 1)) + 1)));
  /* e1874: csel x2, x11, x10, eq */
  ARC_X_W(c, 2, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 10)));
  /* e1878: b #0xe1938 */
  fn1_e1938(c); return;
L_e187c:;
  /* e187c: ldp x2, x8, [x1, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e1880: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* e1884: b #0xe1888 */
  fn1_e1888(c); return;
}

void fn1_e42b8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038862520));
  /* e42b8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e42bc: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e42c0: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e42c4: nop  */
  /* nop: no architectural effect here */
  /* e42c8: adr x0, #0x51baa */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(334762)));
  /* e42cc: bl #0xd7d6c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(934608));
  fn1_d7d6c(c);
}

void fn1_e89c0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038880704));
  /* e89c0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e89c4: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e89c8: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e89cc: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e89d0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e89d4: ldp x0, x8, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* e89d8: subs x1, x8, x0 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 0)));
  /* e89dc: cbz x0, #0xe8a04 */
  if ((ARC_X_R(c, 0)) == 0) goto L_e8a04;
  /* e89e0: b.eq #0xe89f8 */
  if (ARC_COND(c, 0)) goto L_e89f8;
  /* e89e4: sub x9, x0, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) - ARC_X_R(c, 8)));
  /* e89e8: add x9, x9, #7 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(7)));
  /* e89ec: and x9, x9, #0xfffffffffffffff8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) & UINT64_C(18446744073709551608)));
  /* e89f0: add x8, x8, x9 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 9)));
  /* e89f4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_e89f8:;
  /* e89f8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(952828));
  fn1_142608(c);
  /* e89fc: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* e8a00: b #0xe8a04 */
  goto L_e8a04;
L_e8a04:;
  /* e8a04: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e8a08: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8a0c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8a10: ret  */
  return;
}

void fn1_ead94(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038889876));
  /* ead94: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ead98: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ead9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eada0: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961956));
  fn1_142518(c);
  /* eada4: cbnz w0, #0xeadb4 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eadb4;
  /* eada8: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eadac: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eadb0: ret  */
  return;
L_eadb4:;
  /* eadb4: adrp x1, #0x50000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(327680)));
  /* eadb8: add x1, x1, #0x1f4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(500)));
  /* eadbc: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(961984));
  fn1_142a40(c);
}

void fn1_ec840(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038896704));
  /* ec840: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ec844: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ec848: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ec84c: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ec850: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ec854: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* ec858: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* ec85c: str x1, [x0, #0x28] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(40)), ARC_X_R(c, 1));
  /* ec860: ldr q0, [x8, #0xcd0] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 8) + INT64_C(3280))), arc_ld64((ARC_X_R(c, 8) + INT64_C(3280)) + 8));
  /* ec864: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* ec868: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec86c: stp w8, wzr, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    arc_st32(_pa, ARC_W_R(c, 8));
    arc_st32(_pa + 4, ARC_W_R(c, 31));
  }
  /* ec870: mov w8, #0x1002 */
  ARC_W_W(c, 8, UINT64_C(4098));
  /* ec874: adrp x21, #0x15d000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1429504)));
  /* ec878: str q0, [x0, #0x10] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* ec87c: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* ec880: nop  */
  /* nop: no architectural effect here */
  /* ec884: adr x20, #0x15dc40 */
  ARC_X_W(c, 20, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ec888: str w8, [x0, #8] */
  arc_st32((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 8));
  /* ec88c: nop  */
  /* nop: no architectural effect here */
  /* ec890: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* ec894: stur q0, [x0, #0x38] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(56)) + 8, (c)->q[0].u64[1]);
  /* ec898: stur q0, [x0, #0x48] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(72)) + 8, (c)->q[0].u64[1]);
  /* ec89c: stur q0, [x0, #0x58] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(88)) + 8, (c)->q[0].u64[1]);
  /* ec8a0: stur q0, [x0, #0x68] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(104)) + 8, (c)->q[0].u64[1]);
  /* ec8a4: stur q0, [x0, #0x78] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 0) + INT64_C(120)) + 8, (c)->q[0].u64[1]);
  /* ec8a8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* ec8ac: tbz w8, #0, #0xec8e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_ec8e0;
L_ec8b0:;
  /* ec8b0: ldr x8, [x21, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(3464))));
  /* ec8b4: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* ec8b8: str x8, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 8));
  /* ec8bc: b.eq #0xec8cc */
  if (ARC_COND(c, 0)) goto L_ec8cc;
  /* ec8c0: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ec8c4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ec8c8: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968908));
  fn1_db2e0(c);
L_ec8cc:;
  /* ec8cc: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ec8d0: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ec8d4: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ec8d8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ec8dc: ret  */
  return;
L_ec8e0:;
  /* ec8e0: nop  */
  /* nop: no architectural effect here */
  /* ec8e4: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* ec8e8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968940));
  fn1_1424b8(c);
  /* ec8ec: cbz w0, #0xec8b0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_ec8b0;
  /* ec8f0: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968948));
  fn1_143ac0(c);
  /* ec8f4: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* ec8f8: cmp x8, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20));
  /* ec8fc: str x8, [x21, #0xd88] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(3464)), ARC_X_R(c, 8));
  /* ec900: b.eq #0xec910 */
  if (ARC_COND(c, 0)) goto L_ec910;
  /* ec904: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ec908: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ec90c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968976));
  fn1_db2e0(c);
L_ec910:;
  /* ec910: nop  */
  /* nop: no architectural effect here */
  /* ec914: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* ec918: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(968988));
  fn1_1424d0(c);
  /* ec91c: b #0xec8b0 */
  goto L_ec8b0;
  /* ec920: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ec924: nop  */
  /* nop: no architectural effect here */
  /* ec928: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* ec92c: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969008));
  fn1_1424e8(c);
  /* ec930: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ec934: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(969016));
  fn1_a1454(c);
}

void fn1_ee514(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038904084));
  /* ee514: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ee518: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ee51c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ee520: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ee524: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ee528: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ee52c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee530: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ee534: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ee538: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ee53c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ee540: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ee544: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976200));
  fn1_1435f8(c);
  /* ee548: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* ee54c: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ee550: b.ne #0xee618 */
  if (ARC_COND(c, 1)) goto L_ee618;
  /* ee554: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee558: nop  */
  /* nop: no architectural effect here */
  /* ee55c: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ee560: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee564: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee568: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ee56c: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ee570: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* ee574: b.eq #0xee584 */
  if (ARC_COND(c, 0)) goto L_ee584;
  /* ee578: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ee57c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ee580: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976260));
  fn1_db2e0(c);
L_ee584:;
  /* ee584: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ee588: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ee58c: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ee590: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976276));
  fn1_143748(c);
  /* ee594: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee598: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ee59c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee5a0: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee5a4: ldr x8, [x9, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(48))));
  /* ee5a8: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ee5ac: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ee5b0: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ee5b4: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* ee5b8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976316));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ee5bc: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ee5c0: b.eq #0xee5e4 */
  if (ARC_COND(c, 0)) goto L_ee5e4;
  /* ee5c4: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ee5c8: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ee5cc: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976336));
  fn1_bd950(c);
  /* ee5d0: cbnz x0, #0xee5e4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ee5e4;
  /* ee5d4: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ee5d8: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ee5dc: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ee5e0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976356));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ee5e4:;
  /* ee5e4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee5e8: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee5ec: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee5f0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee5f4: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ee5f8: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ee5fc: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ee600: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ee604: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ee608: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ee60c: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ee610: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ee614: b.ne #0xee634 */
  if (ARC_COND(c, 1)) goto L_ee634;
L_ee618:;
  /* ee618: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee61c: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ee620: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ee624: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ee628: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ee62c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ee630: ret  */
  return;
L_ee634:;
  /* ee634: nop  */
  /* nop: no architectural effect here */
  /* ee638: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ee63c: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976448));
  fn1_ec720(c);
  /* ee640: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ee644: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ee648: b.eq #0xee66c */
  if (ARC_COND(c, 0)) goto L_ee66c;
  /* ee64c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ee650: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ee654: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976472));
  fn1_bd950(c);
  /* ee658: cbnz x0, #0xee66c */
  if ((ARC_X_R(c, 0)) != 0) goto L_ee66c;
  /* ee65c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ee660: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ee664: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ee668: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976492));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ee66c:;
  /* ee66c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ee670: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976500));
  fn1_142548(c);
  /* ee674: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ee678: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ee67c: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee680: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ee684: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* ee688: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ee68c: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ee690: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ee694: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ee698: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ee69c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ee6a0: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ee6a4: tbnz w8, #0, #0xee6b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ee6b0;
  /* ee6a8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976556));
  fn1_142980(c);
  /* ee6ac: b #0xee5e4 */
  goto L_ee5e4;
L_ee6b0:;
  /* ee6b0: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976564));
  fn1_1429b0(c);
  /* ee6b4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ee6b8: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976572));
  fn1_142980(c);
  /* ee6bc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ee6c0: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976580));
  fn1_9cc20(c);
  /* ee6c4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(976584));
  fn1_a1454(c);
}

void fn1_f3820(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925344));
  /* f3820: bti c */
  /* bti: no architectural effect here */
  /* f3824: ret  */
  return;
}

void fn1_f4f48(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038931272));
  /* f4f48: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f4f4c: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f4f50: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f4f54: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f4f58: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f4f5c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f4f60: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f4f64: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f4f68: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f4f6c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f4f70: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f4f74: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f4f78: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003388));
  fn1_143670(c);
  /* f4f7c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f4f80: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f4f84: b.ne #0xf504c */
  if (ARC_COND(c, 1)) goto L_f504c;
  /* f4f88: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4f8c: nop  */
  /* nop: no architectural effect here */
  /* f4f90: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f4f94: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4f98: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4f9c: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f4fa0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f4fa4: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f4fa8: b.eq #0xf4fb8 */
  if (ARC_COND(c, 0)) goto L_f4fb8;
  /* f4fac: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f4fb0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f4fb4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003448));
  fn1_db2e0(c);
L_f4fb8:;
  /* f4fb8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f4fbc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f4fc0: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f4fc4: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003464));
  fn1_143748(c);
  /* f4fc8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f4fcc: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f4fd0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f4fd4: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f4fd8: ldr x8, [x9, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(48))));
  /* f4fdc: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f4fe0: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f4fe4: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f4fe8: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f4fec: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003504));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f4ff0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f4ff4: b.eq #0xf5018 */
  if (ARC_COND(c, 0)) goto L_f5018;
  /* f4ff8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f4ffc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5000: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003524));
  fn1_bd950(c);
  /* f5004: cbnz x0, #0xf5018 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5018;
  /* f5008: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f500c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5010: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5014: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003544));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5018:;
  /* f5018: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f501c: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5020: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5024: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5028: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f502c: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f5030: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f5034: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5038: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f503c: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f5040: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f5044: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f5048: b.ne #0xf5068 */
  if (ARC_COND(c, 1)) goto L_f5068;
L_f504c:;
  /* f504c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5050: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f5054: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f5058: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f505c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f5060: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f5064: ret  */
  return;
L_f5068:;
  /* f5068: nop  */
  /* nop: no architectural effect here */
  /* f506c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f5070: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003636));
  fn1_ec720(c);
  /* f5074: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5078: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f507c: b.eq #0xf50a0 */
  if (ARC_COND(c, 0)) goto L_f50a0;
  /* f5080: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5084: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5088: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003660));
  fn1_bd950(c);
  /* f508c: cbnz x0, #0xf50a0 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f50a0;
  /* f5090: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5094: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5098: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f509c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003680));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f50a0:;
  /* f50a0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f50a4: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003688));
  fn1_142548(c);
  /* f50a8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f50ac: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f50b0: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f50b4: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f50b8: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f50bc: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f50c0: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f50c4: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f50c8: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f50cc: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f50d0: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f50d4: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f50d8: tbnz w8, #0, #0xf50e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f50e4;
  /* f50dc: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003744));
  fn1_142980(c);
  /* f50e0: b #0xf5018 */
  goto L_f5018;
L_f50e4:;
  /* f50e4: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003752));
  fn1_1429b0(c);
  /* f50e8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f50ec: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003760));
  fn1_142980(c);
  /* f50f0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f50f4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003768));
  fn1_9cc20(c);
  /* f50f8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1003772));
  fn1_a1454(c);
}

void fn1_fa7cc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038953932));
  /* fa7cc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fa7d0: sub sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(112)));
  /* fa7d4: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fa7d8: str x23, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), ARC_X_R(c, 23));
  /* fa7dc: stp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fa7e0: stp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fa7e4: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* fa7e8: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* fa7ec: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* fa7f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fa7f4: ldrb w10, [x8, #0x40]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(64));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(64));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* fa7f8: ldr x11, [x8, #0x10] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa7fc: ldur x9, [x8, #-0x30] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-48))));
  /* fa800: tst w10, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & UINT64_C(1)));
  /* fa804: csinc x15, x11, x8, ne */
  ARC_X_W(c, 15, (ARC_COND(c, 1) ? (ARC_X_R(c, 11)) : ((ARC_X_R(c, 8)) + 1)));
  /* fa808: cbz x9, #0xfa838 */
  if ((ARC_X_R(c, 9)) == 0) goto L_fa838;
  /* fa80c: ldp x10, x12, [x20, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(24));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 12, arc_ld64(_pa + 8));
  }
  /* fa810: sub x11, x9, x15 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 15)));
  /* fa814: sub x9, x10, x15 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) - ARC_X_R(c, 15)));
  /* fa818: sub x10, x12, x15 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 15)));
  /* fa81c: ldr x12, [x20, #0x28] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* fa820: cbz x12, #0xfa84c */
  if ((ARC_X_R(c, 12)) == 0) goto L_fa84c;
L_fa824:;
  /* fa824: ldp x13, x14, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    ARC_X_W(c, 13, arc_ld64(_pa));
    ARC_X_W(c, 14, arc_ld64(_pa + 8));
  }
  /* fa828: sub x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ARC_X_R(c, 15)));
  /* fa82c: sub x13, x13, x15 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - ARC_X_R(c, 15)));
  /* fa830: sub x14, x14, x15 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
  /* fa834: b #0xfa858 */
  goto L_fa858;
L_fa838:;
  /* fa838: mov x9, #-1 */
  ARC_X_W(c, 9, UINT64_C(18446744073709551615));
  /* fa83c: mov x10, #-1 */
  ARC_X_W(c, 10, UINT64_C(18446744073709551615));
  /* fa840: mov x11, #-1 */
  ARC_X_W(c, 11, UINT64_C(18446744073709551615));
  /* fa844: ldr x12, [x20, #0x28] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* fa848: cbnz x12, #0xfa824 */
  if ((ARC_X_R(c, 12)) != 0) goto L_fa824;
L_fa84c:;
  /* fa84c: mov x12, #-1 */
  ARC_X_W(c, 12, UINT64_C(18446744073709551615));
  /* fa850: mov x13, #-1 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551615));
  /* fa854: mov x14, #-1 */
  ARC_X_W(c, 14, UINT64_C(18446744073709551615));
L_fa858:;
  /* fa858: ldr x16, [x20, #0x58] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* fa85c: mov x5, x19 */
  ARC_X_W(c, 5, ARC_X_R(c, 19));
  /* fa860: ldrb w17, [x5, #0x40]! */
  { const uint64_t _a = (ARC_X_R(c, 5) + INT64_C(64));
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(64));
    ARC_W_W(c, 17, arc_ld8(_a));
  }
  /* fa864: ldr x1, [x5, #0x10] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 5) + INT64_C(16))));
  /* fa868: sub x0, x16, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 16) - ARC_X_R(c, 15)));
  /* fa86c: cmp x16, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 16), UINT64_C(0));
  /* fa870: ldur x15, [x5, #-0x30] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 5) + INT64_C(-48))));
  /* fa874: csinv x16, x0, xzr, ne */
  ARC_X_W(c, 16, (ARC_COND(c, 1) ? (ARC_X_R(c, 0)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* fa878: tst w17, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 17) & UINT64_C(1)));
  /* fa87c: csinc x6, x1, x5, ne */
  ARC_X_W(c, 6, (ARC_COND(c, 1) ? (ARC_X_R(c, 1)) : ((ARC_X_R(c, 5)) + 1)));
  /* fa880: cbz x15, #0xfa898 */
  if ((ARC_X_R(c, 15)) == 0) goto L_fa898;
  /* fa884: ldp x17, x0, [x19, #0x18] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(24));
    ARC_X_W(c, 17, arc_ld64(_pa));
    ARC_X_W(c, 0, arc_ld64(_pa + 8));
  }
  /* fa888: sub x15, x15, x6 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - ARC_X_R(c, 6)));
  /* fa88c: sub x17, x17, x6 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) - ARC_X_R(c, 6)));
  /* fa890: sub x0, x0, x6 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) - ARC_X_R(c, 6)));
  /* fa894: b #0xfa8a4 */
  goto L_fa8a4;
L_fa898:;
  /* fa898: mov x15, #-1 */
  ARC_X_W(c, 15, UINT64_C(18446744073709551615));
  /* fa89c: mov x17, #-1 */
  ARC_X_W(c, 17, UINT64_C(18446744073709551615));
  /* fa8a0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
L_fa8a4:;
  /* fa8a4: ldr x1, [x19, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* fa8a8: add x3, x8, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* fa8ac: add x7, x5, #1 */
  ARC_X_W(c, 7, (ARC_X_R(c, 5) + UINT64_C(1)));
  /* fa8b0: cbz x1, #0xfa8c8 */
  if ((ARC_X_R(c, 1)) == 0) goto L_fa8c8;
  /* fa8b4: ldp x2, x4, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 4, arc_ld64(_pa + 8));
  }
  /* fa8b8: sub x1, x1, x6 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - ARC_X_R(c, 6)));
  /* fa8bc: sub x2, x2, x6 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) - ARC_X_R(c, 6)));
  /* fa8c0: sub x4, x4, x6 */
  ARC_X_W(c, 4, (ARC_X_R(c, 4) - ARC_X_R(c, 6)));
  /* fa8c4: b #0xfa8d4 */
  goto L_fa8d4;
L_fa8c8:;
  /* fa8c8: mov x1, #-1 */
  ARC_X_W(c, 1, UINT64_C(18446744073709551615));
  /* fa8cc: mov x2, #-1 */
  ARC_X_W(c, 2, UINT64_C(18446744073709551615));
  /* fa8d0: mov x4, #-1 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551615));
L_fa8d4:;
  /* fa8d4: ldr w21, [x20, #0x60] */
  ARC_W_W(c, 21, arc_ld32((ARC_X_R(c, 20) + INT64_C(96))));
  /* fa8d8: ldr w22, [x19, #0x60] */
  ARC_W_W(c, 22, arc_ld32((ARC_X_R(c, 19) + INT64_C(96))));
  /* fa8dc: nop  */
  /* nop: no architectural effect here */
  /* fa8e0: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* fa8e4: str w21, [x19, #0x60] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(96)), ARC_W_R(c, 21));
  /* fa8e8: str w22, [x20, #0x60] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(96)), ARC_W_R(c, 22));
  /* fa8ec: ldr q0, [x8] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 8)), arc_ld64(ARC_X_R(c, 8) + 8));
  /* fa8f0: ldr x21, [x8, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fa8f4: ldr q1, [x5] */
  arc_q_w(c, 1, arc_ld64(ARC_X_R(c, 5)), arc_ld64(ARC_X_R(c, 5) + 8));
  /* fa8f8: ldr x22, [x5, #0x10] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 5) + INT64_C(16))));
  /* fa8fc: str q0, [x5] */
  arc_st64(ARC_X_R(c, 5), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 5) + 8, (c)->q[0].u64[1]);
  /* fa900: str x21, [x5, #0x10] */
  arc_st64((ARC_X_R(c, 5) + INT64_C(16)), ARC_X_R(c, 21));
  /* fa904: ldr x5, [x19, #0x58] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 19) + INT64_C(88))));
  /* fa908: str q1, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[1].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[1].u64[1]);
  /* fa90c: str x22, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 22));
  /* fa910: sub x8, x5, x6 */
  ARC_X_W(c, 8, (ARC_X_R(c, 5) - ARC_X_R(c, 6)));
  /* fa914: cmp x5, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 5), UINT64_C(0));
  /* fa918: ldrb w21, [x19, #0x40] */
  ARC_W_W(c, 21, arc_ld8((ARC_X_R(c, 19) + INT64_C(64))));
  /* fa91c: ldr x5, [x19, #0x50] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 19) + INT64_C(80))));
  /* fa920: csinv x8, x8, xzr, ne */
  ARC_X_W(c, 8, (ARC_COND(c, 1) ? (ARC_X_R(c, 8)) : (~(uint64_t)(ARC_X_R(c, 31)))));
  /* fa924: tst w21, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 21) & UINT64_C(1)));
  /* fa928: csel x5, x7, x5, eq */
  ARC_X_W(c, 5, (ARC_COND(c, 0) ? (ARC_X_R(c, 7)) : ARC_X_R(c, 5)));
  /* fa92c: cmn x11, #1 */
  (void)arc_add64(c, ARC_X_R(c, 11), UINT64_C(1), 0);
  /* fa930: add x11, x5, x11 */
  ARC_X_W(c, 11, (ARC_X_R(c, 5) + ARC_X_R(c, 11)));
  /* fa934: add x9, x5, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 5) + ARC_X_R(c, 9)));
  /* fa938: add x10, x5, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 5) + ARC_X_R(c, 10)));
  /* fa93c: add x6, x5, x12 */
  ARC_X_W(c, 6, (ARC_X_R(c, 5) + ARC_X_R(c, 12)));
  /* fa940: csel x11, xzr, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 11)));
  /* fa944: csel x9, xzr, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* fa948: csel x10, xzr, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* fa94c: cmn x12, #1 */
  (void)arc_add64(c, ARC_X_R(c, 12), UINT64_C(1), 0);
  /* fa950: add x14, x5, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 5) + ARC_X_R(c, 14)));
  /* fa954: stp x11, x9, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 11));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* fa958: add x9, x6, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) + ARC_X_R(c, 13)));
  /* fa95c: csel x11, xzr, x6, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 6)));
  /* fa960: stp x10, x11, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* fa964: add x10, x5, x16 */
  ARC_X_W(c, 10, (ARC_X_R(c, 5) + ARC_X_R(c, 16)));
  /* fa968: csel x9, xzr, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* fa96c: csel x11, xzr, x14, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 14)));
  /* fa970: cmn x16, #1 */
  (void)arc_add64(c, ARC_X_R(c, 16), UINT64_C(1), 0);
  /* fa974: stp x9, x11, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* fa978: csel x9, xzr, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* fa97c: str x9, [x19, #0x58] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(88)), ARC_X_R(c, 9));
  /* fa980: ldrb w9, [x20, #0x40] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 20) + INT64_C(64))));
  /* fa984: ldr x10, [x20, #0x50] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(80))));
  /* fa988: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* fa98c: csel x9, x3, x10, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 3)) : ARC_X_R(c, 10)));
  /* fa990: cmn x15, #1 */
  (void)arc_add64(c, ARC_X_R(c, 15), UINT64_C(1), 0);
  /* fa994: add x10, x9, x15 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + ARC_X_R(c, 15)));
  /* fa998: add x11, x9, x17 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) + ARC_X_R(c, 17)));
  /* fa99c: add x12, x9, x0 */
  ARC_X_W(c, 12, (ARC_X_R(c, 9) + ARC_X_R(c, 0)));
  /* fa9a0: csel x10, xzr, x10, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 10)));
  /* fa9a4: csel x11, xzr, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 11)));
  /* fa9a8: add x13, x9, x1 */
  ARC_X_W(c, 13, (ARC_X_R(c, 9) + ARC_X_R(c, 1)));
  /* fa9ac: stp x10, x11, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* fa9b0: csel x10, xzr, x12, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 12)));
  /* fa9b4: cmn x1, #1 */
  (void)arc_add64(c, ARC_X_R(c, 1), UINT64_C(1), 0);
  /* fa9b8: add x14, x9, x4 */
  ARC_X_W(c, 14, (ARC_X_R(c, 9) + ARC_X_R(c, 4)));
  /* fa9bc: add x11, x13, x2 */
  ARC_X_W(c, 11, (ARC_X_R(c, 13) + ARC_X_R(c, 2)));
  /* fa9c0: csel x12, xzr, x13, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 13)));
  /* fa9c4: stp x10, x12, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* fa9c8: add x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 8)));
  /* fa9cc: csel x10, xzr, x11, eq */
  ARC_X_W(c, 10, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 11)));
  /* fa9d0: csel x11, xzr, x14, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 14)));
  /* fa9d4: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* fa9d8: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* fa9dc: csel x9, xzr, x9, eq */
  ARC_X_W(c, 9, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 9)));
  /* fa9e0: stp x10, x11, [x20, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 11));
  }
  /* fa9e4: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* fa9e8: str x9, [x20, #0x58] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(88)), ARC_X_R(c, 9));
  /* fa9ec: str x8, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 8));
  /* fa9f0: b.eq #0xfaa00 */
  if (ARC_COND(c, 0)) goto L_faa00;
  /* fa9f4: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fa9f8: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fa9fc: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026560));
  fn1_db2e0(c);
L_faa00:;
  /* faa00: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* faa04: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* faa08: str x8, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 8));
  /* faa0c: b.eq #0xfaa1c */
  if (ARC_COND(c, 0)) goto L_faa1c;
  /* faa10: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* faa14: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* faa18: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026588));
  fn1_db2e0(c);
L_faa1c:;
  /* faa1c: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* faa20: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* faa24: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* faa28: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* faa2c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026608));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* faa30: ldr x21, [x20, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* faa34: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* faa38: b.eq #0xfaa48 */
  if (ARC_COND(c, 0)) goto L_faa48;
  /* faa3c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* faa40: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* faa44: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026632));
  fn1_db2e0(c);
L_faa48:;
  /* faa48: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* faa4c: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* faa50: b.eq #0xfaa60 */
  if (ARC_COND(c, 0)) goto L_faa60;
  /* faa54: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* faa58: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* faa5c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026656));
  fn1_db2e0(c);
L_faa60:;
  /* faa60: ldr x22, [x20, #8] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* faa64: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* faa68: b.eq #0xfaa8c */
  if (ARC_COND(c, 0)) goto L_faa8c;
  /* faa6c: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* faa70: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* faa74: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026680));
  fn1_bd950(c);
  /* faa78: cbnz x0, #0xfaa8c */
  if ((ARC_X_R(c, 0)) != 0) goto L_faa8c;
  /* faa7c: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* faa80: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* faa84: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* faa88: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026700));
  arc_dispatch(c, ARC_X_R(c, 8));
L_faa8c:;
  /* faa8c: ldr x22, [sp, #8] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(8))));
  /* faa90: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* faa94: str x22, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 22));
  /* faa98: b.eq #0xfaac0 */
  if (ARC_COND(c, 0)) goto L_faac0;
  /* faa9c: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* faaa0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* faaa4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026728));
  fn1_bd950(c);
  /* faaa8: cbnz x0, #0xfaabc */
  if ((ARC_X_R(c, 0)) != 0) goto L_faabc;
  /* faaac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* faab0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* faab4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* faab8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026748));
  arc_dispatch(c, ARC_X_R(c, 8));
L_faabc:;
  /* faabc: ldr x22, [sp, #8] */
  ARC_X_W(c, 22, arc_ld64(((c)->sp + INT64_C(8))));
L_faac0:;
  /* faac0: cmp x22, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 23));
  /* faac4: b.eq #0xfaae8 */
  if (ARC_COND(c, 0)) goto L_faae8;
  /* faac8: add x1, x22, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(8)));
  /* faacc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* faad0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026772));
  fn1_bd950(c);
  /* faad4: cbnz x0, #0xfaae8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_faae8;
  /* faad8: ldr x8, [x22] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 22)));
  /* faadc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* faae0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* faae4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026792));
  arc_dispatch(c, ARC_X_R(c, 8));
L_faae8:;
  /* faae8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* faaec: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* faaf0: add x1, x29, #0x18 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* faaf4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* faaf8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026812));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* faafc: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fab00: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* fab04: b.eq #0xfab14 */
  if (ARC_COND(c, 0)) goto L_fab14;
  /* fab08: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fab0c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fab10: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026836));
  fn1_db2e0(c);
L_fab14:;
  /* fab14: ldr x8, [x29, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* fab18: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* fab1c: b.eq #0xfab2c */
  if (ARC_COND(c, 0)) goto L_fab2c;
  /* fab20: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* fab24: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* fab28: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026860));
  fn1_db2e0(c);
L_fab2c:;
  /* fab2c: ldr x21, [x19, #8] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* fab30: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* fab34: b.eq #0xfab58 */
  if (ARC_COND(c, 0)) goto L_fab58;
  /* fab38: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fab3c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fab40: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026884));
  fn1_bd950(c);
  /* fab44: cbnz x0, #0xfab58 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fab58;
  /* fab48: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* fab4c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fab50: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fab54: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026904));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fab58:;
  /* fab58: ldr x21, [x29, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* fab5c: cmp x20, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 23));
  /* fab60: str x21, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 21));
  /* fab64: b.eq #0xfab8c */
  if (ARC_COND(c, 0)) goto L_fab8c;
  /* fab68: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* fab6c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fab70: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026932));
  fn1_bd950(c);
  /* fab74: cbnz x0, #0xfab88 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fab88;
  /* fab78: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* fab7c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fab80: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fab84: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026952));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fab88:;
  /* fab88: ldr x21, [x29, #0x18] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
L_fab8c:;
  /* fab8c: cmp x21, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 23));
  /* fab90: b.eq #0xfabb4 */
  if (ARC_COND(c, 0)) goto L_fabb4;
  /* fab94: add x1, x21, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 21) + UINT64_C(8)));
  /* fab98: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* fab9c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026976));
  fn1_bd950(c);
  /* faba0: cbnz x0, #0xfabb4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_fabb4;
  /* faba4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* faba8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fabac: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* fabb0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1026996));
  arc_dispatch(c, ARC_X_R(c, 8));
L_fabb4:;
  /* fabb4: ldp x20, x19, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fabb8: ldr x23, [sp, #0x40] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(64))));
  /* fabbc: ldp x22, x21, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fabc0: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fabc4: add sp, sp, #0x70 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(112)));
  /* fabc8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fabcc: ret  */
  return;
  /* fabd0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1027028));
  fn1_a1454(c);
}

void fn1_fe204(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038968836));
  /* fe204: bti c */
  /* bti: no architectural effect here */
  /* fe208: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fe20c: b #0xfe338 */
  fn1_fe338(c); return;
}

void fn1_109c60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039016544));
  /* 109c60: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 109c64: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 109c68: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 109c6c: str x25, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 25));
  /* 109c70: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 109c74: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 109c78: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 109c7c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 109c80: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 109c84: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 109c88: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 109c8c: add x1, x9, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) + UINT64_C(48)));
  /* 109c90: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 109c94: mov x19, x8 */
  ARC_X_W(c, 19, ARC_X_R(c, 8));
  /* 109c98: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088668));
  fn1_143460(c);
  /* 109c9c: adrp x25, #0x151000 */
  ARC_X_W(c, 25, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109ca0: ldr x25, [x25, #0xb58] */
  ARC_X_W(c, 25, arc_ld64((ARC_X_R(c, 25) + INT64_C(2904))));
  /* 109ca4: ldr x24, [x29, #0x18] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 109ca8: ldar x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 109cac: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 109cb0: b.eq #0x109d6c */
  if (ARC_COND(c, 0)) goto L_109d6c;
  /* 109cb4: nop  */
  /* nop: no architectural effect here */
  /* 109cb8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109cbc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088704));
  fn1_142518(c);
  /* 109cc0: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 109cc4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 109cc8: b.ne #0x109cf4 */
  if (ARC_COND(c, 1)) goto L_109cf4;
  /* 109ccc: nop  */
  /* nop: no architectural effect here */
  /* 109cd0: adr x22, #0x15791c */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109cd4: nop  */
  /* nop: no architectural effect here */
  /* 109cd8: adr x23, #0x1578f4 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407220)));
L_109cdc:;
  /* 109cdc: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 109ce0: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* 109ce4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088744));
  fn1_142530(c);
  /* 109ce8: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 109cec: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 109cf0: b.eq #0x109cdc */
  if (ARC_COND(c, 0)) goto L_109cdc;
L_109cf4:;
  /* 109cf4: ldr x8, [x25] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 25)));
  /* 109cf8: cbz x8, #0x109d0c */
  if ((ARC_X_R(c, 8)) == 0) goto L_109d0c;
  /* 109cfc: nop  */
  /* nop: no architectural effect here */
  /* 109d00: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109d04: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088776));
  fn1_142560(c);
  /* 109d08: b #0x109d6c */
  goto L_109d6c;
L_109d0c:;
  /* 109d0c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 109d10: str x25, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 25));
  /* 109d14: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 109d18: str x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 109d1c: nop  */
  /* nop: no architectural effect here */
  /* 109d20: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109d24: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088808));
  fn1_142560(c);
  /* 109d28: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109d2c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 109d30: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 109d34: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088824));
  fn1_a2030(c);
  /* 109d38: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 109d3c: str w8, [x25, #8] */
  arc_st32((ARC_X_R(c, 25) + INT64_C(8)), ARC_W_R(c, 8));
  /* 109d40: nop  */
  /* nop: no architectural effect here */
  /* 109d44: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109d48: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088844));
  fn1_142518(c);
  /* 109d4c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 109d50: stlr x8, [x25] */
  arc_st64(ARC_X_R(c, 25), ARC_X_R(c, 8));
  /* 109d54: nop  */
  /* nop: no architectural effect here */
  /* 109d58: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109d5c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088864));
  fn1_142560(c);
  /* 109d60: nop  */
  /* nop: no architectural effect here */
  /* 109d64: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109d68: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088876));
  fn1_142578(c);
L_109d6c:;
  /* 109d6c: ldp x8, x10, [x24, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 109d70: ldrsw x9, [x25, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 25) + INT64_C(8)))));
  /* 109d74: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 109d78: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 109d7c: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 109d80: b.hs #0x109ee8 */
  if (ARC_COND(c, 2)) goto L_109ee8;
  /* 109d84: ldr x0, [x8, x9, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 109d88: cbz x0, #0x109ee8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_109ee8;
  /* 109d8c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 109d90: ldr x8, [x8, #0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(96))));
  /* 109d94: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109d98: mov x3, x21 */
  ARC_X_W(c, 3, ARC_X_R(c, 21));
  /* 109d9c: ldr x1, [x1, #0xbe0] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3040))));
  /* 109da0: add x2, x1, #0x1a */
  ARC_X_W(c, 2, (ARC_X_R(c, 1) + UINT64_C(26)));
  /* 109da4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088936));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 109da8: adrp x24, #0x151000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109dac: ldr x24, [x24, #0xcb8] */
  ARC_X_W(c, 24, arc_ld64((ARC_X_R(c, 24) + INT64_C(3256))));
  /* 109db0: ldr x23, [x29, #0x18] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 109db4: ldar x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 109db8: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 109dbc: b.eq #0x109e78 */
  if (ARC_COND(c, 0)) goto L_109e78;
  /* 109dc0: nop  */
  /* nop: no architectural effect here */
  /* 109dc4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109dc8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1088972));
  fn1_142518(c);
  /* 109dcc: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 109dd0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 109dd4: b.ne #0x109e00 */
  if (ARC_COND(c, 1)) goto L_109e00;
  /* 109dd8: nop  */
  /* nop: no architectural effect here */
  /* 109ddc: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109de0: nop  */
  /* nop: no architectural effect here */
  /* 109de4: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_109de8:;
  /* 109de8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 109dec: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 109df0: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089012));
  fn1_142530(c);
  /* 109df4: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 109df8: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 109dfc: b.eq #0x109de8 */
  if (ARC_COND(c, 0)) goto L_109de8;
L_109e00:;
  /* 109e00: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 109e04: cbz x8, #0x109e18 */
  if ((ARC_X_R(c, 8)) == 0) goto L_109e18;
  /* 109e08: nop  */
  /* nop: no architectural effect here */
  /* 109e0c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109e10: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089044));
  fn1_142560(c);
  /* 109e14: b #0x109e78 */
  goto L_109e78;
L_109e18:;
  /* 109e18: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 109e1c: str x24, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 24));
  /* 109e20: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 109e24: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 109e28: nop  */
  /* nop: no architectural effect here */
  /* 109e2c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109e30: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089076));
  fn1_142560(c);
  /* 109e34: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 109e38: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 109e3c: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 109e40: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089092));
  fn1_a2030(c);
  /* 109e44: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 109e48: str w8, [x24, #8] */
  arc_st32((ARC_X_R(c, 24) + INT64_C(8)), ARC_W_R(c, 8));
  /* 109e4c: nop  */
  /* nop: no architectural effect here */
  /* 109e50: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109e54: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089112));
  fn1_142518(c);
  /* 109e58: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 109e5c: stlr x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* 109e60: nop  */
  /* nop: no architectural effect here */
  /* 109e64: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 109e68: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089132));
  fn1_142560(c);
  /* 109e6c: nop  */
  /* nop: no architectural effect here */
  /* 109e70: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 109e74: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089144));
  fn1_142578(c);
L_109e78:;
  /* 109e78: ldp x8, x10, [x23, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 109e7c: ldrsw x9, [x24, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 24) + INT64_C(8)))));
  /* 109e80: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 109e84: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 109e88: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 109e8c: b.hs #0x109eec */
  if (ARC_COND(c, 2)) goto L_109eec;
  /* 109e90: ldr x21, [x8, x9, lsl #3] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 109e94: cbz x21, #0x109eec */
  if ((ARC_X_R(c, 21)) == 0) goto L_109eec;
  /* 109e98: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 109e9c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 109ea0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 109ea4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089192));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 109ea8: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 109eac: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 109eb0: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 109eb4: mov x8, x19 */
  ARC_X_W(c, 8, ARC_X_R(c, 19));
  /* 109eb8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 109ebc: blr x9 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089216));
  arc_dispatch(c, ARC_X_R(c, 9));
  /* 109ec0: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 109ec4: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089224));
  fn1_143478(c);
  /* 109ec8: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 109ecc: ldr x25, [sp, #0x20] */
  ARC_X_W(c, 25, arc_ld64(((c)->sp + INT64_C(32))));
  /* 109ed0: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 109ed4: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 109ed8: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 109edc: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 109ee0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 109ee4: ret  */
  return;
L_109ee8:;
  /* 109ee8: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089260));
  fn1_fc3b8(c);
L_109eec:;
  /* 109eec: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089264));
  fn1_fc3b8(c);
  /* 109ef0: b #0x109ef4 */
  goto L_109ef4;
L_109ef4:;
  /* 109ef4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 109ef8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 109efc: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089280));
  fn1_d2a78(c);
  /* 109f00: b #0x109f14 */
  goto L_109f14;
  /* 109f04: b #0x109f10 */
  goto L_109f10;
  /* 109f08: b #0x109f10 */
  goto L_109f10;
  /* 109f0c: b #0x109f10 */
  goto L_109f10;
L_109f10:;
  /* 109f10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_109f14:;
  /* 109f14: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 109f18: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089308));
  fn1_143478(c);
  /* 109f1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 109f20: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1089316));
  fn1_9cc20(c);
}

void fn1_11287c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039052412));
  /* 11287c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 112880: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 112884: stp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 112888: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 11288c: mov x19, x4 */
  ARC_X_W(c, 19, ARC_X_R(c, 4));
  /* 112890: mov x0, x2 */
  ARC_X_W(c, 0, ARC_X_R(c, 2));
  /* 112894: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 112898: mov x1, x3 */
  ARC_X_W(c, 1, ARC_X_R(c, 3));
  /* 11289c: mov x2, x4 */
  ARC_X_W(c, 2, ARC_X_R(c, 4));
  /* 1128a0: mov x3, x5 */
  ARC_X_W(c, 3, ARC_X_R(c, 5));
  /* 1128a4: mov w4, #2 */
  ARC_W_W(c, 4, UINT64_C(2));
  /* 1128a8: bl #0x112ec0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1124524));
  fn1_112ec0(c);
  /* 1128ac: ldr w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* 1128b0: cmp w0, #0x3b */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(59));
  /* 1128b4: b.gt #0x1128c4 */
  if (ARC_COND(c, 12)) goto L_1128c4;
  /* 1128b8: tbnz w8, #2, #0x1128c4 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) != 0) goto L_1128c4;
  /* 1128bc: str w0, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 0));
  /* 1128c0: b #0x1128cc */
  goto L_1128cc;
L_1128c4:;
  /* 1128c4: orr w8, w8, #4 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(4)));
  /* 1128c8: str w8, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 8));
L_1128cc:;
  /* 1128cc: ldp x20, x19, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 1128d0: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 1128d4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 1128d8: ret  */
  return;
}

void fn1_113f7c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058300));
  /* 113f7c: bti c */
  /* bti: no architectural effect here */
  /* 113f80: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 113f84: ldrb w10, [x9, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(96));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(96));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 113f88: tbnz w10, #0, #0x113fa0 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_113fa0;
  /* 113f8c: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 113f90: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 113f94: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 113f98: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 113f9c: ret  */
  return;
L_113fa0:;
  /* 113fa0: ldp x2, x1, [x0, #0x68] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(104));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 113fa4: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 113fa8: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_11e78c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039101324));
  /* 11e78c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11e790: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11e794: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11e798: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11e79c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11e7a0: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11e7a4: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11e7a8: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e7ac: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11e7b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11e7b4: ldr x23, [x23, #0xbd8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3032))));
  /* 11e7b8: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e7bc: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11e7c0: b.eq #0x11e87c */
  if (ARC_COND(c, 0)) goto L_11e87c;
  /* 11e7c4: nop  */
  /* nop: no architectural effect here */
  /* 11e7c8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e7cc: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173456));
  fn1_142518(c);
  /* 11e7d0: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e7d4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11e7d8: b.ne #0x11e804 */
  if (ARC_COND(c, 1)) goto L_11e804;
  /* 11e7dc: nop  */
  /* nop: no architectural effect here */
  /* 11e7e0: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11e7e4: nop  */
  /* nop: no architectural effect here */
  /* 11e7e8: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11e7ec:;
  /* 11e7ec: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11e7f0: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11e7f4: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173496));
  fn1_142530(c);
  /* 11e7f8: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e7fc: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11e800: b.eq #0x11e7ec */
  if (ARC_COND(c, 0)) goto L_11e7ec;
L_11e804:;
  /* 11e804: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11e808: cbz x8, #0x11e81c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11e81c;
  /* 11e80c: nop  */
  /* nop: no architectural effect here */
  /* 11e810: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e814: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173528));
  fn1_142560(c);
  /* 11e818: b #0x11e87c */
  goto L_11e87c;
L_11e81c:;
  /* 11e81c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11e820: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11e824: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11e828: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11e82c: nop  */
  /* nop: no architectural effect here */
  /* 11e830: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e834: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173560));
  fn1_142560(c);
  /* 11e838: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11e83c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11e840: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11e844: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173576));
  fn1_a2030(c);
  /* 11e848: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11e84c: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11e850: nop  */
  /* nop: no architectural effect here */
  /* 11e854: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e858: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173596));
  fn1_142518(c);
  /* 11e85c: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11e860: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11e864: nop  */
  /* nop: no architectural effect here */
  /* 11e868: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11e86c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173616));
  fn1_142560(c);
  /* 11e870: nop  */
  /* nop: no architectural effect here */
  /* 11e874: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11e878: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173628));
  fn1_142578(c);
L_11e87c:;
  /* 11e87c: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11e880: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11e884: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11e888: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11e88c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173648));
  fn1_db2e0(c);
  /* 11e890: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11e894: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11e898: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11e89c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11e8a0: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11e8a4: b.hi #0x11e8d0 */
  if (ARC_COND(c, 8)) goto L_11e8d0;
  /* 11e8a8: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11e8ac: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11e8b0: b.ls #0x11e8c4 */
  if (ARC_COND(c, 9)) goto L_11e8c4;
  /* 11e8b4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11e8b8: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173692));
  fn1_1352bc(c);
  /* 11e8bc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11e8c0: b #0x11e8d0 */
  goto L_11e8d0;
L_11e8c4:;
  /* 11e8c4: b.hs #0x11e8d0 */
  if (ARC_COND(c, 2)) goto L_11e8d0;
  /* 11e8c8: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11e8cc: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11e8d0:;
  /* 11e8d0: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11e8d4: cbz x20, #0x11e8f8 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11e8f8;
  /* 11e8d8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11e8dc: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11e8e0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173732));
  fn1_bd950(c);
  /* 11e8e4: cbnz x0, #0x11e8f8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11e8f8;
  /* 11e8e8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11e8ec: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e8f0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11e8f4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173752));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11e8f8:;
  /* 11e8f8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11e8fc: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11e900: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11e904: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11e908: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11e90c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11e910: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11e914: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11e918: ret  */
  return;
  /* 11e91c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11e920: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11e924: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11e928: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173804));
  fn1_bd950(c);
  /* 11e92c: cbnz x0, #0x11e954 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11e954;
  /* 11e930: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11e934: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11e938: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11e93c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173824));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11e940: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e944: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173832));
  fn1_9cc20(c);
  /* 11e948: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11e94c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11e950: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173844));
  fn1_d2a78(c);
L_11e954:;
  /* 11e954: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11e958: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1173852));
  fn1_9cc20(c);
}

void fn1_126434(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039133236));
  /* 126434: bti c */
  /* bti: no architectural effect here */
  /* 126438: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 12643c: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 126440: b.eq #0x126478 */
  if (ARC_COND(c, 0)) goto L_126478;
  /* 126444: nop  */
  /* nop: no architectural effect here */
  /* 126448: adr x8, #0x75c10 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(482320)));
  /* 12644c: b #0x126464 */
  goto L_126464;
L_126450:;
  /* 126450: ldr x9, [x8, x9, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
L_126454:;
  /* 126454: add x0, x0, #4 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4)));
  /* 126458: str x9, [x3], #8 */
  { const uint64_t _a = ARC_X_R(c, 3);
    ARC_X_W(c, 3, ARC_X_R(c, 3) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 9));
  }
  /* 12645c: cmp x0, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 2));
  /* 126460: b.eq #0x126478 */
  if (ARC_COND(c, 0)) goto L_126478;
L_126464:;
  /* 126464: ldr w9, [x0] */
  ARC_W_W(c, 9, arc_ld32(ARC_X_R(c, 0)));
  /* 126468: cmp w9, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(127));
  /* 12646c: b.ls #0x126450 */
  if (ARC_COND(c, 9)) goto L_126450;
  /* 126470: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* 126474: b #0x126454 */
  goto L_126454;
L_126478:;
  /* 126478: ret  */
  return;
}

void fn1_128950(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039142736));
  /* 128950: bti c */
  /* bti: no architectural effect here */
  /* 128954: str x3, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 3));
  /* 128958: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 12895c: tbz w7, #1, #0x1289b0 */
  if (((ARC_W_R(c, 7)) >> 1 & 1) == 0) goto L_1289b0;
  /* 128960: sub x8, x4, x3 */
  ARC_X_W(c, 8, (ARC_X_R(c, 4) - ARC_X_R(c, 3)));
  /* 128964: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* 128968: b.ge #0x128974 */
  if (ARC_COND(c, 10)) goto L_128974;
L_12896c:;
  /* 12896c: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 128970: ret  */
  return;
L_128974:;
  /* 128974: add x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) + UINT64_C(1)));
  /* 128978: mov w9, #0xef */
  ARC_W_W(c, 9, UINT64_C(239));
  /* 12897c: mov w10, #0xbb */
  ARC_W_W(c, 10, UINT64_C(187));
  /* 128980: str x8, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 8));
  /* 128984: strb w9, [x3] */
  arc_st8(ARC_X_R(c, 3), ARC_W_R(c, 9));
  /* 128988: ldr x8, [x5] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 5)));
  /* 12898c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 128990: str x9, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 9));
  /* 128994: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 128998: mov w10, #0xbf */
  ARC_W_W(c, 10, UINT64_C(191));
  /* 12899c: ldr x8, [x5] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 5)));
  /* 1289a0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1289a4: str x9, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 9));
  /* 1289a8: strb w10, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 10));
  /* 1289ac: ldr x0, [x2] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 2)));
L_1289b0:;
  /* 1289b0: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 1289b4: b.hs #0x128b94 */
  if (ARC_COND(c, 2)) goto L_128b94;
  /* 1289b8: mov w8, #0xdc00 */
  ARC_W_W(c, 8, UINT64_C(56320));
  /* 1289bc: b #0x128a18 */
  goto L_128a18;
L_1289c0:;
  /* 1289c0: lsr w11, w9, #0xc */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* 1289c4: add x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 1289c8: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
  /* 1289cc: orr w11, w11, #0xe0 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | UINT64_C(224)));
  /* 1289d0: strb w11, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 11));
  /* 1289d4: lsr w11, w9, #6 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(6)) & 31)));
  /* 1289d8: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 1289dc: and w11, w11, #0xffffffbf */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) & UINT64_C(4294967231)));
L_1289e0:;
  /* 1289e0: add x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 1289e4: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
L_1289e8:;
  /* 1289e8: strb w11, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 11));
  /* 1289ec: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 1289f0: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 1289f4: bfxil w11, w9, #0, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 0) & UINT64_C(63))));
  /* 1289f8: add x9, x10, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 1289fc: str x9, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 9));
  /* 128a00: strb w11, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 11));
L_128a04:;
  /* 128a04: ldr x9, [x2] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 2)));
  /* 128a08: add x0, x9, #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* 128a0c: cmp x0, x1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 1));
  /* 128a10: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 128a14: b.hs #0x128b94 */
  if (ARC_COND(c, 2)) goto L_128b94;
L_128a18:;
  /* 128a18: ldrh w9, [x0] */
  ARC_W_W(c, 9, arc_ld16(ARC_X_R(c, 0)));
  /* 128a1c: cmp x6, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 6), ARC_X_R(c, 9));
  /* 128a20: b.lo #0x128b9c */
  if (ARC_COND(c, 3)) goto L_128b9c;
  /* 128a24: cmp w9, #0x7f */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(127));
  /* 128a28: b.hi #0x128a4c */
  if (ARC_COND(c, 8)) goto L_128a4c;
  /* 128a2c: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 128a30: sub x11, x4, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 4) - ARC_X_R(c, 10)));
  /* 128a34: cmp x11, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(1));
  /* 128a38: b.lt #0x12896c */
  if (ARC_COND(c, 11)) goto L_12896c;
  /* 128a3c: add x11, x10, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 128a40: str x11, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 11));
  /* 128a44: strb w9, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 9));
  /* 128a48: b #0x128a04 */
  goto L_128a04;
L_128a4c:;
  /* 128a4c: cmp w9, #0x7ff */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2047));
  /* 128a50: b.hi #0x128a78 */
  if (ARC_COND(c, 8)) goto L_128a78;
  /* 128a54: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 128a58: sub x11, x4, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 4) - ARC_X_R(c, 10)));
  /* 128a5c: cmp x11, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2));
  /* 128a60: b.lt #0x12896c */
  if (ARC_COND(c, 11)) goto L_12896c;
  /* 128a64: lsr w11, w9, #6 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(6)) & 31)));
  /* 128a68: add x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 128a6c: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
  /* 128a70: orr w11, w11, #0xc0 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | UINT64_C(192)));
  /* 128a74: b #0x1289e8 */
  goto L_1289e8;
L_128a78:;
  /* 128a78: lsr w10, w9, #0xb */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(11)) & 31)));
  /* 128a7c: cmp w10, #0x1a */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(26));
  /* 128a80: b.hi #0x128ab8 */
  if (ARC_COND(c, 8)) goto L_128ab8;
  /* 128a84: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 128a88: sub x11, x4, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 4) - ARC_X_R(c, 10)));
  /* 128a8c: cmp x11, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(3));
  /* 128a90: b.lt #0x12896c */
  if (ARC_COND(c, 11)) goto L_12896c;
  /* 128a94: lsr w11, w9, #0xc */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(12)) & 31)));
  /* 128a98: add x12, x10, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) + UINT64_C(1)));
  /* 128a9c: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
  /* 128aa0: orr w11, w11, #0xe0 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | UINT64_C(224)));
  /* 128aa4: strb w11, [x10] */
  arc_st8(ARC_X_R(c, 10), ARC_W_R(c, 11));
  /* 128aa8: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 128aac: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 128ab0: bfxil w11, w9, #6, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 9))) >> 6) & UINT64_C(63))));
  /* 128ab4: b #0x1289e0 */
  goto L_1289e0;
L_128ab8:;
  /* 128ab8: lsr w10, w9, #0xa */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 9)) >> ((UINT64_C(10)) & 31)));
  /* 128abc: cmp w10, #0x36 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(54));
  /* 128ac0: b.hi #0x128b78 */
  if (ARC_COND(c, 8)) goto L_128b78;
  /* 128ac4: sub x10, x1, x0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 1) - ARC_X_R(c, 0)));
  /* 128ac8: cmp x10, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(3));
  /* 128acc: b.lt #0x12896c */
  if (ARC_COND(c, 11)) goto L_12896c;
  /* 128ad0: ldrh w10, [x0, #2]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(2));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(2));
    ARC_W_W(c, 10, arc_ld16(_a));
  }
  /* 128ad4: and w11, w10, #0xfc00 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) & UINT64_C(64512)));
  /* 128ad8: cmp w11, w8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 8));
  /* 128adc: b.ne #0x128b9c */
  if (ARC_COND(c, 1)) goto L_128b9c;
  /* 128ae0: ldr x11, [x5] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 5)));
  /* 128ae4: sub x12, x4, x11 */
  ARC_X_W(c, 12, (ARC_X_R(c, 4) - ARC_X_R(c, 11)));
  /* 128ae8: cmp x12, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(4));
  /* 128aec: b.lt #0x12896c */
  if (ARC_COND(c, 11)) goto L_12896c;
  /* 128af0: and x12, x10, #0x3ff */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) & UINT64_C(1023)));
  /* 128af4: bfi x12, x9, #0xa, #0xa */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(18446744073708504063)) | ((((uint64_t)(ARC_X_R(c, 9))) & UINT64_C(1023)) << 10)));
  /* 128af8: add x12, x12, #0x10, lsl #12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(65536)));
  /* 128afc: cmp x12, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 6));
  /* 128b00: b.hi #0x128b9c */
  if (ARC_COND(c, 8)) goto L_128b9c;
  /* 128b04: ubfx w12, w9, #6, #4 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 9)) >> 6) & UINT64_C(15)));
  /* 128b08: add x14, x11, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 128b0c: str x0, [x2] */
  arc_st64(ARC_X_R(c, 2), ARC_X_R(c, 0));
  /* 128b10: str x14, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 14));
  /* 128b14: ubfx w14, w9, #2, #4 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 9)) >> 2) & UINT64_C(15)));
  /* 128b18: ubfiz w9, w9, #4, #2 */
  ARC_W_W(c, 9, ((uint32_t)((((uint32_t)(ARC_W_R(c, 9))) & UINT64_C(3))) << 4));
  /* 128b1c: add w12, w12, #1 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(1)));
  /* 128b20: lsr w13, w12, #2 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 12)) >> ((UINT64_C(2)) & 31)));
  /* 128b24: bfi w14, w12, #4, #2 */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 14)) & UINT64_C(4294967247)) | ((((uint32_t)(ARC_W_R(c, 12))) & UINT64_C(3)) << 4)));
  /* 128b28: bfxil w9, w10, #6, #4 */
  ARC_W_W(c, 9, (((uint32_t)(ARC_W_R(c, 9)) & UINT64_C(4294967280)) | ((((uint32_t)(ARC_W_R(c, 10))) >> 6) & UINT64_C(15))));
  /* 128b2c: orr w13, w13, #0xf0 */
  ARC_W_W(c, 13, (ARC_W_R(c, 13) | UINT64_C(240)));
  /* 128b30: orr w9, w9, #0x80 */
  ARC_W_W(c, 9, (ARC_W_R(c, 9) | UINT64_C(128)));
  /* 128b34: strb w13, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 13));
  /* 128b38: orr w13, w14, #0x80 */
  ARC_W_W(c, 13, (ARC_W_R(c, 14) | UINT64_C(128)));
  /* 128b3c: ldr x11, [x5] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 5)));
  /* 128b40: add x12, x11, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 128b44: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
  /* 128b48: strb w13, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 13));
  /* 128b4c: ldr x11, [x5] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 5)));
  /* 128b50: add x12, x11, #1 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(1)));
  /* 128b54: str x12, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 12));
  /* 128b58: strb w9, [x11] */
  arc_st8(ARC_X_R(c, 11), ARC_W_R(c, 9));
  /* 128b5c: mov w11, #0x80 */
  ARC_W_W(c, 11, UINT64_C(128));
  /* 128b60: ldr x9, [x5] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 5)));
  /* 128b64: bfxil w11, w10, #0, #6 */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 11)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 10))) >> 0) & UINT64_C(63))));
  /* 128b68: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 128b6c: str x10, [x5] */
  arc_st64(ARC_X_R(c, 5), ARC_X_R(c, 10));
  /* 128b70: strb w11, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 11));
  /* 128b74: b #0x128a04 */
  goto L_128a04;
L_128b78:;
  /* 128b78: cmp w9, #0xe, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(57344));
  /* 128b7c: b.lo #0x128b9c */
  if (ARC_COND(c, 3)) goto L_128b9c;
  /* 128b80: ldr x10, [x5] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 5)));
  /* 128b84: sub x11, x4, x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 4) - ARC_X_R(c, 10)));
  /* 128b88: cmp x11, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 11), UINT64_C(3));
  /* 128b8c: b.ge #0x1289c0 */
  if (ARC_COND(c, 10)) goto L_1289c0;
  /* 128b90: b #0x12896c */
  goto L_12896c;
L_128b94:;
  /* 128b94: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 128b98: ret  */
  return;
L_128b9c:;
  /* 128b9c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
  /* 128ba0: ret  */
  return;
}

void fn1_12a5b4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039150004));
  /* 12a5b4: bti c */
  /* bti: no architectural effect here */
  /* 12a5b8: ldrb w9, [x0, #0x20] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(32))));
  /* 12a5bc: ldr x8, [x0, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a5c0: tbz w9, #1, #0x12a5e0 */
  if (((ARC_W_R(c, 9)) >> 1 & 1) == 0) goto L_12a5e0;
  /* 12a5c4: sub x9, x6, x5 */
  ARC_X_W(c, 9, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12a5c8: cmp x9, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(2));
  /* 12a5cc: b.ge #0x12a5d8 */
  if (ARC_COND(c, 10)) goto L_12a5d8;
L_12a5d0:;
  /* 12a5d0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 12a5d4: b #0x12a680 */
  goto L_12a680;
L_12a5d8:;
  /* 12a5d8: mov w9, #0xfeff */
  ARC_W_W(c, 9, UINT64_C(65279));
  /* 12a5dc: strh w9, [x5], #2 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 9));
  }
L_12a5e0:;
  /* 12a5e0: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12a5e4: b.hs #0x12a674 */
  if (ARC_COND(c, 2)) goto L_12a674;
  /* 12a5e8: mov w9, #0x3fc0 */
  ARC_W_W(c, 9, UINT64_C(16320));
  /* 12a5ec: mov w10, #0xd8 */
  ARC_W_W(c, 10, UINT64_C(216));
  /* 12a5f0: b #0x12a604 */
  goto L_12a604;
L_12a5f4:;
  /* 12a5f4: add x2, x2, #4 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(4)));
  /* 12a5f8: strb w12, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 12));
  }
  /* 12a5fc: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12a600: b.hs #0x12a674 */
  if (ARC_COND(c, 2)) goto L_12a674;
L_12a604:;
  /* 12a604: ldr w11, [x2] */
  ARC_W_W(c, 11, arc_ld32(ARC_X_R(c, 2)));
  /* 12a608: lsr w12, w11, #0xb */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(11)) & 31)));
  /* 12a60c: cmp w12, #0x1b */
  (void)arc_sub32(c, ARC_W_R(c, 12), UINT64_C(27));
  /* 12a610: ccmp x8, x11, #0, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11)); }
  else { (c)->nf = 0; (c)->zf = 0;
          (c)->cf = 0; (c)->vf = 0; }
  /* 12a614: b.lo #0x12a67c */
  if (ARC_COND(c, 3)) goto L_12a67c;
  /* 12a618: lsr w13, w11, #0x10 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(16)) & 31)));
  /* 12a61c: sub x12, x6, x5 */
  ARC_X_W(c, 12, (ARC_X_R(c, 6) - ARC_X_R(c, 5)));
  /* 12a620: cbnz w13, #0x12a638 */
  if ((ARC_W_R(c, 13)) != 0) goto L_12a638;
  /* 12a624: cmp x12, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(2));
  /* 12a628: b.lt #0x12a5d0 */
  if (ARC_COND(c, 11)) goto L_12a5d0;
  /* 12a62c: lsr w12, w11, #8 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(8)) & 31)));
  /* 12a630: strb w11, [x5], #1 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(1));
    arc_st8(_a, ARC_W_R(c, 11));
  }
  /* 12a634: b #0x12a5f4 */
  goto L_12a5f4;
L_12a638:;
  /* 12a638: cmp x12, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 12), UINT64_C(4));
  /* 12a63c: b.lt #0x12a5d0 */
  if (ARC_COND(c, 11)) goto L_12a5d0;
  /* 12a640: lsr w12, w11, #0xa */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(10)) & 31)));
  /* 12a644: strb w11, [x5, #2] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(2)), ARC_W_R(c, 11));
  /* 12a648: and w12, w12, #0x7c0 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) & UINT64_C(1984)));
  /* 12a64c: add w13, w12, w9 */
  ARC_W_W(c, 13, (ARC_W_R(c, 12) + ARC_W_R(c, 9)));
  /* 12a650: mov w12, #-0x24 */
  ARC_W_W(c, 12, UINT64_C(18446744073709551580));
  /* 12a654: orr w14, w10, w13, lsr #8 */
  ARC_W_W(c, 14, (ARC_W_R(c, 10) | ((uint32_t)(ARC_W_R(c, 13)) >> 8)));
  /* 12a658: bfxil w13, w11, #0xa, #6 */
  ARC_W_W(c, 13, (((uint32_t)(ARC_W_R(c, 13)) & UINT64_C(4294967232)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 10) & UINT64_C(63))));
  /* 12a65c: bfxil w12, w11, #8, #2 */
  ARC_W_W(c, 12, (((uint32_t)(ARC_W_R(c, 12)) & UINT64_C(4294967292)) | ((((uint32_t)(ARC_W_R(c, 11))) >> 8) & UINT64_C(3))));
  /* 12a660: strb w13, [x5] */
  arc_st8(ARC_X_R(c, 5), ARC_W_R(c, 13));
  /* 12a664: add x13, x5, #3 */
  ARC_X_W(c, 13, (ARC_X_R(c, 5) + UINT64_C(3)));
  /* 12a668: strb w14, [x5, #1] */
  arc_st8((ARC_X_R(c, 5) + INT64_C(1)), ARC_W_R(c, 14));
  /* 12a66c: mov x5, x13 */
  ARC_X_W(c, 5, ARC_X_R(c, 13));
  /* 12a670: b #0x12a5f4 */
  goto L_12a5f4;
L_12a674:;
  /* 12a674: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 12a678: b #0x12a680 */
  goto L_12a680;
L_12a67c:;
  /* 12a67c: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
L_12a680:;
  /* 12a680: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a684: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12a688: ret  */
  return;
}

void fn1_12bc28(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039155752));
  /* 12bc28: bti c */
  /* bti: no architectural effect here */
  /* 12bc2c: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 12bc30: ldr x8, [x8, #0xcc0] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3264))));
  /* 12bc34: ldrb w9, [x0, #0x18] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12bc38: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 12bc3c: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 12bc40: tbnz w9, #0, #0x12bc48 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_12bc48;
  /* 12bc44: ret  */
  return;
L_12bc48:;
  /* 12bc48: ldr x8, [x0, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(40))));
  /* 12bc4c: ldr x9, [x0, #0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12bc50: and x1, x9, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) & UINT64_C(18446744073709551614)));
  /* 12bc54: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12bc58: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_132248(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039181896));
  /* 132248: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13224c: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 132250: stp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 132254: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 132258: add x29, sp, #0x30 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(48)));
  /* 13225c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 132260: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 132264: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 132268: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 13226c: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254000));
  fn1_1441e0(c);
  /* 132270: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 132274: cbz x0, #0x13228c */
  if ((ARC_X_R(c, 0)) == 0) goto L_13228c;
  /* 132278: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13227c: ldp x29, x30, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 132280: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 132284: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 132288: ret  */
  return;
L_13228c:;
  /* 13228c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 132290: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 132294: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254040));
  fn1_11dda8(c);
  /* 132298: adrp x0, #0x51000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13229c: add x0, x0, #0x165 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(357)));
  /* 1322a0: add x8, sp, #0x18 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(24)));
  /* 1322a4: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 1322a8: add x19, sp, #0x18 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(24)));
  /* 1322ac: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254064));
  fn1_125878(c);
  /* 1322b0: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 1322b4: ldr x9, [sp, #0x28] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1322b8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1322bc: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 1322c0: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254084));
  fn1_142c98(c);
  /* 1322c4: ldrb w8, [sp, #0x18] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(24))));
  /* 1322c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1322cc: tbnz w8, #0, #0x1322e0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1322e0;
  /* 1322d0: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 1322d4: tbnz w8, #0, #0x132308 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_132308;
L_1322d8:;
  /* 1322d8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1322dc: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254112));
  fn1_9cc20(c);
L_1322e0:;
  /* 1322e0: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 1322e4: ldr x0, [sp, #0x28] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(40))));
  /* 1322e8: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1322ec: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254128));
  fn1_142608(c);
  /* 1322f0: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 1322f4: tbz w8, #0, #0x1322d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1322d8;
  /* 1322f8: b #0x132308 */
  goto L_132308;
  /* 1322fc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 132300: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 132304: tbz w8, #0, #0x1322d8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1322d8;
L_132308:;
  /* 132308: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13230c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 132310: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 132314: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254168));
  fn1_142608(c);
  /* 132318: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13231c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1254176));
  fn1_9cc20(c);
}

void fn1_134bcc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192524));
  /* 134bcc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 134bd0: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 134bd4: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* 134bd8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 134bdc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134be0: add x0, x0, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(16)));
  /* 134be4: bl #0x143d00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1264616));
  fn1_143d00(c);
  /* 134be8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134bec: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* 134bf0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* 134bf4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134bf8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 134bfc: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_136f0c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039201548));
  /* 136f0c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 136f10: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 136f14: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 136f18: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 136f1c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 136f20: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 136f24: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* 136f28: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 136f2c: mov w22, #0xf */
  ARC_W_W(c, 22, UINT64_C(15));
  /* 136f30: nop  */
  /* nop: no architectural effect here */
  /* 136f34: adr x21, #0x151050 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380432)));
L_136f38:;
  /* 136f38: lsr x23, x22, #1 */
  ARC_X_W(c, 23, ((uint64_t)(ARC_X_R(c, 22)) >> ((UINT64_C(1)) & 63)));
  /* 136f3c: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* 136f40: add x24, x21, x23, lsl #4 */
  ARC_X_W(c, 24, (ARC_X_R(c, 21) + ((uint64_t)(ARC_X_R(c, 23)) << 4)));
  /* 136f44: ldr x0, [x24], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 24);
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(16));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* 136f48: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273676));
  fn1_142848(c);
  /* 136f4c: mvn x8, x23 */
  ARC_X_W(c, 8, (~(uint64_t)(ARC_X_R(c, 23))));
  /* 136f50: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 136f54: add x8, x22, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 22) + ARC_X_R(c, 8)));
  /* 136f58: csel x21, x24, x21, lt */
  ARC_X_W(c, 21, (ARC_COND(c, 11) ? (ARC_X_R(c, 24)) : ARC_X_R(c, 21)));
  /* 136f5c: csel x22, x8, x23, lt */
  ARC_X_W(c, 22, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 23)));
  /* 136f60: cbnz x22, #0x136f38 */
  if ((ARC_X_R(c, 22)) != 0) goto L_136f38;
  /* 136f64: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 136f68: add x8, x8, #0x140 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(320)));
  /* 136f6c: cmp x21, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 136f70: b.eq #0x136f84 */
  if (ARC_COND(c, 0)) goto L_136f84;
  /* 136f74: ldr x1, [x21] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 21)));
  /* 136f78: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 136f7c: bl #0x142848 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1273728));
  fn1_142848(c);
  /* 136f80: cbz w0, #0x136fa0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_136fa0;
L_136f84:;
  /* 136f84: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_136f88:;
  /* 136f88: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 136f8c: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 136f90: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 136f94: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 136f98: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 136f9c: ret  */
  return;
L_136fa0:;
  /* 136fa0: ldrh w8, [x21, #8] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(8))));
  /* 136fa4: mov w9, #0x8078 */
  ARC_W_W(c, 9, UINT64_C(32888));
  /* 136fa8: cmp w8, #8, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32768));
  /* 136fac: csel w0, w8, w9, ne */
  ARC_W_W(c, 0, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* 136fb0: tbz w19, #0, #0x136f88 */
  if (((ARC_W_R(c, 19)) >> 0 & 1) == 0) goto L_136f88;
  /* 136fb4: cmp w8, #8, lsl #12 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32768));
  /* 136fb8: b.eq #0x136f88 */
  if (ARC_COND(c, 0)) goto L_136f88;
  /* 136fbc: orr w9, w8, #0x20 */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 136fc0: tst w8, #0x18 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(24)));
  /* 136fc4: csel w0, w8, w9, eq */
  ARC_W_W(c, 0, (ARC_COND(c, 0) ? (ARC_W_R(c, 8)) : ARC_W_R(c, 9)));
  /* 136fc8: b #0x136f88 */
  goto L_136f88;
}

void fn1_13a384(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039214980));
  /* 13a384: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13a388: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 13a38c: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13a390: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 13a394: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13a398: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13a39c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 13a3a0: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 13a3a4: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 13a3a8: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* 13a3ac: str xzr, [x22], #8 */
  { const uint64_t _a = ARC_X_R(c, 22);
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 31));
  }
  /* 13a3b0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 13a3b4: ldrb w8, [x1] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 1)));
  /* 13a3b8: mov w21, w2 */
  ARC_W_W(c, 21, ARC_W_R(c, 2));
  /* 13a3bc: tbnz w8, #0, #0x13a3d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13a3d4;
  /* 13a3c0: ldr x8, [x23, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 13a3c4: ldr q0, [x23] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 23)), arc_ld64(ARC_X_R(c, 23) + 8));
  /* 13a3c8: str x8, [x22, #0x10] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(16)), ARC_X_R(c, 8));
  /* 13a3cc: str q0, [x22] */
  arc_st64(ARC_X_R(c, 22), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 22) + 8, (c)->q[0].u64[1]);
  /* 13a3d0: b #0x13a3e0 */
  goto L_13a3e0;
L_13a3d4:;
  /* 13a3d4: ldp x2, x1, [x23, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 13a3d8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 13a3dc: bl #0xda588 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287136));
  fn1_da588(c);
L_13a3e0:;
  /* 13a3e0: movi d0, #0x00ffff0000ffff */
  arc_du_w(c, 0, UINT64_C(281470681808895));
  /* 13a3e4: mov x24, x20 */
  ARC_X_W(c, 24, ARC_X_R(c, 20));
  /* 13a3e8: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 13a3ec: mov x9, #-0x8000000000000000 */
  ARC_X_W(c, 9, UINT64_C(9223372036854775808));
  /* 13a3f0: stp xzr, xzr, [x20, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13a3f4: strh wzr, [x20, #0x68] */
  arc_st16((ARC_X_R(c, 20) + INT64_C(104)), ARC_W_R(c, 31));
  /* 13a3f8: str xzr, [x24, #0x20]! */
  { const uint64_t _a = (ARC_X_R(c, 24) + INT64_C(32));
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(32));
    arc_st64(_a, ARC_X_R(c, 31));
  }
  /* 13a3fc: str d0, [x20, #0x60] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(96)), (c)->q[0].u64[0]);
  /* 13a400: stp x8, x8, [x20, #0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13a404: stp xzr, x9, [x20, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13a408: ldrb w8, [x23] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 23)));
  /* 13a40c: ldr x9, [x23, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 23) + INT64_C(16))));
  /* 13a410: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13a414: csinc x0, x9, x23, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 23)) + 1)));
  /* 13a418: bl #0x144630 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287196));
  fn1_144630(c);
  /* 13a41c: str x0, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 0));
  /* 13a420: cbz x0, #0x13a434 */
  if ((ARC_X_R(c, 0)) == 0) goto L_13a434;
  /* 13a424: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13a428: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13a42c: bl #0x139da4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287216));
  fn1_139da4(c);
  /* 13a430: b #0x13a4b8 */
  goto L_13a4b8;
L_13a434:;
  /* 13a434: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287224));
  fn1_142a58(c);
  /* 13a438: nop  */
  /* nop: no architectural effect here */
  /* 13a43c: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13a440: ldr w20, [x0] */
  ARC_W_W(c, 20, arc_ld32(ARC_X_R(c, 0)));
  /* 13a444: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13a448: tbz w8, #0, #0x13a4d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a4d4;
L_13a44c:;
  /* 13a44c: nop  */
  /* nop: no architectural effect here */
  /* 13a450: adr x0, #0x156d38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13a454: stp x20, x0, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13a458: tbz w21, #1, #0x13a4b8 */
  if (((ARC_W_R(c, 21)) >> 1 & 1) == 0) goto L_13a4b8;
  /* 13a45c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13a460: mov w9, #0xd */
  ARC_W_W(c, 9, UINT64_C(13));
  /* 13a464: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 13a468: mov w1, w20 */
  ARC_W_W(c, 1, ARC_W_R(c, 20));
  /* 13a46c: stp x9, x0, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 13a470: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13a474: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287288));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13a478: tbnz w0, #0, #0x13a498 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_13a498;
  /* 13a47c: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13a480: ldr w2, [sp] */
  ARC_W_W(c, 2, arc_ld32((c)->sp));
  /* 13a484: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 13a488: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13a48c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 13a490: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287316));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13a494: tbz w0, #0, #0x13a4b8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13a4b8;
L_13a498:;
  /* 13a498: str wzr, [x19] */
  arc_st32(ARC_X_R(c, 19), ARC_W_R(c, 31));
  /* 13a49c: nop  */
  /* nop: no architectural effect here */
  /* 13a4a0: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a4a4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13a4a8: tbz w8, #0, #0x13a4f4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a4f4;
L_13a4ac:;
  /* 13a4ac: nop  */
  /* nop: no architectural effect here */
  /* 13a4b0: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13a4b4: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_13a4b8:;
  /* 13a4b8: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13a4bc: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13a4c0: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13a4c4: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13a4c8: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 13a4cc: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13a4d0: ret  */
  return;
L_13a4d4:;
  /* 13a4d4: nop  */
  /* nop: no architectural effect here */
  /* 13a4d8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13a4dc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287392));
  fn1_1424b8(c);
  /* 13a4e0: cbz w0, #0x13a44c */
  if ((ARC_W_R(c, 0)) == 0) goto L_13a44c;
  /* 13a4e4: nop  */
  /* nop: no architectural effect here */
  /* 13a4e8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13a4ec: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287408));
  fn1_1424d0(c);
  /* 13a4f0: b #0x13a44c */
  goto L_13a44c;
L_13a4f4:;
  /* 13a4f4: nop  */
  /* nop: no architectural effect here */
  /* 13a4f8: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a4fc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287424));
  fn1_1424b8(c);
  /* 13a500: cbz w0, #0x13a4ac */
  if ((ARC_W_R(c, 0)) == 0) goto L_13a4ac;
  /* 13a504: nop  */
  /* nop: no architectural effect here */
  /* 13a508: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13a50c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287440));
  fn1_1424d0(c);
  /* 13a510: b #0x13a4ac */
  goto L_13a4ac;
  /* 13a514: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 13a518: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13a51c: tbnz w8, #0, #0x13a530 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13a530;
  /* 13a520: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 13a524: tbnz w8, #0, #0x13a548 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13a548;
L_13a528:;
  /* 13a528: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a52c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287472));
  fn1_9cc20(c);
L_13a530:;
  /* 13a530: ldr x8, [x20, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* 13a534: ldr x0, [x20, #0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(48))));
  /* 13a538: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a53c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287488));
  fn1_142608(c);
  /* 13a540: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 13a544: tbz w8, #0, #0x13a528 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13a528;
L_13a548:;
  /* 13a548: ldr x8, [x20, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(8))));
  /* 13a54c: ldr x0, [x20, #0x18] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* 13a550: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13a554: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287512));
  fn1_142608(c);
  /* 13a558: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13a55c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1287520));
  fn1_9cc20(c);
}

void fn1_140ec4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039242436));
  /* 140ec4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 140ec8: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 140ecc: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 140ed0: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 140ed4: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 140ed8: add x8, x8, #0x73a */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1850)));
  /* 140edc: stp x0, xzr, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 0));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 140ee0: stp x8, x2, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 140ee4: cbz x2, #0x140f08 */
  if ((ARC_X_R(c, 2)) == 0) goto L_140f08;
  /* 140ee8: str wzr, [x2] */
  arc_st32(ARC_X_R(c, 2), ARC_W_R(c, 31));
  /* 140eec: nop  */
  /* nop: no architectural effect here */
  /* 140ef0: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140ef4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 140ef8: tbz w8, #0, #0x140f64 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_140f64;
L_140efc:;
  /* 140efc: nop  */
  /* nop: no architectural effect here */
  /* 140f00: adr x8, #0x156d40 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 140f04: str x8, [x2, #8] */
  arc_st64((ARC_X_R(c, 2) + INT64_C(8)), ARC_X_R(c, 8));
L_140f08:;
  /* 140f08: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* 140f0c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 140f10: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 140f14: csinc x0, x9, x0, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* 140f18: bl #0x144870 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314588));
  fn1_144870(c);
  /* 140f1c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 140f20: b.ne #0x140f54 */
  if (ARC_COND(c, 1)) goto L_140f54;
  /* 140f24: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314600));
  fn1_142a58(c);
  /* 140f28: nop  */
  /* nop: no architectural effect here */
  /* 140f2c: adr x9, #0x159208 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140f30: ldr w8, [x0] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 0)));
  /* 140f34: ldarb w9, [x9] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 9)));
  /* 140f38: tbz w9, #0, #0x140fa4 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_140fa4;
L_140f3c:;
  /* 140f3c: nop  */
  /* nop: no architectural effect here */
  /* 140f40: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 140f44: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 140f48: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 140f4c: stp x8, x9, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 140f50: bl #0x139ad0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314644));
  fn1_139ad0(c);
L_140f54:;
  /* 140f54: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 140f58: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 140f5c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 140f60: ret  */
  return;
L_140f64:;
  /* 140f64: nop  */
  /* nop: no architectural effect here */
  /* 140f68: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140f6c: stp x1, x0, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 0));
  }
  /* 140f70: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 140f74: str x2, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 2));
  /* 140f78: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314684));
  fn1_1424b8(c);
  /* 140f7c: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 140f80: mov w8, w0 */
  ARC_W_W(c, 8, ARC_W_R(c, 0));
  /* 140f84: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 140f88: cbz w8, #0x140efc */
  if ((ARC_W_R(c, 8)) == 0) goto L_140efc;
  /* 140f8c: nop  */
  /* nop: no architectural effect here */
  /* 140f90: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 140f94: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314712));
  fn1_1424d0(c);
  /* 140f98: ldp x2, x1, [sp, #8] */
  { const uint64_t _pa = ((c)->sp + INT64_C(8));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 140f9c: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 140fa0: b #0x140efc */
  goto L_140efc;
L_140fa4:;
  /* 140fa4: nop  */
  /* nop: no architectural effect here */
  /* 140fa8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140fac: str x8, [sp, #0x18] */
  arc_st64(((c)->sp + INT64_C(24)), ARC_X_R(c, 8));
  /* 140fb0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314740));
  fn1_1424b8(c);
  /* 140fb4: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 140fb8: cbz w0, #0x140f3c */
  if ((ARC_W_R(c, 0)) == 0) goto L_140f3c;
  /* 140fbc: nop  */
  /* nop: no architectural effect here */
  /* 140fc0: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 140fc4: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1314760));
  fn1_1424d0(c);
  /* 140fc8: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 140fcc: b #0x140f3c */
  goto L_140f3c;
}

void fn1_142860(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039248992));
  /* 142860: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142864: ldr x17, [x16] */
  ARC_X_W(c, 17, arc_ld64(ARC_X_R(c, 16)));
  /* 142868: add x16, x16, #0 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(0)));
  /* 14286c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142870: nop  */
  /* nop: no architectural effect here */
  /* 142874: nop  */
  /* nop: no architectural effect here */
}

void fn1_142e60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250528));
  /* 142e60: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142e64: ldr x17, [x16, #0x200] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(512))));
  /* 142e68: add x16, x16, #0x200 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(512)));
  /* 142e6c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142e70: nop  */
  /* nop: no architectural effect here */
  /* 142e74: nop  */
  /* nop: no architectural effect here */
}

void fn1_143460(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252064));
  /* 143460: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143464: ldr x17, [x16, #0x400] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1024))));
  /* 143468: add x16, x16, #0x400 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1024)));
  /* 14346c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143470: nop  */
  /* nop: no architectural effect here */
  /* 143474: nop  */
  /* nop: no architectural effect here */
}

void fn1_143a60(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253600));
  /* 143a60: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143a64: ldr x17, [x16, #0x600] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1536))));
  /* 143a68: add x16, x16, #0x600 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1536)));
  /* 143a6c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143a70: nop  */
  /* nop: no architectural effect here */
  /* 143a74: nop  */
  /* nop: no architectural effect here */
}

void fn1_144060(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255136));
  /* 144060: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144064: ldr x17, [x16, #0x800] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2048))));
  /* 144068: add x16, x16, #0x800 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2048)));
  /* 14406c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144070: nop  */
  /* nop: no architectural effect here */
  /* 144074: nop  */
  /* nop: no architectural effect here */
}

void fn1_144660(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256672));
  /* 144660: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144664: ldr x17, [x16, #0xa00] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2560))));
  /* 144668: add x16, x16, #0xa00 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2560)));
  /* 14466c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144670: nop  */
  /* nop: no architectural effect here */
  /* 144674: nop  */
  /* nop: no architectural effect here */
}

