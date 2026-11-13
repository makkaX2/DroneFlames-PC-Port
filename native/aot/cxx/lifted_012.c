#include "lifted.h"

void fn1_9ce2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038570540));
  /* 9ce2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 9ce30: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* 9ce34: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 9ce38: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* 9ce3c: add x1, sp, #8 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(8)));
  /* 9ce40: bl #0x9d11c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(642628));
  fn1_9d11c(c);
  /* 9ce44: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 9ce48: cmp w0, #0 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(0));
  /* 9ce4c: csel x0, x8, xzr, eq */
  ARC_X_W(c, 0, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 31)));
  /* 9ce50: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 9ce54: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* 9ce58: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 9ce5c: ret  */
  return;
}

void fn1_a140c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038588428));
  /* a140c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* a1410: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* a1414: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* a1418: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* a141c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* a1420: nop  */
  /* nop: no architectural effect here */
  /* a1424: adr x0, #0x157658 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1406552)));
  /* a1428: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660524));
  fn1_142560(c);
  /* a142c: cbnz w0, #0xa1440 */
  if ((ARC_W_R(c, 0)) != 0) goto L_a1440;
  /* a1430: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* a1434: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* a1438: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* a143c: ret  */
  return;
L_a1440:;
  /* a1440: ldr x1, [x19] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 19)));
  /* a1444: nop  */
  /* nop: no architectural effect here */
  /* a1448: adr x0, #0x4f88b */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(325771)));
  /* a144c: bl #0xa23d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660560));
  fn1_a23d8(c);
  /* a1450: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(660564));
  fn1_a1454(c);
}

void fn1_a2788(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038593416));
  /* a2788: bti c */
  /* bti: no architectural effect here */
  /* a278c: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* a2790: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_a8790(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038618000));
  /* a8790: bti c */
  /* bti: no architectural effect here */
  /* a8794: mov x0, xzr */
  ARC_X_W(c, 0, ARC_X_R(c, 31));
  /* a8798: mov x1, xzr */
  ARC_X_W(c, 1, ARC_X_R(c, 31));
  /* a879c: ret  */
  return;
}

void fn1_af3a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038645668));
  /* af3a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* af3a8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* af3ac: stp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* af3b0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* af3b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* af3b8: ldr x21, [x0, #0x10] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* af3bc: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* af3c0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* af3c4: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* af3c8: ldurh w9, [x21, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af3cc: sbfx w8, w8, #0, #6 */
  ARC_W_W(c, 8, arc_sext32((((uint32_t)(ARC_W_R(c, 8)) >> 0) & UINT64_C(63)), 6));
  /* af3d0: lsl w9, w9, #0x1a */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 9)) << ((UINT64_C(26)) & 31)));
  /* af3d4: add w8, w8, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) + UINT64_C(1)));
  /* af3d8: cmp w8, w9, asr #26 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ((uint32_t)((int32_t)(ARC_W_R(c, 9)) >> 26)));
  /* af3dc: b.ls #0xaf424 */
  if (ARC_COND(c, 9)) goto L_af424;
  /* af3e0: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af3e4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af3e8: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af3ec: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* af3f0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717812));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af3f4: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af3f8: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* af3fc: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* af400: b.eq #0xaf418 */
  if (ARC_COND(c, 0)) goto L_af418;
  /* af404: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af408: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af40c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af410: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* af414: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717848));
  arc_dispatch(c, ARC_X_R(c, 8));
L_af418:;
  /* af418: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* af41c: cbnz x21, #0xaf50c */
  if ((ARC_X_R(c, 21)) != 0) goto L_af50c;
  /* af420: b #0xaf564 */
  goto L_af564;
L_af424:;
  /* af424: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af428: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af42c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af430: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* af434: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af438: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af43c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af440: b.ls #0xaf46c */
  if (ARC_COND(c, 9)) goto L_af46c;
  /* af444: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af448: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af44c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af450: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af454: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af458: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717916));
  fn1_142878(c);
  /* af45c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af460: cbz x0, #0xaf6c0 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af6c0;
  /* af464: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af468: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af46c:;
  /* af46c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af470: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* af474: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* af478: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* af47c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af480: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af484: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* af488: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(717964));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af48c: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af490: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* af494: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* af498: b.eq #0xaf4b0 */
  if (ARC_COND(c, 0)) goto L_af4b0;
  /* af49c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af4a0: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af4a4: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af4a8: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* af4ac: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718000));
  arc_dispatch(c, ARC_X_R(c, 8));
L_af4b0:;
  /* af4b0: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af4b4: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af4b8: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af4bc: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* af4c0: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af4c4: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af4c8: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af4cc: b.ls #0xaf4f8 */
  if (ARC_COND(c, 9)) goto L_af4f8;
  /* af4d0: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af4d4: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af4d8: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af4dc: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af4e0: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af4e4: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718056));
  fn1_142878(c);
  /* af4e8: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af4ec: cbz x0, #0xaf6c4 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af6c4;
  /* af4f0: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af4f4: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af4f8:;
  /* af4f8: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af4fc: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* af500: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
  /* af504: ldr x21, [x20, #0x20] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(32))));
  /* af508: cbz x21, #0xaf564 */
  if ((ARC_X_R(c, 21)) == 0) goto L_af564;
L_af50c:;
  /* af50c: ldp x8, x9, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* af510: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af514: ldr x22, [x20, #0x18] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 20) + INT64_C(24))));
  /* af518: add x10, x8, x21 */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* af51c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* af520: b.ls #0xaf548 */
  if (ARC_COND(c, 9)) goto L_af548;
  /* af524: lsl x8, x9, #1 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) << ((UINT64_C(1)) & 63)));
  /* af528: add x9, x10, #0x3e0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(992)));
  /* af52c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* af530: csel x1, x8, x9, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* af534: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af538: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718140));
  fn1_142878(c);
  /* af53c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af540: cbz x0, #0xaf6bc */
  if ((ARC_X_R(c, 0)) == 0) goto L_af6bc;
  /* af544: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
L_af548:;
  /* af548: add x0, x0, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* af54c: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* af550: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* af554: bl #0x1449d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718168));
  fn1_1449d8(c);
  /* af558: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af55c: add x8, x8, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 21)));
  /* af560: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_af564:;
  /* af564: ldr x21, [x20, #0x28] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 20) + INT64_C(40))));
  /* af568: ldurh w8, [x20, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 20) + INT64_C(9))));
  /* af56c: ldurh w9, [x21, #9] */
  ARC_W_W(c, 9, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af570: ubfiz w8, w8, #0xa, #6 */
  ARC_W_W(c, 8, ((uint32_t)((((uint32_t)(ARC_W_R(c, 8))) & UINT64_C(63))) << 10));
  /* af574: ubfiz w9, w9, #0xa, #6 */
  ARC_W_W(c, 9, ((uint32_t)((((uint32_t)(ARC_W_R(c, 9))) & UINT64_C(63))) << 10));
  /* af578: cmp w8, w9 */
  (void)arc_sub32(c, ARC_W_R(c, 8), ARC_W_R(c, 9));
  /* af57c: b.ls #0xaf5c8 */
  if (ARC_COND(c, 9)) goto L_af5c8;
  /* af580: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af584: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af588: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af58c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* af590: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718228));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af594: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af598: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* af59c: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* af5a0: b.eq #0xaf6a8 */
  if (ARC_COND(c, 0)) goto L_af6a8;
  /* af5a4: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af5a8: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af5ac: ldr x16, [x8, #0x28] */
  ARC_X_W(c, 16, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* af5b0: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af5b4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* af5b8: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* af5bc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* af5c0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* af5c4: br x16 */
  arc_dispatch(c, ARC_X_R(c, 16)); return;
L_af5c8:;
  /* af5c8: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af5cc: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af5d0: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af5d4: add w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) + UINT64_C(1)));
  /* af5d8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af5dc: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af5e0: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af5e4: b.ls #0xaf610 */
  if (ARC_COND(c, 9)) goto L_af610;
  /* af5e8: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af5ec: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af5f0: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af5f4: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af5f8: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af5fc: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718336));
  fn1_142878(c);
  /* af600: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af604: cbz x0, #0xaf6c8 */
  if ((ARC_X_R(c, 0)) == 0) goto L_af6c8;
  /* af608: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af60c: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af610:;
  /* af610: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af614: ldr x9, [x21] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 21)));
  /* af618: mov w10, #0x28 */
  ARC_W_W(c, 10, UINT64_C(40));
  /* af61c: strb w10, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 10));
  /* af620: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af624: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af628: ldr x8, [x9, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(32))));
  /* af62c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718384));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* af630: ldurh w8, [x21, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 21) + INT64_C(9))));
  /* af634: and w8, w8, #0xc0 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(192)));
  /* af638: cmp w8, #0x40 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(64));
  /* af63c: b.eq #0xaf654 */
  if (ARC_COND(c, 0)) goto L_af654;
  /* af640: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* af644: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* af648: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* af64c: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* af650: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718420));
  arc_dispatch(c, ARC_X_R(c, 8));
L_af654:;
  /* af654: ldp x8, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* af658: ldr w11, [x19, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 19) + INT64_C(32))));
  /* af65c: ldr x0, [x19] */
  ARC_X_W(c, 0, arc_ld64(ARC_X_R(c, 19)));
  /* af660: sub w11, w11, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) - UINT64_C(1)));
  /* af664: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* af668: str w11, [x19, #0x20] */
  arc_st32((ARC_X_R(c, 19) + INT64_C(32)), ARC_W_R(c, 11));
  /* af66c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* af670: b.ls #0xaf69c */
  if (ARC_COND(c, 9)) goto L_af69c;
  /* af674: lsl x9, x10, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* af678: add x8, x8, #0x3e1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(993)));
  /* af67c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* af680: csel x1, x9, x8, hi */
  ARC_X_W(c, 1, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* af684: str x1, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 1));
  /* af688: bl #0x142878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718476));
  fn1_142878(c);
  /* af68c: str x0, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 0));
  /* af690: cbz x0, #0xaf6cc */
  if ((ARC_X_R(c, 0)) == 0) goto L_af6cc;
  /* af694: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* af698: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
L_af69c:;
  /* af69c: str x9, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 9));
  /* af6a0: mov w9, #0x29 */
  ARC_W_W(c, 9, UINT64_C(41));
  /* af6a4: strb w9, [x0, x8] */
  arc_st8((ARC_X_R(c, 0) + ARC_X_R(c, 8)), ARC_W_R(c, 9));
L_af6a8:;
  /* af6a8: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* af6ac: ldp x22, x21, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* af6b0: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* af6b4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* af6b8: ret  */
  return;
L_af6bc:;
  /* af6bc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718528));
  fn1_1427b8(c);
L_af6c0:;
  /* af6c0: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718532));
  fn1_1427b8(c);
L_af6c4:;
  /* af6c4: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718536));
  fn1_1427b8(c);
L_af6c8:;
  /* af6c8: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718540));
  fn1_1427b8(c);
L_af6cc:;
  /* af6cc: bl #0x1427b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(718544));
  fn1_1427b8(c);
}

void fn1_b3f80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038665088));
  /* b3f80: bti c */
  /* bti: no architectural effect here */
  /* b3f84: mov w1, #0x18 */
  ARC_W_W(c, 1, UINT64_C(24));
  /* b3f88: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_b7a50(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038680144));
  /* b7a50: bti c */
  /* bti: no architectural effect here */
  /* b7a54: mov w1, #0x20 */
  ARC_W_W(c, 1, UINT64_C(32));
  /* b7a58: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_ba7a4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038691748));
  /* ba7a4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ba7a8: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ba7ac: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* ba7b0: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ba7b4: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* ba7b8: ldr x21, [x0, #0x1330] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 0) + INT64_C(4912))));
  /* ba7bc: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* ba7c0: ldr x8, [x21, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(8))));
  /* ba7c4: sub x9, x8, #0xfc0 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(4032)));
  /* ba7c8: cmn x9, #0xff1 */
  (void)arc_add64(c, ARC_X_R(c, 9), UINT64_C(4081), 0);
  /* ba7cc: b.hi #0xba7f0 */
  if (ARC_COND(c, 8)) goto L_ba7f0;
  /* ba7d0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* ba7d4: mov w0, #0x1000 */
  ARC_W_W(c, 0, UINT64_C(4096));
  /* ba7d8: bl #0x1428a8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763868));
  fn1_1428a8(c);
  /* ba7dc: cbz x0, #0xba850 */
  if ((ARC_X_R(c, 0)) == 0) goto L_ba850;
  /* ba7e0: mov x8, xzr */
  ARC_X_W(c, 8, ARC_X_R(c, 31));
  /* ba7e4: stp x21, xzr, [x0] */
  { const uint64_t _pa = ARC_X_R(c, 0);
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* ba7e8: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ba7ec: str x0, [x20, #0x1330] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(4912)), ARC_X_R(c, 0));
L_ba7f0:;
  /* ba7f0: add x9, x8, #0x30 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(48)));
  /* ba7f4: add x0, x21, x8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 21) + ARC_X_R(c, 8)));
  /* ba7f8: adrp x8, #0x14c000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1359872)));
  /* ba7fc: add x8, x8, #0x490 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1168)));
  /* ba800: str x9, [x21, #8] */
  arc_st64((ARC_X_R(c, 21) + INT64_C(8)), ARC_X_R(c, 9));
  /* ba804: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* ba808: str x8, [x0, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 0) + INT64_C(16));
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_a, ARC_X_R(c, 8));
  }
  /* ba80c: ldurh w8, [x0, #9] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 0) + INT64_C(9))));
  /* ba810: mov w9, #5 */
  ARC_W_W(c, 9, UINT64_C(5));
  /* ba814: mov w11, #0x540 */
  ARC_W_W(c, 11, UINT64_C(1344));
  /* ba818: strb w9, [x0, #8] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(8)), ARC_W_R(c, 9));
  /* ba81c: adrp x9, #0x4f000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(323584)));
  /* ba820: add x9, x9, #0x8cf */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2255)));
  /* ba824: and w8, w8, #0xf000 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & UINT64_C(61440)));
  /* ba828: stp x10, x9, [x0, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 10));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* ba82c: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* ba830: orr w8, w8, w11 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | ARC_W_R(c, 11)));
  /* ba834: str x9, [x0, #0x20] */
  arc_st64((ARC_X_R(c, 0) + INT64_C(32)), ARC_X_R(c, 9));
  /* ba838: sturh w8, [x0, #9] */
  arc_st16((ARC_X_R(c, 0) + INT64_C(9)), ARC_W_R(c, 8));
  /* ba83c: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ba840: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* ba844: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ba848: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ba84c: ret  */
  return;
L_ba850:;
  /* ba850: bl #0x142488 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(763988));
  fn1_142488(c);
}

void fn1_bd8a8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038704296));
  /* bd8a8: bti c */
  /* bti: no architectural effect here */
  /* bd8ac: b #0x1425a8 */
  fn1_1425a8(c); return;
}

void fn1_cc388(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038764424));
L_cc388:;
  /* cc388: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* cc38c: sub sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(176)));
  /* cc390: stp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* cc394: stp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* cc398: stp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* cc39c: stp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* cc3a0: stp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* cc3a4: stp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* cc3a8: add x29, sp, #0x50 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(80)));
  /* cc3ac: mov w26, #2 */
  ARC_W_W(c, 26, UINT64_C(2));
  /* cc3b0: mov w27, #1 */
  ARC_W_W(c, 27, UINT64_C(1));
  /* cc3b4: mov w28, #4 */
  ARC_W_W(c, 28, UINT64_C(4));
  /* cc3b8: adrp x8, #0x52000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(335872)));
  /* cc3bc: dup v16.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[16] = _t; }
  /* cc3c0: dup v17.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[17] = _t; }
  /* cc3c4: dup v18.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[18] = _t; }
  /* cc3c8: ldr q19, [x8, #0xa80] */
  arc_q_w(c, 19, arc_ld64((ARC_X_R(c, 8) + INT64_C(2688))), arc_ld64((ARC_X_R(c, 8) + INT64_C(2688)) + 8));
  /* cc3cc: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* cc3d0: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* cc3d4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* cc3d8: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* cc3dc: mov x21, #-1 */
  ARC_X_W(c, 21, UINT64_C(18446744073709551615));
  /* cc3e0: stur w3, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 3));
  /* cc3e4: stur q16, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[16].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[16].u64[1]);
  /* cc3e8: stp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, (c)->q[18].u64[0]);
    arc_st64(_pa + 8, (c)->q[18].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* cc3ec: str q19, [sp] */
  arc_st64((c)->sp, (c)->q[19].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[19].u64[1]);
L_cc3f0:;
  /* cc3f0: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_cc3f4:;
  /* cc3f4: sub x8, x20, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) - ARC_X_R(c, 23)));
  /* cc3f8: mov x19, x23 */
  ARC_X_W(c, 19, ARC_X_R(c, 23));
  /* cc3fc: asr x8, x8, #3 */
  ARC_X_W(c, 8, ((uint64_t)((int64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(3)) & 63))));
  /* cc400: subs x9, x8, #2 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2)));
  /* cc404: b.gt #0xcc418 */
  if (ARC_COND(c, 12)) goto L_cc418;
  /* cc408: b.lo #0xccd88 */
  if (ARC_COND(c, 3)) goto L_ccd88;
  /* cc40c: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* cc410: b.ne #0xcc430 */
  if (ARC_COND(c, 1)) goto L_cc430;
  /* cc414: b #0xcccac */
  goto L_cccac;
L_cc418:;
  /* cc418: cmp x8, #3 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(3));
  /* cc41c: b.eq #0xcccc8 */
  if (ARC_COND(c, 0)) goto L_cccc8;
  /* cc420: cmp x8, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(4));
  /* cc424: b.eq #0xccd14 */
  if (ARC_COND(c, 0)) goto L_ccd14;
  /* cc428: cmp x8, #5 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(5));
  /* cc42c: b.eq #0xccbf4 */
  if (ARC_COND(c, 0)) goto L_ccbf4;
L_cc430:;
  /* cc430: cmp x8, #0x17 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(23));
  /* cc434: b.le #0xccdac */
  if (ARC_COND(c, 13)) goto L_ccdac;
  /* cc438: cbz x22, #0xcce28 */
  if ((ARC_X_R(c, 22)) == 0) goto L_cce28;
  /* cc43c: lsr x9, x8, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(1)) & 63)));
  /* cc440: ldur x10, [x20, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cc444: cmp x8, #0x81 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(129));
  /* cc448: add x9, x19, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* cc44c: b.lo #0xcc584 */
  if (ARC_COND(c, 3)) goto L_cc584;
  /* cc450: ldr x8, [x9] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 9)));
  /* cc454: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc458: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc45c: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc460: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cc464: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cc468: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cc46c: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* cc470: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc474: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc478: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc47c: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cc480: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* cc484: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* cc488: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cc48c: csel x10, x10, x11, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cc490: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
  /* cc494: ldp x11, x10, [x9, #-8] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cc498: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cc49c: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cc4a0: ldur x8, [x20, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* cc4a4: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* cc4a8: csel x10, x11, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cc4ac: csel x8, x11, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cc4b0: stur x10, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), ARC_X_R(c, 10));
  /* cc4b4: stur x8, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 8));
  /* cc4b8: ldur x8, [x20, #-0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-16))));
  /* cc4bc: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cc4c0: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc4c4: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc4c8: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc4cc: stur x11, [x20, #-0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-16)), ARC_X_R(c, 11));
  /* cc4d0: ldur x11, [x9, #-8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* cc4d4: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* cc4d8: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cc4dc: csel x10, x10, x11, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cc4e0: str x10, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 10));
  /* cc4e4: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* cc4e8: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cc4ec: stur x8, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 8));
  /* cc4f0: ldr x8, [x9, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* cc4f4: ldur x10, [x20, #-0x18] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* cc4f8: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc4fc: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc500: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc504: stur x11, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), ARC_X_R(c, 11));
  /* cc508: str x8, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), ARC_X_R(c, 8));
  /* cc50c: ldur x8, [x20, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-24))));
  /* cc510: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cc514: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc518: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc51c: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc520: stur x11, [x20, #-0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-24)), ARC_X_R(c, 11));
  /* cc524: ldr x11, [x9, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 9) + INT64_C(8))));
  /* cc528: ldr x10, [x19, #0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* cc52c: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cc530: csel x10, x10, x11, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cc534: str x10, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 10));
  /* cc538: ldp x11, x10, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* cc53c: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cc540: ldur x10, [x9, #-8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-8))));
  /* cc544: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* cc548: csel x12, x11, x8, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cc54c: csel x8, x11, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* cc550: cmp x12, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 10));
  /* cc554: csel x11, x12, x10, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* cc558: csel x12, x12, x10, hi */
  ARC_X_W(c, 12, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 10)));
  /* cc55c: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* cc560: csel x10, x10, x8, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* cc564: csel x8, x8, x11, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* cc568: stur x10, [x9, #-8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cc56c: stp x8, x12, [x9] */
  { const uint64_t _pa = ARC_X_R(c, 9);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 12));
  }
  /* cc570: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* cc574: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cc578: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cc57c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* cc580: b #0xcc5d4 */
  goto L_cc5d4;
L_cc584:;
  /* cc584: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* cc588: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc58c: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc590: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc594: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cc598: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cc59c: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cc5a0: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* cc5a4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc5a8: csel x11, x8, x10, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc5ac: csel x8, x8, x10, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* cc5b0: stur x11, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 11));
  /* cc5b4: ldr x11, [x19] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 19)));
  /* cc5b8: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* cc5bc: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cc5c0: csel x10, x10, x11, lo */
  ARC_X_W(c, 10, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 11)));
  /* cc5c4: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cc5c8: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cc5cc: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* cc5d0: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_cc5d4:;
  /* cc5d4: ldur w9, [x29, #-4] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* cc5d8: sub x22, x22, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) - UINT64_C(1)));
  /* cc5dc: tbnz w9, #0, #0xcc5ec */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_cc5ec;
  /* cc5e0: ldur x9, [x19, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(-8))));
  /* cc5e4: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cc5e8: b.hs #0xccb24 */
  if (ARC_COND(c, 2)) goto L_ccb24;
L_cc5ec:;
  /* cc5ec: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cc5f0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cc5f4: b.hs #0xcc60c */
  if (ARC_COND(c, 2)) goto L_cc60c;
  /* cc5f8: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_cc5fc:;
  /* cc5fc: ldr x10, [x9, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* cc600: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cc604: b.hs #0xcc5fc */
  if (ARC_COND(c, 2)) goto L_cc5fc;
  /* cc608: b #0xcc62c */
  goto L_cc62c;
L_cc60c:;
  /* cc60c: add x10, x19, #8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 19) + UINT64_C(8)));
L_cc610:;
  /* cc610: mov x9, x10 */
  ARC_X_W(c, 9, ARC_X_R(c, 10));
  /* cc614: cmp x10, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 20));
  /* cc618: b.hs #0xcc62c */
  if (ARC_COND(c, 2)) goto L_cc62c;
  /* cc61c: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cc620: ldr x11, [x10], #8 */
  { const uint64_t _a = ARC_X_R(c, 10);
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* cc624: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cc628: b.hs #0xcc610 */
  if (ARC_COND(c, 2)) goto L_cc610;
L_cc62c:;
  /* cc62c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cc630: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
  /* cc634: b.hs #0xcc648 */
  if (ARC_COND(c, 2)) goto L_cc648;
  /* cc638: mov x10, x20 */
  ARC_X_W(c, 10, ARC_X_R(c, 20));
L_cc63c:;
  /* cc63c: ldr x11, [x10, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 10) + INT64_C(-8));
    ARC_X_W(c, 10, ARC_X_R(c, 10) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* cc640: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* cc644: b.lo #0xcc63c */
  if (ARC_COND(c, 3)) goto L_cc63c;
L_cc648:;
  /* cc648: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cc64c: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* cc650: b.hs #0xcc668 */
  if (ARC_COND(c, 2)) goto L_cc668;
  /* cc654: ldr x12, [x10] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 10)));
  /* cc658: ldr x13, [x9] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 9)));
  /* cc65c: mov x11, x9 */
  ARC_X_W(c, 11, ARC_X_R(c, 9));
  /* cc660: str x12, [x11], #8 */
  { const uint64_t _a = ARC_X_R(c, 11);
    ARC_X_W(c, 11, ARC_X_R(c, 11) + INT64_C(8));
    arc_st64(_a, ARC_X_R(c, 12));
  }
  /* cc664: str x13, [x10] */
  arc_st64(ARC_X_R(c, 10), ARC_X_R(c, 13));
L_cc668:;
  /* cc668: sub x12, x10, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 10) - UINT64_C(8)));
  /* cc66c: sub x14, x12, x11 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* cc670: cmp x14, #0x3f1 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(1009));
  /* cc674: b.lt #0xcc7d8 */
  if (ARC_COND(c, 11)) goto L_cc7d8;
  /* cc678: dup v0.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[0] = _t; }
  /* cc67c: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cc680: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* cc684: b #0xcc6b0 */
  goto L_cc6b0;
L_cc688:;
  /* cc688: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* cc68c: cset w15, eq */
  ARC_W_W(c, 15, (ARC_COND(c, 0) ? 1 : 0));
  /* cc690: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* cc694: add x11, x11, x15, lsl #9 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 15)) << 9)));
  /* cc698: csel x15, x4, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 4)) : ARC_X_R(c, 31)));
  /* cc69c: cset w16, eq */
  ARC_W_W(c, 16, (ARC_COND(c, 0) ? 1 : 0));
  /* cc6a0: add x12, x12, x15 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + ARC_X_R(c, 15)));
  /* cc6a4: sub x15, x12, x11 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ARC_X_R(c, 11)));
  /* cc6a8: cmp x15, #0x3f0 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1008));
  /* cc6ac: b.le #0xcc7e8 */
  if (ARC_COND(c, 13)) goto L_cc7e8;
L_cc6b0:;
  /* cc6b0: cbz x14, #0xcc6c0 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cc6c0;
  /* cc6b4: cbz x13, #0xcc720 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cc720;
L_cc6b8:;
  /* cc6b8: cbnz x14, #0xcc794 */
  if ((ARC_X_R(c, 14)) != 0) goto L_cc794;
  /* cc6bc: b #0xcc688 */
  goto L_cc688;
L_cc6c0:;
  /* cc6c0: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cc6c4: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* cc6c8: add x14, x11, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* cc6cc: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cc6d0: mov w15, #0x40 */
  ARC_W_W(c, 15, UINT64_C(64));
L_cc6d4:;
  /* cc6d4: ldp q4, q5, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cc6d8: add v6.2d, v3.2d, v16.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[16].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[16].u64[1];
    (c)->q[6] = _t; }
  /* cc6dc: subs x15, x15, #4 */
  ARC_X_W(c, 15, arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4)));
  /* cc6e0: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* cc6e4: cmhs v4.2d, v4.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[4].u64[0] >= (c)->q[0].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[4].u64[1] >= (c)->q[0].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cc6e8: cmhs v5.2d, v5.2d, v0.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[5].u64[0] >= (c)->q[0].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[5].u64[1] >= (c)->q[0].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cc6ec: and v4.16b, v4.16b, v17.16b */
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
  /* cc6f0: and v5.16b, v5.16b, v17.16b */
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
  /* cc6f4: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cc6f8: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cc6fc: add v3.2d, v3.2d, v18.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[18].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[18].u64[1];
    (c)->q[3] = _t; }
  /* cc700: orr v1.16b, v4.16b, v1.16b */
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
  /* cc704: orr v2.16b, v5.16b, v2.16b */
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
  /* cc708: b.ne #0xcc6d4 */
  if (ARC_COND(c, 1)) goto L_cc6d4;
  /* cc70c: orr v1.16b, v2.16b, v1.16b */
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
  /* cc710: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* cc714: orr v1.8b, v1.8b, v2.8b */
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
  /* cc718: fmov x14, d1 */
  ARC_X_W(c, 14, ARC_DU_R(c, 1));
  /* cc71c: cbnz x13, #0xcc6b8 */
  if ((ARC_X_R(c, 13)) != 0) goto L_cc6b8;
L_cc720:;
  /* cc720: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cc724: movi v2.2d, #0000000000000000 */
  arc_v_clear(c, 2);
  /* cc728: sub x13, x12, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* cc72c: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cc730: mov w15, #0x40 */
  ARC_W_W(c, 15, UINT64_C(64));
L_cc734:;
  /* cc734: ldp q5, q4, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cc738: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* cc73c: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* cc740: sub x15, x15, #4 */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(4)));
  /* cc744: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* cc748: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* cc74c: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* cc750: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* cc754: cmhi v4.2d, v0.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].u64[0] > (c)->q[4].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[0].u64[1] > (c)->q[4].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cc758: cmhi v5.2d, v0.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[0].u64[0] > (c)->q[5].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[0].u64[1] > (c)->q[5].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cc75c: and v4.16b, v4.16b, v7.16b */
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
  /* cc760: and v5.16b, v5.16b, v7.16b */
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
  /* cc764: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cc768: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cc76c: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* cc770: orr v1.16b, v4.16b, v1.16b */
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
  /* cc774: orr v2.16b, v5.16b, v2.16b */
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
  /* cc778: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* cc77c: cbnz x15, #0xcc734 */
  if ((ARC_X_R(c, 15)) != 0) goto L_cc734;
  /* cc780: orr v1.16b, v2.16b, v1.16b */
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
  /* cc784: ext v2.16b, v1.16b, v1.16b, #8 */
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
  /* cc788: orr v1.8b, v1.8b, v2.8b */
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
  /* cc78c: fmov x13, d1 */
  ARC_X_W(c, 13, ARC_DU_R(c, 1));
  /* cc790: cbz x14, #0xcc688 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cc688;
L_cc794:;
  /* cc794: cbz x13, #0xcc688 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cc688;
L_cc798:;
  /* cc798: rbit x15, x13 */
  ARC_X_W(c, 15, arc_rbit64(ARC_X_R(c, 13)));
  /* cc79c: rbit x16, x14 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 14)));
  /* cc7a0: sub x17, x13, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* cc7a4: sub x3, x14, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* cc7a8: and x13, x17, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 17) & ARC_X_R(c, 13)));
  /* cc7ac: clz x15, x15 */
  ARC_X_W(c, 15, arc_clz64(ARC_X_R(c, 15)));
  /* cc7b0: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* cc7b4: and x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) & ARC_X_R(c, 14)));
  /* cc7b8: sub x15, x12, x15, lsl #3 */
  ARC_X_W(c, 15, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cc7bc: ldr x0, [x11, x16, lsl #3] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3))));
  /* cc7c0: ldr x1, [x15] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 15)));
  /* cc7c4: str x1, [x11, x16, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 16)) << 3)), ARC_X_R(c, 1));
  /* cc7c8: str x0, [x15] */
  arc_st64(ARC_X_R(c, 15), ARC_X_R(c, 0));
  /* cc7cc: cbz x13, #0xcc688 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cc688;
  /* cc7d0: cbnz x14, #0xcc798 */
  if ((ARC_X_R(c, 14)) != 0) goto L_cc798;
  /* cc7d4: b #0xcc688 */
  goto L_cc688;
L_cc7d8:;
  /* cc7d8: asr x15, x14, #3 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(3)) & 63))));
  /* cc7dc: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cc7e0: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* cc7e4: b #0xcc80c */
  goto L_cc80c;
L_cc7e8:;
  /* cc7e8: asr x15, x15, #3 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(3)) & 63))));
  /* cc7ec: orr x17, x13, x14 */
  ARC_X_W(c, 17, (ARC_X_R(c, 13) | ARC_X_R(c, 14)));
  /* cc7f0: cbz x17, #0xcc80c */
  if ((ARC_X_R(c, 17)) == 0) goto L_cc80c;
  /* cc7f4: sub x15, x15, #0x3f */
  ARC_X_W(c, 15, (ARC_X_R(c, 15) - UINT64_C(63)));
  /* cc7f8: mov w0, #0x40 */
  ARC_W_W(c, 0, UINT64_C(64));
  /* cc7fc: mov w17, #0x40 */
  ARC_W_W(c, 17, UINT64_C(64));
  /* cc800: cbz x14, #0xcc81c */
  if ((ARC_X_R(c, 14)) == 0) goto L_cc81c;
  /* cc804: cbnz w16, #0xcc8ec */
  if ((ARC_W_R(c, 16)) != 0) goto L_cc8ec;
  /* cc808: b #0xcc9c4 */
  goto L_cc9c4;
L_cc80c:;
  /* cc80c: add x14, x15, #1 */
  ARC_X_W(c, 14, (ARC_X_R(c, 15) + UINT64_C(1)));
  /* cc810: add x15, x14, x14, lsr #63 */
  ARC_X_W(c, 15, (ARC_X_R(c, 14) + ((uint64_t)(ARC_X_R(c, 14)) >> 63)));
  /* cc814: asr x15, x15, #1 */
  ARC_X_W(c, 15, ((uint64_t)((int64_t)(ARC_X_R(c, 15)) >> ((UINT64_C(1)) & 63))));
  /* cc818: sub x0, x14, x15 */
  ARC_X_W(c, 0, (ARC_X_R(c, 14) - ARC_X_R(c, 15)));
L_cc81c:;
  /* cc81c: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* cc820: b.lt #0xcc83c */
  if (ARC_COND(c, 11)) goto L_cc83c;
  /* cc824: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* cc828: b.hs #0xcc844 */
  if (ARC_COND(c, 2)) goto L_cc844;
  /* cc82c: mov x17, xzr */
  ARC_X_W(c, 17, ARC_X_R(c, 31));
  /* cc830: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* cc834: mov x1, x11 */
  ARC_X_W(c, 1, ARC_X_R(c, 11));
  /* cc838: b #0xcc8c0 */
  goto L_cc8c0;
L_cc83c:;
  /* cc83c: mov x14, xzr */
  ARC_X_W(c, 14, ARC_X_R(c, 31));
  /* cc840: b #0xcc8e0 */
  goto L_cc8e0;
L_cc844:;
  /* cc844: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* cc848: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cc84c: and x17, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 17, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* cc850: dup v2.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[2] = _t; }
  /* cc854: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cc858: add x1, x11, x17, lsl #3 */
  ARC_X_W(c, 1, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 3)));
  /* cc85c: add x14, x11, #0x10 */
  ARC_X_W(c, 14, (ARC_X_R(c, 11) + UINT64_C(16)));
  /* cc860: mov x3, x17 */
  ARC_X_W(c, 3, ARC_X_R(c, 17));
L_cc864:;
  /* cc864: ldp q4, q5, [x14, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 14) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cc868: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* cc86c: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* cc870: subs x3, x3, #4 */
  ARC_X_W(c, 3, arc_sub64(c, ARC_X_R(c, 3), UINT64_C(4)));
  /* cc874: add x14, x14, #0x20 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) + UINT64_C(32)));
  /* cc878: cmhs v4.2d, v4.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[4].u64[0] >= (c)->q[2].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[4].u64[1] >= (c)->q[2].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cc87c: cmhs v5.2d, v5.2d, v2.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[5].u64[0] >= (c)->q[2].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[5].u64[1] >= (c)->q[2].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cc880: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* cc884: and v4.16b, v4.16b, v7.16b */
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
  /* cc888: and v5.16b, v5.16b, v7.16b */
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
  /* cc88c: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cc890: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cc894: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* cc898: orr v0.16b, v4.16b, v0.16b */
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
  /* cc89c: orr v1.16b, v5.16b, v1.16b */
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
  /* cc8a0: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* cc8a4: b.ne #0xcc864 */
  if (ARC_COND(c, 1)) goto L_cc864;
  /* cc8a8: orr v0.16b, v1.16b, v0.16b */
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
  /* cc8ac: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* cc8b0: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* cc8b4: orr v0.8b, v0.8b, v1.8b */
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
  /* cc8b8: fmov x14, d0 */
  ARC_X_W(c, 14, ARC_DU_R(c, 0));
  /* cc8bc: b.eq #0xcc8e0 */
  if (ARC_COND(c, 0)) goto L_cc8e0;
L_cc8c0:;
  /* cc8c0: ldr x3, [x1], #8 */
  { const uint64_t _a = ARC_X_R(c, 1);
    ARC_X_W(c, 1, ARC_X_R(c, 1) + INT64_C(8));
    ARC_X_W(c, 3, arc_ld64(_a));
  }
  /* cc8c4: cmp x3, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 8));
  /* cc8c8: cset w3, hs */
  ARC_W_W(c, 3, (ARC_COND(c, 2) ? 1 : 0));
  /* cc8cc: lsl x3, x3, x17 */
  ARC_X_W(c, 3, ((uint64_t)(ARC_X_R(c, 3)) << ((ARC_X_R(c, 17)) & 63)));
  /* cc8d0: add x17, x17, #1 */
  ARC_X_W(c, 17, (ARC_X_R(c, 17) + UINT64_C(1)));
  /* cc8d4: cmp x15, x17 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 17));
  /* cc8d8: orr x14, x3, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 3) | ARC_X_R(c, 14)));
  /* cc8dc: b.ne #0xcc8c0 */
  if (ARC_COND(c, 1)) goto L_cc8c0;
L_cc8e0:;
  /* cc8e0: mov x17, x15 */
  ARC_X_W(c, 17, ARC_X_R(c, 15));
  /* cc8e4: mov x15, x0 */
  ARC_X_W(c, 15, ARC_X_R(c, 0));
  /* cc8e8: cbz w16, #0xcc9c4 */
  if ((ARC_W_R(c, 16)) == 0) goto L_cc9c4;
L_cc8ec:;
  /* cc8ec: cmp x15, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(1));
  /* cc8f0: b.lt #0xcc90c */
  if (ARC_COND(c, 11)) goto L_cc90c;
  /* cc8f4: cmp x15, #4 */
  (void)arc_sub64(c, ARC_X_R(c, 15), UINT64_C(4));
  /* cc8f8: b.hs #0xcc920 */
  if (ARC_COND(c, 2)) goto L_cc920;
  /* cc8fc: mov x16, xzr */
  ARC_X_W(c, 16, ARC_X_R(c, 31));
  /* cc900: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* cc904: mov x0, x12 */
  ARC_X_W(c, 0, ARC_X_R(c, 12));
  /* cc908: b #0xcc9a4 */
  goto L_cc9a4;
L_cc90c:;
  /* cc90c: cmp x14, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 14), UINT64_C(0));
  /* cc910: csel x13, x17, xzr, eq */
  ARC_X_W(c, 13, (ARC_COND(c, 0) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 31)));
  /* cc914: cbz x14, #0xccb1c */
  if ((ARC_X_R(c, 14)) == 0) goto L_ccb1c;
  /* cc918: sub x12, x12, x15, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cc91c: b #0xcca34 */
  goto L_cca34;
L_cc920:;
  /* cc920: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* cc924: movi v1.2d, #0000000000000000 */
  arc_v_clear(c, 1);
  /* cc928: and x16, x15, #0x7ffffffffffffffc */
  ARC_X_W(c, 16, (ARC_X_R(c, 15) & UINT64_C(9223372036854775804)));
  /* cc92c: dup v2.2d, x8 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 8));
    _t.u64[1] = (ARC_X_R(c, 8));
    (c)->q[2] = _t; }
  /* cc930: mov v3.16b, v19.16b */
  (c)->q[3] = (c)->q[19];
  /* cc934: sub x0, x12, x16, lsl #3 */
  ARC_X_W(c, 0, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* cc938: sub x13, x12, #8 */
  ARC_X_W(c, 13, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* cc93c: mov x1, x16 */
  ARC_X_W(c, 1, ARC_X_R(c, 16));
L_cc940:;
  /* cc940: ldp q5, q4, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 5, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 4, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* cc944: dup v6.2d, x26 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 26));
    _t.u64[1] = (ARC_X_R(c, 26));
    (c)->q[6] = _t; }
  /* cc948: dup v7.2d, x27 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 27));
    _t.u64[1] = (ARC_X_R(c, 27));
    (c)->q[7] = _t; }
  /* cc94c: sub x1, x1, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) - UINT64_C(4)));
  /* cc950: sub x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) - UINT64_C(32)));
  /* cc954: ext v4.16b, v4.16b, v4.16b, #8 */
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
  /* cc958: ext v5.16b, v5.16b, v5.16b, #8 */
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
  /* cc95c: add v6.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[6] = _t; }
  /* cc960: cmhi v4.2d, v2.2d, v4.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[2].u64[0] > (c)->q[4].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[2].u64[1] > (c)->q[4].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[4] = _t; }
  /* cc964: cmhi v5.2d, v2.2d, v5.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = ((c)->q[2].u64[0] > (c)->q[5].u64[0]) ? (uint64_t)~(uint64_t)0 : 0;
    _t.u64[1] = ((c)->q[2].u64[1] > (c)->q[5].u64[1]) ? (uint64_t)~(uint64_t)0 : 0;
    (c)->q[5] = _t; }
  /* cc968: and v4.16b, v4.16b, v7.16b */
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
  /* cc96c: and v5.16b, v5.16b, v7.16b */
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
  /* cc970: ushl v4.2d, v4.2d, v3.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[4].u64[0], (int8_t)(c)->q[3].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[4].u64[1], (int8_t)(c)->q[3].u64[1]);
    (c)->q[4] = _t; }
  /* cc974: ushl v5.2d, v5.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = arc_ushl64((c)->q[5].u64[0], (int8_t)(c)->q[6].u64[0]);
    _t.u64[1] = arc_ushl64((c)->q[5].u64[1], (int8_t)(c)->q[6].u64[1]);
    (c)->q[5] = _t; }
  /* cc978: dup v6.2d, x28 */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (ARC_X_R(c, 28));
    _t.u64[1] = (ARC_X_R(c, 28));
    (c)->q[6] = _t; }
  /* cc97c: orr v0.16b, v4.16b, v0.16b */
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
  /* cc980: orr v1.16b, v5.16b, v1.16b */
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
  /* cc984: add v3.2d, v3.2d, v6.2d */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u64[0] = (c)->q[3].u64[0] + (c)->q[6].u64[0];
    _t.u64[1] = (c)->q[3].u64[1] + (c)->q[6].u64[1];
    (c)->q[3] = _t; }
  /* cc988: cbnz x1, #0xcc940 */
  if ((ARC_X_R(c, 1)) != 0) goto L_cc940;
  /* cc98c: orr v0.16b, v1.16b, v0.16b */
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
  /* cc990: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cc994: ext v1.16b, v0.16b, v0.16b, #8 */
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
  /* cc998: orr v0.8b, v0.8b, v1.8b */
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
  /* cc99c: fmov x13, d0 */
  ARC_X_W(c, 13, ARC_DU_R(c, 0));
  /* cc9a0: b.eq #0xcc9c4 */
  if (ARC_COND(c, 0)) goto L_cc9c4;
L_cc9a4:;
  /* cc9a4: ldr x1, [x0], #0xfffffffffffffff8 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(-8));
    ARC_X_W(c, 1, arc_ld64(_a));
  }
  /* cc9a8: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* cc9ac: cset w1, lo */
  ARC_W_W(c, 1, (ARC_COND(c, 3) ? 1 : 0));
  /* cc9b0: lsl x1, x1, x16 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) << ((ARC_X_R(c, 16)) & 63)));
  /* cc9b4: add x16, x16, #1 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1)));
  /* cc9b8: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cc9bc: orr x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) | ARC_X_R(c, 13)));
  /* cc9c0: b.ne #0xcc9a4 */
  if (ARC_COND(c, 1)) goto L_cc9a4;
L_cc9c4:;
  /* cc9c4: cbz x14, #0xcca08 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cca08;
  /* cc9c8: cbz x13, #0xcca08 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cca08;
L_cc9cc:;
  /* cc9cc: rbit x16, x13 */
  ARC_X_W(c, 16, arc_rbit64(ARC_X_R(c, 13)));
  /* cc9d0: rbit x0, x14 */
  ARC_X_W(c, 0, arc_rbit64(ARC_X_R(c, 14)));
  /* cc9d4: sub x1, x13, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 13) - UINT64_C(1)));
  /* cc9d8: sub x4, x14, #1 */
  ARC_X_W(c, 4, (ARC_X_R(c, 14) - UINT64_C(1)));
  /* cc9dc: and x13, x1, x13 */
  ARC_X_W(c, 13, (ARC_X_R(c, 1) & ARC_X_R(c, 13)));
  /* cc9e0: clz x16, x16 */
  ARC_X_W(c, 16, arc_clz64(ARC_X_R(c, 16)));
  /* cc9e4: clz x0, x0 */
  ARC_X_W(c, 0, arc_clz64(ARC_X_R(c, 0)));
  /* cc9e8: and x14, x4, x14 */
  ARC_X_W(c, 14, (ARC_X_R(c, 4) & ARC_X_R(c, 14)));
  /* cc9ec: sub x16, x12, x16, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* cc9f0: ldr x5, [x11, x0, lsl #3] */
  ARC_X_W(c, 5, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 3))));
  /* cc9f4: ldr x3, [x16] */
  ARC_X_W(c, 3, arc_ld64(ARC_X_R(c, 16)));
  /* cc9f8: str x3, [x11, x0, lsl #3] */
  arc_st64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 0)) << 3)), ARC_X_R(c, 3));
  /* cc9fc: str x5, [x16] */
  arc_st64(ARC_X_R(c, 16), ARC_X_R(c, 5));
  /* cca00: cbz x13, #0xcca08 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cca08;
  /* cca04: cbnz x14, #0xcc9cc */
  if ((ARC_X_R(c, 14)) != 0) goto L_cc9cc;
L_cca08:;
  /* cca08: cmp x13, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 13), UINT64_C(0));
  /* cca0c: csel x15, x15, xzr, eq */
  ARC_X_W(c, 15, (ARC_COND(c, 0) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 31)));
  /* cca10: sub x12, x12, x15, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 15)) << 3)));
  /* cca14: cbnz x14, #0xcca34 */
  if ((ARC_X_R(c, 14)) != 0) goto L_cca34;
  /* cca18: add x23, x11, x17, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 17)) << 3)));
  /* cca1c: cbnz x13, #0xcca6c */
  if ((ARC_X_R(c, 13)) != 0) goto L_cca6c;
  /* cca20: b #0xcca98 */
  goto L_cca98;
L_cca24:;
  /* cca24: lsl x13, x21, x13 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 21)) << ((ARC_X_R(c, 13)) & 63)));
  /* cca28: sub x12, x12, #8 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) - UINT64_C(8)));
  /* cca2c: bic x14, x14, x13 */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & (~ARC_X_R(c, 13))));
  /* cca30: cbz x14, #0xcca94 */
  if ((ARC_X_R(c, 14)) == 0) goto L_cca94;
L_cca34:;
  /* cca34: clz x13, x14 */
  ARC_X_W(c, 13, arc_clz64(ARC_X_R(c, 14)));
  /* cca38: eor x13, x13, #0x3f */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) ^ UINT64_C(63)));
  /* cca3c: add x15, x11, x13, lsl #3 */
  ARC_X_W(c, 15, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 13)) << 3)));
  /* cca40: cmp x12, x15 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* cca44: b.eq #0xcca24 */
  if (ARC_COND(c, 0)) goto L_cca24;
  /* cca48: ldr x16, [x12] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 12)));
  /* cca4c: ldr x17, [x15] */
  ARC_X_W(c, 17, arc_ld64(ARC_X_R(c, 15)));
  /* cca50: str x16, [x15] */
  arc_st64(ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cca54: str x17, [x12] */
  arc_st64(ARC_X_R(c, 12), ARC_X_R(c, 17));
  /* cca58: b #0xcca24 */
  goto L_cca24;
L_cca5c:;
  /* cca5c: lsl x11, x21, x11 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 21)) << ((ARC_X_R(c, 11)) & 63)));
  /* cca60: add x23, x23, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* cca64: bic x13, x13, x11 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & (~ARC_X_R(c, 11))));
  /* cca68: cbz x13, #0xcca98 */
  if ((ARC_X_R(c, 13)) == 0) goto L_cca98;
L_cca6c:;
  /* cca6c: clz x11, x13 */
  ARC_X_W(c, 11, arc_clz64(ARC_X_R(c, 13)));
  /* cca70: eor x11, x11, #0x3f */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) ^ UINT64_C(63)));
  /* cca74: sub x14, x12, x11, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 12) - ((uint64_t)(ARC_X_R(c, 11)) << 3)));
  /* cca78: cmp x23, x14 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 14));
  /* cca7c: b.eq #0xcca5c */
  if (ARC_COND(c, 0)) goto L_cca5c;
  /* cca80: ldr x15, [x23] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 23)));
  /* cca84: ldr x16, [x14] */
  ARC_X_W(c, 16, arc_ld64(ARC_X_R(c, 14)));
  /* cca88: str x15, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* cca8c: str x16, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 16));
  /* cca90: b #0xcca5c */
  goto L_cca5c;
L_cca94:;
  /* cca94: add x23, x12, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 12) + UINT64_C(8)));
L_cca98:;
  /* cca98: sub x24, x23, #8 */
  ARC_X_W(c, 24, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* cca9c: cmp x19, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 24));
  /* ccaa0: b.eq #0xccaac */
  if (ARC_COND(c, 0)) goto L_ccaac;
  /* ccaa4: ldr x11, [x24] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 24)));
  /* ccaa8: str x11, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 11));
L_ccaac:;
  /* ccaac: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* ccab0: str x8, [x24] */
  arc_st64(ARC_X_R(c, 24), ARC_X_R(c, 8));
  /* ccab4: b.lo #0xccaec */
  if (ARC_COND(c, 3)) goto L_ccaec;
  /* ccab8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ccabc: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* ccac0: bl #0xd1bd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(838340));
  fn1_d1bd0(c);
  /* ccac4: mov w25, w0 */
  ARC_W_W(c, 25, ARC_W_R(c, 0));
  /* ccac8: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* ccacc: mov x1, x20 */
  ARC_X_W(c, 1, ARC_X_R(c, 20));
  /* ccad0: bl #0xd1bd0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(838356));
  fn1_d1bd0(c);
  /* ccad4: tbnz w0, #0, #0xccbd8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) != 0) goto L_ccbd8;
  /* ccad8: ldp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 18, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ccadc: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* ccae0: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* ccae4: ldr q19, [sp] */
  arc_q_w(c, 19, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* ccae8: tbnz w25, #0, #0xcc3f4 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) != 0) goto L_cc3f4;
L_ccaec:;
  /* ccaec: ldur w8, [x29, #-4] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ccaf0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ccaf4: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* ccaf8: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* ccafc: and w3, w8, #1 */
  ARC_W_W(c, 3, (ARC_W_R(c, 8) & UINT64_C(1)));
  /* ccb00: bl #0xcc388 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(838404));
  fn1_cc388(c);
  /* ccb04: ldp q19, q18, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_q_w(c, 19, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 18, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ccb08: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* ccb0c: ldr q17, [sp, #0x20] */
  arc_q_w(c, 17, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* ccb10: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* ccb14: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ccb18: b #0xcc3f4 */
  goto L_cc3f4;
L_ccb1c:;
  /* ccb1c: add x23, x11, x13, lsl #3 */
  ARC_X_W(c, 23, (ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 13)) << 3)));
  /* ccb20: b #0xcca98 */
  goto L_cca98;
L_ccb24:;
  /* ccb24: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ccb28: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ccb2c: b.hs #0xccb44 */
  if (ARC_COND(c, 2)) goto L_ccb44;
  /* ccb30: mov x23, x19 */
  ARC_X_W(c, 23, ARC_X_R(c, 19));
L_ccb34:;
  /* ccb34: ldr x9, [x23, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* ccb38: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ccb3c: b.hs #0xccb34 */
  if (ARC_COND(c, 2)) goto L_ccb34;
  /* ccb40: b #0xccb64 */
  goto L_ccb64;
L_ccb44:;
  /* ccb44: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
L_ccb48:;
  /* ccb48: mov x23, x9 */
  ARC_X_W(c, 23, ARC_X_R(c, 9));
  /* ccb4c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* ccb50: b.hs #0xccb64 */
  if (ARC_COND(c, 2)) goto L_ccb64;
  /* ccb54: mov x9, x23 */
  ARC_X_W(c, 9, ARC_X_R(c, 23));
  /* ccb58: ldr x10, [x9], #8 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* ccb5c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ccb60: b.hs #0xccb48 */
  if (ARC_COND(c, 2)) goto L_ccb48;
L_ccb64:;
  /* ccb64: cmp x23, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 20));
  /* ccb68: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
  /* ccb6c: b.hs #0xccb80 */
  if (ARC_COND(c, 2)) goto L_ccb80;
  /* ccb70: mov x9, x20 */
  ARC_X_W(c, 9, ARC_X_R(c, 20));
L_ccb74:;
  /* ccb74: ldr x10, [x9, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* ccb78: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ccb7c: b.lo #0xccb74 */
  if (ARC_COND(c, 3)) goto L_ccb74;
L_ccb80:;
  /* ccb80: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* ccb84: b.hs #0xccbb8 */
  if (ARC_COND(c, 2)) goto L_ccbb8;
  /* ccb88: ldr x10, [x23] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 23)));
  /* ccb8c: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
L_ccb90:;
  /* ccb90: str x11, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 11));
  /* ccb94: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_ccb98:;
  /* ccb98: ldr x10, [x23, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 23, ARC_X_R(c, 23) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_a));
  }
  /* ccb9c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ccba0: b.hs #0xccb98 */
  if (ARC_COND(c, 2)) goto L_ccb98;
L_ccba4:;
  /* ccba4: ldr x11, [x9, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(-8));
    ARC_X_W(c, 11, arc_ld64(_a));
  }
  /* ccba8: cmp x8, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 11));
  /* ccbac: b.lo #0xccba4 */
  if (ARC_COND(c, 3)) goto L_ccba4;
  /* ccbb0: cmp x23, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 9));
  /* ccbb4: b.lo #0xccb90 */
  if (ARC_COND(c, 3)) goto L_ccb90;
L_ccbb8:;
  /* ccbb8: sub x9, x23, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 23) - UINT64_C(8)));
  /* ccbbc: cmp x19, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* ccbc0: b.eq #0xccbcc */
  if (ARC_COND(c, 0)) goto L_ccbcc;
  /* ccbc4: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* ccbc8: str x10, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 10));
L_ccbcc:;
  /* ccbcc: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ccbd0: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ccbd4: b #0xcc3f4 */
  goto L_cc3f4;
L_ccbd8:;
  /* ccbd8: ldp q18, q17, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_q_w(c, 18, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 17, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* ccbdc: mov x20, x24 */
  ARC_X_W(c, 20, ARC_X_R(c, 24));
  /* ccbe0: ldur q16, [x29, #-0x20] */
  arc_q_w(c, 16, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))), arc_ld64((ARC_X_R(c, 29) + INT64_C(-32)) + 8));
  /* ccbe4: ldr q19, [sp] */
  arc_q_w(c, 19, arc_ld64((c)->sp), arc_ld64((c)->sp + 8));
  /* ccbe8: mov x4, #-0x200 */
  ARC_X_W(c, 4, UINT64_C(18446744073709551104));
  /* ccbec: tbz w25, #0, #0xcc3f0 */
  if (((ARC_W_R(c, 25)) >> 0 & 1) == 0) goto L_cc3f0;
  /* ccbf0: b #0xccd88 */
  goto L_ccd88;
L_ccbf4:;
  /* ccbf4: ldp x8, x9, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* ccbf8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ccbfc: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ccc00: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ccc04: stp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* ccc08: ldr x8, [x19, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(24))));
  /* ccc0c: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ccc10: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ccc14: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ccc18: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ccc1c: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* ccc20: str x8, [x19, #0x18] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(24)), ARC_X_R(c, 8));
  /* ccc24: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ccc28: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ccc2c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ccc30: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ccc34: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ccc38: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* ccc3c: ldp x9, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ccc40: ldr x11, [x19, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ccc44: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ccc48: csel x9, x9, x10, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* ccc4c: csel x8, x8, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* ccc50: stp x9, x8, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* ccc54: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ccc58: cmp x11, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 8));
  /* ccc5c: csel x9, x11, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* ccc60: csel x8, x11, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 8)));
  /* ccc64: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* ccc68: ldp x11, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 11, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ccc6c: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ccc70: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* ccc74: csel x12, x10, x9, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* ccc78: csel x10, x10, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* ccc7c: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* ccc80: csel x9, x9, x11, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* ccc84: csel x11, x12, x11, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* ccc88: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* ccc8c: csel x12, x10, x8, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ccc90: csel x10, x10, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ccc94: cmp x12, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 11));
  /* ccc98: csel x8, x8, x11, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 11)));
  /* ccc9c: stp x9, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* ccca0: csel x8, x12, x11, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 11)));
  /* ccca4: stp x8, x10, [x19, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* ccca8: b #0xccd88 */
  goto L_ccd88;
L_cccac:;
  /* cccac: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cccb0: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* cccb4: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cccb8: b.hs #0xccd88 */
  if (ARC_COND(c, 2)) goto L_ccd88;
  /* cccbc: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* cccc0: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* cccc4: b #0xccd88 */
  goto L_ccd88;
L_cccc8:;
  /* cccc8: ldr x8, [x19, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ccccc: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cccd0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cccd4: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cccd8: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cccdc: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* ccce0: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* ccce4: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ccce8: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* cccec: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* cccf0: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cccf4: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* cccf8: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* cccfc: ldp x9, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* ccd00: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* ccd04: csel x9, x9, x10, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* ccd08: csel x8, x8, x10, hi */
  ARC_X_W(c, 8, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* ccd0c: str x9, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 9));
  /* ccd10: b #0xccd84 */
  goto L_ccd84;
L_ccd14:;
  /* ccd14: ldp x10, x8, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* ccd18: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ccd1c: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ccd20: csel x11, x9, x8, hi */
  ARC_X_W(c, 11, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ccd24: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ccd28: str x11, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 11));
  /* ccd2c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
  /* ccd30: ldur x8, [x20, #-8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ccd34: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* ccd38: csel x9, x10, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ccd3c: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ccd40: stur x9, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 9));
  /* ccd44: ldr x9, [x19] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 19)));
  /* ccd48: cmp x9, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* ccd4c: csel x10, x9, x8, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ccd50: csel x8, x9, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 8)));
  /* ccd54: stp x8, x10, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 10));
  }
  /* ccd58: ldr x8, [x19, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* ccd5c: ldur x9, [x20, #-8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(-8))));
  /* ccd60: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* ccd64: csel x10, x8, x9, hi */
  ARC_X_W(c, 10, (ARC_COND(c, 8) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ccd68: csel x8, x8, x9, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 9)));
  /* ccd6c: stur x10, [x20, #-8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(-8)), ARC_X_R(c, 10));
  /* ccd70: ldr x10, [x19, #8] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* ccd74: cmp x10, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 8));
  /* ccd78: csel x9, x10, x8, hi */
  ARC_X_W(c, 9, (ARC_COND(c, 8) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ccd7c: csel x8, x10, x8, lo */
  ARC_X_W(c, 8, (ARC_COND(c, 3) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* ccd80: str x9, [x19, #0x10] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(16)), ARC_X_R(c, 9));
L_ccd84:;
  /* ccd84: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
L_ccd88:;
  /* ccd88: ldp x20, x19, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ccd8c: ldp x22, x21, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ccd90: ldp x24, x23, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* ccd94: ldp x26, x25, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* ccd98: ldp x28, x27, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* ccd9c: ldp x29, x30, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ccda0: add sp, sp, #0xb0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(176)));
  /* ccda4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ccda8: ret  */
  return;
L_ccdac:;
  /* ccdac: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* ccdb0: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* ccdb4: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ccdb8: ccmp x9, x20, #4, ne */
  if (ARC_COND(c, 1)) { (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20)); }
  else { (c)->nf = 0; (c)->zf = 1;
          (c)->cf = 0; (c)->vf = 0; }
  /* ccdbc: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* ccdc0: tbz w10, #0, #0xccffc */
  if (((ARC_W_R(c, 10)) >> 0 & 1) == 0) goto L_ccffc;
  /* ccdc4: tbnz w8, #0, #0xccd88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ccd88;
  /* ccdc8: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* ccdcc: mov x10, x19 */
  ARC_X_W(c, 10, ARC_X_R(c, 19));
  /* ccdd0: b #0xccdec */
  goto L_ccdec;
L_ccdd4:;
  /* ccdd4: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_ccdd8:;
  /* ccdd8: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
L_ccddc:;
  /* ccddc: add x9, x10, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) + UINT64_C(8)));
  /* ccde0: add x8, x8, #8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* ccde4: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* ccde8: b.eq #0xccd88 */
  if (ARC_COND(c, 0)) goto L_ccd88;
L_ccdec:;
  /* ccdec: ldp x12, x11, [x10] */
  { const uint64_t _pa = ARC_X_R(c, 10);
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* ccdf0: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* ccdf4: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* ccdf8: b.hs #0xccddc */
  if (ARC_COND(c, 2)) goto L_ccddc;
  /* ccdfc: mov x13, x8 */
  ARC_X_W(c, 13, ARC_X_R(c, 8));
L_cce00:;
  /* cce00: subs x9, x13, #8 */
  ARC_X_W(c, 9, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(8)));
  /* cce04: str x12, [x19, x13] */
  arc_st64((ARC_X_R(c, 19) + ARC_X_R(c, 13)), ARC_X_R(c, 12));
  /* cce08: b.eq #0xccdd4 */
  if (ARC_COND(c, 0)) goto L_ccdd4;
  /* cce0c: add x12, x19, x13 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ARC_X_R(c, 13)));
  /* cce10: mov x13, x9 */
  ARC_X_W(c, 13, ARC_X_R(c, 9));
  /* cce14: ldur x12, [x12, #-0x10] */
  ARC_X_W(c, 12, arc_ld64((ARC_X_R(c, 12) + INT64_C(-16))));
  /* cce18: cmp x11, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 12));
  /* cce1c: b.lo #0xcce00 */
  if (ARC_COND(c, 3)) goto L_cce00;
  /* cce20: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* cce24: b #0xccdd8 */
  goto L_ccdd8;
L_cce28:;
  /* cce28: cmp x19, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 19), ARC_X_R(c, 20));
  /* cce2c: b.eq #0xccd88 */
  if (ARC_COND(c, 0)) goto L_ccd88;
  /* cce30: lsr x9, x9, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* cce34: mov x10, x9 */
  ARC_X_W(c, 10, ARC_X_R(c, 9));
  /* cce38: b #0xcce4c */
  goto L_cce4c;
L_cce3c:;
  /* cce3c: str x13, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 13));
L_cce40:;
  /* cce40: cmp x10, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(0));
  /* cce44: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* cce48: b.le #0xccf1c */
  if (ARC_COND(c, 13)) goto L_ccf1c;
L_cce4c:;
  /* cce4c: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cce50: b.lo #0xcce40 */
  if (ARC_COND(c, 3)) goto L_cce40;
  /* cce54: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* cce58: lsl x11, x10, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 10)) << ((UINT64_C(1)) & 63)));
  /* cce5c: bfi x12, x10, #1, #0x3e */
  ARC_X_W(c, 12, (((uint64_t)(ARC_X_R(c, 12)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 10))) & UINT64_C(4611686018427387903)) << 1)));
  /* cce60: add x13, x11, #2 */
  ARC_X_W(c, 13, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* cce64: add x11, x19, x12, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 12)) << 3)));
  /* cce68: cmp x13, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 8));
  /* cce6c: b.ge #0xcce90 */
  if (ARC_COND(c, 10)) goto L_cce90;
  /* cce70: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* cce74: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* cce78: ldr x16, [x14, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 14) + INT64_C(8));
    ARC_X_W(c, 14, ARC_X_R(c, 14) + INT64_C(8));
    ARC_X_W(c, 16, arc_ld64(_a));
  }
  /* cce7c: cmp x15, x16 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 16));
  /* cce80: csel x15, x15, x16, hi */
  ARC_X_W(c, 15, (ARC_COND(c, 8) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 16)));
  /* cce84: csel x11, x14, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 14)) : ARC_X_R(c, 11)));
  /* cce88: csel x12, x13, x12, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 13)) : ARC_X_R(c, 12)));
  /* cce8c: b #0xcce94 */
  goto L_cce94;
L_cce90:;
  /* cce90: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
L_cce94:;
  /* cce94: add x14, x19, x10, lsl #3 */
  ARC_X_W(c, 14, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* cce98: ldr x13, [x14] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 14)));
  /* cce9c: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* ccea0: b.hs #0xccecc */
  if (ARC_COND(c, 2)) goto L_ccecc;
  /* ccea4: b #0xcce40 */
  goto L_cce40;
L_ccea8:;
  /* ccea8: mov x17, x11 */
  ARC_X_W(c, 17, ARC_X_R(c, 11));
  /* cceac: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* cceb0: ldr x0, [x17, #8]! */
  { const uint64_t _a = (ARC_X_R(c, 17) + INT64_C(8));
    ARC_X_W(c, 17, ARC_X_R(c, 17) + INT64_C(8));
    ARC_X_W(c, 0, arc_ld64(_a));
  }
  /* cceb4: cmp x15, x0 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 0));
  /* cceb8: csel x15, x15, x0, hi */
  ARC_X_W(c, 15, (ARC_COND(c, 8) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 0)));
  /* ccebc: csel x11, x17, x11, lo */
  ARC_X_W(c, 11, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 11)));
  /* ccec0: csel x12, x12, x16, lo */
  ARC_X_W(c, 12, (ARC_COND(c, 3) ? (ARC_X_R(c, 12)) : ARC_X_R(c, 16)));
  /* ccec4: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* ccec8: b.lo #0xcce3c */
  if (ARC_COND(c, 3)) goto L_cce3c;
L_ccecc:;
  /* ccecc: cmp x9, x12 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* cced0: str x15, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 15));
  /* cced4: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* cced8: b.lt #0xcce3c */
  if (ARC_COND(c, 11)) goto L_cce3c;
  /* ccedc: mov w16, #1 */
  ARC_W_W(c, 16, UINT64_C(1));
  /* ccee0: lsl x11, x12, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 12)) << ((UINT64_C(1)) & 63)));
  /* ccee4: bfi x16, x12, #1, #0x3e */
  ARC_X_W(c, 16, (((uint64_t)(ARC_X_R(c, 16)) & UINT64_C(9223372036854775809)) | ((((uint64_t)(ARC_X_R(c, 12))) & UINT64_C(4611686018427387903)) << 1)));
  /* ccee8: add x12, x11, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 11) + UINT64_C(2)));
  /* cceec: add x11, x19, x16, lsl #3 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 16)) << 3)));
  /* ccef0: cmp x12, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 12), ARC_X_R(c, 8));
  /* ccef4: b.lt #0xccea8 */
  if (ARC_COND(c, 11)) goto L_ccea8;
  /* ccef8: ldr x15, [x11] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 11)));
  /* ccefc: mov x12, x16 */
  ARC_X_W(c, 12, ARC_X_R(c, 16));
  /* ccf00: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* ccf04: b.hs #0xccecc */
  if (ARC_COND(c, 2)) goto L_ccecc;
  /* ccf08: b #0xcce3c */
  goto L_cce3c;
L_ccf0c:;
  /* ccf0c: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
L_ccf10:;
  /* ccf10: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* ccf14: sub x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* ccf18: b.le #0xccd88 */
  if (ARC_COND(c, 13)) goto L_ccd88;
L_ccf1c:;
  /* ccf1c: sub x9, x8, #2 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) - UINT64_C(2)));
  /* ccf20: ldr x10, [x19] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 19)));
  /* ccf24: mov x13, xzr */
  ARC_X_W(c, 13, ARC_X_R(c, 31));
  /* ccf28: lsr x11, x9, #1 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* ccf2c: mov x12, x19 */
  ARC_X_W(c, 12, ARC_X_R(c, 19));
  /* ccf30: b #0xccf5c */
  goto L_ccf5c;
L_ccf34:;
  /* ccf34: ldr x13, [x16, #0x10]! */
  { const uint64_t _a = (ARC_X_R(c, 16) + INT64_C(16));
    ARC_X_W(c, 16, ARC_X_R(c, 16) + INT64_C(16));
    ARC_X_W(c, 13, arc_ld64(_a));
  }
  /* ccf38: ldur x15, [x16, #-8] */
  ARC_X_W(c, 15, arc_ld64((ARC_X_R(c, 16) + INT64_C(-8))));
  /* ccf3c: cmp x15, x13 */
  (void)arc_sub64(c, ARC_X_R(c, 15), ARC_X_R(c, 13));
  /* ccf40: csel x15, x15, x13, hi */
  ARC_X_W(c, 15, (ARC_COND(c, 8) ? (ARC_X_R(c, 15)) : ARC_X_R(c, 13)));
  /* ccf44: csel x9, x16, x9, lo */
  ARC_X_W(c, 9, (ARC_COND(c, 3) ? (ARC_X_R(c, 16)) : ARC_X_R(c, 9)));
  /* ccf48: csel x13, x17, x14, lo */
  ARC_X_W(c, 13, (ARC_COND(c, 3) ? (ARC_X_R(c, 17)) : ARC_X_R(c, 14)));
L_ccf4c:;
  /* ccf4c: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* ccf50: str x15, [x12] */
  arc_st64(ARC_X_R(c, 12), ARC_X_R(c, 15));
  /* ccf54: mov x12, x9 */
  ARC_X_W(c, 12, ARC_X_R(c, 9));
  /* ccf58: b.gt #0xccf88 */
  if (ARC_COND(c, 12)) goto L_ccf88;
L_ccf5c:;
  /* ccf5c: lsl x9, x13, #1 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 13)) << ((UINT64_C(1)) & 63)));
  /* ccf60: add x16, x12, x13, lsl #3 */
  ARC_X_W(c, 16, (ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 13)) << 3)));
  /* ccf64: mov w14, #1 */
  ARC_W_W(c, 14, UINT64_C(1));
  /* ccf68: bfi x14, x13, #1, #0x3f */
  ARC_X_W(c, 14, (((uint64_t)(ARC_X_R(c, 14)) & UINT64_C(1)) | ((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(9223372036854775807)) << 1)));
  /* ccf6c: add x17, x9, #2 */
  ARC_X_W(c, 17, (ARC_X_R(c, 9) + UINT64_C(2)));
  /* ccf70: add x9, x16, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 16) + UINT64_C(8)));
  /* ccf74: cmp x17, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 17), ARC_X_R(c, 8));
  /* ccf78: b.lt #0xccf34 */
  if (ARC_COND(c, 11)) goto L_ccf34;
  /* ccf7c: ldr x15, [x9] */
  ARC_X_W(c, 15, arc_ld64(ARC_X_R(c, 9)));
  /* ccf80: mov x13, x14 */
  ARC_X_W(c, 13, ARC_X_R(c, 14));
  /* ccf84: b #0xccf4c */
  goto L_ccf4c;
L_ccf88:;
  /* ccf88: sub x20, x20, #8 */
  ARC_X_W(c, 20, (ARC_X_R(c, 20) - UINT64_C(8)));
  /* ccf8c: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* ccf90: b.eq #0xccf0c */
  if (ARC_COND(c, 0)) goto L_ccf0c;
  /* ccf94: sub x11, x9, x19 */
  ARC_X_W(c, 11, (ARC_X_R(c, 9) - ARC_X_R(c, 19)));
  /* ccf98: ldr x12, [x20] */
  ARC_X_W(c, 12, arc_ld64(ARC_X_R(c, 20)));
  /* ccf9c: add x11, x11, #8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(8)));
  /* ccfa0: asr x11, x11, #3 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(3)) & 63))));
  /* ccfa4: str x12, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 12));
  /* ccfa8: str x10, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 10));
  /* ccfac: subs x11, x11, #2 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 11), UINT64_C(2)));
  /* ccfb0: b.lt #0xccf10 */
  if (ARC_COND(c, 11)) goto L_ccf10;
  /* ccfb4: lsr x10, x11, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(1)) & 63)));
  /* ccfb8: ldr x11, [x9] */
  ARC_X_W(c, 11, arc_ld64(ARC_X_R(c, 9)));
  /* ccfbc: add x12, x19, x10, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* ccfc0: ldr x13, [x12] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 12)));
  /* ccfc4: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* ccfc8: b.hs #0xccf10 */
  if (ARC_COND(c, 2)) goto L_ccf10;
L_ccfcc:;
  /* ccfcc: mov x14, x9 */
  ARC_X_W(c, 14, ARC_X_R(c, 9));
  /* ccfd0: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* ccfd4: str x13, [x14] */
  arc_st64(ARC_X_R(c, 14), ARC_X_R(c, 13));
  /* ccfd8: cbz x10, #0xccff4 */
  if ((ARC_X_R(c, 10)) == 0) goto L_ccff4;
  /* ccfdc: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* ccfe0: lsr x10, x10, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(1)) & 63)));
  /* ccfe4: add x12, x19, x10, lsl #3 */
  ARC_X_W(c, 12, (ARC_X_R(c, 19) + ((uint64_t)(ARC_X_R(c, 10)) << 3)));
  /* ccfe8: ldr x13, [x12] */
  ARC_X_W(c, 13, arc_ld64(ARC_X_R(c, 12)));
  /* ccfec: cmp x13, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 13), ARC_X_R(c, 11));
  /* ccff0: b.lo #0xccfcc */
  if (ARC_COND(c, 3)) goto L_ccfcc;
L_ccff4:;
  /* ccff4: str x11, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 11));
  /* ccff8: b #0xccf10 */
  goto L_ccf10;
L_ccffc:;
  /* ccffc: tbz w8, #0, #0xcd010 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_cd010;
  /* cd000: b #0xccd88 */
  goto L_ccd88;
L_cd004:;
  /* cd004: add x9, x19, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* cd008: cmp x9, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 20));
  /* cd00c: b.eq #0xccd88 */
  if (ARC_COND(c, 0)) goto L_ccd88;
L_cd010:;
  /* cd010: ldp x10, x8, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 8, arc_ld64(_pa + 8));
  }
  /* cd014: mov x19, x9 */
  ARC_X_W(c, 19, ARC_X_R(c, 9));
  /* cd018: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cd01c: b.hs #0xcd004 */
  if (ARC_COND(c, 2)) goto L_cd004;
  /* cd020: mov x9, x19 */
  ARC_X_W(c, 9, ARC_X_R(c, 19));
L_cd024:;
  /* cd024: str x10, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* cd028: ldur x10, [x9, #-0x10] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 9) + INT64_C(-16))));
  /* cd02c: sub x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(8)));
  /* cd030: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* cd034: b.lo #0xcd024 */
  if (ARC_COND(c, 3)) goto L_cd024;
  /* cd038: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* cd03c: b #0xcd004 */
  goto L_cd004;
}

void fn1_d74d4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038809812));
  /* d74d4: bti c */
  /* bti: no architectural effect here */
  /* d74d8: ldr x8, [x1] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 1)));
  /* d74dc: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* d74e0: cbz x8, #0xd7504 */
  if ((ARC_X_R(c, 8)) == 0) goto L_d7504;
  /* d74e4: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* d74e8: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* d74ec: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* d74f0: sub x1, x8, #0x78 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) - UINT64_C(120)));
  /* d74f4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* d74f8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(881916));
  fn1_bd950(c);
  /* d74fc: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* d7500: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
L_d7504:;
  /* d7504: ret  */
  return;
}

void fn1_db418(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038826008));
  /* db418: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* db41c: stp x29, x30, [sp, #-0x10]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-16));
    (c)->sp = (c)->sp + INT64_C(-16);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* db420: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* db424: add x1, x0, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(8)));
  /* db428: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* db42c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(898096));
  fn1_db2e0(c);
  /* db430: ldp x29, x30, [sp], #0x10 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(16);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* db434: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* db438: ret  */
  return;
}

void fn1_de2c8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038837960));
  /* de2c8: bti c */
  /* bti: no architectural effect here */
  /* de2cc: mov x9, #-0x903f0001 */
  ARC_X_W(c, 9, UINT64_C(18446744071289503743));
  /* de2d0: mov x8, x1 */
  ARC_X_W(c, 8, ARC_X_R(c, 1));
  /* de2d4: movk x9, #0x86f2, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(148373940207616)));
  /* de2d8: movk x9, #0x23, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(9851624184872960)));
  /* de2dc: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de2e0: b.ls #0xde2ec */
  if (ARC_COND(c, 9)) goto L_de2ec;
  /* de2e4: mov w9, #0x11 */
  ARC_W_W(c, 9, UINT64_C(17));
  /* de2e8: b #0xde44c */
  goto L_de44c;
L_de2ec:;
  /* de2ec: mov x9, #0x7fff */
  ARC_X_W(c, 9, UINT64_C(32767));
  /* de2f0: movk x9, #0xa4c6, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(2764439552)));
  /* de2f4: movk x9, #0x8d7e, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(155572305395712)));
  /* de2f8: movk x9, #3, lsl #48 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(281474976710655)) | UINT64_C(844424930131968)));
  /* de2fc: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de300: b.ls #0xde30c */
  if (ARC_COND(c, 9)) goto L_de30c;
  /* de304: mov w9, #0x10 */
  ARC_W_W(c, 9, UINT64_C(16));
  /* de308: b #0xde44c */
  goto L_de44c;
L_de30c:;
  /* de30c: mov x9, #0x3fff */
  ARC_X_W(c, 9, UINT64_C(16383));
  /* de310: movk x9, #0x107a, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(276430848)));
  /* de314: movk x9, #0x5af3, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(99999723552768)));
  /* de318: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de31c: b.ls #0xde328 */
  if (ARC_COND(c, 9)) goto L_de328;
  /* de320: mov w9, #0xf */
  ARC_W_W(c, 9, UINT64_C(15));
  /* de324: b #0xde44c */
  goto L_de44c;
L_de328:;
  /* de328: mov x9, #0x9fff */
  ARC_X_W(c, 9, UINT64_C(40959));
  /* de32c: movk x9, #0x4e72, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1316093952)));
  /* de330: movk x9, #0x918, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(9998683865088)));
  /* de334: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de338: b.ls #0xde344 */
  if (ARC_COND(c, 9)) goto L_de344;
  /* de33c: mov w9, #0xe */
  ARC_W_W(c, 9, UINT64_C(14));
  /* de340: b #0xde44c */
  goto L_de44c;
L_de344:;
  /* de344: mov x9, #0xfff */
  ARC_X_W(c, 9, UINT64_C(4095));
  /* de348: movk x9, #0xd4a5, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(3567583232)));
  /* de34c: movk x9, #0xe8, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(996432412672)));
  /* de350: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de354: b.ls #0xde360 */
  if (ARC_COND(c, 9)) goto L_de360;
  /* de358: mov w9, #0xd */
  ARC_W_W(c, 9, UINT64_C(13));
  /* de35c: b #0xde44c */
  goto L_de44c;
L_de360:;
  /* de360: mov x9, #0xe7ff */
  ARC_X_W(c, 9, UINT64_C(59391));
  /* de364: movk x9, #0x4876, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1215692800)));
  /* de368: movk x9, #0x17, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(98784247808)));
  /* de36c: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de370: b.ls #0xde37c */
  if (ARC_COND(c, 9)) goto L_de37c;
  /* de374: mov w9, #0xc */
  ARC_W_W(c, 9, UINT64_C(12));
  /* de378: b #0xde44c */
  goto L_de44c;
L_de37c:;
  /* de37c: mov x9, #0xe3ff */
  ARC_X_W(c, 9, UINT64_C(58367));
  /* de380: movk x9, #0x540b, lsl #16 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(1410007040)));
  /* de384: movk x9, #2, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(8589934592)));
  /* de388: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de38c: b.ls #0xde398 */
  if (ARC_COND(c, 9)) goto L_de398;
  /* de390: mov w9, #0xb */
  ARC_W_W(c, 9, UINT64_C(11));
  /* de394: b #0xde44c */
  goto L_de44c;
L_de398:;
  /* de398: mov w9, #0xc9ff */
  ARC_W_W(c, 9, UINT64_C(51711));
  /* de39c: movk w9, #0x3b9a, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(999948288)));
  /* de3a0: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de3a4: b.ls #0xde3b0 */
  if (ARC_COND(c, 9)) goto L_de3b0;
  /* de3a8: mov w9, #0xa */
  ARC_W_W(c, 9, UINT64_C(10));
  /* de3ac: b #0xde44c */
  goto L_de44c;
L_de3b0:;
  /* de3b0: mov w9, #0xe0ff */
  ARC_W_W(c, 9, UINT64_C(57599));
  /* de3b4: movk w9, #0x5f5, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* de3b8: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de3bc: b.ls #0xde3c8 */
  if (ARC_COND(c, 9)) goto L_de3c8;
  /* de3c0: mov w9, #9 */
  ARC_W_W(c, 9, UINT64_C(9));
  /* de3c4: b #0xde44c */
  goto L_de44c;
L_de3c8:;
  /* de3c8: mov w9, #0x967f */
  ARC_W_W(c, 9, UINT64_C(38527));
  /* de3cc: movk w9, #0x98, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(9961472)));
  /* de3d0: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de3d4: b.ls #0xde3e0 */
  if (ARC_COND(c, 9)) goto L_de3e0;
  /* de3d8: mov w9, #8 */
  ARC_W_W(c, 9, UINT64_C(8));
  /* de3dc: b #0xde44c */
  goto L_de44c;
L_de3e0:;
  /* de3e0: mov w9, #0x423f */
  ARC_W_W(c, 9, UINT64_C(16959));
  /* de3e4: movk w9, #0xf, lsl #16 */
  ARC_W_W(c, 9, ((ARC_W_R(c, 9) & UINT64_C(18446744069414649855)) | UINT64_C(983040)));
  /* de3e8: cmp x2, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 9));
  /* de3ec: b.ls #0xde3f8 */
  if (ARC_COND(c, 9)) goto L_de3f8;
  /* de3f0: mov w9, #7 */
  ARC_W_W(c, 9, UINT64_C(7));
  /* de3f4: b #0xde44c */
  goto L_de44c;
L_de3f8:;
  /* de3f8: lsr x9, x2, #5 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(5)) & 63)));
  /* de3fc: cmp x9, #0xc34 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(3124));
  /* de400: b.ls #0xde40c */
  if (ARC_COND(c, 9)) goto L_de40c;
  /* de404: mov w9, #6 */
  ARC_W_W(c, 9, UINT64_C(6));
  /* de408: b #0xde44c */
  goto L_de44c;
L_de40c:;
  /* de40c: lsr x9, x2, #4 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(4)) & 63)));
  /* de410: cmp x9, #0x270 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(624));
  /* de414: b.ls #0xde420 */
  if (ARC_COND(c, 9)) goto L_de420;
  /* de418: mov w9, #5 */
  ARC_W_W(c, 9, UINT64_C(5));
  /* de41c: b #0xde44c */
  goto L_de44c;
L_de420:;
  /* de420: cmp x2, #0x3e7 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(999));
  /* de424: b.ls #0xde430 */
  if (ARC_COND(c, 9)) goto L_de430;
  /* de428: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* de42c: b #0xde44c */
  goto L_de44c;
L_de430:;
  /* de430: cmp x2, #0x63 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(99));
  /* de434: b.ls #0xde440 */
  if (ARC_COND(c, 9)) goto L_de440;
  /* de438: mov w9, #3 */
  ARC_W_W(c, 9, UINT64_C(3));
  /* de43c: b #0xde44c */
  goto L_de44c;
L_de440:;
  /* de440: cmp x2, #9 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(9));
  /* de444: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* de448: cinc w9, w9, hi */
  ARC_W_W(c, 9, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) + 1 : (ARC_W_R(c, 9))));
L_de44c:;
  /* de44c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* de450: stp x29, x30, [sp, #-0x30]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-48));
    (c)->sp = (c)->sp + INT64_C(-48);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* de454: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* de458: stp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* de45c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* de460: cmp w4, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 4), UINT64_C(3));
  /* de464: add w19, w9, w3 */
  ARC_W_W(c, 19, (ARC_W_R(c, 9) + ARC_W_R(c, 3)));
  /* de468: b.eq #0xde4c8 */
  if (ARC_COND(c, 0)) goto L_de4c8;
  /* de46c: cmp w4, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 4), UINT64_C(2));
  /* de470: b.eq #0xde4a0 */
  if (ARC_COND(c, 0)) goto L_de4a0;
  /* de474: cbnz w4, #0xde4d4 */
  if ((ARC_W_R(c, 4)) != 0) goto L_de4d4;
  /* de478: mov w10, #-3 */
  ARC_W_W(c, 10, UINT64_C(18446744073709551613));
  /* de47c: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* de480: mov w12, #4 */
  ARC_W_W(c, 12, UINT64_C(4));
  /* de484: sub w11, w10, w9 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) - ARC_W_R(c, 9)));
  /* de488: csel w11, w10, w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? (ARC_W_R(c, 10)) : ARC_W_R(c, 11)));
  /* de48c: cinc w10, w12, ne */
  ARC_W_W(c, 10, (ARC_COND(c, 1) ? (ARC_W_R(c, 12)) + 1 : (ARC_W_R(c, 12))));
  /* de490: cmp w11, w3 */
  (void)arc_sub32(c, ARC_W_R(c, 11), ARC_W_R(c, 3));
  /* de494: b.gt #0xde4d4 */
  if (ARC_COND(c, 12)) goto L_de4d4;
  /* de498: cmp w10, w3 */
  (void)arc_sub32(c, ARC_W_R(c, 10), ARC_W_R(c, 3));
  /* de49c: b.lt #0xde4d4 */
  if (ARC_COND(c, 11)) goto L_de4d4;
L_de4a0:;
  /* de4a0: tbnz w3, #0x1f, #0xde678 */
  if (((ARC_W_R(c, 3)) >> 31 & 1) != 0) goto L_de678;
  /* de4a4: cmp x2, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(1));
  /* de4a8: mov w10, w19 */
  ARC_W_W(c, 10, ARC_W_R(c, 19));
  /* de4ac: b.ne #0xde744 */
  if (ARC_COND(c, 1)) goto L_de744;
  /* de4b0: and x10, x3, #0x7fffffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 3) & UINT64_C(2147483647)));
  /* de4b4: nop  */
  /* nop: no architectural effect here */
  /* de4b8: adr x11, #0x74a90 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(477840)));
  /* de4bc: ldrb w10, [x11, x10] */
  ARC_W_W(c, 10, arc_ld8((ARC_X_R(c, 11) + ARC_X_R(c, 10))));
  /* de4c0: sub w10, w19, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 19) - ARC_W_R(c, 10)));
  /* de4c4: b #0xde744 */
  goto L_de744;
L_de4c8:;
  /* de4c8: add w10, w19, #3 */
  ARC_W_W(c, 10, (ARC_W_R(c, 19) + UINT64_C(3)));
  /* de4cc: cmp w10, #9 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(9));
  /* de4d0: b.ls #0xde4a0 */
  if (ARC_COND(c, 9)) goto L_de4a0;
L_de4d4:;
  /* de4d4: cmp w9, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(1));
  /* de4d8: add w10, w19, #0x62 */
  ARC_W_W(c, 10, (ARC_W_R(c, 19) + UINT64_C(98)));
  /* de4dc: cinc w11, w9, hi */
  ARC_W_W(c, 11, (ARC_COND(c, 8) ? (ARC_W_R(c, 9)) + 1 : (ARC_W_R(c, 9))));
  /* de4e0: cmp w10, #0xc7 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(199));
  /* de4e4: mov w10, #4 */
  ARC_W_W(c, 10, UINT64_C(4));
  /* de4e8: cinc w10, w10, hs */
  ARC_W_W(c, 10, (ARC_COND(c, 2) ? (ARC_W_R(c, 10)) + 1 : (ARC_W_R(c, 10))));
  /* de4ec: add w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) + ARC_W_R(c, 10)));
  /* de4f0: sub x11, x8, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* de4f4: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* de4f8: b.lt #0xde754 */
  if (ARC_COND(c, 11)) goto L_de754;
  /* de4fc: lsr x12, x2, #0x20 */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(32)) & 63)));
  /* de500: add x11, x0, w9, uxtw */
  ARC_X_W(c, 11, (ARC_X_R(c, 0) + ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* de504: nop  */
  /* nop: no architectural effect here */
  /* de508: adr x8, #0x58470 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(361584)));
  /* de50c: cbz x12, #0xde5b4 */
  if ((ARC_X_R(c, 12)) == 0) goto L_de5b4;
  /* de510: mov x12, #0xcefd */
  ARC_X_W(c, 12, UINT64_C(52989));
  /* de514: mov w14, #0x1759 */
  ARC_W_W(c, 14, UINT64_C(5977));
  /* de518: mov w15, #0x2710 */
  ARC_W_W(c, 15, UINT64_C(10000));
  /* de51c: movk x12, #0x8461, lsl #16 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* de520: movk w14, #0xd1b7, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* de524: mov w16, #0x8db9 */
  ARC_W_W(c, 16, UINT64_C(36281));
  /* de528: movk x12, #0x7711, lsl #32 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* de52c: movk w16, #6, lsl #16 */
  ARC_W_W(c, 16, ((ARC_W_R(c, 16) & UINT64_C(18446744069414649855)) | UINT64_C(393216)));
  /* de530: mov w1, #0x147b */
  ARC_W_W(c, 1, UINT64_C(5243));
  /* de534: movk x12, #0xabcc, lsl #48 */
  ARC_X_W(c, 12, ((ARC_X_R(c, 12) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* de538: umulh x12, x2, x12 */
  ARC_X_W(c, 12, arc_umulh(ARC_X_R(c, 2), ARC_X_R(c, 12)));
  /* de53c: lsr x13, x12, #0x1a */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(26)) & 63)));
  /* de540: mov w12, #0x1f00 */
  ARC_W_W(c, 12, UINT64_C(7936));
  /* de544: movk w12, #0xfa0a, lsl #16 */
  ARC_W_W(c, 12, ((ARC_W_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(4194959360)));
  /* de548: madd w12, w13, w12, w2 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 2)) + ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* de54c: mov x2, x13 */
  ARC_X_W(c, 2, ARC_X_R(c, 13));
  /* de550: umull x14, w12, w14 */
  ARC_X_W(c, 14, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* de554: lsr x14, x14, #0x2d */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(45)) & 63)));
  /* de558: msub w12, w14, w15, w12 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 12)) - ((uint32_t)(ARC_W_R(c, 14)) * (uint32_t)(ARC_W_R(c, 15)))));
  /* de55c: umull x16, w14, w16 */
  ARC_X_W(c, 16, (((uint64_t)(uint32_t)(ARC_W_R(c, 14))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 16)))));
  /* de560: ubfx w17, w12, #2, #0xe */
  ARC_W_W(c, 17, (((uint32_t)(ARC_W_R(c, 12)) >> 2) & UINT64_C(16383)));
  /* de564: lsr x16, x16, #0x20 */
  ARC_X_W(c, 16, ((uint64_t)(ARC_X_R(c, 16)) >> ((UINT64_C(32)) & 63)));
  /* de568: mul w17, w17, w1 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 1))));
  /* de56c: msub w14, w16, w15, w14 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 14)) - ((uint32_t)(ARC_W_R(c, 16)) * (uint32_t)(ARC_W_R(c, 15)))));
  /* de570: mov w16, #0x64 */
  ARC_W_W(c, 16, UINT64_C(100));
  /* de574: lsr w15, w17, #0x11 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(17)) & 31)));
  /* de578: mul w17, w14, w1 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 14)) * (uint32_t)(ARC_W_R(c, 1))));
  /* de57c: msub w12, w15, w16, w12 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 12)) - ((uint32_t)(ARC_W_R(c, 15)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* de580: lsr w17, w17, #0x13 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 17)) >> ((UINT64_C(19)) & 31)));
  /* de584: and x12, x12, #0xffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & UINT64_C(65535)));
  /* de588: ldrh w12, [x8, x12, lsl #1] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 12)) << 1))));
  /* de58c: msub w14, w17, w16, w14 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 14)) - ((uint32_t)(ARC_W_R(c, 17)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* de590: sturh w12, [x11, #-1] */
  arc_st16((ARC_X_R(c, 11) + INT64_C(-1)), ARC_W_R(c, 12));
  /* de594: ldrh w12, [x8, w15, uxtw #1] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 15)))) << 1))));
  /* de598: and x14, x14, #0xffff */
  ARC_X_W(c, 14, (ARC_X_R(c, 14) & UINT64_C(65535)));
  /* de59c: sturh w12, [x11, #-3] */
  arc_st16((ARC_X_R(c, 11) + INT64_C(-3)), ARC_W_R(c, 12));
  /* de5a0: ldrh w12, [x8, x14, lsl #1] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 14)) << 1))));
  /* de5a4: sturh w12, [x11, #-5] */
  arc_st16((ARC_X_R(c, 11) + INT64_C(-5)), ARC_W_R(c, 12));
  /* de5a8: ldrh w12, [x8, w17, uxtw #1] */
  ARC_W_W(c, 12, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 17)))) << 1))));
  /* de5ac: sturh w12, [x11, #-7] */
  arc_st16((ARC_X_R(c, 11) + INT64_C(-7)), ARC_W_R(c, 12));
  /* de5b0: mov w12, #8 */
  ARC_W_W(c, 12, UINT64_C(8));
L_de5b4:;
  /* de5b4: lsr w13, w2, #4 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 2)) >> ((UINT64_C(4)) & 31)));
  /* de5b8: cmp w13, #0x271 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(625));
  /* de5bc: b.lo #0xde688 */
  if (ARC_COND(c, 3)) goto L_de688;
  /* de5c0: mov w14, #0xe0ff */
  ARC_W_W(c, 14, UINT64_C(57599));
  /* de5c4: mov w15, #0x1759 */
  ARC_W_W(c, 15, UINT64_C(5977));
  /* de5c8: mov w17, #0x851f */
  ARC_W_W(c, 17, UINT64_C(34079));
  /* de5cc: movk w14, #0x5f5, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* de5d0: movk w15, #0xd1b7, lsl #16 */
  ARC_W_W(c, 15, ((ARC_W_R(c, 15) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* de5d4: mov w16, #-0x2710 */
  ARC_W_W(c, 16, UINT64_C(18446744073709541616));
  /* de5d8: movk w17, #0x51eb, lsl #16 */
  ARC_W_W(c, 17, ((ARC_W_R(c, 17) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* de5dc: mov w1, #0x64 */
  ARC_W_W(c, 1, UINT64_C(100));
L_de5e0:;
  /* de5e0: umull x13, w2, w15 */
  ARC_X_W(c, 13, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 15)))));
  /* de5e4: sub x5, x11, w12, uxtw */
  ARC_X_W(c, 5, (ARC_X_R(c, 11) - ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* de5e8: cmp w2, w14 */
  (void)arc_sub32(c, ARC_W_R(c, 2), ARC_W_R(c, 14));
  /* de5ec: add w12, w12, #4 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) + UINT64_C(4)));
  /* de5f0: lsr x13, x13, #0x2d */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(45)) & 63)));
  /* de5f4: madd w3, w13, w16, w2 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 2)) + ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 16)))));
  /* de5f8: mov w2, w13 */
  ARC_W_W(c, 2, ARC_W_R(c, 13));
  /* de5fc: umull x4, w3, w17 */
  ARC_X_W(c, 4, (((uint64_t)(uint32_t)(ARC_W_R(c, 3))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 17)))));
  /* de600: lsr x4, x4, #0x25 */
  ARC_X_W(c, 4, ((uint64_t)(ARC_X_R(c, 4)) >> ((UINT64_C(37)) & 63)));
  /* de604: msub w3, w4, w1, w3 */
  ARC_W_W(c, 3, ((uint32_t)(ARC_W_R(c, 3)) - ((uint32_t)(ARC_W_R(c, 4)) * (uint32_t)(ARC_W_R(c, 1)))));
  /* de608: ldrh w3, [x8, w3, uxtw #1] */
  ARC_W_W(c, 3, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 3)))) << 1))));
  /* de60c: sturh w3, [x5, #-1] */
  arc_st16((ARC_X_R(c, 5) + INT64_C(-1)), ARC_W_R(c, 3));
  /* de610: ldrh w3, [x8, x4, lsl #1] */
  ARC_W_W(c, 3, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 4)) << 1))));
  /* de614: sturh w3, [x5, #-3] */
  arc_st16((ARC_X_R(c, 5) + INT64_C(-3)), ARC_W_R(c, 3));
  /* de618: b.hi #0xde5e0 */
  if (ARC_COND(c, 8)) goto L_de5e0;
  /* de61c: cmp w13, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(100));
  /* de620: b.lo #0xde654 */
  if (ARC_COND(c, 3)) goto L_de654;
L_de624:;
  /* de624: ubfx w14, w13, #2, #0xe */
  ARC_W_W(c, 14, (((uint32_t)(ARC_W_R(c, 13)) >> 2) & UINT64_C(16383)));
  /* de628: mov w15, #0x147b */
  ARC_W_W(c, 15, UINT64_C(5243));
  /* de62c: mov w12, w12 */
  ARC_W_W(c, 12, ARC_W_R(c, 12));
  /* de630: mvn x12, x12 */
  ARC_X_W(c, 12, (~(uint64_t)(ARC_X_R(c, 12))));
  /* de634: mul w14, w14, w15 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 14)) * (uint32_t)(ARC_W_R(c, 15))));
  /* de638: mov w15, #0x64 */
  ARC_W_W(c, 15, UINT64_C(100));
  /* de63c: lsr w14, w14, #0x11 */
  ARC_W_W(c, 14, ((uint32_t)(ARC_W_R(c, 14)) >> ((UINT64_C(17)) & 31)));
  /* de640: msub w13, w14, w15, w13 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 13)) - ((uint32_t)(ARC_W_R(c, 14)) * (uint32_t)(ARC_W_R(c, 15)))));
  /* de644: and x13, x13, #0xffff */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) & UINT64_C(65535)));
  /* de648: ldrh w13, [x8, x13, lsl #1] */
  ARC_W_W(c, 13, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 13)) << 1))));
  /* de64c: strh w13, [x12, x11] */
  arc_st16((ARC_X_R(c, 12) + ARC_X_R(c, 11)), ARC_W_R(c, 13));
  /* de650: mov w13, w14 */
  ARC_W_W(c, 13, ARC_W_R(c, 14));
L_de654:;
  /* de654: cmp w13, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(10));
  /* de658: b.lo #0xde698 */
  if (ARC_COND(c, 3)) goto L_de698;
  /* de65c: ubfiz x11, x13, #1, #0x20 */
  ARC_X_W(c, 11, ((uint64_t)((((uint64_t)(ARC_X_R(c, 13))) & UINT64_C(4294967295))) << 1));
  /* de660: mov w12, w11 */
  ARC_W_W(c, 12, ARC_W_R(c, 11));
  /* de664: add x12, x8, x12 */
  ARC_X_W(c, 12, (ARC_X_R(c, 8) + ARC_X_R(c, 12)));
  /* de668: ldrb w12, [x12, #1] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 12) + INT64_C(1))));
  /* de66c: strb w12, [x0, #2] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(2)), ARC_W_R(c, 12));
  /* de670: ldrb w12, [x8, x11] */
  ARC_W_W(c, 12, arc_ld8((ARC_X_R(c, 8) + ARC_X_R(c, 11))));
  /* de674: b #0xde69c */
  goto L_de69c;
L_de678:;
  /* de678: cmp w19, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(1));
  /* de67c: b.lt #0xde73c */
  if (ARC_COND(c, 11)) goto L_de73c;
  /* de680: add w10, w9, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 9) + UINT64_C(1)));
  /* de684: b #0xde744 */
  goto L_de744;
L_de688:;
  /* de688: mov w13, w2 */
  ARC_W_W(c, 13, ARC_W_R(c, 2));
  /* de68c: cmp w13, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 13), UINT64_C(100));
  /* de690: b.hs #0xde624 */
  if (ARC_COND(c, 2)) goto L_de624;
  /* de694: b #0xde654 */
  goto L_de654;
L_de698:;
  /* de698: orr w12, w13, #0x30 */
  ARC_W_W(c, 12, (ARC_W_R(c, 13) | UINT64_C(48)));
L_de69c:;
  /* de69c: sub w11, w19, #1 */
  ARC_W_W(c, 11, (ARC_W_R(c, 19) - UINT64_C(1)));
  /* de6a0: cmp w9, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 9), UINT64_C(2));
  /* de6a4: strb w12, [x0] */
  arc_st8(ARC_X_R(c, 0), ARC_W_R(c, 12));
  /* de6a8: mov w12, #1 */
  ARC_W_W(c, 12, UINT64_C(1));
  /* de6ac: mov w13, #1 */
  ARC_W_W(c, 13, UINT64_C(1));
  /* de6b0: b.lo #0xde6c0 */
  if (ARC_COND(c, 3)) goto L_de6c0;
  /* de6b4: mov w13, #0x2e */
  ARC_W_W(c, 13, UINT64_C(46));
  /* de6b8: strb w13, [x0, #1] */
  arc_st8((ARC_X_R(c, 0) + INT64_C(1)), ARC_W_R(c, 13));
  /* de6bc: add w13, w9, #1 */
  ARC_W_W(c, 13, (ARC_W_R(c, 9) + UINT64_C(1)));
L_de6c0:;
  /* de6c0: mov w13, w13 */
  ARC_W_W(c, 13, ARC_W_R(c, 13));
  /* de6c4: sub w12, w12, w19 */
  ARC_W_W(c, 12, (ARC_W_R(c, 12) - ARC_W_R(c, 19)));
  /* de6c8: cmp w19, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(1));
  /* de6cc: mov w15, #0x2b */
  ARC_W_W(c, 15, UINT64_C(43));
  /* de6d0: mov w16, #0x2d */
  ARC_W_W(c, 16, UINT64_C(45));
  /* de6d4: add x9, x0, x13 */
  ARC_X_W(c, 9, (ARC_X_R(c, 0) + ARC_X_R(c, 13)));
  /* de6d8: csel w11, w12, w11, lt */
  ARC_W_W(c, 11, (ARC_COND(c, 11) ? (ARC_W_R(c, 12)) : ARC_W_R(c, 11)));
  /* de6dc: csel w12, w16, w15, lt */
  ARC_W_W(c, 12, (ARC_COND(c, 11) ? (ARC_W_R(c, 16)) : ARC_W_R(c, 15)));
  /* de6e0: mov w14, #0x65 */
  ARC_W_W(c, 14, UINT64_C(101));
  /* de6e4: cmp w11, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(100));
  /* de6e8: strb w12, [x9, #1] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(1)), ARC_W_R(c, 12));
  /* de6ec: add x12, x13, #2 */
  ARC_X_W(c, 12, (ARC_X_R(c, 13) + UINT64_C(2)));
  /* de6f0: strb w14, [x9] */
  arc_st8(ARC_X_R(c, 9), ARC_W_R(c, 14));
  /* de6f4: b.lo #0xde724 */
  if (ARC_COND(c, 3)) goto L_de724;
  /* de6f8: mov w13, #0xcccd */
  ARC_W_W(c, 13, UINT64_C(52429));
  /* de6fc: mov w14, #0xa */
  ARC_W_W(c, 14, UINT64_C(10));
  /* de700: movk w13, #0xcccc, lsl #16 */
  ARC_W_W(c, 13, ((ARC_W_R(c, 13) & UINT64_C(18446744069414649855)) | UINT64_C(3435921408)));
  /* de704: umull x13, w11, w13 */
  ARC_X_W(c, 13, (((uint64_t)(uint32_t)(ARC_W_R(c, 11))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 13)))));
  /* de708: lsr x13, x13, #0x23 */
  ARC_X_W(c, 13, ((uint64_t)(ARC_X_R(c, 13)) >> ((UINT64_C(35)) & 63)));
  /* de70c: msub w11, w13, w14, w11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) - ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 14)))));
  /* de710: ldrh w8, [x8, x13, lsl #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 13)) << 1))));
  /* de714: strh w8, [x0, x12] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 12)), ARC_W_R(c, 8));
  /* de718: orr w8, w11, #0x30 */
  ARC_W_W(c, 8, (ARC_W_R(c, 11) | UINT64_C(48)));
  /* de71c: strb w8, [x9, #4] */
  arc_st8((ARC_X_R(c, 9) + INT64_C(4)), ARC_W_R(c, 8));
  /* de720: b #0xde72c */
  goto L_de72c;
L_de724:;
  /* de724: ldrh w8, [x8, w11, uxtw #1] */
  ARC_W_W(c, 8, arc_ld16((ARC_X_R(c, 8) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 11)))) << 1))));
  /* de728: strh w8, [x0, x12] */
  arc_st16((ARC_X_R(c, 0) + ARC_X_R(c, 12)), ARC_W_R(c, 8));
L_de72c:;
  /* de72c: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* de730: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* de734: add x8, x0, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 10)));
  /* de738: b #0xde9bc */
  goto L_de9bc;
L_de73c:;
  /* de73c: mov w10, #2 */
  ARC_W_W(c, 10, UINT64_C(2));
  /* de740: sub w10, w10, w3 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) - ARC_W_R(c, 3)));
L_de744:;
  /* de744: sub x11, x8, x0 */
  ARC_X_W(c, 11, (ARC_X_R(c, 8) - ARC_X_R(c, 0)));
  /* de748: mov w21, w10 */
  ARC_W_W(c, 21, ARC_W_R(c, 10));
  /* de74c: cmp x11, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 21));
  /* de750: b.ge #0xde760 */
  if (ARC_COND(c, 10)) goto L_de760;
L_de754:;
  /* de754: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* de758: mov w11, #0x4b */
  ARC_W_W(c, 11, UINT64_C(75));
  /* de75c: b #0xde9bc */
  goto L_de9bc;
L_de760:;
  /* de760: cmp w3, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(1));
  /* de764: mov x10, x21 */
  ARC_X_W(c, 10, ARC_X_R(c, 21));
  /* de768: b.lt #0xde7d0 */
  if (ARC_COND(c, 11)) goto L_de7d0;
  /* de76c: cmp w3, #0x16 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(22));
  /* de770: b.hi #0xde7b0 */
  if (ARC_COND(c, 8)) goto L_de7b0;
  /* de774: cbz w2, #0xde784 */
  if ((ARC_W_R(c, 2)) == 0) goto L_de784;
  /* de778: rbit w10, w2 */
  ARC_W_W(c, 10, arc_rbit32(ARC_W_R(c, 2)));
  /* de77c: clz w10, w10 */
  ARC_W_W(c, 10, arc_clz32(ARC_W_R(c, 10)));
  /* de780: b #0xde794 */
  goto L_de794;
L_de784:;
  /* de784: lsr x10, x2, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(32)) & 63)));
  /* de788: rbit w10, w10 */
  ARC_W_W(c, 10, arc_rbit32(ARC_W_R(c, 10)));
  /* de78c: clz w10, w10 */
  ARC_W_W(c, 10, arc_clz32(ARC_W_R(c, 10)));
  /* de790: orr w10, w10, #0x20 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(32)));
L_de794:;
  /* de794: and x11, x3, #0x1f */
  ARC_X_W(c, 11, (ARC_X_R(c, 3) & UINT64_C(31)));
  /* de798: nop  */
  /* nop: no architectural effect here */
  /* de79c: adr x12, #0x74bc8 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(478152)));
  /* de7a0: lsr x10, x2, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 2)) >> ((ARC_X_R(c, 10)) & 63)));
  /* de7a4: ldr x11, [x12, x11, lsl #3] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 11)) << 3))));
  /* de7a8: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* de7ac: b.ls #0xde7cc */
  if (ARC_COND(c, 9)) goto L_de7cc;
L_de7b0:;
  /* de7b0: mov x1, x8 */
  ARC_X_W(c, 1, ARC_X_R(c, 8));
  /* de7b4: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* de7b8: bl #0xdc610 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(911292));
  fn1_dc610(c);
  /* de7bc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* de7c0: and x9, x1, #0xffffffff00000000 */
  ARC_X_W(c, 9, (ARC_X_R(c, 1) & UINT64_C(18446744069414584320)));
  /* de7c4: mov w11, w1 */
  ARC_W_W(c, 11, ARC_W_R(c, 1));
  /* de7c8: b #0xde9bc */
  goto L_de9bc;
L_de7cc:;
  /* de7cc: mov w10, w9 */
  ARC_W_W(c, 10, ARC_W_R(c, 9));
L_de7d0:;
  /* de7d0: lsr x11, x2, #0x20 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 2)) >> ((UINT64_C(32)) & 63)));
  /* de7d4: add x8, x0, x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 10)));
  /* de7d8: cbz x11, #0xde888 */
  if ((ARC_X_R(c, 11)) == 0) goto L_de888;
  /* de7dc: mov x10, #0xcefd */
  ARC_X_W(c, 10, UINT64_C(52989));
  /* de7e0: mov w11, #0x1f00 */
  ARC_W_W(c, 11, UINT64_C(7936));
  /* de7e4: mov w12, #0x1759 */
  ARC_W_W(c, 12, UINT64_C(5977));
  /* de7e8: movk x10, #0x8461, lsl #16 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446744069414649855)) | UINT64_C(2220949504)));
  /* de7ec: movk w11, #0xfa0a, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(4194959360)));
  /* de7f0: movk w12, #0xd1b7, lsl #16 */
  ARC_W_W(c, 12, ((ARC_W_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* de7f4: movk x10, #0x7711, lsl #32 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(18446462603027808255)) | UINT64_C(130914898149376)));
  /* de7f8: mov w14, #0x8db9 */
  ARC_W_W(c, 14, UINT64_C(36281));
  /* de7fc: mov w16, #0x147b */
  ARC_W_W(c, 16, UINT64_C(5243));
  /* de800: movk x10, #0xabcc, lsl #48 */
  ARC_X_W(c, 10, ((ARC_X_R(c, 10) & UINT64_C(281474976710655)) | UINT64_C(12379269475734650880)));
  /* de804: movk w14, #6, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(393216)));
  /* de808: umulh x10, x2, x10 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 2), ARC_X_R(c, 10)));
  /* de80c: lsr x10, x10, #0x1a */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(26)) & 63)));
  /* de810: madd x11, x10, x11, x2 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 2)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* de814: mov x2, x10 */
  ARC_X_W(c, 2, ARC_X_R(c, 10));
  /* de818: mov w13, w11 */
  ARC_W_W(c, 13, ARC_W_R(c, 11));
  /* de81c: umull x12, w13, w12 */
  ARC_X_W(c, 12, (((uint64_t)(uint32_t)(ARC_W_R(c, 13))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* de820: mov w13, #0x2710 */
  ARC_W_W(c, 13, UINT64_C(10000));
  /* de824: lsr x12, x12, #0x2d */
  ARC_X_W(c, 12, ((uint64_t)(ARC_X_R(c, 12)) >> ((UINT64_C(45)) & 63)));
  /* de828: msub w11, w12, w13, w11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) - ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 13)))));
  /* de82c: umull x14, w12, w14 */
  ARC_X_W(c, 14, (((uint64_t)(uint32_t)(ARC_W_R(c, 12))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* de830: ubfx w15, w11, #2, #0xe */
  ARC_W_W(c, 15, (((uint32_t)(ARC_W_R(c, 11)) >> 2) & UINT64_C(16383)));
  /* de834: lsr x14, x14, #0x20 */
  ARC_X_W(c, 14, ((uint64_t)(ARC_X_R(c, 14)) >> ((UINT64_C(32)) & 63)));
  /* de838: mul w15, w15, w16 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 15)) * (uint32_t)(ARC_W_R(c, 16))));
  /* de83c: msub w12, w14, w13, w12 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 12)) - ((uint32_t)(ARC_W_R(c, 14)) * (uint32_t)(ARC_W_R(c, 13)))));
  /* de840: mov w14, #0x64 */
  ARC_W_W(c, 14, UINT64_C(100));
  /* de844: lsr w13, w15, #0x11 */
  ARC_W_W(c, 13, ((uint32_t)(ARC_W_R(c, 15)) >> ((UINT64_C(17)) & 31)));
  /* de848: mul w15, w12, w16 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 12)) * (uint32_t)(ARC_W_R(c, 16))));
  /* de84c: nop  */
  /* nop: no architectural effect here */
  /* de850: adr x16, #0x58470 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(361584)));
  /* de854: msub w11, w13, w14, w11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) - ((uint32_t)(ARC_W_R(c, 13)) * (uint32_t)(ARC_W_R(c, 14)))));
  /* de858: lsr w15, w15, #0x13 */
  ARC_W_W(c, 15, ((uint32_t)(ARC_W_R(c, 15)) >> ((UINT64_C(19)) & 31)));
  /* de85c: and x11, x11, #0xffff */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) & UINT64_C(65535)));
  /* de860: ldrh w17, [x16, w15, uxtw #1] */
  ARC_W_W(c, 17, arc_ld16((ARC_X_R(c, 16) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 15)))) << 1))));
  /* de864: ldrh w11, [x16, x11, lsl #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 16) + ((uint64_t)(ARC_X_R(c, 11)) << 1))));
  /* de868: msub w12, w15, w14, w12 */
  ARC_W_W(c, 12, ((uint32_t)(ARC_W_R(c, 12)) - ((uint32_t)(ARC_W_R(c, 15)) * (uint32_t)(ARC_W_R(c, 14)))));
  /* de86c: strh w17, [x8, #-8]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-8));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-8));
    arc_st16(_a, ARC_W_R(c, 17));
  }
  /* de870: strh w11, [x8, #6] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(6)), ARC_W_R(c, 11));
  /* de874: and x12, x12, #0xffff */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) & UINT64_C(65535)));
  /* de878: ldrh w11, [x16, w13, uxtw #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 16) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 13)))) << 1))));
  /* de87c: strh w11, [x8, #4] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(4)), ARC_W_R(c, 11));
  /* de880: ldrh w11, [x16, x12, lsl #1] */
  ARC_W_W(c, 11, arc_ld16((ARC_X_R(c, 16) + ((uint64_t)(ARC_X_R(c, 12)) << 1))));
  /* de884: strh w11, [x8, #2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 11));
L_de888:;
  /* de888: lsr w10, w2, #4 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 2)) >> ((UINT64_C(4)) & 31)));
  /* de88c: cmp w10, #0x271 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(625));
  /* de890: b.lo #0xde974 */
  if (ARC_COND(c, 3)) goto L_de974;
  /* de894: mov w11, #0xe0ff */
  ARC_W_W(c, 11, UINT64_C(57599));
  /* de898: mov w12, #0x1759 */
  ARC_W_W(c, 12, UINT64_C(5977));
  /* de89c: mov w14, #0x851f */
  ARC_W_W(c, 14, UINT64_C(34079));
  /* de8a0: movk w11, #0x5f5, lsl #16 */
  ARC_W_W(c, 11, ((ARC_W_R(c, 11) & UINT64_C(18446744069414649855)) | UINT64_C(99942400)));
  /* de8a4: movk w12, #0xd1b7, lsl #16 */
  ARC_W_W(c, 12, ((ARC_W_R(c, 12) & UINT64_C(18446744069414649855)) | UINT64_C(3518431232)));
  /* de8a8: mov w13, #-0x2710 */
  ARC_W_W(c, 13, UINT64_C(18446744073709541616));
  /* de8ac: movk w14, #0x51eb, lsl #16 */
  ARC_W_W(c, 14, ((ARC_W_R(c, 14) & UINT64_C(18446744069414649855)) | UINT64_C(1374355456)));
  /* de8b0: mov w15, #0x64 */
  ARC_W_W(c, 15, UINT64_C(100));
  /* de8b4: nop  */
  /* nop: no architectural effect here */
  /* de8b8: adr x16, #0x58470 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(361584)));
L_de8bc:;
  /* de8bc: umull x10, w2, w12 */
  ARC_X_W(c, 10, (((uint64_t)(uint32_t)(ARC_W_R(c, 2))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 12)))));
  /* de8c0: cmp w2, w11 */
  (void)arc_sub32(c, ARC_W_R(c, 2), ARC_W_R(c, 11));
  /* de8c4: lsr x10, x10, #0x2d */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(45)) & 63)));
  /* de8c8: madd w17, w10, w13, w2 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 2)) + ((uint32_t)(ARC_W_R(c, 10)) * (uint32_t)(ARC_W_R(c, 13)))));
  /* de8cc: mov w2, w10 */
  ARC_W_W(c, 2, ARC_W_R(c, 10));
  /* de8d0: umull x1, w17, w14 */
  ARC_X_W(c, 1, (((uint64_t)(uint32_t)(ARC_W_R(c, 17))) * ((uint64_t)(uint32_t)(ARC_W_R(c, 14)))));
  /* de8d4: lsr x1, x1, #0x25 */
  ARC_X_W(c, 1, ((uint64_t)(ARC_X_R(c, 1)) >> ((UINT64_C(37)) & 63)));
  /* de8d8: msub w17, w1, w15, w17 */
  ARC_W_W(c, 17, ((uint32_t)(ARC_W_R(c, 17)) - ((uint32_t)(ARC_W_R(c, 1)) * (uint32_t)(ARC_W_R(c, 15)))));
  /* de8dc: ldrh w1, [x16, x1, lsl #1] */
  ARC_W_W(c, 1, arc_ld16((ARC_X_R(c, 16) + ((uint64_t)(ARC_X_R(c, 1)) << 1))));
  /* de8e0: ldrh w17, [x16, w17, uxtw #1] */
  ARC_W_W(c, 17, arc_ld16((ARC_X_R(c, 16) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 17)))) << 1))));
  /* de8e4: strh w1, [x8, #-4]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-4));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-4));
    arc_st16(_a, ARC_W_R(c, 1));
  }
  /* de8e8: strh w17, [x8, #2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(2)), ARC_W_R(c, 17));
  /* de8ec: b.hi #0xde8bc */
  if (ARC_COND(c, 8)) goto L_de8bc;
  /* de8f0: cmp w10, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(100));
  /* de8f4: b.lo #0xde928 */
  if (ARC_COND(c, 3)) goto L_de928;
L_de8f8:;
  /* de8f8: ubfx w11, w10, #2, #0xe */
  ARC_W_W(c, 11, (((uint32_t)(ARC_W_R(c, 10)) >> 2) & UINT64_C(16383)));
  /* de8fc: mov w12, #0x147b */
  ARC_W_W(c, 12, UINT64_C(5243));
  /* de900: mul w11, w11, w12 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12))));
  /* de904: mov w12, #0x64 */
  ARC_W_W(c, 12, UINT64_C(100));
  /* de908: lsr w11, w11, #0x11 */
  ARC_W_W(c, 11, ((uint32_t)(ARC_W_R(c, 11)) >> ((UINT64_C(17)) & 31)));
  /* de90c: msub w10, w11, w12, w10 */
  ARC_W_W(c, 10, ((uint32_t)(ARC_W_R(c, 10)) - ((uint32_t)(ARC_W_R(c, 11)) * (uint32_t)(ARC_W_R(c, 12)))));
  /* de910: nop  */
  /* nop: no architectural effect here */
  /* de914: adr x12, #0x58470 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(361584)));
  /* de918: and x10, x10, #0xffff */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) & UINT64_C(65535)));
  /* de91c: ldrh w10, [x12, x10, lsl #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 12) + ((uint64_t)(ARC_X_R(c, 10)) << 1))));
  /* de920: strh w10, [x8, #-2]! */
  { const uint64_t _a = (ARC_X_R(c, 8) + INT64_C(-2));
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(-2));
    arc_st16(_a, ARC_W_R(c, 10));
  }
  /* de924: mov w10, w11 */
  ARC_W_W(c, 10, ARC_W_R(c, 11));
L_de928:;
  /* de928: cmp w10, #0xa */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(10));
  /* de92c: b.lo #0xde984 */
  if (ARC_COND(c, 3)) goto L_de984;
  /* de930: nop  */
  /* nop: no architectural effect here */
  /* de934: adr x11, #0x58470 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(361584)));
  /* de938: ldrh w10, [x11, w10, uxtw #1] */
  ARC_W_W(c, 10, arc_ld16((ARC_X_R(c, 11) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 10)))) << 1))));
  /* de93c: sturh w10, [x8, #-2] */
  arc_st16((ARC_X_R(c, 8) + INT64_C(-2)), ARC_W_R(c, 10));
  /* de940: cmp w3, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(1));
  /* de944: b.ge #0xde994 */
  if (ARC_COND(c, 10)) goto L_de994;
L_de948:;
  /* de948: cbz w3, #0xde9b0 */
  if ((ARC_W_R(c, 3)) == 0) goto L_de9b0;
  /* de94c: cmp w19, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 19), UINT64_C(1));
  /* de950: b.lt #0xde9d8 */
  if (ARC_COND(c, 11)) goto L_de9d8;
  /* de954: add x1, x0, #1 */
  ARC_X_W(c, 1, (ARC_X_R(c, 0) + UINT64_C(1)));
  /* de958: mov x2, x19 */
  ARC_X_W(c, 2, ARC_X_R(c, 19));
  /* de95c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* de960: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(911716));
  fn1_1449f0(c);
  /* de964: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* de968: mov w8, #0x2e */
  ARC_W_W(c, 8, UINT64_C(46));
  /* de96c: strb w8, [x20, x19] */
  arc_st8((ARC_X_R(c, 20) + ARC_X_R(c, 19)), ARC_W_R(c, 8));
  /* de970: b #0xde9b0 */
  goto L_de9b0;
L_de974:;
  /* de974: mov w10, w2 */
  ARC_W_W(c, 10, ARC_W_R(c, 2));
  /* de978: cmp w10, #0x64 */
  (void)arc_sub32(c, ARC_W_R(c, 10), UINT64_C(100));
  /* de97c: b.hs #0xde8f8 */
  if (ARC_COND(c, 2)) goto L_de8f8;
  /* de980: b #0xde928 */
  goto L_de928;
L_de984:;
  /* de984: orr w10, w10, #0x30 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(48)));
  /* de988: sturb w10, [x8, #-1] */
  arc_st8((ARC_X_R(c, 8) + INT64_C(-1)), ARC_W_R(c, 10));
  /* de98c: cmp w3, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 3), UINT64_C(1));
  /* de990: b.lt #0xde948 */
  if (ARC_COND(c, 11)) goto L_de948;
L_de994:;
  /* de994: add x8, x0, w9, uxtw */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ((uint64_t)(uint32_t)(ARC_W_R(c, 9)))));
  /* de998: and x2, x3, #0x7fffffff */
  ARC_X_W(c, 2, (ARC_X_R(c, 3) & UINT64_C(2147483647)));
L_de99c:;
  /* de99c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* de9a0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* de9a4: mov w1, #0x30 */
  ARC_W_W(c, 1, UINT64_C(48));
  /* de9a8: bl #0x144a20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(911788));
  fn1_144a20(c);
  /* de9ac: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
L_de9b0:;
  /* de9b0: mov x11, xzr */
  ARC_X_W(c, 11, ARC_X_R(c, 31));
  /* de9b4: mov x9, xzr */
  ARC_X_W(c, 9, ARC_X_R(c, 31));
  /* de9b8: add x8, x0, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 0) + ARC_X_R(c, 21)));
L_de9bc:;
  /* de9bc: orr x1, x9, x11 */
  ARC_X_W(c, 1, (ARC_X_R(c, 9) | ARC_X_R(c, 11)));
  /* de9c0: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* de9c4: ldp x20, x19, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* de9c8: ldr x21, [sp, #0x10] */
  ARC_X_W(c, 21, arc_ld64(((c)->sp + INT64_C(16))));
  /* de9cc: ldp x29, x30, [sp], #0x30 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(48);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* de9d0: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* de9d4: ret  */
  return;
L_de9d8:;
  /* de9d8: mov w9, #0x2e30 */
  ARC_W_W(c, 9, UINT64_C(11824));
  /* de9dc: mov x8, x0 */
  ARC_X_W(c, 8, ARC_X_R(c, 0));
  /* de9e0: neg w2, w19 */
  ARC_W_W(c, 2, ((uint32_t)0 - (uint32_t)(ARC_W_R(c, 19))));
  /* de9e4: strh w9, [x8], #2 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 9));
  }
  /* de9e8: b #0xde99c */
  goto L_de99c;
}

void fn1_e1dac(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038853036));
  /* e1dac: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e1db0: stp x29, x30, [sp, #-0x60]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-96));
    (c)->sp = (c)->sp + INT64_C(-96);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e1db4: stp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* e1db8: stp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* e1dbc: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* e1dc0: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e1dc4: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e1dc8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e1dcc: ldrb w9, [x0] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 0)));
  /* e1dd0: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* e1dd4: lsr x10, x9, #1 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(1)) & 63)));
  /* e1dd8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e1ddc: csel x20, x10, x8, eq */
  ARC_X_W(c, 20, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* e1de0: subs x8, x20, x1 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 1)));
  /* e1de4: b.lo #0xe1f7c */
  if (ARC_COND(c, 3)) goto L_e1f7c;
  /* e1de8: ldr x10, [x0] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 0)));
  /* e1dec: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* e1df0: mov x23, x1 */
  ARC_X_W(c, 23, ARC_X_R(c, 1));
  /* e1df4: csel x24, x8, x2, lo */
  ARC_X_W(c, 24, (ARC_COND(c, 3) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 2)));
  /* e1df8: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* e1dfc: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* e1e00: and x11, x10, #0xfffffffffffffffe */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(18446744073709551614)));
  /* e1e04: mov x21, x4 */
  ARC_X_W(c, 21, ARC_X_R(c, 4));
  /* e1e08: mov x22, x3 */
  ARC_X_W(c, 22, ARC_X_R(c, 3));
  /* e1e0c: sub x11, x11, #1 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) - UINT64_C(1)));
  /* e1e10: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e1e14: csel x1, x9, x11, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 11)));
  /* e1e18: sub x9, x24, x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 24) - ARC_X_R(c, 20)));
  /* e1e1c: add x9, x9, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 1)));
  /* e1e20: cmp x9, x4 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 4));
  /* e1e24: b.hs #0xe1e54 */
  if (ARC_COND(c, 2)) goto L_e1e54;
  /* e1e28: add x8, x20, x21 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + ARC_X_R(c, 21)));
  /* e1e2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e1e30: mov x3, x20 */
  ARC_X_W(c, 3, ARC_X_R(c, 20));
  /* e1e34: sub x8, x8, x1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) - ARC_X_R(c, 1)));
  /* e1e38: mov x4, x23 */
  ARC_X_W(c, 4, ARC_X_R(c, 23));
  /* e1e3c: mov x5, x24 */
  ARC_X_W(c, 5, ARC_X_R(c, 24));
  /* e1e40: sub x2, x8, x24 */
  ARC_X_W(c, 2, (ARC_X_R(c, 8) - ARC_X_R(c, 24)));
  /* e1e44: mov x6, x21 */
  ARC_X_W(c, 6, ARC_X_R(c, 21));
  /* e1e48: mov x7, x22 */
  ARC_X_W(c, 7, ARC_X_R(c, 22));
  /* e1e4c: bl #0x142d40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925264));
  fn1_142d40(c);
  /* e1e50: b #0xe1f58 */
  goto L_e1f58;
L_e1e54:;
  /* e1e54: ldr x9, [x19, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(16))));
  /* e1e58: add x11, x19, #4 */
  ARC_X_W(c, 11, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e1e5c: tst x10, #1 */
  arc_flags_logical64(c, (uint64_t)(ARC_X_R(c, 10) & UINT64_C(1)));
  /* e1e60: csel x26, x11, x9, eq */
  ARC_X_W(c, 26, (ARC_COND(c, 0) ? (ARC_X_R(c, 11)) : ARC_X_R(c, 9)));
  /* e1e64: cmp x21, x24 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24));
  /* e1e68: b.ne #0xe1e74 */
  if (ARC_COND(c, 1)) goto L_e1e74;
  /* e1e6c: mov x24, x21 */
  ARC_X_W(c, 24, ARC_X_R(c, 21));
  /* e1e70: b #0xe1f28 */
  goto L_e1f28;
L_e1e74:;
  /* e1e74: cmp x8, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 2));
  /* e1e78: b.ls #0xe1f28 */
  if (ARC_COND(c, 9)) goto L_e1f28;
  /* e1e7c: add x25, x26, x23, lsl #2 */
  ARC_X_W(c, 25, (ARC_X_R(c, 26) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* e1e80: subs x28, x21, x24 */
  ARC_X_W(c, 28, arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 24)));
  /* e1e84: sub x27, x8, x24 */
  ARC_X_W(c, 27, (ARC_X_R(c, 8) - ARC_X_R(c, 24)));
  /* e1e88: b.hs #0xe1ec4 */
  if (ARC_COND(c, 2)) goto L_e1ec4;
  /* e1e8c: cbz x21, #0xe1ea0 */
  if ((ARC_X_R(c, 21)) == 0) goto L_e1ea0;
  /* e1e90: lsl x2, x21, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(2)) & 63)));
  /* e1e94: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* e1e98: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e1e9c: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925344));
  fn1_1449f0(c);
L_e1ea0:;
  /* e1ea0: add x0, x25, x21, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 25) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* e1ea4: add x1, x25, x24, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 25) + ((uint64_t)(ARC_X_R(c, 24)) << 2)));
  /* e1ea8: lsl x2, x27, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 27)) << ((UINT64_C(2)) & 63)));
  /* e1eac: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925360));
  fn1_1449f0(c);
  /* e1eb0: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e1eb4: add x8, x28, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 28) + ARC_X_R(c, 20)));
  /* e1eb8: tbz w9, #0, #0xe1f4c */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_e1f4c;
L_e1ebc:;
  /* e1ebc: str x8, [x19, #8] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(8)), ARC_X_R(c, 8));
  /* e1ec0: b #0xe1f54 */
  goto L_e1f54;
L_e1ec4:;
  /* e1ec4: add x8, x26, x20, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + ((uint64_t)(ARC_X_R(c, 20)) << 2)));
  /* e1ec8: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* e1ecc: b.hs #0xe1f14 */
  if (ARC_COND(c, 2)) goto L_e1f14;
  /* e1ed0: add x8, x25, #4 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + UINT64_C(4)));
  /* e1ed4: cmp x22, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 22), ARC_X_R(c, 8));
  /* e1ed8: b.lo #0xe1f14 */
  if (ARC_COND(c, 3)) goto L_e1f14;
  /* e1edc: add x8, x25, x24, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 25) + ((uint64_t)(ARC_X_R(c, 24)) << 2)));
  /* e1ee0: cmp x8, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 22));
  /* e1ee4: b.ls #0xe1f10 */
  if (ARC_COND(c, 9)) goto L_e1f10;
  /* e1ee8: cbz x2, #0xe1efc */
  if ((ARC_X_R(c, 2)) == 0) goto L_e1efc;
  /* e1eec: lsl x2, x24, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 24)) << ((UINT64_C(2)) & 63)));
  /* e1ef0: mov x0, x25 */
  ARC_X_W(c, 0, ARC_X_R(c, 25));
  /* e1ef4: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e1ef8: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925436));
  fn1_1449f0(c);
L_e1efc:;
  /* e1efc: add x22, x22, x21, lsl #2 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* e1f00: add x23, x24, x23 */
  ARC_X_W(c, 23, (ARC_X_R(c, 24) + ARC_X_R(c, 23)));
  /* e1f04: mov x21, x28 */
  ARC_X_W(c, 21, ARC_X_R(c, 28));
  /* e1f08: mov x24, xzr */
  ARC_X_W(c, 24, ARC_X_R(c, 31));
  /* e1f0c: b #0xe1f14 */
  goto L_e1f14;
L_e1f10:;
  /* e1f10: add x22, x22, x28, lsl #2 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ((uint64_t)(ARC_X_R(c, 28)) << 2)));
L_e1f14:;
  /* e1f14: add x8, x26, x23, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* e1f18: lsl x2, x27, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 27)) << ((UINT64_C(2)) & 63)));
  /* e1f1c: add x0, x8, x21, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 21)) << 2)));
  /* e1f20: add x1, x8, x24, lsl #2 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 24)) << 2)));
  /* e1f24: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925480));
  fn1_1449f0(c);
L_e1f28:;
  /* e1f28: cbz x21, #0xe1f3c */
  if ((ARC_X_R(c, 21)) == 0) goto L_e1f3c;
  /* e1f2c: add x0, x26, x23, lsl #2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 26) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
  /* e1f30: lsl x2, x21, #2 */
  ARC_X_W(c, 2, ((uint64_t)(ARC_X_R(c, 21)) << ((UINT64_C(2)) & 63)));
  /* e1f34: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* e1f38: bl #0x1449f0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925500));
  fn1_1449f0(c);
L_e1f3c:;
  /* e1f3c: ldrb w9, [x19] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 19)));
  /* e1f40: sub x8, x21, x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 21) - ARC_X_R(c, 24)));
  /* e1f44: add x8, x8, x20 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + ARC_X_R(c, 20)));
  /* e1f48: tbnz w9, #0, #0xe1ebc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_e1ebc;
L_e1f4c:;
  /* e1f4c: lsl w9, w8, #1 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 8)) << ((UINT64_C(1)) & 31)));
  /* e1f50: strb w9, [x19] */
  arc_st8(ARC_X_R(c, 19), ARC_W_R(c, 9));
L_e1f54:;
  /* e1f54: str wzr, [x26, x8, lsl #2] */
  arc_st32((ARC_X_R(c, 26) + ((uint64_t)(ARC_X_R(c, 8)) << 2)), ARC_W_R(c, 31));
L_e1f58:;
  /* e1f58: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e1f5c: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e1f60: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e1f64: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* e1f68: ldp x26, x25, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* e1f6c: ldp x28, x27, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* e1f70: ldp x29, x30, [sp], #0x60 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(96);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e1f74: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e1f78: ret  */
  return;
L_e1f7c:;
  /* e1f7c: bl #0xe1f80 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(925568));
  fn1_e1f80(c);
}

void fn1_e4adc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038864604));
  /* e4adc: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e4ae0: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* e4ae4: str d8, [sp, #0x40] */
  arc_st64(((c)->sp + INT64_C(64)), (c)->q[8].u64[0]);
  /* e4ae8: stp x29, x30, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e4aec: str x23, [sp, #0x58] */
  arc_st64(((c)->sp + INT64_C(88)), ARC_X_R(c, 23));
  /* e4af0: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* e4af4: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* e4af8: add x29, sp, #0x48 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(72)));
  /* e4afc: mov w8, #8 */
  ARC_W_W(c, 8, UINT64_C(8));
  /* e4b00: mov w22, #0x7473 */
  ARC_W_W(c, 22, UINT64_C(29811));
  /* e4b04: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* e4b08: strb w8, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 8));
  /* e4b0c: ldrb w8, [x0] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 0)));
  /* e4b10: movk w22, #0x646f, lsl #16 */
  ARC_W_W(c, 22, ((ARC_W_R(c, 22) & UINT64_C(18446744069414649855)) | UINT64_C(1684996096)));
  /* e4b14: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* e4b18: stur w22, [sp, #9] */
  arc_st32(((c)->sp + INT64_C(9)), ARC_W_R(c, 22));
  /* e4b1c: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* e4b20: strb wzr, [sp, #0xd] */
  arc_st8(((c)->sp + INT64_C(13)), ARC_W_R(c, 31));
  /* e4b24: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* e4b28: csinc x20, x9, x0, ne */
  ARC_X_W(c, 20, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 0)) + 1)));
  /* e4b2c: bl #0x142a58 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936752));
  fn1_142a58(c);
  /* e4b30: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* e4b34: ldr w23, [x0] */
  ARC_W_W(c, 23, arc_ld32(ARC_X_R(c, 0)));
  /* e4b38: str wzr, [x0] */
  arc_st32(ARC_X_R(c, 0), ARC_W_R(c, 31));
  /* e4b3c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* e4b40: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* e4b44: bl #0x142ef0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936776));
  fn1_142ef0(c);
  /* e4b48: ldr w8, [x21] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 21)));
  /* e4b4c: str w23, [x21] */
  arc_st32(ARC_X_R(c, 21), ARC_W_R(c, 23));
  /* e4b50: cmp w8, #0x22 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(34));
  /* e4b54: b.eq #0xe4b9c */
  if (ARC_COND(c, 0)) goto L_e4b9c;
  /* e4b58: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* e4b5c: subs x8, x8, x20 */
  ARC_X_W(c, 8, arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 20)));
  /* e4b60: b.eq #0xe4bd0 */
  if (ARC_COND(c, 0)) goto L_e4bd0;
  /* e4b64: fmov d8, d0 */
  arc_du_w(c, 8, (uint64_t)(ARC_DU_R(c, 0)));
  /* e4b68: cbz x19, #0xe4b70 */
  if ((ARC_X_R(c, 19)) == 0) goto L_e4b70;
  /* e4b6c: str x8, [x19] */
  arc_st64(ARC_X_R(c, 19), ARC_X_R(c, 8));
L_e4b70:;
  /* e4b70: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4b74: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936824));
  fn1_142e00(c);
  /* e4b78: fmov d0, d8 */
  arc_du_w(c, 0, (uint64_t)(ARC_DU_R(c, 8)));
  /* e4b7c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* e4b80: ldr x23, [sp, #0x58] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(88))));
  /* e4b84: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* e4b88: ldr d8, [sp, #0x40] */
  arc_du_w(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* e4b8c: ldp x29, x30, [sp, #0x48] */
  { const uint64_t _pa = ((c)->sp + INT64_C(72));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e4b90: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* e4b94: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e4b98: ret  */
  return;
L_e4b9c:;
  /* e4b9c: mov w8, #0x24 */
  ARC_W_W(c, 8, UINT64_C(36));
  /* e4ba0: adrp x9, #0x51000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(331776)));
  /* e4ba4: add x9, x9, #0xa7d */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(2685)));
  /* e4ba8: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e4bac: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* e4bb0: ldur x8, [x9, #6] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(6))));
  /* e4bb4: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* e4bb8: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e4bbc: stur w22, [x29, #-0x1f] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-31)), ARC_W_R(c, 22));
  /* e4bc0: stur x10, [x29, #-0x1b] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-27)), ARC_X_R(c, 10));
  /* e4bc4: stur x8, [x29, #-0x15] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-21)), ARC_X_R(c, 8));
  /* e4bc8: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4bcc: bl #0xda038 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936912));
  fn1_da038(c);
L_e4bd0:;
  /* e4bd0: mov w8, #0x26 */
  ARC_W_W(c, 8, UINT64_C(38));
  /* e4bd4: adrp x9, #0x50000 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(327680)));
  /* e4bd8: add x9, x9, #0x1dd */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(477)));
  /* e4bdc: ldr x10, [x9] */
  ARC_X_W(c, 10, arc_ld64(ARC_X_R(c, 9)));
  /* e4be0: sturb w8, [x29, #-0x20] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-32)), ARC_W_R(c, 8));
  /* e4be4: ldur x8, [x9, #7] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(7))));
  /* e4be8: stur xzr, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 31));
  /* e4bec: sub x9, x29, #0x20 */
  ARC_X_W(c, 9, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e4bf0: stur w22, [x29, #-0x1f] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-31)), ARC_W_R(c, 22));
  /* e4bf4: stur x10, [x29, #-0x1b] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-27)), ARC_X_R(c, 10));
  /* e4bf8: stur x8, [x29, #-0x14] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-20)), ARC_X_R(c, 8));
  /* e4bfc: orr x0, x9, #1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 9) | UINT64_C(1)));
  /* e4c00: bl #0xe78a0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936964));
  fn1_e78a0(c);
  /* e4c04: b #0xe4c08 */
  goto L_e4c08;
L_e4c08:;
  /* e4c08: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* e4c0c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* e4c10: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936980));
  fn1_142e00(c);
  /* e4c14: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* e4c18: bl #0x142e00 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936988));
  fn1_142e00(c);
  /* e4c1c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* e4c20: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(936996));
  fn1_9cc20(c);
}

void fn1_e8e80(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038881920));
  /* e8e80: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* e8e84: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* e8e88: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* e8e8c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* e8e90: mov x8, #0x2d69 */
  ARC_X_W(c, 8, UINT64_C(11625));
  /* e8e94: lsl w9, w0, #3 */
  ARC_W_W(c, 9, ((uint32_t)(ARC_W_R(c, 0)) << ((UINT64_C(3)) & 31)));
  /* e8e98: lsr x10, x0, #0x20 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 0)) >> ((UINT64_C(32)) & 63)));
  /* e8e9c: movk x8, #0xeb38, lsl #16 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446744069414649855)) | UINT64_C(3946315776)));
  /* e8ea0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* e8ea4: movk x8, #0xea08, lsl #32 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(18446462603027808255)) | UINT64_C(257320080637952)));
  /* e8ea8: add x9, x9, #8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + UINT64_C(8)));
  /* e8eac: movk x8, #0x9ddf, lsl #48 */
  ARC_X_W(c, 8, ((ARC_X_R(c, 8) & UINT64_C(281474976710655)) | UINT64_C(11375811183761162240)));
  /* e8eb0: eor x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) ^ ARC_X_R(c, 10)));
  /* e8eb4: mul x9, x9, x8 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e8eb8: eor x10, x10, x9, lsr #47 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) ^ ((uint64_t)(ARC_X_R(c, 9)) >> 47)));
  /* e8ebc: eor x9, x10, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 10) ^ ARC_X_R(c, 9)));
  /* e8ec0: mul x8, x9, x8 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 8))));
  /* e8ec4: lsr x9, x8, #0x2f */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 8)) >> ((UINT64_C(47)) & 63)));
  /* e8ec8: eor w8, w9, w8 */
  ARC_W_W(c, 8, (ARC_W_R(c, 9) ^ ARC_W_R(c, 8)));
  /* e8ecc: mov w9, #0x69 */
  ARC_W_W(c, 9, UINT64_C(105));
  /* e8ed0: mul w8, w8, w9 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 8)) * (uint32_t)(ARC_W_R(c, 9))));
  /* e8ed4: nop  */
  /* nop: no architectural effect here */
  /* e8ed8: adr x9, #0x159240 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1413696)));
  /* e8edc: and x8, x8, #0xff */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) & UINT64_C(255)));
  /* e8ee0: add x19, x9, x8, lsl #6 */
  ARC_X_W(c, 19, (ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 8)) << 6)));
  /* e8ee4: add x1, x19, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e8ee8: bl #0xe8e50 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954092));
  fn1_e8e50(c);
  /* e8eec: ldar w8, [x19] */
  ARC_W_W(c, 8, arc_ld32(ARC_X_R(c, 19)));
  /* e8ef0: cbz w8, #0xe8f14 */
  if ((ARC_W_R(c, 8)) == 0) goto L_e8f14;
  /* e8ef4: add x1, x19, #4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(4)));
  /* e8ef8: mov w0, #0x62 */
  ARC_W_W(c, 0, UINT64_C(98));
  /* e8efc: mov w2, #0x81 */
  ARC_W_W(c, 2, UINT64_C(129));
  /* e8f00: mov w3, #0x7fffffff */
  ARC_W_W(c, 3, UINT64_C(2147483647));
  /* e8f04: mov w4, wzr */
  ARC_W_W(c, 4, ARC_W_R(c, 31));
  /* e8f08: mov w5, wzr */
  ARC_W_W(c, 5, ARC_W_R(c, 31));
  /* e8f0c: mov w6, wzr */
  ARC_W_W(c, 6, ARC_W_R(c, 31));
  /* e8f10: bl #0x142500 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954132));
  fn1_142500(c);
L_e8f14:;
  /* e8f14: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* e8f18: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* e8f1c: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* e8f20: ret  */
  return;
  /* e8f24: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(954152));
  fn1_a1454(c);
}

void fn1_eaf90(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038890384));
  /* eaf90: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* eaf94: stp x29, x30, [sp, #-0x20]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-32));
    (c)->sp = (c)->sp + INT64_C(-32);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* eaf98: str x19, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 19));
  /* eaf9c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* eafa0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* eafa4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962472));
  fn1_142518(c);
  /* eafa8: cbnz w0, #0xeafd0 */
  if ((ARC_W_R(c, 0)) != 0) goto L_eafd0;
  /* eafac: strb wzr, [x19, #0x58] */
  arc_st8((ARC_X_R(c, 19) + INT64_C(88)), ARC_W_R(c, 31));
  /* eafb0: add x0, x19, #0x28 */
  ARC_X_W(c, 0, (ARC_X_R(c, 19) + UINT64_C(40)));
  /* eafb4: bl #0x143100 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962488));
  fn1_143100(c);
  /* eafb8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* eafbc: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962496));
  fn1_142560(c);
  /* eafc0: ldr x19, [sp, #0x10] */
  ARC_X_W(c, 19, arc_ld64(((c)->sp + INT64_C(16))));
  /* eafc4: ldp x29, x30, [sp], #0x20 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(32);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* eafc8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* eafcc: ret  */
  return;
L_eafd0:;
  /* eafd0: nop  */
  /* nop: no architectural effect here */
  /* eafd4: adr x1, #0x50f67 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331623)));
  /* eafd8: bl #0x142a40 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962524));
  fn1_142a40(c);
  /* eafdc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962528));
  fn1_a1454(c);
  /* eafe0: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962532));
  fn1_a1454(c);
  /* eafe4: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(962536));
  fn1_a1454(c);
}

void fn1_ecf44(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038898500));
  /* ecf44: bti c */
  /* bti: no architectural effect here */
  /* ecf48: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_ef2f8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038907640));
  /* ef2f8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* ef2fc: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* ef300: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* ef304: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* ef308: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* ef30c: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* ef310: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef314: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* ef318: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* ef31c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* ef320: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* ef324: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* ef328: bl #0x1435f8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979756));
  fn1_1435f8(c);
  /* ef32c: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* ef330: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* ef334: b.ne #0xef3fc */
  if (ARC_COND(c, 1)) goto L_ef3fc;
  /* ef338: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef33c: nop  */
  /* nop: no architectural effect here */
  /* ef340: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* ef344: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef348: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef34c: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* ef350: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef354: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* ef358: b.eq #0xef368 */
  if (ARC_COND(c, 0)) goto L_ef368;
  /* ef35c: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef360: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* ef364: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979816));
  fn1_db2e0(c);
L_ef368:;
  /* ef368: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* ef36c: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* ef370: ldr x1, [x1, #0xb48] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2888))));
  /* ef374: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979832));
  fn1_143748(c);
  /* ef378: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef37c: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* ef380: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef384: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef388: ldr x8, [x9, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(88))));
  /* ef38c: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* ef390: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* ef394: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* ef398: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* ef39c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979872));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* ef3a0: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef3a4: b.eq #0xef3c8 */
  if (ARC_COND(c, 0)) goto L_ef3c8;
  /* ef3a8: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef3ac: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef3b0: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979892));
  fn1_bd950(c);
  /* ef3b4: cbnz x0, #0xef3c8 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef3c8;
  /* ef3b8: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef3bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef3c0: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef3c4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(979912));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef3c8:;
  /* ef3c8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef3cc: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef3d0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef3d4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef3d8: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* ef3dc: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* ef3e0: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* ef3e4: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef3e8: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* ef3ec: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* ef3f0: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* ef3f4: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* ef3f8: b.ne #0xef418 */
  if (ARC_COND(c, 1)) goto L_ef418;
L_ef3fc:;
  /* ef3fc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef400: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* ef404: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* ef408: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* ef40c: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* ef410: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* ef414: ret  */
  return;
L_ef418:;
  /* ef418: nop  */
  /* nop: no architectural effect here */
  /* ef41c: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* ef420: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980004));
  fn1_ec720(c);
  /* ef424: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* ef428: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* ef42c: b.eq #0xef450 */
  if (ARC_COND(c, 0)) goto L_ef450;
  /* ef430: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* ef434: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* ef438: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980028));
  fn1_bd950(c);
  /* ef43c: cbnz x0, #0xef450 */
  if ((ARC_X_R(c, 0)) != 0) goto L_ef450;
  /* ef440: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* ef444: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* ef448: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* ef44c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980048));
  arc_dispatch(c, ARC_X_R(c, 8));
L_ef450:;
  /* ef450: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* ef454: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980056));
  fn1_142548(c);
  /* ef458: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* ef45c: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* ef460: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef464: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* ef468: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* ef46c: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* ef470: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* ef474: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* ef478: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* ef47c: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* ef480: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* ef484: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* ef488: tbnz w8, #0, #0xef494 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_ef494;
  /* ef48c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980112));
  fn1_142980(c);
  /* ef490: b #0xef3c8 */
  goto L_ef3c8;
L_ef494:;
  /* ef494: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980120));
  fn1_1429b0(c);
  /* ef498: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* ef49c: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980128));
  fn1_142980(c);
  /* ef4a0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* ef4a4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980136));
  fn1_9cc20(c);
  /* ef4a8: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(980140));
  fn1_a1454(c);
}

void fn1_f3968(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038925672));
  /* f3968: bti c */
  /* bti: no architectural effect here */
  /* f396c: b #0x1433b8 */
  fn1_1433b8(c); return;
}

void fn1_f5d2c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038934828));
  /* f5d2c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* f5d30: sub sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(64)));
  /* f5d34: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* f5d38: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* f5d3c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* f5d40: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* f5d44: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5d48: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* f5d4c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* f5d50: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* f5d54: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* f5d58: stur wzr, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 31));
  /* f5d5c: bl #0x143670 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1006944));
  fn1_143670(c);
  /* f5d60: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* f5d64: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* f5d68: b.ne #0xf5e30 */
  if (ARC_COND(c, 1)) goto L_f5e30;
  /* f5d6c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5d70: nop  */
  /* nop: no architectural effect here */
  /* f5d74: adr x22, #0x15dc40 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1432640)));
  /* f5d78: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5d7c: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5d80: ldr x20, [x8, #0x30] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + INT64_C(48))));
  /* f5d84: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5d88: str x20, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 20));
  /* f5d8c: b.eq #0xf5d9c */
  if (ARC_COND(c, 0)) goto L_f5d9c;
  /* f5d90: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5d94: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* f5d98: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007004));
  fn1_db2e0(c);
L_f5d9c:;
  /* f5d9c: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* f5da0: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* f5da4: ldr x1, [x1, #0xb60] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(2912))));
  /* f5da8: bl #0x143748 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007020));
  fn1_143748(c);
  /* f5dac: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5db0: ldr x9, [x0] */
  ARC_X_W(c, 9, arc_ld64(ARC_X_R(c, 0)));
  /* f5db4: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5db8: add x3, x19, x8 */
  ARC_X_W(c, 3, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5dbc: ldr x8, [x9, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 9) + INT64_C(88))));
  /* f5dc0: ldr x1, [x3, #0x28] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 3) + INT64_C(40))));
  /* f5dc4: sub x4, x29, #4 */
  ARC_X_W(c, 4, (ARC_X_R(c, 29) - UINT64_C(4)));
  /* f5dc8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* f5dcc: mov x5, x21 */
  ARC_X_W(c, 5, ARC_X_R(c, 21));
  /* f5dd0: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007060));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* f5dd4: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5dd8: b.eq #0xf5dfc */
  if (ARC_COND(c, 0)) goto L_f5dfc;
  /* f5ddc: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5de0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5de4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007080));
  fn1_bd950(c);
  /* f5de8: cbnz x0, #0xf5dfc */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5dfc;
  /* f5dec: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5df0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5df4: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5df8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007100));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5dfc:;
  /* f5dfc: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5e00: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5e04: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5e08: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5e0c: ldr x9, [x8, #0x28] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* f5e10: cmp x9, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(0));
  /* f5e14: ldp w11, w9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_W_W(c, 11, arc_ld32(_pa));
    ARC_W_W(c, 9, arc_ld32(_pa + 4));
  }
  /* f5e18: orr w10, w11, w10 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5e1c: cset w11, eq */
  ARC_W_W(c, 11, (ARC_COND(c, 0) ? 1 : 0));
  /* f5e20: orr w10, w10, w11 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | ARC_W_R(c, 11)));
  /* f5e24: tst w10, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 10) & ARC_W_R(c, 9)));
  /* f5e28: str w10, [x8, #0x20] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(32)), ARC_W_R(c, 10));
  /* f5e2c: b.ne #0xf5e4c */
  if (ARC_COND(c, 1)) goto L_f5e4c;
L_f5e30:;
  /* f5e30: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5e34: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* f5e38: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* f5e3c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* f5e40: add sp, sp, #0x40 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(64)));
  /* f5e44: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* f5e48: ret  */
  return;
L_f5e4c:;
  /* f5e4c: nop  */
  /* nop: no architectural effect here */
  /* f5e50: adr x0, #0x50210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(328208)));
  /* f5e54: bl #0xec720 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007192));
  fn1_ec720(c);
  /* f5e58: cmp x20, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 20), ARC_X_R(c, 22));
  /* f5e5c: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* f5e60: b.eq #0xf5e84 */
  if (ARC_COND(c, 0)) goto L_f5e84;
  /* f5e64: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* f5e68: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* f5e6c: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007216));
  fn1_bd950(c);
  /* f5e70: cbnz x0, #0xf5e84 */
  if ((ARC_X_R(c, 0)) != 0) goto L_f5e84;
  /* f5e74: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* f5e78: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* f5e7c: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* f5e80: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007236));
  arc_dispatch(c, ARC_X_R(c, 8));
L_f5e84:;
  /* f5e84: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* f5e88: bl #0x142548 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007244));
  fn1_142548(c);
  /* f5e8c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* f5e90: ldur w10, [x29, #-4] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 29) + INT64_C(-4))));
  /* f5e94: ldur x9, [x8, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5e98: orr w10, w10, #1 */
  ARC_W_W(c, 10, (ARC_W_R(c, 10) | UINT64_C(1)));
  /* f5e9c: stur w10, [x29, #-4] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-4)), ARC_W_R(c, 10));
  /* f5ea0: add x9, x19, x9 */
  ARC_X_W(c, 9, (ARC_X_R(c, 19) + ARC_X_R(c, 9)));
  /* f5ea4: ldr w11, [x9, #0x20] */
  ARC_W_W(c, 11, arc_ld32((ARC_X_R(c, 9) + INT64_C(32))));
  /* f5ea8: orr w11, w11, w10 */
  ARC_W_W(c, 11, (ARC_W_R(c, 11) | ARC_W_R(c, 10)));
  /* f5eac: str w11, [x9, #0x20] */
  arc_st32((ARC_X_R(c, 9) + INT64_C(32)), ARC_W_R(c, 11));
  /* f5eb0: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* f5eb4: add x8, x19, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 8)));
  /* f5eb8: ldrb w8, [x8, #0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 8) + INT64_C(36))));
  /* f5ebc: tbnz w8, #0, #0xf5ec8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_f5ec8;
  /* f5ec0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007300));
  fn1_142980(c);
  /* f5ec4: b #0xf5dfc */
  goto L_f5dfc;
L_f5ec8:;
  /* f5ec8: bl #0x1429b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007308));
  fn1_1429b0(c);
  /* f5ecc: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* f5ed0: bl #0x142980 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007316));
  fn1_142980(c);
  /* f5ed4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* f5ed8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007324));
  fn1_9cc20(c);
  /* f5edc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1007328));
  fn1_a1454(c);
}

void fn1_fb26c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038956652));
  /* fb26c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fb270: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fb274: str x23, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 23));
  /* fb278: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fb27c: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fb280: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* fb284: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fb288: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* fb28c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* fb290: ldr x8, [x20], #8 */
  { const uint64_t _a = ARC_X_R(c, 20);
    ARC_X_W(c, 20, ARC_X_R(c, 20) + INT64_C(8));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* fb294: ldr x9, [x21], #8 */
  { const uint64_t _a = ARC_X_R(c, 21);
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_a));
  }
  /* fb298: ldur x8, [x8, #-0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(-24))));
  /* fb29c: ldur x9, [x9, #-0x18] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(-24))));
  /* fb2a0: add x22, x0, x8 */
  ARC_X_W(c, 22, (ARC_X_R(c, 0) + ARC_X_R(c, 8)));
  /* fb2a4: add x23, x1, x9 */
  ARC_X_W(c, 23, (ARC_X_R(c, 1) + ARC_X_R(c, 9)));
  /* fb2a8: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* fb2ac: mov x1, x23 */
  ARC_X_W(c, 1, ARC_X_R(c, 23));
  /* fb2b0: bl #0x143400 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028788));
  fn1_143400(c);
  /* fb2b4: ldr x8, [x23, #0x88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 23) + INT64_C(136))));
  /* fb2b8: ldr x9, [x22, #0x88] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 22) + INT64_C(136))));
  /* fb2bc: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* fb2c0: ldr w10, [x23, #0x90] */
  ARC_W_W(c, 10, arc_ld32((ARC_X_R(c, 23) + INT64_C(144))));
  /* fb2c4: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* fb2c8: str x8, [x22, #0x88] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(136)), ARC_X_R(c, 8));
  /* fb2cc: ldr w8, [x22, #0x90] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 22) + INT64_C(144))));
  /* fb2d0: str x9, [x23, #0x88] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(136)), ARC_X_R(c, 9));
  /* fb2d4: str w10, [x22, #0x90] */
  arc_st32((ARC_X_R(c, 22) + INT64_C(144)), ARC_W_R(c, 10));
  /* fb2d8: str w8, [x23, #0x90] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(144)), ARC_W_R(c, 8));
  /* fb2dc: bl #0x143580 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1028832));
  fn1_143580(c);
  /* fb2e0: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* fb2e4: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fb2e8: ldr x23, [sp, #0x10] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(16))));
  /* fb2ec: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fb2f0: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fb2f4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fb2f8: ret  */
  return;
}

void fn1_fe90c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594038970636));
  /* fe90c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* fe910: sub sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(96)));
  /* fe914: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* fe918: stp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* fe91c: stp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* fe920: stp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* fe924: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* fe928: cmn w1, #1 */
  (void)arc_add32(c, ARC_W_R(c, 1), UINT64_C(1), 0);
  /* fe92c: b.eq #0xfe96c */
  if (ARC_COND(c, 0)) goto L_fe96c;
  /* fe930: ldrb w8, [x0, #0x58] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 0) + INT64_C(88))));
  /* fe934: mov w19, w1 */
  ARC_W_W(c, 19, ARC_W_R(c, 1));
  /* fe938: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* fe93c: sturb w1, [x29, #-0xc] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-12)), ARC_W_R(c, 1));
  /* fe940: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* fe944: b.ne #0xfe974 */
  if (ARC_COND(c, 1)) goto L_fe974;
  /* fe948: ldr x3, [x20, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* fe94c: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe950: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fe954: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* fe958: sturb w19, [x29, #-8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 19));
  /* fe95c: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042784));
  fn1_1427d0(c);
  /* fe960: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* fe964: csinv w19, w19, wzr, eq */
  ARC_W_W(c, 19, (ARC_COND(c, 0) ? (ARC_W_R(c, 19)) : (~(uint32_t)(ARC_W_R(c, 31)))));
  /* fe968: b #0xfea20 */
  goto L_fea20;
L_fe96c:;
  /* fe96c: mov w19, wzr */
  ARC_W_W(c, 19, ARC_W_R(c, 31));
  /* fe970: b #0xfea20 */
  goto L_fea20;
L_fe974:;
  /* fe974: sub x23, x29, #8 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe978: sub x24, x29, #0xc */
  ARC_X_W(c, 24, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* fe97c: sub x21, x29, #0xc */
  ARC_X_W(c, 21, (ARC_X_R(c, 29) - UINT64_C(12)));
  /* fe980: str x23, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 23));
L_fe984:;
  /* fe984: ldp x0, x1, [x20, #0x48] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(72));
    ARC_X_W(c, 0, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* fe988: orr x3, x24, #1 */
  ARC_X_W(c, 3, (ARC_X_R(c, 24) | UINT64_C(1)));
  /* fe98c: mov x4, sp */
  ARC_X_W(c, 4, (c)->sp);
  /* fe990: sub x5, x29, #8 */
  ARC_X_W(c, 5, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe994: add x6, x23, #8 */
  ARC_X_W(c, 6, (ARC_X_R(c, 23) + UINT64_C(8)));
  /* fe998: add x7, sp, #8 */
  ARC_X_W(c, 7, ((c)->sp + UINT64_C(8)));
  /* fe99c: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* fe9a0: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* fe9a4: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* fe9a8: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042860));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* fe9ac: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* fe9b0: cmp x8, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 21));
  /* fe9b4: b.eq #0xfea1c */
  if (ARC_COND(c, 0)) goto L_fea1c;
  /* fe9b8: mov w22, w0 */
  ARC_W_W(c, 22, ARC_W_R(c, 0));
  /* fe9bc: cmp w0, #3 */
  (void)arc_sub32(c, ARC_W_R(c, 0), UINT64_C(3));
  /* fe9c0: b.eq #0xfea00 */
  if (ARC_COND(c, 0)) goto L_fea00;
  /* fe9c4: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* fe9c8: b.hi #0xfea1c */
  if (ARC_COND(c, 8)) goto L_fea1c;
  /* fe9cc: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* fe9d0: ldr x3, [x20, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* fe9d4: sub x0, x29, #8 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(8)));
  /* fe9d8: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fe9dc: sub x21, x8, x23 */
  ARC_X_W(c, 21, (ARC_X_R(c, 8) - ARC_X_R(c, 23)));
  /* fe9e0: mov x2, x21 */
  ARC_X_W(c, 2, ARC_X_R(c, 21));
  /* fe9e4: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042920));
  fn1_1427d0(c);
  /* fe9e8: cmp x0, x21 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 21));
  /* fe9ec: b.ne #0xfea1c */
  if (ARC_COND(c, 1)) goto L_fea1c;
  /* fe9f0: ldr x21, [sp] */
  ARC_X_W(c, 21, arc_ld64((c)->sp));
  /* fe9f4: cmp w22, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 22), UINT64_C(1));
  /* fe9f8: b.eq #0xfe984 */
  if (ARC_COND(c, 0)) goto L_fe984;
  /* fe9fc: b #0xfea20 */
  goto L_fea20;
L_fea00:;
  /* fea00: ldr x3, [x20, #0x40] */
  ARC_X_W(c, 3, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* fea04: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* fea08: mov w1, #1 */
  ARC_W_W(c, 1, UINT64_C(1));
  /* fea0c: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* fea10: bl #0x1427d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1042964));
  fn1_1427d0(c);
  /* fea14: cmp x0, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 0), UINT64_C(1));
  /* fea18: b.eq #0xfea20 */
  if (ARC_COND(c, 0)) goto L_fea20;
L_fea1c:;
  /* fea1c: mov w19, #-1 */
  ARC_W_W(c, 19, UINT64_C(18446744073709551615));
L_fea20:;
  /* fea20: mov w0, w19 */
  ARC_W_W(c, 0, ARC_W_R(c, 19));
  /* fea24: ldp x20, x19, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* fea28: ldp x22, x21, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* fea2c: ldp x24, x23, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* fea30: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* fea34: add sp, sp, #0x60 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(96)));
  /* fea38: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* fea3c: ret  */
  return;
}

void fn1_10b298(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039022232));
  /* 10b298: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 10b29c: sub sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(192)));
  /* 10b2a0: stp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 10b2a4: stp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 10b2a8: stp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 10b2ac: stp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 10b2b0: stp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 10b2b4: stp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 10b2b8: add x29, sp, #0x60 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(96)));
  /* 10b2bc: nop  */
  /* nop: no architectural effect here */
  /* 10b2c0: adr x8, #0x15dc38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b2c4: mov x22, x4 */
  ARC_X_W(c, 22, ARC_X_R(c, 4));
  /* 10b2c8: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 10b2cc: mov w19, w3 */
  ARC_W_W(c, 19, ARC_W_R(c, 3));
  /* 10b2d0: mov x20, x2 */
  ARC_X_W(c, 20, ARC_X_R(c, 2));
  /* 10b2d4: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 10b2d8: adrp x23, #0x15d000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 10b2dc: tbz w8, #0, #0x10b4f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_10b4f0;
L_10b2e0:;
  /* 10b2e0: ldr x2, [x23, #0xc30] */
  ARC_X_W(c, 2, arc_ld64((ARC_X_R(c, 23) + INT64_C(3120))));
  /* 10b2e4: nop  */
  /* nop: no architectural effect here */
  /* 10b2e8: adr x3, #0x50087 */
  ARC_X_W(c, 3, (arc_image_bases[1] + UINT64_C(327815)));
  /* 10b2ec: sub x0, x29, #0x24 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 10b2f0: mov w1, #0x14 */
  ARC_W_W(c, 1, UINT64_C(20));
  /* 10b2f4: mov x4, x22 */
  ARC_X_W(c, 4, ARC_X_R(c, 22));
  /* 10b2f8: sub x22, x29, #0x24 */
  ARC_X_W(c, 22, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 10b2fc: bl #0x136860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094400));
  fn1_136860(c);
  /* 10b300: ldr w8, [x20, #8] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 20) + INT64_C(8))));
  /* 10b304: sxtw x25, w0 */
  ARC_X_W(c, 25, ((int64_t)(int32_t)(ARC_W_R(c, 0))));
  /* 10b308: mov w9, #0xb0 */
  ARC_W_W(c, 9, UINT64_C(176));
  /* 10b30c: and w8, w8, w9 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 10b310: add x22, x22, x25 */
  ARC_X_W(c, 22, (ARC_X_R(c, 22) + ARC_X_R(c, 25)));
  /* 10b314: cmp w8, #0x20 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(32));
  /* 10b318: mov x26, x22 */
  ARC_X_W(c, 26, ARC_X_R(c, 22));
  /* 10b31c: b.eq #0x10b378 */
  if (ARC_COND(c, 0)) goto L_10b378;
  /* 10b320: cmp w8, #0x10 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(16));
  /* 10b324: b.ne #0x10b374 */
  if (ARC_COND(c, 1)) goto L_10b374;
  /* 10b328: ldurb w8, [x29, #-0x24] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-36))));
  /* 10b32c: cmp w8, #0x2d */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(45));
  /* 10b330: b.eq #0x10b33c */
  if (ARC_COND(c, 0)) goto L_10b33c;
  /* 10b334: cmp w8, #0x2b */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(43));
  /* 10b338: b.ne #0x10b348 */
  if (ARC_COND(c, 1)) goto L_10b348;
L_10b33c:;
  /* 10b33c: sub x8, x29, #0x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 10b340: orr x26, x8, #1 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) | UINT64_C(1)));
  /* 10b344: b #0x10b378 */
  goto L_10b378;
L_10b348:;
  /* 10b348: cmp w25, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 25), UINT64_C(2));
  /* 10b34c: b.lt #0x10b374 */
  if (ARC_COND(c, 11)) goto L_10b374;
  /* 10b350: cmp w8, #0x30 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(48));
  /* 10b354: b.ne #0x10b374 */
  if (ARC_COND(c, 1)) goto L_10b374;
  /* 10b358: ldurb w8, [x29, #-0x23] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-35))));
  /* 10b35c: orr w8, w8, #0x20 */
  ARC_W_W(c, 8, (ARC_W_R(c, 8) | UINT64_C(32)));
  /* 10b360: cmp w8, #0x78 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(120));
  /* 10b364: b.ne #0x10b374 */
  if (ARC_COND(c, 1)) goto L_10b374;
  /* 10b368: sub x8, x29, #0x24 */
  ARC_X_W(c, 8, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 10b36c: orr x26, x8, #2 */
  ARC_X_W(c, 26, (ARC_X_R(c, 8) | UINT64_C(2)));
  /* 10b370: b #0x10b378 */
  goto L_10b378;
L_10b374:;
  /* 10b374: sub x26, x29, #0x24 */
  ARC_X_W(c, 26, (ARC_X_R(c, 29) - UINT64_C(36)));
L_10b378:;
  /* 10b378: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10b37c: add x1, x20, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(48)));
  /* 10b380: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094532));
  fn1_143460(c);
  /* 10b384: adrp x28, #0x151000 */
  ARC_X_W(c, 28, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10b388: ldr x28, [x28, #0xb40] */
  ARC_X_W(c, 28, arc_ld64((ARC_X_R(c, 28) + INT64_C(2880))));
  /* 10b38c: ldr x27, [sp, #8] */
  ARC_X_W(c, 27, arc_ld64(((c)->sp + INT64_C(8))));
  /* 10b390: ldar x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10b394: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 10b398: b.eq #0x10b454 */
  if (ARC_COND(c, 0)) goto L_10b454;
  /* 10b39c: nop  */
  /* nop: no architectural effect here */
  /* 10b3a0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b3a4: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094568));
  fn1_142518(c);
  /* 10b3a8: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10b3ac: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10b3b0: b.ne #0x10b3dc */
  if (ARC_COND(c, 1)) goto L_10b3dc;
  /* 10b3b4: nop  */
  /* nop: no architectural effect here */
  /* 10b3b8: adr x23, #0x15791c */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10b3bc: nop  */
  /* nop: no architectural effect here */
  /* 10b3c0: adr x24, #0x1578f4 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1407220)));
L_10b3c4:;
  /* 10b3c4: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10b3c8: mov x1, x24 */
  ARC_X_W(c, 1, ARC_X_R(c, 24));
  /* 10b3cc: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094608));
  fn1_142530(c);
  /* 10b3d0: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10b3d4: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 10b3d8: b.eq #0x10b3c4 */
  if (ARC_COND(c, 0)) goto L_10b3c4;
L_10b3dc:;
  /* 10b3dc: ldr x8, [x28] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 28)));
  /* 10b3e0: cbz x8, #0x10b3f4 */
  if ((ARC_X_R(c, 8)) == 0) goto L_10b3f4;
  /* 10b3e4: nop  */
  /* nop: no architectural effect here */
  /* 10b3e8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b3ec: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094640));
  fn1_142560(c);
  /* 10b3f0: b #0x10b454 */
  goto L_10b454;
L_10b3f4:;
  /* 10b3f4: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 10b3f8: stur x28, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 28));
  /* 10b3fc: sturb wzr, [x29, #-8] */
  arc_st8((ARC_X_R(c, 29) + INT64_C(-8)), ARC_W_R(c, 31));
  /* 10b400: str x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 10b404: nop  */
  /* nop: no architectural effect here */
  /* 10b408: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b40c: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094672));
  fn1_142560(c);
  /* 10b410: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 10b414: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 10b418: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 10b41c: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094688));
  fn1_a2030(c);
  /* 10b420: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 10b424: str w8, [x28, #8] */
  arc_st32((ARC_X_R(c, 28) + INT64_C(8)), ARC_W_R(c, 8));
  /* 10b428: nop  */
  /* nop: no architectural effect here */
  /* 10b42c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b430: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094708));
  fn1_142518(c);
  /* 10b434: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 10b438: stlr x8, [x28] */
  arc_st64(ARC_X_R(c, 28), ARC_X_R(c, 8));
  /* 10b43c: nop  */
  /* nop: no architectural effect here */
  /* 10b440: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 10b444: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094728));
  fn1_142560(c);
  /* 10b448: nop  */
  /* nop: no architectural effect here */
  /* 10b44c: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 10b450: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094740));
  fn1_142578(c);
L_10b454:;
  /* 10b454: ldp x8, x10, [x27, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 27) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 10b458: ldrsw x9, [x28, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 28) + INT64_C(8)))));
  /* 10b45c: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 10b460: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 10b464: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 10b468: b.hs #0x10b4ec */
  if (ARC_COND(c, 2)) goto L_10b4ec;
  /* 10b46c: ldr x23, [x8, x9, lsl #3] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 10b470: cbz x23, #0x10b4ec */
  if ((ARC_X_R(c, 23)) == 0) goto L_10b4ec;
  /* 10b474: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10b478: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094780));
  fn1_143478(c);
  /* 10b47c: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 10b480: sub x1, x29, #0x24 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 10b484: add x3, sp, #0x17 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(23)));
  /* 10b488: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 10b48c: mov x2, x22 */
  ARC_X_W(c, 2, ARC_X_R(c, 22));
  /* 10b490: sub x23, x29, #0x24 */
  ARC_X_W(c, 23, (ARC_X_R(c, 29) - UINT64_C(36)));
  /* 10b494: ldr x8, [x8, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(64))));
  /* 10b498: add x24, sp, #0x17 */
  ARC_X_W(c, 24, ((c)->sp + UINT64_C(23)));
  /* 10b49c: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094816));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 10b4a0: sub x8, x26, x23 */
  ARC_X_W(c, 8, (ARC_X_R(c, 26) - ARC_X_R(c, 23)));
  /* 10b4a4: add x3, x24, x25 */
  ARC_X_W(c, 3, (ARC_X_R(c, 24) + ARC_X_R(c, 25)));
  /* 10b4a8: cmp x26, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 26), ARC_X_R(c, 22));
  /* 10b4ac: add x8, x24, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 24) + ARC_X_R(c, 8)));
  /* 10b4b0: add x1, sp, #0x17 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(23)));
  /* 10b4b4: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 10b4b8: csel x2, x3, x8, eq */
  ARC_X_W(c, 2, (ARC_COND(c, 0) ? (ARC_X_R(c, 3)) : ARC_X_R(c, 8)));
  /* 10b4bc: mov x4, x20 */
  ARC_X_W(c, 4, ARC_X_R(c, 20));
  /* 10b4c0: mov w5, w19 */
  ARC_W_W(c, 5, ARC_W_R(c, 19));
  /* 10b4c4: bl #0x10b5d8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094856));
  fn1_10b5d8(c);
  /* 10b4c8: ldp x20, x19, [sp, #0xb0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(176));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 10b4cc: ldp x22, x21, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 10b4d0: ldp x24, x23, [sp, #0x90] */
  { const uint64_t _pa = ((c)->sp + INT64_C(144));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 10b4d4: ldp x26, x25, [sp, #0x80] */
  { const uint64_t _pa = ((c)->sp + INT64_C(128));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 10b4d8: ldp x28, x27, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 10b4dc: ldp x29, x30, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 10b4e0: add sp, sp, #0xc0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(192)));
  /* 10b4e4: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 10b4e8: ret  */
  return;
L_10b4ec:;
  /* 10b4ec: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094896));
  fn1_fc3b8(c);
L_10b4f0:;
  /* 10b4f0: nop  */
  /* nop: no architectural effect here */
  /* 10b4f4: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b4f8: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094908));
  fn1_1424b8(c);
  /* 10b4fc: cbz w0, #0x10b2e0 */
  if ((ARC_W_R(c, 0)) == 0) goto L_10b2e0;
  /* 10b500: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 10b504: add x1, x1, #0x6e4 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1764)));
  /* 10b508: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 10b50c: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 10b510: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094932));
  fn1_1441e0(c);
  /* 10b514: str x0, [x23, #0xc30] */
  arc_st64((ARC_X_R(c, 23) + INT64_C(3120)), ARC_X_R(c, 0));
  /* 10b518: nop  */
  /* nop: no architectural effect here */
  /* 10b51c: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b520: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094948));
  fn1_1424d0(c);
  /* 10b524: b #0x10b2e0 */
  goto L_10b2e0;
  /* 10b528: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b52c: nop  */
  /* nop: no architectural effect here */
  /* 10b530: adr x0, #0x15dc38 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432632)));
  /* 10b534: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094968));
  fn1_1424e8(c);
  /* 10b538: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b53c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094976));
  fn1_9cc20(c);
  /* 10b540: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 10b544: sub x0, x29, #0x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(16)));
  /* 10b548: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1094988));
  fn1_d2a78(c);
  /* 10b54c: b #0x10b558 */
  goto L_10b558;
  /* 10b550: b #0x10b554 */
  goto L_10b554;
L_10b554:;
  /* 10b554: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_10b558:;
  /* 10b558: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 10b55c: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095008));
  fn1_143478(c);
  /* 10b560: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 10b564: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1095016));
  fn1_9cc20(c);
}

void fn1_113224(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039054884));
  /* 113224: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 113228: sub sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(128)));
  /* 11322c: stp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 113230: stp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 28));
    arc_st64(_pa + 8, ARC_X_R(c, 27));
  }
  /* 113234: stp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 26));
    arc_st64(_pa + 8, ARC_X_R(c, 25));
  }
  /* 113238: stp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 11323c: stp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 113240: stp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 113244: add x29, sp, #0x20 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(32)));
  /* 113248: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11324c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 113250: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 113254: add x1, x2, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 2) + UINT64_C(48)));
  /* 113258: mov x20, x6 */
  ARC_X_W(c, 20, ARC_X_R(c, 6));
  /* 11325c: mov x25, x5 */
  ARC_X_W(c, 25, ARC_X_R(c, 5));
  /* 113260: str x4, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 4));
  /* 113264: mov w22, w3 */
  ARC_W_W(c, 22, ARC_W_R(c, 3));
  /* 113268: mov x23, x2 */
  ARC_X_W(c, 23, ARC_X_R(c, 2));
  /* 11326c: bl #0x143460 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127024));
  fn1_143460(c);
  /* 113270: adrp x21, #0x151000 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 113274: ldr x21, [x21, #0xb40] */
  ARC_X_W(c, 21, arc_ld64((ARC_X_R(c, 21) + INT64_C(2880))));
  /* 113278: ldr x28, [sp, #8] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(8))));
  /* 11327c: ldar x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 113280: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 113284: b.eq #0x113340 */
  if (ARC_COND(c, 0)) goto L_113340;
  /* 113288: nop  */
  /* nop: no architectural effect here */
  /* 11328c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 113290: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127060));
  fn1_142518(c);
  /* 113294: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 113298: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11329c: b.ne #0x1132c8 */
  if (ARC_COND(c, 1)) goto L_1132c8;
  /* 1132a0: nop  */
  /* nop: no architectural effect here */
  /* 1132a4: adr x26, #0x15791c */
  ARC_X_W(c, 26, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 1132a8: nop  */
  /* nop: no architectural effect here */
  /* 1132ac: adr x27, #0x1578f4 */
  ARC_X_W(c, 27, (arc_image_bases[1] + UINT64_C(1407220)));
L_1132b0:;
  /* 1132b0: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 1132b4: mov x1, x27 */
  ARC_X_W(c, 1, ARC_X_R(c, 27));
  /* 1132b8: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127100));
  fn1_142530(c);
  /* 1132bc: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1132c0: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 1132c4: b.eq #0x1132b0 */
  if (ARC_COND(c, 0)) goto L_1132b0;
L_1132c8:;
  /* 1132c8: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 1132cc: cbz x8, #0x1132e0 */
  if ((ARC_X_R(c, 8)) == 0) goto L_1132e0;
  /* 1132d0: nop  */
  /* nop: no architectural effect here */
  /* 1132d4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1132d8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127132));
  fn1_142560(c);
  /* 1132dc: b #0x113340 */
  goto L_113340;
L_1132e0:;
  /* 1132e0: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 1132e4: str x21, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 21));
  /* 1132e8: strb wzr, [sp, #0x18] */
  arc_st8(((c)->sp + INT64_C(24)), ARC_W_R(c, 31));
  /* 1132ec: str x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 1132f0: nop  */
  /* nop: no architectural effect here */
  /* 1132f4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 1132f8: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127164));
  fn1_142560(c);
  /* 1132fc: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 113300: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 113304: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 113308: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127180));
  fn1_a2030(c);
  /* 11330c: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 113310: str w8, [x21, #8] */
  arc_st32((ARC_X_R(c, 21) + INT64_C(8)), ARC_W_R(c, 8));
  /* 113314: nop  */
  /* nop: no architectural effect here */
  /* 113318: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11331c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127200));
  fn1_142518(c);
  /* 113320: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 113324: stlr x8, [x21] */
  arc_st64(ARC_X_R(c, 21), ARC_X_R(c, 8));
  /* 113328: nop  */
  /* nop: no architectural effect here */
  /* 11332c: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 113330: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127220));
  fn1_142560(c);
  /* 113334: nop  */
  /* nop: no architectural effect here */
  /* 113338: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11333c: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127232));
  fn1_142578(c);
L_113340:;
  /* 113340: ldp x8, x10, [x28, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 28) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 113344: ldrsw x9, [x21, #8] */
  ARC_X_W(c, 9, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 21) + INT64_C(8)))));
  /* 113348: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 11334c: sub x10, x10, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - ARC_X_R(c, 8)));
  /* 113350: cmp x9, x10, asr #3 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ((uint64_t)((int64_t)(ARC_X_R(c, 10)) >> 3)));
  /* 113354: b.hs #0x113538 */
  if (ARC_COND(c, 2)) goto L_113538;
  /* 113358: ldr x26, [x8, x9, lsl #3] */
  ARC_X_W(c, 26, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3))));
  /* 11335c: cbz x26, #0x113538 */
  if ((ARC_X_R(c, 26)) == 0) goto L_113538;
  /* 113360: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 113364: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127272));
  fn1_143478(c);
  /* 113368: b #0x113388 */
  goto L_113388;
L_11336c:;
  /* 11336c: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 113370: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 113374: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 113378: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127292));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11337c: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 113380: csel x19, xzr, x19, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
L_113384:;
  /* 113384: add x25, x25, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(1)));
L_113388:;
  /* 113388: cmp x25, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 25), ARC_X_R(c, 20));
  /* 11338c: b.eq #0x113508 */
  if (ARC_COND(c, 0)) goto L_113508;
  /* 113390: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 113394: ldrb w1, [x25] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 25)));
  /* 113398: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 11339c: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1133a0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1133a4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127336));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1133a8: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 1133ac: cmp w8, #0x25 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(37));
  /* 1133b0: b.ne #0x113420 */
  if (ARC_COND(c, 1)) goto L_113420;
  /* 1133b4: add x21, x25, #1 */
  ARC_X_W(c, 21, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 1133b8: cmp x21, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 21), ARC_X_R(c, 20));
  /* 1133bc: b.eq #0x113480 */
  if (ARC_COND(c, 0)) goto L_113480;
  /* 1133c0: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 1133c4: ldrb w1, [x21] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 21)));
  /* 1133c8: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 1133cc: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 1133d0: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 1133d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127384));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1133d8: and w8, w0, #0xff */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) & UINT64_C(255)));
  /* 1133dc: mov w27, w0 */
  ARC_W_W(c, 27, ARC_W_R(c, 0));
  /* 1133e0: cmp w8, #0x4f */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(79));
  /* 1133e4: b.eq #0x1133f0 */
  if (ARC_COND(c, 0)) goto L_1133f0;
  /* 1133e8: cmp w8, #0x45 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(69));
  /* 1133ec: b.ne #0x113448 */
  if (ARC_COND(c, 1)) goto L_113448;
L_1133f0:;
  /* 1133f0: add x28, x25, #2 */
  ARC_X_W(c, 28, (ARC_X_R(c, 25) + UINT64_C(2)));
  /* 1133f4: cmp x28, x20 */
  (void)arc_sub64(c, ARC_X_R(c, 28), ARC_X_R(c, 20));
  /* 1133f8: b.eq #0x1134a4 */
  if (ARC_COND(c, 0)) goto L_1134a4;
  /* 1133fc: ldr x8, [x26] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 26)));
  /* 113400: ldrb w1, [x28] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 28)));
  /* 113404: mov x0, x26 */
  ARC_X_W(c, 0, ARC_X_R(c, 26));
  /* 113408: mov w2, wzr */
  ARC_W_W(c, 2, ARC_W_R(c, 31));
  /* 11340c: ldr x8, [x8, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(72))));
  /* 113410: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127444));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113414: mov w5, w0 */
  ARC_W_W(c, 5, ARC_W_R(c, 0));
  /* 113418: mov x21, x28 */
  ARC_X_W(c, 21, ARC_X_R(c, 28));
  /* 11341c: b #0x113450 */
  goto L_113450;
L_113420:;
  /* 113420: cbz x19, #0x113384 */
  if ((ARC_X_R(c, 19)) == 0) goto L_113384;
  /* 113424: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 113428: ldrb w1, [x25] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 25)));
  /* 11342c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 113430: b.eq #0x11336c */
  if (ARC_COND(c, 0)) goto L_11336c;
  /* 113434: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 113438: add x25, x25, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 25) + UINT64_C(1)));
  /* 11343c: str x9, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 9));
  /* 113440: strb w1, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* 113444: b #0x113388 */
  goto L_113388;
L_113448:;
  /* 113448: mov w5, w27 */
  ARC_W_W(c, 5, ARC_W_R(c, 27));
  /* 11344c: mov w27, wzr */
  ARC_W_W(c, 27, ARC_W_R(c, 31));
L_113450:;
  /* 113450: ldr x8, [x24] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 24)));
  /* 113454: ldr x4, [sp] */
  ARC_X_W(c, 4, arc_ld64((c)->sp));
  /* 113458: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 11345c: mov x1, x19 */
  ARC_X_W(c, 1, ARC_X_R(c, 19));
  /* 113460: mov x2, x23 */
  ARC_X_W(c, 2, ARC_X_R(c, 23));
  /* 113464: mov w3, w22 */
  ARC_W_W(c, 3, ARC_W_R(c, 22));
  /* 113468: ldr x8, [x8, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(24))));
  /* 11346c: mov w6, w27 */
  ARC_W_W(c, 6, ARC_W_R(c, 27));
  /* 113470: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127540));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113474: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 113478: add x25, x21, #1 */
  ARC_X_W(c, 25, (ARC_X_R(c, 21) + UINT64_C(1)));
  /* 11347c: b #0x113388 */
  goto L_113388;
L_113480:;
  /* 113480: cbz x19, #0x113508 */
  if ((ARC_X_R(c, 19)) == 0) goto L_113508;
  /* 113484: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 113488: ldrb w1, [x25] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 25)));
  /* 11348c: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 113490: b.eq #0x1134f0 */
  if (ARC_COND(c, 0)) goto L_1134f0;
L_113494:;
  /* 113494: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 113498: str x9, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 9));
  /* 11349c: strb w1, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* 1134a0: b #0x113508 */
  goto L_113508;
L_1134a4:;
  /* 1134a4: cbz x19, #0x113508 */
  if ((ARC_X_R(c, 19)) == 0) goto L_113508;
  /* 1134a8: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1134ac: ldrb w1, [x25] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 25)));
  /* 1134b0: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1134b4: b.eq #0x1134c8 */
  if (ARC_COND(c, 0)) goto L_1134c8;
  /* 1134b8: add x9, x8, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 1134bc: str x9, [x19, #0x30] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(48)), ARC_X_R(c, 9));
  /* 1134c0: strb w1, [x8] */
  arc_st8(ARC_X_R(c, 8), ARC_W_R(c, 1));
  /* 1134c4: b #0x1134e0 */
  goto L_1134e0;
L_1134c8:;
  /* 1134c8: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1134cc: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1134d0: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 1134d4: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127640));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 1134d8: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 1134dc: b.eq #0x113530 */
  if (ARC_COND(c, 0)) goto L_113530;
L_1134e0:;
  /* 1134e0: ldp x8, x9, [x19, #0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 1134e4: ldrb w1, [x21] */
  ARC_W_W(c, 1, arc_ld8(ARC_X_R(c, 21)));
  /* 1134e8: cmp x8, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1134ec: b.ne #0x113494 */
  if (ARC_COND(c, 1)) goto L_113494;
L_1134f0:;
  /* 1134f0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 1134f4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1134f8: ldr x8, [x8, #0x68] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(104))));
  /* 1134fc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127680));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 113500: cmn w0, #1 */
  (void)arc_add32(c, ARC_W_R(c, 0), UINT64_C(1), 0);
  /* 113504: csel x19, xzr, x19, eq */
  ARC_X_W(c, 19, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 19)));
L_113508:;
  /* 113508: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11350c: ldp x20, x19, [sp, #0x70] */
  { const uint64_t _pa = ((c)->sp + INT64_C(112));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 113510: ldp x22, x21, [sp, #0x60] */
  { const uint64_t _pa = ((c)->sp + INT64_C(96));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 113514: ldp x24, x23, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 113518: ldp x26, x25, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 26, arc_ld64(_pa));
    ARC_X_W(c, 25, arc_ld64(_pa + 8));
  }
  /* 11351c: ldp x28, x27, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 28, arc_ld64(_pa));
    ARC_X_W(c, 27, arc_ld64(_pa + 8));
  }
  /* 113520: ldp x29, x30, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 113524: add sp, sp, #0x80 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(128)));
  /* 113528: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11352c: ret  */
  return;
L_113530:;
  /* 113530: mov x19, xzr */
  ARC_X_W(c, 19, ARC_X_R(c, 31));
  /* 113534: b #0x113508 */
  goto L_113508;
L_113538:;
  /* 113538: bl #0xfc3b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127740));
  fn1_fc3b8(c);
  /* 11353c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 113540: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 113544: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127752));
  fn1_d2a78(c);
  /* 113548: b #0x113554 */
  goto L_113554;
  /* 11354c: b #0x113550 */
  goto L_113550;
L_113550:;
  /* 113550: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_113554:;
  /* 113554: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 113558: bl #0x143478 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127772));
  fn1_143478(c);
  /* 11355c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 113560: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1127780));
  fn1_9cc20(c);
}

void fn1_114048(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039058504));
  /* 114048: bti c */
  /* bti: no architectural effect here */
  /* 11404c: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 114050: ldrb w10, [x9, #0x48]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(72));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(72));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 114054: tbnz w10, #0, #0x11406c */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_11406c;
  /* 114058: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 11405c: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 114060: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 114064: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 114068: ret  */
  return;
L_11406c:;
  /* 11406c: ldp x2, x1, [x0, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(80));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 114070: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 114074: b #0xe22b8 */
  fn1_e22b8(c); return;
}

void fn1_11f60c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039105036));
  /* 11f60c: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 11f610: sub sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(80)));
  /* 11f614: stp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 11f618: str x23, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 23));
  /* 11f61c: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 11f620: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 11f624: add x29, sp, #0x10 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(16)));
  /* 11f628: adrp x23, #0x151000 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f62c: mov x19, x1 */
  ARC_X_W(c, 19, ARC_X_R(c, 1));
  /* 11f630: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f634: ldr x23, [x23, #0xca8] */
  ARC_X_W(c, 23, arc_ld64((ARC_X_R(c, 23) + INT64_C(3240))));
  /* 11f638: ldar x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f63c: cmn x8, #1 */
  (void)arc_add64(c, ARC_X_R(c, 8), UINT64_C(1), 0);
  /* 11f640: b.eq #0x11f6fc */
  if (ARC_COND(c, 0)) goto L_11f6fc;
  /* 11f644: nop  */
  /* nop: no architectural effect here */
  /* 11f648: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f64c: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177168));
  fn1_142518(c);
  /* 11f650: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f654: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f658: b.ne #0x11f684 */
  if (ARC_COND(c, 1)) goto L_11f684;
  /* 11f65c: nop  */
  /* nop: no architectural effect here */
  /* 11f660: adr x21, #0x15791c */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f664: nop  */
  /* nop: no architectural effect here */
  /* 11f668: adr x22, #0x1578f4 */
  ARC_X_W(c, 22, (arc_image_bases[1] + UINT64_C(1407220)));
L_11f66c:;
  /* 11f66c: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f670: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 11f674: bl #0x142530 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177208));
  fn1_142530(c);
  /* 11f678: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f67c: cmp x8, #1 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(1));
  /* 11f680: b.eq #0x11f66c */
  if (ARC_COND(c, 0)) goto L_11f66c;
L_11f684:;
  /* 11f684: ldr x8, [x23] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 23)));
  /* 11f688: cbz x8, #0x11f69c */
  if ((ARC_X_R(c, 8)) == 0) goto L_11f69c;
  /* 11f68c: nop  */
  /* nop: no architectural effect here */
  /* 11f690: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f694: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177240));
  fn1_142560(c);
  /* 11f698: b #0x11f6fc */
  goto L_11f6fc;
L_11f69c:;
  /* 11f69c: mov w8, #1 */
  ARC_W_W(c, 8, UINT64_C(1));
  /* 11f6a0: str x23, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 23));
  /* 11f6a4: strb wzr, [sp, #8] */
  arc_st8(((c)->sp + INT64_C(8)), ARC_W_R(c, 31));
  /* 11f6a8: str x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f6ac: nop  */
  /* nop: no architectural effect here */
  /* 11f6b0: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f6b4: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177272));
  fn1_142560(c);
  /* 11f6b8: adrp x1, #0x151000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 11f6bc: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f6c0: ldr x1, [x1, #0xc58] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 1) + INT64_C(3160))));
  /* 11f6c4: bl #0xa2030 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177288));
  fn1_a2030(c);
  /* 11f6c8: add w8, w0, #1 */
  ARC_W_W(c, 8, (ARC_W_R(c, 0) + UINT64_C(1)));
  /* 11f6cc: str w8, [x23, #8] */
  arc_st32((ARC_X_R(c, 23) + INT64_C(8)), ARC_W_R(c, 8));
  /* 11f6d0: nop  */
  /* nop: no architectural effect here */
  /* 11f6d4: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f6d8: bl #0x142518 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177308));
  fn1_142518(c);
  /* 11f6dc: mov x8, #-1 */
  ARC_X_W(c, 8, UINT64_C(18446744073709551615));
  /* 11f6e0: stlr x8, [x23] */
  arc_st64(ARC_X_R(c, 23), ARC_X_R(c, 8));
  /* 11f6e4: nop  */
  /* nop: no architectural effect here */
  /* 11f6e8: adr x0, #0x1578f4 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407220)));
  /* 11f6ec: bl #0x142560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177328));
  fn1_142560(c);
  /* 11f6f0: nop  */
  /* nop: no architectural effect here */
  /* 11f6f4: adr x0, #0x15791c */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1407260)));
  /* 11f6f8: bl #0x142578 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177340));
  fn1_142578(c);
L_11f6fc:;
  /* 11f6fc: ldrsw x8, [x23, #8] */
  ARC_X_W(c, 8, ((int64_t)(int32_t)arc_ld32((ARC_X_R(c, 23) + INT64_C(8)))));
  /* 11f700: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f704: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 11f708: sub x22, x8, #1 */
  ARC_X_W(c, 22, (ARC_X_R(c, 8) - UINT64_C(1)));
  /* 11f70c: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177360));
  fn1_db2e0(c);
  /* 11f710: mov x21, x20 */
  ARC_X_W(c, 21, ARC_X_R(c, 20));
  /* 11f714: ldp x8, x9, [x21, #0x10]! */
  { const uint64_t _pa = (ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 21, ARC_X_R(c, 21) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 11f718: sub x9, x9, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - ARC_X_R(c, 8)));
  /* 11f71c: asr x10, x9, #3 */
  ARC_X_W(c, 10, ((uint64_t)((int64_t)(ARC_X_R(c, 9)) >> ((UINT64_C(3)) & 63))));
  /* 11f720: cmp x10, x22 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 22));
  /* 11f724: b.hi #0x11f750 */
  if (ARC_COND(c, 8)) goto L_11f750;
  /* 11f728: add x9, x22, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 22) + UINT64_C(1)));
  /* 11f72c: subs x1, x9, x10 */
  ARC_X_W(c, 1, arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10)));
  /* 11f730: b.ls #0x11f744 */
  if (ARC_COND(c, 9)) goto L_11f744;
  /* 11f734: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 11f738: bl #0x1352bc */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177404));
  fn1_1352bc(c);
  /* 11f73c: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f740: b #0x11f750 */
  goto L_11f750;
L_11f744:;
  /* 11f744: b.hs #0x11f750 */
  if (ARC_COND(c, 2)) goto L_11f750;
  /* 11f748: add x9, x8, x9, lsl #3 */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 9)) << 3)));
  /* 11f74c: str x9, [x20, #0x18] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(24)), ARC_X_R(c, 9));
L_11f750:;
  /* 11f750: ldr x20, [x8, x22, lsl #3] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3))));
  /* 11f754: cbz x20, #0x11f778 */
  if ((ARC_X_R(c, 20)) == 0) goto L_11f778;
  /* 11f758: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 11f75c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f760: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177444));
  fn1_bd950(c);
  /* 11f764: cbnz x0, #0x11f778 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f778;
  /* 11f768: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 11f76c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f770: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f774: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177464));
  arc_dispatch(c, ARC_X_R(c, 8));
L_11f778:;
  /* 11f778: ldr x8, [x21] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 21)));
  /* 11f77c: str x19, [x8, x22, lsl #3] */
  arc_st64((ARC_X_R(c, 8) + ((uint64_t)(ARC_X_R(c, 22)) << 3)), ARC_X_R(c, 19));
  /* 11f780: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 11f784: ldr x23, [sp, #0x20] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(32))));
  /* 11f788: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 11f78c: ldp x29, x30, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 11f790: add sp, sp, #0x50 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(80)));
  /* 11f794: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 11f798: ret  */
  return;
  /* 11f79c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f7a0: add x1, x19, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 19) + UINT64_C(8)));
  /* 11f7a4: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 11f7a8: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177516));
  fn1_bd950(c);
  /* 11f7ac: cbnz x0, #0x11f7d4 */
  if ((ARC_X_R(c, 0)) != 0) goto L_11f7d4;
  /* 11f7b0: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 11f7b4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 11f7b8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 11f7bc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177536));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 11f7c0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f7c4: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177544));
  fn1_9cc20(c);
  /* 11f7c8: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 11f7cc: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 11f7d0: bl #0xd2a78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177556));
  fn1_d2a78(c);
L_11f7d4:;
  /* 11f7d4: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 11f7d8: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1177564));
  fn1_9cc20(c);
}

void fn1_1267fc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039134204));
  /* 1267fc: bti c */
  /* bti: no architectural effect here */
  /* 126800: cmp x1, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 2));
  /* 126804: b.eq #0x126844 */
  if (ARC_COND(c, 0)) goto L_126844;
  /* 126808: sub x9, x2, x1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 2) - ARC_X_R(c, 1)));
  /* 12680c: cmp x9, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(32));
  /* 126810: b.lo #0x126828 */
  if (ARC_COND(c, 3)) goto L_126828;
  /* 126814: cmp x3, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 3), ARC_X_R(c, 2));
  /* 126818: b.hs #0x12684c */
  if (ARC_COND(c, 2)) goto L_12684c;
  /* 12681c: add x8, x3, x9, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) + ((uint64_t)(ARC_X_R(c, 9)) << 2)));
  /* 126820: cmp x1, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 1), ARC_X_R(c, 8));
  /* 126824: b.hs #0x12684c */
  if (ARC_COND(c, 2)) goto L_12684c;
L_126828:;
  /* 126828: mov x8, x3 */
  ARC_X_W(c, 8, ARC_X_R(c, 3));
  /* 12682c: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
L_126830:;
  /* 126830: ldrb w9, [x0], #1 */
  { const uint64_t _a = ARC_X_R(c, 0);
    ARC_X_W(c, 0, ARC_X_R(c, 0) + INT64_C(1));
    ARC_W_W(c, 9, arc_ld8(_a));
  }
  /* 126834: cmp x0, x2 */
  (void)arc_sub64(c, ARC_X_R(c, 0), ARC_X_R(c, 2));
  /* 126838: str w9, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 9));
  }
  /* 12683c: b.ne #0x126830 */
  if (ARC_COND(c, 1)) goto L_126830;
L_126840:;
  /* 126840: ret  */
  return;
L_126844:;
  /* 126844: mov x0, x1 */
  ARC_X_W(c, 0, ARC_X_R(c, 1));
  /* 126848: ret  */
  return;
L_12684c:;
  /* 12684c: adrp x11, #0x52000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(335872)));
  /* 126850: and x10, x9, #0xffffffffffffffe0 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) & UINT64_C(18446744073709551584)));
  /* 126854: adrp x12, #0x52000 */
  ARC_X_W(c, 12, (arc_image_bases[1] + UINT64_C(335872)));
  /* 126858: ldr q0, [x11, #0xb70] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 11) + INT64_C(2928))), arc_ld64((ARC_X_R(c, 11) + INT64_C(2928)) + 8));
  /* 12685c: adrp x11, #0x52000 */
  ARC_X_W(c, 11, (arc_image_bases[1] + UINT64_C(335872)));
  /* 126860: adrp x13, #0x52000 */
  ARC_X_W(c, 13, (arc_image_bases[1] + UINT64_C(335872)));
  /* 126864: add x8, x3, x10, lsl #2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) + ((uint64_t)(ARC_X_R(c, 10)) << 2)));
  /* 126868: ldr q1, [x12, #0xd40] */
  arc_q_w(c, 1, arc_ld64((ARC_X_R(c, 12) + INT64_C(3392))), arc_ld64((ARC_X_R(c, 12) + INT64_C(3392)) + 8));
  /* 12686c: ldr q2, [x11, #0xc50] */
  arc_q_w(c, 2, arc_ld64((ARC_X_R(c, 11) + INT64_C(3152))), arc_ld64((ARC_X_R(c, 11) + INT64_C(3152)) + 8));
  /* 126870: ldr q3, [x13, #0x940] */
  arc_q_w(c, 3, arc_ld64((ARC_X_R(c, 13) + INT64_C(2368))), arc_ld64((ARC_X_R(c, 13) + INT64_C(2368)) + 8));
  /* 126874: add x0, x1, x10 */
  ARC_X_W(c, 0, (ARC_X_R(c, 1) + ARC_X_R(c, 10)));
  /* 126878: add x11, x1, #0x10 */
  ARC_X_W(c, 11, (ARC_X_R(c, 1) + UINT64_C(16)));
  /* 12687c: add x12, x3, #0x40 */
  ARC_X_W(c, 12, (ARC_X_R(c, 3) + UINT64_C(64)));
  /* 126880: mov x13, x10 */
  ARC_X_W(c, 13, ARC_X_R(c, 10));
L_126884:;
  /* 126884: ldp q4, q5, [x11, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 11) + INT64_C(-16));
    arc_q_w(c, 4, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 5, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 126888: subs x13, x13, #0x20 */
  ARC_X_W(c, 13, arc_sub64(c, ARC_X_R(c, 13), UINT64_C(32)));
  /* 12688c: add x11, x11, #0x20 */
  ARC_X_W(c, 11, (ARC_X_R(c, 11) + UINT64_C(32)));
  /* 126890: tbl v6.16b, {v4.16b}, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[3].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[3].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[3].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[3].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[3].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[3].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[3].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[3].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[3].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[3].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[3].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[3].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[3].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[3].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[3].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[3].u8[15]);
    (c)->q[6] = _t; }
  /* 126894: tbl v7.16b, {v4.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[2].u8[15]);
    (c)->q[7] = _t; }
  /* 126898: tbl v16.16b, {v4.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[1].u8[15]);
    (c)->q[16] = _t; }
  /* 12689c: tbl v4.16b, {v4.16b}, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 4, 1, (c)->q[0].u8[0]);
    _t.u8[1] = arc_tbl(c, 4, 1, (c)->q[0].u8[1]);
    _t.u8[2] = arc_tbl(c, 4, 1, (c)->q[0].u8[2]);
    _t.u8[3] = arc_tbl(c, 4, 1, (c)->q[0].u8[3]);
    _t.u8[4] = arc_tbl(c, 4, 1, (c)->q[0].u8[4]);
    _t.u8[5] = arc_tbl(c, 4, 1, (c)->q[0].u8[5]);
    _t.u8[6] = arc_tbl(c, 4, 1, (c)->q[0].u8[6]);
    _t.u8[7] = arc_tbl(c, 4, 1, (c)->q[0].u8[7]);
    _t.u8[8] = arc_tbl(c, 4, 1, (c)->q[0].u8[8]);
    _t.u8[9] = arc_tbl(c, 4, 1, (c)->q[0].u8[9]);
    _t.u8[10] = arc_tbl(c, 4, 1, (c)->q[0].u8[10]);
    _t.u8[11] = arc_tbl(c, 4, 1, (c)->q[0].u8[11]);
    _t.u8[12] = arc_tbl(c, 4, 1, (c)->q[0].u8[12]);
    _t.u8[13] = arc_tbl(c, 4, 1, (c)->q[0].u8[13]);
    _t.u8[14] = arc_tbl(c, 4, 1, (c)->q[0].u8[14]);
    _t.u8[15] = arc_tbl(c, 4, 1, (c)->q[0].u8[15]);
    (c)->q[4] = _t; }
  /* 1268a0: tbl v17.16b, {v5.16b}, v3.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[3].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[3].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[3].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[3].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[3].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[3].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[3].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[3].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[3].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[3].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[3].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[3].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[3].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[3].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[3].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[3].u8[15]);
    (c)->q[17] = _t; }
  /* 1268a4: stp q7, q6, [x12, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-32));
    arc_st64(_pa, (c)->q[7].u64[0]);
    arc_st64(_pa + 8, (c)->q[7].u64[1]);
    arc_st64((_pa + 16), (c)->q[6].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[6].u64[1]);
  }
  /* 1268a8: tbl v6.16b, {v5.16b}, v2.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[2].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[2].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[2].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[2].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[2].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[2].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[2].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[2].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[2].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[2].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[2].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[2].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[2].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[2].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[2].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[2].u8[15]);
    (c)->q[6] = _t; }
  /* 1268ac: tbl v7.16b, {v5.16b}, v1.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[1].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[1].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[1].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[1].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[1].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[1].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[1].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[1].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[1].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[1].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[1].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[1].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[1].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[1].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[1].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[1].u8[15]);
    (c)->q[7] = _t; }
  /* 1268b0: tbl v5.16b, {v5.16b}, v0.16b */
  { Arm64Vec _t; _t.u64[0] = 0; _t.u64[1] = 0;
    _t.u8[0] = arc_tbl(c, 5, 1, (c)->q[0].u8[0]);
    _t.u8[1] = arc_tbl(c, 5, 1, (c)->q[0].u8[1]);
    _t.u8[2] = arc_tbl(c, 5, 1, (c)->q[0].u8[2]);
    _t.u8[3] = arc_tbl(c, 5, 1, (c)->q[0].u8[3]);
    _t.u8[4] = arc_tbl(c, 5, 1, (c)->q[0].u8[4]);
    _t.u8[5] = arc_tbl(c, 5, 1, (c)->q[0].u8[5]);
    _t.u8[6] = arc_tbl(c, 5, 1, (c)->q[0].u8[6]);
    _t.u8[7] = arc_tbl(c, 5, 1, (c)->q[0].u8[7]);
    _t.u8[8] = arc_tbl(c, 5, 1, (c)->q[0].u8[8]);
    _t.u8[9] = arc_tbl(c, 5, 1, (c)->q[0].u8[9]);
    _t.u8[10] = arc_tbl(c, 5, 1, (c)->q[0].u8[10]);
    _t.u8[11] = arc_tbl(c, 5, 1, (c)->q[0].u8[11]);
    _t.u8[12] = arc_tbl(c, 5, 1, (c)->q[0].u8[12]);
    _t.u8[13] = arc_tbl(c, 5, 1, (c)->q[0].u8[13]);
    _t.u8[14] = arc_tbl(c, 5, 1, (c)->q[0].u8[14]);
    _t.u8[15] = arc_tbl(c, 5, 1, (c)->q[0].u8[15]);
    (c)->q[5] = _t; }
  /* 1268b4: stp q4, q16, [x12, #-0x40] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-64));
    arc_st64(_pa, (c)->q[4].u64[0]);
    arc_st64(_pa + 8, (c)->q[4].u64[1]);
    arc_st64((_pa + 16), (c)->q[16].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[16].u64[1]);
  }
  /* 1268b8: stp q6, q17, [x12, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(32));
    arc_st64(_pa, (c)->q[6].u64[0]);
    arc_st64(_pa + 8, (c)->q[6].u64[1]);
    arc_st64((_pa + 16), (c)->q[17].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[17].u64[1]);
  }
  /* 1268bc: stp q5, q7, [x12], #0x80 */
  { const uint64_t _pa = ARC_X_R(c, 12);
    ARC_X_W(c, 12, ARC_X_R(c, 12) + INT64_C(128));
    arc_st64(_pa, (c)->q[5].u64[0]);
    arc_st64(_pa + 8, (c)->q[5].u64[1]);
    arc_st64((_pa + 16), (c)->q[7].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[7].u64[1]);
  }
  /* 1268c0: b.ne #0x126884 */
  if (ARC_COND(c, 1)) goto L_126884;
  /* 1268c4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 1268c8: b.ne #0x126830 */
  if (ARC_COND(c, 1)) goto L_126830;
  /* 1268cc: b #0x126840 */
  goto L_126840;
}

void fn1_1290c4(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039144644));
  /* 1290c4: bti c */
  /* bti: no architectural effect here */
  /* 1290c8: mov w0, #4 */
  ARC_W_W(c, 0, UINT64_C(4));
  /* 1290cc: ret  */
  return;
}

void fn1_12a95c(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039150940));
  /* 12a95c: bti c */
  /* bti: no architectural effect here */
  /* 12a960: sub x8, x3, x2 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - ARC_X_R(c, 2)));
  /* 12a964: cmp x8, #2 */
  (void)arc_sub64(c, ARC_X_R(c, 8), UINT64_C(2));
  /* 12a968: b.lt #0x12a990 */
  if (ARC_COND(c, 11)) goto L_12a990;
  /* 12a96c: ldr w8, [x0, #0x18] */
  ARC_W_W(c, 8, arc_ld32((ARC_X_R(c, 0) + INT64_C(24))));
  /* 12a970: tbz w8, #2, #0x12a990 */
  if (((ARC_W_R(c, 8)) >> 2 & 1) == 0) goto L_12a990;
  /* 12a974: ldrb w8, [x2] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 2)));
  /* 12a978: cmp w8, #0xfe */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(254));
  /* 12a97c: b.ne #0x12a990 */
  if (ARC_COND(c, 1)) goto L_12a990;
  /* 12a980: ldrb w8, [x2, #1] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12a984: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 12a988: cset w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? 1 : 0));
  /* 12a98c: add x2, x2, w8, uxtw #1 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + ((uint64_t)(((uint64_t)(uint32_t)(ARC_W_R(c, 8)))) << 1)));
L_12a990:;
  /* 12a990: sub x8, x3, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 3) - UINT64_C(1)));
  /* 12a994: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12a998: b.hs #0x12a9dc */
  if (ARC_COND(c, 2)) goto L_12a9dc;
  /* 12a99c: ldr x9, [x0, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 12a9a0: mov w0, #2 */
  ARC_W_W(c, 0, UINT64_C(2));
L_12a9a4:;
  /* 12a9a4: cmp x5, x6 */
  (void)arc_sub64(c, ARC_X_R(c, 5), ARC_X_R(c, 6));
  /* 12a9a8: b.hs #0x12a9dc */
  if (ARC_COND(c, 2)) goto L_12a9dc;
  /* 12a9ac: ldrb w10, [x2] */
  ARC_W_W(c, 10, arc_ld8(ARC_X_R(c, 2)));
  /* 12a9b0: and w11, w10, #0xf8 */
  ARC_W_W(c, 11, (ARC_W_R(c, 10) & UINT64_C(248)));
  /* 12a9b4: cmp w11, #0xd8 */
  (void)arc_sub32(c, ARC_W_R(c, 11), UINT64_C(216));
  /* 12a9b8: b.eq #0x12a9e4 */
  if (ARC_COND(c, 0)) goto L_12a9e4;
  /* 12a9bc: ldrb w11, [x2, #1] */
  ARC_W_W(c, 11, arc_ld8((ARC_X_R(c, 2) + INT64_C(1))));
  /* 12a9c0: orr w10, w11, w10, lsl #8 */
  ARC_W_W(c, 10, (ARC_W_R(c, 11) | ((uint32_t)(ARC_W_R(c, 10)) << 8)));
  /* 12a9c4: cmp x9, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 9), ARC_X_R(c, 10));
  /* 12a9c8: b.lo #0x12a9e4 */
  if (ARC_COND(c, 3)) goto L_12a9e4;
  /* 12a9cc: add x2, x2, #2 */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(2)));
  /* 12a9d0: strh w10, [x5], #2 */
  { const uint64_t _a = ARC_X_R(c, 5);
    ARC_X_W(c, 5, ARC_X_R(c, 5) + INT64_C(2));
    arc_st16(_a, ARC_W_R(c, 10));
  }
  /* 12a9d4: cmp x2, x8 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 8));
  /* 12a9d8: b.lo #0x12a9a4 */
  if (ARC_COND(c, 3)) goto L_12a9a4;
L_12a9dc:;
  /* 12a9dc: cmp x2, x3 */
  (void)arc_sub64(c, ARC_X_R(c, 2), ARC_X_R(c, 3));
  /* 12a9e0: cset w0, lo */
  ARC_W_W(c, 0, (ARC_COND(c, 3) ? 1 : 0));
L_12a9e4:;
  /* 12a9e4: str x2, [x4] */
  arc_st64(ARC_X_R(c, 4), ARC_X_R(c, 2));
  /* 12a9e8: str x5, [x7] */
  arc_st64(ARC_X_R(c, 7), ARC_X_R(c, 5));
  /* 12a9ec: ret  */
  return;
}

void fn1_12bd20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039156000));
  /* 12bd20: bti c */
  /* bti: no architectural effect here */
  /* 12bd24: mov x9, x0 */
  ARC_X_W(c, 9, ARC_X_R(c, 0));
  /* 12bd28: ldrb w10, [x9, #0x18]! */
  { const uint64_t _a = (ARC_X_R(c, 9) + INT64_C(24));
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(24));
    ARC_W_W(c, 10, arc_ld8(_a));
  }
  /* 12bd2c: tbnz w10, #0, #0x12bd44 */
  if (((ARC_W_R(c, 10)) >> 0 & 1) != 0) goto L_12bd44;
  /* 12bd30: ldr q0, [x9] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 9)), arc_ld64(ARC_X_R(c, 9) + 8));
  /* 12bd34: ldr x9, [x9, #0x10] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + INT64_C(16))));
  /* 12bd38: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 12bd3c: str x9, [x8, #0x10] */
  arc_st64((ARC_X_R(c, 8) + INT64_C(16)), ARC_X_R(c, 9));
  /* 12bd40: ret  */
  return;
L_12bd44:;
  /* 12bd44: ldp x2, x1, [x0, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(32));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 12bd48: mov x0, x8 */
  ARC_X_W(c, 0, ARC_X_R(c, 8));
  /* 12bd4c: b #0xda588 */
  fn1_da588(c); return;
}

void fn1_133eb0(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039189168));
  /* 133eb0: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 133eb4: stp x29, x30, [sp, #-0x50]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-80));
    (c)->sp = (c)->sp + INT64_C(-80);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 133eb8: str x28, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 28));
  /* 133ebc: stp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 133ec0: stp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 133ec4: stp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 133ec8: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 133ecc: sub sp, sp, #0x1c0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(448)));
  /* 133ed0: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 133ed4: mov w0, #0x1fbf */
  ARC_W_W(c, 0, UINT64_C(8127));
  /* 133ed8: mov x2, xzr */
  ARC_X_W(c, 2, ARC_X_R(c, 31));
  /* 133edc: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 133ee0: bl #0x1441e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261284));
  fn1_1441e0(c);
  /* 133ee4: str x0, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 0));
  /* 133ee8: cbz x0, #0x13457c */
  if ((ARC_X_R(c, 0)) == 0) goto L_13457c;
  /* 133eec: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 133ef0: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261300));
  fn1_1443c0(c);
  /* 133ef4: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 133ef8: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 133efc: bl #0x144498 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261312));
  fn1_144498(c);
  /* 133f00: mov x21, x0 */
  ARC_X_W(c, 21, ARC_X_R(c, 0));
  /* 133f04: cbz x22, #0x133f10 */
  if ((ARC_X_R(c, 22)) == 0) goto L_133f10;
  /* 133f08: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 133f0c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261328));
  fn1_1443c0(c);
L_133f10:;
  /* 133f10: ldr x22, [x21, #0x28] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(40))));
  /* 133f14: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 133f18: cbz w8, #0x133f70 */
  if ((ARC_W_R(c, 8)) == 0) goto L_133f70;
  /* 133f1c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 133f20: stur xzr, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 31));
  /* 133f24: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261352));
  fn1_142860(c);
  /* 133f28: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 133f2c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133f30: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261364));
  fn1_1443c0(c);
  /* 133f34: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 133f38: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 133f3c: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 133f40: sub x3, x29, #0x20 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 133f44: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 133f48: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 133f4c: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261392));
  fn1_144438(c);
  /* 133f50: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 133f54: cbz x23, #0x133f60 */
  if ((ARC_X_R(c, 23)) == 0) goto L_133f60;
  /* 133f58: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 133f5c: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261408));
  fn1_1443c0(c);
L_133f60:;
  /* 133f60: cmn x22, #3 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(3), 0);
  /* 133f64: b.hi #0x133f70 */
  if (ARC_COND(c, 8)) goto L_133f70;
  /* 133f68: ldr w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(8))));
  /* 133f6c: b #0x133f74 */
  goto L_133f74;
L_133f70:;
  /* 133f70: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
L_133f74:;
  /* 133f74: str w8, [x20, #0x10] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(16)), ARC_W_R(c, 8));
  /* 133f78: ldr x22, [x21, #0x30] */
  ARC_X_W(c, 22, arc_ld64((ARC_X_R(c, 21) + INT64_C(48))));
  /* 133f7c: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 133f80: cbz w8, #0x133fd8 */
  if ((ARC_W_R(c, 8)) == 0) goto L_133fd8;
  /* 133f84: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 133f88: stur xzr, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 31));
  /* 133f8c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261456));
  fn1_142860(c);
  /* 133f90: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 133f94: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133f98: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261468));
  fn1_1443c0(c);
  /* 133f9c: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 133fa0: str x0, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 0));
  /* 133fa4: add x0, sp, #8 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(8)));
  /* 133fa8: sub x3, x29, #0x20 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 133fac: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 133fb0: mov x2, x24 */
  ARC_X_W(c, 2, ARC_X_R(c, 24));
  /* 133fb4: bl #0x144438 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261496));
  fn1_144438(c);
  /* 133fb8: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 133fbc: cbz x23, #0x133fc8 */
  if ((ARC_X_R(c, 23)) == 0) goto L_133fc8;
  /* 133fc0: mov x0, x23 */
  ARC_X_W(c, 0, ARC_X_R(c, 23));
  /* 133fc4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261512));
  fn1_1443c0(c);
L_133fc8:;
  /* 133fc8: cmn x22, #3 */
  (void)arc_add64(c, ARC_X_R(c, 22), UINT64_C(3), 0);
  /* 133fcc: b.hi #0x133fd8 */
  if (ARC_COND(c, 8)) goto L_133fd8;
  /* 133fd0: ldr w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld32(((c)->sp + INT64_C(8))));
  /* 133fd4: b #0x133fdc */
  goto L_133fdc;
L_133fd8:;
  /* 133fd8: mov w8, #-1 */
  ARC_W_W(c, 8, UINT64_C(18446744073709551615));
L_133fdc:;
  /* 133fdc: str w8, [x20, #0x14] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(20)), ARC_W_R(c, 8));
  /* 133fe0: ldr x1, [x21, #0x38] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 21) + INT64_C(56))));
  /* 133fe4: add x0, x20, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(24)));
  /* 133fe8: bl #0xe167c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261548));
  fn1_e167c(c);
  /* 133fec: ldr x8, [x21, #0x18] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(24))));
  /* 133ff0: stp x8, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 133ff4: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 133ff8: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261564));
  fn1_1443c0(c);
  /* 133ffc: mov x22, x0 */
  ARC_X_W(c, 22, ARC_X_R(c, 0));
  /* 134000: stur x0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 0));
  /* 134004: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 134008: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13400c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 134010: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 134014: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261592));
  fn1_1444c8(c);
  /* 134018: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 13401c: cbz x22, #0x134028 */
  if ((ARC_X_R(c, 22)) == 0) goto L_134028;
  /* 134020: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 134024: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261608));
  fn1_1443c0(c);
L_134028:;
  /* 134028: cmn x23, #1 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0);
  /* 13402c: b.eq #0x1345b4 */
  if (ARC_COND(c, 0)) goto L_1345b4;
  /* 134030: mov x22, x20 */
  ARC_X_W(c, 22, ARC_X_R(c, 20));
  /* 134034: ldr x8, [x22, #0x30]! */
  { const uint64_t _a = (ARC_X_R(c, 22) + INT64_C(48));
    ARC_X_W(c, 22, ARC_X_R(c, 22) + INT64_C(48));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 134038: ldrb w9, [x22] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 22)));
  /* 13403c: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 134040: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 134044: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 134048: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 13404c: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 134050: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 134054: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 134058: b.ls #0x13409c */
  if (ARC_COND(c, 9)) goto L_13409c;
  /* 13405c: ldr x10, [x20, #0x38] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(56))));
  /* 134060: ubfx x8, x8, #1, #7 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* 134064: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 134068: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 13406c: mov x0, x22 */
  ARC_X_W(c, 0, ARC_X_R(c, 22));
  /* 134070: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 134074: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 134078: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 13407c: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261696));
  fn1_142da0(c);
  /* 134080: ldrb w8, [x20, #0x30] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(48))));
  /* 134084: ldr x9, [x20, #0x40] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* 134088: add x10, x20, #0x34 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(52)));
  /* 13408c: str xzr, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 31));
  /* 134090: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 134094: csel x12, x10, x9, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 134098: b #0x1340b4 */
  goto L_1340b4;
L_13409c:;
  /* 13409c: ldr x8, [x20, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(64))));
  /* 1340a0: add x10, x20, #0x34 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(52)));
  /* 1340a4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1340a8: csel x12, x10, x8, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 1340ac: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* 1340b0: cbz x23, #0x134138 */
  if ((ARC_X_R(c, 23)) == 0) goto L_134138;
L_1340b4:;
  /* 1340b4: sub x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 1340b8: and x9, x8, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(4611686018427387903)));
  /* 1340bc: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 1340c0: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 1340c4: b.lo #0x13411c */
  if (ARC_COND(c, 3)) goto L_13411c;
  /* 1340c8: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 1340cc: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 1340d0: b.lo #0x13411c */
  if (ARC_COND(c, 3)) goto L_13411c;
  /* 1340d4: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 1340d8: add x13, sp, #0x10 */
  ARC_X_W(c, 13, ((c)->sp + UINT64_C(16)));
  /* 1340dc: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 1340e0: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 1340e4: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* 1340e8: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 1340ec: add x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* 1340f0: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* 1340f4: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_1340f8:;
  /* 1340f8: ldp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 1340fc: subs x14, x14, #8 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* 134100: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 134104: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 134108: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 13410c: b.ne #0x1340f8 */
  if (ARC_COND(c, 1)) goto L_1340f8;
  /* 134110: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 134114: b.ne #0x134120 */
  if (ARC_COND(c, 1)) goto L_134120;
  /* 134118: b #0x134138 */
  goto L_134138;
L_13411c:;
  /* 13411c: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_134120:;
  /* 134120: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 134124: add x10, x10, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
L_134128:;
  /* 134128: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 13412c: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 134130: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 134134: b.ne #0x134128 */
  if (ARC_COND(c, 1)) goto L_134128;
L_134138:;
  /* 134138: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 13413c: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 134140: tbnz w8, #0, #0x134150 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134150;
  /* 134144: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 134148: strb w8, [x22] */
  arc_st8(ARC_X_R(c, 22), ARC_W_R(c, 8));
  /* 13414c: b #0x134154 */
  goto L_134154;
L_134150:;
  /* 134150: str x23, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 23));
L_134154:;
  /* 134154: ldrb w8, [x21, #0x50] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(80))));
  /* 134158: cmp w8, #0xff */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(255));
  /* 13415c: csel w8, wzr, w8, eq */
  ARC_W_W(c, 8, (ARC_COND(c, 0) ? (ARC_W_R(c, 31)) : ARC_W_R(c, 8)));
  /* 134160: str w8, [x20, #0x78] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(120)), ARC_W_R(c, 8));
  /* 134164: ldrb w8, [x21, #0x5c] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(92))));
  /* 134168: cbz w8, #0x13421c */
  if ((ARC_W_R(c, 8)) == 0) goto L_13421c;
  /* 13416c: ldr x8, [x21, #0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(64))));
  /* 134170: stp x8, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 134174: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134178: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261948));
  fn1_1443c0(c);
  /* 13417c: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 134180: stur x0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 0));
  /* 134184: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 134188: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 13418c: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 134190: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 134194: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261976));
  fn1_1444c8(c);
  /* 134198: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 13419c: cbz x24, #0x1341a8 */
  if ((ARC_X_R(c, 24)) == 0) goto L_1341a8;
  /* 1341a0: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1341a4: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1261992));
  fn1_1443c0(c);
L_1341a8:;
  /* 1341a8: cmn x23, #1 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0);
  /* 1341ac: b.eq #0x134570 */
  if (ARC_COND(c, 0)) goto L_134570;
  /* 1341b0: mov x24, x20 */
  ARC_X_W(c, 24, ARC_X_R(c, 20));
  /* 1341b4: ldr x8, [x24, #0x48]! */
  { const uint64_t _a = (ARC_X_R(c, 24) + INT64_C(72));
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(72));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 1341b8: ldrb w9, [x24] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 24)));
  /* 1341bc: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1341c0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1341c4: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 1341c8: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 1341cc: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 1341d0: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 1341d4: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 1341d8: b.ls #0x134234 */
  if (ARC_COND(c, 9)) goto L_134234;
  /* 1341dc: ldr x10, [x20, #0x50] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(80))));
  /* 1341e0: ubfx x8, x8, #1, #7 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* 1341e4: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1341e8: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1341ec: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1341f0: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 1341f4: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 1341f8: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 1341fc: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262080));
  fn1_142da0(c);
  /* 134200: ldrb w8, [x20, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(72))));
  /* 134204: ldr x9, [x20, #0x58] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* 134208: add x10, x20, #0x4c */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(76)));
  /* 13420c: str xzr, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 31));
  /* 134210: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 134214: csel x12, x10, x9, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 134218: b #0x13424c */
  goto L_13424c;
L_13421c:;
  /* 13421c: ldrb w8, [x20, #0x48] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(72))));
  /* 134220: tbnz w8, #0, #0x134314 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_134314;
  /* 134224: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 134228: strb w8, [x20, #0x48] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(72)), ARC_W_R(c, 8));
  /* 13422c: add x8, x20, #0x4c */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(76)));
  /* 134230: b #0x134320 */
  goto L_134320;
L_134234:;
  /* 134234: ldr x8, [x20, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* 134238: add x10, x20, #0x4c */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(76)));
  /* 13423c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 134240: csel x12, x10, x8, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 134244: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* 134248: cbz x23, #0x1342d0 */
  if ((ARC_X_R(c, 23)) == 0) goto L_1342d0;
L_13424c:;
  /* 13424c: sub x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 134250: and x9, x8, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(4611686018427387903)));
  /* 134254: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 134258: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 13425c: b.lo #0x1342b4 */
  if (ARC_COND(c, 3)) goto L_1342b4;
  /* 134260: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 134264: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 134268: b.lo #0x1342b4 */
  if (ARC_COND(c, 3)) goto L_1342b4;
  /* 13426c: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 134270: add x13, sp, #0x10 */
  ARC_X_W(c, 13, ((c)->sp + UINT64_C(16)));
  /* 134274: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 134278: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 13427c: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* 134280: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 134284: add x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* 134288: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* 13428c: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_134290:;
  /* 134290: ldp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 134294: subs x14, x14, #8 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* 134298: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 13429c: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 1342a0: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 1342a4: b.ne #0x134290 */
  if (ARC_COND(c, 1)) goto L_134290;
  /* 1342a8: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 1342ac: b.ne #0x1342b8 */
  if (ARC_COND(c, 1)) goto L_1342b8;
  /* 1342b0: b #0x1342d0 */
  goto L_1342d0;
L_1342b4:;
  /* 1342b4: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_1342b8:;
  /* 1342b8: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 1342bc: add x10, x10, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
L_1342c0:;
  /* 1342c0: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 1342c4: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 1342c8: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 1342cc: b.ne #0x1342c0 */
  if (ARC_COND(c, 1)) goto L_1342c0;
L_1342d0:;
  /* 1342d0: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 1342d4: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 1342d8: tbnz w8, #0, #0x1342f0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1342f0;
  /* 1342dc: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 1342e0: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* 1342e4: ldrb w8, [x21, #0x5d] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(93))));
  /* 1342e8: cbnz w8, #0x134338 */
  if ((ARC_W_R(c, 8)) != 0) goto L_134338;
  /* 1342ec: b #0x1342fc */
  goto L_1342fc;
L_1342f0:;
  /* 1342f0: str x23, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 23));
  /* 1342f4: ldrb w8, [x21, #0x5d] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(93))));
  /* 1342f8: cbnz w8, #0x134338 */
  if ((ARC_W_R(c, 8)) != 0) goto L_134338;
L_1342fc:;
  /* 1342fc: ldrb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* 134300: tbnz w8, #0, #0x1344c0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1344c0;
  /* 134304: mov w8, #4 */
  ARC_W_W(c, 8, UINT64_C(4));
  /* 134308: strb w8, [x20, #0x60] */
  arc_st8((ARC_X_R(c, 20) + INT64_C(96)), ARC_W_R(c, 8));
  /* 13430c: add x8, x20, #0x64 */
  ARC_X_W(c, 8, (ARC_X_R(c, 20) + UINT64_C(100)));
  /* 134310: b #0x1344cc */
  goto L_1344cc;
L_134314:;
  /* 134314: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 134318: ldr x8, [x20, #0x58] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(88))));
  /* 13431c: str x9, [x20, #0x50] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(80)), ARC_X_R(c, 9));
L_134320:;
  /* 134320: mov x9, #0x28 */
  ARC_X_W(c, 9, UINT64_C(40));
  /* 134324: str wzr, [x8, #8] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 31));
  /* 134328: movk x9, #0x29, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(176093659136)));
  /* 13432c: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 134330: ldrb w8, [x21, #0x5d] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 21) + INT64_C(93))));
  /* 134334: cbz w8, #0x1342fc */
  if ((ARC_W_R(c, 8)) == 0) goto L_1342fc;
L_134338:;
  /* 134338: ldr x8, [x21, #0x48] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 21) + INT64_C(72))));
  /* 13433c: stp x8, xzr, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 134340: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 134344: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262408));
  fn1_1443c0(c);
  /* 134348: mov x24, x0 */
  ARC_X_W(c, 24, ARC_X_R(c, 0));
  /* 13434c: stur x0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), ARC_X_R(c, 0));
  /* 134350: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 134354: mov x1, sp */
  ARC_X_W(c, 1, (c)->sp);
  /* 134358: add x3, sp, #8 */
  ARC_X_W(c, 3, ((c)->sp + UINT64_C(8)));
  /* 13435c: mov w2, #0x64 */
  ARC_W_W(c, 2, UINT64_C(100));
  /* 134360: bl #0x1444c8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262436));
  fn1_1444c8(c);
  /* 134364: mov x23, x0 */
  ARC_X_W(c, 23, ARC_X_R(c, 0));
  /* 134368: cbz x24, #0x134374 */
  if ((ARC_X_R(c, 24)) == 0) goto L_134374;
  /* 13436c: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 134370: bl #0x1443c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262452));
  fn1_1443c0(c);
L_134374:;
  /* 134374: cmn x23, #1 */
  (void)arc_add64(c, ARC_X_R(c, 23), UINT64_C(1), 0);
  /* 134378: b.eq #0x134570 */
  if (ARC_COND(c, 0)) goto L_134570;
  /* 13437c: mov x24, x20 */
  ARC_X_W(c, 24, ARC_X_R(c, 20));
  /* 134380: ldr x8, [x24, #0x60]! */
  { const uint64_t _a = (ARC_X_R(c, 24) + INT64_C(96));
    ARC_X_W(c, 24, ARC_X_R(c, 24) + INT64_C(96));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 134384: ldrb w9, [x24] */
  ARC_W_W(c, 9, arc_ld8(ARC_X_R(c, 24)));
  /* 134388: and x10, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 10, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13438c: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 134390: mov w9, #4 */
  ARC_W_W(c, 9, UINT64_C(4));
  /* 134394: sub x10, x10, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) - UINT64_C(1)));
  /* 134398: csel x1, x9, x10, eq */
  ARC_X_W(c, 1, (ARC_COND(c, 0) ? (ARC_X_R(c, 9)) : ARC_X_R(c, 10)));
  /* 13439c: and w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) & UINT64_C(255)));
  /* 1343a0: subs x2, x23, x1 */
  ARC_X_W(c, 2, arc_sub64(c, ARC_X_R(c, 23), ARC_X_R(c, 1)));
  /* 1343a4: b.ls #0x1343e8 */
  if (ARC_COND(c, 9)) goto L_1343e8;
  /* 1343a8: ldr x10, [x20, #0x68] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 20) + INT64_C(104))));
  /* 1343ac: ubfx x8, x8, #1, #7 */
  ARC_X_W(c, 8, (((uint64_t)(ARC_X_R(c, 8)) >> 1) & UINT64_C(127)));
  /* 1343b0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1343b4: csel x3, x8, x10, eq */
  ARC_X_W(c, 3, (ARC_COND(c, 0) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 10)));
  /* 1343b8: mov x0, x24 */
  ARC_X_W(c, 0, ARC_X_R(c, 24));
  /* 1343bc: mov x4, xzr */
  ARC_X_W(c, 4, ARC_X_R(c, 31));
  /* 1343c0: mov x5, x3 */
  ARC_X_W(c, 5, ARC_X_R(c, 3));
  /* 1343c4: mov x6, xzr */
  ARC_X_W(c, 6, ARC_X_R(c, 31));
  /* 1343c8: bl #0x142da0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262540));
  fn1_142da0(c);
  /* 1343cc: ldrb w8, [x20, #0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 20) + INT64_C(96))));
  /* 1343d0: ldr x9, [x20, #0x70] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* 1343d4: add x10, x20, #0x64 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(100)));
  /* 1343d8: str xzr, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 31));
  /* 1343dc: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1343e0: csel x12, x10, x9, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 9)));
  /* 1343e4: b #0x134400 */
  goto L_134400;
L_1343e8:;
  /* 1343e8: ldr x8, [x20, #0x70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* 1343ec: add x10, x20, #0x64 */
  ARC_X_W(c, 10, (ARC_X_R(c, 20) + UINT64_C(100)));
  /* 1343f0: tst w9, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 9) & UINT64_C(1)));
  /* 1343f4: csel x12, x10, x8, eq */
  ARC_X_W(c, 12, (ARC_COND(c, 0) ? (ARC_X_R(c, 10)) : ARC_X_R(c, 8)));
  /* 1343f8: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
  /* 1343fc: cbz x23, #0x134484 */
  if ((ARC_X_R(c, 23)) == 0) goto L_134484;
L_134400:;
  /* 134400: sub x8, x23, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 23) - UINT64_C(1)));
  /* 134404: and x9, x8, #0x3fffffffffffffff */
  ARC_X_W(c, 9, (ARC_X_R(c, 8) & UINT64_C(4611686018427387903)));
  /* 134408: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 13440c: cmp x9, #7 */
  (void)arc_sub64(c, ARC_X_R(c, 9), UINT64_C(7));
  /* 134410: b.lo #0x134468 */
  if (ARC_COND(c, 3)) goto L_134468;
  /* 134414: sub x10, x12, x8 */
  ARC_X_W(c, 10, (ARC_X_R(c, 12) - ARC_X_R(c, 8)));
  /* 134418: cmp x10, #0x20 */
  (void)arc_sub64(c, ARC_X_R(c, 10), UINT64_C(32));
  /* 13441c: b.lo #0x134468 */
  if (ARC_COND(c, 3)) goto L_134468;
  /* 134420: add x10, x9, #1 */
  ARC_X_W(c, 10, (ARC_X_R(c, 9) + UINT64_C(1)));
  /* 134424: add x13, sp, #0x10 */
  ARC_X_W(c, 13, ((c)->sp + UINT64_C(16)));
  /* 134428: and x11, x10, #0x7ffffffffffffff8 */
  ARC_X_W(c, 11, (ARC_X_R(c, 10) & UINT64_C(9223372036854775800)));
  /* 13442c: lsl x8, x11, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 11)) << ((UINT64_C(2)) & 63)));
  /* 134430: mov x14, x11 */
  ARC_X_W(c, 14, ARC_X_R(c, 11));
  /* 134434: add x9, x12, x8 */
  ARC_X_W(c, 9, (ARC_X_R(c, 12) + ARC_X_R(c, 8)));
  /* 134438: add x8, x13, x8 */
  ARC_X_W(c, 8, (ARC_X_R(c, 13) + ARC_X_R(c, 8)));
  /* 13443c: add x13, x13, #0x10 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(16)));
  /* 134440: add x12, x12, #0x10 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(16)));
L_134444:;
  /* 134444: ldp q0, q1, [x13, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 13) + INT64_C(-16));
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 134448: subs x14, x14, #8 */
  ARC_X_W(c, 14, arc_sub64(c, ARC_X_R(c, 14), UINT64_C(8)));
  /* 13444c: add x13, x13, #0x20 */
  ARC_X_W(c, 13, (ARC_X_R(c, 13) + UINT64_C(32)));
  /* 134450: stp q0, q1, [x12, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 12) + INT64_C(-16));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 134454: add x12, x12, #0x20 */
  ARC_X_W(c, 12, (ARC_X_R(c, 12) + UINT64_C(32)));
  /* 134458: b.ne #0x134444 */
  if (ARC_COND(c, 1)) goto L_134444;
  /* 13445c: cmp x10, x11 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 11));
  /* 134460: b.ne #0x13446c */
  if (ARC_COND(c, 1)) goto L_13446c;
  /* 134464: b #0x134484 */
  goto L_134484;
L_134468:;
  /* 134468: mov x9, x12 */
  ARC_X_W(c, 9, ARC_X_R(c, 12));
L_13446c:;
  /* 13446c: add x10, sp, #0x10 */
  ARC_X_W(c, 10, ((c)->sp + UINT64_C(16)));
  /* 134470: add x10, x10, x23, lsl #2 */
  ARC_X_W(c, 10, (ARC_X_R(c, 10) + ((uint64_t)(ARC_X_R(c, 23)) << 2)));
L_134474:;
  /* 134474: ldr w11, [x8], #4 */
  { const uint64_t _a = ARC_X_R(c, 8);
    ARC_X_W(c, 8, ARC_X_R(c, 8) + INT64_C(4));
    ARC_W_W(c, 11, arc_ld32(_a));
  }
  /* 134478: cmp x8, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 10));
  /* 13447c: str w11, [x9], #4 */
  { const uint64_t _a = ARC_X_R(c, 9);
    ARC_X_W(c, 9, ARC_X_R(c, 9) + INT64_C(4));
    arc_st32(_a, ARC_W_R(c, 11));
  }
  /* 134480: b.ne #0x134474 */
  if (ARC_COND(c, 1)) goto L_134474;
L_134484:;
  /* 134484: str wzr, [x9] */
  arc_st32(ARC_X_R(c, 9), ARC_W_R(c, 31));
  /* 134488: ldrb w8, [x24] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 24)));
  /* 13448c: tbnz w8, #0, #0x1344a4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1344a4;
  /* 134490: lsl w8, w23, #1 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 23)) << ((UINT64_C(1)) & 31)));
  /* 134494: strb w8, [x24] */
  arc_st8(ARC_X_R(c, 24), ARC_W_R(c, 8));
  /* 134498: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 13449c: tbz w8, #0, #0x1344e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1344e4;
  /* 1344a0: b #0x1344b0 */
  goto L_1344b0;
L_1344a4:;
  /* 1344a4: str x23, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 23));
  /* 1344a8: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 1344ac: tbz w8, #0, #0x1344e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1344e4;
L_1344b0:;
  /* 1344b0: ldp x2, x1, [x20, #0x38] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(56));
    ARC_X_W(c, 2, arc_ld64(_pa));
    ARC_X_W(c, 1, arc_ld64(_pa + 8));
  }
  /* 1344b4: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 1344b8: bl #0xe22b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262780));
  fn1_e22b8(c);
  /* 1344bc: b #0x1344f4 */
  goto L_1344f4;
L_1344c0:;
  /* 1344c0: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 1344c4: ldr x8, [x20, #0x70] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 20) + INT64_C(112))));
  /* 1344c8: str x9, [x20, #0x68] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(104)), ARC_X_R(c, 9));
L_1344cc:;
  /* 1344cc: mov x9, #0x28 */
  ARC_X_W(c, 9, UINT64_C(40));
  /* 1344d0: str wzr, [x8, #8] */
  arc_st32((ARC_X_R(c, 8) + INT64_C(8)), ARC_W_R(c, 31));
  /* 1344d4: movk x9, #0x29, lsl #32 */
  ARC_X_W(c, 9, ((ARC_X_R(c, 9) & UINT64_C(18446462603027808255)) | UINT64_C(176093659136)));
  /* 1344d8: str x9, [x8] */
  arc_st64(ARC_X_R(c, 8), ARC_X_R(c, 9));
  /* 1344dc: ldrb w8, [x22] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 22)));
  /* 1344e0: tbnz w8, #0, #0x1344b0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1344b0;
L_1344e4:;
  /* 1344e4: ldr q0, [x22] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 22)), arc_ld64(ARC_X_R(c, 22) + 8));
  /* 1344e8: ldr x8, [x22, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(16))));
  /* 1344ec: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* 1344f0: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
L_1344f4:;
  /* 1344f4: ldrb w5, [x21, #0x5c] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 21) + INT64_C(92))));
  /* 1344f8: ldrb w4, [x21, #0x59] */
  ARC_W_W(c, 4, arc_ld8((ARC_X_R(c, 21) + INT64_C(89))));
  /* 1344fc: ldrb w3, [x21, #0x58] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(88))));
  /* 134500: add x0, x20, #0x7c */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(124)));
  /* 134504: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 134508: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 13450c: bl #0x13397c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262864));
  fn1_13397c(c);
  /* 134510: ldrb w5, [x21, #0x5d] */
  ARC_W_W(c, 5, arc_ld8((ARC_X_R(c, 21) + INT64_C(93))));
  /* 134514: ldrb w4, [x21, #0x5b] */
  ARC_W_W(c, 4, arc_ld8((ARC_X_R(c, 21) + INT64_C(91))));
  /* 134518: ldrb w3, [x21, #0x5a] */
  ARC_W_W(c, 3, arc_ld8((ARC_X_R(c, 21) + INT64_C(90))));
  /* 13451c: add x0, x20, #0x80 */
  ARC_X_W(c, 0, (ARC_X_R(c, 20) + UINT64_C(128)));
  /* 134520: mov x1, x22 */
  ARC_X_W(c, 1, ARC_X_R(c, 22));
  /* 134524: mov w2, #1 */
  ARC_W_W(c, 2, UINT64_C(1));
  /* 134528: bl #0x13397c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262892));
  fn1_13397c(c);
  /* 13452c: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 134530: tbz w8, #0, #0x134548 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134548;
  /* 134534: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 134538: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 13453c: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 134540: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
  /* 134544: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262920));
  fn1_142608(c);
L_134548:;
  /* 134548: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13454c: bl #0x144210 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262928));
  fn1_144210(c);
  /* 134550: add sp, sp, #0x1c0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(448)));
  /* 134554: ldp x20, x19, [sp, #0x40] */
  { const uint64_t _pa = ((c)->sp + INT64_C(64));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 134558: ldr x28, [sp, #0x10] */
  ARC_X_W(c, 28, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13455c: ldp x22, x21, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 134560: ldp x24, x23, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 134564: ldp x29, x30, [sp], #0x50 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(80);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 134568: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13456c: ret  */
  return;
L_134570:;
  /* 134570: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 134574: add x0, x0, #0x7a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1953)));
  /* 134578: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262972));
  fn1_142c98(c);
L_13457c:;
  /* 13457c: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 134580: mov x1, x21 */
  ARC_X_W(c, 1, ARC_X_R(c, 21));
  /* 134584: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1262984));
  fn1_11dda8(c);
  /* 134588: adrp x0, #0x50000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13458c: add x0, x0, #0xfc2 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(4034)));
  /* 134590: add x8, sp, #0x10 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(16)));
  /* 134594: sub x1, x29, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 134598: add x19, sp, #0x10 */
  ARC_X_W(c, 19, ((c)->sp + UINT64_C(16)));
  /* 13459c: bl #0x125878 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263008));
  fn1_125878(c);
  /* 1345a0: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 1345a4: ldr x9, [sp, #0x20] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1345a8: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 1345ac: csinc x0, x9, x19, ne */
  ARC_X_W(c, 0, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 19)) + 1)));
  /* 1345b0: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263028));
  fn1_142c98(c);
L_1345b4:;
  /* 1345b4: adrp x0, #0x4f000 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(323584)));
  /* 1345b8: add x0, x0, #0x7a1 */
  ARC_X_W(c, 0, (ARC_X_R(c, 0) + UINT64_C(1953)));
  /* 1345bc: bl #0x142c98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263040));
  fn1_142c98(c);
  /* 1345c0: ldrb w8, [sp, #0x10] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(16))));
  /* 1345c4: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1345c8: tbz w8, #0, #0x1345e4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1345e4;
  /* 1345cc: ldr x8, [sp, #0x10] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(16))));
  /* 1345d0: ldr x0, [sp, #0x20] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(32))));
  /* 1345d4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1345d8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263068));
  fn1_142608(c);
  /* 1345dc: b #0x1345e4 */
  goto L_1345e4;
  /* 1345e0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_1345e4:;
  /* 1345e4: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 1345e8: tbz w8, #0, #0x134680 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134680;
  /* 1345ec: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 1345f0: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 1345f4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1345f8: b #0x13466c */
  goto L_13466c;
  /* 1345fc: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263104));
  fn1_a1454(c);
  /* 134600: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263108));
  fn1_a1454(c);
  /* 134604: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263112));
  fn1_a1454(c);
  /* 134608: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263116));
  fn1_a1454(c);
  /* 13460c: b #0x13467c */
  goto L_13467c;
  /* 134610: b #0x13467c */
  goto L_13467c;
  /* 134614: b #0x134630 */
  goto L_134630;
  /* 134618: b #0x134630 */
  goto L_134630;
  /* 13461c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263136));
  fn1_a1454(c);
  /* 134620: b #0x134640 */
  goto L_134640;
  /* 134624: b #0x134640 */
  goto L_134640;
  /* 134628: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263148));
  fn1_a1454(c);
  /* 13462c: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263152));
  fn1_a1454(c);
L_134630:;
  /* 134630: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134634: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 134638: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263164));
  fn1_135428(c);
  /* 13463c: b #0x134680 */
  goto L_134680;
L_134640:;
  /* 134640: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134644: add x0, sp, #0x10 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(16)));
  /* 134648: bl #0x135428 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263180));
  fn1_135428(c);
  /* 13464c: b #0x134680 */
  goto L_134680;
  /* 134650: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 134654: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 134658: tbz w8, #0, #0x134680 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_134680;
  /* 13465c: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 134660: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 134664: lsl x8, x8, #2 */
  ARC_X_W(c, 8, ((uint64_t)(ARC_X_R(c, 8)) << ((UINT64_C(2)) & 63)));
  /* 134668: and x1, x8, #0xfffffffffffffff8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551608)));
L_13466c:;
  /* 13466c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263216));
  fn1_142608(c);
  /* 134670: b #0x134680 */
  goto L_134680;
  /* 134674: b #0x13467c */
  goto L_13467c;
  /* 134678: b #0x13467c */
  goto L_13467c;
L_13467c:;
  /* 13467c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
L_134680:;
  /* 134680: add x0, x29, #0x18 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) + UINT64_C(24)));
  /* 134684: bl #0x12c2c0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263240));
  fn1_12c2c0(c);
  /* 134688: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13468c: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1263248));
  fn1_9cc20(c);
}

void fn1_134ccc(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039192780));
  /* 134ccc: bti c */
  /* bti: no architectural effect here */
  /* 134cd0: mov w1, #0x10 */
  ARC_W_W(c, 1, UINT64_C(16));
  /* 134cd4: b #0x142608 */
  fn1_142608(c); return;
}

void fn1_137568(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039203176));
  /* 137568: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13756c: stp x29, x30, [sp, #-0x40]! */
  { const uint64_t _pa = ((c)->sp + INT64_C(-64));
    (c)->sp = (c)->sp + INT64_C(-64);
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 137570: stp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 24));
    arc_st64(_pa + 8, ARC_X_R(c, 23));
  }
  /* 137574: stp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 137578: stp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13757c: mov x29, sp */
  ARC_X_W(c, 29, (c)->sp);
  /* 137580: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 137584: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 137588: mov x22, x2 */
  ARC_X_W(c, 22, ARC_X_R(c, 2));
  /* 13758c: ldr x8, [x8, #0xaa8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(2728))));
  /* 137590: mov x21, x1 */
  ARC_X_W(c, 21, ARC_X_R(c, 1));
  /* 137594: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 137598: adrp x24, #0x15d000 */
  ARC_X_W(c, 24, (arc_image_bases[1] + UINT64_C(1429504)));
  /* 13759c: nop  */
  /* nop: no architectural effect here */
  /* 1375a0: adr x23, #0x15dc40 */
  ARC_X_W(c, 23, (arc_image_bases[1] + UINT64_C(1432640)));
  /* 1375a4: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1375a8: str x8, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 8));
  /* 1375ac: nop  */
  /* nop: no architectural effect here */
  /* 1375b0: adr x8, #0x15dd90 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1375b4: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 1375b8: tbz w8, #0, #0x137658 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_137658;
L_1375bc:;
  /* 1375bc: ldr x8, [x24, #0xd88] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 24) + INT64_C(3464))));
  /* 1375c0: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 1375c4: str x8, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 8));
  /* 1375c8: b.eq #0x1375d8 */
  if (ARC_COND(c, 0)) goto L_1375d8;
  /* 1375cc: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 1375d0: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 1375d4: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275352));
  fn1_db2e0(c);
L_1375d8:;
  /* 1375d8: adrp x8, #0x151000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1380352)));
  /* 1375dc: movi v0.2d, #0000000000000000 */
  arc_v_clear(c, 0);
  /* 1375e0: ldr x8, [x8, #0xe40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(3648))));
  /* 1375e4: str wzr, [x20, #0x40] */
  arc_st32((ARC_X_R(c, 20) + INT64_C(64)), ARC_W_R(c, 31));
  /* 1375e8: stp xzr, xzr, [x20, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(80));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 1375ec: add x8, x8, #0x10 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(16)));
  /* 1375f0: str x8, [x20] */
  arc_st64(ARC_X_R(c, 20), ARC_X_R(c, 8));
  /* 1375f4: mov w8, #0x1000 */
  ARC_W_W(c, 8, UINT64_C(4096));
  /* 1375f8: stp q0, q0, [x20, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 1375fc: str q0, [x20, #0x10] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 20) + INT64_C(16)) + 8, (c)->q[0].u64[1]);
  /* 137600: str x8, [x20, #0x48] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(72)), ARC_X_R(c, 8));
  /* 137604: cbz x22, #0x137628 */
  if ((ARC_X_R(c, 22)) == 0) goto L_137628;
  /* 137608: cmp x22, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 22), UINT64_C(0));
  /* 13760c: mov w8, #0x7fffffff */
  ARC_W_W(c, 8, UINT64_C(2147483647));
  /* 137610: csel x0, x8, x22, lt */
  ARC_X_W(c, 0, (ARC_COND(c, 11) ? (ARC_X_R(c, 8)) : ARC_X_R(c, 22)));
  /* 137614: cbz x19, #0x137634 */
  if ((ARC_X_R(c, 19)) == 0) goto L_137634;
L_137618:;
  /* 137618: add x8, x19, x0 */
  ARC_X_W(c, 8, (ARC_X_R(c, 19) + ARC_X_R(c, 0)));
  /* 13761c: stp x19, x19, [x20, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 19));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 137620: str x8, [x20, #0x38] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(56)), ARC_X_R(c, 8));
  /* 137624: b #0x137638 */
  goto L_137638;
L_137628:;
  /* 137628: mov x0, x21 */
  ARC_X_W(c, 0, ARC_X_R(c, 21));
  /* 13762c: bl #0x142860 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275440));
  fn1_142860(c);
  /* 137630: cbnz x19, #0x137618 */
  if ((ARC_X_R(c, 19)) != 0) goto L_137618;
L_137634:;
  /* 137634: add x19, x21, x0 */
  ARC_X_W(c, 19, (ARC_X_R(c, 21) + ARC_X_R(c, 0)));
L_137638:;
  /* 137638: stp x21, x21, [x20, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 20) + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 21));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13763c: str x19, [x20, #0x20] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(32)), ARC_X_R(c, 19));
  /* 137640: ldp x20, x19, [sp, #0x30] */
  { const uint64_t _pa = ((c)->sp + INT64_C(48));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 137644: ldp x22, x21, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 137648: ldp x24, x23, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    ARC_X_W(c, 24, arc_ld64(_pa));
    ARC_X_W(c, 23, arc_ld64(_pa + 8));
  }
  /* 13764c: ldp x29, x30, [sp], #0x40 */
  { const uint64_t _pa = (c)->sp;
    (c)->sp = (c)->sp + INT64_C(64);
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 137650: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 137654: ret  */
  return;
L_137658:;
  /* 137658: nop  */
  /* nop: no architectural effect here */
  /* 13765c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137660: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275492));
  fn1_1424b8(c);
  /* 137664: cbz w0, #0x1375bc */
  if ((ARC_W_R(c, 0)) == 0) goto L_1375bc;
  /* 137668: bl #0x143ac0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275500));
  fn1_143ac0(c);
  /* 13766c: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 137670: cmp x8, x23 */
  (void)arc_sub64(c, ARC_X_R(c, 8), ARC_X_R(c, 23));
  /* 137674: str x8, [x24, #0xd88] */
  arc_st64((ARC_X_R(c, 24) + INT64_C(3464)), ARC_X_R(c, 8));
  /* 137678: b.eq #0x137688 */
  if (ARC_COND(c, 0)) goto L_137688;
  /* 13767c: add x1, x8, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) + UINT64_C(8)));
  /* 137680: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 137684: bl #0xdb2e0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275528));
  fn1_db2e0(c);
L_137688:;
  /* 137688: nop  */
  /* nop: no architectural effect here */
  /* 13768c: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 137690: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275540));
  fn1_1424d0(c);
  /* 137694: b #0x1375bc */
  goto L_1375bc;
  /* 137698: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13769c: nop  */
  /* nop: no architectural effect here */
  /* 1376a0: adr x0, #0x15dd90 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1432976)));
  /* 1376a4: bl #0x1424e8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275560));
  fn1_1424e8(c);
  /* 1376a8: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 1376ac: bl #0xa1454 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1275568));
  fn1_a1454(c);
}

void fn1_13ab10(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039216912));
  /* 13ab10: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 13ab14: sub sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(224)));
  /* 13ab18: stp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 13ab1c: str x23, [sp, #0xb0] */
  arc_st64(((c)->sp + INT64_C(176)), ARC_X_R(c, 23));
  /* 13ab20: stp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    arc_st64(_pa, ARC_X_R(c, 22));
    arc_st64(_pa + 8, ARC_X_R(c, 21));
  }
  /* 13ab24: stp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 13ab28: add x29, sp, #0xa0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(160)));
  /* 13ab2c: adrp x8, #0x51000 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(331776)));
  /* 13ab30: add x8, x8, #0x68 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(104)));
  /* 13ab34: mov x20, x1 */
  ARC_X_W(c, 20, ARC_X_R(c, 1));
  /* 13ab38: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13ab3c: stp x8, x1, [x29, #-0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-32));
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 1));
  }
  /* 13ab40: nop  */
  /* nop: no architectural effect here */
  /* 13ab44: adr x21, #0x156d40 */
  ARC_X_W(c, 21, (arc_image_bases[1] + UINT64_C(1404224)));
  /* 13ab48: nop  */
  /* nop: no architectural effect here */
  /* 13ab4c: adr x8, #0x159210 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13ab50: stp xzr, xzr, [x29, #-0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13ab54: cbz x1, #0x13ab6c */
  if ((ARC_X_R(c, 1)) == 0) goto L_13ab6c;
  /* 13ab58: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 13ab5c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ab60: tbz w8, #0, #0x13af88 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13af88;
L_13ab64:;
  /* 13ab64: str x21, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 21));
  /* 13ab68: b #0x13ab74 */
  goto L_13ab74;
L_13ab6c:;
  /* 13ab6c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ab70: tbz w8, #0, #0x13afa8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13afa8;
L_13ab74:;
  /* 13ab74: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13ab78: mov x23, #0xe38f */
  ARC_X_W(c, 23, UINT64_C(58255));
  /* 13ab7c: mov w11, #0x24 */
  ARC_W_W(c, 11, UINT64_C(36));
  /* 13ab80: movk x23, #0x8e38, lsl #16 */
  ARC_X_W(c, 23, ((ARC_X_R(c, 23) & UINT64_C(18446744069414649855)) | UINT64_C(2386034688)));
  /* 13ab84: mov w12, #0x70 */
  ARC_W_W(c, 12, UINT64_C(112));
  /* 13ab88: ldp x10, x9, [x8, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(32));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 9, arc_ld64(_pa + 8));
  }
  /* 13ab8c: movk x23, #0x38e3, lsl #32 */
  ARC_X_W(c, 23, ((ARC_X_R(c, 23) & UINT64_C(18446462603027808255)) | UINT64_C(62547608731648)));
  /* 13ab90: movk x23, #0xe38e, lsl #48 */
  ARC_X_W(c, 23, ((ARC_X_R(c, 23) & UINT64_C(281474976710655)) | UINT64_C(16397043293302554624)));
  /* 13ab94: add x9, x9, x10 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) + ARC_X_R(c, 10)));
  /* 13ab98: sub x9, x9, #1 */
  ARC_X_W(c, 9, (ARC_X_R(c, 9) - UINT64_C(1)));
  /* 13ab9c: umulh x10, x9, x23 */
  ARC_X_W(c, 10, arc_umulh(ARC_X_R(c, 9), ARC_X_R(c, 23)));
  /* 13aba0: lsr x10, x10, #5 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) >> ((UINT64_C(5)) & 63)));
  /* 13aba4: msub x9, x10, x11, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) - ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 11)))));
  /* 13aba8: ldr x11, [x8, #8] */
  ARC_X_W(c, 11, arc_ld64((ARC_X_R(c, 8) + INT64_C(8))));
  /* 13abac: ldr x10, [x11, x10, lsl #3] */
  ARC_X_W(c, 10, arc_ld64((ARC_X_R(c, 11) + ((uint64_t)(ARC_X_R(c, 10)) << 3))));
  /* 13abb0: stur wzr, [x29, #-0x30] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-48)), ARC_W_R(c, 31));
  /* 13abb4: stur x21, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 21));
  /* 13abb8: nop  */
  /* nop: no architectural effect here */
  /* 13abbc: madd x22, x9, x12, x10 */
  ARC_X_W(c, 22, ((uint64_t)(ARC_X_R(c, 10)) + ((uint64_t)(ARC_X_R(c, 9)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13abc0: ldrb w9, [x8, #0x30] */
  ARC_W_W(c, 9, arc_ld8((ARC_X_R(c, 8) + INT64_C(48))));
  /* 13abc4: ldrb w8, [x22, #0x69] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 22) + INT64_C(105))));
  /* 13abc8: tbnz w9, #0, #0x13ac28 */
  if (((ARC_W_R(c, 9)) >> 0 & 1) != 0) goto L_13ac28;
  /* 13abcc: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 13abd0: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 13abd4: lsl w8, w9, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((ARC_W_R(c, 8)) & 31)));
  /* 13abd8: mov w9, #0x5a */
  ARC_W_W(c, 9, UINT64_C(90));
  /* 13abdc: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 13abe0: b.ne #0x13af6c */
  if (ARC_COND(c, 1)) goto L_13af6c;
  /* 13abe4: mov w9, #0xa4 */
  ARC_W_W(c, 9, UINT64_C(164));
  /* 13abe8: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 13abec: b.eq #0x13aca4 */
  if (ARC_COND(c, 0)) goto L_13aca4;
  /* 13abf0: ldrb w8, [x22, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 22) + INT64_C(104))));
  /* 13abf4: sub w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(255)));
  /* 13abf8: cmn w9, #0xff */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(255), 0);
  /* 13abfc: b.hi #0x13accc */
  if (ARC_COND(c, 8)) goto L_13accc;
  /* 13ac00: nop  */
  /* nop: no architectural effect here */
  /* 13ac04: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ac08: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ac0c: tbz w8, #0, #0x13b014 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13b014;
L_13ac10:;
  /* 13ac10: mov w1, #2 */
  ARC_W_W(c, 1, UINT64_C(2));
  /* 13ac14: nop  */
  /* nop: no architectural effect here */
  /* 13ac18: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13ac1c: stp x1, x8, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13ac20: ldrb w8, [x22, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 22) + INT64_C(104))));
  /* 13ac24: b #0x13acc0 */
  goto L_13acc0;
L_13ac28:;
  /* 13ac28: mov w9, #1 */
  ARC_W_W(c, 9, UINT64_C(1));
  /* 13ac2c: lsl w8, w9, w8 */
  ARC_W_W(c, 8, ((uint32_t)(ARC_W_R(c, 9)) << ((ARC_W_R(c, 8)) & 31)));
  /* 13ac30: mov w9, #0x53 */
  ARC_W_W(c, 9, UINT64_C(83));
  /* 13ac34: tst w8, w9 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & ARC_W_R(c, 9)));
  /* 13ac38: b.eq #0x13ac64 */
  if (ARC_COND(c, 0)) goto L_13ac64;
  /* 13ac3c: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 13ac40: add x0, x22, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(32)));
  /* 13ac44: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ac48: bl #0x144660 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289292));
  fn1_144660(c);
  /* 13ac4c: ldur w9, [x29, #-0x30] */
  ARC_W_W(c, 9, arc_ld32((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13ac50: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13ac54: cbz w9, #0x13accc */
  if ((ARC_W_R(c, 9)) == 0) goto L_13accc;
  /* 13ac58: mov w1, w9 */
  ARC_W_W(c, 1, ARC_W_R(c, 9));
  /* 13ac5c: cbnz w8, #0x13acc4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13acc4;
  /* 13ac60: b #0x13ae38 */
  goto L_13ae38;
L_13ac64:;
  /* 13ac64: ldrb w8, [x22, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 22) + INT64_C(104))));
  /* 13ac68: sub w9, w8, #0xff */
  ARC_W_W(c, 9, (ARC_W_R(c, 8) - UINT64_C(255)));
  /* 13ac6c: cmn w9, #0xff */
  (void)arc_add32(c, ARC_W_R(c, 9), UINT64_C(255), 0);
  /* 13ac70: b.hi #0x13accc */
  if (ARC_COND(c, 8)) goto L_13accc;
  /* 13ac74: nop  */
  /* nop: no architectural effect here */
  /* 13ac78: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ac7c: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ac80: tbz w8, #0, #0x13aff4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13aff4;
L_13ac84:;
  /* 13ac84: mov w9, #2 */
  ARC_W_W(c, 9, UINT64_C(2));
  /* 13ac88: nop  */
  /* nop: no architectural effect here */
  /* 13ac8c: adr x8, #0x156d38 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13ac90: stp x9, x8, [x29, #-0x30] */
  { const uint64_t _pa = (ARC_X_R(c, 29) + INT64_C(-48));
    arc_st64(_pa, ARC_X_R(c, 9));
    arc_st64(_pa + 8, ARC_X_R(c, 8));
  }
  /* 13ac94: ldrb w8, [x22, #0x68] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 22) + INT64_C(104))));
  /* 13ac98: mov w1, w9 */
  ARC_W_W(c, 1, ARC_W_R(c, 9));
  /* 13ac9c: cbnz w8, #0x13acc4 */
  if ((ARC_W_R(c, 8)) != 0) goto L_13acc4;
  /* 13aca0: b #0x13ae38 */
  goto L_13ae38;
L_13aca4:;
  /* 13aca4: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 13aca8: add x0, x22, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 22) + UINT64_C(32)));
  /* 13acac: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13acb0: bl #0x144648 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289396));
  fn1_144648(c);
  /* 13acb4: ldur w1, [x29, #-0x30] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13acb8: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13acbc: cbz w1, #0x13accc */
  if ((ARC_W_R(c, 1)) == 0) goto L_13accc;
L_13acc0:;
  /* 13acc0: cbz w8, #0x13ae38 */
  if ((ARC_W_R(c, 8)) == 0) goto L_13ae38;
L_13acc4:;
  /* 13acc4: stur wzr, [x29, #-0x30] */
  arc_st32((ARC_X_R(c, 29) + INT64_C(-48)), ARC_W_R(c, 31));
  /* 13acc8: stur x21, [x29, #-0x28] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-40)), ARC_X_R(c, 21));
L_13accc:;
  /* 13accc: cmp w8, #2 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(2));
  /* 13acd0: b.ne #0x13af68 */
  if (ARC_COND(c, 1)) goto L_13af68;
  /* 13acd4: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13acd8: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 13acdc: add x1, x22, #0x20 */
  ARC_X_W(c, 1, (ARC_X_R(c, 22) + UINT64_C(32)));
  /* 13ace0: sub x3, x29, #0x30 */
  ARC_X_W(c, 3, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ace4: ldrb w2, [x8, #0x30] */
  ARC_W_W(c, 2, arc_ld8((ARC_X_R(c, 8) + INT64_C(48))));
  /* 13ace8: bl #0x13a384 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289452));
  fn1_13a384(c);
  /* 13acec: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13acf0: cbz x8, #0x13adec */
  if ((ARC_X_R(c, 8)) == 0) goto L_13adec;
  /* 13acf4: ldr x19, [x19] */
  ARC_X_W(c, 19, arc_ld64(ARC_X_R(c, 19)));
  /* 13acf8: mov w12, #0x24 */
  ARC_W_W(c, 12, UINT64_C(36));
  /* 13acfc: mov x13, #-1 */
  ARC_X_W(c, 13, UINT64_C(18446744073709551615));
  /* 13ad00: ldp x9, x10, [x19, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(8));
    ARC_X_W(c, 9, arc_ld64(_pa));
    ARC_X_W(c, 10, arc_ld64(_pa + 8));
  }
  /* 13ad04: subs x11, x10, x9 */
  ARC_X_W(c, 11, arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9)));
  /* 13ad08: asr x11, x11, #3 */
  ARC_X_W(c, 11, ((uint64_t)((int64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(3)) & 63))));
  /* 13ad0c: cmp x10, x9 */
  (void)arc_sub64(c, ARC_X_R(c, 10), ARC_X_R(c, 9));
  /* 13ad10: madd x11, x11, x12, x13 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 13)) + ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13ad14: ldp x12, x13, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    ARC_X_W(c, 12, arc_ld64(_pa));
    ARC_X_W(c, 13, arc_ld64(_pa + 8));
  }
  /* 13ad18: add x10, x13, x12 */
  ARC_X_W(c, 10, (ARC_X_R(c, 13) + ARC_X_R(c, 12)));
  /* 13ad1c: csel x11, xzr, x11, eq */
  ARC_X_W(c, 11, (ARC_COND(c, 0) ? (ARC_X_R(c, 31)) : ARC_X_R(c, 11)));
  /* 13ad20: cmp x11, x10 */
  (void)arc_sub64(c, ARC_X_R(c, 11), ARC_X_R(c, 10));
  /* 13ad24: b.ne #0x13ad40 */
  if (ARC_COND(c, 1)) goto L_13ad40;
  /* 13ad28: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13ad2c: bl #0x13b4b0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289520));
  fn1_13b4b0(c);
  /* 13ad30: ldp x10, x11, [x19, #0x20] */
  { const uint64_t _pa = (ARC_X_R(c, 19) + INT64_C(32));
    ARC_X_W(c, 10, arc_ld64(_pa));
    ARC_X_W(c, 11, arc_ld64(_pa + 8));
  }
  /* 13ad34: ldr x9, [x19, #8] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13ad38: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13ad3c: add x10, x11, x10 */
  ARC_X_W(c, 10, (ARC_X_R(c, 11) + ARC_X_R(c, 10)));
L_13ad40:;
  /* 13ad40: umulh x11, x10, x23 */
  ARC_X_W(c, 11, arc_umulh(ARC_X_R(c, 10), ARC_X_R(c, 23)));
  /* 13ad44: mov w12, #0x24 */
  ARC_W_W(c, 12, UINT64_C(36));
  /* 13ad48: lsr x11, x11, #5 */
  ARC_X_W(c, 11, ((uint64_t)(ARC_X_R(c, 11)) >> ((UINT64_C(5)) & 63)));
  /* 13ad4c: msub x10, x11, x12, x10 */
  ARC_X_W(c, 10, ((uint64_t)(ARC_X_R(c, 10)) - ((uint64_t)(ARC_X_R(c, 11)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13ad50: mov w12, #0x70 */
  ARC_W_W(c, 12, UINT64_C(112));
  /* 13ad54: ldr x9, [x9, x11, lsl #3] */
  ARC_X_W(c, 9, arc_ld64((ARC_X_R(c, 9) + ((uint64_t)(ARC_X_R(c, 11)) << 3))));
  /* 13ad58: nop  */
  /* nop: no architectural effect here */
  /* 13ad5c: madd x9, x10, x12, x9 */
  ARC_X_W(c, 9, ((uint64_t)(ARC_X_R(c, 9)) + ((uint64_t)(ARC_X_R(c, 10)) * (uint64_t)(ARC_X_R(c, 12)))));
  /* 13ad60: str x8, [x9] */
  arc_st64(ARC_X_R(c, 9), ARC_X_R(c, 8));
  /* 13ad64: ldr x8, [sp, #0x18] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13ad68: ldur q0, [sp, #8] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(8))), arc_ld64(((c)->sp + INT64_C(8)) + 8));
  /* 13ad6c: str x8, [x9, #0x18] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(24)), ARC_X_R(c, 8));
  /* 13ad70: stur q0, [x9, #8] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 9) + INT64_C(8)) + 8, (c)->q[0].u64[1]);
  /* 13ad74: ldr q0, [sp, #0x20] */
  arc_q_w(c, 0, arc_ld64(((c)->sp + INT64_C(32))), arc_ld64(((c)->sp + INT64_C(32)) + 8));
  /* 13ad78: ldr x8, [sp, #0x30] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13ad7c: stp xzr, xzr, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13ad80: str xzr, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 31));
  /* 13ad84: str q0, [x9, #0x20] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 9) + INT64_C(32)) + 8, (c)->q[0].u64[1]);
  /* 13ad88: str x8, [x9, #0x30] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(48)), ARC_X_R(c, 8));
  /* 13ad8c: ldp q1, q0, [sp, #0x50] */
  { const uint64_t _pa = ((c)->sp + INT64_C(80));
    arc_q_w(c, 1, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 0, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 13ad90: ldr q2, [sp, #0x40] */
  arc_q_w(c, 2, arc_ld64(((c)->sp + INT64_C(64))), arc_ld64(((c)->sp + INT64_C(64)) + 8));
  /* 13ad94: stp xzr, xzr, [sp, #0x28] */
  { const uint64_t _pa = ((c)->sp + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13ad98: str xzr, [sp, #0x20] */
  arc_st64(((c)->sp + INT64_C(32)), ARC_X_R(c, 31));
  /* 13ad9c: stp q1, q0, [x9, #0x50] */
  { const uint64_t _pa = (ARC_X_R(c, 9) + INT64_C(80));
    arc_st64(_pa, (c)->q[1].u64[0]);
    arc_st64(_pa + 8, (c)->q[1].u64[1]);
    arc_st64((_pa + 16), (c)->q[0].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[0].u64[1]);
  }
  /* 13ada0: str q2, [x9, #0x40] */
  arc_st64((ARC_X_R(c, 9) + INT64_C(64)), (c)->q[2].u64[0]);
  arc_st64((ARC_X_R(c, 9) + INT64_C(64)) + 8, (c)->q[2].u64[1]);
  /* 13ada4: ldr x8, [x19, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 19) + INT64_C(40))));
  /* 13ada8: ldrb w9, [sp, #0x20] */
  ARC_W_W(c, 9, arc_ld8(((c)->sp + INT64_C(32))));
  /* 13adac: str xzr, [sp] */
  arc_st64((c)->sp, ARC_X_R(c, 31));
  /* 13adb0: add x8, x8, #1 */
  ARC_X_W(c, 8, (ARC_X_R(c, 8) + UINT64_C(1)));
  /* 13adb4: str x8, [x19, #0x28] */
  arc_st64((ARC_X_R(c, 19) + INT64_C(40)), ARC_X_R(c, 8));
  /* 13adb8: tbz w9, #0, #0x13adcc */
  if (((ARC_W_R(c, 9)) >> 0 & 1) == 0) goto L_13adcc;
  /* 13adbc: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13adc0: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13adc4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13adc8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289676));
  fn1_142608(c);
L_13adcc:;
  /* 13adcc: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13add0: tbz w8, #0, #0x13ade4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13ade4;
  /* 13add4: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13add8: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13addc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ade0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289700));
  fn1_142608(c);
L_13ade4:;
  /* 13ade4: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13ade8: b #0x13af6c */
  goto L_13af6c;
L_13adec:;
  /* 13adec: ldrb w8, [sp, #0x20] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(32))));
  /* 13adf0: tbnz w8, #0, #0x13ae08 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13ae08;
  /* 13adf4: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13adf8: tbnz w8, #0, #0x13ae20 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13ae20;
L_13adfc:;
  /* 13adfc: ldur w1, [x29, #-0x30] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13ae00: cbnz w1, #0x13ae38 */
  if ((ARC_W_R(c, 1)) != 0) goto L_13ae38;
  /* 13ae04: b #0x13af68 */
  goto L_13af68;
L_13ae08:;
  /* 13ae08: ldr x8, [sp, #0x20] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(32))));
  /* 13ae0c: ldr x0, [sp, #0x30] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(48))));
  /* 13ae10: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ae14: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289752));
  fn1_142608(c);
  /* 13ae18: ldrb w8, [sp, #8] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(8))));
  /* 13ae1c: tbz w8, #0, #0x13adfc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13adfc;
L_13ae20:;
  /* 13ae20: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13ae24: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 13ae28: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13ae2c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289776));
  fn1_142608(c);
  /* 13ae30: ldur w1, [x29, #-0x30] */
  ARC_W_W(c, 1, arc_ld32((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 13ae34: cbz w1, #0x13af68 */
  if ((ARC_W_R(c, 1)) == 0) goto L_13af68;
L_13ae38:;
  /* 13ae38: ldr x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13ae3c: ldrb w23, [x8, #0x30] */
  ARC_W_W(c, 23, arc_ld8((ARC_X_R(c, 8) + INT64_C(48))));
  /* 13ae40: nop  */
  /* nop: no architectural effect here */
  /* 13ae44: adr x8, #0x159208 */
  ARC_X_W(c, 8, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13ae48: ldarb w8, [x8] */
  ARC_W_W(c, 8, arc_ld8(ARC_X_R(c, 8)));
  /* 13ae4c: tbz w8, #0, #0x13afc8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13afc8;
L_13ae50:;
  /* 13ae50: mov w8, #0xd */
  ARC_W_W(c, 8, UINT64_C(13));
  /* 13ae54: nop  */
  /* nop: no architectural effect here */
  /* 13ae58: adr x9, #0x156d38 */
  ARC_X_W(c, 9, (arc_image_bases[1] + UINT64_C(1404216)));
  /* 13ae5c: ldur x0, [x29, #-0x28] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-40))));
  /* 13ae60: stp x8, x9, [sp] */
  { const uint64_t _pa = (c)->sp;
    arc_st64(_pa, ARC_X_R(c, 8));
    arc_st64(_pa + 8, ARC_X_R(c, 9));
  }
  /* 13ae64: mov x2, sp */
  ARC_X_W(c, 2, (c)->sp);
  /* 13ae68: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13ae6c: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13ae70: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289844));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13ae74: tbz w0, #0, #0x13ae84 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13ae84;
  /* 13ae78: mov w0, #1 */
  ARC_W_W(c, 0, UINT64_C(1));
  /* 13ae7c: tbnz w23, #1, #0x13aea0 */
  if (((ARC_W_R(c, 23)) >> 1 & 1) != 0) goto L_13aea0;
  /* 13ae80: b #0x13aeb8 */
  goto L_13aeb8;
L_13ae84:;
  /* 13ae84: ldr x0, [sp, #8] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(8))));
  /* 13ae88: ldr w2, [sp] */
  ARC_W_W(c, 2, arc_ld32((c)->sp));
  /* 13ae8c: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13ae90: ldr x8, [x0] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 0)));
  /* 13ae94: ldr x8, [x8, #0x28] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(40))));
  /* 13ae98: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289884));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13ae9c: tbz w23, #1, #0x13aeb8 */
  if (((ARC_W_R(c, 23)) >> 1 & 1) == 0) goto L_13aeb8;
L_13aea0:;
  /* 13aea0: tbz w0, #0, #0x13aeb8 */
  if (((ARC_W_R(c, 0)) >> 0 & 1) == 0) goto L_13aeb8;
  /* 13aea4: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
  /* 13aea8: cbz x20, #0x13af6c */
  if ((ARC_X_R(c, 20)) == 0) goto L_13af6c;
  /* 13aeac: str wzr, [x20] */
  arc_st32(ARC_X_R(c, 20), ARC_W_R(c, 31));
  /* 13aeb0: str x21, [x20, #8] */
  arc_st64((ARC_X_R(c, 20) + INT64_C(8)), ARC_X_R(c, 21));
  /* 13aeb4: b #0x13af6c */
  goto L_13af6c;
L_13aeb8:;
  /* 13aeb8: ldr x8, [x22, #0x30] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 22) + INT64_C(48))));
  /* 13aebc: ldr q0, [x22, #0x20] */
  arc_q_w(c, 0, arc_ld64((ARC_X_R(c, 22) + INT64_C(32))), arc_ld64((ARC_X_R(c, 22) + INT64_C(32)) + 8));
  /* 13aec0: str x8, [sp, #0x10] */
  arc_st64(((c)->sp + INT64_C(16)), ARC_X_R(c, 8));
  /* 13aec4: str q0, [sp] */
  arc_st64((c)->sp, (c)->q[0].u64[0]);
  arc_st64((c)->sp + 8, (c)->q[0].u64[1]);
  /* 13aec8: stp xzr, xzr, [x22, #0x28] */
  { const uint64_t _pa = (ARC_X_R(c, 22) + INT64_C(40));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13aecc: str xzr, [x22, #0x20] */
  arc_st64((ARC_X_R(c, 22) + INT64_C(32)), ARC_X_R(c, 31));
  /* 13aed0: ldr x20, [x19, #8] */
  ARC_X_W(c, 20, arc_ld64((ARC_X_R(c, 19) + INT64_C(8))));
  /* 13aed4: stp xzr, xzr, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 13aed8: cbz x20, #0x13af28 */
  if ((ARC_X_R(c, 20)) == 0) goto L_13af28;
  /* 13aedc: add x1, x20, #8 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(8)));
  /* 13aee0: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13aee4: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289960));
  fn1_bd950(c);
  /* 13aee8: cbnz x0, #0x13af28 */
  if ((ARC_X_R(c, 0)) != 0) goto L_13af28;
  /* 13aeec: mov x19, x20 */
  ARC_X_W(c, 19, ARC_X_R(c, 20));
  /* 13aef0: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13aef4: ldr x8, [x19], #0x10 */
  { const uint64_t _a = ARC_X_R(c, 19);
    ARC_X_W(c, 19, ARC_X_R(c, 19) + INT64_C(16));
    ARC_X_W(c, 8, arc_ld64(_a));
  }
  /* 13aef8: ldr x8, [x8, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(16))));
  /* 13aefc: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1289984));
  arc_dispatch(c, ARC_X_R(c, 8));
  /* 13af00: ldar x8, [x19] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 19)));
  /* 13af04: cbz x8, #0x13af18 */
  if ((ARC_X_R(c, 8)) == 0) goto L_13af18;
  /* 13af08: add x1, x20, #0x10 */
  ARC_X_W(c, 1, (ARC_X_R(c, 20) + UINT64_C(16)));
  /* 13af0c: mov x0, #-1 */
  ARC_X_W(c, 0, UINT64_C(18446744073709551615));
  /* 13af10: bl #0xbd950 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290004));
  fn1_bd950(c);
  /* 13af14: cbnz x0, #0x13af28 */
  if ((ARC_X_R(c, 0)) != 0) goto L_13af28;
L_13af18:;
  /* 13af18: ldr x8, [x20] */
  ARC_X_W(c, 8, arc_ld64(ARC_X_R(c, 20)));
  /* 13af1c: mov x0, x20 */
  ARC_X_W(c, 0, ARC_X_R(c, 20));
  /* 13af20: ldr x8, [x8, #0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 8) + INT64_C(32))));
  /* 13af24: blr x8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290024));
  arc_dispatch(c, ARC_X_R(c, 8));
L_13af28:;
  /* 13af28: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13af2c: ldr x9, [sp, #0x10] */
  ARC_X_W(c, 9, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13af30: tst w8, #1 */
  arc_flags_logical32(c, (uint32_t)(ARC_W_R(c, 8) & UINT64_C(1)));
  /* 13af34: mov x8, sp */
  ARC_X_W(c, 8, (c)->sp);
  /* 13af38: csinc x3, x9, x8, ne */
  ARC_X_W(c, 3, (ARC_COND(c, 1) ? (ARC_X_R(c, 9)) : ((ARC_X_R(c, 8)) + 1)));
  /* 13af3c: adrp x2, #0x50000 */
  ARC_X_W(c, 2, (arc_image_bases[1] + UINT64_C(327680)));
  /* 13af40: add x2, x2, #0xbbc */
  ARC_X_W(c, 2, (ARC_X_R(c, 2) + UINT64_C(3004)));
  /* 13af44: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 13af48: sub x1, x29, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 29) - UINT64_C(48)));
  /* 13af4c: bl #0x138aa8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290064));
  fn1_138aa8(c);
  /* 13af50: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13af54: tbz w8, #0, #0x13af68 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_13af68;
  /* 13af58: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13af5c: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13af60: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13af64: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290088));
  fn1_142608(c);
L_13af68:;
  /* 13af68: mov w0, wzr */
  ARC_W_W(c, 0, ARC_W_R(c, 31));
L_13af6c:;
  /* 13af6c: ldp x20, x19, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 13af70: ldr x23, [sp, #0xb0] */
  ARC_X_W(c, 23, arc_ld64(((c)->sp + INT64_C(176))));
  /* 13af74: ldp x22, x21, [sp, #0xc0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(192));
    ARC_X_W(c, 22, arc_ld64(_pa));
    ARC_X_W(c, 21, arc_ld64(_pa + 8));
  }
  /* 13af78: ldp x29, x30, [sp, #0xa0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(160));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 13af7c: add sp, sp, #0xe0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(224)));
  /* 13af80: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 13af84: ret  */
  return;
L_13af88:;
  /* 13af88: nop  */
  /* nop: no architectural effect here */
  /* 13af8c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13af90: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290132));
  fn1_1424b8(c);
  /* 13af94: cbz w0, #0x13ab64 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ab64;
  /* 13af98: nop  */
  /* nop: no architectural effect here */
  /* 13af9c: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13afa0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290148));
  fn1_1424d0(c);
  /* 13afa4: b #0x13ab64 */
  goto L_13ab64;
L_13afa8:;
  /* 13afa8: nop  */
  /* nop: no architectural effect here */
  /* 13afac: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13afb0: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290164));
  fn1_1424b8(c);
  /* 13afb4: cbz w0, #0x13ab74 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ab74;
  /* 13afb8: nop  */
  /* nop: no architectural effect here */
  /* 13afbc: adr x0, #0x159210 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413648)));
  /* 13afc0: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290180));
  fn1_1424d0(c);
  /* 13afc4: b #0x13ab74 */
  goto L_13ab74;
L_13afc8:;
  /* 13afc8: nop  */
  /* nop: no architectural effect here */
  /* 13afcc: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13afd0: str x1, [x29, #0x18] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(24)), ARC_X_R(c, 1));
  /* 13afd4: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290200));
  fn1_1424b8(c);
  /* 13afd8: ldr x1, [x29, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13afdc: cbz w0, #0x13ae50 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ae50;
  /* 13afe0: nop  */
  /* nop: no architectural effect here */
  /* 13afe4: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13afe8: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290220));
  fn1_1424d0(c);
  /* 13afec: ldr x1, [x29, #0x18] */
  ARC_X_W(c, 1, arc_ld64((ARC_X_R(c, 29) + INT64_C(24))));
  /* 13aff0: b #0x13ae50 */
  goto L_13ae50;
L_13aff4:;
  /* 13aff4: nop  */
  /* nop: no architectural effect here */
  /* 13aff8: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13affc: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290240));
  fn1_1424b8(c);
  /* 13b000: cbz w0, #0x13ac84 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ac84;
  /* 13b004: nop  */
  /* nop: no architectural effect here */
  /* 13b008: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13b00c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290256));
  fn1_1424d0(c);
  /* 13b010: b #0x13ac84 */
  goto L_13ac84;
L_13b014:;
  /* 13b014: nop  */
  /* nop: no architectural effect here */
  /* 13b018: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13b01c: bl #0x1424b8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290272));
  fn1_1424b8(c);
  /* 13b020: cbz w0, #0x13ac10 */
  if ((ARC_W_R(c, 0)) == 0) goto L_13ac10;
  /* 13b024: nop  */
  /* nop: no architectural effect here */
  /* 13b028: adr x0, #0x159208 */
  ARC_X_W(c, 0, (arc_image_bases[1] + UINT64_C(1413640)));
  /* 13b02c: bl #0x1424d0 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290288));
  fn1_1424d0(c);
  /* 13b030: b #0x13ac10 */
  goto L_13ac10;
  /* 13b034: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b038: mov x0, sp */
  ARC_X_W(c, 0, (c)->sp);
  /* 13b03c: bl #0x13a560 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290304));
  fn1_13a560(c);
  /* 13b040: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b044: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290312));
  fn1_9cc20(c);
  /* 13b048: ldrb w8, [sp] */
  ARC_W_W(c, 8, arc_ld8((c)->sp));
  /* 13b04c: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 13b050: tbnz w8, #0, #0x13b05c */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_13b05c;
  /* 13b054: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b058: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290332));
  fn1_9cc20(c);
L_13b05c:;
  /* 13b05c: ldr x8, [sp] */
  ARC_X_W(c, 8, arc_ld64((c)->sp));
  /* 13b060: ldr x0, [sp, #0x10] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(16))));
  /* 13b064: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 13b068: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290348));
  fn1_142608(c);
  /* 13b06c: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 13b070: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1290356));
  fn1_9cc20(c);
}

void fn1_141ec8(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039246536));
  /* 141ec8: paciasp  */
  /* paciasp: pointer authentication is identity when lifted */
  /* 141ecc: sub sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp - UINT64_C(240)));
  /* 141ed0: stp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    arc_st64(_pa, ARC_X_R(c, 29));
    arc_st64(_pa + 8, ARC_X_R(c, 30));
  }
  /* 141ed4: stp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    arc_st64(_pa, ARC_X_R(c, 20));
    arc_st64(_pa + 8, ARC_X_R(c, 19));
  }
  /* 141ed8: add x29, sp, #0xd0 */
  ARC_X_W(c, 29, ((c)->sp + UINT64_C(208)));
  /* 141edc: ldr x8, [x0, #8] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(8))));
  /* 141ee0: cbz x8, #0x141f00 */
  if ((ARC_X_R(c, 8)) == 0) goto L_141f00;
  /* 141ee4: ldr q0, [x1] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 1)), arc_ld64(ARC_X_R(c, 1) + 8));
  /* 141ee8: str q0, [x8] */
  arc_st64(ARC_X_R(c, 8), (c)->q[0].u64[0]);
  arc_st64(ARC_X_R(c, 8) + 8, (c)->q[0].u64[1]);
  /* 141eec: ldp x20, x19, [sp, #0xe0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(224));
    ARC_X_W(c, 20, arc_ld64(_pa));
    ARC_X_W(c, 19, arc_ld64(_pa + 8));
  }
  /* 141ef0: ldp x29, x30, [sp, #0xd0] */
  { const uint64_t _pa = ((c)->sp + INT64_C(208));
    ARC_X_W(c, 29, arc_ld64(_pa));
    ARC_X_W(c, 30, arc_ld64(_pa + 8));
  }
  /* 141ef4: add sp, sp, #0xf0 */
  (c)->sp = (uint64_t)(((c)->sp + UINT64_C(240)));
  /* 141ef8: autiasp  */
  /* autiasp: pointer authentication is identity when lifted */
  /* 141efc: ret  */
  return;
L_141f00:;
  /* 141f00: stp x1, x2, [sp, #0x10] */
  { const uint64_t _pa = ((c)->sp + INT64_C(16));
    arc_st64(_pa, ARC_X_R(c, 1));
    arc_st64(_pa + 8, ARC_X_R(c, 2));
  }
  /* 141f04: adrp x1, #0x51000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(331776)));
  /* 141f08: add x1, x1, #0x597 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(1431)));
  /* 141f0c: mov x20, x0 */
  ARC_X_W(c, 20, ARC_X_R(c, 0));
  /* 141f10: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 141f14: mov x19, x3 */
  ARC_X_W(c, 19, ARC_X_R(c, 3));
  /* 141f18: bl #0x11dda8 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318684));
  fn1_11dda8(c);
  /* 141f1c: ldr x1, [x20] */
  ARC_X_W(c, 1, arc_ld64(ARC_X_R(c, 20)));
  /* 141f20: str x20, [sp, #8] */
  arc_st64(((c)->sp + INT64_C(8)), ARC_X_R(c, 20));
  /* 141f24: add x0, sp, #0x58 */
  ARC_X_W(c, 0, ((c)->sp + UINT64_C(88)));
  /* 141f28: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318700));
  fn1_142b78(c);
  /* 141f2c: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 141f30: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 141f34: stur x8, [x29, #-0x50] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-80)), ARC_X_R(c, 8));
  /* 141f38: stur q0, [x29, #-0x60] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-96)) + 8, (c)->q[0].u64[1]);
  /* 141f3c: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 141f40: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 141f44: adrp x1, #0x52000 */
  ARC_X_W(c, 1, (arc_image_bases[1] + UINT64_C(335872)));
  /* 141f48: add x1, x1, #0x30 */
  ARC_X_W(c, 1, (ARC_X_R(c, 1) + UINT64_C(48)));
  /* 141f4c: sub x0, x29, #0x60 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(96)));
  /* 141f50: bl #0x142b78 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318740));
  fn1_142b78(c);
  /* 141f54: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 141f58: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 141f5c: stur x8, [x29, #-0x30] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-48)), ARC_X_R(c, 8));
  /* 141f60: stur q0, [x29, #-0x40] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-64)) + 8, (c)->q[0].u64[1]);
  /* 141f64: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 141f68: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 141f6c: ldp q0, q1, [x19] */
  { const uint64_t _pa = ARC_X_R(c, 19);
    arc_q_w(c, 0, arc_ld64(_pa), arc_ld64(_pa + 8));
    arc_q_w(c, 1, arc_ld64((_pa + 16)), arc_ld64((_pa + 16) + 8));
  }
  /* 141f70: stp q0, q1, [sp, #0x20] */
  { const uint64_t _pa = ((c)->sp + INT64_C(32));
    arc_st64(_pa, (c)->q[0].u64[0]);
    arc_st64(_pa + 8, (c)->q[0].u64[1]);
    arc_st64((_pa + 16), (c)->q[1].u64[0]);
    arc_st64((_pa + 16) + 8, (c)->q[1].u64[1]);
  }
  /* 141f74: ldr x0, [sp, #0x18] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(24))));
  /* 141f78: add x8, sp, #0x40 */
  ARC_X_W(c, 8, ((c)->sp + UINT64_C(64)));
  /* 141f7c: add x1, sp, #0x20 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(32)));
  /* 141f80: bl #0xd7b2c */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318788));
  fn1_d7b2c(c);
  /* 141f84: sub x0, x29, #0x40 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(64)));
  /* 141f88: add x1, sp, #0x40 */
  ARC_X_W(c, 1, ((c)->sp + UINT64_C(64)));
  /* 141f8c: bl #0xd8234 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318800));
  fn1_d8234(c);
  /* 141f90: ldr x8, [x0, #0x10] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 0) + INT64_C(16))));
  /* 141f94: ldr q0, [x0] */
  arc_q_w(c, 0, arc_ld64(ARC_X_R(c, 0)), arc_ld64(ARC_X_R(c, 0) + 8));
  /* 141f98: stur x8, [x29, #-0x10] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-16)), ARC_X_R(c, 8));
  /* 141f9c: stur q0, [x29, #-0x20] */
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)), (c)->q[0].u64[0]);
  arc_st64((ARC_X_R(c, 29) + INT64_C(-32)) + 8, (c)->q[0].u64[1]);
  /* 141fa0: stp xzr, xzr, [x0, #8] */
  { const uint64_t _pa = (ARC_X_R(c, 0) + INT64_C(8));
    arc_st64(_pa, ARC_X_R(c, 31));
    arc_st64(_pa + 8, ARC_X_R(c, 31));
  }
  /* 141fa4: str xzr, [x0] */
  arc_st64(ARC_X_R(c, 0), ARC_X_R(c, 31));
  /* 141fa8: ldrb w8, [sp, #0x40] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(64))));
  /* 141fac: tbnz w8, #0, #0x142008 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_142008;
  /* 141fb0: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 141fb4: tbnz w8, #0, #0x142020 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_142020;
L_141fb8:;
  /* 141fb8: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 141fbc: tbnz w8, #0, #0x142038 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_142038;
L_141fc0:;
  /* 141fc0: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 141fc4: tbz w8, #0, #0x141fd8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141fd8;
L_141fc8:;
  /* 141fc8: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
  /* 141fcc: ldr x0, [sp, #0x68] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(104))));
  /* 141fd0: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 141fd4: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318872));
  fn1_142608(c);
L_141fd8:;
  /* 141fd8: ldr x8, [sp, #8] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(8))));
  /* 141fdc: ldp x1, x2, [x8, #0x10] */
  { const uint64_t _pa = (ARC_X_R(c, 8) + INT64_C(16));
    ARC_X_W(c, 1, arc_ld64(_pa));
    ARC_X_W(c, 2, arc_ld64(_pa + 8));
  }
  /* 141fe0: cmp x1, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 1), UINT64_C(0));
  /* 141fe4: cset w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? 1 : 0));
  /* 141fe8: cmp x2, #0 */
  (void)arc_sub64(c, ARC_X_R(c, 2), UINT64_C(0));
  /* 141fec: cinc w8, w8, ne */
  ARC_W_W(c, 8, (ARC_COND(c, 1) ? (ARC_W_R(c, 8)) + 1 : (ARC_W_R(c, 8))));
  /* 141ff0: cbz w8, #0x142054 */
  if ((ARC_W_R(c, 8)) == 0) goto L_142054;
  /* 141ff4: cmp w8, #1 */
  (void)arc_sub32(c, ARC_W_R(c, 8), UINT64_C(1));
  /* 141ff8: b.ne #0x142060 */
  if (ARC_COND(c, 1)) goto L_142060;
  /* 141ffc: ldr x2, [sp, #0x10] */
  ARC_X_W(c, 2, arc_ld64(((c)->sp + INT64_C(16))));
  /* 142000: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 142004: bl #0x138e98 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318920));
  fn1_138e98(c);
L_142008:;
  /* 142008: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 14200c: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 142010: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 142014: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318936));
  fn1_142608(c);
  /* 142018: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 14201c: tbz w8, #0, #0x141fb8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141fb8;
L_142020:;
  /* 142020: ldur x8, [x29, #-0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 142024: ldur x0, [x29, #-0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 142028: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 14202c: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318960));
  fn1_142608(c);
  /* 142030: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 142034: tbz w8, #0, #0x141fc0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_141fc0;
L_142038:;
  /* 142038: ldur x8, [x29, #-0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 14203c: ldur x0, [x29, #-0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 142040: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 142044: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1318984));
  fn1_142608(c);
  /* 142048: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 14204c: tbnz w8, #0, #0x141fc8 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_141fc8;
  /* 142050: b #0x141fd8 */
  goto L_141fd8;
L_142054:;
  /* 142054: ldr x1, [sp, #0x10] */
  ARC_X_W(c, 1, arc_ld64(((c)->sp + INT64_C(16))));
  /* 142058: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 14205c: bl #0x138db4 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319008));
  fn1_138db4(c);
L_142060:;
  /* 142060: ldr x3, [sp, #0x10] */
  ARC_X_W(c, 3, arc_ld64(((c)->sp + INT64_C(16))));
  /* 142064: sub x0, x29, #0x20 */
  ARC_X_W(c, 0, (ARC_X_R(c, 29) - UINT64_C(32)));
  /* 142068: bl #0x138f84 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319020));
  fn1_138f84(c);
  /* 14206c: ldurb w8, [x29, #-0x20] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 142070: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 142074: tbz w8, #0, #0x142134 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_142134;
  /* 142078: ldur x0, [x29, #-0x10] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-16))));
  /* 14207c: ldur x8, [x29, #-0x20] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-32))));
  /* 142080: b #0x14212c */
  goto L_14212c;
  /* 142084: ldrb w8, [sp, #0x40] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(64))));
  /* 142088: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 14208c: tbnz w8, #0, #0x1420ac */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1420ac;
  /* 142090: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 142094: tbnz w8, #0, #0x1420d4 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1420d4;
L_142098:;
  /* 142098: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 14209c: tbnz w8, #0, #0x1420fc */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_1420fc;
L_1420a0:;
  /* 1420a0: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 1420a4: tbnz w8, #0, #0x142124 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_142124;
  /* 1420a8: b #0x142134 */
  goto L_142134;
L_1420ac:;
  /* 1420ac: ldr x8, [sp, #0x40] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(64))));
  /* 1420b0: ldr x0, [sp, #0x50] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(80))));
  /* 1420b4: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1420b8: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319100));
  fn1_142608(c);
  /* 1420bc: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1420c0: tbz w8, #0, #0x142098 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_142098;
  /* 1420c4: b #0x1420d4 */
  goto L_1420d4;
  /* 1420c8: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1420cc: ldurb w8, [x29, #-0x40] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1420d0: tbz w8, #0, #0x142098 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_142098;
L_1420d4:;
  /* 1420d4: ldur x8, [x29, #-0x40] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-64))));
  /* 1420d8: ldur x0, [x29, #-0x30] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-48))));
  /* 1420dc: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 1420e0: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319140));
  fn1_142608(c);
  /* 1420e4: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 1420e8: tbz w8, #0, #0x1420a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1420a0;
  /* 1420ec: b #0x1420fc */
  goto L_1420fc;
  /* 1420f0: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 1420f4: ldurb w8, [x29, #-0x60] */
  ARC_W_W(c, 8, arc_ld8((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 1420f8: tbz w8, #0, #0x1420a0 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_1420a0;
L_1420fc:;
  /* 1420fc: ldur x8, [x29, #-0x60] */
  ARC_X_W(c, 8, arc_ld64((ARC_X_R(c, 29) + INT64_C(-96))));
  /* 142100: ldur x0, [x29, #-0x50] */
  ARC_X_W(c, 0, arc_ld64((ARC_X_R(c, 29) + INT64_C(-80))));
  /* 142104: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 142108: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319180));
  fn1_142608(c);
  /* 14210c: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 142110: tbnz w8, #0, #0x142124 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) != 0) goto L_142124;
  /* 142114: b #0x142134 */
  goto L_142134;
  /* 142118: mov x19, x0 */
  ARC_X_W(c, 19, ARC_X_R(c, 0));
  /* 14211c: ldrb w8, [sp, #0x58] */
  ARC_W_W(c, 8, arc_ld8(((c)->sp + INT64_C(88))));
  /* 142120: tbz w8, #0, #0x142134 */
  if (((ARC_W_R(c, 8)) >> 0 & 1) == 0) goto L_142134;
L_142124:;
  /* 142124: ldr x0, [sp, #0x68] */
  ARC_X_W(c, 0, arc_ld64(((c)->sp + INT64_C(104))));
  /* 142128: ldr x8, [sp, #0x58] */
  ARC_X_W(c, 8, arc_ld64(((c)->sp + INT64_C(88))));
L_14212c:;
  /* 14212c: and x1, x8, #0xfffffffffffffffe */
  ARC_X_W(c, 1, (ARC_X_R(c, 8) & UINT64_C(18446744073709551614)));
  /* 142130: bl #0x142608 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319220));
  fn1_142608(c);
L_142134:;
  /* 142134: mov x0, x19 */
  ARC_X_W(c, 0, ARC_X_R(c, 19));
  /* 142138: bl #0x9cc20 */
  ARC_X_W(c, 30, arc_image_bases[1] + UINT64_C(1319228));
  fn1_9cc20(c);
}

void fn1_142920(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039249184));
  /* 142920: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142924: ldr x17, [x16, #0x40] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(64))));
  /* 142928: add x16, x16, #0x40 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(64)));
  /* 14292c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142930: nop  */
  /* nop: no architectural effect here */
  /* 142934: nop  */
  /* nop: no architectural effect here */
}

void fn1_142f20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039250720));
  /* 142f20: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 142f24: ldr x17, [x16, #0x240] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(576))));
  /* 142f28: add x16, x16, #0x240 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(576)));
  /* 142f2c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 142f30: nop  */
  /* nop: no architectural effect here */
  /* 142f34: nop  */
  /* nop: no architectural effect here */
}

void fn1_143520(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039252256));
  /* 143520: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143524: ldr x17, [x16, #0x440] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1088))));
  /* 143528: add x16, x16, #0x440 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1088)));
  /* 14352c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143530: nop  */
  /* nop: no architectural effect here */
  /* 143534: nop  */
  /* nop: no architectural effect here */
}

void fn1_143b20(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039253792));
  /* 143b20: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 143b24: ldr x17, [x16, #0x640] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(1600))));
  /* 143b28: add x16, x16, #0x640 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(1600)));
  /* 143b2c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 143b30: nop  */
  /* nop: no architectural effect here */
  /* 143b34: nop  */
  /* nop: no architectural effect here */
}

void fn1_144120(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039255328));
  /* 144120: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144124: ldr x17, [x16, #0x840] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2112))));
  /* 144128: add x16, x16, #0x840 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2112)));
  /* 14412c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144130: nop  */
  /* nop: no architectural effect here */
  /* 144134: nop  */
  /* nop: no architectural effect here */
}

void fn1_144720(Arm64Ctx* c) {
  arc_frame_note(UINT64_C(72057594039256864));
  /* 144720: adrp x16, #0x152000 */
  ARC_X_W(c, 16, (arc_image_bases[1] + UINT64_C(1384448)));
  /* 144724: ldr x17, [x16, #0xa40] */
  ARC_X_W(c, 17, arc_ld64((ARC_X_R(c, 16) + INT64_C(2624))));
  /* 144728: add x16, x16, #0xa40 */
  ARC_X_W(c, 16, (ARC_X_R(c, 16) + UINT64_C(2624)));
  /* 14472c: br x17 */
  arc_dispatch(c, ARC_X_R(c, 17)); return;
  /* 144730: nop  */
  /* nop: no architectural effect here */
  /* 144734: nop  */
  /* nop: no architectural effect here */
}

